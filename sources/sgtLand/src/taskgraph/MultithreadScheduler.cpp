#include "taskgraph/MultithreadScheduler.h"

#include "pmath.h"
#include <time.h>
#include <fstream>

#include "core/Timer.h"
#include "taskgraph/TaskGraph.h"

#ifdef _WIN32
#include <sys/types.h>
#include <sys/timeb.h>
#include <windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

// if defined, prefecth threads work only on tasks for future frames
// otherwise they can also execute tasks for the current frame, in parallel
// with main thread
#define STRICT_PREFETCH

// if defined, use _ftime to get current time on Win32
// otherwise use GetSystemTime + SystemTimeToFileTime on Win32
// in any case, on Linux, clock_gettime is used
#define USE_FTIME

// if defined, use busy waiting to get the desired framerate frameRate
// (more precise than using Sleep and pthread_cond_timedwait)
//#define BUSY_WAITING

#if !defined(HAVE_STRUCT_TIMESPEC)
#define HAVE_STRUCT_TIMESPEC
#if !defined(_TIMESPEC_DEFINED)
#define _TIMESPEC_DEFINED
struct timespec {
	time_t tv_sec;
	long tv_nsec;
};
#endif /* _TIMESPEC_DEFINED */
#endif /* HAVE_STRUCT_TIMESPEC */

/**
 * Returns the current time.
 *
 * @param[out] ts the returned time.
 */
static void getAbsoluteTime(timespec &ts)
{
#ifdef _WIN32
#ifdef USE_FTIME
    _timeb t;
#ifdef _MSC_VER
    _ftime64_s(&t);
#else
    _ftime(&t);
#endif
    ts.tv_sec = (long)t.time;
    ts.tv_nsec = (long)(t.millitm * 1000000);
#else
    FILETIME ft;
    SYSTEMTIME st;
    GetSystemTime(&st);
    SystemTimeToFileTime(&st, &ft);
#define OFFSET ( ((LONGLONG) 27111902 << 32) + (LONGLONG) 3577643008 )
    ts.tv_sec = (int) ((*(LONGLONG *) (&ft) - OFFSET) / 10000000);
    ts.tv_nsec = (int) ((*(LONGLONG *) (&ft) - OFFSET - ((LONGLONG) ts.tv_sec * (LONGLONG) 10000000)) * 100);
#endif
#else
    clock_gettime(CLOCK_REALTIME, &ts);
#endif
}

namespace sgt
{

bool MultithreadScheduler::taskKeySort::operator()(const taskKey &x, const taskKey &y) const
{
    unsigned int xDeadline = x.first;
    unsigned int yDeadline = y.first;
    if (xDeadline == yDeadline) {
        void* xCtxt = x.second;
        void* yCtxt = y.second;
        return xCtxt < yCtxt;
    } else {
        return xDeadline < yDeadline;
    }
}

bool MultithreadScheduler::taskSort::operator()(const sgtPtr<Task> x, const sgtPtr<Task> y) const
{
    int xDuration = int(x->getExpectedDuration());
    int yDuration = int(y->getExpectedDuration());
    if (xDuration == yDuration) {
        return x.get() < y.get();
    } else {
        return xDuration < yDuration;
    }
}

MultithreadScheduler::MultithreadScheduler(int prefetchRate, int prefetchQueue, float frameRate, int nThreads) :
        Scheduler("MultithreadScheduler")
{
    init(prefetchRate, prefetchQueue, frameRate, nThreads);
}

class WorkerThread : public OpenThreads::Thread {
public:
	WorkerThread(MultithreadScheduler* sch) : _scheduler(sch) {};

