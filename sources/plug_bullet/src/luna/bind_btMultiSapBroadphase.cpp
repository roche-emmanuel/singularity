#include <plug_common.h>

#include <luna/wrappers/wrapper_btMultiSapBroadphase.h>

class luna_wrapper_btMultiSapBroadphase {
public:
	typedef Luna< btMultiSapBroadphase > luna_t;

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

		btMultiSapBroadphase* self= (btMultiSapBroadphase*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btMultiSapBroadphase >::push(L,self,false);
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
		//btMultiSapBroadphase* ptr= dynamic_cast< btMultiSapBroadphase* >(Luna< btBroadphaseInterface >::check(L,1));
		btMultiSapBroadphase* ptr= luna_caster< btBroadphaseInterface, btMultiSapBroadphase >::cast(Luna< btBroadphaseInterface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btMultiSapBroadphase >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,78133027)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getBroadphaseArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBroadphaseArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

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

	inline static bool _lg_typecheck_addToChildBroadphase(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44086089)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,25261840)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_calculateOverlappingPairs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_testAabbOverlap(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44086089)) ) return false;
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

	inline static bool _lg_typecheck_getBroadphaseAabb(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_buildTree(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_printStats(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_resetPool(lua_State *L) {
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

	inline static bool _lg_typecheck_base_calculateOverlappingPairs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,71097681)) ) return false;
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

	inline static bool _lg_typecheck_base_resetPool(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,71097681)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btMultiSapBroadphase::btMultiSapBroadphase(lua_Table * data, int maxProxies = 16384, btOverlappingPairCache * pairCache = 0)
	static btMultiSapBroadphase* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMultiSapBroadphase::btMultiSapBroadphase(lua_Table * data, int maxProxies = 16384, btOverlappingPairCache * pairCache = 0) function, expected prototype:\nbtMultiSapBroadphase::btMultiSapBroadphase(lua_Table * data, int maxProxies = 16384, btOverlappingPairCache * pairCache = 0)\nClass arguments details:\narg 3 ID = 78133027\n");
		}

		int luatop = lua_gettop(L);

		int maxProxies=luatop>1 ? (int)lua_tointeger(L,2) : (int)16384;
		btOverlappingPairCache* pairCache=luatop>2 ? (Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,3)) : (btOverlappingPairCache*)0;

		return new wrapper_btMultiSapBroadphase(L,NULL, maxProxies, pairCache);
	}


	// Function binds:
	// btSapBroadphaseArray & btMultiSapBroadphase::getBroadphaseArray()
	static int _bind_getBroadphaseArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_getBroadphaseArray_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btSapBroadphaseArray & btMultiSapBroadphase::getBroadphaseArray() function, expected prototype:\nbtSapBroadphaseArray & btMultiSapBroadphase::getBroadphaseArray()\nClass arguments details:\n");
		}


		btMultiSapBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btMultiSapBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btSapBroadphaseArray & btMultiSapBroadphase::getBroadphaseArray(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		const btSapBroadphaseArray* lret = &self->getBroadphaseArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btSapBroadphaseArray >::push(L,lret,false);

		return 1;
	}

	// const btSapBroadphaseArray & btMultiSapBroadphase::getBroadphaseArray() const
	static int _bind_getBroadphaseArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_getBroadphaseArray_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btSapBroadphaseArray & btMultiSapBroadphase::getBroadphaseArray() const function, expected prototype:\nconst btSapBroadphaseArray & btMultiSapBroadphase::getBroadphaseArray() const\nClass arguments details:\n");
		}


		btMultiSapBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btMultiSapBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btSapBroadphaseArray & btMultiSapBroadphase::getBroadphaseArray() const. Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		const btSapBroadphaseArray* lret = &self->getBroadphaseArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btSapBroadphaseArray >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btMultiSapBroadphase::getBroadphaseArray
	static int _bind_getBroadphaseArray(lua_State *L) {
		if (_lg_typecheck_getBroadphaseArray_overload_1(L)) return _bind_getBroadphaseArray_overload_1(L);
		if (_lg_typecheck_getBroadphaseArray_overload_2(L)) return _bind_getBroadphaseArray_overload_2(L);

		luaL_error(L, "error in function getBroadphaseArray, cannot match any of the overloads for function getBroadphaseArray:\n  getBroadphaseArray()\n  getBroadphaseArray()\n");
		return 0;
	}

	// btBroadphaseProxy * btMultiSapBroadphase::createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy)
	static int _bind_createProxy(lua_State *L) {
		if (!_lg_typecheck_createProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphaseProxy * btMultiSapBroadphase::createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy) function, expected prototype:\nbtBroadphaseProxy * btMultiSapBroadphase::createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 7 ID = 71097681\n");
		}

		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btMultiSapBroadphase::createProxy function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btMultiSapBroadphase::createProxy function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;
		int shapeType=(int)lua_tointeger(L,4);
		void* userPtr=(Luna< void >::check(L,5));
		short int collisionFilterGroup=(short int)lua_tointeger(L,6);
		short int collisionFilterMask=(short int)lua_tointeger(L,7);
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,8));
		void* multiSapProxy=(Luna< void >::check(L,9));

		btMultiSapBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btMultiSapBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphaseProxy * btMultiSapBroadphase::createProxy(const btVector3 &, const btVector3 &, int, void *, short int, short int, btDispatcher *, void *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		btBroadphaseProxy * lret = self->createProxy(aabbMin, aabbMax, shapeType, userPtr, collisionFilterGroup, collisionFilterMask, dispatcher, multiSapProxy);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphaseProxy >::push(L,lret,false);

		return 1;
	}

	// void btMultiSapBroadphase::destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	static int _bind_destroyProxy(lua_State *L) {
		if (!_lg_typecheck_destroyProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSapBroadphase::destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher) function, expected prototype:\nvoid btMultiSapBroadphase::destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btMultiSapBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btMultiSapBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSapBroadphase::destroyProxy(btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->destroyProxy(proxy, dispatcher);

		return 0;
	}

	// void btMultiSapBroadphase::setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher)
	static int _bind_setAabb(lua_State *L) {
		if (!_lg_typecheck_setAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSapBroadphase::setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher) function, expected prototype:\nvoid btMultiSapBroadphase::setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btMultiSapBroadphase::setAabb function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btMultiSapBroadphase::setAabb function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,5));

		btMultiSapBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btMultiSapBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSapBroadphase::setAabb(btBroadphaseProxy *, const btVector3 &, const btVector3 &, btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->setAabb(proxy, aabbMin, aabbMax, dispatcher);

		return 0;
	}

	// void btMultiSapBroadphase::getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getAabb(lua_State *L) {
		if (!_lg_typecheck_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSapBroadphase::getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btMultiSapBroadphase::getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btMultiSapBroadphase::getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btMultiSapBroadphase::getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btMultiSapBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btMultiSapBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSapBroadphase::getAabb(btBroadphaseProxy *, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->getAabb(proxy, aabbMin, aabbMax);

		return 0;
	}

	// void btMultiSapBroadphase::rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0))
	static int _bind_rayTest(lua_State *L) {
		if (!_lg_typecheck_rayTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSapBroadphase::rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0)) function, expected prototype:\nvoid btMultiSapBroadphase::rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0))\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 52132875\narg 4 ID = 91544891\narg 5 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		const btVector3* rayFrom_ptr=(Luna< btVector3 >::check(L,2));
		if( !rayFrom_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayFrom in btMultiSapBroadphase::rayTest function");
		}
		const btVector3 & rayFrom=*rayFrom_ptr;
		const btVector3* rayTo_ptr=(Luna< btVector3 >::check(L,3));
		if( !rayTo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayTo in btMultiSapBroadphase::rayTest function");
		}
		const btVector3 & rayTo=*rayTo_ptr;
		btBroadphaseRayCallback* rayCallback_ptr=(Luna< btBroadphaseAabbCallback >::checkSubType< btBroadphaseRayCallback >(L,4));
		if( !rayCallback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayCallback in btMultiSapBroadphase::rayTest function");
		}
		btBroadphaseRayCallback & rayCallback=*rayCallback_ptr;
		const btVector3* aabbMin_ptr=luatop>4 ? (Luna< btVector3 >::check(L,5)) : NULL;
		if( luatop>4 && !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btMultiSapBroadphase::rayTest function");
		}
		const btVector3 & aabbMin=luatop>4 ? *aabbMin_ptr : (const btVector3&)btVector3 (0, 0, 0);
		const btVector3* aabbMax_ptr=luatop>5 ? (Luna< btVector3 >::check(L,6)) : NULL;
		if( luatop>5 && !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btMultiSapBroadphase::rayTest function");
		}
		const btVector3 & aabbMax=luatop>5 ? *aabbMax_ptr : (const btVector3&)btVector3 (0, 0, 0);

		btMultiSapBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btMultiSapBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSapBroadphase::rayTest(const btVector3 &, const btVector3 &, btBroadphaseRayCallback &, const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->rayTest(rayFrom, rayTo, rayCallback, aabbMin, aabbMax);

		return 0;
	}

	// void btMultiSapBroadphase::addToChildBroadphase(btMultiSapBroadphase::btMultiSapProxy * parentMultiSapProxy, btBroadphaseProxy * childProxy, btBroadphaseInterface * childBroadphase)
	static int _bind_addToChildBroadphase(lua_State *L) {
		if (!_lg_typecheck_addToChildBroadphase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSapBroadphase::addToChildBroadphase(btMultiSapBroadphase::btMultiSapProxy * parentMultiSapProxy, btBroadphaseProxy * childProxy, btBroadphaseInterface * childBroadphase) function, expected prototype:\nvoid btMultiSapBroadphase::addToChildBroadphase(btMultiSapBroadphase::btMultiSapProxy * parentMultiSapProxy, btBroadphaseProxy * childProxy, btBroadphaseInterface * childBroadphase)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\narg 3 ID = 25261840\n");
		}

		btMultiSapBroadphase::btMultiSapProxy* parentMultiSapProxy=(Luna< btBroadphaseProxy >::checkSubType< btMultiSapBroadphase::btMultiSapProxy >(L,2));
		btBroadphaseProxy* childProxy=(Luna< btBroadphaseProxy >::check(L,3));
		btBroadphaseInterface* childBroadphase=(Luna< btBroadphaseInterface >::check(L,4));

		btMultiSapBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btMultiSapBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSapBroadphase::addToChildBroadphase(btMultiSapBroadphase::btMultiSapProxy *, btBroadphaseProxy *, btBroadphaseInterface *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->addToChildBroadphase(parentMultiSapProxy, childProxy, childBroadphase);

		return 0;
	}

	// void btMultiSapBroadphase::calculateOverlappingPairs(btDispatcher * dispatcher)
	static int _bind_calculateOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_calculateOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSapBroadphase::calculateOverlappingPairs(btDispatcher * dispatcher) function, expected prototype:\nvoid btMultiSapBroadphase::calculateOverlappingPairs(btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 71097681\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));

		btMultiSapBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btMultiSapBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSapBroadphase::calculateOverlappingPairs(btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->calculateOverlappingPairs(dispatcher);

		return 0;
	}

	// bool btMultiSapBroadphase::testAabbOverlap(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)
	static int _bind_testAabbOverlap(lua_State *L) {
		if (!_lg_typecheck_testAabbOverlap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btMultiSapBroadphase::testAabbOverlap(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) function, expected prototype:\nbool btMultiSapBroadphase::testAabbOverlap(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* proxy1=(Luna< btBroadphaseProxy >::check(L,3));

		btMultiSapBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btMultiSapBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btMultiSapBroadphase::testAabbOverlap(btBroadphaseProxy *, btBroadphaseProxy *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		bool lret = self->testAabbOverlap(proxy0, proxy1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// btOverlappingPairCache * btMultiSapBroadphase::getOverlappingPairCache()
	static int _bind_getOverlappingPairCache_overload_1(lua_State *L) {
		if (!_lg_typecheck_getOverlappingPairCache_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btOverlappingPairCache * btMultiSapBroadphase::getOverlappingPairCache() function, expected prototype:\nbtOverlappingPairCache * btMultiSapBroadphase::getOverlappingPairCache()\nClass arguments details:\n");
		}


		btMultiSapBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btMultiSapBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btOverlappingPairCache * btMultiSapBroadphase::getOverlappingPairCache(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		btOverlappingPairCache * lret = self->getOverlappingPairCache();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btOverlappingPairCache >::push(L,lret,false);

		return 1;
	}

	// const btOverlappingPairCache * btMultiSapBroadphase::getOverlappingPairCache() const
	static int _bind_getOverlappingPairCache_overload_2(lua_State *L) {
		if (!_lg_typecheck_getOverlappingPairCache_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btOverlappingPairCache * btMultiSapBroadphase::getOverlappingPairCache() const function, expected prototype:\nconst btOverlappingPairCache * btMultiSapBroadphase::getOverlappingPairCache() const\nClass arguments details:\n");
		}


		btMultiSapBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btMultiSapBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btOverlappingPairCache * btMultiSapBroadphase::getOverlappingPairCache() const. Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		const btOverlappingPairCache * lret = self->getOverlappingPairCache();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btOverlappingPairCache >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btMultiSapBroadphase::getOverlappingPairCache
	static int _bind_getOverlappingPairCache(lua_State *L) {
		if (_lg_typecheck_getOverlappingPairCache_overload_1(L)) return _bind_getOverlappingPairCache_overload_1(L);
		if (_lg_typecheck_getOverlappingPairCache_overload_2(L)) return _bind_getOverlappingPairCache_overload_2(L);

		luaL_error(L, "error in function getOverlappingPairCache, cannot match any of the overloads for function getOverlappingPairCache:\n  getOverlappingPairCache()\n  getOverlappingPairCache()\n");
		return 0;
	}

	// void btMultiSapBroadphase::getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getBroadphaseAabb(lua_State *L) {
		if (!_lg_typecheck_getBroadphaseAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSapBroadphase::getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btMultiSapBroadphase::getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btMultiSapBroadphase::getBroadphaseAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btMultiSapBroadphase::getBroadphaseAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btMultiSapBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btMultiSapBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSapBroadphase::getBroadphaseAabb(btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->getBroadphaseAabb(aabbMin, aabbMax);

		return 0;
	}

	// void btMultiSapBroadphase::buildTree(const btVector3 & bvhAabbMin, const btVector3 & bvhAabbMax)
	static int _bind_buildTree(lua_State *L) {
		if (!_lg_typecheck_buildTree(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSapBroadphase::buildTree(const btVector3 & bvhAabbMin, const btVector3 & bvhAabbMax) function, expected prototype:\nvoid btMultiSapBroadphase::buildTree(const btVector3 & bvhAabbMin, const btVector3 & bvhAabbMax)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* bvhAabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !bvhAabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bvhAabbMin in btMultiSapBroadphase::buildTree function");
		}
		const btVector3 & bvhAabbMin=*bvhAabbMin_ptr;
		const btVector3* bvhAabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !bvhAabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bvhAabbMax in btMultiSapBroadphase::buildTree function");
		}
		const btVector3 & bvhAabbMax=*bvhAabbMax_ptr;

		btMultiSapBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btMultiSapBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSapBroadphase::buildTree(const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->buildTree(bvhAabbMin, bvhAabbMax);

		return 0;
	}

	// void btMultiSapBroadphase::printStats()
	static int _bind_printStats(lua_State *L) {
		if (!_lg_typecheck_printStats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSapBroadphase::printStats() function, expected prototype:\nvoid btMultiSapBroadphase::printStats()\nClass arguments details:\n");
		}


		btMultiSapBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btMultiSapBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSapBroadphase::printStats(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->printStats();

		return 0;
	}

	// void btMultiSapBroadphase::resetPool(btDispatcher * dispatcher)
	static int _bind_resetPool(lua_State *L) {
		if (!_lg_typecheck_resetPool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSapBroadphase::resetPool(btDispatcher * dispatcher) function, expected prototype:\nvoid btMultiSapBroadphase::resetPool(btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 71097681\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));

		btMultiSapBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btMultiSapBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSapBroadphase::resetPool(btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->resetPool(dispatcher);

		return 0;
	}

	// btBroadphaseProxy * btMultiSapBroadphase::base_createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy)
	static int _bind_base_createProxy(lua_State *L) {
		if (!_lg_typecheck_base_createProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphaseProxy * btMultiSapBroadphase::base_createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy) function, expected prototype:\nbtBroadphaseProxy * btMultiSapBroadphase::base_createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 7 ID = 71097681\n");
		}

		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btMultiSapBroadphase::base_createProxy function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btMultiSapBroadphase::base_createProxy function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;
		int shapeType=(int)lua_tointeger(L,4);
		void* userPtr=(Luna< void >::check(L,5));
		short int collisionFilterGroup=(short int)lua_tointeger(L,6);
		short int collisionFilterMask=(short int)lua_tointeger(L,7);
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,8));
		void* multiSapProxy=(Luna< void >::check(L,9));

		btMultiSapBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btMultiSapBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphaseProxy * btMultiSapBroadphase::base_createProxy(const btVector3 &, const btVector3 &, int, void *, short int, short int, btDispatcher *, void *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		btBroadphaseProxy * lret = self->btMultiSapBroadphase::createProxy(aabbMin, aabbMax, shapeType, userPtr, collisionFilterGroup, collisionFilterMask, dispatcher, multiSapProxy);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphaseProxy >::push(L,lret,false);

		return 1;
	}

	// void btMultiSapBroadphase::base_destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	static int _bind_base_destroyProxy(lua_State *L) {
		if (!_lg_typecheck_base_destroyProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSapBroadphase::base_destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher) function, expected prototype:\nvoid btMultiSapBroadphase::base_destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btMultiSapBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btMultiSapBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSapBroadphase::base_destroyProxy(btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btMultiSapBroadphase::destroyProxy(proxy, dispatcher);

		return 0;
	}

	// void btMultiSapBroadphase::base_setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher)
	static int _bind_base_setAabb(lua_State *L) {
		if (!_lg_typecheck_base_setAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSapBroadphase::base_setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher) function, expected prototype:\nvoid btMultiSapBroadphase::base_setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btMultiSapBroadphase::base_setAabb function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btMultiSapBroadphase::base_setAabb function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,5));

		btMultiSapBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btMultiSapBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSapBroadphase::base_setAabb(btBroadphaseProxy *, const btVector3 &, const btVector3 &, btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btMultiSapBroadphase::setAabb(proxy, aabbMin, aabbMax, dispatcher);

		return 0;
	}

	// void btMultiSapBroadphase::base_getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSapBroadphase::base_getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btMultiSapBroadphase::base_getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btMultiSapBroadphase::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btMultiSapBroadphase::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btMultiSapBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btMultiSapBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSapBroadphase::base_getAabb(btBroadphaseProxy *, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btMultiSapBroadphase::getAabb(proxy, aabbMin, aabbMax);

		return 0;
	}

	// void btMultiSapBroadphase::base_rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0))
	static int _bind_base_rayTest(lua_State *L) {
		if (!_lg_typecheck_base_rayTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSapBroadphase::base_rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0)) function, expected prototype:\nvoid btMultiSapBroadphase::base_rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0))\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 52132875\narg 4 ID = 91544891\narg 5 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		const btVector3* rayFrom_ptr=(Luna< btVector3 >::check(L,2));
		if( !rayFrom_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayFrom in btMultiSapBroadphase::base_rayTest function");
		}
		const btVector3 & rayFrom=*rayFrom_ptr;
		const btVector3* rayTo_ptr=(Luna< btVector3 >::check(L,3));
		if( !rayTo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayTo in btMultiSapBroadphase::base_rayTest function");
		}
		const btVector3 & rayTo=*rayTo_ptr;
		btBroadphaseRayCallback* rayCallback_ptr=(Luna< btBroadphaseAabbCallback >::checkSubType< btBroadphaseRayCallback >(L,4));
		if( !rayCallback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayCallback in btMultiSapBroadphase::base_rayTest function");
		}
		btBroadphaseRayCallback & rayCallback=*rayCallback_ptr;
		const btVector3* aabbMin_ptr=luatop>4 ? (Luna< btVector3 >::check(L,5)) : NULL;
		if( luatop>4 && !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btMultiSapBroadphase::base_rayTest function");
		}
		const btVector3 & aabbMin=luatop>4 ? *aabbMin_ptr : (const btVector3&)btVector3 (0, 0, 0);
		const btVector3* aabbMax_ptr=luatop>5 ? (Luna< btVector3 >::check(L,6)) : NULL;
		if( luatop>5 && !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btMultiSapBroadphase::base_rayTest function");
		}
		const btVector3 & aabbMax=luatop>5 ? *aabbMax_ptr : (const btVector3&)btVector3 (0, 0, 0);

		btMultiSapBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btMultiSapBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSapBroadphase::base_rayTest(const btVector3 &, const btVector3 &, btBroadphaseRayCallback &, const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btMultiSapBroadphase::rayTest(rayFrom, rayTo, rayCallback, aabbMin, aabbMax);

		return 0;
	}

	// void btMultiSapBroadphase::base_calculateOverlappingPairs(btDispatcher * dispatcher)
	static int _bind_base_calculateOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_base_calculateOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSapBroadphase::base_calculateOverlappingPairs(btDispatcher * dispatcher) function, expected prototype:\nvoid btMultiSapBroadphase::base_calculateOverlappingPairs(btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 71097681\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));

		btMultiSapBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btMultiSapBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSapBroadphase::base_calculateOverlappingPairs(btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btMultiSapBroadphase::calculateOverlappingPairs(dispatcher);

		return 0;
	}

	// btOverlappingPairCache * btMultiSapBroadphase::base_getOverlappingPairCache()
	static int _bind_base_getOverlappingPairCache_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getOverlappingPairCache_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btOverlappingPairCache * btMultiSapBroadphase::base_getOverlappingPairCache() function, expected prototype:\nbtOverlappingPairCache * btMultiSapBroadphase::base_getOverlappingPairCache()\nClass arguments details:\n");
		}


		btMultiSapBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btMultiSapBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btOverlappingPairCache * btMultiSapBroadphase::base_getOverlappingPairCache(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		btOverlappingPairCache * lret = self->btMultiSapBroadphase::getOverlappingPairCache();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btOverlappingPairCache >::push(L,lret,false);

		return 1;
	}

	// const btOverlappingPairCache * btMultiSapBroadphase::base_getOverlappingPairCache() const
	static int _bind_base_getOverlappingPairCache_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getOverlappingPairCache_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btOverlappingPairCache * btMultiSapBroadphase::base_getOverlappingPairCache() const function, expected prototype:\nconst btOverlappingPairCache * btMultiSapBroadphase::base_getOverlappingPairCache() const\nClass arguments details:\n");
		}


		btMultiSapBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btMultiSapBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btOverlappingPairCache * btMultiSapBroadphase::base_getOverlappingPairCache() const. Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		const btOverlappingPairCache * lret = self->btMultiSapBroadphase::getOverlappingPairCache();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btOverlappingPairCache >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btMultiSapBroadphase::base_getOverlappingPairCache
	static int _bind_base_getOverlappingPairCache(lua_State *L) {
		if (_lg_typecheck_base_getOverlappingPairCache_overload_1(L)) return _bind_base_getOverlappingPairCache_overload_1(L);
		if (_lg_typecheck_base_getOverlappingPairCache_overload_2(L)) return _bind_base_getOverlappingPairCache_overload_2(L);

		luaL_error(L, "error in function base_getOverlappingPairCache, cannot match any of the overloads for function base_getOverlappingPairCache:\n  base_getOverlappingPairCache()\n  base_getOverlappingPairCache()\n");
		return 0;
	}

	// void btMultiSapBroadphase::base_getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getBroadphaseAabb(lua_State *L) {
		if (!_lg_typecheck_base_getBroadphaseAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSapBroadphase::base_getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btMultiSapBroadphase::base_getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btMultiSapBroadphase::base_getBroadphaseAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btMultiSapBroadphase::base_getBroadphaseAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btMultiSapBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btMultiSapBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSapBroadphase::base_getBroadphaseAabb(btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btMultiSapBroadphase::getBroadphaseAabb(aabbMin, aabbMax);

		return 0;
	}

	// void btMultiSapBroadphase::base_printStats()
	static int _bind_base_printStats(lua_State *L) {
		if (!_lg_typecheck_base_printStats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSapBroadphase::base_printStats() function, expected prototype:\nvoid btMultiSapBroadphase::base_printStats()\nClass arguments details:\n");
		}


		btMultiSapBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btMultiSapBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSapBroadphase::base_printStats(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btMultiSapBroadphase::printStats();

		return 0;
	}

	// void btMultiSapBroadphase::base_resetPool(btDispatcher * dispatcher)
	static int _bind_base_resetPool(lua_State *L) {
		if (!_lg_typecheck_base_resetPool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSapBroadphase::base_resetPool(btDispatcher * dispatcher) function, expected prototype:\nvoid btMultiSapBroadphase::base_resetPool(btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 71097681\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));

		btMultiSapBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btMultiSapBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSapBroadphase::base_resetPool(btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btMultiSapBroadphase::resetPool(dispatcher);

		return 0;
	}


	// Operator binds:

};

btMultiSapBroadphase* LunaTraits< btMultiSapBroadphase >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btMultiSapBroadphase::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void btBroadphaseInterface::aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback)
}

void LunaTraits< btMultiSapBroadphase >::_bind_dtor(btMultiSapBroadphase* obj) {
	delete obj;
}

const char LunaTraits< btMultiSapBroadphase >::className[] = "btMultiSapBroadphase";
const char LunaTraits< btMultiSapBroadphase >::fullName[] = "btMultiSapBroadphase";
const char LunaTraits< btMultiSapBroadphase >::moduleName[] = "bullet";
const char* LunaTraits< btMultiSapBroadphase >::parents[] = {"bullet.btBroadphaseInterface", 0};
const int LunaTraits< btMultiSapBroadphase >::hash = 26520701;
const int LunaTraits< btMultiSapBroadphase >::uniqueIDs[] = {25261840,0};

luna_RegType LunaTraits< btMultiSapBroadphase >::methods[] = {
	{"getBroadphaseArray", &luna_wrapper_btMultiSapBroadphase::_bind_getBroadphaseArray},
	{"createProxy", &luna_wrapper_btMultiSapBroadphase::_bind_createProxy},
	{"destroyProxy", &luna_wrapper_btMultiSapBroadphase::_bind_destroyProxy},
	{"setAabb", &luna_wrapper_btMultiSapBroadphase::_bind_setAabb},
	{"getAabb", &luna_wrapper_btMultiSapBroadphase::_bind_getAabb},
	{"rayTest", &luna_wrapper_btMultiSapBroadphase::_bind_rayTest},
	{"addToChildBroadphase", &luna_wrapper_btMultiSapBroadphase::_bind_addToChildBroadphase},
	{"calculateOverlappingPairs", &luna_wrapper_btMultiSapBroadphase::_bind_calculateOverlappingPairs},
	{"testAabbOverlap", &luna_wrapper_btMultiSapBroadphase::_bind_testAabbOverlap},
	{"getOverlappingPairCache", &luna_wrapper_btMultiSapBroadphase::_bind_getOverlappingPairCache},
	{"getBroadphaseAabb", &luna_wrapper_btMultiSapBroadphase::_bind_getBroadphaseAabb},
	{"buildTree", &luna_wrapper_btMultiSapBroadphase::_bind_buildTree},
	{"printStats", &luna_wrapper_btMultiSapBroadphase::_bind_printStats},
	{"resetPool", &luna_wrapper_btMultiSapBroadphase::_bind_resetPool},
	{"base_createProxy", &luna_wrapper_btMultiSapBroadphase::_bind_base_createProxy},
	{"base_destroyProxy", &luna_wrapper_btMultiSapBroadphase::_bind_base_destroyProxy},
	{"base_setAabb", &luna_wrapper_btMultiSapBroadphase::_bind_base_setAabb},
	{"base_getAabb", &luna_wrapper_btMultiSapBroadphase::_bind_base_getAabb},
	{"base_rayTest", &luna_wrapper_btMultiSapBroadphase::_bind_base_rayTest},
	{"base_calculateOverlappingPairs", &luna_wrapper_btMultiSapBroadphase::_bind_base_calculateOverlappingPairs},
	{"base_getOverlappingPairCache", &luna_wrapper_btMultiSapBroadphase::_bind_base_getOverlappingPairCache},
	{"base_getBroadphaseAabb", &luna_wrapper_btMultiSapBroadphase::_bind_base_getBroadphaseAabb},
	{"base_printStats", &luna_wrapper_btMultiSapBroadphase::_bind_base_printStats},
	{"base_resetPool", &luna_wrapper_btMultiSapBroadphase::_bind_base_resetPool},
	{"__eq", &luna_wrapper_btMultiSapBroadphase::_bind___eq},
	{"fromVoid", &luna_wrapper_btMultiSapBroadphase::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btMultiSapBroadphase::_bind_asVoid},
	{"getTable", &luna_wrapper_btMultiSapBroadphase::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btMultiSapBroadphase >::converters[] = {
	{"btBroadphaseInterface", &luna_wrapper_btMultiSapBroadphase::_cast_from_btBroadphaseInterface},
	{0,0}
};

luna_RegEnumType LunaTraits< btMultiSapBroadphase >::enumValues[] = {
	{0,0}
};


