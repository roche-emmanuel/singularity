#include <plug_common.h>

#include <luna/wrappers/wrapper_btSimpleBroadphase.h>

class luna_wrapper_btSimpleBroadphase {
public:
	typedef Luna< btSimpleBroadphase > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btBroadphaseInterface* self=(Luna< btBroadphaseInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btBroadphaseInterface,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25261840) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btBroadphaseInterface*)");
		}

		btBroadphaseInterface* rhs =(Luna< btBroadphaseInterface >::check(L,2));
		btBroadphaseInterface* self=(Luna< btBroadphaseInterface >::check(L,1));
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

		btSimpleBroadphase* self= (btSimpleBroadphase*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btSimpleBroadphase >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25261840) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btBroadphaseInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btBroadphaseInterface(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btSimpleBroadphase* ptr= dynamic_cast< btSimpleBroadphase* >(Luna< btBroadphaseInterface >::check(L,1));
		btSimpleBroadphase* ptr= luna_caster< btBroadphaseInterface, btSimpleBroadphase >::cast(Luna< btBroadphaseInterface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btSimpleBroadphase >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,78133027)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,78133027)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,3)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_createProxy(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,71097681)) ) return false;
		if( (lua_isnil(L,9)==0 && !Luna<void>::has_uniqueid(L,9,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_calculateOverlappingPairs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_destroyProxy(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAabb(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_rayTest(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,52132875) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_aabbTest(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,52132875) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOverlappingPairCache_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOverlappingPairCache_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_testAabbOverlap(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBroadphaseAabb(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_printStats(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_aabbOverlap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44086089)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_createProxy(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,71097681)) ) return false;
		if( (lua_isnil(L,9)==0 && !Luna<void>::has_uniqueid(L,9,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_calculateOverlappingPairs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_destroyProxy(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setAabb(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_rayTest(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,52132875) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_aabbTest(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,52132875) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getOverlappingPairCache_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getOverlappingPairCache_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getBroadphaseAabb(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_printStats(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btSimpleBroadphase::btSimpleBroadphase(int maxProxies = 16384, btOverlappingPairCache * overlappingPairCache = 0)
	static btSimpleBroadphase* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btSimpleBroadphase::btSimpleBroadphase(int maxProxies = 16384, btOverlappingPairCache * overlappingPairCache = 0) function, expected prototype:\nbtSimpleBroadphase::btSimpleBroadphase(int maxProxies = 16384, btOverlappingPairCache * overlappingPairCache = 0)\nClass arguments details:\narg 2 ID = 78133027\n");
		}

		int luatop = lua_gettop(L);

		int maxProxies=luatop>0 ? (int)lua_tointeger(L,1) : (int)16384;
		btOverlappingPairCache* overlappingPairCache=luatop>1 ? (Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,2)) : (btOverlappingPairCache*)0;

		return new btSimpleBroadphase(maxProxies, overlappingPairCache);
	}

	// btSimpleBroadphase::btSimpleBroadphase(lua_Table * data, int maxProxies = 16384, btOverlappingPairCache * overlappingPairCache = 0)
	static btSimpleBroadphase* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btSimpleBroadphase::btSimpleBroadphase(lua_Table * data, int maxProxies = 16384, btOverlappingPairCache * overlappingPairCache = 0) function, expected prototype:\nbtSimpleBroadphase::btSimpleBroadphase(lua_Table * data, int maxProxies = 16384, btOverlappingPairCache * overlappingPairCache = 0)\nClass arguments details:\narg 3 ID = 78133027\n");
		}

		int luatop = lua_gettop(L);

		int maxProxies=luatop>1 ? (int)lua_tointeger(L,2) : (int)16384;
		btOverlappingPairCache* overlappingPairCache=luatop>2 ? (Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,3)) : (btOverlappingPairCache*)0;

		return new wrapper_btSimpleBroadphase(L,NULL, maxProxies, overlappingPairCache);
	}

	// Overload binder for btSimpleBroadphase::btSimpleBroadphase
	static btSimpleBroadphase* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btSimpleBroadphase, cannot match any of the overloads for function btSimpleBroadphase:\n  btSimpleBroadphase(int, btOverlappingPairCache *)\n  btSimpleBroadphase(lua_Table *, int, btOverlappingPairCache *)\n");
		return NULL;
	}


	// Function binds:
	// btBroadphaseProxy * btSimpleBroadphase::createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy)
	static int _bind_createProxy(lua_State *L) {
		if (!_lg_typecheck_createProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphaseProxy * btSimpleBroadphase::createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy) function, expected prototype:\nbtBroadphaseProxy * btSimpleBroadphase::createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 7 ID = 71097681\n");
		}

		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btSimpleBroadphase::createProxy function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btSimpleBroadphase::createProxy function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;
		int shapeType=(int)lua_tointeger(L,4);
		void* userPtr=(Luna< void >::check(L,5));
		short int collisionFilterGroup=(short int)lua_tointeger(L,6);
		short int collisionFilterMask=(short int)lua_tointeger(L,7);
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,8));
		void* multiSapProxy=(Luna< void >::check(L,9));

		btSimpleBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btSimpleBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphaseProxy * btSimpleBroadphase::createProxy(const btVector3 &, const btVector3 &, int, void *, short int, short int, btDispatcher *, void *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		btBroadphaseProxy * lret = self->createProxy(aabbMin, aabbMax, shapeType, userPtr, collisionFilterGroup, collisionFilterMask, dispatcher, multiSapProxy);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphaseProxy >::push(L,lret,false);

		return 1;
	}

	// void btSimpleBroadphase::calculateOverlappingPairs(btDispatcher * dispatcher)
	static int _bind_calculateOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_calculateOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleBroadphase::calculateOverlappingPairs(btDispatcher * dispatcher) function, expected prototype:\nvoid btSimpleBroadphase::calculateOverlappingPairs(btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 71097681\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));

		btSimpleBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btSimpleBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleBroadphase::calculateOverlappingPairs(btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->calculateOverlappingPairs(dispatcher);

		return 0;
	}

	// void btSimpleBroadphase::destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	static int _bind_destroyProxy(lua_State *L) {
		if (!_lg_typecheck_destroyProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleBroadphase::destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher) function, expected prototype:\nvoid btSimpleBroadphase::destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btSimpleBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btSimpleBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleBroadphase::destroyProxy(btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->destroyProxy(proxy, dispatcher);

		return 0;
	}

	// void btSimpleBroadphase::setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher)
	static int _bind_setAabb(lua_State *L) {
		if (!_lg_typecheck_setAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleBroadphase::setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher) function, expected prototype:\nvoid btSimpleBroadphase::setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btSimpleBroadphase::setAabb function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btSimpleBroadphase::setAabb function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,5));

		btSimpleBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btSimpleBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleBroadphase::setAabb(btBroadphaseProxy *, const btVector3 &, const btVector3 &, btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->setAabb(proxy, aabbMin, aabbMax, dispatcher);

		return 0;
	}

	// void btSimpleBroadphase::getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getAabb(lua_State *L) {
		if (!_lg_typecheck_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleBroadphase::getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btSimpleBroadphase::getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btSimpleBroadphase::getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btSimpleBroadphase::getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btSimpleBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btSimpleBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleBroadphase::getAabb(btBroadphaseProxy *, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->getAabb(proxy, aabbMin, aabbMax);

		return 0;
	}

	// void btSimpleBroadphase::rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0))
	static int _bind_rayTest(lua_State *L) {
		if (!_lg_typecheck_rayTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleBroadphase::rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0)) function, expected prototype:\nvoid btSimpleBroadphase::rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0))\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 52132875\narg 4 ID = 91544891\narg 5 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		const btVector3* rayFrom_ptr=(Luna< btVector3 >::check(L,2));
		if( !rayFrom_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayFrom in btSimpleBroadphase::rayTest function");
		}
		const btVector3 & rayFrom=*rayFrom_ptr;
		const btVector3* rayTo_ptr=(Luna< btVector3 >::check(L,3));
		if( !rayTo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayTo in btSimpleBroadphase::rayTest function");
		}
		const btVector3 & rayTo=*rayTo_ptr;
		btBroadphaseRayCallback* rayCallback_ptr=(Luna< btBroadphaseAabbCallback >::checkSubType< btBroadphaseRayCallback >(L,4));
		if( !rayCallback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayCallback in btSimpleBroadphase::rayTest function");
		}
		btBroadphaseRayCallback & rayCallback=*rayCallback_ptr;
		const btVector3* aabbMin_ptr=luatop>4 ? (Luna< btVector3 >::check(L,5)) : NULL;
		if( luatop>4 && !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btSimpleBroadphase::rayTest function");
		}
		const btVector3 & aabbMin=luatop>4 ? *aabbMin_ptr : (const btVector3&)btVector3 (0, 0, 0);
		const btVector3* aabbMax_ptr=luatop>5 ? (Luna< btVector3 >::check(L,6)) : NULL;
		if( luatop>5 && !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btSimpleBroadphase::rayTest function");
		}
		const btVector3 & aabbMax=luatop>5 ? *aabbMax_ptr : (const btVector3&)btVector3 (0, 0, 0);

		btSimpleBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btSimpleBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleBroadphase::rayTest(const btVector3 &, const btVector3 &, btBroadphaseRayCallback &, const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->rayTest(rayFrom, rayTo, rayCallback, aabbMin, aabbMax);

		return 0;
	}

	// void btSimpleBroadphase::aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback)
	static int _bind_aabbTest(lua_State *L) {
		if (!_lg_typecheck_aabbTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleBroadphase::aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback) function, expected prototype:\nvoid btSimpleBroadphase::aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 52132875\n");
		}

		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btSimpleBroadphase::aabbTest function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btSimpleBroadphase::aabbTest function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;
		btBroadphaseAabbCallback* callback_ptr=(Luna< btBroadphaseAabbCallback >::check(L,4));
		if( !callback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg callback in btSimpleBroadphase::aabbTest function");
		}
		btBroadphaseAabbCallback & callback=*callback_ptr;

		btSimpleBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btSimpleBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleBroadphase::aabbTest(const btVector3 &, const btVector3 &, btBroadphaseAabbCallback &). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->aabbTest(aabbMin, aabbMax, callback);

		return 0;
	}

	// btOverlappingPairCache * btSimpleBroadphase::getOverlappingPairCache()
	static int _bind_getOverlappingPairCache_overload_1(lua_State *L) {
		if (!_lg_typecheck_getOverlappingPairCache_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btOverlappingPairCache * btSimpleBroadphase::getOverlappingPairCache() function, expected prototype:\nbtOverlappingPairCache * btSimpleBroadphase::getOverlappingPairCache()\nClass arguments details:\n");
		}


		btSimpleBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btSimpleBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btOverlappingPairCache * btSimpleBroadphase::getOverlappingPairCache(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		btOverlappingPairCache * lret = self->getOverlappingPairCache();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btOverlappingPairCache >::push(L,lret,false);

		return 1;
	}

	// const btOverlappingPairCache * btSimpleBroadphase::getOverlappingPairCache() const
	static int _bind_getOverlappingPairCache_overload_2(lua_State *L) {
		if (!_lg_typecheck_getOverlappingPairCache_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btOverlappingPairCache * btSimpleBroadphase::getOverlappingPairCache() const function, expected prototype:\nconst btOverlappingPairCache * btSimpleBroadphase::getOverlappingPairCache() const\nClass arguments details:\n");
		}


		btSimpleBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btSimpleBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btOverlappingPairCache * btSimpleBroadphase::getOverlappingPairCache() const. Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		const btOverlappingPairCache * lret = self->getOverlappingPairCache();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btOverlappingPairCache >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btSimpleBroadphase::getOverlappingPairCache
	static int _bind_getOverlappingPairCache(lua_State *L) {
		if (_lg_typecheck_getOverlappingPairCache_overload_1(L)) return _bind_getOverlappingPairCache_overload_1(L);
		if (_lg_typecheck_getOverlappingPairCache_overload_2(L)) return _bind_getOverlappingPairCache_overload_2(L);

		luaL_error(L, "error in function getOverlappingPairCache, cannot match any of the overloads for function getOverlappingPairCache:\n  getOverlappingPairCache()\n  getOverlappingPairCache()\n");
		return 0;
	}

	// bool btSimpleBroadphase::testAabbOverlap(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)
	static int _bind_testAabbOverlap(lua_State *L) {
		if (!_lg_typecheck_testAabbOverlap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btSimpleBroadphase::testAabbOverlap(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) function, expected prototype:\nbool btSimpleBroadphase::testAabbOverlap(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* proxy1=(Luna< btBroadphaseProxy >::check(L,3));

		btSimpleBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btSimpleBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btSimpleBroadphase::testAabbOverlap(btBroadphaseProxy *, btBroadphaseProxy *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		bool lret = self->testAabbOverlap(proxy0, proxy1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btSimpleBroadphase::getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getBroadphaseAabb(lua_State *L) {
		if (!_lg_typecheck_getBroadphaseAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleBroadphase::getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btSimpleBroadphase::getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btSimpleBroadphase::getBroadphaseAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btSimpleBroadphase::getBroadphaseAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btSimpleBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btSimpleBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleBroadphase::getBroadphaseAabb(btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->getBroadphaseAabb(aabbMin, aabbMax);

		return 0;
	}

	// void btSimpleBroadphase::printStats()
	static int _bind_printStats(lua_State *L) {
		if (!_lg_typecheck_printStats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleBroadphase::printStats() function, expected prototype:\nvoid btSimpleBroadphase::printStats()\nClass arguments details:\n");
		}


		btSimpleBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btSimpleBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleBroadphase::printStats(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->printStats();

		return 0;
	}

	// static bool btSimpleBroadphase::aabbOverlap(btSimpleBroadphaseProxy * proxy0, btSimpleBroadphaseProxy * proxy1)
	static int _bind_aabbOverlap(lua_State *L) {
		if (!_lg_typecheck_aabbOverlap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool btSimpleBroadphase::aabbOverlap(btSimpleBroadphaseProxy * proxy0, btSimpleBroadphaseProxy * proxy1) function, expected prototype:\nstatic bool btSimpleBroadphase::aabbOverlap(btSimpleBroadphaseProxy * proxy0, btSimpleBroadphaseProxy * proxy1)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\n");
		}

		btSimpleBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::checkSubType< btSimpleBroadphaseProxy >(L,1));
		btSimpleBroadphaseProxy* proxy1=(Luna< btBroadphaseProxy >::checkSubType< btSimpleBroadphaseProxy >(L,2));

		bool lret = btSimpleBroadphase::aabbOverlap(proxy0, proxy1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// btBroadphaseProxy * btSimpleBroadphase::base_createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy)
	static int _bind_base_createProxy(lua_State *L) {
		if (!_lg_typecheck_base_createProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphaseProxy * btSimpleBroadphase::base_createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy) function, expected prototype:\nbtBroadphaseProxy * btSimpleBroadphase::base_createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 7 ID = 71097681\n");
		}

		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btSimpleBroadphase::base_createProxy function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btSimpleBroadphase::base_createProxy function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;
		int shapeType=(int)lua_tointeger(L,4);
		void* userPtr=(Luna< void >::check(L,5));
		short int collisionFilterGroup=(short int)lua_tointeger(L,6);
		short int collisionFilterMask=(short int)lua_tointeger(L,7);
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,8));
		void* multiSapProxy=(Luna< void >::check(L,9));

		btSimpleBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btSimpleBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphaseProxy * btSimpleBroadphase::base_createProxy(const btVector3 &, const btVector3 &, int, void *, short int, short int, btDispatcher *, void *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		btBroadphaseProxy * lret = self->btSimpleBroadphase::createProxy(aabbMin, aabbMax, shapeType, userPtr, collisionFilterGroup, collisionFilterMask, dispatcher, multiSapProxy);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphaseProxy >::push(L,lret,false);

		return 1;
	}

	// void btSimpleBroadphase::base_calculateOverlappingPairs(btDispatcher * dispatcher)
	static int _bind_base_calculateOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_base_calculateOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleBroadphase::base_calculateOverlappingPairs(btDispatcher * dispatcher) function, expected prototype:\nvoid btSimpleBroadphase::base_calculateOverlappingPairs(btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 71097681\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));

		btSimpleBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btSimpleBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleBroadphase::base_calculateOverlappingPairs(btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btSimpleBroadphase::calculateOverlappingPairs(dispatcher);

		return 0;
	}

	// void btSimpleBroadphase::base_destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	static int _bind_base_destroyProxy(lua_State *L) {
		if (!_lg_typecheck_base_destroyProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleBroadphase::base_destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher) function, expected prototype:\nvoid btSimpleBroadphase::base_destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btSimpleBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btSimpleBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleBroadphase::base_destroyProxy(btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btSimpleBroadphase::destroyProxy(proxy, dispatcher);

		return 0;
	}

	// void btSimpleBroadphase::base_setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher)
	static int _bind_base_setAabb(lua_State *L) {
		if (!_lg_typecheck_base_setAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleBroadphase::base_setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher) function, expected prototype:\nvoid btSimpleBroadphase::base_setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btSimpleBroadphase::base_setAabb function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btSimpleBroadphase::base_setAabb function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,5));

		btSimpleBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btSimpleBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleBroadphase::base_setAabb(btBroadphaseProxy *, const btVector3 &, const btVector3 &, btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btSimpleBroadphase::setAabb(proxy, aabbMin, aabbMax, dispatcher);

		return 0;
	}

	// void btSimpleBroadphase::base_getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleBroadphase::base_getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btSimpleBroadphase::base_getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btSimpleBroadphase::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btSimpleBroadphase::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btSimpleBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btSimpleBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleBroadphase::base_getAabb(btBroadphaseProxy *, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btSimpleBroadphase::getAabb(proxy, aabbMin, aabbMax);

		return 0;
	}

	// void btSimpleBroadphase::base_rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0))
	static int _bind_base_rayTest(lua_State *L) {
		if (!_lg_typecheck_base_rayTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleBroadphase::base_rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0)) function, expected prototype:\nvoid btSimpleBroadphase::base_rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0))\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 52132875\narg 4 ID = 91544891\narg 5 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		const btVector3* rayFrom_ptr=(Luna< btVector3 >::check(L,2));
		if( !rayFrom_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayFrom in btSimpleBroadphase::base_rayTest function");
		}
		const btVector3 & rayFrom=*rayFrom_ptr;
		const btVector3* rayTo_ptr=(Luna< btVector3 >::check(L,3));
		if( !rayTo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayTo in btSimpleBroadphase::base_rayTest function");
		}
		const btVector3 & rayTo=*rayTo_ptr;
		btBroadphaseRayCallback* rayCallback_ptr=(Luna< btBroadphaseAabbCallback >::checkSubType< btBroadphaseRayCallback >(L,4));
		if( !rayCallback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayCallback in btSimpleBroadphase::base_rayTest function");
		}
		btBroadphaseRayCallback & rayCallback=*rayCallback_ptr;
		const btVector3* aabbMin_ptr=luatop>4 ? (Luna< btVector3 >::check(L,5)) : NULL;
		if( luatop>4 && !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btSimpleBroadphase::base_rayTest function");
		}
		const btVector3 & aabbMin=luatop>4 ? *aabbMin_ptr : (const btVector3&)btVector3 (0, 0, 0);
		const btVector3* aabbMax_ptr=luatop>5 ? (Luna< btVector3 >::check(L,6)) : NULL;
		if( luatop>5 && !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btSimpleBroadphase::base_rayTest function");
		}
		const btVector3 & aabbMax=luatop>5 ? *aabbMax_ptr : (const btVector3&)btVector3 (0, 0, 0);

		btSimpleBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btSimpleBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleBroadphase::base_rayTest(const btVector3 &, const btVector3 &, btBroadphaseRayCallback &, const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btSimpleBroadphase::rayTest(rayFrom, rayTo, rayCallback, aabbMin, aabbMax);

		return 0;
	}

	// void btSimpleBroadphase::base_aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback)
	static int _bind_base_aabbTest(lua_State *L) {
		if (!_lg_typecheck_base_aabbTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleBroadphase::base_aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback) function, expected prototype:\nvoid btSimpleBroadphase::base_aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 52132875\n");
		}

		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btSimpleBroadphase::base_aabbTest function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btSimpleBroadphase::base_aabbTest function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;
		btBroadphaseAabbCallback* callback_ptr=(Luna< btBroadphaseAabbCallback >::check(L,4));
		if( !callback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg callback in btSimpleBroadphase::base_aabbTest function");
		}
		btBroadphaseAabbCallback & callback=*callback_ptr;

		btSimpleBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btSimpleBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleBroadphase::base_aabbTest(const btVector3 &, const btVector3 &, btBroadphaseAabbCallback &). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btSimpleBroadphase::aabbTest(aabbMin, aabbMax, callback);

		return 0;
	}

	// btOverlappingPairCache * btSimpleBroadphase::base_getOverlappingPairCache()
	static int _bind_base_getOverlappingPairCache_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getOverlappingPairCache_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btOverlappingPairCache * btSimpleBroadphase::base_getOverlappingPairCache() function, expected prototype:\nbtOverlappingPairCache * btSimpleBroadphase::base_getOverlappingPairCache()\nClass arguments details:\n");
		}


		btSimpleBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btSimpleBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btOverlappingPairCache * btSimpleBroadphase::base_getOverlappingPairCache(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		btOverlappingPairCache * lret = self->btSimpleBroadphase::getOverlappingPairCache();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btOverlappingPairCache >::push(L,lret,false);

		return 1;
	}

	// const btOverlappingPairCache * btSimpleBroadphase::base_getOverlappingPairCache() const
	static int _bind_base_getOverlappingPairCache_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getOverlappingPairCache_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btOverlappingPairCache * btSimpleBroadphase::base_getOverlappingPairCache() const function, expected prototype:\nconst btOverlappingPairCache * btSimpleBroadphase::base_getOverlappingPairCache() const\nClass arguments details:\n");
		}


		btSimpleBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btSimpleBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btOverlappingPairCache * btSimpleBroadphase::base_getOverlappingPairCache() const. Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		const btOverlappingPairCache * lret = self->btSimpleBroadphase::getOverlappingPairCache();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btOverlappingPairCache >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btSimpleBroadphase::base_getOverlappingPairCache
	static int _bind_base_getOverlappingPairCache(lua_State *L) {
		if (_lg_typecheck_base_getOverlappingPairCache_overload_1(L)) return _bind_base_getOverlappingPairCache_overload_1(L);
		if (_lg_typecheck_base_getOverlappingPairCache_overload_2(L)) return _bind_base_getOverlappingPairCache_overload_2(L);

		luaL_error(L, "error in function base_getOverlappingPairCache, cannot match any of the overloads for function base_getOverlappingPairCache:\n  base_getOverlappingPairCache()\n  base_getOverlappingPairCache()\n");
		return 0;
	}

	// void btSimpleBroadphase::base_getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getBroadphaseAabb(lua_State *L) {
		if (!_lg_typecheck_base_getBroadphaseAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleBroadphase::base_getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btSimpleBroadphase::base_getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btSimpleBroadphase::base_getBroadphaseAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btSimpleBroadphase::base_getBroadphaseAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btSimpleBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btSimpleBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleBroadphase::base_getBroadphaseAabb(btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btSimpleBroadphase::getBroadphaseAabb(aabbMin, aabbMax);

		return 0;
	}

	// void btSimpleBroadphase::base_printStats()
	static int _bind_base_printStats(lua_State *L) {
		if (!_lg_typecheck_base_printStats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleBroadphase::base_printStats() function, expected prototype:\nvoid btSimpleBroadphase::base_printStats()\nClass arguments details:\n");
		}


		btSimpleBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btSimpleBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleBroadphase::base_printStats(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btSimpleBroadphase::printStats();

		return 0;
	}


	// Operator binds:

};

btSimpleBroadphase* LunaTraits< btSimpleBroadphase >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btSimpleBroadphase::_bind_ctor(L);
}

void LunaTraits< btSimpleBroadphase >::_bind_dtor(btSimpleBroadphase* obj) {
	delete obj;
}

const char LunaTraits< btSimpleBroadphase >::className[] = "btSimpleBroadphase";
const char LunaTraits< btSimpleBroadphase >::fullName[] = "btSimpleBroadphase";
const char LunaTraits< btSimpleBroadphase >::moduleName[] = "bullet";
const char* LunaTraits< btSimpleBroadphase >::parents[] = {"bullet.btBroadphaseInterface", 0};
const int LunaTraits< btSimpleBroadphase >::hash = 38651764;
const int LunaTraits< btSimpleBroadphase >::uniqueIDs[] = {25261840,0};

luna_RegType LunaTraits< btSimpleBroadphase >::methods[] = {
	{"createProxy", &luna_wrapper_btSimpleBroadphase::_bind_createProxy},
	{"calculateOverlappingPairs", &luna_wrapper_btSimpleBroadphase::_bind_calculateOverlappingPairs},
	{"destroyProxy", &luna_wrapper_btSimpleBroadphase::_bind_destroyProxy},
	{"setAabb", &luna_wrapper_btSimpleBroadphase::_bind_setAabb},
	{"getAabb", &luna_wrapper_btSimpleBroadphase::_bind_getAabb},
	{"rayTest", &luna_wrapper_btSimpleBroadphase::_bind_rayTest},
	{"aabbTest", &luna_wrapper_btSimpleBroadphase::_bind_aabbTest},
	{"getOverlappingPairCache", &luna_wrapper_btSimpleBroadphase::_bind_getOverlappingPairCache},
	{"testAabbOverlap", &luna_wrapper_btSimpleBroadphase::_bind_testAabbOverlap},
	{"getBroadphaseAabb", &luna_wrapper_btSimpleBroadphase::_bind_getBroadphaseAabb},
	{"printStats", &luna_wrapper_btSimpleBroadphase::_bind_printStats},
	{"aabbOverlap", &luna_wrapper_btSimpleBroadphase::_bind_aabbOverlap},
	{"base_createProxy", &luna_wrapper_btSimpleBroadphase::_bind_base_createProxy},
	{"base_calculateOverlappingPairs", &luna_wrapper_btSimpleBroadphase::_bind_base_calculateOverlappingPairs},
	{"base_destroyProxy", &luna_wrapper_btSimpleBroadphase::_bind_base_destroyProxy},
	{"base_setAabb", &luna_wrapper_btSimpleBroadphase::_bind_base_setAabb},
	{"base_getAabb", &luna_wrapper_btSimpleBroadphase::_bind_base_getAabb},
	{"base_rayTest", &luna_wrapper_btSimpleBroadphase::_bind_base_rayTest},
	{"base_aabbTest", &luna_wrapper_btSimpleBroadphase::_bind_base_aabbTest},
	{"base_getOverlappingPairCache", &luna_wrapper_btSimpleBroadphase::_bind_base_getOverlappingPairCache},
	{"base_getBroadphaseAabb", &luna_wrapper_btSimpleBroadphase::_bind_base_getBroadphaseAabb},
	{"base_printStats", &luna_wrapper_btSimpleBroadphase::_bind_base_printStats},
	{"__eq", &luna_wrapper_btSimpleBroadphase::_bind___eq},
	{"fromVoid", &luna_wrapper_btSimpleBroadphase::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btSimpleBroadphase::_bind_asVoid},
	{"getTable", &luna_wrapper_btSimpleBroadphase::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btSimpleBroadphase >::converters[] = {
	{"btBroadphaseInterface", &luna_wrapper_btSimpleBroadphase::_cast_from_btBroadphaseInterface},
	{0,0}
};

luna_RegEnumType LunaTraits< btSimpleBroadphase >::enumValues[] = {
	{0,0}
};