	virtual void run() {
		CHECK(_scheduler,"Invalid scheduler pointer.");
		logINFO("Entering worker thread loop...");
		_scheduler->schedulerThread();
		logINFO("Exiting worker thread loop.");
	}

protected:
	MultithreadScheduler* _scheduler;
};

void MultithreadScheduler::init(int prefetchRate, int prefetchQueue, float frameRate, int nThreads)
{
    this->prefetchRate = prefetchRate;
    this->prefetchQueueSize = prefetchQueue;
    framePeriod = frameRate == 0.0f ? 0.0f : 1e6f / frameRate;
    if (prefetchRate > 0 || frameRate > 0.0f) {
        assert(prefetchQueueSize > 0);
    }
    lastFrame = 0;
    time = 2;
    stop = false;
    for (int i = 0; i < nThreads; ++i) {
		OpenThreads::Thread* thread = new WorkerThread(this);
		thread->start();
        threads.push_back(thread);
    }

	bufferedStatistics = NULL;
    bufferedFrames = 0;
    statisticsFile = NULL;
}

MultithreadScheduler::~MultithreadScheduler()
{
    // we first set the #stop flag to true and signals execution threads to wake
    // them up if they were waiting for tasks to execute; they will then
    // eventually terminate
	{
		OpenThreads::ScopedLock<OpenThreads::Mutex> lock(mutex);
		stop = true;
		cpuTasksCond.broadcast();
	}

    // we then wait until all threads terminate, and we delete them
    for (unsigned int i = 0; i < threads.size(); ++i) {
		int res = threads[i]->join();
		CHECK(res==0,"Invalid result when stopping worker thread.");
        delete threads[i];
    }

    // we can then delete the mutex and the conditions
    threads.clear();
    if (bufferedFrames > 0) {
        clearBufferedFrames();
    }
    if (statisticsFile != NULL) {
        fclose(statisticsFile);
    }
}

bool MultithreadScheduler::supportsPrefetch(bool gpuTasks)
{
    if (prefetchRate > 0 || framePeriod > 0.0f || (threads.size() > 0 && !gpuTasks)) {
        if (gpuTasks || threads.empty()) {
            return prefetchQueue.size() < prefetchQueueSize;
        }
        return true;
    }
    return false;
}

void MultithreadScheduler::schedule(Task* task)
{
    TaskSet initialized;
    task->init(initialized);
    OpenThreads::ScopedLock<OpenThreads::Mutex> lock(mutex);

    bool noCpuTasks = readyCpuTasks.empty();
    TaskSet addedTasks;
    addFlattenedTask(task, addedTasks);
    allTasksCond.broadcast();
    if (noCpuTasks && !readyCpuTasks.empty()) {
        // if there was no ready CPU tasks before this method was called,
        // and there are now some ready CPU tasks, signals this to the execution
        // threads that may be waiting for tasks to execute.
        cpuTasksCond.broadcast();
    }
    assert(allReadyTasks.size() > 0);
}

void MultithreadScheduler::reschedule(Task* task, Task::reason r, unsigned int deadline)
{
    OpenThreads::ScopedLock<OpenThreads::Mutex> lock(mutex);
    task->setIsDone(false, 0, r);
    if (r == Task::DATA_NEEDED) {
        TaskSet visited;
        setDeadline(task, deadline, visited);
    }
}

void MultithreadScheduler::run(Task* task)
{
    Timer timer;
    timer.start();
    schedule(task);
    double schedule = timer.end();

    trDEBUG("MultiThreadScheduler", "START tasks: " << immediateTasks.size() << " immediate, "
		<< allReadyTasks.size() << " ready, "
		<< readyCpuTasks.size() << " ready cpu; "
		<< dependencies.size() << " + " << inverseDependencies.size() << " dependencies");

    int run = 0; // number of executed tasks
    int prefetched = 0; // number of prefetching tasks executed
    int contextSwitches = 0; // number of context switches performed
    sgtPtr<Task> previousGpuTask = NULL; // last GPU task executed

    double deadline = 0.0; // deadline for the end of this method
    timespec deadlinespec; // same, in timespec format

    if (monitoredTasks.size() > 0) {
        frameStatistics.clear();
        for (unsigned int i = 0; i < monitoredTasks.size(); ++i) {
            frameStatistics.insert(make_pair(monitoredTasks[i], make_pair(0, 0.0f)));
        }
        if (bufferedStatistics == NULL) {
            bufferedStatistics = new float[(2 * monitoredTasks.size() + 2) * 1000];
        }
    }

    if (framePeriod > 0.0) {
        // if we have a fixed framerate, we compute the deadline for the end
        // of this method; this is the time at the end of the last call to this
        // method, plus the delay for one frame (minus a small margin)
        deadline = lastFrame + framePeriod - 1000.0;
        // subtrating the current time gives the time interval for this methd
        double delay = deadline - timer.start();
        // we use it to compute the deadline in timespec format
        getAbsoluteTime(deadlinespec);
        deadlinespec.tv_nsec += int(delay * 1000);
        if (deadlinespec.tv_nsec > 1000000000) {
            deadlinespec.tv_sec += deadlinespec.tv_nsec / 1000000000;
            deadlinespec.tv_nsec = deadlinespec.tv_nsec % 1000000000;
        }
    }

    // we loop to execute all required tasks
    while (true) {
        // first step: find or wait for a task ready to be executed
        sgtPtr<Task> t = NULL;
        mutex.lock();
        if (immediateTasks.empty() && framePeriod > 0.0) {
            // if the tasks for the current frame are completed, and if we have
            // a fixed framerate, we can use the time until the deadline to
            // execute some tasks for next few frames
#ifdef BUSY_WAITING
            while (allReadyTasks.empty() && timer.start() < deadline) {
                // so we wait for a ready CPU or GPU task,
                // and stop when the deadline is passed
                pthread_mutex_unlock((pthread_mutex_t*) mutex);
                double timeout = min(deadline, timer.start() + 500.0);
                while (timer.start() < timeout) {
                }
                pthread_mutex_lock((pthread_mutex_t*) mutex);
            }
#else
            while (allReadyTasks.empty() && timer.start() < deadline) {
                // so we wait for a ready CPU or GPU task,
                // and stop when the deadline is passed
				allTasksCond.wait(&mutex,deadlinespec.tv_sec*1000+deadlinespec.tv_nsec/1000000);
            }
#endif
        } else {
            // here either some tasks for the current frame are not completed
            // or they are all completed but we do not have a fixed framerate
            while (!immediateTasks.empty() && (allReadyTasks.empty() || allReadyTasks.begin()->first.first > 0)) {
                // while some tasks for the current frame remain to be executed,
                // and while the set of tasks ready to be executed is empty or
                // contains only tasks for the next frames (deadline > 0), wait
				allTasksCond.wait(&mutex);
            }
        }
        // if the deadline is passed or if all the tasks for the current frame
        // are completed, there may not be any task ready to be executed
        if (!allReadyTasks.empty()) {
            // but if there is at least one we pick one, if possible with the
            // same execution context as the last executed GPU task
            t = getTask(allReadyTasks, previousGpuTask == NULL ? NULL : previousGpuTask->getContext());
            if (t->getDeadline() != 0) {
                // if this task is for the next frames, then all tasks for the
                // current frame should now be completed (tasks are sorted in
                // such a way that tasks for the current frame are executed first)
                CHECK(immediateTasks.empty(),"ImmediateTask list is not empty.");
                // if we do not have executed the required minimum number of
                // prefetching tasks per frame, we execute this available
                // prefetching task
                if (prefetched >= prefetchRate) {
                    // if we do not have a fixed framerate, or if the time remaining
                    // until the deadline is less than the expected duration for this
                    // task, we should stop here; setting t to NULL will force this
                    if (framePeriod == 0.0 || timer.start() + t->getExpectedDuration() > deadline) {
                        t = NULL;
                    }
                }
            }
            if (t != NULL) {
                // if we finally have a task to execute, we remove it from the
                // sets that may contain it (but we do not update the
                // dependencies yet, this will be done after the task execution
                // in #taskDone
                immediateTasks.erase(t);
                removeTask(allReadyTasks, t);
                removeTask(readyCpuTasks, t);
            }
        }
        // we can now release the mutex since we will not read or modify the
        // shared data structures until #taskDone is called; also the selected
        // task t cannot be seleted by another thread, since it has been removed
        // from the task sets.
        mutex.unlock();

        if (t == NULL) {
            // stops the infinite execution loop
            break;
        }

        bool changes = false;

        if (!t->isDone()) {
            trDEBUG("MultiThreadScheduler", (t->getDeadline() > 0 ? "PREFETCH " : "RUN ") << t->getName(););

            if (t->isGpuTask()) {
                // if t is a GPU task, sets the execution context ...
                if (previousGpuTask == NULL) {
                    // ... if no GPU has been executed yet
                    t->begin();
                } else if (previousGpuTask->getContext() != t->getContext()) {
                    // ... or if it is not the same as the one of the last GPU task
                    ++contextSwitches;
                    previousGpuTask->end();
                    t->begin();
                }
                // t now becomes the last executed GPU task
                previousGpuTask = t;
            }

            if (t->getCompletionDate() >= t->getPredecessorsCompletionDate()) {
                // t is up to date, it is not necessary to run it
            } else if (framePeriod > 0.0 || monitoredTasks.size() > 0) {
                // if we have a fixed framerate we measure the execution time
                // of each task in order to get statistics about tasks, used to
                // get estimated durations for future tasks
                timer.start();
                changes = t->run();
                double duration = timer.end();
                t->setActualDuration((float) duration);
                if (monitoredTasks.size() > 0) {
                    map< string, pair<int, float> >::iterator i = frameStatistics.find(t->getName());
                    if (i != frameStatistics.end()) {
                        pair<int, float> nt = i->second;
                        nt.first += 1;
                        nt.second += (float) duration;
                        frameStatistics[t->getName()] = nt;
                    }
                }
            } else {
                // otherwise we execute tasks without computing statistics
                changes = t->run();
            }

            ++run;
            if (t->getDeadline() > 0) {
                ++prefetched;
            }
        }
        // this updates the task dependencies, and signals other threads when
        // new tasks become ready to be executed
        taskDone(t, changes);
    }

    if (previousGpuTask != NULL) {
        // restores the context after the last executed GPU task
        previousGpuTask->end();
        previousGpuTask = NULL;
    }


    trDEBUG("MultiThreadScheduler", "END " << run << " run tasks " << contextSwitches << " context switches");

    if (framePeriod > 0.0) {
        Task::logStatistics();
    }

    if (framePeriod > 0.0) {
#ifdef BUSY_WAITING
        while (timer.start() < deadline) {
        }
#else
        double t = timer.start();
        if (t < deadline) {
        // if we have a fixed framerate and if we still have some time before
        // the deadline, we should wait until this deadline is passed, otherwise
        // the framerate would increase
#ifdef _WIN32
            int milliseconds = int(floor((deadline - t) / 1e3));
            Sleep(milliseconds);
#else
            usleep(deadline - t);
#endif
        }
#endif
    }

    if (monitoredTasks.size() > 0) {
        double total = timer.start() - lastFrame;
        if (bufferedFrames == 1000) {
            clearBufferedFrames();
        }
        int s = bufferedFrames * (2 * monitoredTasks.size() + 2);
        bufferedStatistics[s++] = static_cast<float>(schedule);
        bufferedStatistics[s++] = static_cast<float>(total);
        for (unsigned int i = 0; i < monitoredTasks.size(); ++i) {
            pair<int, float> nt = frameStatistics[monitoredTasks[i]];
            bufferedStatistics[s++] = (float) nt.first;
            bufferedStatistics[s++] = nt.second;
        }
        bufferedFrames += 1;
    }

    // measures the current time at the end of this method, to compute a
    // deadline for the next call to this method
    lastFrame = timer.start();
}

void MultithreadScheduler::monitorTask(const string &taskType)
{
    monitoredTasks.push_back(taskType);
}

void MultithreadScheduler::addFlattenedTask(Task* t, TaskSet& addedTasks)
{
    // NOTE: the mutex should be locked before calling this method!
    if (addedTasks.find(t) != addedTasks.end()) {
        return;
    }
    addedTasks.insert(t);
    if (t->isDone()) {
        return;
    }
    sgtPtr<TaskGraph> tg = sgtCast(t,TaskGraph);
    if (tg == NULL) {
        if (t->getDeadline() == 0) {
            immediateTasks.insert(t);
        } else {
            prefetchQueue.insert(t);
        }
        insertTask(allReadyTasks, t);
#ifdef STRICT_PREFETCH
        if (!t->isGpuTask() && t->getDeadline() > 0) {
#else
        if (!t->isGpuTask()) {
#endif
            insertTask(readyCpuTasks, t);
        }
    } else {
        tg->flattenedFirstTasks.clear();
        tg->flattenedLastTasks.clear();
        TaskGraph::TaskIterator i = tg->getAllTasks();
        while (i.hasNext()) {
            addFlattenedTask(i.next(), addedTasks);
        }
        i = tg->getFirstTasks();
        while (i.hasNext()) {
            sgtPtr<Task> u = i.next();
            sgtPtr<TaskGraph> ug = sgtCast(u.get(),TaskGraph);
            if (ug == NULL) {
                tg->flattenedFirstTasks.insert(u);
            } else {
                tg->flattenedFirstTasks.insert(ug->flattenedFirstTasks.begin(), ug->flattenedFirstTasks.end());
            }
        }
        i = tg->getLastTasks();
        while (i.hasNext()) {
            sgtPtr<Task> u = i.next();
            sgtPtr<TaskGraph> ug = sgtCast(u.get(),TaskGraph);
            if (ug == NULL) {
                tg->flattenedLastTasks.insert(u);
            } else {
                tg->flattenedLastTasks.insert(ug->flattenedLastTasks.begin(), ug->flattenedLastTasks.end());
            }
        }

        i = tg->getAllTasks();
        while (i.hasNext()) {
            sgtPtr<Task> dst = i.next();
            if (dst->isDone()) {
                continue;
            }
            TaskGraph::TaskIterator j = tg->getInverseDependencies(dst);
            while (j.hasNext()) {
                sgtPtr<Task> src = j.next();
                addFlattenedDependency(src, dst);
            }
        }
    }
}

void MultithreadScheduler::addFlattenedDependency(Task* src, Task* dst)
{
    // NOTE: the mutex should be locked before calling this method!
    sgtPtr<TaskGraph> srcTg = sgtCast(src,TaskGraph);
    if (srcTg != NULL) {
        TaskSet::iterator i = srcTg->flattenedFirstTasks.begin();
        while (i != srcTg->flattenedFirstTasks.end()) {
            sgtPtr<Task> srcT = *i;
            addFlattenedDependency(srcT, dst);
            ++i;
        }
    } else {
        sgtPtr<TaskGraph> dstTg = sgtCast(dst,TaskGraph);
        if (dstTg != NULL) {
            TaskSet::iterator i = dstTg->flattenedLastTasks.begin();
            while (i != dstTg->flattenedLastTasks.end()) {
                sgtPtr<Task> dstT = *i;
                addFlattenedDependency(src, dstT);
                ++i;
            }
        } else {
            TaskSet visited;
            removeTask(allReadyTasks, src);
            removeTask(readyCpuTasks, src);
            dependencies[src].insert(dst);
            inverseDependencies[dst].insert(src);
            setDeadline(dst, src->getDeadline(), visited);
            CHECK(src->getDeadline() >= dst->getDeadline(),"Mismatch in deadline values.");
        }
    }
}

void MultithreadScheduler::setDeadline(Task* t, unsigned int deadline, TaskSet& visited)
{
    if (visited.find(t) != visited.end()) {
        return;
    }
    visited.insert(t);

    sgtPtr<TaskGraph> tg = sgtCast(t,TaskGraph);
    if (tg != NULL) {
        TaskGraph::TaskIterator i = tg->getAllTasks();
        while (i.hasNext()) {
            setDeadline(i.next(), deadline, visited);
        }
    }

    if (t->getDeadline() > deadline) {
        bool b1 = removeTask(allReadyTasks, t);
        bool b2 = removeTask(readyCpuTasks, t);
        t->setDeadline(deadline);
        if (b1) {
            insertTask(allReadyTasks, t);
        }
        if (b2) {
            CHECK(!t->isGpuTask(),"Should not have a GPU task here.");
#ifdef STRICT_PREFETCH
            if (t->getDeadline() > 0) {
                insertTask(readyCpuTasks, t);
            }
#else
            insertTask(readyCpuTasks, t);
#endif
        }
        TaskDependencyMap::iterator i = dependencies.find(t);
        if (i != dependencies.end()) {
            TaskSet::iterator j = i->second.begin();
            while (j != i->second.end()) {
                setDeadline(*j, deadline, visited);
                j++;
            }
        }
    }
}

void MultithreadScheduler::taskDone(Task* t, bool changes)
{
	OpenThreads::ScopedLock<OpenThreads::Mutex> lock(mutex);
    unsigned int completionDate = changes ? time : t->getCompletionDate();
    TaskDependencyMap::iterator i = inverseDependencies.find(t);
    if (i != inverseDependencies.end()) {
        TaskSet::iterator j = i->second.begin();
        TaskSet::iterator end = i->second.end();
        while (j != end) { // iterates over the successors of t
            sgtPtr<Task> r = *j; // r is a successor of t
            // the predecessors of r should not be empty, and should contain t
            TaskDependencyMap::iterator k = dependencies.find(r);
            CHECK(k != dependencies.end(),"Could not find task dependency.");
            TaskSet::iterator l = k->second.find(t);
            CHECK(l != k->second.end(),"Could not find task sub dependency.");
            // we then remove t from the predecessors of r
            k->second.erase(l);
            // if t was the only remaining predecessor of r,
            // r is now ready to be executed
            if (k->second.empty()) {
                dependencies.erase(k);
                // we add it to the set of ready tasks, and signals this to the
                // execution threads; we do the same for the set of ready CPU
                // tasks, if r is a CPU tas
                insertTask(allReadyTasks, r);
				allTasksCond.broadcast();
#ifdef STRICT_PREFETCH
                if (!r->isGpuTask() && r->getDeadline() > 0) {
#else
                if (!r->isGpuTask()) {
#endif
                    insertTask(readyCpuTasks, r);
					cpuTasksCond.broadcast();
                }
            }
            j++;
        }
        inverseDependencies.erase(i);
    }
    prefetchQueue.erase(t);
    // finally we mark the task as completed
    t->setIsDone(true, completionDate);
    // and we increment the logical time counter
    ++time;
}

void MultithreadScheduler::schedulerThread()
{
    Timer timer;

    // loop to execute tasks, until the scheduler must be deleted
    while (!stop) {
        sgtPtr<Task> t;
		mutex.lock();
        // wait until we have a CPU task ready to be executed (the additional
        // threads cannot execute GPU tasks, because OpenGL supports only one
        // thread at a time), or the scheduler is being deleted
        while (readyCpuTasks.empty() && !stop) {
			cpuTasksCond.wait(&mutex);
        }
        if (!stop) {
            SortedTaskSet::iterator i = readyCpuTasks.begin();
            assert(i != readyCpuTasks.end());
            assert(i->second.begin() != i->second.end());
            // selects the first ready task
            t = *(i->second.begin());
#ifdef STRICT_PREFETCH
            assert(t->getDeadline() > 0);
#endif
            // and removes it from the task sets,
            // so that other threads will not select it again
            if (t->getDeadline() == 0) {
                immediateTasks.erase(t);
            }
            removeTask(allReadyTasks, t);
            removeTask(readyCpuTasks, t);
        }
        mutex.unlock();

        if (!stop) {
            CHECK(!t->isGpuTask(),"Should not get a GPU task here.");
            bool changes = false;
            if (!t->isDone()) {
                trDEBUG("MultiThreadScheduler", "PREFETCH " << t->getName());

                // same thing as in the #run method
                if (t->getCompletionDate() >= t->getPredecessorsCompletionDate()) {
                    // t is up to date, it is not necessary to run it
                } else if (framePeriod > 0.0) {
                    timer.start();
                    changes = t->run();
                    double duration = timer.end();
                    t->setActualDuration((float) duration);
                } else {
                    changes = t->run();
                }
            }
            taskDone(t, changes);
        }
    }
}

void MultithreadScheduler::clearBufferedFrames()
{
    if (statisticsFile == NULL) {
        statisticsFile = fopen("taskStatistics.dat", "w");
        fprintf(statisticsFile, "frame scheduling total");
        for (unsigned int i = 0; i < monitoredTasks.size(); ++i) {
            fprintf(statisticsFile, " %s %s", monitoredTasks[i].c_str(), monitoredTasks[i].c_str());
        }
        fprintf(statisticsFile, "\n");
    }
    int s = 0;
    for (int i = 0; i < bufferedFrames; ++i) {
        fprintf(statisticsFile, "%d %f %f", i, bufferedStatistics[s] * 1e-3, bufferedStatistics[s + 1] * 1e-3);
        s += 2;
        for (unsigned int j = 0; j < monitoredTasks.size(); ++j) {
            fprintf(statisticsFile, " %d %f", (int) bufferedStatistics[s], bufferedStatistics[s + 1] * 1e-3);
            s += 2;
        }
        fprintf(statisticsFile, "\n");
    }
    bufferedFrames = 0;
}

Task* MultithreadScheduler::getTask(SortedTaskSet &s, void *previousContext)
{
    SortedTaskSet::iterator i = s.begin();
    // the task set should contain at least one task
    CHECK_RET(i != s.end(),NULL,"task list is empty.");
    CHECK_RET(i->second.begin() != i->second.end(),NULL,"Sub task list is empty.");
    // we compute the deadline of the first task, i.e., since the tasks are
    // sorted by deadline first, the minimum deadline of the tasks in the set
    int deadline = i->first.first;
    // we then try to find a task with this deadline, of context 'previousContext'
    taskKey key = make_pair(deadline, previousContext);
    SortedTaskSet::iterator j = s.find(key);
    if (j != s.end()) {
        // if we find one we return it, this will avoid a context switch
        CHECK_RET(j->second.begin() != j->second.end(),NULL,"Sub task lsit 2 is empty.");
        return *(j->second.begin());
    }
    if (previousContext != NULL) {
        // if there is no task with the same context, and if the current context
        // is not empty, we try to find a task with an empty context; this will
        // alse avoid a context switch (and in the meantime other tasks with the
        // same context may become ready)
        key = make_pair(deadline, (void*) NULL);
        j = s.find(key);
        if (j != s.end()) {
           CHECK_RET(j->second.begin() != j->second.end(),NULL,"Sub task lsit 2 is empty.");
            return *(j->second.begin());
        }
    }
    // in all other cases we just return the first found task
    return *(i->second.begin());
}

void MultithreadScheduler::insertTask(SortedTaskSet &s, Task* t)
{
    // computes the key for this task and inserts it
    taskKey key = make_pair(t->getDeadline(), t->getContext());
    s[key].insert(t);
}

bool MultithreadScheduler::removeTask(SortedTaskSet &s, Task* t)
{
    // computes the key for this task and finds it in the set
    taskKey key = make_pair(t->getDeadline(), t->getContext());
    SortedTaskSet::iterator i = s.find(key);
    if (i != s.end()) {
        // if found, removes it from the set of tasks associated with this key
        bool ok = i->second.erase(t) > 0;
        if (i->second.empty()) {
            // and if this set becomes empty, removes the key and its value
            s.erase(i);
        }
        return ok;
    }
    return false;
}

}
