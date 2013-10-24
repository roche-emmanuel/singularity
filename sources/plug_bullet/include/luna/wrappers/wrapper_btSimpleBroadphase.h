#ifndef _WRAPPERS_WRAPPER_BTSIMPLEBROADPHASE_H_
#define _WRAPPERS_WRAPPER_BTSIMPLEBROADPHASE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/BroadphaseCollision/btSimpleBroadphase.h>

class wrapper_btSimpleBroadphase : public btSimpleBroadphase, public luna_wrapper_base {

public:
		

	~wrapper_btSimpleBroadphase() {
		logDEBUG3("Calling delete function for wrapper btSimpleBroadphase");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btSimpleBroadphase*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btSimpleBroadphase(lua_State* L, lua_Table* dum, int maxProxies = 16384, btOverlappingPairCache * overlappingPairCache = 0) 
		: btSimpleBroadphase(maxProxies, overlappingPairCache), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btSimpleBroadphase*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void btSimpleBroadphase::resetPool(btDispatcher * dispatcher)
	void resetPool(btDispatcher * dispatcher) {
		if(_obj.pushFunction("resetPool")) {
			_obj.pushArg((btSimpleBroadphase*)this);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btSimpleBroadphase::resetPool(dispatcher);
	};

public:
	// Public virtual methods:
	// btBroadphaseProxy * btSimpleBroadphase::createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy)
	btBroadphaseProxy * createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy) {
		if(_obj.pushFunction("createProxy")) {
			_obj.pushArg((btSimpleBroadphase*)this);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			_obj.pushArg(shapeType);
			_obj.pushArg(userPtr);
			_obj.pushArg(collisionFilterGroup);
			_obj.pushArg(collisionFilterMask);
			_obj.pushArg(dispatcher);
			_obj.pushArg(multiSapProxy);
			return (_obj.callFunction<btBroadphaseProxy*>());
		}

		return btSimpleBroadphase::createProxy(aabbMin, aabbMax, shapeType, userPtr, collisionFilterGroup, collisionFilterMask, dispatcher, multiSapProxy);
	};

	// void btSimpleBroadphase::calculateOverlappingPairs(btDispatcher * dispatcher)
	void calculateOverlappingPairs(btDispatcher * dispatcher) {
		if(_obj.pushFunction("calculateOverlappingPairs")) {
			_obj.pushArg((btSimpleBroadphase*)this);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btSimpleBroadphase::calculateOverlappingPairs(dispatcher);
	};

	// void btSimpleBroadphase::destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	void destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher) {
		if(_obj.pushFunction("destroyProxy")) {
			_obj.pushArg((btSimpleBroadphase*)this);
			_obj.pushArg(proxy);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btSimpleBroadphase::destroyProxy(proxy, dispatcher);
	};

	// void btSimpleBroadphase::setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher)
	void setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher) {
		if(_obj.pushFunction("setAabb")) {
			_obj.pushArg((btSimpleBroadphase*)this);
			_obj.pushArg(proxy);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btSimpleBroadphase::setAabb(proxy, aabbMin, aabbMax, dispatcher);
	};

	// void btSimpleBroadphase::getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabb")) {
			_obj.pushArg((btSimpleBroadphase*)this);
			_obj.pushArg(proxy);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btSimpleBroadphase::getAabb(proxy, aabbMin, aabbMax);
	};

	// void btSimpleBroadphase::rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0))
	void rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0)) {
		if(_obj.pushFunction("rayTest")) {
			_obj.pushArg((btSimpleBroadphase*)this);
			_obj.pushArg(&rayFrom);
			_obj.pushArg(&rayTo);
			_obj.pushArg(&rayCallback);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btSimpleBroadphase::rayTest(rayFrom, rayTo, rayCallback, aabbMin, aabbMax);
	};

	// void btSimpleBroadphase::aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback)
	void aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback) {
		if(_obj.pushFunction("aabbTest")) {
			_obj.pushArg((btSimpleBroadphase*)this);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			_obj.pushArg(&callback);
			return (_obj.callFunction<void>());
		}

		return btSimpleBroadphase::aabbTest(aabbMin, aabbMax, callback);
	};

	// btOverlappingPairCache * btSimpleBroadphase::getOverlappingPairCache()
	btOverlappingPairCache * getOverlappingPairCache() {
		if(_obj.pushFunction("getOverlappingPairCache")) {
			_obj.pushArg((btSimpleBroadphase*)this);
			return (_obj.callFunction<btOverlappingPairCache*>());
		}

		return btSimpleBroadphase::getOverlappingPairCache();
	};

	// const btOverlappingPairCache * btSimpleBroadphase::getOverlappingPairCache() const
	const btOverlappingPairCache * getOverlappingPairCache() const {
		if(_obj.pushFunction("getOverlappingPairCache")) {
			_obj.pushArg((btSimpleBroadphase*)this);
			return (_obj.callFunction<btOverlappingPairCache*>());
		}

		return btSimpleBroadphase::getOverlappingPairCache();
	};

	// void btSimpleBroadphase::getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const
	void getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getBroadphaseAabb")) {
			_obj.pushArg((btSimpleBroadphase*)this);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btSimpleBroadphase::getBroadphaseAabb(aabbMin, aabbMax);
	};

	// void btSimpleBroadphase::printStats()
	void printStats() {
		if(_obj.pushFunction("printStats")) {
			_obj.pushArg((btSimpleBroadphase*)this);
			return (_obj.callFunction<void>());
		}

		return btSimpleBroadphase::printStats();
	};


	// Protected non-virtual methods:
	// int btSimpleBroadphase::allocHandle()
	int public_allocHandle() {
		return btSimpleBroadphase::allocHandle();
	};

	// void btSimpleBroadphase::freeHandle(btSimpleBroadphaseProxy * proxy)
	void public_freeHandle(btSimpleBroadphaseProxy * proxy) {
		return btSimpleBroadphase::freeHandle(proxy);
	};

	// btSimpleBroadphaseProxy * btSimpleBroadphase::getSimpleProxyFromProxy(btBroadphaseProxy * proxy)
	btSimpleBroadphaseProxy * public_getSimpleProxyFromProxy(btBroadphaseProxy * proxy) {
		return btSimpleBroadphase::getSimpleProxyFromProxy(proxy);
	};

	// void btSimpleBroadphase::validate()
	void public_validate() {
		return btSimpleBroadphase::validate();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_allocHandle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_freeHandle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getSimpleProxyFromProxy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_validate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// int btSimpleBroadphase::public_allocHandle()
	static int _bind_public_allocHandle(lua_State *L) {
		if (!_lg_typecheck_public_allocHandle(L)) {
			luaL_error(L, "luna typecheck failed in int btSimpleBroadphase::public_allocHandle() function, expected prototype:\nint btSimpleBroadphase::public_allocHandle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_btSimpleBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< wrapper_btSimpleBroadphase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btSimpleBroadphase::public_allocHandle(). Got : '%s'\n%s",typeid(Luna< btBroadphaseInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->public_allocHandle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSimpleBroadphase::public_freeHandle(btSimpleBroadphaseProxy * proxy)
	static int _bind_public_freeHandle(lua_State *L) {
		if (!_lg_typecheck_public_freeHandle(L)) {
			luaL_error(L, "luna typecheck failed in void btSimpleBroadphase::public_freeHandle(btSimpleBroadphaseProxy * proxy) function, expected prototype:\nvoid btSimpleBroadphase::public_freeHandle(btSimpleBroadphaseProxy * proxy)\nClass arguments details:\narg 1 ID = 44086089\n\n%s",luna_dumpStack(L).c_str());
		}

		btSimpleBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::checkSubType< btSimpleBroadphaseProxy >(L,2));

		wrapper_btSimpleBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< wrapper_btSimpleBroadphase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btSimpleBroadphase::public_freeHandle(btSimpleBroadphaseProxy *). Got : '%s'\n%s",typeid(Luna< btBroadphaseInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_freeHandle(proxy);

		return 0;
	}

	// btSimpleBroadphaseProxy * btSimpleBroadphase::public_getSimpleProxyFromProxy(btBroadphaseProxy * proxy)
	static int _bind_public_getSimpleProxyFromProxy(lua_State *L) {
		if (!_lg_typecheck_public_getSimpleProxyFromProxy(L)) {
			luaL_error(L, "luna typecheck failed in btSimpleBroadphaseProxy * btSimpleBroadphase::public_getSimpleProxyFromProxy(btBroadphaseProxy * proxy) function, expected prototype:\nbtSimpleBroadphaseProxy * btSimpleBroadphase::public_getSimpleProxyFromProxy(btBroadphaseProxy * proxy)\nClass arguments details:\narg 1 ID = 44086089\n\n%s",luna_dumpStack(L).c_str());
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));

		wrapper_btSimpleBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< wrapper_btSimpleBroadphase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btSimpleBroadphaseProxy * btSimpleBroadphase::public_getSimpleProxyFromProxy(btBroadphaseProxy *). Got : '%s'\n%s",typeid(Luna< btBroadphaseInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btSimpleBroadphaseProxy * lret = self->public_getSimpleProxyFromProxy(proxy);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btSimpleBroadphaseProxy >::push(L,lret,false);

		return 1;
	}

	// void btSimpleBroadphase::public_validate()
	static int _bind_public_validate(lua_State *L) {
		if (!_lg_typecheck_public_validate(L)) {
			luaL_error(L, "luna typecheck failed in void btSimpleBroadphase::public_validate() function, expected prototype:\nvoid btSimpleBroadphase::public_validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_btSimpleBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< wrapper_btSimpleBroadphase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btSimpleBroadphase::public_validate(). Got : '%s'\n%s",typeid(Luna< btBroadphaseInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_validate();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"allocHandle",_bind_public_allocHandle},
		{"freeHandle",_bind_public_freeHandle},
		{"getSimpleProxyFromProxy",_bind_public_getSimpleProxyFromProxy},
		{"validate",_bind_public_validate},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

