#include <plug_common.h>

#include <luna/wrappers/wrapper_btAxisSweep3.h>

class luna_wrapper_btAxisSweep3 {
public:
	typedef Luna< btAxisSweep3 > luna_t;

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
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_btBroadphaseInterface(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btAxisSweep3* ptr= dynamic_cast< btAxisSweep3* >(Luna< btBroadphaseInterface >::check(L,1));
		btAxisSweep3* ptr= luna_caster< btBroadphaseInterface, btAxisSweep3 >::cast(Luna< btBroadphaseInterface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btAxisSweep3 >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,78133027)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,4)) ) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,78133027)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !(Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,5)) ) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_base_calculateOverlappingPairs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_resetPool(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,71097681)) ) return false;
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
	// btAxisSweep3::btAxisSweep3(const btVector3 & worldAabbMin, const btVector3 & worldAabbMax, unsigned short int maxHandles = 16384, btOverlappingPairCache * pairCache = 0, bool disableRaycastAccelerator = false)
	static btAxisSweep3* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAxisSweep3::btAxisSweep3(const btVector3 & worldAabbMin, const btVector3 & worldAabbMax, unsigned short int maxHandles = 16384, btOverlappingPairCache * pairCache = 0, bool disableRaycastAccelerator = false) function, expected prototype:\nbtAxisSweep3::btAxisSweep3(const btVector3 & worldAabbMin, const btVector3 & worldAabbMax, unsigned short int maxHandles = 16384, btOverlappingPairCache * pairCache = 0, bool disableRaycastAccelerator = false)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 4 ID = 78133027\n");
		}

		int luatop = lua_gettop(L);

		const btVector3* worldAabbMin_ptr=(Luna< btVector3 >::check(L,1));
		if( !worldAabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg worldAabbMin in btAxisSweep3::btAxisSweep3 function");
		}
		const btVector3 & worldAabbMin=*worldAabbMin_ptr;
		const btVector3* worldAabbMax_ptr=(Luna< btVector3 >::check(L,2));
		if( !worldAabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg worldAabbMax in btAxisSweep3::btAxisSweep3 function");
		}
		const btVector3 & worldAabbMax=*worldAabbMax_ptr;
		unsigned short int maxHandles=luatop>2 ? (unsigned short int)lua_tointeger(L,3) : 16384;
		btOverlappingPairCache* pairCache=luatop>3 ? (Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,4)) : (btOverlappingPairCache*)0;
		bool disableRaycastAccelerator=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : false;

		return new btAxisSweep3(worldAabbMin, worldAabbMax, maxHandles, pairCache, disableRaycastAccelerator);
	}

	// btAxisSweep3::btAxisSweep3(lua_Table * data, const btVector3 & worldAabbMin, const btVector3 & worldAabbMax, unsigned short int maxHandles = 16384, btOverlappingPairCache * pairCache = 0, bool disableRaycastAccelerator = false)
	static btAxisSweep3* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAxisSweep3::btAxisSweep3(lua_Table * data, const btVector3 & worldAabbMin, const btVector3 & worldAabbMax, unsigned short int maxHandles = 16384, btOverlappingPairCache * pairCache = 0, bool disableRaycastAccelerator = false) function, expected prototype:\nbtAxisSweep3::btAxisSweep3(lua_Table * data, const btVector3 & worldAabbMin, const btVector3 & worldAabbMax, unsigned short int maxHandles = 16384, btOverlappingPairCache * pairCache = 0, bool disableRaycastAccelerator = false)\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 5 ID = 78133027\n");
		}

		int luatop = lua_gettop(L);

		const btVector3* worldAabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !worldAabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg worldAabbMin in btAxisSweep3::btAxisSweep3 function");
		}
		const btVector3 & worldAabbMin=*worldAabbMin_ptr;
		const btVector3* worldAabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !worldAabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg worldAabbMax in btAxisSweep3::btAxisSweep3 function");
		}
		const btVector3 & worldAabbMax=*worldAabbMax_ptr;
		unsigned short int maxHandles=luatop>3 ? (unsigned short int)lua_tointeger(L,4) : 16384;
		btOverlappingPairCache* pairCache=luatop>4 ? (Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,5)) : (btOverlappingPairCache*)0;
		bool disableRaycastAccelerator=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : false;

		return new wrapper_btAxisSweep3(L,NULL, worldAabbMin, worldAabbMax, maxHandles, pairCache, disableRaycastAccelerator);
	}

	// Overload binder for btAxisSweep3::btAxisSweep3
	static btAxisSweep3* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btAxisSweep3, cannot match any of the overloads for function btAxisSweep3:\n  btAxisSweep3(const btVector3 &, const btVector3 &, unsigned short int, btOverlappingPairCache *, bool)\n  btAxisSweep3(lua_Table *, const btVector3 &, const btVector3 &, unsigned short int, btOverlappingPairCache *, bool)\n");
		return NULL;
	}


	// Function binds:
	// void btAxisSweep3::base_calculateOverlappingPairs(btDispatcher * dispatcher)
	static int _bind_base_calculateOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_base_calculateOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btAxisSweep3::base_calculateOverlappingPairs(btDispatcher * dispatcher) function, expected prototype:\nvoid btAxisSweep3::base_calculateOverlappingPairs(btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 71097681\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));

		btAxisSweep3* self=Luna< btBroadphaseInterface >::checkSubType< btAxisSweep3 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btAxisSweep3::base_calculateOverlappingPairs(btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btAxisSweep3::calculateOverlappingPairs(dispatcher);

		return 0;
	}

	// void btAxisSweep3::base_resetPool(btDispatcher * dispatcher)
	static int _bind_base_resetPool(lua_State *L) {
		if (!_lg_typecheck_base_resetPool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btAxisSweep3::base_resetPool(btDispatcher * dispatcher) function, expected prototype:\nvoid btAxisSweep3::base_resetPool(btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 71097681\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));

		btAxisSweep3* self=Luna< btBroadphaseInterface >::checkSubType< btAxisSweep3 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btAxisSweep3::base_resetPool(btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btAxisSweep3::resetPool(dispatcher);

		return 0;
	}

	// btBroadphaseProxy * btAxisSweep3::base_createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy)
	static int _bind_base_createProxy(lua_State *L) {
		if (!_lg_typecheck_base_createProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphaseProxy * btAxisSweep3::base_createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy) function, expected prototype:\nbtBroadphaseProxy * btAxisSweep3::base_createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 7 ID = 71097681\n");
		}

		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btAxisSweep3::base_createProxy function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btAxisSweep3::base_createProxy function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;
		int shapeType=(int)lua_tointeger(L,4);
		void* userPtr=(Luna< void >::check(L,5));
		short int collisionFilterGroup=(short int)lua_tointeger(L,6);
		short int collisionFilterMask=(short int)lua_tointeger(L,7);
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,8));
		void* multiSapProxy=(Luna< void >::check(L,9));

		btAxisSweep3* self=Luna< btBroadphaseInterface >::checkSubType< btAxisSweep3 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphaseProxy * btAxisSweep3::base_createProxy(const btVector3 &, const btVector3 &, int, void *, short int, short int, btDispatcher *, void *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		btBroadphaseProxy * lret = self->btAxisSweep3::createProxy(aabbMin, aabbMax, shapeType, userPtr, collisionFilterGroup, collisionFilterMask, dispatcher, multiSapProxy);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphaseProxy >::push(L,lret,false);

		return 1;
	}

	// void btAxisSweep3::base_destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	static int _bind_base_destroyProxy(lua_State *L) {
		if (!_lg_typecheck_base_destroyProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btAxisSweep3::base_destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher) function, expected prototype:\nvoid btAxisSweep3::base_destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btAxisSweep3* self=Luna< btBroadphaseInterface >::checkSubType< btAxisSweep3 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btAxisSweep3::base_destroyProxy(btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btAxisSweep3::destroyProxy(proxy, dispatcher);

		return 0;
	}

	// void btAxisSweep3::base_setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher)
	static int _bind_base_setAabb(lua_State *L) {
		if (!_lg_typecheck_base_setAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btAxisSweep3::base_setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher) function, expected prototype:\nvoid btAxisSweep3::base_setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btAxisSweep3::base_setAabb function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btAxisSweep3::base_setAabb function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,5));

		btAxisSweep3* self=Luna< btBroadphaseInterface >::checkSubType< btAxisSweep3 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btAxisSweep3::base_setAabb(btBroadphaseProxy *, const btVector3 &, const btVector3 &, btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btAxisSweep3::setAabb(proxy, aabbMin, aabbMax, dispatcher);

		return 0;
	}

	// void btAxisSweep3::base_getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btAxisSweep3::base_getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btAxisSweep3::base_getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btAxisSweep3::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btAxisSweep3::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btAxisSweep3* self=Luna< btBroadphaseInterface >::checkSubType< btAxisSweep3 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btAxisSweep3::base_getAabb(btBroadphaseProxy *, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btAxisSweep3::getAabb(proxy, aabbMin, aabbMax);

		return 0;
	}

	// void btAxisSweep3::base_rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0))
	static int _bind_base_rayTest(lua_State *L) {
		if (!_lg_typecheck_base_rayTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btAxisSweep3::base_rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0)) function, expected prototype:\nvoid btAxisSweep3::base_rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0))\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 52132875\narg 4 ID = 91544891\narg 5 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		const btVector3* rayFrom_ptr=(Luna< btVector3 >::check(L,2));
		if( !rayFrom_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayFrom in btAxisSweep3::base_rayTest function");
		}
		const btVector3 & rayFrom=*rayFrom_ptr;
		const btVector3* rayTo_ptr=(Luna< btVector3 >::check(L,3));
		if( !rayTo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayTo in btAxisSweep3::base_rayTest function");
		}
		const btVector3 & rayTo=*rayTo_ptr;
		btBroadphaseRayCallback* rayCallback_ptr=(Luna< btBroadphaseAabbCallback >::checkSubType< btBroadphaseRayCallback >(L,4));
		if( !rayCallback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayCallback in btAxisSweep3::base_rayTest function");
		}
		btBroadphaseRayCallback & rayCallback=*rayCallback_ptr;
		const btVector3* aabbMin_ptr=luatop>4 ? (Luna< btVector3 >::check(L,5)) : NULL;
		if( luatop>4 && !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btAxisSweep3::base_rayTest function");
		}
		const btVector3 & aabbMin=luatop>4 ? *aabbMin_ptr : btVector3 (0, 0, 0);
		const btVector3* aabbMax_ptr=luatop>5 ? (Luna< btVector3 >::check(L,6)) : NULL;
		if( luatop>5 && !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btAxisSweep3::base_rayTest function");
		}
		const btVector3 & aabbMax=luatop>5 ? *aabbMax_ptr : btVector3 (0, 0, 0);

		btAxisSweep3* self=Luna< btBroadphaseInterface >::checkSubType< btAxisSweep3 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btAxisSweep3::base_rayTest(const btVector3 &, const btVector3 &, btBroadphaseRayCallback &, const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btAxisSweep3::rayTest(rayFrom, rayTo, rayCallback, aabbMin, aabbMax);

		return 0;
	}

	// void btAxisSweep3::base_aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback)
	static int _bind_base_aabbTest(lua_State *L) {
		if (!_lg_typecheck_base_aabbTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btAxisSweep3::base_aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback) function, expected prototype:\nvoid btAxisSweep3::base_aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 52132875\n");
		}

		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btAxisSweep3::base_aabbTest function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btAxisSweep3::base_aabbTest function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;
		btBroadphaseAabbCallback* callback_ptr=(Luna< btBroadphaseAabbCallback >::check(L,4));
		if( !callback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg callback in btAxisSweep3::base_aabbTest function");
		}
		btBroadphaseAabbCallback & callback=*callback_ptr;

		btAxisSweep3* self=Luna< btBroadphaseInterface >::checkSubType< btAxisSweep3 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btAxisSweep3::base_aabbTest(const btVector3 &, const btVector3 &, btBroadphaseAabbCallback &). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btAxisSweep3::aabbTest(aabbMin, aabbMax, callback);

		return 0;
	}

	// btOverlappingPairCache * btAxisSweep3::base_getOverlappingPairCache()
	static int _bind_base_getOverlappingPairCache_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getOverlappingPairCache_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btOverlappingPairCache * btAxisSweep3::base_getOverlappingPairCache() function, expected prototype:\nbtOverlappingPairCache * btAxisSweep3::base_getOverlappingPairCache()\nClass arguments details:\n");
		}


		btAxisSweep3* self=Luna< btBroadphaseInterface >::checkSubType< btAxisSweep3 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btOverlappingPairCache * btAxisSweep3::base_getOverlappingPairCache(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		btOverlappingPairCache * lret = self->btAxisSweep3::getOverlappingPairCache();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btOverlappingPairCache >::push(L,lret,false);

		return 1;
	}

	// const btOverlappingPairCache * btAxisSweep3::base_getOverlappingPairCache() const
	static int _bind_base_getOverlappingPairCache_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getOverlappingPairCache_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btOverlappingPairCache * btAxisSweep3::base_getOverlappingPairCache() const function, expected prototype:\nconst btOverlappingPairCache * btAxisSweep3::base_getOverlappingPairCache() const\nClass arguments details:\n");
		}


		btAxisSweep3* self=Luna< btBroadphaseInterface >::checkSubType< btAxisSweep3 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btOverlappingPairCache * btAxisSweep3::base_getOverlappingPairCache() const. Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		const btOverlappingPairCache * lret = self->btAxisSweep3::getOverlappingPairCache();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btOverlappingPairCache >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btAxisSweep3::base_getOverlappingPairCache
	static int _bind_base_getOverlappingPairCache(lua_State *L) {
		if (_lg_typecheck_base_getOverlappingPairCache_overload_1(L)) return _bind_base_getOverlappingPairCache_overload_1(L);
		if (_lg_typecheck_base_getOverlappingPairCache_overload_2(L)) return _bind_base_getOverlappingPairCache_overload_2(L);

		luaL_error(L, "error in function base_getOverlappingPairCache, cannot match any of the overloads for function base_getOverlappingPairCache:\n  base_getOverlappingPairCache()\n  base_getOverlappingPairCache()\n");
		return 0;
	}

	// void btAxisSweep3::base_getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getBroadphaseAabb(lua_State *L) {
		if (!_lg_typecheck_base_getBroadphaseAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btAxisSweep3::base_getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btAxisSweep3::base_getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btAxisSweep3::base_getBroadphaseAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btAxisSweep3::base_getBroadphaseAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btAxisSweep3* self=Luna< btBroadphaseInterface >::checkSubType< btAxisSweep3 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btAxisSweep3::base_getBroadphaseAabb(btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btAxisSweep3::getBroadphaseAabb(aabbMin, aabbMax);

		return 0;
	}

	// void btAxisSweep3::base_printStats()
	static int _bind_base_printStats(lua_State *L) {
		if (!_lg_typecheck_base_printStats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btAxisSweep3::base_printStats() function, expected prototype:\nvoid btAxisSweep3::base_printStats()\nClass arguments details:\n");
		}


		btAxisSweep3* self=Luna< btBroadphaseInterface >::checkSubType< btAxisSweep3 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btAxisSweep3::base_printStats(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btAxisSweep3::printStats();

		return 0;
	}


	// Operator binds:

};

btAxisSweep3* LunaTraits< btAxisSweep3 >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btAxisSweep3::_bind_ctor(L);
}

