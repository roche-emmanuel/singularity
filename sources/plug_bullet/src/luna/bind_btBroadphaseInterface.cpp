#include <plug_common.h>

#include <luna/wrappers/wrapper_btBroadphaseInterface.h>

class luna_wrapper_btBroadphaseInterface {
public:
	typedef Luna< btBroadphaseInterface > luna_t;

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

		btBroadphaseInterface* self= (btBroadphaseInterface*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btBroadphaseInterface >::push(L,self,false);
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

		btBroadphaseInterface* self=(Luna< btBroadphaseInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btBroadphaseInterface");
		
		return luna_dynamicCast(L,converters,"btBroadphaseInterface",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
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

	inline static bool _lg_typecheck_calculateOverlappingPairs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,71097681)) ) return false;
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

	inline static bool _lg_typecheck_resetPool(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_printStats(lua_State *L) {
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
	// btBroadphaseInterface::btBroadphaseInterface(lua_Table * data)
	static btBroadphaseInterface* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphaseInterface::btBroadphaseInterface(lua_Table * data) function, expected prototype:\nbtBroadphaseInterface::btBroadphaseInterface(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btBroadphaseInterface(L,NULL);
	}


	// Function binds:
	// btBroadphaseProxy * btBroadphaseInterface::createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy)
	static int _bind_createProxy(lua_State *L) {
		if (!_lg_typecheck_createProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphaseProxy * btBroadphaseInterface::createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy) function, expected prototype:\nbtBroadphaseProxy * btBroadphaseInterface::createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 7 ID = 71097681\n");
		}

		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btBroadphaseInterface::createProxy function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btBroadphaseInterface::createProxy function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;
		int shapeType=(int)lua_tointeger(L,4);
		void* userPtr=(Luna< void >::check(L,5));
		short int collisionFilterGroup=(short int)lua_tointeger(L,6);
		short int collisionFilterMask=(short int)lua_tointeger(L,7);
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,8));
		void* multiSapProxy=(Luna< void >::check(L,9));

