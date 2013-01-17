#ifndef _WRAPPERS_WRAPPER_BTDEFAULTCOLLISIONCONFIGURATION_H_
#define _WRAPPERS_WRAPPER_BTDEFAULTCOLLISIONCONFIGURATION_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btDefaultCollisionConfiguration.h>

class wrapper_btDefaultCollisionConfiguration : public btDefaultCollisionConfiguration, public luna_wrapper_base {

public:
		

	~wrapper_btDefaultCollisionConfiguration() {
		logDEBUG3("Calling delete function for wrapper btDefaultCollisionConfiguration");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btDefaultCollisionConfiguration*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btDefaultCollisionConfiguration(lua_State* L, lua_Table* dum, const btDefaultCollisionConstructionInfo & constructionInfo = btDefaultCollisionConstructionInfo ()) 
		: btDefaultCollisionConfiguration(constructionInfo), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btDefaultCollisionConfiguration*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// btPoolAllocator * btDefaultCollisionConfiguration::getPersistentManifoldPool()
	btPoolAllocator * getPersistentManifoldPool() {
		if(_obj.pushFunction("getPersistentManifoldPool")) {
			_obj.pushArg((btDefaultCollisionConfiguration*)this);
			return (_obj.callFunction<btPoolAllocator*>());
		}

		return btDefaultCollisionConfiguration::getPersistentManifoldPool();
	};

	// btPoolAllocator * btDefaultCollisionConfiguration::getCollisionAlgorithmPool()
	btPoolAllocator * getCollisionAlgorithmPool() {
		if(_obj.pushFunction("getCollisionAlgorithmPool")) {
			_obj.pushArg((btDefaultCollisionConfiguration*)this);
			return (_obj.callFunction<btPoolAllocator*>());
		}

		return btDefaultCollisionConfiguration::getCollisionAlgorithmPool();
	};

	// btStackAlloc * btDefaultCollisionConfiguration::getStackAllocator()
	btStackAlloc * getStackAllocator() {
		if(_obj.pushFunction("getStackAllocator")) {
			_obj.pushArg((btDefaultCollisionConfiguration*)this);
			return (_obj.callFunction<btStackAlloc*>());
		}

		return btDefaultCollisionConfiguration::getStackAllocator();
	};

	// btVoronoiSimplexSolver * btDefaultCollisionConfiguration::getSimplexSolver()
	btVoronoiSimplexSolver * getSimplexSolver() {
		if(_obj.pushFunction("getSimplexSolver")) {
			_obj.pushArg((btDefaultCollisionConfiguration*)this);
			return (_obj.callFunction<btVoronoiSimplexSolver*>());
		}

		return btDefaultCollisionConfiguration::getSimplexSolver();
	};

	// btCollisionAlgorithmCreateFunc * btDefaultCollisionConfiguration::getCollisionAlgorithmCreateFunc(int proxyType0, int proxyType1)
	btCollisionAlgorithmCreateFunc * getCollisionAlgorithmCreateFunc(int proxyType0, int proxyType1) {
		if(_obj.pushFunction("getCollisionAlgorithmCreateFunc")) {
			_obj.pushArg((btDefaultCollisionConfiguration*)this);
			_obj.pushArg(proxyType0);
			_obj.pushArg(proxyType1);
			return (_obj.callFunction<btCollisionAlgorithmCreateFunc*>());
		}

		return btDefaultCollisionConfiguration::getCollisionAlgorithmCreateFunc(proxyType0, proxyType1);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