void LunaTraits< btAxisSweep3 >::_bind_dtor(btAxisSweep3* obj) {
	delete obj;
}

const char LunaTraits< btAxisSweep3 >::className[] = "btAxisSweep3";
const char LunaTraits< btAxisSweep3 >::fullName[] = "btAxisSweep3";
const char LunaTraits< btAxisSweep3 >::moduleName[] = "bullet";
const char* LunaTraits< btAxisSweep3 >::parents[] = {0};
const int LunaTraits< btAxisSweep3 >::hash = 13667632;
const int LunaTraits< btAxisSweep3 >::uniqueIDs[] = {25261840,0};

luna_RegType LunaTraits< btAxisSweep3 >::methods[] = {
	{"base_calculateOverlappingPairs", &luna_wrapper_btAxisSweep3::_bind_base_calculateOverlappingPairs},
	{"base_resetPool", &luna_wrapper_btAxisSweep3::_bind_base_resetPool},
	{"base_createProxy", &luna_wrapper_btAxisSweep3::_bind_base_createProxy},
	{"base_destroyProxy", &luna_wrapper_btAxisSweep3::_bind_base_destroyProxy},
	{"base_setAabb", &luna_wrapper_btAxisSweep3::_bind_base_setAabb},
	{"base_getAabb", &luna_wrapper_btAxisSweep3::_bind_base_getAabb},
	{"base_rayTest", &luna_wrapper_btAxisSweep3::_bind_base_rayTest},
	{"base_aabbTest", &luna_wrapper_btAxisSweep3::_bind_base_aabbTest},
	{"base_getOverlappingPairCache", &luna_wrapper_btAxisSweep3::_bind_base_getOverlappingPairCache},
	{"base_getBroadphaseAabb", &luna_wrapper_btAxisSweep3::_bind_base_getBroadphaseAabb},
	{"base_printStats", &luna_wrapper_btAxisSweep3::_bind_base_printStats},
	{"__eq", &luna_wrapper_btAxisSweep3::_bind___eq},
	{"getTable", &luna_wrapper_btAxisSweep3::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btAxisSweep3 >::converters[] = {
	{"btBroadphaseInterface", &luna_wrapper_btAxisSweep3::_cast_from_btBroadphaseInterface},
	{0,0}
};

luna_RegEnumType LunaTraits< btAxisSweep3 >::enumValues[] = {
	{0,0}
};


