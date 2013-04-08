#include <plug_common.h>

class luna_wrapper_btBroadphaseProxy {
public:
	typedef Luna< btBroadphaseProxy > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44086089) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btBroadphaseProxy*)");
		}

		btBroadphaseProxy* rhs =(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* self=(Luna< btBroadphaseProxy >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		btBroadphaseProxy* self= (btBroadphaseProxy*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btBroadphaseProxy >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44086089) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btBroadphaseProxy >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		btBroadphaseProxy* self=(Luna< btBroadphaseProxy >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btBroadphaseProxy");
		
		return luna_dynamicCast(L,converters,"btBroadphaseProxy",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getUid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isPolyhedral(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isConvex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isNonMoving(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isConcave(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isCompound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isSoftBody(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isInfinite(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isConvex2d(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClientObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCollisionFilterGroup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCollisionFilterMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMultiSapParentProxy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUniqueId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAabbMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAabbMax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setClientObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCollisionFilterGroup(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCollisionFilterMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMultiSapParentProxy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUniqueId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAabbMin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAabbMax(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btBroadphaseProxy::btBroadphaseProxy()
	static btBroadphaseProxy* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphaseProxy::btBroadphaseProxy() function, expected prototype:\nbtBroadphaseProxy::btBroadphaseProxy()\nClass arguments details:\n");
		}


		return new btBroadphaseProxy();
	}

	// btBroadphaseProxy::btBroadphaseProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, void * multiSapParentProxy = 0)
	static btBroadphaseProxy* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphaseProxy::btBroadphaseProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, void * multiSapParentProxy = 0) function, expected prototype:\nbtBroadphaseProxy::btBroadphaseProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, void * multiSapParentProxy = 0)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,1));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btBroadphaseProxy::btBroadphaseProxy function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btBroadphaseProxy::btBroadphaseProxy function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;
		void* userPtr=(Luna< void >::check(L,3));
		short int collisionFilterGroup=(short int)lua_tointeger(L,4);
		short int collisionFilterMask=(short int)lua_tointeger(L,5);
		void* multiSapParentProxy=luatop>5 ? (Luna< void >::check(L,6)) : (void*)0;

		return new btBroadphaseProxy(aabbMin, aabbMax, userPtr, collisionFilterGroup, collisionFilterMask, multiSapParentProxy);
	}

	// Overload binder for btBroadphaseProxy::btBroadphaseProxy
	static btBroadphaseProxy* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btBroadphaseProxy, cannot match any of the overloads for function btBroadphaseProxy:\n  btBroadphaseProxy()\n  btBroadphaseProxy(const btVector3 &, const btVector3 &, void *, short int, short int, void *)\n");
		return NULL;
	}


	// Function binds:
	// int btBroadphaseProxy::getUid() const
	static int _bind_getUid(lua_State *L) {
		if (!_lg_typecheck_getUid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBroadphaseProxy::getUid() const function, expected prototype:\nint btBroadphaseProxy::getUid() const\nClass arguments details:\n");
		}


		btBroadphaseProxy* self=(Luna< btBroadphaseProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBroadphaseProxy::getUid() const. Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		int lret = self->getUid();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static bool btBroadphaseProxy::isPolyhedral(int proxyType)
	static int _bind_isPolyhedral(lua_State *L) {
		if (!_lg_typecheck_isPolyhedral(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool btBroadphaseProxy::isPolyhedral(int proxyType) function, expected prototype:\nstatic bool btBroadphaseProxy::isPolyhedral(int proxyType)\nClass arguments details:\n");
		}

		int proxyType=(int)lua_tointeger(L,1);

		bool lret = btBroadphaseProxy::isPolyhedral(proxyType);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool btBroadphaseProxy::isConvex(int proxyType)
	static int _bind_isConvex(lua_State *L) {
		if (!_lg_typecheck_isConvex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool btBroadphaseProxy::isConvex(int proxyType) function, expected prototype:\nstatic bool btBroadphaseProxy::isConvex(int proxyType)\nClass arguments details:\n");
		}

		int proxyType=(int)lua_tointeger(L,1);

		bool lret = btBroadphaseProxy::isConvex(proxyType);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool btBroadphaseProxy::isNonMoving(int proxyType)
	static int _bind_isNonMoving(lua_State *L) {
		if (!_lg_typecheck_isNonMoving(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool btBroadphaseProxy::isNonMoving(int proxyType) function, expected prototype:\nstatic bool btBroadphaseProxy::isNonMoving(int proxyType)\nClass arguments details:\n");
		}

		int proxyType=(int)lua_tointeger(L,1);

		bool lret = btBroadphaseProxy::isNonMoving(proxyType);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool btBroadphaseProxy::isConcave(int proxyType)
	static int _bind_isConcave(lua_State *L) {
		if (!_lg_typecheck_isConcave(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool btBroadphaseProxy::isConcave(int proxyType) function, expected prototype:\nstatic bool btBroadphaseProxy::isConcave(int proxyType)\nClass arguments details:\n");
		}

		int proxyType=(int)lua_tointeger(L,1);

		bool lret = btBroadphaseProxy::isConcave(proxyType);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool btBroadphaseProxy::isCompound(int proxyType)
	static int _bind_isCompound(lua_State *L) {
		if (!_lg_typecheck_isCompound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool btBroadphaseProxy::isCompound(int proxyType) function, expected prototype:\nstatic bool btBroadphaseProxy::isCompound(int proxyType)\nClass arguments details:\n");
		}

		int proxyType=(int)lua_tointeger(L,1);

		bool lret = btBroadphaseProxy::isCompound(proxyType);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool btBroadphaseProxy::isSoftBody(int proxyType)
	static int _bind_isSoftBody(lua_State *L) {
		if (!_lg_typecheck_isSoftBody(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool btBroadphaseProxy::isSoftBody(int proxyType) function, expected prototype:\nstatic bool btBroadphaseProxy::isSoftBody(int proxyType)\nClass arguments details:\n");
		}

		int proxyType=(int)lua_tointeger(L,1);

		bool lret = btBroadphaseProxy::isSoftBody(proxyType);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool btBroadphaseProxy::isInfinite(int proxyType)
	static int _bind_isInfinite(lua_State *L) {
		if (!_lg_typecheck_isInfinite(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool btBroadphaseProxy::isInfinite(int proxyType) function, expected prototype:\nstatic bool btBroadphaseProxy::isInfinite(int proxyType)\nClass arguments details:\n");
		}

		int proxyType=(int)lua_tointeger(L,1);

		bool lret = btBroadphaseProxy::isInfinite(proxyType);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool btBroadphaseProxy::isConvex2d(int proxyType)
	static int _bind_isConvex2d(lua_State *L) {
		if (!_lg_typecheck_isConvex2d(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool btBroadphaseProxy::isConvex2d(int proxyType) function, expected prototype:\nstatic bool btBroadphaseProxy::isConvex2d(int proxyType)\nClass arguments details:\n");
		}

		int proxyType=(int)lua_tointeger(L,1);

		bool lret = btBroadphaseProxy::isConvex2d(proxyType);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void * btBroadphaseProxy::m_clientObject()
	static int _bind_getClientObject(lua_State *L) {
		if (!_lg_typecheck_getClientObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btBroadphaseProxy::m_clientObject() function, expected prototype:\nvoid * btBroadphaseProxy::m_clientObject()\nClass arguments details:\n");
		}


		btBroadphaseProxy* self=(Luna< btBroadphaseProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btBroadphaseProxy::m_clientObject(). Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		void * lret = self->m_clientObject;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// short int btBroadphaseProxy::m_collisionFilterGroup()
	static int _bind_getCollisionFilterGroup(lua_State *L) {
		if (!_lg_typecheck_getCollisionFilterGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in short int btBroadphaseProxy::m_collisionFilterGroup() function, expected prototype:\nshort int btBroadphaseProxy::m_collisionFilterGroup()\nClass arguments details:\n");
		}


		btBroadphaseProxy* self=(Luna< btBroadphaseProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call short int btBroadphaseProxy::m_collisionFilterGroup(). Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		short int lret = self->m_collisionFilterGroup;
		lua_pushnumber(L,lret);

		return 1;
	}

	// short int btBroadphaseProxy::m_collisionFilterMask()
	static int _bind_getCollisionFilterMask(lua_State *L) {
		if (!_lg_typecheck_getCollisionFilterMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in short int btBroadphaseProxy::m_collisionFilterMask() function, expected prototype:\nshort int btBroadphaseProxy::m_collisionFilterMask()\nClass arguments details:\n");
		}


		btBroadphaseProxy* self=(Luna< btBroadphaseProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call short int btBroadphaseProxy::m_collisionFilterMask(). Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		short int lret = self->m_collisionFilterMask;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void * btBroadphaseProxy::m_multiSapParentProxy()
	static int _bind_getMultiSapParentProxy(lua_State *L) {
		if (!_lg_typecheck_getMultiSapParentProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btBroadphaseProxy::m_multiSapParentProxy() function, expected prototype:\nvoid * btBroadphaseProxy::m_multiSapParentProxy()\nClass arguments details:\n");
		}


		btBroadphaseProxy* self=(Luna< btBroadphaseProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btBroadphaseProxy::m_multiSapParentProxy(). Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		void * lret = self->m_multiSapParentProxy;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// int btBroadphaseProxy::m_uniqueId()
	static int _bind_getUniqueId(lua_State *L) {
		if (!_lg_typecheck_getUniqueId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBroadphaseProxy::m_uniqueId() function, expected prototype:\nint btBroadphaseProxy::m_uniqueId()\nClass arguments details:\n");
		}


		btBroadphaseProxy* self=(Luna< btBroadphaseProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBroadphaseProxy::m_uniqueId(). Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		int lret = self->m_uniqueId;
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btBroadphaseProxy::m_aabbMin()
	static int _bind_getAabbMin(lua_State *L) {
		if (!_lg_typecheck_getAabbMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btBroadphaseProxy::m_aabbMin() function, expected prototype:\nbtVector3 btBroadphaseProxy::m_aabbMin()\nClass arguments details:\n");
		}


		btBroadphaseProxy* self=(Luna< btBroadphaseProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btBroadphaseProxy::m_aabbMin(). Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_aabbMin;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btBroadphaseProxy::m_aabbMax()
	static int _bind_getAabbMax(lua_State *L) {
		if (!_lg_typecheck_getAabbMax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btBroadphaseProxy::m_aabbMax() function, expected prototype:\nbtVector3 btBroadphaseProxy::m_aabbMax()\nClass arguments details:\n");
		}


		btBroadphaseProxy* self=(Luna< btBroadphaseProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btBroadphaseProxy::m_aabbMax(). Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_aabbMax;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btBroadphaseProxy::m_clientObject(void * value)
	static int _bind_setClientObject(lua_State *L) {
		if (!_lg_typecheck_setClientObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBroadphaseProxy::m_clientObject(void * value) function, expected prototype:\nvoid btBroadphaseProxy::m_clientObject(void * value)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,2));

		btBroadphaseProxy* self=(Luna< btBroadphaseProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBroadphaseProxy::m_clientObject(void *). Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		self->m_clientObject = value;

		return 0;
	}

	// void btBroadphaseProxy::m_collisionFilterGroup(short int value)
	static int _bind_setCollisionFilterGroup(lua_State *L) {
		if (!_lg_typecheck_setCollisionFilterGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBroadphaseProxy::m_collisionFilterGroup(short int value) function, expected prototype:\nvoid btBroadphaseProxy::m_collisionFilterGroup(short int value)\nClass arguments details:\n");
		}

		short int value=(short int)lua_tointeger(L,2);

		btBroadphaseProxy* self=(Luna< btBroadphaseProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBroadphaseProxy::m_collisionFilterGroup(short int). Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		self->m_collisionFilterGroup = value;

		return 0;
	}

	// void btBroadphaseProxy::m_collisionFilterMask(short int value)
	static int _bind_setCollisionFilterMask(lua_State *L) {
		if (!_lg_typecheck_setCollisionFilterMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBroadphaseProxy::m_collisionFilterMask(short int value) function, expected prototype:\nvoid btBroadphaseProxy::m_collisionFilterMask(short int value)\nClass arguments details:\n");
		}

		short int value=(short int)lua_tointeger(L,2);

		btBroadphaseProxy* self=(Luna< btBroadphaseProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBroadphaseProxy::m_collisionFilterMask(short int). Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		self->m_collisionFilterMask = value;

		return 0;
	}

	// void btBroadphaseProxy::m_multiSapParentProxy(void * value)
	static int _bind_setMultiSapParentProxy(lua_State *L) {
		if (!_lg_typecheck_setMultiSapParentProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBroadphaseProxy::m_multiSapParentProxy(void * value) function, expected prototype:\nvoid btBroadphaseProxy::m_multiSapParentProxy(void * value)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,2));

		btBroadphaseProxy* self=(Luna< btBroadphaseProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBroadphaseProxy::m_multiSapParentProxy(void *). Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		self->m_multiSapParentProxy = value;

		return 0;
	}

	// void btBroadphaseProxy::m_uniqueId(int value)
	static int _bind_setUniqueId(lua_State *L) {
		if (!_lg_typecheck_setUniqueId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBroadphaseProxy::m_uniqueId(int value) function, expected prototype:\nvoid btBroadphaseProxy::m_uniqueId(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btBroadphaseProxy* self=(Luna< btBroadphaseProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBroadphaseProxy::m_uniqueId(int). Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		self->m_uniqueId = value;

		return 0;
	}

	// void btBroadphaseProxy::m_aabbMin(btVector3 value)
	static int _bind_setAabbMin(lua_State *L) {
		if (!_lg_typecheck_setAabbMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBroadphaseProxy::m_aabbMin(btVector3 value) function, expected prototype:\nvoid btBroadphaseProxy::m_aabbMin(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btBroadphaseProxy::m_aabbMin function");
		}
		btVector3 value=*value_ptr;

		btBroadphaseProxy* self=(Luna< btBroadphaseProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBroadphaseProxy::m_aabbMin(btVector3). Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		self->m_aabbMin = value;

		return 0;
	}

	// void btBroadphaseProxy::m_aabbMax(btVector3 value)
	static int _bind_setAabbMax(lua_State *L) {
		if (!_lg_typecheck_setAabbMax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBroadphaseProxy::m_aabbMax(btVector3 value) function, expected prototype:\nvoid btBroadphaseProxy::m_aabbMax(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btBroadphaseProxy::m_aabbMax function");
		}
		btVector3 value=*value_ptr;

		btBroadphaseProxy* self=(Luna< btBroadphaseProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBroadphaseProxy::m_aabbMax(btVector3). Got : '%s'",typeid(Luna< btBroadphaseProxy >::check(L,1)).name());
		}
		self->m_aabbMax = value;

		return 0;
	}


	// Operator binds:

};

btBroadphaseProxy* LunaTraits< btBroadphaseProxy >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btBroadphaseProxy::_bind_ctor(L);
}

void LunaTraits< btBroadphaseProxy >::_bind_dtor(btBroadphaseProxy* obj) {
	delete obj;
}

const char LunaTraits< btBroadphaseProxy >::className[] = "btBroadphaseProxy";
const char LunaTraits< btBroadphaseProxy >::fullName[] = "btBroadphaseProxy";
const char LunaTraits< btBroadphaseProxy >::moduleName[] = "bullet";
const char* LunaTraits< btBroadphaseProxy >::parents[] = {0};
const int LunaTraits< btBroadphaseProxy >::hash = 44086089;
const int LunaTraits< btBroadphaseProxy >::uniqueIDs[] = {44086089,0};

luna_RegType LunaTraits< btBroadphaseProxy >::methods[] = {
	{"getUid", &luna_wrapper_btBroadphaseProxy::_bind_getUid},
	{"isPolyhedral", &luna_wrapper_btBroadphaseProxy::_bind_isPolyhedral},
	{"isConvex", &luna_wrapper_btBroadphaseProxy::_bind_isConvex},
	{"isNonMoving", &luna_wrapper_btBroadphaseProxy::_bind_isNonMoving},
	{"isConcave", &luna_wrapper_btBroadphaseProxy::_bind_isConcave},
	{"isCompound", &luna_wrapper_btBroadphaseProxy::_bind_isCompound},
	{"isSoftBody", &luna_wrapper_btBroadphaseProxy::_bind_isSoftBody},
	{"isInfinite", &luna_wrapper_btBroadphaseProxy::_bind_isInfinite},
	{"isConvex2d", &luna_wrapper_btBroadphaseProxy::_bind_isConvex2d},
	{"getClientObject", &luna_wrapper_btBroadphaseProxy::_bind_getClientObject},
	{"getCollisionFilterGroup", &luna_wrapper_btBroadphaseProxy::_bind_getCollisionFilterGroup},
	{"getCollisionFilterMask", &luna_wrapper_btBroadphaseProxy::_bind_getCollisionFilterMask},
	{"getMultiSapParentProxy", &luna_wrapper_btBroadphaseProxy::_bind_getMultiSapParentProxy},
	{"getUniqueId", &luna_wrapper_btBroadphaseProxy::_bind_getUniqueId},
	{"getAabbMin", &luna_wrapper_btBroadphaseProxy::_bind_getAabbMin},
	{"getAabbMax", &luna_wrapper_btBroadphaseProxy::_bind_getAabbMax},
	{"setClientObject", &luna_wrapper_btBroadphaseProxy::_bind_setClientObject},
	{"setCollisionFilterGroup", &luna_wrapper_btBroadphaseProxy::_bind_setCollisionFilterGroup},
	{"setCollisionFilterMask", &luna_wrapper_btBroadphaseProxy::_bind_setCollisionFilterMask},
	{"setMultiSapParentProxy", &luna_wrapper_btBroadphaseProxy::_bind_setMultiSapParentProxy},
	{"setUniqueId", &luna_wrapper_btBroadphaseProxy::_bind_setUniqueId},
	{"setAabbMin", &luna_wrapper_btBroadphaseProxy::_bind_setAabbMin},
	{"setAabbMax", &luna_wrapper_btBroadphaseProxy::_bind_setAabbMax},
	{"dynCast", &luna_wrapper_btBroadphaseProxy::_bind_dynCast},
	{"__eq", &luna_wrapper_btBroadphaseProxy::_bind___eq},
	{"fromVoid", &luna_wrapper_btBroadphaseProxy::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btBroadphaseProxy::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btBroadphaseProxy >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btBroadphaseProxy >::enumValues[] = {
	{"DefaultFilter", btBroadphaseProxy::DefaultFilter},
	{"StaticFilter", btBroadphaseProxy::StaticFilter},
	{"KinematicFilter", btBroadphaseProxy::KinematicFilter},
	{"DebrisFilter", btBroadphaseProxy::DebrisFilter},
	{"SensorTrigger", btBroadphaseProxy::SensorTrigger},
	{"CharacterFilter", btBroadphaseProxy::CharacterFilter},
	{"AllFilter", btBroadphaseProxy::AllFilter},
	{0,0}
};