		btBroadphaseInterface* self=(Luna< btBroadphaseInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphaseProxy * btBroadphaseInterface::createProxy(const btVector3 &, const btVector3 &, int, void *, short int, short int, btDispatcher *, void *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		btBroadphaseProxy * lret = self->createProxy(aabbMin, aabbMax, shapeType, userPtr, collisionFilterGroup, collisionFilterMask, dispatcher, multiSapProxy);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphaseProxy >::push(L,lret,false);

		return 1;
	}

	// void btBroadphaseInterface::destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	static int _bind_destroyProxy(lua_State *L) {
		if (!_lg_typecheck_destroyProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBroadphaseInterface::destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher) function, expected prototype:\nvoid btBroadphaseInterface::destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btBroadphaseInterface* self=(Luna< btBroadphaseInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBroadphaseInterface::destroyProxy(btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->destroyProxy(proxy, dispatcher);

		return 0;
	}

	// void btBroadphaseInterface::setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher)
	static int _bind_setAabb(lua_State *L) {
		if (!_lg_typecheck_setAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBroadphaseInterface::setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher) function, expected prototype:\nvoid btBroadphaseInterface::setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btBroadphaseInterface::setAabb function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btBroadphaseInterface::setAabb function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,5));

		btBroadphaseInterface* self=(Luna< btBroadphaseInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBroadphaseInterface::setAabb(btBroadphaseProxy *, const btVector3 &, const btVector3 &, btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->setAabb(proxy, aabbMin, aabbMax, dispatcher);

		return 0;
	}

	// void btBroadphaseInterface::getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getAabb(lua_State *L) {
		if (!_lg_typecheck_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBroadphaseInterface::getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btBroadphaseInterface::getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btBroadphaseInterface::getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btBroadphaseInterface::getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btBroadphaseInterface* self=(Luna< btBroadphaseInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBroadphaseInterface::getAabb(btBroadphaseProxy *, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->getAabb(proxy, aabbMin, aabbMax);

		return 0;
	}

	// void btBroadphaseInterface::rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0))
	static int _bind_rayTest(lua_State *L) {
		if (!_lg_typecheck_rayTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBroadphaseInterface::rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0)) function, expected prototype:\nvoid btBroadphaseInterface::rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0))\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 52132875\narg 4 ID = 91544891\narg 5 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		const btVector3* rayFrom_ptr=(Luna< btVector3 >::check(L,2));
		if( !rayFrom_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayFrom in btBroadphaseInterface::rayTest function");
		}
		const btVector3 & rayFrom=*rayFrom_ptr;
		const btVector3* rayTo_ptr=(Luna< btVector3 >::check(L,3));
		if( !rayTo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayTo in btBroadphaseInterface::rayTest function");
		}
		const btVector3 & rayTo=*rayTo_ptr;
		btBroadphaseRayCallback* rayCallback_ptr=(Luna< btBroadphaseAabbCallback >::checkSubType< btBroadphaseRayCallback >(L,4));
		if( !rayCallback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayCallback in btBroadphaseInterface::rayTest function");
		}
		btBroadphaseRayCallback & rayCallback=*rayCallback_ptr;
		const btVector3* aabbMin_ptr=luatop>4 ? (Luna< btVector3 >::check(L,5)) : NULL;
		if( luatop>4 && !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btBroadphaseInterface::rayTest function");
		}
		const btVector3 & aabbMin=luatop>4 ? *aabbMin_ptr : (const btVector3&)btVector3 (0, 0, 0);
		const btVector3* aabbMax_ptr=luatop>5 ? (Luna< btVector3 >::check(L,6)) : NULL;
		if( luatop>5 && !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btBroadphaseInterface::rayTest function");
		}
		const btVector3 & aabbMax=luatop>5 ? *aabbMax_ptr : (const btVector3&)btVector3 (0, 0, 0);

		btBroadphaseInterface* self=(Luna< btBroadphaseInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBroadphaseInterface::rayTest(const btVector3 &, const btVector3 &, btBroadphaseRayCallback &, const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->rayTest(rayFrom, rayTo, rayCallback, aabbMin, aabbMax);

		return 0;
	}

	// void btBroadphaseInterface::aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback)
	static int _bind_aabbTest(lua_State *L) {
		if (!_lg_typecheck_aabbTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBroadphaseInterface::aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback) function, expected prototype:\nvoid btBroadphaseInterface::aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 52132875\n");
		}

		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btBroadphaseInterface::aabbTest function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btBroadphaseInterface::aabbTest function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;
		btBroadphaseAabbCallback* callback_ptr=(Luna< btBroadphaseAabbCallback >::check(L,4));
		if( !callback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg callback in btBroadphaseInterface::aabbTest function");
		}
		btBroadphaseAabbCallback & callback=*callback_ptr;

		btBroadphaseInterface* self=(Luna< btBroadphaseInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBroadphaseInterface::aabbTest(const btVector3 &, const btVector3 &, btBroadphaseAabbCallback &). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->aabbTest(aabbMin, aabbMax, callback);

		return 0;
	}

	// void btBroadphaseInterface::calculateOverlappingPairs(btDispatcher * dispatcher)
	static int _bind_calculateOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_calculateOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBroadphaseInterface::calculateOverlappingPairs(btDispatcher * dispatcher) function, expected prototype:\nvoid btBroadphaseInterface::calculateOverlappingPairs(btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 71097681\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));

		btBroadphaseInterface* self=(Luna< btBroadphaseInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBroadphaseInterface::calculateOverlappingPairs(btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->calculateOverlappingPairs(dispatcher);

		return 0;
	}

	// btOverlappingPairCache * btBroadphaseInterface::getOverlappingPairCache()
	static int _bind_getOverlappingPairCache_overload_1(lua_State *L) {
		if (!_lg_typecheck_getOverlappingPairCache_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btOverlappingPairCache * btBroadphaseInterface::getOverlappingPairCache() function, expected prototype:\nbtOverlappingPairCache * btBroadphaseInterface::getOverlappingPairCache()\nClass arguments details:\n");
		}


		btBroadphaseInterface* self=(Luna< btBroadphaseInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btOverlappingPairCache * btBroadphaseInterface::getOverlappingPairCache(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		btOverlappingPairCache * lret = self->getOverlappingPairCache();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btOverlappingPairCache >::push(L,lret,false);

		return 1;
	}

	// const btOverlappingPairCache * btBroadphaseInterface::getOverlappingPairCache() const
	static int _bind_getOverlappingPairCache_overload_2(lua_State *L) {
		if (!_lg_typecheck_getOverlappingPairCache_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btOverlappingPairCache * btBroadphaseInterface::getOverlappingPairCache() const function, expected prototype:\nconst btOverlappingPairCache * btBroadphaseInterface::getOverlappingPairCache() const\nClass arguments details:\n");
		}


		btBroadphaseInterface* self=(Luna< btBroadphaseInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btOverlappingPairCache * btBroadphaseInterface::getOverlappingPairCache() const. Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		const btOverlappingPairCache * lret = self->getOverlappingPairCache();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btOverlappingPairCache >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btBroadphaseInterface::getOverlappingPairCache
	static int _bind_getOverlappingPairCache(lua_State *L) {
		if (_lg_typecheck_getOverlappingPairCache_overload_1(L)) return _bind_getOverlappingPairCache_overload_1(L);
		if (_lg_typecheck_getOverlappingPairCache_overload_2(L)) return _bind_getOverlappingPairCache_overload_2(L);

		luaL_error(L, "error in function getOverlappingPairCache, cannot match any of the overloads for function getOverlappingPairCache:\n  getOverlappingPairCache()\n  getOverlappingPairCache()\n");
		return 0;
	}

	// void btBroadphaseInterface::getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getBroadphaseAabb(lua_State *L) {
		if (!_lg_typecheck_getBroadphaseAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBroadphaseInterface::getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btBroadphaseInterface::getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btBroadphaseInterface::getBroadphaseAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btBroadphaseInterface::getBroadphaseAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btBroadphaseInterface* self=(Luna< btBroadphaseInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBroadphaseInterface::getBroadphaseAabb(btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->getBroadphaseAabb(aabbMin, aabbMax);

		return 0;
	}

	// void btBroadphaseInterface::resetPool(btDispatcher * dispatcher)
	static int _bind_resetPool(lua_State *L) {
		if (!_lg_typecheck_resetPool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBroadphaseInterface::resetPool(btDispatcher * dispatcher) function, expected prototype:\nvoid btBroadphaseInterface::resetPool(btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 71097681\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));

		btBroadphaseInterface* self=(Luna< btBroadphaseInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBroadphaseInterface::resetPool(btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->resetPool(dispatcher);

		return 0;
	}

	// void btBroadphaseInterface::printStats()
	static int _bind_printStats(lua_State *L) {
		if (!_lg_typecheck_printStats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBroadphaseInterface::printStats() function, expected prototype:\nvoid btBroadphaseInterface::printStats()\nClass arguments details:\n");
		}


		btBroadphaseInterface* self=(Luna< btBroadphaseInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBroadphaseInterface::printStats(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->printStats();

		return 0;
	}

	// void btBroadphaseInterface::base_resetPool(btDispatcher * dispatcher)
	static int _bind_base_resetPool(lua_State *L) {
		if (!_lg_typecheck_base_resetPool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBroadphaseInterface::base_resetPool(btDispatcher * dispatcher) function, expected prototype:\nvoid btBroadphaseInterface::base_resetPool(btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 71097681\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));

		btBroadphaseInterface* self=(Luna< btBroadphaseInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBroadphaseInterface::base_resetPool(btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btBroadphaseInterface::resetPool(dispatcher);

		return 0;
	}


	// Operator binds:

};

btBroadphaseInterface* LunaTraits< btBroadphaseInterface >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btBroadphaseInterface::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// btBroadphaseProxy * btBroadphaseInterface::createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy)
	// void btBroadphaseInterface::destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	// void btBroadphaseInterface::setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher)
	// void btBroadphaseInterface::getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const
	// void btBroadphaseInterface::rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0))
	// void btBroadphaseInterface::aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback)
	// void btBroadphaseInterface::calculateOverlappingPairs(btDispatcher * dispatcher)
	// btOverlappingPairCache * btBroadphaseInterface::getOverlappingPairCache()
	// const btOverlappingPairCache * btBroadphaseInterface::getOverlappingPairCache() const
	// void btBroadphaseInterface::getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const
	// void btBroadphaseInterface::printStats()
}

void LunaTraits< btBroadphaseInterface >::_bind_dtor(btBroadphaseInterface* obj) {
	delete obj;
}

const char LunaTraits< btBroadphaseInterface >::className[] = "btBroadphaseInterface";
const char LunaTraits< btBroadphaseInterface >::fullName[] = "btBroadphaseInterface";
const char LunaTraits< btBroadphaseInterface >::moduleName[] = "bullet";
const char* LunaTraits< btBroadphaseInterface >::parents[] = {0};
const int LunaTraits< btBroadphaseInterface >::hash = 25261840;
const int LunaTraits< btBroadphaseInterface >::uniqueIDs[] = {25261840,0};

luna_RegType LunaTraits< btBroadphaseInterface >::methods[] = {
	{"createProxy", &luna_wrapper_btBroadphaseInterface::_bind_createProxy},
	{"destroyProxy", &luna_wrapper_btBroadphaseInterface::_bind_destroyProxy},
	{"setAabb", &luna_wrapper_btBroadphaseInterface::_bind_setAabb},
	{"getAabb", &luna_wrapper_btBroadphaseInterface::_bind_getAabb},
	{"rayTest", &luna_wrapper_btBroadphaseInterface::_bind_rayTest},
	{"aabbTest", &luna_wrapper_btBroadphaseInterface::_bind_aabbTest},
	{"calculateOverlappingPairs", &luna_wrapper_btBroadphaseInterface::_bind_calculateOverlappingPairs},
	{"getOverlappingPairCache", &luna_wrapper_btBroadphaseInterface::_bind_getOverlappingPairCache},
	{"getBroadphaseAabb", &luna_wrapper_btBroadphaseInterface::_bind_getBroadphaseAabb},
	{"resetPool", &luna_wrapper_btBroadphaseInterface::_bind_resetPool},
	{"printStats", &luna_wrapper_btBroadphaseInterface::_bind_printStats},
	{"base_resetPool", &luna_wrapper_btBroadphaseInterface::_bind_base_resetPool},
	{"dynCast", &luna_wrapper_btBroadphaseInterface::_bind_dynCast},
	{"__eq", &luna_wrapper_btBroadphaseInterface::_bind___eq},
	{"fromVoid", &luna_wrapper_btBroadphaseInterface::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btBroadphaseInterface::_bind_asVoid},
	{"getTable", &luna_wrapper_btBroadphaseInterface::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btBroadphaseInterface >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btBroadphaseInterface >::enumValues[] = {
	{0,0}
};


