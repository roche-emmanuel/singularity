#include "taskgraph/Scheduler.h"

namespace sgt
{

Scheduler::Scheduler(const char* type)
{
	setName(type);
}

Scheduler::~Scheduler()
{
}

void Scheduler::swap(Scheduler* s)
{
}

}
