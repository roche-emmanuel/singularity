#ifndef _SGT_TIMER_H_
#define _SGT_TIMER_H_

namespace sgt
{

/**
 * A timer to measure time and time intervals.
 * @ingroup core
 */
class SGTLAND_EXPORT Timer
{
public:
    /**
     * Creates a new timer.
     */
    Timer();

    /**
     * Destroys this timer.
     */
    virtual ~Timer();

    /**
     * Starts this timer and returns the current time in micro seconds.
     */
    virtual double start();

    /**
     * Returns the delay since the last call to #start() in micro seconds.
     */
    virtual double end();

    /**
     * Returns the delay recorded at the last end() call.
     */
    virtual double getTime();

    /**
     * Returns the average delay at every call to #end() in micro seconds.
     * This won't be accurate if the timer is not stopped.
     */
    virtual double getAvgTime();

    /**
     * Returns the number of calls to start since last reset().
     */
    int getNumCycles() const;

    /**
     * Returns the lowest duration between a start() and an end() call in micro seconds.
     */
    double getMinDuration() const;

    /**
     * Returns the highest duration between a start() and an end() call in micro seconds.
     */
    double getMaxDuration() const;

    /**
     * Resets the statistics (total, average, min, and max durations).
     */
    virtual void reset();

    /**
     * Get a string based on the current date and time of the day.
     * Buffer must be of sufficient length.
     * Format YYYY.MM.DD.HH.MM.SS
     */
    static void getDateTimeString(char* buffer, int bufSize);

    /**
     * Get a string based on the current date.
     * Buffer must be of sufficient length.
     * Format YYYY.MM.DD
     */
    static void getDateString(char* buffer, int bufSize);

    /**
     * Get a string based on the current time of the day.
     * Buffer must be of sufficient length.
     * Format HH.MM.SS
     */
    static void getTimeOfTheDayString(char* buffer, int bufSize);

protected:
    /**
     * Time of last call to #start or #reset.
     */
    double t;

    /**
     * The accumulated elapsed time.
     */
    double totalDuration;

    /**
     * Number of calls to start since last #reset() call.
     */
    int numCycles;

    /**
     * Last recorded duration recorded at #end() call.
     */
    double lastDuration;

    /**
     * The lowest duration between a #start() and an #end() call in micro seconds.
     */
    double minDuration;

    /**
     * The highest duration between a #start() and an #end() call in micro seconds.
     */
    double maxDuration;

    /**
     * True if the timer has a start value.
     */
    bool running;

    /**
     * Returns the current time in microseconds.
     * The origin of time may depend on the platform.
     */
    double getCurrentTime();
};

}

#endif
