#ifndef THREADINGMODEL_H_
#define THREADINGMODEL_H_

#include <sgtCommon.h>

namespace sgt {

/** template class providing no multithreaded support at all.*/

template <typename Host>
class SingleThreaded {
public:
	typedef Host VolatileType;
	
public:
	class Lock {};
};

/** Template class implementing the class level lock concept.*/
template <typename Host>
class SGTCORE_EXPORT ClassLevelLockable {
public:
	typedef volatile Host VolatileType;

public:
	class Lock {
	public:
		Lock() {
			Host::_mutex.lock();
		}
	  
		~Lock() {
			// unlock the mutex.
			Host::_mutex.unlock();
		}
   };
   
private:
	static boost::mutex _mutex;
};

} /* namespace sc */

#endif /* LOCKABLE_H_ */
