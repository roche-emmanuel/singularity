#ifndef SINGLETON_H_
#define SINGLETON_H_

#include <sgtCommon.h>
#include "base/ThreadingModel.h"

namespace sgt {

/** Singleton creator policy.*/
template <typename T>
class SingletonRefCreator {
public:
	typedef sgtPtr<T> singleton_holder_type;
	
public:
	static T* create() {
		return new T();
	};
	static void destroy(T* obj) {
		// do nothing.
	};
};

/** Singleton initializer. */
template <typename T>
class SingletonNoInitializer {
public:
	static void initialize(T& singleton) {
		// do nothing;
	};
	static void uninitialize(T& singleton) {
		// do nothing;
	};
};

/** Template used to create referenced singleton objects.
*/
template <typename T,
	template <class> class CreationPolicy = SingletonRefCreator,
	template <class> class InitPolicy = SingletonNoInitializer,
	template <class> class ThreadingModel = ClassLevelLockable >
class SGTCORE_EXPORT Singleton : public T, public ThreadingModel<Singleton> {
public:
	typedef ThreadingModel<CreationPolicy<T>::singleton_holder_type>::VolatileType InstanceType;
	
protected:
	/** Default constructor. 
	Protected for singleton pattern.
	*/
	Singleton() : {};

	/** Copy constructor intentionally left unimplemented (to respect the singleton pattern).*/
	Singleton(const Singleton&);
	/** Assignment operator intentionally left unimplemented (to respect the singleton pattern).*/
	Singleton& operator=(const Singleton&);
	
public:
	/** Retrieve the singleton instance of this class.
	*/
	static T& instance() {
		if(!_singleton) {
			Lock guard;
			 if (!_singleton)
			{
				_singleton = CreationPolicy<T>::create();
				trINFO_V("","Created " << _singletonName << " singleton");
				InitPolicy<T>::initialize(*_singleton);
			}
		}

		return *_singleton;	
	}
	
	/** Used to destroy the actual singleton object.*/
	static void destroy() {
		if(_singleton) {
			// Destroy the singleton:
			trINFO_V("","Destroying " << libraryName << "::" << className() << " singleton");
			InitPolicy<T>::uninitialize(*_singleton);
			_singleton = NULL;
		}	
	}

	/** Check if the instance of this class is already constructed. */
	static bool isInstanciated() {
		return _singleton.valid();
	}
	
private:
	static InstanceType _singleton;
};

} /* namespace sgt */

#endif /* OBJECT_H_ */
