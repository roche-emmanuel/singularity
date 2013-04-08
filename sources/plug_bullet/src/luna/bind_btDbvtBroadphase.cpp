#include <plug_common.h>

#include <luna/wrappers/wrapper_btDbvtBroadphase.h>

class luna_wrapper_btDbvtBroadphase {
public:
	typedef Luna< btDbvtBroadphase > luna_t;

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

		btDbvtBroadphase* self= (btDbvtBroadphase*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btDbvtBroadphase >::push(L,self,false);
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
		//btDbvtBroadphase* ptr= dynamic_cast< btDbvtBroadphase* >(Luna< btBroadphaseInterface >::check(L,1));
		btDbvtBroadphase* ptr= luna_caster< btBroadphaseInterface, btDbvtBroadphase >::cast(Luna< btBroadphaseInterface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btDbvtBroadphase >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,78133027)) ) return false;
		if( luatop>0 && (lua_isnil(L,1)==0 && !(Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,78133027)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_collide(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_optimize(lua_State *L) {
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

	inline static bool _lg_typecheck_getAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
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

	inline static bool _lg_typecheck_printStats(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_resetPool(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_performDeferredRemoval(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVelocityPrediction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVelocityPrediction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAabbForceUpdate(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,71097681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_benchmark(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,25261840)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPaircache(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPrediction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStageCurrent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFupdates(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDupdates(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCupdates(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNewpairs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFixedleft(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_updates_call(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_updates_done(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_updates_ratio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getReleasepaircache(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDeferedcollide(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNeedcleanup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPaircache(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,78133027)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPrediction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStageCurrent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFupdates(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDupdates(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCupdates(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNewpairs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFixedleft(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_updates_call(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_updates_done(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_updates_ratio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPid(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCid(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGid(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setReleasepaircache(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDeferedcollide(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNeedcleanup(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_getAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
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
	// btDbvtBroadphase::btDbvtBroadphase(btOverlappingPairCache * paircache = 0)
	static btDbvtBroadphase* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDbvtBroadphase::btDbvtBroadphase(btOverlappingPairCache * paircache = 0) function, expected prototype:\nbtDbvtBroadphase::btDbvtBroadphase(btOverlappingPairCache * paircache = 0)\nClass arguments details:\narg 1 ID = 78133027\n");
		}

		int luatop = lua_gettop(L);

		btOverlappingPairCache* paircache=luatop>0 ? (Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,1)) : (btOverlappingPairCache*)0;

		return new btDbvtBroadphase(paircache);
	}

	// btDbvtBroadphase::btDbvtBroadphase(lua_Table * data, btOverlappingPairCache * paircache = 0)
	static btDbvtBroadphase* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDbvtBroadphase::btDbvtBroadphase(lua_Table * data, btOverlappingPairCache * paircache = 0) function, expected prototype:\nbtDbvtBroadphase::btDbvtBroadphase(lua_Table * data, btOverlappingPairCache * paircache = 0)\nClass arguments details:\narg 2 ID = 78133027\n");
		}

		int luatop = lua_gettop(L);

		btOverlappingPairCache* paircache=luatop>1 ? (Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,2)) : (btOverlappingPairCache*)0;

		return new wrapper_btDbvtBroadphase(L,NULL, paircache);
	}

	// Overload binder for btDbvtBroadphase::btDbvtBroadphase
	static btDbvtBroadphase* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btDbvtBroadphase, cannot match any of the overloads for function btDbvtBroadphase:\n  btDbvtBroadphase(btOverlappingPairCache *)\n  btDbvtBroadphase(lua_Table *, btOverlappingPairCache *)\n");
		return NULL;
	}


	// Function binds:
	// void btDbvtBroadphase::collide(btDispatcher * dispatcher)
	static int _bind_collide(lua_State *L) {
		if (!_lg_typecheck_collide(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::collide(btDispatcher * dispatcher) function, expected prototype:\nvoid btDbvtBroadphase::collide(btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 71097681\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::collide(btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->collide(dispatcher);

		return 0;
	}

	// void btDbvtBroadphase::optimize()
	static int _bind_optimize(lua_State *L) {
		if (!_lg_typecheck_optimize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::optimize() function, expected prototype:\nvoid btDbvtBroadphase::optimize()\nClass arguments details:\n");
		}


		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::optimize(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->optimize();

		return 0;
	}

	// btBroadphaseProxy * btDbvtBroadphase::createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy)
	static int _bind_createProxy(lua_State *L) {
		if (!_lg_typecheck_createProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphaseProxy * btDbvtBroadphase::createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy) function, expected prototype:\nbtBroadphaseProxy * btDbvtBroadphase::createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 7 ID = 71097681\n");
		}

		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btDbvtBroadphase::createProxy function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btDbvtBroadphase::createProxy function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;
		int shapeType=(int)lua_tointeger(L,4);
		void* userPtr=(Luna< void >::check(L,5));
		short int collisionFilterGroup=(short int)lua_tointeger(L,6);
		short int collisionFilterMask=(short int)lua_tointeger(L,7);
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,8));
		void* multiSapProxy=(Luna< void >::check(L,9));

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphaseProxy * btDbvtBroadphase::createProxy(const btVector3 &, const btVector3 &, int, void *, short int, short int, btDispatcher *, void *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		btBroadphaseProxy * lret = self->createProxy(aabbMin, aabbMax, shapeType, userPtr, collisionFilterGroup, collisionFilterMask, dispatcher, multiSapProxy);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphaseProxy >::push(L,lret,false);

		return 1;
	}

	// void btDbvtBroadphase::destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	static int _bind_destroyProxy(lua_State *L) {
		if (!_lg_typecheck_destroyProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher) function, expected prototype:\nvoid btDbvtBroadphase::destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::destroyProxy(btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->destroyProxy(proxy, dispatcher);

		return 0;
	}

	// void btDbvtBroadphase::setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher)
	static int _bind_setAabb(lua_State *L) {
		if (!_lg_typecheck_setAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher) function, expected prototype:\nvoid btDbvtBroadphase::setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btDbvtBroadphase::setAabb function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btDbvtBroadphase::setAabb function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,5));

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::setAabb(btBroadphaseProxy *, const btVector3 &, const btVector3 &, btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->setAabb(proxy, aabbMin, aabbMax, dispatcher);

		return 0;
	}

	// void btDbvtBroadphase::rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0))
	static int _bind_rayTest(lua_State *L) {
		if (!_lg_typecheck_rayTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0)) function, expected prototype:\nvoid btDbvtBroadphase::rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0))\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 52132875\narg 4 ID = 91544891\narg 5 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		const btVector3* rayFrom_ptr=(Luna< btVector3 >::check(L,2));
		if( !rayFrom_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayFrom in btDbvtBroadphase::rayTest function");
		}
		const btVector3 & rayFrom=*rayFrom_ptr;
		const btVector3* rayTo_ptr=(Luna< btVector3 >::check(L,3));
		if( !rayTo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayTo in btDbvtBroadphase::rayTest function");
		}
		const btVector3 & rayTo=*rayTo_ptr;
		btBroadphaseRayCallback* rayCallback_ptr=(Luna< btBroadphaseAabbCallback >::checkSubType< btBroadphaseRayCallback >(L,4));
		if( !rayCallback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayCallback in btDbvtBroadphase::rayTest function");
		}
		btBroadphaseRayCallback & rayCallback=*rayCallback_ptr;
		const btVector3* aabbMin_ptr=luatop>4 ? (Luna< btVector3 >::check(L,5)) : NULL;
		if( luatop>4 && !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btDbvtBroadphase::rayTest function");
		}
		const btVector3 & aabbMin=luatop>4 ? *aabbMin_ptr : (const btVector3&)btVector3 (0, 0, 0);
		const btVector3* aabbMax_ptr=luatop>5 ? (Luna< btVector3 >::check(L,6)) : NULL;
		if( luatop>5 && !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btDbvtBroadphase::rayTest function");
		}
		const btVector3 & aabbMax=luatop>5 ? *aabbMax_ptr : (const btVector3&)btVector3 (0, 0, 0);

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::rayTest(const btVector3 &, const btVector3 &, btBroadphaseRayCallback &, const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->rayTest(rayFrom, rayTo, rayCallback, aabbMin, aabbMax);

		return 0;
	}

	// void btDbvtBroadphase::aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback)
	static int _bind_aabbTest(lua_State *L) {
		if (!_lg_typecheck_aabbTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback) function, expected prototype:\nvoid btDbvtBroadphase::aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 52132875\n");
		}

		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btDbvtBroadphase::aabbTest function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btDbvtBroadphase::aabbTest function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;
		btBroadphaseAabbCallback* callback_ptr=(Luna< btBroadphaseAabbCallback >::check(L,4));
		if( !callback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg callback in btDbvtBroadphase::aabbTest function");
		}
		btBroadphaseAabbCallback & callback=*callback_ptr;

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::aabbTest(const btVector3 &, const btVector3 &, btBroadphaseAabbCallback &). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->aabbTest(aabbMin, aabbMax, callback);

		return 0;
	}

	// void btDbvtBroadphase::getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getAabb(lua_State *L) {
		if (!_lg_typecheck_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btDbvtBroadphase::getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btDbvtBroadphase::getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btDbvtBroadphase::getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::getAabb(btBroadphaseProxy *, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->getAabb(proxy, aabbMin, aabbMax);

		return 0;
	}

	// void btDbvtBroadphase::calculateOverlappingPairs(btDispatcher * dispatcher)
	static int _bind_calculateOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_calculateOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::calculateOverlappingPairs(btDispatcher * dispatcher) function, expected prototype:\nvoid btDbvtBroadphase::calculateOverlappingPairs(btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 71097681\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::calculateOverlappingPairs(btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->calculateOverlappingPairs(dispatcher);

		return 0;
	}

	// btOverlappingPairCache * btDbvtBroadphase::getOverlappingPairCache()
	static int _bind_getOverlappingPairCache_overload_1(lua_State *L) {
		if (!_lg_typecheck_getOverlappingPairCache_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btOverlappingPairCache * btDbvtBroadphase::getOverlappingPairCache() function, expected prototype:\nbtOverlappingPairCache * btDbvtBroadphase::getOverlappingPairCache()\nClass arguments details:\n");
		}


		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btOverlappingPairCache * btDbvtBroadphase::getOverlappingPairCache(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		btOverlappingPairCache * lret = self->getOverlappingPairCache();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btOverlappingPairCache >::push(L,lret,false);

		return 1;
	}

	// const btOverlappingPairCache * btDbvtBroadphase::getOverlappingPairCache() const
	static int _bind_getOverlappingPairCache_overload_2(lua_State *L) {
		if (!_lg_typecheck_getOverlappingPairCache_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btOverlappingPairCache * btDbvtBroadphase::getOverlappingPairCache() const function, expected prototype:\nconst btOverlappingPairCache * btDbvtBroadphase::getOverlappingPairCache() const\nClass arguments details:\n");
		}


		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btOverlappingPairCache * btDbvtBroadphase::getOverlappingPairCache() const. Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		const btOverlappingPairCache * lret = self->getOverlappingPairCache();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btOverlappingPairCache >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btDbvtBroadphase::getOverlappingPairCache
	static int _bind_getOverlappingPairCache(lua_State *L) {
		if (_lg_typecheck_getOverlappingPairCache_overload_1(L)) return _bind_getOverlappingPairCache_overload_1(L);
		if (_lg_typecheck_getOverlappingPairCache_overload_2(L)) return _bind_getOverlappingPairCache_overload_2(L);

		luaL_error(L, "error in function getOverlappingPairCache, cannot match any of the overloads for function getOverlappingPairCache:\n  getOverlappingPairCache()\n  getOverlappingPairCache()\n");
		return 0;
	}

	// void btDbvtBroadphase::getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getBroadphaseAabb(lua_State *L) {
		if (!_lg_typecheck_getBroadphaseAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btDbvtBroadphase::getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btDbvtBroadphase::getBroadphaseAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btDbvtBroadphase::getBroadphaseAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::getBroadphaseAabb(btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->getBroadphaseAabb(aabbMin, aabbMax);

		return 0;
	}

	// void btDbvtBroadphase::printStats()
	static int _bind_printStats(lua_State *L) {
		if (!_lg_typecheck_printStats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::printStats() function, expected prototype:\nvoid btDbvtBroadphase::printStats()\nClass arguments details:\n");
		}


		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::printStats(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->printStats();

		return 0;
	}

	// void btDbvtBroadphase::resetPool(btDispatcher * dispatcher)
	static int _bind_resetPool(lua_State *L) {
		if (!_lg_typecheck_resetPool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::resetPool(btDispatcher * dispatcher) function, expected prototype:\nvoid btDbvtBroadphase::resetPool(btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 71097681\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::resetPool(btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->resetPool(dispatcher);

		return 0;
	}

	// void btDbvtBroadphase::performDeferredRemoval(btDispatcher * dispatcher)
	static int _bind_performDeferredRemoval(lua_State *L) {
		if (!_lg_typecheck_performDeferredRemoval(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::performDeferredRemoval(btDispatcher * dispatcher) function, expected prototype:\nvoid btDbvtBroadphase::performDeferredRemoval(btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 71097681\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::performDeferredRemoval(btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->performDeferredRemoval(dispatcher);

		return 0;
	}

	// void btDbvtBroadphase::setVelocityPrediction(float prediction)
	static int _bind_setVelocityPrediction(lua_State *L) {
		if (!_lg_typecheck_setVelocityPrediction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::setVelocityPrediction(float prediction) function, expected prototype:\nvoid btDbvtBroadphase::setVelocityPrediction(float prediction)\nClass arguments details:\n");
		}

		float prediction=(float)lua_tonumber(L,2);

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::setVelocityPrediction(float). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->setVelocityPrediction(prediction);

		return 0;
	}

	// float btDbvtBroadphase::getVelocityPrediction() const
	static int _bind_getVelocityPrediction(lua_State *L) {
		if (!_lg_typecheck_getVelocityPrediction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btDbvtBroadphase::getVelocityPrediction() const function, expected prototype:\nfloat btDbvtBroadphase::getVelocityPrediction() const\nClass arguments details:\n");
		}


		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btDbvtBroadphase::getVelocityPrediction() const. Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		float lret = self->getVelocityPrediction();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btDbvtBroadphase::setAabbForceUpdate(btBroadphaseProxy * absproxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * arg4)
	static int _bind_setAabbForceUpdate(lua_State *L) {
		if (!_lg_typecheck_setAabbForceUpdate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::setAabbForceUpdate(btBroadphaseProxy * absproxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * arg4) function, expected prototype:\nvoid btDbvtBroadphase::setAabbForceUpdate(btBroadphaseProxy * absproxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * arg4)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 71097681\n");
		}

		btBroadphaseProxy* absproxy=(Luna< btBroadphaseProxy >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btDbvtBroadphase::setAabbForceUpdate function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btDbvtBroadphase::setAabbForceUpdate function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;
		btDispatcher* _arg4=(Luna< btDispatcher >::check(L,5));

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::setAabbForceUpdate(btBroadphaseProxy *, const btVector3 &, const btVector3 &, btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->setAabbForceUpdate(absproxy, aabbMin, aabbMax, _arg4);

		return 0;
	}

	// static void btDbvtBroadphase::benchmark(btBroadphaseInterface * arg1)
	static int _bind_benchmark(lua_State *L) {
		if (!_lg_typecheck_benchmark(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void btDbvtBroadphase::benchmark(btBroadphaseInterface * arg1) function, expected prototype:\nstatic void btDbvtBroadphase::benchmark(btBroadphaseInterface * arg1)\nClass arguments details:\narg 1 ID = 25261840\n");
		}

		btBroadphaseInterface* _arg1=(Luna< btBroadphaseInterface >::check(L,1));

		btDbvtBroadphase::benchmark(_arg1);

		return 0;
	}

	// btOverlappingPairCache * btDbvtBroadphase::m_paircache()
	static int _bind_getPaircache(lua_State *L) {
		if (!_lg_typecheck_getPaircache(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btOverlappingPairCache * btDbvtBroadphase::m_paircache() function, expected prototype:\nbtOverlappingPairCache * btDbvtBroadphase::m_paircache()\nClass arguments details:\n");
		}


		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btOverlappingPairCache * btDbvtBroadphase::m_paircache(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		btOverlappingPairCache * lret = self->m_paircache;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btOverlappingPairCache >::push(L,lret,false);

		return 1;
	}

	// float btDbvtBroadphase::m_prediction()
	static int _bind_getPrediction(lua_State *L) {
		if (!_lg_typecheck_getPrediction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btDbvtBroadphase::m_prediction() function, expected prototype:\nfloat btDbvtBroadphase::m_prediction()\nClass arguments details:\n");
		}


		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btDbvtBroadphase::m_prediction(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		float lret = self->m_prediction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btDbvtBroadphase::m_stageCurrent()
	static int _bind_getStageCurrent(lua_State *L) {
		if (!_lg_typecheck_getStageCurrent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDbvtBroadphase::m_stageCurrent() function, expected prototype:\nint btDbvtBroadphase::m_stageCurrent()\nClass arguments details:\n");
		}


		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDbvtBroadphase::m_stageCurrent(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		int lret = self->m_stageCurrent;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btDbvtBroadphase::m_fupdates()
	static int _bind_getFupdates(lua_State *L) {
		if (!_lg_typecheck_getFupdates(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDbvtBroadphase::m_fupdates() function, expected prototype:\nint btDbvtBroadphase::m_fupdates()\nClass arguments details:\n");
		}


		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDbvtBroadphase::m_fupdates(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		int lret = self->m_fupdates;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btDbvtBroadphase::m_dupdates()
	static int _bind_getDupdates(lua_State *L) {
		if (!_lg_typecheck_getDupdates(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDbvtBroadphase::m_dupdates() function, expected prototype:\nint btDbvtBroadphase::m_dupdates()\nClass arguments details:\n");
		}


		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDbvtBroadphase::m_dupdates(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		int lret = self->m_dupdates;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btDbvtBroadphase::m_cupdates()
	static int _bind_getCupdates(lua_State *L) {
		if (!_lg_typecheck_getCupdates(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDbvtBroadphase::m_cupdates() function, expected prototype:\nint btDbvtBroadphase::m_cupdates()\nClass arguments details:\n");
		}


		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDbvtBroadphase::m_cupdates(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		int lret = self->m_cupdates;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btDbvtBroadphase::m_newpairs()
	static int _bind_getNewpairs(lua_State *L) {
		if (!_lg_typecheck_getNewpairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDbvtBroadphase::m_newpairs() function, expected prototype:\nint btDbvtBroadphase::m_newpairs()\nClass arguments details:\n");
		}


		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDbvtBroadphase::m_newpairs(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		int lret = self->m_newpairs;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btDbvtBroadphase::m_fixedleft()
	static int _bind_getFixedleft(lua_State *L) {
		if (!_lg_typecheck_getFixedleft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDbvtBroadphase::m_fixedleft() function, expected prototype:\nint btDbvtBroadphase::m_fixedleft()\nClass arguments details:\n");
		}


		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDbvtBroadphase::m_fixedleft(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		int lret = self->m_fixedleft;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int btDbvtBroadphase::m_updates_call()
	static int _bind_get_updates_call(lua_State *L) {
		if (!_lg_typecheck_get_updates_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int btDbvtBroadphase::m_updates_call() function, expected prototype:\nunsigned int btDbvtBroadphase::m_updates_call()\nClass arguments details:\n");
		}


		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int btDbvtBroadphase::m_updates_call(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		unsigned int lret = self->m_updates_call;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int btDbvtBroadphase::m_updates_done()
	static int _bind_get_updates_done(lua_State *L) {
		if (!_lg_typecheck_get_updates_done(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int btDbvtBroadphase::m_updates_done() function, expected prototype:\nunsigned int btDbvtBroadphase::m_updates_done()\nClass arguments details:\n");
		}


		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int btDbvtBroadphase::m_updates_done(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		unsigned int lret = self->m_updates_done;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btDbvtBroadphase::m_updates_ratio()
	static int _bind_get_updates_ratio(lua_State *L) {
		if (!_lg_typecheck_get_updates_ratio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btDbvtBroadphase::m_updates_ratio() function, expected prototype:\nfloat btDbvtBroadphase::m_updates_ratio()\nClass arguments details:\n");
		}


		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btDbvtBroadphase::m_updates_ratio(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		float lret = self->m_updates_ratio;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btDbvtBroadphase::m_pid()
	static int _bind_getPid(lua_State *L) {
		if (!_lg_typecheck_getPid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDbvtBroadphase::m_pid() function, expected prototype:\nint btDbvtBroadphase::m_pid()\nClass arguments details:\n");
		}


		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDbvtBroadphase::m_pid(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		int lret = self->m_pid;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btDbvtBroadphase::m_cid()
	static int _bind_getCid(lua_State *L) {
		if (!_lg_typecheck_getCid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDbvtBroadphase::m_cid() function, expected prototype:\nint btDbvtBroadphase::m_cid()\nClass arguments details:\n");
		}


		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDbvtBroadphase::m_cid(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		int lret = self->m_cid;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btDbvtBroadphase::m_gid()
	static int _bind_getGid(lua_State *L) {
		if (!_lg_typecheck_getGid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDbvtBroadphase::m_gid() function, expected prototype:\nint btDbvtBroadphase::m_gid()\nClass arguments details:\n");
		}


		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDbvtBroadphase::m_gid(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		int lret = self->m_gid;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btDbvtBroadphase::m_releasepaircache()
	static int _bind_getReleasepaircache(lua_State *L) {
		if (!_lg_typecheck_getReleasepaircache(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btDbvtBroadphase::m_releasepaircache() function, expected prototype:\nbool btDbvtBroadphase::m_releasepaircache()\nClass arguments details:\n");
		}


		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btDbvtBroadphase::m_releasepaircache(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		bool lret = self->m_releasepaircache;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btDbvtBroadphase::m_deferedcollide()
	static int _bind_getDeferedcollide(lua_State *L) {
		if (!_lg_typecheck_getDeferedcollide(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btDbvtBroadphase::m_deferedcollide() function, expected prototype:\nbool btDbvtBroadphase::m_deferedcollide()\nClass arguments details:\n");
		}


		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btDbvtBroadphase::m_deferedcollide(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		bool lret = self->m_deferedcollide;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btDbvtBroadphase::m_needcleanup()
	static int _bind_getNeedcleanup(lua_State *L) {
		if (!_lg_typecheck_getNeedcleanup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btDbvtBroadphase::m_needcleanup() function, expected prototype:\nbool btDbvtBroadphase::m_needcleanup()\nClass arguments details:\n");
		}


		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btDbvtBroadphase::m_needcleanup(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		bool lret = self->m_needcleanup;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btDbvtBroadphase::m_paircache(btOverlappingPairCache * value)
	static int _bind_setPaircache(lua_State *L) {
		if (!_lg_typecheck_setPaircache(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::m_paircache(btOverlappingPairCache * value) function, expected prototype:\nvoid btDbvtBroadphase::m_paircache(btOverlappingPairCache * value)\nClass arguments details:\narg 1 ID = 78133027\n");
		}

		btOverlappingPairCache* value=(Luna< btOverlappingPairCallback >::checkSubType< btOverlappingPairCache >(L,2));

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::m_paircache(btOverlappingPairCache *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->m_paircache = value;

		return 0;
	}

	// void btDbvtBroadphase::m_prediction(float value)
	static int _bind_setPrediction(lua_State *L) {
		if (!_lg_typecheck_setPrediction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::m_prediction(float value) function, expected prototype:\nvoid btDbvtBroadphase::m_prediction(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::m_prediction(float). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->m_prediction = value;

		return 0;
	}

	// void btDbvtBroadphase::m_stageCurrent(int value)
	static int _bind_setStageCurrent(lua_State *L) {
		if (!_lg_typecheck_setStageCurrent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::m_stageCurrent(int value) function, expected prototype:\nvoid btDbvtBroadphase::m_stageCurrent(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::m_stageCurrent(int). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->m_stageCurrent = value;

		return 0;
	}

	// void btDbvtBroadphase::m_fupdates(int value)
	static int _bind_setFupdates(lua_State *L) {
		if (!_lg_typecheck_setFupdates(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::m_fupdates(int value) function, expected prototype:\nvoid btDbvtBroadphase::m_fupdates(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::m_fupdates(int). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->m_fupdates = value;

		return 0;
	}

	// void btDbvtBroadphase::m_dupdates(int value)
	static int _bind_setDupdates(lua_State *L) {
		if (!_lg_typecheck_setDupdates(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::m_dupdates(int value) function, expected prototype:\nvoid btDbvtBroadphase::m_dupdates(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::m_dupdates(int). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->m_dupdates = value;

		return 0;
	}

	// void btDbvtBroadphase::m_cupdates(int value)
	static int _bind_setCupdates(lua_State *L) {
		if (!_lg_typecheck_setCupdates(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::m_cupdates(int value) function, expected prototype:\nvoid btDbvtBroadphase::m_cupdates(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::m_cupdates(int). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->m_cupdates = value;

		return 0;
	}

	// void btDbvtBroadphase::m_newpairs(int value)
	static int _bind_setNewpairs(lua_State *L) {
		if (!_lg_typecheck_setNewpairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::m_newpairs(int value) function, expected prototype:\nvoid btDbvtBroadphase::m_newpairs(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::m_newpairs(int). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->m_newpairs = value;

		return 0;
	}

	// void btDbvtBroadphase::m_fixedleft(int value)
	static int _bind_setFixedleft(lua_State *L) {
		if (!_lg_typecheck_setFixedleft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::m_fixedleft(int value) function, expected prototype:\nvoid btDbvtBroadphase::m_fixedleft(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::m_fixedleft(int). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->m_fixedleft = value;

		return 0;
	}

	// void btDbvtBroadphase::m_updates_call(unsigned int value)
	static int _bind_set_updates_call(lua_State *L) {
		if (!_lg_typecheck_set_updates_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::m_updates_call(unsigned int value) function, expected prototype:\nvoid btDbvtBroadphase::m_updates_call(unsigned int value)\nClass arguments details:\n");
		}

		unsigned value=(unsigned)lua_tointeger(L,2);

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::m_updates_call(unsigned int). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->m_updates_call = value;

		return 0;
	}

	// void btDbvtBroadphase::m_updates_done(unsigned int value)
	static int _bind_set_updates_done(lua_State *L) {
		if (!_lg_typecheck_set_updates_done(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::m_updates_done(unsigned int value) function, expected prototype:\nvoid btDbvtBroadphase::m_updates_done(unsigned int value)\nClass arguments details:\n");
		}

		unsigned value=(unsigned)lua_tointeger(L,2);

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::m_updates_done(unsigned int). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->m_updates_done = value;

		return 0;
	}

	// void btDbvtBroadphase::m_updates_ratio(float value)
	static int _bind_set_updates_ratio(lua_State *L) {
		if (!_lg_typecheck_set_updates_ratio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::m_updates_ratio(float value) function, expected prototype:\nvoid btDbvtBroadphase::m_updates_ratio(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::m_updates_ratio(float). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->m_updates_ratio = value;

		return 0;
	}

	// void btDbvtBroadphase::m_pid(int value)
	static int _bind_setPid(lua_State *L) {
		if (!_lg_typecheck_setPid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::m_pid(int value) function, expected prototype:\nvoid btDbvtBroadphase::m_pid(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::m_pid(int). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->m_pid = value;

		return 0;
	}

	// void btDbvtBroadphase::m_cid(int value)
	static int _bind_setCid(lua_State *L) {
		if (!_lg_typecheck_setCid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::m_cid(int value) function, expected prototype:\nvoid btDbvtBroadphase::m_cid(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::m_cid(int). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->m_cid = value;

		return 0;
	}

	// void btDbvtBroadphase::m_gid(int value)
	static int _bind_setGid(lua_State *L) {
		if (!_lg_typecheck_setGid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::m_gid(int value) function, expected prototype:\nvoid btDbvtBroadphase::m_gid(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::m_gid(int). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->m_gid = value;

		return 0;
	}

	// void btDbvtBroadphase::m_releasepaircache(bool value)
	static int _bind_setReleasepaircache(lua_State *L) {
		if (!_lg_typecheck_setReleasepaircache(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::m_releasepaircache(bool value) function, expected prototype:\nvoid btDbvtBroadphase::m_releasepaircache(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::m_releasepaircache(bool). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->m_releasepaircache = value;

		return 0;
	}

	// void btDbvtBroadphase::m_deferedcollide(bool value)
	static int _bind_setDeferedcollide(lua_State *L) {
		if (!_lg_typecheck_setDeferedcollide(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::m_deferedcollide(bool value) function, expected prototype:\nvoid btDbvtBroadphase::m_deferedcollide(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::m_deferedcollide(bool). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->m_deferedcollide = value;

		return 0;
	}

	// void btDbvtBroadphase::m_needcleanup(bool value)
	static int _bind_setNeedcleanup(lua_State *L) {
		if (!_lg_typecheck_setNeedcleanup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::m_needcleanup(bool value) function, expected prototype:\nvoid btDbvtBroadphase::m_needcleanup(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::m_needcleanup(bool). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->m_needcleanup = value;

		return 0;
	}

	// btBroadphaseProxy * btDbvtBroadphase::base_createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy)
	static int _bind_base_createProxy(lua_State *L) {
		if (!_lg_typecheck_base_createProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphaseProxy * btDbvtBroadphase::base_createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy) function, expected prototype:\nbtBroadphaseProxy * btDbvtBroadphase::base_createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 7 ID = 71097681\n");
		}

		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btDbvtBroadphase::base_createProxy function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btDbvtBroadphase::base_createProxy function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;
		int shapeType=(int)lua_tointeger(L,4);
		void* userPtr=(Luna< void >::check(L,5));
		short int collisionFilterGroup=(short int)lua_tointeger(L,6);
		short int collisionFilterMask=(short int)lua_tointeger(L,7);
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,8));
		void* multiSapProxy=(Luna< void >::check(L,9));

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphaseProxy * btDbvtBroadphase::base_createProxy(const btVector3 &, const btVector3 &, int, void *, short int, short int, btDispatcher *, void *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		btBroadphaseProxy * lret = self->btDbvtBroadphase::createProxy(aabbMin, aabbMax, shapeType, userPtr, collisionFilterGroup, collisionFilterMask, dispatcher, multiSapProxy);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphaseProxy >::push(L,lret,false);

		return 1;
	}

	// void btDbvtBroadphase::base_destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	static int _bind_base_destroyProxy(lua_State *L) {
		if (!_lg_typecheck_base_destroyProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::base_destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher) function, expected prototype:\nvoid btDbvtBroadphase::base_destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::base_destroyProxy(btBroadphaseProxy *, btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btDbvtBroadphase::destroyProxy(proxy, dispatcher);

		return 0;
	}

	// void btDbvtBroadphase::base_setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher)
	static int _bind_base_setAabb(lua_State *L) {
		if (!_lg_typecheck_base_setAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::base_setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher) function, expected prototype:\nvoid btDbvtBroadphase::base_setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 71097681\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btDbvtBroadphase::base_setAabb function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btDbvtBroadphase::base_setAabb function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,5));

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::base_setAabb(btBroadphaseProxy *, const btVector3 &, const btVector3 &, btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btDbvtBroadphase::setAabb(proxy, aabbMin, aabbMax, dispatcher);

		return 0;
	}

	// void btDbvtBroadphase::base_rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0))
	static int _bind_base_rayTest(lua_State *L) {
		if (!_lg_typecheck_base_rayTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::base_rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0)) function, expected prototype:\nvoid btDbvtBroadphase::base_rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0))\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 52132875\narg 4 ID = 91544891\narg 5 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		const btVector3* rayFrom_ptr=(Luna< btVector3 >::check(L,2));
		if( !rayFrom_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayFrom in btDbvtBroadphase::base_rayTest function");
		}
		const btVector3 & rayFrom=*rayFrom_ptr;
		const btVector3* rayTo_ptr=(Luna< btVector3 >::check(L,3));
		if( !rayTo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayTo in btDbvtBroadphase::base_rayTest function");
		}
		const btVector3 & rayTo=*rayTo_ptr;
		btBroadphaseRayCallback* rayCallback_ptr=(Luna< btBroadphaseAabbCallback >::checkSubType< btBroadphaseRayCallback >(L,4));
		if( !rayCallback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayCallback in btDbvtBroadphase::base_rayTest function");
		}
		btBroadphaseRayCallback & rayCallback=*rayCallback_ptr;
		const btVector3* aabbMin_ptr=luatop>4 ? (Luna< btVector3 >::check(L,5)) : NULL;
		if( luatop>4 && !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btDbvtBroadphase::base_rayTest function");
		}
		const btVector3 & aabbMin=luatop>4 ? *aabbMin_ptr : (const btVector3&)btVector3 (0, 0, 0);
		const btVector3* aabbMax_ptr=luatop>5 ? (Luna< btVector3 >::check(L,6)) : NULL;
		if( luatop>5 && !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btDbvtBroadphase::base_rayTest function");
		}
		const btVector3 & aabbMax=luatop>5 ? *aabbMax_ptr : (const btVector3&)btVector3 (0, 0, 0);

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::base_rayTest(const btVector3 &, const btVector3 &, btBroadphaseRayCallback &, const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btDbvtBroadphase::rayTest(rayFrom, rayTo, rayCallback, aabbMin, aabbMax);

		return 0;
	}

	// void btDbvtBroadphase::base_aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback)
	static int _bind_base_aabbTest(lua_State *L) {
		if (!_lg_typecheck_base_aabbTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::base_aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback) function, expected prototype:\nvoid btDbvtBroadphase::base_aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 52132875\n");
		}

		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btDbvtBroadphase::base_aabbTest function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btDbvtBroadphase::base_aabbTest function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;
		btBroadphaseAabbCallback* callback_ptr=(Luna< btBroadphaseAabbCallback >::check(L,4));
		if( !callback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg callback in btDbvtBroadphase::base_aabbTest function");
		}
		btBroadphaseAabbCallback & callback=*callback_ptr;

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::base_aabbTest(const btVector3 &, const btVector3 &, btBroadphaseAabbCallback &). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btDbvtBroadphase::aabbTest(aabbMin, aabbMax, callback);

		return 0;
	}

	// void btDbvtBroadphase::base_getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::base_getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btDbvtBroadphase::base_getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btDbvtBroadphase::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btDbvtBroadphase::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::base_getAabb(btBroadphaseProxy *, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btDbvtBroadphase::getAabb(proxy, aabbMin, aabbMax);

		return 0;
	}

	// void btDbvtBroadphase::base_calculateOverlappingPairs(btDispatcher * dispatcher)
	static int _bind_base_calculateOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_base_calculateOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::base_calculateOverlappingPairs(btDispatcher * dispatcher) function, expected prototype:\nvoid btDbvtBroadphase::base_calculateOverlappingPairs(btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 71097681\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::base_calculateOverlappingPairs(btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btDbvtBroadphase::calculateOverlappingPairs(dispatcher);

		return 0;
	}

	// btOverlappingPairCache * btDbvtBroadphase::base_getOverlappingPairCache()
	static int _bind_base_getOverlappingPairCache_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getOverlappingPairCache_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btOverlappingPairCache * btDbvtBroadphase::base_getOverlappingPairCache() function, expected prototype:\nbtOverlappingPairCache * btDbvtBroadphase::base_getOverlappingPairCache()\nClass arguments details:\n");
		}


		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btOverlappingPairCache * btDbvtBroadphase::base_getOverlappingPairCache(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		btOverlappingPairCache * lret = self->btDbvtBroadphase::getOverlappingPairCache();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btOverlappingPairCache >::push(L,lret,false);

		return 1;
	}

	// const btOverlappingPairCache * btDbvtBroadphase::base_getOverlappingPairCache() const
	static int _bind_base_getOverlappingPairCache_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getOverlappingPairCache_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btOverlappingPairCache * btDbvtBroadphase::base_getOverlappingPairCache() const function, expected prototype:\nconst btOverlappingPairCache * btDbvtBroadphase::base_getOverlappingPairCache() const\nClass arguments details:\n");
		}


		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btOverlappingPairCache * btDbvtBroadphase::base_getOverlappingPairCache() const. Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		const btOverlappingPairCache * lret = self->btDbvtBroadphase::getOverlappingPairCache();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btOverlappingPairCache >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btDbvtBroadphase::base_getOverlappingPairCache
	static int _bind_base_getOverlappingPairCache(lua_State *L) {
		if (_lg_typecheck_base_getOverlappingPairCache_overload_1(L)) return _bind_base_getOverlappingPairCache_overload_1(L);
		if (_lg_typecheck_base_getOverlappingPairCache_overload_2(L)) return _bind_base_getOverlappingPairCache_overload_2(L);

		luaL_error(L, "error in function base_getOverlappingPairCache, cannot match any of the overloads for function base_getOverlappingPairCache:\n  base_getOverlappingPairCache()\n  base_getOverlappingPairCache()\n");
		return 0;
	}

	// void btDbvtBroadphase::base_getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getBroadphaseAabb(lua_State *L) {
		if (!_lg_typecheck_base_getBroadphaseAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::base_getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btDbvtBroadphase::base_getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btDbvtBroadphase::base_getBroadphaseAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btDbvtBroadphase::base_getBroadphaseAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::base_getBroadphaseAabb(btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btDbvtBroadphase::getBroadphaseAabb(aabbMin, aabbMax);

		return 0;
	}

	// void btDbvtBroadphase::base_printStats()
	static int _bind_base_printStats(lua_State *L) {
		if (!_lg_typecheck_base_printStats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::base_printStats() function, expected prototype:\nvoid btDbvtBroadphase::base_printStats()\nClass arguments details:\n");
		}


		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::base_printStats(). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btDbvtBroadphase::printStats();

		return 0;
	}

	// void btDbvtBroadphase::base_resetPool(btDispatcher * dispatcher)
	static int _bind_base_resetPool(lua_State *L) {
		if (!_lg_typecheck_base_resetPool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtBroadphase::base_resetPool(btDispatcher * dispatcher) function, expected prototype:\nvoid btDbvtBroadphase::base_resetPool(btDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 71097681\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));

		btDbvtBroadphase* self=Luna< btBroadphaseInterface >::checkSubType< btDbvtBroadphase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtBroadphase::base_resetPool(btDispatcher *). Got : '%s'",typeid(Luna< btBroadphaseInterface >::check(L,1)).name());
		}
		self->btDbvtBroadphase::resetPool(dispatcher);

		return 0;
	}


	// Operator binds:

};

btDbvtBroadphase* LunaTraits< btDbvtBroadphase >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btDbvtBroadphase::_bind_ctor(L);
}

void LunaTraits< btDbvtBroadphase >::_bind_dtor(btDbvtBroadphase* obj) {
	delete obj;
}

const char LunaTraits< btDbvtBroadphase >::className[] = "btDbvtBroadphase";
const char LunaTraits< btDbvtBroadphase >::fullName[] = "btDbvtBroadphase";
const char LunaTraits< btDbvtBroadphase >::moduleName[] = "bullet";
const char* LunaTraits< btDbvtBroadphase >::parents[] = {"bullet.btBroadphaseInterface", 0};
const int LunaTraits< btDbvtBroadphase >::hash = 59198594;
const int LunaTraits< btDbvtBroadphase >::uniqueIDs[] = {25261840,0};

luna_RegType LunaTraits< btDbvtBroadphase >::methods[] = {
	{"collide", &luna_wrapper_btDbvtBroadphase::_bind_collide},
	{"optimize", &luna_wrapper_btDbvtBroadphase::_bind_optimize},
	{"createProxy", &luna_wrapper_btDbvtBroadphase::_bind_createProxy},
	{"destroyProxy", &luna_wrapper_btDbvtBroadphase::_bind_destroyProxy},
	{"setAabb", &luna_wrapper_btDbvtBroadphase::_bind_setAabb},
	{"rayTest", &luna_wrapper_btDbvtBroadphase::_bind_rayTest},
	{"aabbTest", &luna_wrapper_btDbvtBroadphase::_bind_aabbTest},
	{"getAabb", &luna_wrapper_btDbvtBroadphase::_bind_getAabb},
	{"calculateOverlappingPairs", &luna_wrapper_btDbvtBroadphase::_bind_calculateOverlappingPairs},
	{"getOverlappingPairCache", &luna_wrapper_btDbvtBroadphase::_bind_getOverlappingPairCache},
	{"getBroadphaseAabb", &luna_wrapper_btDbvtBroadphase::_bind_getBroadphaseAabb},
	{"printStats", &luna_wrapper_btDbvtBroadphase::_bind_printStats},
	{"resetPool", &luna_wrapper_btDbvtBroadphase::_bind_resetPool},
	{"performDeferredRemoval", &luna_wrapper_btDbvtBroadphase::_bind_performDeferredRemoval},
	{"setVelocityPrediction", &luna_wrapper_btDbvtBroadphase::_bind_setVelocityPrediction},
	{"getVelocityPrediction", &luna_wrapper_btDbvtBroadphase::_bind_getVelocityPrediction},
	{"setAabbForceUpdate", &luna_wrapper_btDbvtBroadphase::_bind_setAabbForceUpdate},
	{"benchmark", &luna_wrapper_btDbvtBroadphase::_bind_benchmark},
	{"getPaircache", &luna_wrapper_btDbvtBroadphase::_bind_getPaircache},
	{"getPrediction", &luna_wrapper_btDbvtBroadphase::_bind_getPrediction},
	{"getStageCurrent", &luna_wrapper_btDbvtBroadphase::_bind_getStageCurrent},
	{"getFupdates", &luna_wrapper_btDbvtBroadphase::_bind_getFupdates},
	{"getDupdates", &luna_wrapper_btDbvtBroadphase::_bind_getDupdates},
	{"getCupdates", &luna_wrapper_btDbvtBroadphase::_bind_getCupdates},
	{"getNewpairs", &luna_wrapper_btDbvtBroadphase::_bind_getNewpairs},
	{"getFixedleft", &luna_wrapper_btDbvtBroadphase::_bind_getFixedleft},
	{"get_updates_call", &luna_wrapper_btDbvtBroadphase::_bind_get_updates_call},
	{"get_updates_done", &luna_wrapper_btDbvtBroadphase::_bind_get_updates_done},
	{"get_updates_ratio", &luna_wrapper_btDbvtBroadphase::_bind_get_updates_ratio},
	{"getPid", &luna_wrapper_btDbvtBroadphase::_bind_getPid},
	{"getCid", &luna_wrapper_btDbvtBroadphase::_bind_getCid},
	{"getGid", &luna_wrapper_btDbvtBroadphase::_bind_getGid},
	{"getReleasepaircache", &luna_wrapper_btDbvtBroadphase::_bind_getReleasepaircache},
	{"getDeferedcollide", &luna_wrapper_btDbvtBroadphase::_bind_getDeferedcollide},
	{"getNeedcleanup", &luna_wrapper_btDbvtBroadphase::_bind_getNeedcleanup},
	{"setPaircache", &luna_wrapper_btDbvtBroadphase::_bind_setPaircache},
	{"setPrediction", &luna_wrapper_btDbvtBroadphase::_bind_setPrediction},
	{"setStageCurrent", &luna_wrapper_btDbvtBroadphase::_bind_setStageCurrent},
	{"setFupdates", &luna_wrapper_btDbvtBroadphase::_bind_setFupdates},
	{"setDupdates", &luna_wrapper_btDbvtBroadphase::_bind_setDupdates},
	{"setCupdates", &luna_wrapper_btDbvtBroadphase::_bind_setCupdates},
	{"setNewpairs", &luna_wrapper_btDbvtBroadphase::_bind_setNewpairs},
	{"setFixedleft", &luna_wrapper_btDbvtBroadphase::_bind_setFixedleft},
	{"set_updates_call", &luna_wrapper_btDbvtBroadphase::_bind_set_updates_call},
	{"set_updates_done", &luna_wrapper_btDbvtBroadphase::_bind_set_updates_done},
	{"set_updates_ratio", &luna_wrapper_btDbvtBroadphase::_bind_set_updates_ratio},
	{"setPid", &luna_wrapper_btDbvtBroadphase::_bind_setPid},
	{"setCid", &luna_wrapper_btDbvtBroadphase::_bind_setCid},
	{"setGid", &luna_wrapper_btDbvtBroadphase::_bind_setGid},
	{"setReleasepaircache", &luna_wrapper_btDbvtBroadphase::_bind_setReleasepaircache},
	{"setDeferedcollide", &luna_wrapper_btDbvtBroadphase::_bind_setDeferedcollide},
	{"setNeedcleanup", &luna_wrapper_btDbvtBroadphase::_bind_setNeedcleanup},
	{"base_createProxy", &luna_wrapper_btDbvtBroadphase::_bind_base_createProxy},
	{"base_destroyProxy", &luna_wrapper_btDbvtBroadphase::_bind_base_destroyProxy},
	{"base_setAabb", &luna_wrapper_btDbvtBroadphase::_bind_base_setAabb},
	{"base_rayTest", &luna_wrapper_btDbvtBroadphase::_bind_base_rayTest},
	{"base_aabbTest", &luna_wrapper_btDbvtBroadphase::_bind_base_aabbTest},
	{"base_getAabb", &luna_wrapper_btDbvtBroadphase::_bind_base_getAabb},
	{"base_calculateOverlappingPairs", &luna_wrapper_btDbvtBroadphase::_bind_base_calculateOverlappingPairs},
	{"base_getOverlappingPairCache", &luna_wrapper_btDbvtBroadphase::_bind_base_getOverlappingPairCache},
	{"base_getBroadphaseAabb", &luna_wrapper_btDbvtBroadphase::_bind_base_getBroadphaseAabb},
	{"base_printStats", &luna_wrapper_btDbvtBroadphase::_bind_base_printStats},
	{"base_resetPool", &luna_wrapper_btDbvtBroadphase::_bind_base_resetPool},
	{"fromVoid", &luna_wrapper_btDbvtBroadphase::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btDbvtBroadphase::_bind_asVoid},
	{"getTable", &luna_wrapper_btDbvtBroadphase::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btDbvtBroadphase >::converters[] = {
	{"btBroadphaseInterface", &luna_wrapper_btDbvtBroadphase::_cast_from_btBroadphaseInterface},
	{0,0}
};

luna_RegEnumType LunaTraits< btDbvtBroadphase >::enumValues[] = {
	{"DYNAMIC_SET", btDbvtBroadphase::DYNAMIC_SET},
	{"FIXED_SET", btDbvtBroadphase::FIXED_SET},
	{"STAGECOUNT", btDbvtBroadphase::STAGECOUNT},
	{0,0}
};


