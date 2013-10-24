#include <plug_common.h>

#include <luna/wrappers/wrapper_mglData.h>

class luna_wrapper_mglData {
public:
	typedef Luna< mglData > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		mglDataA* self=(Luna< mglDataA >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<mglDataA,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		mglData* self= (mglData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45413231) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< mglDataA >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_mglDataA(lua_State *L) {
		// all checked are already performed before reaching this point.
		//mglData* ptr= dynamic_cast< mglData* >(Luna< mglDataA >::check(L,1));
		mglData* ptr= luna_caster< mglDataA, mglData >::cast(Luna< mglDataA >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< mglData >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglData >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,45413231)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< mglDataA >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,45413231)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< mglDataA >::checkSubType< mglData >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_9(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_10(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_11(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>3 ) return false;

		if( luatop>0 && lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglData >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_13(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,45413231)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< mglDataA >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_14(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,45413231)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< mglDataA >::checkSubType< mglData >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_15(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_16(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_17(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_18(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_19(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_20(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_21(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_22(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetVal(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVal(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNx(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNz(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Link_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Link_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglData >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,45413231)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< mglDataA >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92299338) ) return false;
		if( (!(Luna< std::vector< int > >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,77249888) ) return false;
		if( (!(Luna< std::vector< float > >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,4564820) ) return false;
		if( (!(Luna< std::vector< double > >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Rearrange(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Transpose(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Extend(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Squeeze(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Crop(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Insert(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Delete(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clean(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Modify_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Modify_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Modify_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fill_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,88502113)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< mglBase >::check(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fill_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,88502113)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< mglBase >::check(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fill_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,88502113)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< mglBase >::check(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fill_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Grid(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,88502113)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Put_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Put_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColumnId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_NewId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Read_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Read_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Save(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Export(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Import(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReadRange(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReadAll(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReadMat(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReadHDF(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SaveHDF(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Column(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Momentum_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Momentum_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Momentum_overload_3(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SubData_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SubData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Trace(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Hist_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Hist_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Sum(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Max(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Min(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Combine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Resize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>10 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( luatop>7 && lua_type(L,8)!=LUA_TNUMBER ) return false;
		if( luatop>8 && lua_type(L,9)!=LUA_TNUMBER ) return false;
		if( luatop>9 && lua_type(L,10)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Evaluate_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglData >(L,2))) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Evaluate_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglData >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglData >(L,3))) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Evaluate_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglData >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglData >(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglData >(L,4))) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CumSum(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Integral(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Diff_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Diff_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Diff_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Diff2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Roll(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Mirror(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Sort(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Envelop(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Sew(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Smooth(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Norm(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_NormSl(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>6 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Hankel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SinFFT(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CosFFT(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FillSample(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Spline_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Spline_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Spline1_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Spline1_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Linear_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Linear_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Linear1_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Linear1_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Solve_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Solve_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Solve_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglData >(L,4))) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrintInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Maximal_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Maximal_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Maximal_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Minimal_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Minimal_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Minimal_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Find_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Find_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Last(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindAny(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DatasHDF(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNx(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNz(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLink(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNx(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNz(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLink(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetNx(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetNy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetNz(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Maximal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Minimal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 11 valid operators)
	inline static bool _lg_typecheck_op_assign_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglData >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_assign_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_mult_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_mult_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_div_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_div_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_add_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_add_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Constructor binds:
	// mglData::mglData(const mglData & d)
	static mglData* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in mglData::mglData(const mglData & d) function, expected prototype:\nmglData::mglData(const mglData & d)\nClass arguments details:\narg 1 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		const mglData* d_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,1));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglData::mglData function");
		}
		const mglData & d=*d_ptr;

		return new mglData(d);
	}

	// mglData::mglData(const mglDataA * d)
	static mglData* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in mglData::mglData(const mglDataA * d) function, expected prototype:\nmglData::mglData(const mglDataA * d)\nClass arguments details:\narg 1 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		const mglDataA* d=(Luna< mglDataA >::check(L,1));

		return new mglData(d);
	}

	// mglData::mglData(bool arg1, mglData * d)
	static mglData* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in mglData::mglData(bool arg1, mglData * d) function, expected prototype:\nmglData::mglData(bool arg1, mglData * d)\nClass arguments details:\narg 2 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		bool _arg1=(bool)(lua_toboolean(L,1)==1);
		mglData* d=(Luna< mglDataA >::checkSubType< mglData >(L,2));

		return new mglData(_arg1, d);
	}

	// mglData::mglData(int size, const float * d)
	static mglData* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in mglData::mglData(int size, const float * d) function, expected prototype:\nmglData::mglData(int size, const float * d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int size=(int)lua_tointeger(L,1);
		const float* d=(const float*)Luna< void >::check(L,2);

		return new mglData(size, d);
	}

	// mglData::mglData(int rows, int cols, const float * d)
	static mglData* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in mglData::mglData(int rows, int cols, const float * d) function, expected prototype:\nmglData::mglData(int rows, int cols, const float * d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int rows=(int)lua_tointeger(L,1);
		int cols=(int)lua_tointeger(L,2);
		const float* d=(const float*)Luna< void >::check(L,3);

		return new mglData(rows, cols, d);
	}

	// mglData::mglData(int size, const double * d)
	static mglData* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in mglData::mglData(int size, const double * d) function, expected prototype:\nmglData::mglData(int size, const double * d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int size=(int)lua_tointeger(L,1);
		const double* d=(const double*)Luna< void >::check(L,2);

		return new mglData(size, d);
	}

	// mglData::mglData(int rows, int cols, const double * d)
	static mglData* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in mglData::mglData(int rows, int cols, const double * d) function, expected prototype:\nmglData::mglData(int rows, int cols, const double * d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int rows=(int)lua_tointeger(L,1);
		int cols=(int)lua_tointeger(L,2);
		const double* d=(const double*)Luna< void >::check(L,3);

		return new mglData(rows, cols, d);
	}

	// mglData::mglData(const double * d, int size)
	static mglData* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in mglData::mglData(const double * d, int size) function, expected prototype:\nmglData::mglData(const double * d, int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const double* d=(const double*)Luna< void >::check(L,1);
		int size=(int)lua_tointeger(L,2);

		return new mglData(d, size);
	}

	// mglData::mglData(const double * d, int rows, int cols)
	static mglData* _bind_ctor_overload_9(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in mglData::mglData(const double * d, int rows, int cols) function, expected prototype:\nmglData::mglData(const double * d, int rows, int cols)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const double* d=(const double*)Luna< void >::check(L,1);
		int rows=(int)lua_tointeger(L,2);
		int cols=(int)lua_tointeger(L,3);

		return new mglData(d, rows, cols);
	}

	// mglData::mglData(const char * fname)
	static mglData* _bind_ctor_overload_10(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in mglData::mglData(const char * fname) function, expected prototype:\nmglData::mglData(const char * fname)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * fname=(const char *)lua_tostring(L,1);

		return new mglData(fname);
	}

	// mglData::mglData(long xx = 1, long yy = 1, long zz = 1)
	static mglData* _bind_ctor_overload_11(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in mglData::mglData(long xx = 1, long yy = 1, long zz = 1) function, expected prototype:\nmglData::mglData(long xx = 1, long yy = 1, long zz = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long xx=luatop>0 ? (long)lua_tonumber(L,1) : (long)1;
		long yy=luatop>1 ? (long)lua_tonumber(L,2) : (long)1;
		long zz=luatop>2 ? (long)lua_tonumber(L,3) : (long)1;

		return new mglData(xx, yy, zz);
	}

	// mglData::mglData(lua_Table * data, const mglData & d)
	static mglData* _bind_ctor_overload_12(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_12(L)) {
			luaL_error(L, "luna typecheck failed in mglData::mglData(lua_Table * data, const mglData & d) function, expected prototype:\nmglData::mglData(lua_Table * data, const mglData & d)\nClass arguments details:\narg 2 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		const mglData* d_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,2));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglData::mglData function");
		}
		const mglData & d=*d_ptr;

		return new wrapper_mglData(L,NULL, d);
	}

	// mglData::mglData(lua_Table * data, const mglDataA * d)
	static mglData* _bind_ctor_overload_13(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_13(L)) {
			luaL_error(L, "luna typecheck failed in mglData::mglData(lua_Table * data, const mglDataA * d) function, expected prototype:\nmglData::mglData(lua_Table * data, const mglDataA * d)\nClass arguments details:\narg 2 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		const mglDataA* d=(Luna< mglDataA >::check(L,2));

		return new wrapper_mglData(L,NULL, d);
	}

	// mglData::mglData(lua_Table * data, bool arg2, mglData * d)
	static mglData* _bind_ctor_overload_14(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_14(L)) {
			luaL_error(L, "luna typecheck failed in mglData::mglData(lua_Table * data, bool arg2, mglData * d) function, expected prototype:\nmglData::mglData(lua_Table * data, bool arg2, mglData * d)\nClass arguments details:\narg 3 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		bool _arg2=(bool)(lua_toboolean(L,2)==1);
		mglData* d=(Luna< mglDataA >::checkSubType< mglData >(L,3));

		return new wrapper_mglData(L,NULL, _arg2, d);
	}

	// mglData::mglData(lua_Table * data, int size, const float * d)
	static mglData* _bind_ctor_overload_15(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_15(L)) {
			luaL_error(L, "luna typecheck failed in mglData::mglData(lua_Table * data, int size, const float * d) function, expected prototype:\nmglData::mglData(lua_Table * data, int size, const float * d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int size=(int)lua_tointeger(L,2);
		const float* d=(const float*)Luna< void >::check(L,3);

		return new wrapper_mglData(L,NULL, size, d);
	}

	// mglData::mglData(lua_Table * data, int rows, int cols, const float * d)
	static mglData* _bind_ctor_overload_16(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_16(L)) {
			luaL_error(L, "luna typecheck failed in mglData::mglData(lua_Table * data, int rows, int cols, const float * d) function, expected prototype:\nmglData::mglData(lua_Table * data, int rows, int cols, const float * d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int rows=(int)lua_tointeger(L,2);
		int cols=(int)lua_tointeger(L,3);
		const float* d=(const float*)Luna< void >::check(L,4);

		return new wrapper_mglData(L,NULL, rows, cols, d);
	}

	// mglData::mglData(lua_Table * data, int size, const double * d)
	static mglData* _bind_ctor_overload_17(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_17(L)) {
			luaL_error(L, "luna typecheck failed in mglData::mglData(lua_Table * data, int size, const double * d) function, expected prototype:\nmglData::mglData(lua_Table * data, int size, const double * d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int size=(int)lua_tointeger(L,2);
		const double* d=(const double*)Luna< void >::check(L,3);

		return new wrapper_mglData(L,NULL, size, d);
	}

	// mglData::mglData(lua_Table * data, int rows, int cols, const double * d)
	static mglData* _bind_ctor_overload_18(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_18(L)) {
			luaL_error(L, "luna typecheck failed in mglData::mglData(lua_Table * data, int rows, int cols, const double * d) function, expected prototype:\nmglData::mglData(lua_Table * data, int rows, int cols, const double * d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int rows=(int)lua_tointeger(L,2);
		int cols=(int)lua_tointeger(L,3);
		const double* d=(const double*)Luna< void >::check(L,4);

		return new wrapper_mglData(L,NULL, rows, cols, d);
	}

	// mglData::mglData(lua_Table * data, const double * d, int size)
	static mglData* _bind_ctor_overload_19(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_19(L)) {
			luaL_error(L, "luna typecheck failed in mglData::mglData(lua_Table * data, const double * d, int size) function, expected prototype:\nmglData::mglData(lua_Table * data, const double * d, int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const double* d=(const double*)Luna< void >::check(L,2);
		int size=(int)lua_tointeger(L,3);

		return new wrapper_mglData(L,NULL, d, size);
	}

	// mglData::mglData(lua_Table * data, const double * d, int rows, int cols)
	static mglData* _bind_ctor_overload_20(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_20(L)) {
			luaL_error(L, "luna typecheck failed in mglData::mglData(lua_Table * data, const double * d, int rows, int cols) function, expected prototype:\nmglData::mglData(lua_Table * data, const double * d, int rows, int cols)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const double* d=(const double*)Luna< void >::check(L,2);
		int rows=(int)lua_tointeger(L,3);
		int cols=(int)lua_tointeger(L,4);

		return new wrapper_mglData(L,NULL, d, rows, cols);
	}

	// mglData::mglData(lua_Table * data, const char * fname)
	static mglData* _bind_ctor_overload_21(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_21(L)) {
			luaL_error(L, "luna typecheck failed in mglData::mglData(lua_Table * data, const char * fname) function, expected prototype:\nmglData::mglData(lua_Table * data, const char * fname)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * fname=(const char *)lua_tostring(L,2);

		return new wrapper_mglData(L,NULL, fname);
	}

	// mglData::mglData(lua_Table * data, long xx = 1, long yy = 1, long zz = 1)
	static mglData* _bind_ctor_overload_22(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_22(L)) {
			luaL_error(L, "luna typecheck failed in mglData::mglData(lua_Table * data, long xx = 1, long yy = 1, long zz = 1) function, expected prototype:\nmglData::mglData(lua_Table * data, long xx = 1, long yy = 1, long zz = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long xx=luatop>1 ? (long)lua_tonumber(L,2) : (long)1;
		long yy=luatop>2 ? (long)lua_tonumber(L,3) : (long)1;
		long zz=luatop>3 ? (long)lua_tonumber(L,4) : (long)1;

		return new wrapper_mglData(L,NULL, xx, yy, zz);
	}

	// Overload binder for mglData::mglData
	static mglData* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);
		if (_lg_typecheck_ctor_overload_9(L)) return _bind_ctor_overload_9(L);
		if (_lg_typecheck_ctor_overload_10(L)) return _bind_ctor_overload_10(L);
		if (_lg_typecheck_ctor_overload_11(L)) return _bind_ctor_overload_11(L);
		if (_lg_typecheck_ctor_overload_12(L)) return _bind_ctor_overload_12(L);
		if (_lg_typecheck_ctor_overload_13(L)) return _bind_ctor_overload_13(L);
		if (_lg_typecheck_ctor_overload_14(L)) return _bind_ctor_overload_14(L);
		if (_lg_typecheck_ctor_overload_15(L)) return _bind_ctor_overload_15(L);
		if (_lg_typecheck_ctor_overload_16(L)) return _bind_ctor_overload_16(L);
		if (_lg_typecheck_ctor_overload_17(L)) return _bind_ctor_overload_17(L);
		if (_lg_typecheck_ctor_overload_18(L)) return _bind_ctor_overload_18(L);
		if (_lg_typecheck_ctor_overload_19(L)) return _bind_ctor_overload_19(L);
		if (_lg_typecheck_ctor_overload_20(L)) return _bind_ctor_overload_20(L);
		if (_lg_typecheck_ctor_overload_21(L)) return _bind_ctor_overload_21(L);
		if (_lg_typecheck_ctor_overload_22(L)) return _bind_ctor_overload_22(L);

		luaL_error(L, "error in function mglData, cannot match any of the overloads for function mglData:\n  mglData(const mglData &)\n  mglData(const mglDataA *)\n  mglData(bool, mglData *)\n  mglData(int, const float *)\n  mglData(int, int, const float *)\n  mglData(int, const double *)\n  mglData(int, int, const double *)\n  mglData(const double *, int)\n  mglData(const double *, int, int)\n  mglData(const char *)\n  mglData(long, long, long)\n  mglData(lua_Table *, const mglData &)\n  mglData(lua_Table *, const mglDataA *)\n  mglData(lua_Table *, bool, mglData *)\n  mglData(lua_Table *, int, const float *)\n  mglData(lua_Table *, int, int, const float *)\n  mglData(lua_Table *, int, const double *)\n  mglData(lua_Table *, int, int, const double *)\n  mglData(lua_Table *, const double *, int)\n  mglData(lua_Table *, const double *, int, int)\n  mglData(lua_Table *, const char *)\n  mglData(lua_Table *, long, long, long)\n");
		return NULL;
	}


	// Function binds:
	// double mglData::GetVal(long i, long j = 0, long k = 0)
	static int _bind_GetVal(lua_State *L) {
		if (!_lg_typecheck_GetVal(L)) {
			luaL_error(L, "luna typecheck failed in double mglData::GetVal(long i, long j = 0, long k = 0) function, expected prototype:\ndouble mglData::GetVal(long i, long j = 0, long k = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long i=(long)lua_tonumber(L,2);
		long j=luatop>2 ? (long)lua_tonumber(L,3) : (long)0;
		long k=luatop>3 ? (long)lua_tonumber(L,4) : (long)0;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double mglData::GetVal(long, long, long). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->GetVal(i, j, k);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglData::SetVal(double f, long i, long j = 0, long k = 0)
	static int _bind_SetVal(lua_State *L) {
		if (!_lg_typecheck_SetVal(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::SetVal(double f, long i, long j = 0, long k = 0) function, expected prototype:\nvoid mglData::SetVal(double f, long i, long j = 0, long k = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double f=(double)lua_tonumber(L,2);
		long i=(long)lua_tonumber(L,3);
		long j=luatop>3 ? (long)lua_tonumber(L,4) : (long)0;
		long k=luatop>4 ? (long)lua_tonumber(L,5) : (long)0;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::SetVal(double, long, long, long). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetVal(f, i, j, k);

		return 0;
	}

	// long mglData::GetNx() const
	static int _bind_GetNx(lua_State *L) {
		if (!_lg_typecheck_GetNx(L)) {
			luaL_error(L, "luna typecheck failed in long mglData::GetNx() const function, expected prototype:\nlong mglData::GetNx() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long mglData::GetNx() const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetNx();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglData::GetNy() const
	static int _bind_GetNy(lua_State *L) {
		if (!_lg_typecheck_GetNy(L)) {
			luaL_error(L, "luna typecheck failed in long mglData::GetNy() const function, expected prototype:\nlong mglData::GetNy() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long mglData::GetNy() const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetNy();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglData::GetNz() const
	static int _bind_GetNz(lua_State *L) {
		if (!_lg_typecheck_GetNz(L)) {
			luaL_error(L, "luna typecheck failed in long mglData::GetNz() const function, expected prototype:\nlong mglData::GetNz() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long mglData::GetNz() const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetNz();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglData::Link(double * A, long NX, long NY = 1, long NZ = 1)
	static int _bind_Link_overload_1(lua_State *L) {
		if (!_lg_typecheck_Link_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Link(double * A, long NX, long NY = 1, long NZ = 1) function, expected prototype:\nvoid mglData::Link(double * A, long NX, long NY = 1, long NZ = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double* A=(double*)Luna< void >::check(L,2);
		long NX=(long)lua_tonumber(L,3);
		long NY=luatop>3 ? (long)lua_tonumber(L,4) : (long)1;
		long NZ=luatop>4 ? (long)lua_tonumber(L,5) : (long)1;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Link(double *, long, long, long). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Link(A, NX, NY, NZ);

		return 0;
	}

	// void mglData::Link(mglData & d)
	static int _bind_Link_overload_2(lua_State *L) {
		if (!_lg_typecheck_Link_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Link(mglData & d) function, expected prototype:\nvoid mglData::Link(mglData & d)\nClass arguments details:\narg 1 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		mglData* d_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,2));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglData::Link function");
		}
		mglData & d=*d_ptr;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Link(mglData &). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Link(d);

		return 0;
	}

	// Overload binder for mglData::Link
	static int _bind_Link(lua_State *L) {
		if (_lg_typecheck_Link_overload_1(L)) return _bind_Link_overload_1(L);
		if (_lg_typecheck_Link_overload_2(L)) return _bind_Link_overload_2(L);

		luaL_error(L, "error in function Link, cannot match any of the overloads for function Link:\n  Link(double *, long, long, long)\n  Link(mglData &)\n");
		return 0;
	}

	// void mglData::Set(const float * A, long NX, long NY = 1, long NZ = 1)
	static int _bind_Set_overload_1(lua_State *L) {
		if (!_lg_typecheck_Set_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Set(const float * A, long NX, long NY = 1, long NZ = 1) function, expected prototype:\nvoid mglData::Set(const float * A, long NX, long NY = 1, long NZ = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const float* A=(const float*)Luna< void >::check(L,2);
		long NX=(long)lua_tonumber(L,3);
		long NY=luatop>3 ? (long)lua_tonumber(L,4) : (long)1;
		long NZ=luatop>4 ? (long)lua_tonumber(L,5) : (long)1;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Set(const float *, long, long, long). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Set(A, NX, NY, NZ);

		return 0;
	}

	// void mglData::Set(const double * A, long NX, long NY = 1, long NZ = 1)
	static int _bind_Set_overload_2(lua_State *L) {
		if (!_lg_typecheck_Set_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Set(const double * A, long NX, long NY = 1, long NZ = 1) function, expected prototype:\nvoid mglData::Set(const double * A, long NX, long NY = 1, long NZ = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const double* A=(const double*)Luna< void >::check(L,2);
		long NX=(long)lua_tonumber(L,3);
		long NY=luatop>3 ? (long)lua_tonumber(L,4) : (long)1;
		long NZ=luatop>4 ? (long)lua_tonumber(L,5) : (long)1;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Set(const double *, long, long, long). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Set(A, NX, NY, NZ);

		return 0;
	}

	// void mglData::Set(const char * str, long NX, long NY = 1, long NZ = 1)
	static int _bind_Set_overload_3(lua_State *L) {
		if (!_lg_typecheck_Set_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Set(const char * str, long NX, long NY = 1, long NZ = 1) function, expected prototype:\nvoid mglData::Set(const char * str, long NX, long NY = 1, long NZ = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const char * str=(const char *)lua_tostring(L,2);
		long NX=(long)lua_tonumber(L,3);
		long NY=luatop>3 ? (long)lua_tonumber(L,4) : (long)1;
		long NZ=luatop>4 ? (long)lua_tonumber(L,5) : (long)1;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Set(const char *, long, long, long). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Set(str, NX, NY, NZ);

		return 0;
	}

	// void mglData::Set(const mglDataA * dat)
	static int _bind_Set_overload_4(lua_State *L) {
		if (!_lg_typecheck_Set_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Set(const mglDataA * dat) function, expected prototype:\nvoid mglData::Set(const mglDataA * dat)\nClass arguments details:\narg 1 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		const mglDataA* dat=(Luna< mglDataA >::check(L,2));

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Set(const mglDataA *). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Set(dat);

		return 0;
	}

	// void mglData::Set(const mglDataA & dat)
	static int _bind_Set_overload_5(lua_State *L) {
		if (!_lg_typecheck_Set_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Set(const mglDataA & dat) function, expected prototype:\nvoid mglData::Set(const mglDataA & dat)\nClass arguments details:\narg 1 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		const mglDataA* dat_ptr=(Luna< mglDataA >::check(L,2));
		if( !dat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dat in mglData::Set function");
		}
		const mglDataA & dat=*dat_ptr;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Set(const mglDataA &). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Set(dat);

		return 0;
	}

	// void mglData::Set(const std::vector< int > & d)
	static int _bind_Set_overload_6(lua_State *L) {
		if (!_lg_typecheck_Set_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Set(const std::vector< int > & d) function, expected prototype:\nvoid mglData::Set(const std::vector< int > & d)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const std::vector< int >* d_ptr=(Luna< std::vector< int > >::check(L,2));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglData::Set function");
		}
		const std::vector< int > & d=*d_ptr;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Set(const std::vector< int > &). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Set(d);

		return 0;
	}

	// void mglData::Set(const std::vector< float > & d)
	static int _bind_Set_overload_7(lua_State *L) {
		if (!_lg_typecheck_Set_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Set(const std::vector< float > & d) function, expected prototype:\nvoid mglData::Set(const std::vector< float > & d)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const std::vector< float >* d_ptr=(Luna< std::vector< float > >::check(L,2));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglData::Set function");
		}
		const std::vector< float > & d=*d_ptr;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Set(const std::vector< float > &). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Set(d);

		return 0;
	}

	// void mglData::Set(const std::vector< double > & d)
	static int _bind_Set_overload_8(lua_State *L) {
		if (!_lg_typecheck_Set_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Set(const std::vector< double > & d) function, expected prototype:\nvoid mglData::Set(const std::vector< double > & d)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const std::vector< double >* d_ptr=(Luna< std::vector< double > >::check(L,2));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglData::Set function");
		}
		const std::vector< double > & d=*d_ptr;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Set(const std::vector< double > &). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Set(d);

		return 0;
	}

	// Overload binder for mglData::Set
	static int _bind_Set(lua_State *L) {
		if (_lg_typecheck_Set_overload_1(L)) return _bind_Set_overload_1(L);
		if (_lg_typecheck_Set_overload_2(L)) return _bind_Set_overload_2(L);
		if (_lg_typecheck_Set_overload_3(L)) return _bind_Set_overload_3(L);
		if (_lg_typecheck_Set_overload_4(L)) return _bind_Set_overload_4(L);
		if (_lg_typecheck_Set_overload_5(L)) return _bind_Set_overload_5(L);
		if (_lg_typecheck_Set_overload_6(L)) return _bind_Set_overload_6(L);
		if (_lg_typecheck_Set_overload_7(L)) return _bind_Set_overload_7(L);
		if (_lg_typecheck_Set_overload_8(L)) return _bind_Set_overload_8(L);

		luaL_error(L, "error in function Set, cannot match any of the overloads for function Set:\n  Set(const float *, long, long, long)\n  Set(const double *, long, long, long)\n  Set(const char *, long, long, long)\n  Set(const mglDataA *)\n  Set(const mglDataA &)\n  Set(const std::vector< int > &)\n  Set(const std::vector< float > &)\n  Set(const std::vector< double > &)\n");
		return 0;
	}

	// void mglData::Create(long mx, long my = 1, long mz = 1)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Create(long mx, long my = 1, long mz = 1) function, expected prototype:\nvoid mglData::Create(long mx, long my = 1, long mz = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long mx=(long)lua_tonumber(L,2);
		long my=luatop>2 ? (long)lua_tonumber(L,3) : (long)1;
		long mz=luatop>3 ? (long)lua_tonumber(L,4) : (long)1;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Create(long, long, long). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Create(mx, my, mz);

		return 0;
	}

	// void mglData::Rearrange(long mx, long my = 0, long mz = 0)
	static int _bind_Rearrange(lua_State *L) {
		if (!_lg_typecheck_Rearrange(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Rearrange(long mx, long my = 0, long mz = 0) function, expected prototype:\nvoid mglData::Rearrange(long mx, long my = 0, long mz = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long mx=(long)lua_tonumber(L,2);
		long my=luatop>2 ? (long)lua_tonumber(L,3) : (long)0;
		long mz=luatop>3 ? (long)lua_tonumber(L,4) : (long)0;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Rearrange(long, long, long). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Rearrange(mx, my, mz);

		return 0;
	}

	// void mglData::Transpose(const char * dim = "yx")
	static int _bind_Transpose(lua_State *L) {
		if (!_lg_typecheck_Transpose(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Transpose(const char * dim = \"yx\") function, expected prototype:\nvoid mglData::Transpose(const char * dim = \"yx\")\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const char * dim=luatop>1 ? (const char *)lua_tostring(L,2) : (const char*)"yx";

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Transpose(const char *). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Transpose(dim);

		return 0;
	}

	// void mglData::Extend(long n1, long n2 = 0)
	static int _bind_Extend(lua_State *L) {
		if (!_lg_typecheck_Extend(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Extend(long n1, long n2 = 0) function, expected prototype:\nvoid mglData::Extend(long n1, long n2 = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long n1=(long)lua_tonumber(L,2);
		long n2=luatop>2 ? (long)lua_tonumber(L,3) : (long)0;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Extend(long, long). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Extend(n1, n2);

		return 0;
	}

	// void mglData::Squeeze(long rx, long ry = 1, long rz = 1, bool smooth = false)
	static int _bind_Squeeze(lua_State *L) {
		if (!_lg_typecheck_Squeeze(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Squeeze(long rx, long ry = 1, long rz = 1, bool smooth = false) function, expected prototype:\nvoid mglData::Squeeze(long rx, long ry = 1, long rz = 1, bool smooth = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long rx=(long)lua_tonumber(L,2);
		long ry=luatop>2 ? (long)lua_tonumber(L,3) : (long)1;
		long rz=luatop>3 ? (long)lua_tonumber(L,4) : (long)1;
		bool smooth=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Squeeze(long, long, long, bool). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Squeeze(rx, ry, rz, smooth);

		return 0;
	}

	// void mglData::Crop(long n1, long n2, char dir = 'x')
	static int _bind_Crop(lua_State *L) {
		if (!_lg_typecheck_Crop(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Crop(long n1, long n2, char dir = 'x') function, expected prototype:\nvoid mglData::Crop(long n1, long n2, char dir = 'x')\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long n1=(long)lua_tonumber(L,2);
		long n2=(long)lua_tonumber(L,3);
		char dir=luatop>3 ? (char)lua_tointeger(L,4) : (char)'x';

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Crop(long, long, char). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Crop(n1, n2, dir);

		return 0;
	}

	// void mglData::Insert(char dir, long at = 0, long num = 1)
	static int _bind_Insert(lua_State *L) {
		if (!_lg_typecheck_Insert(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Insert(char dir, long at = 0, long num = 1) function, expected prototype:\nvoid mglData::Insert(char dir, long at = 0, long num = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		char dir=(char)lua_tointeger(L,2);
		long at=luatop>2 ? (long)lua_tonumber(L,3) : (long)0;
		long num=luatop>3 ? (long)lua_tonumber(L,4) : (long)1;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Insert(char, long, long). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Insert(dir, at, num);

		return 0;
	}

	// void mglData::Delete(char dir, long at = 0, long num = 1)
	static int _bind_Delete(lua_State *L) {
		if (!_lg_typecheck_Delete(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Delete(char dir, long at = 0, long num = 1) function, expected prototype:\nvoid mglData::Delete(char dir, long at = 0, long num = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		char dir=(char)lua_tointeger(L,2);
		long at=luatop>2 ? (long)lua_tonumber(L,3) : (long)0;
		long num=luatop>3 ? (long)lua_tonumber(L,4) : (long)1;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Delete(char, long, long). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Delete(dir, at, num);

		return 0;
	}

	// void mglData::Clean(long id)
	static int _bind_Clean(lua_State *L) {
		if (!_lg_typecheck_Clean(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Clean(long id) function, expected prototype:\nvoid mglData::Clean(long id)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long id=(long)lua_tonumber(L,2);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Clean(long). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Clean(id);

		return 0;
	}

	// void mglData::Modify(const char * eq, long dim = 0)
	static int _bind_Modify_overload_1(lua_State *L) {
		if (!_lg_typecheck_Modify_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Modify(const char * eq, long dim = 0) function, expected prototype:\nvoid mglData::Modify(const char * eq, long dim = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const char * eq=(const char *)lua_tostring(L,2);
		long dim=luatop>2 ? (long)lua_tonumber(L,3) : (long)0;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Modify(const char *, long). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Modify(eq, dim);

		return 0;
	}

	// void mglData::Modify(const char * eq, const mglDataA & vdat, const mglDataA & wdat)
	static int _bind_Modify_overload_2(lua_State *L) {
		if (!_lg_typecheck_Modify_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Modify(const char * eq, const mglDataA & vdat, const mglDataA & wdat) function, expected prototype:\nvoid mglData::Modify(const char * eq, const mglDataA & vdat, const mglDataA & wdat)\nClass arguments details:\narg 2 ID = 45413231\narg 3 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * eq=(const char *)lua_tostring(L,2);
		const mglDataA* vdat_ptr=(Luna< mglDataA >::check(L,3));
		if( !vdat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vdat in mglData::Modify function");
		}
		const mglDataA & vdat=*vdat_ptr;
		const mglDataA* wdat_ptr=(Luna< mglDataA >::check(L,4));
		if( !wdat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wdat in mglData::Modify function");
		}
		const mglDataA & wdat=*wdat_ptr;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Modify(const char *, const mglDataA &, const mglDataA &). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Modify(eq, vdat, wdat);

		return 0;
	}

	// void mglData::Modify(const char * eq, const mglDataA & vdat)
	static int _bind_Modify_overload_3(lua_State *L) {
		if (!_lg_typecheck_Modify_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Modify(const char * eq, const mglDataA & vdat) function, expected prototype:\nvoid mglData::Modify(const char * eq, const mglDataA & vdat)\nClass arguments details:\narg 2 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * eq=(const char *)lua_tostring(L,2);
		const mglDataA* vdat_ptr=(Luna< mglDataA >::check(L,3));
		if( !vdat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vdat in mglData::Modify function");
		}
		const mglDataA & vdat=*vdat_ptr;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Modify(const char *, const mglDataA &). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Modify(eq, vdat);

		return 0;
	}

	// Overload binder for mglData::Modify
	static int _bind_Modify(lua_State *L) {
		if (_lg_typecheck_Modify_overload_1(L)) return _bind_Modify_overload_1(L);
		if (_lg_typecheck_Modify_overload_2(L)) return _bind_Modify_overload_2(L);
		if (_lg_typecheck_Modify_overload_3(L)) return _bind_Modify_overload_3(L);

		luaL_error(L, "error in function Modify, cannot match any of the overloads for function Modify:\n  Modify(const char *, long)\n  Modify(const char *, const mglDataA &, const mglDataA &)\n  Modify(const char *, const mglDataA &)\n");
		return 0;
	}

	// void mglData::Fill(mglBase * gr, const char * eq, const char * opt = "")
	static int _bind_Fill_overload_1(lua_State *L) {
		if (!_lg_typecheck_Fill_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Fill(mglBase * gr, const char * eq, const char * opt = \"\") function, expected prototype:\nvoid mglData::Fill(mglBase * gr, const char * eq, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 88502113\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		mglBase* gr=(Luna< mglBase >::check(L,2));
		const char * eq=(const char *)lua_tostring(L,3);
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : (const char*)"";

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Fill(mglBase *, const char *, const char *). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Fill(gr, eq, opt);

		return 0;
	}

	// void mglData::Fill(mglBase * gr, const char * eq, const mglDataA & vdat, const char * opt = "")
	static int _bind_Fill_overload_2(lua_State *L) {
		if (!_lg_typecheck_Fill_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Fill(mglBase * gr, const char * eq, const mglDataA & vdat, const char * opt = \"\") function, expected prototype:\nvoid mglData::Fill(mglBase * gr, const char * eq, const mglDataA & vdat, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 88502113\narg 3 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		mglBase* gr=(Luna< mglBase >::check(L,2));
		const char * eq=(const char *)lua_tostring(L,3);
		const mglDataA* vdat_ptr=(Luna< mglDataA >::check(L,4));
		if( !vdat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vdat in mglData::Fill function");
		}
		const mglDataA & vdat=*vdat_ptr;
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : (const char*)"";

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Fill(mglBase *, const char *, const mglDataA &, const char *). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Fill(gr, eq, vdat, opt);

		return 0;
	}

	// void mglData::Fill(mglBase * gr, const char * eq, const mglDataA & vdat, const mglDataA & wdat, const char * opt = "")
	static int _bind_Fill_overload_3(lua_State *L) {
		if (!_lg_typecheck_Fill_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Fill(mglBase * gr, const char * eq, const mglDataA & vdat, const mglDataA & wdat, const char * opt = \"\") function, expected prototype:\nvoid mglData::Fill(mglBase * gr, const char * eq, const mglDataA & vdat, const mglDataA & wdat, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 88502113\narg 3 ID = 45413231\narg 4 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		mglBase* gr=(Luna< mglBase >::check(L,2));
		const char * eq=(const char *)lua_tostring(L,3);
		const mglDataA* vdat_ptr=(Luna< mglDataA >::check(L,4));
		if( !vdat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vdat in mglData::Fill function");
		}
		const mglDataA & vdat=*vdat_ptr;
		const mglDataA* wdat_ptr=(Luna< mglDataA >::check(L,5));
		if( !wdat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wdat in mglData::Fill function");
		}
		const mglDataA & wdat=*wdat_ptr;
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : (const char*)"";

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Fill(mglBase *, const char *, const mglDataA &, const mglDataA &, const char *). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Fill(gr, eq, vdat, wdat, opt);

		return 0;
	}

	// void mglData::Fill(double x1, double x2 = NaN, char dir = 'x')
	static int _bind_Fill_overload_4(lua_State *L) {
		if (!_lg_typecheck_Fill_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Fill(double x1, double x2 = NaN, char dir = 'x') function, expected prototype:\nvoid mglData::Fill(double x1, double x2 = NaN, char dir = 'x')\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double x1=(double)lua_tonumber(L,2);
		double x2=luatop>2 ? (double)lua_tonumber(L,3) : (double)NaN;
		char dir=luatop>3 ? (char)lua_tointeger(L,4) : (char)'x';

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Fill(double, double, char). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Fill(x1, x2, dir);

		return 0;
	}

	// Overload binder for mglData::Fill
	static int _bind_Fill(lua_State *L) {
		if (_lg_typecheck_Fill_overload_1(L)) return _bind_Fill_overload_1(L);
		if (_lg_typecheck_Fill_overload_2(L)) return _bind_Fill_overload_2(L);
		if (_lg_typecheck_Fill_overload_3(L)) return _bind_Fill_overload_3(L);
		if (_lg_typecheck_Fill_overload_4(L)) return _bind_Fill_overload_4(L);

		luaL_error(L, "error in function Fill, cannot match any of the overloads for function Fill:\n  Fill(mglBase *, const char *, const char *)\n  Fill(mglBase *, const char *, const mglDataA &, const char *)\n  Fill(mglBase *, const char *, const mglDataA &, const mglDataA &, const char *)\n  Fill(double, double, char)\n");
		return 0;
	}

	// void mglData::Grid(mglBase * gr, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * opt = "")
	static int _bind_Grid(lua_State *L) {
		if (!_lg_typecheck_Grid(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Grid(mglBase * gr, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * opt = \"\") function, expected prototype:\nvoid mglData::Grid(mglBase * gr, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 88502113\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		mglBase* gr=(Luna< mglBase >::check(L,2));
		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,3));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglData::Grid function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,4));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglData::Grid function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,5));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglData::Grid function");
		}
		const mglDataA & z=*z_ptr;
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : (const char*)"";

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Grid(mglBase *, const mglDataA &, const mglDataA &, const mglDataA &, const char *). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Grid(gr, x, y, z, opt);

		return 0;
	}

	// void mglData::Put(double val, long i = -1, long j = -1, long k = -1)
	static int _bind_Put_overload_1(lua_State *L) {
		if (!_lg_typecheck_Put_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Put(double val, long i = -1, long j = -1, long k = -1) function, expected prototype:\nvoid mglData::Put(double val, long i = -1, long j = -1, long k = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double val=(double)lua_tonumber(L,2);
		long i=luatop>2 ? (long)lua_tonumber(L,3) : (long)-1;
		long j=luatop>3 ? (long)lua_tonumber(L,4) : (long)-1;
		long k=luatop>4 ? (long)lua_tonumber(L,5) : (long)-1;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Put(double, long, long, long). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Put(val, i, j, k);

		return 0;
	}

	// void mglData::Put(const mglDataA & dat, long i = -1, long j = -1, long k = -1)
	static int _bind_Put_overload_2(lua_State *L) {
		if (!_lg_typecheck_Put_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Put(const mglDataA & dat, long i = -1, long j = -1, long k = -1) function, expected prototype:\nvoid mglData::Put(const mglDataA & dat, long i = -1, long j = -1, long k = -1)\nClass arguments details:\narg 1 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const mglDataA* dat_ptr=(Luna< mglDataA >::check(L,2));
		if( !dat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dat in mglData::Put function");
		}
		const mglDataA & dat=*dat_ptr;
		long i=luatop>2 ? (long)lua_tonumber(L,3) : (long)-1;
		long j=luatop>3 ? (long)lua_tonumber(L,4) : (long)-1;
		long k=luatop>4 ? (long)lua_tonumber(L,5) : (long)-1;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Put(const mglDataA &, long, long, long). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Put(dat, i, j, k);

		return 0;
	}

	// Overload binder for mglData::Put
	static int _bind_Put(lua_State *L) {
		if (_lg_typecheck_Put_overload_1(L)) return _bind_Put_overload_1(L);
		if (_lg_typecheck_Put_overload_2(L)) return _bind_Put_overload_2(L);

		luaL_error(L, "error in function Put, cannot match any of the overloads for function Put:\n  Put(double, long, long, long)\n  Put(const mglDataA &, long, long, long)\n");
		return 0;
	}

	// void mglData::SetColumnId(const char * ids)
	static int _bind_SetColumnId(lua_State *L) {
		if (!_lg_typecheck_SetColumnId(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::SetColumnId(const char * ids) function, expected prototype:\nvoid mglData::SetColumnId(const char * ids)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * ids=(const char *)lua_tostring(L,2);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::SetColumnId(const char *). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColumnId(ids);

		return 0;
	}

	// void mglData::NewId()
	static int _bind_NewId(lua_State *L) {
		if (!_lg_typecheck_NewId(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::NewId() function, expected prototype:\nvoid mglData::NewId()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::NewId(). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NewId();

		return 0;
	}

	// bool mglData::Read(const char * fname)
	static int _bind_Read_overload_1(lua_State *L) {
		if (!_lg_typecheck_Read_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool mglData::Read(const char * fname) function, expected prototype:\nbool mglData::Read(const char * fname)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * fname=(const char *)lua_tostring(L,2);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool mglData::Read(const char *). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Read(fname);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool mglData::Read(const char * fname, long mx, long my = 1, long mz = 1)
	static int _bind_Read_overload_2(lua_State *L) {
		if (!_lg_typecheck_Read_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool mglData::Read(const char * fname, long mx, long my = 1, long mz = 1) function, expected prototype:\nbool mglData::Read(const char * fname, long mx, long my = 1, long mz = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		long mx=(long)lua_tonumber(L,3);
		long my=luatop>3 ? (long)lua_tonumber(L,4) : (long)1;
		long mz=luatop>4 ? (long)lua_tonumber(L,5) : (long)1;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool mglData::Read(const char *, long, long, long). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Read(fname, mx, my, mz);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for mglData::Read
	static int _bind_Read(lua_State *L) {
		if (_lg_typecheck_Read_overload_1(L)) return _bind_Read_overload_1(L);
		if (_lg_typecheck_Read_overload_2(L)) return _bind_Read_overload_2(L);

		luaL_error(L, "error in function Read, cannot match any of the overloads for function Read:\n  Read(const char *)\n  Read(const char *, long, long, long)\n");
		return 0;
	}

	// void mglData::Save(const char * fname, long ns = -1) const
	static int _bind_Save(lua_State *L) {
		if (!_lg_typecheck_Save(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Save(const char * fname, long ns = -1) const function, expected prototype:\nvoid mglData::Save(const char * fname, long ns = -1) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		long ns=luatop>2 ? (long)lua_tonumber(L,3) : (long)-1;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Save(const char *, long) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Save(fname, ns);

		return 0;
	}

	// void mglData::Export(const char * fname, const char * scheme, double v1 = 0, double v2 = 0, long ns = -1) const
	static int _bind_Export(lua_State *L) {
		if (!_lg_typecheck_Export(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Export(const char * fname, const char * scheme, double v1 = 0, double v2 = 0, long ns = -1) const function, expected prototype:\nvoid mglData::Export(const char * fname, const char * scheme, double v1 = 0, double v2 = 0, long ns = -1) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		const char * scheme=(const char *)lua_tostring(L,3);
		double v1=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;
		double v2=luatop>4 ? (double)lua_tonumber(L,5) : (double)0;
		long ns=luatop>5 ? (long)lua_tonumber(L,6) : (long)-1;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Export(const char *, const char *, double, double, long) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Export(fname, scheme, v1, v2, ns);

		return 0;
	}

	// void mglData::Import(const char * fname, const char * scheme, double v1 = 0, double v2 = 1)
	static int _bind_Import(lua_State *L) {
		if (!_lg_typecheck_Import(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Import(const char * fname, const char * scheme, double v1 = 0, double v2 = 1) function, expected prototype:\nvoid mglData::Import(const char * fname, const char * scheme, double v1 = 0, double v2 = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		const char * scheme=(const char *)lua_tostring(L,3);
		double v1=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;
		double v2=luatop>4 ? (double)lua_tonumber(L,5) : (double)1;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Import(const char *, const char *, double, double). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Import(fname, scheme, v1, v2);

		return 0;
	}

	// bool mglData::ReadRange(const char * templ, double from, double to, double step = 1, bool as_slice = false)
	static int _bind_ReadRange(lua_State *L) {
		if (!_lg_typecheck_ReadRange(L)) {
			luaL_error(L, "luna typecheck failed in bool mglData::ReadRange(const char * templ, double from, double to, double step = 1, bool as_slice = false) function, expected prototype:\nbool mglData::ReadRange(const char * templ, double from, double to, double step = 1, bool as_slice = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const char * templ=(const char *)lua_tostring(L,2);
		double from=(double)lua_tonumber(L,3);
		double to=(double)lua_tonumber(L,4);
		double step=luatop>4 ? (double)lua_tonumber(L,5) : (double)1;
		bool as_slice=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool mglData::ReadRange(const char *, double, double, double, bool). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ReadRange(templ, from, to, step, as_slice);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool mglData::ReadAll(const char * templ, bool as_slice = false)
	static int _bind_ReadAll(lua_State *L) {
		if (!_lg_typecheck_ReadAll(L)) {
			luaL_error(L, "luna typecheck failed in bool mglData::ReadAll(const char * templ, bool as_slice = false) function, expected prototype:\nbool mglData::ReadAll(const char * templ, bool as_slice = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const char * templ=(const char *)lua_tostring(L,2);
		bool as_slice=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool mglData::ReadAll(const char *, bool). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ReadAll(templ, as_slice);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool mglData::ReadMat(const char * fname, long dim = 2)
	static int _bind_ReadMat(lua_State *L) {
		if (!_lg_typecheck_ReadMat(L)) {
			luaL_error(L, "luna typecheck failed in bool mglData::ReadMat(const char * fname, long dim = 2) function, expected prototype:\nbool mglData::ReadMat(const char * fname, long dim = 2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		long dim=luatop>2 ? (long)lua_tonumber(L,3) : (long)2;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool mglData::ReadMat(const char *, long). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ReadMat(fname, dim);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int mglData::ReadHDF(const char * fname, const char * data)
	static int _bind_ReadHDF(lua_State *L) {
		if (!_lg_typecheck_ReadHDF(L)) {
			luaL_error(L, "luna typecheck failed in int mglData::ReadHDF(const char * fname, const char * data) function, expected prototype:\nint mglData::ReadHDF(const char * fname, const char * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * fname=(const char *)lua_tostring(L,2);
		const char * data=(const char *)lua_tostring(L,3);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int mglData::ReadHDF(const char *, const char *). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ReadHDF(fname, data);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglData::SaveHDF(const char * fname, const char * data, bool rewrite = false) const
	static int _bind_SaveHDF(lua_State *L) {
		if (!_lg_typecheck_SaveHDF(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::SaveHDF(const char * fname, const char * data, bool rewrite = false) const function, expected prototype:\nvoid mglData::SaveHDF(const char * fname, const char * data, bool rewrite = false) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		const char * data=(const char *)lua_tostring(L,3);
		bool rewrite=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::SaveHDF(const char *, const char *, bool) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SaveHDF(fname, data, rewrite);

		return 0;
	}

	// mglData mglData::Column(const char * eq) const
	static int _bind_Column(lua_State *L) {
		if (!_lg_typecheck_Column(L)) {
			luaL_error(L, "luna typecheck failed in mglData mglData::Column(const char * eq) const function, expected prototype:\nmglData mglData::Column(const char * eq) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * eq=(const char *)lua_tostring(L,2);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call mglData mglData::Column(const char *) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		mglData stack_lret = self->Column(eq);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglData::Momentum(char dir, const char * how) const
	static int _bind_Momentum_overload_1(lua_State *L) {
		if (!_lg_typecheck_Momentum_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in mglData mglData::Momentum(char dir, const char * how) const function, expected prototype:\nmglData mglData::Momentum(char dir, const char * how) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		char dir=(char)lua_tointeger(L,2);
		const char * how=(const char *)lua_tostring(L,3);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call mglData mglData::Momentum(char, const char *) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		mglData stack_lret = self->Momentum(dir, how);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// double mglData::Momentum(char dir, double & m, double & w) const
	static int _bind_Momentum_overload_2(lua_State *L) {
		if (!_lg_typecheck_Momentum_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in double mglData::Momentum(char dir, double & m, double & w) const function, expected prototype:\ndouble mglData::Momentum(char dir, double & m, double & w) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		char dir=(char)lua_tointeger(L,2);
		double m=(double)lua_tonumber(L,3);
		double w=(double)lua_tonumber(L,4);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double mglData::Momentum(char, double &, double &) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->Momentum(dir, m, w);
		lua_pushnumber(L,lret);

		lua_pushnumber(L,m);
		lua_pushnumber(L,w);
		return 3;
	}

	// double mglData::Momentum(char dir, double & m, double & w, double & s, double & k) const
	static int _bind_Momentum_overload_3(lua_State *L) {
		if (!_lg_typecheck_Momentum_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in double mglData::Momentum(char dir, double & m, double & w, double & s, double & k) const function, expected prototype:\ndouble mglData::Momentum(char dir, double & m, double & w, double & s, double & k) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		char dir=(char)lua_tointeger(L,2);
		double m=(double)lua_tonumber(L,3);
		double w=(double)lua_tonumber(L,4);
		double s=(double)lua_tonumber(L,5);
		double k=(double)lua_tonumber(L,6);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double mglData::Momentum(char, double &, double &, double &, double &) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->Momentum(dir, m, w, s, k);
		lua_pushnumber(L,lret);

		lua_pushnumber(L,m);
		lua_pushnumber(L,w);
		lua_pushnumber(L,s);
		lua_pushnumber(L,k);
		return 5;
	}

	// Overload binder for mglData::Momentum
	static int _bind_Momentum(lua_State *L) {
		if (_lg_typecheck_Momentum_overload_1(L)) return _bind_Momentum_overload_1(L);
		if (_lg_typecheck_Momentum_overload_2(L)) return _bind_Momentum_overload_2(L);
		if (_lg_typecheck_Momentum_overload_3(L)) return _bind_Momentum_overload_3(L);

		luaL_error(L, "error in function Momentum, cannot match any of the overloads for function Momentum:\n  Momentum(char, const char *)\n  Momentum(char, double &, double &)\n  Momentum(char, double &, double &, double &, double &)\n");
		return 0;
	}

	// mglData mglData::SubData(long xx, long yy = -1, long zz = -1) const
	static int _bind_SubData_overload_1(lua_State *L) {
		if (!_lg_typecheck_SubData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in mglData mglData::SubData(long xx, long yy = -1, long zz = -1) const function, expected prototype:\nmglData mglData::SubData(long xx, long yy = -1, long zz = -1) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long xx=(long)lua_tonumber(L,2);
		long yy=luatop>2 ? (long)lua_tonumber(L,3) : (long)-1;
		long zz=luatop>3 ? (long)lua_tonumber(L,4) : (long)-1;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call mglData mglData::SubData(long, long, long) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		mglData stack_lret = self->SubData(xx, yy, zz);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglData::SubData(const mglDataA & xx, const mglDataA & yy, const mglDataA & zz) const
	static int _bind_SubData_overload_2(lua_State *L) {
		if (!_lg_typecheck_SubData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in mglData mglData::SubData(const mglDataA & xx, const mglDataA & yy, const mglDataA & zz) const function, expected prototype:\nmglData mglData::SubData(const mglDataA & xx, const mglDataA & yy, const mglDataA & zz) const\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		const mglDataA* xx_ptr=(Luna< mglDataA >::check(L,2));
		if( !xx_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xx in mglData::SubData function");
		}
		const mglDataA & xx=*xx_ptr;
		const mglDataA* yy_ptr=(Luna< mglDataA >::check(L,3));
		if( !yy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg yy in mglData::SubData function");
		}
		const mglDataA & yy=*yy_ptr;
		const mglDataA* zz_ptr=(Luna< mglDataA >::check(L,4));
		if( !zz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg zz in mglData::SubData function");
		}
		const mglDataA & zz=*zz_ptr;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call mglData mglData::SubData(const mglDataA &, const mglDataA &, const mglDataA &) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		mglData stack_lret = self->SubData(xx, yy, zz);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// Overload binder for mglData::SubData
	static int _bind_SubData(lua_State *L) {
		if (_lg_typecheck_SubData_overload_1(L)) return _bind_SubData_overload_1(L);
		if (_lg_typecheck_SubData_overload_2(L)) return _bind_SubData_overload_2(L);

		luaL_error(L, "error in function SubData, cannot match any of the overloads for function SubData:\n  SubData(long, long, long)\n  SubData(const mglDataA &, const mglDataA &, const mglDataA &)\n");
		return 0;
	}

	// mglData mglData::Trace() const
	static int _bind_Trace(lua_State *L) {
		if (!_lg_typecheck_Trace(L)) {
			luaL_error(L, "luna typecheck failed in mglData mglData::Trace() const function, expected prototype:\nmglData mglData::Trace() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call mglData mglData::Trace() const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		mglData stack_lret = self->Trace();
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglData::Hist(long n, double v1 = 0, double v2 = 1, long nsub = 0) const
	static int _bind_Hist_overload_1(lua_State *L) {
		if (!_lg_typecheck_Hist_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in mglData mglData::Hist(long n, double v1 = 0, double v2 = 1, long nsub = 0) const function, expected prototype:\nmglData mglData::Hist(long n, double v1 = 0, double v2 = 1, long nsub = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long n=(long)lua_tonumber(L,2);
		double v1=luatop>2 ? (double)lua_tonumber(L,3) : (double)0;
		double v2=luatop>3 ? (double)lua_tonumber(L,4) : (double)1;
		long nsub=luatop>4 ? (long)lua_tonumber(L,5) : (long)0;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call mglData mglData::Hist(long, double, double, long) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		mglData stack_lret = self->Hist(n, v1, v2, nsub);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglData::Hist(const mglDataA & w, long n, double v1 = 0, double v2 = 1, long nsub = 0) const
	static int _bind_Hist_overload_2(lua_State *L) {
		if (!_lg_typecheck_Hist_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in mglData mglData::Hist(const mglDataA & w, long n, double v1 = 0, double v2 = 1, long nsub = 0) const function, expected prototype:\nmglData mglData::Hist(const mglDataA & w, long n, double v1 = 0, double v2 = 1, long nsub = 0) const\nClass arguments details:\narg 1 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const mglDataA* w_ptr=(Luna< mglDataA >::check(L,2));
		if( !w_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg w in mglData::Hist function");
		}
		const mglDataA & w=*w_ptr;
		long n=(long)lua_tonumber(L,3);
		double v1=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;
		double v2=luatop>4 ? (double)lua_tonumber(L,5) : (double)1;
		long nsub=luatop>5 ? (long)lua_tonumber(L,6) : (long)0;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call mglData mglData::Hist(const mglDataA &, long, double, double, long) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		mglData stack_lret = self->Hist(w, n, v1, v2, nsub);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// Overload binder for mglData::Hist
	static int _bind_Hist(lua_State *L) {
		if (_lg_typecheck_Hist_overload_1(L)) return _bind_Hist_overload_1(L);
		if (_lg_typecheck_Hist_overload_2(L)) return _bind_Hist_overload_2(L);

		luaL_error(L, "error in function Hist, cannot match any of the overloads for function Hist:\n  Hist(long, double, double, long)\n  Hist(const mglDataA &, long, double, double, long)\n");
		return 0;
	}

	// mglData mglData::Sum(const char * dir) const
	static int _bind_Sum(lua_State *L) {
		if (!_lg_typecheck_Sum(L)) {
			luaL_error(L, "luna typecheck failed in mglData mglData::Sum(const char * dir) const function, expected prototype:\nmglData mglData::Sum(const char * dir) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * dir=(const char *)lua_tostring(L,2);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call mglData mglData::Sum(const char *) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		mglData stack_lret = self->Sum(dir);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglData::Max(const char * dir) const
	static int _bind_Max(lua_State *L) {
		if (!_lg_typecheck_Max(L)) {
			luaL_error(L, "luna typecheck failed in mglData mglData::Max(const char * dir) const function, expected prototype:\nmglData mglData::Max(const char * dir) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * dir=(const char *)lua_tostring(L,2);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call mglData mglData::Max(const char *) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		mglData stack_lret = self->Max(dir);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglData::Min(const char * dir) const
	static int _bind_Min(lua_State *L) {
		if (!_lg_typecheck_Min(L)) {
			luaL_error(L, "luna typecheck failed in mglData mglData::Min(const char * dir) const function, expected prototype:\nmglData mglData::Min(const char * dir) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * dir=(const char *)lua_tostring(L,2);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call mglData mglData::Min(const char *) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		mglData stack_lret = self->Min(dir);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglData::Combine(const mglDataA & dat) const
	static int _bind_Combine(lua_State *L) {
		if (!_lg_typecheck_Combine(L)) {
			luaL_error(L, "luna typecheck failed in mglData mglData::Combine(const mglDataA & dat) const function, expected prototype:\nmglData mglData::Combine(const mglDataA & dat) const\nClass arguments details:\narg 1 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		const mglDataA* dat_ptr=(Luna< mglDataA >::check(L,2));
		if( !dat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dat in mglData::Combine function");
		}
		const mglDataA & dat=*dat_ptr;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call mglData mglData::Combine(const mglDataA &) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		mglData stack_lret = self->Combine(dat);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglData::Resize(long mx, long my = 1, long mz = 1, double x1 = 0, double x2 = 1, double y1 = 0, double y2 = 1, double z1 = 0, double z2 = 1) const
	static int _bind_Resize(lua_State *L) {
		if (!_lg_typecheck_Resize(L)) {
			luaL_error(L, "luna typecheck failed in mglData mglData::Resize(long mx, long my = 1, long mz = 1, double x1 = 0, double x2 = 1, double y1 = 0, double y2 = 1, double z1 = 0, double z2 = 1) const function, expected prototype:\nmglData mglData::Resize(long mx, long my = 1, long mz = 1, double x1 = 0, double x2 = 1, double y1 = 0, double y2 = 1, double z1 = 0, double z2 = 1) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long mx=(long)lua_tonumber(L,2);
		long my=luatop>2 ? (long)lua_tonumber(L,3) : (long)1;
		long mz=luatop>3 ? (long)lua_tonumber(L,4) : (long)1;
		double x1=luatop>4 ? (double)lua_tonumber(L,5) : (double)0;
		double x2=luatop>5 ? (double)lua_tonumber(L,6) : (double)1;
		double y1=luatop>6 ? (double)lua_tonumber(L,7) : (double)0;
		double y2=luatop>7 ? (double)lua_tonumber(L,8) : (double)1;
		double z1=luatop>8 ? (double)lua_tonumber(L,9) : (double)0;
		double z2=luatop>9 ? (double)lua_tonumber(L,10) : (double)1;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call mglData mglData::Resize(long, long, long, double, double, double, double, double, double) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		mglData stack_lret = self->Resize(mx, my, mz, x1, x2, y1, y2, z1, z2);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglData::Evaluate(const mglData & idat, bool norm = true) const
	static int _bind_Evaluate_overload_1(lua_State *L) {
		if (!_lg_typecheck_Evaluate_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in mglData mglData::Evaluate(const mglData & idat, bool norm = true) const function, expected prototype:\nmglData mglData::Evaluate(const mglData & idat, bool norm = true) const\nClass arguments details:\narg 1 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const mglData* idat_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,2));
		if( !idat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg idat in mglData::Evaluate function");
		}
		const mglData & idat=*idat_ptr;
		bool norm=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call mglData mglData::Evaluate(const mglData &, bool) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		mglData stack_lret = self->Evaluate(idat, norm);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglData::Evaluate(const mglData & idat, const mglData & jdat, bool norm = true) const
	static int _bind_Evaluate_overload_2(lua_State *L) {
		if (!_lg_typecheck_Evaluate_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in mglData mglData::Evaluate(const mglData & idat, const mglData & jdat, bool norm = true) const function, expected prototype:\nmglData mglData::Evaluate(const mglData & idat, const mglData & jdat, bool norm = true) const\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const mglData* idat_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,2));
		if( !idat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg idat in mglData::Evaluate function");
		}
		const mglData & idat=*idat_ptr;
		const mglData* jdat_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,3));
		if( !jdat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg jdat in mglData::Evaluate function");
		}
		const mglData & jdat=*jdat_ptr;
		bool norm=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call mglData mglData::Evaluate(const mglData &, const mglData &, bool) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		mglData stack_lret = self->Evaluate(idat, jdat, norm);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglData::Evaluate(const mglData & idat, const mglData & jdat, const mglData & kdat, bool norm = true) const
	static int _bind_Evaluate_overload_3(lua_State *L) {
		if (!_lg_typecheck_Evaluate_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in mglData mglData::Evaluate(const mglData & idat, const mglData & jdat, const mglData & kdat, bool norm = true) const function, expected prototype:\nmglData mglData::Evaluate(const mglData & idat, const mglData & jdat, const mglData & kdat, bool norm = true) const\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const mglData* idat_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,2));
		if( !idat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg idat in mglData::Evaluate function");
		}
		const mglData & idat=*idat_ptr;
		const mglData* jdat_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,3));
		if( !jdat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg jdat in mglData::Evaluate function");
		}
		const mglData & jdat=*jdat_ptr;
		const mglData* kdat_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,4));
		if( !kdat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg kdat in mglData::Evaluate function");
		}
		const mglData & kdat=*kdat_ptr;
		bool norm=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)true;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call mglData mglData::Evaluate(const mglData &, const mglData &, const mglData &, bool) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		mglData stack_lret = self->Evaluate(idat, jdat, kdat, norm);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// Overload binder for mglData::Evaluate
	static int _bind_Evaluate(lua_State *L) {
		if (_lg_typecheck_Evaluate_overload_1(L)) return _bind_Evaluate_overload_1(L);
		if (_lg_typecheck_Evaluate_overload_2(L)) return _bind_Evaluate_overload_2(L);
		if (_lg_typecheck_Evaluate_overload_3(L)) return _bind_Evaluate_overload_3(L);

		luaL_error(L, "error in function Evaluate, cannot match any of the overloads for function Evaluate:\n  Evaluate(const mglData &, bool)\n  Evaluate(const mglData &, const mglData &, bool)\n  Evaluate(const mglData &, const mglData &, const mglData &, bool)\n");
		return 0;
	}

	// void mglData::CumSum(const char * dir)
	static int _bind_CumSum(lua_State *L) {
		if (!_lg_typecheck_CumSum(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::CumSum(const char * dir) function, expected prototype:\nvoid mglData::CumSum(const char * dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * dir=(const char *)lua_tostring(L,2);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::CumSum(const char *). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CumSum(dir);

		return 0;
	}

	// void mglData::Integral(const char * dir)
	static int _bind_Integral(lua_State *L) {
		if (!_lg_typecheck_Integral(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Integral(const char * dir) function, expected prototype:\nvoid mglData::Integral(const char * dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * dir=(const char *)lua_tostring(L,2);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Integral(const char *). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Integral(dir);

		return 0;
	}

	// void mglData::Diff(const char * dir)
	static int _bind_Diff_overload_1(lua_State *L) {
		if (!_lg_typecheck_Diff_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Diff(const char * dir) function, expected prototype:\nvoid mglData::Diff(const char * dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * dir=(const char *)lua_tostring(L,2);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Diff(const char *). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Diff(dir);

		return 0;
	}

	// void mglData::Diff(const mglDataA & v1, const mglDataA & v2)
	static int _bind_Diff_overload_2(lua_State *L) {
		if (!_lg_typecheck_Diff_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Diff(const mglDataA & v1, const mglDataA & v2) function, expected prototype:\nvoid mglData::Diff(const mglDataA & v1, const mglDataA & v2)\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		const mglDataA* v1_ptr=(Luna< mglDataA >::check(L,2));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in mglData::Diff function");
		}
		const mglDataA & v1=*v1_ptr;
		const mglDataA* v2_ptr=(Luna< mglDataA >::check(L,3));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in mglData::Diff function");
		}
		const mglDataA & v2=*v2_ptr;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Diff(const mglDataA &, const mglDataA &). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Diff(v1, v2);

		return 0;
	}

	// void mglData::Diff(const mglDataA & v1, const mglDataA & v2, const mglDataA & v3)
	static int _bind_Diff_overload_3(lua_State *L) {
		if (!_lg_typecheck_Diff_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Diff(const mglDataA & v1, const mglDataA & v2, const mglDataA & v3) function, expected prototype:\nvoid mglData::Diff(const mglDataA & v1, const mglDataA & v2, const mglDataA & v3)\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		const mglDataA* v1_ptr=(Luna< mglDataA >::check(L,2));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in mglData::Diff function");
		}
		const mglDataA & v1=*v1_ptr;
		const mglDataA* v2_ptr=(Luna< mglDataA >::check(L,3));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in mglData::Diff function");
		}
		const mglDataA & v2=*v2_ptr;
		const mglDataA* v3_ptr=(Luna< mglDataA >::check(L,4));
		if( !v3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v3 in mglData::Diff function");
		}
		const mglDataA & v3=*v3_ptr;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Diff(const mglDataA &, const mglDataA &, const mglDataA &). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Diff(v1, v2, v3);

		return 0;
	}

	// Overload binder for mglData::Diff
	static int _bind_Diff(lua_State *L) {
		if (_lg_typecheck_Diff_overload_1(L)) return _bind_Diff_overload_1(L);
		if (_lg_typecheck_Diff_overload_2(L)) return _bind_Diff_overload_2(L);
		if (_lg_typecheck_Diff_overload_3(L)) return _bind_Diff_overload_3(L);

		luaL_error(L, "error in function Diff, cannot match any of the overloads for function Diff:\n  Diff(const char *)\n  Diff(const mglDataA &, const mglDataA &)\n  Diff(const mglDataA &, const mglDataA &, const mglDataA &)\n");
		return 0;
	}

	// void mglData::Diff2(const char * dir)
	static int _bind_Diff2(lua_State *L) {
		if (!_lg_typecheck_Diff2(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Diff2(const char * dir) function, expected prototype:\nvoid mglData::Diff2(const char * dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * dir=(const char *)lua_tostring(L,2);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Diff2(const char *). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Diff2(dir);

		return 0;
	}

	// void mglData::Swap(const char * dir)
	static int _bind_Swap(lua_State *L) {
		if (!_lg_typecheck_Swap(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Swap(const char * dir) function, expected prototype:\nvoid mglData::Swap(const char * dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * dir=(const char *)lua_tostring(L,2);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Swap(const char *). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Swap(dir);

		return 0;
	}

	// void mglData::Roll(char dir, long num)
	static int _bind_Roll(lua_State *L) {
		if (!_lg_typecheck_Roll(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Roll(char dir, long num) function, expected prototype:\nvoid mglData::Roll(char dir, long num)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		char dir=(char)lua_tointeger(L,2);
		long num=(long)lua_tonumber(L,3);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Roll(char, long). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Roll(dir, num);

		return 0;
	}

	// void mglData::Mirror(const char * dir)
	static int _bind_Mirror(lua_State *L) {
		if (!_lg_typecheck_Mirror(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Mirror(const char * dir) function, expected prototype:\nvoid mglData::Mirror(const char * dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * dir=(const char *)lua_tostring(L,2);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Mirror(const char *). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Mirror(dir);

		return 0;
	}

	// void mglData::Sort(long idx, long idy = -1)
	static int _bind_Sort(lua_State *L) {
		if (!_lg_typecheck_Sort(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Sort(long idx, long idy = -1) function, expected prototype:\nvoid mglData::Sort(long idx, long idy = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long idx=(long)lua_tonumber(L,2);
		long idy=luatop>2 ? (long)lua_tonumber(L,3) : (long)-1;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Sort(long, long). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Sort(idx, idy);

		return 0;
	}

	// void mglData::Envelop(char dir = 'x')
	static int _bind_Envelop(lua_State *L) {
		if (!_lg_typecheck_Envelop(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Envelop(char dir = 'x') function, expected prototype:\nvoid mglData::Envelop(char dir = 'x')\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		char dir=luatop>1 ? (char)lua_tointeger(L,2) : (char)'x';

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Envelop(char). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Envelop(dir);

		return 0;
	}

	// void mglData::Sew(const char * dirs = "xyz", double da = 2 * Pi)
	static int _bind_Sew(lua_State *L) {
		if (!_lg_typecheck_Sew(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Sew(const char * dirs = \"xyz\", double da = 2 * Pi) function, expected prototype:\nvoid mglData::Sew(const char * dirs = \"xyz\", double da = 2 * Pi)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const char * dirs=luatop>1 ? (const char *)lua_tostring(L,2) : (const char*)"xyz";
		double da=luatop>2 ? (double)lua_tonumber(L,3) : (double)2 * Pi;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Sew(const char *, double). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Sew(dirs, da);

		return 0;
	}

	// void mglData::Smooth(const char * dirs = "xyz", double delta = 0)
	static int _bind_Smooth(lua_State *L) {
		if (!_lg_typecheck_Smooth(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Smooth(const char * dirs = \"xyz\", double delta = 0) function, expected prototype:\nvoid mglData::Smooth(const char * dirs = \"xyz\", double delta = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const char * dirs=luatop>1 ? (const char *)lua_tostring(L,2) : (const char*)"xyz";
		double delta=luatop>2 ? (double)lua_tonumber(L,3) : (double)0;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Smooth(const char *, double). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Smooth(dirs, delta);

		return 0;
	}

	// void mglData::Norm(double v1 = 0, double v2 = 1, bool sym = false, long dim = 0)
	static int _bind_Norm(lua_State *L) {
		if (!_lg_typecheck_Norm(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Norm(double v1 = 0, double v2 = 1, bool sym = false, long dim = 0) function, expected prototype:\nvoid mglData::Norm(double v1 = 0, double v2 = 1, bool sym = false, long dim = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double v1=luatop>1 ? (double)lua_tonumber(L,2) : (double)0;
		double v2=luatop>2 ? (double)lua_tonumber(L,3) : (double)1;
		bool sym=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;
		long dim=luatop>4 ? (long)lua_tonumber(L,5) : (long)0;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Norm(double, double, bool, long). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Norm(v1, v2, sym, dim);

		return 0;
	}

	// void mglData::NormSl(double v1 = 0, double v2 = 1, char dir = 'z', bool keep_en = true, bool sym = false)
	static int _bind_NormSl(lua_State *L) {
		if (!_lg_typecheck_NormSl(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::NormSl(double v1 = 0, double v2 = 1, char dir = 'z', bool keep_en = true, bool sym = false) function, expected prototype:\nvoid mglData::NormSl(double v1 = 0, double v2 = 1, char dir = 'z', bool keep_en = true, bool sym = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double v1=luatop>1 ? (double)lua_tonumber(L,2) : (double)0;
		double v2=luatop>2 ? (double)lua_tonumber(L,3) : (double)1;
		char dir=luatop>3 ? (char)lua_tointeger(L,4) : (char)'z';
		bool keep_en=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)true;
		bool sym=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::NormSl(double, double, char, bool, bool). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NormSl(v1, v2, dir, keep_en, sym);

		return 0;
	}

	// void mglData::Hankel(const char * dir)
	static int _bind_Hankel(lua_State *L) {
		if (!_lg_typecheck_Hankel(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::Hankel(const char * dir) function, expected prototype:\nvoid mglData::Hankel(const char * dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * dir=(const char *)lua_tostring(L,2);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::Hankel(const char *). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Hankel(dir);

		return 0;
	}

	// void mglData::SinFFT(const char * dir)
	static int _bind_SinFFT(lua_State *L) {
		if (!_lg_typecheck_SinFFT(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::SinFFT(const char * dir) function, expected prototype:\nvoid mglData::SinFFT(const char * dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * dir=(const char *)lua_tostring(L,2);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::SinFFT(const char *). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SinFFT(dir);

		return 0;
	}

	// void mglData::CosFFT(const char * dir)
	static int _bind_CosFFT(lua_State *L) {
		if (!_lg_typecheck_CosFFT(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::CosFFT(const char * dir) function, expected prototype:\nvoid mglData::CosFFT(const char * dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * dir=(const char *)lua_tostring(L,2);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::CosFFT(const char *). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CosFFT(dir);

		return 0;
	}

	// void mglData::FillSample(const char * how)
	static int _bind_FillSample(lua_State *L) {
		if (!_lg_typecheck_FillSample(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::FillSample(const char * how) function, expected prototype:\nvoid mglData::FillSample(const char * how)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * how=(const char *)lua_tostring(L,2);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::FillSample(const char *). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FillSample(how);

		return 0;
	}

	// double mglData::Spline(double x, double y = 0, double z = 0) const
	static int _bind_Spline_overload_1(lua_State *L) {
		if (!_lg_typecheck_Spline_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double mglData::Spline(double x, double y = 0, double z = 0) const function, expected prototype:\ndouble mglData::Spline(double x, double y = 0, double z = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double x=(double)lua_tonumber(L,2);
		double y=luatop>2 ? (double)lua_tonumber(L,3) : (double)0;
		double z=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double mglData::Spline(double, double, double) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->Spline(x, y, z);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglData::Spline(mglPoint & dif, double x, double y = 0, double z = 0) const
	static int _bind_Spline_overload_2(lua_State *L) {
		if (!_lg_typecheck_Spline_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in double mglData::Spline(mglPoint & dif, double x, double y = 0, double z = 0) const function, expected prototype:\ndouble mglData::Spline(mglPoint & dif, double x, double y = 0, double z = 0) const\nClass arguments details:\narg 1 ID = 56902440\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		mglPoint* dif_ptr=(Luna< mglPoint >::check(L,2));
		if( !dif_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dif in mglData::Spline function");
		}
		mglPoint & dif=*dif_ptr;
		double x=(double)lua_tonumber(L,3);
		double y=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;
		double z=luatop>4 ? (double)lua_tonumber(L,5) : (double)0;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double mglData::Spline(mglPoint &, double, double, double) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->Spline(dif, x, y, z);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for mglData::Spline
	static int _bind_Spline(lua_State *L) {
		if (_lg_typecheck_Spline_overload_1(L)) return _bind_Spline_overload_1(L);
		if (_lg_typecheck_Spline_overload_2(L)) return _bind_Spline_overload_2(L);

		luaL_error(L, "error in function Spline, cannot match any of the overloads for function Spline:\n  Spline(double, double, double)\n  Spline(mglPoint &, double, double, double)\n");
		return 0;
	}

	// double mglData::Spline1(double x, double y = 0, double z = 0) const
	static int _bind_Spline1_overload_1(lua_State *L) {
		if (!_lg_typecheck_Spline1_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double mglData::Spline1(double x, double y = 0, double z = 0) const function, expected prototype:\ndouble mglData::Spline1(double x, double y = 0, double z = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double x=(double)lua_tonumber(L,2);
		double y=luatop>2 ? (double)lua_tonumber(L,3) : (double)0;
		double z=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double mglData::Spline1(double, double, double) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->Spline1(x, y, z);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglData::Spline1(mglPoint & dif, double x, double y = 0, double z = 0) const
	static int _bind_Spline1_overload_2(lua_State *L) {
		if (!_lg_typecheck_Spline1_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in double mglData::Spline1(mglPoint & dif, double x, double y = 0, double z = 0) const function, expected prototype:\ndouble mglData::Spline1(mglPoint & dif, double x, double y = 0, double z = 0) const\nClass arguments details:\narg 1 ID = 56902440\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		mglPoint* dif_ptr=(Luna< mglPoint >::check(L,2));
		if( !dif_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dif in mglData::Spline1 function");
		}
		mglPoint & dif=*dif_ptr;
		double x=(double)lua_tonumber(L,3);
		double y=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;
		double z=luatop>4 ? (double)lua_tonumber(L,5) : (double)0;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double mglData::Spline1(mglPoint &, double, double, double) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->Spline1(dif, x, y, z);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for mglData::Spline1
	static int _bind_Spline1(lua_State *L) {
		if (_lg_typecheck_Spline1_overload_1(L)) return _bind_Spline1_overload_1(L);
		if (_lg_typecheck_Spline1_overload_2(L)) return _bind_Spline1_overload_2(L);

		luaL_error(L, "error in function Spline1, cannot match any of the overloads for function Spline1:\n  Spline1(double, double, double)\n  Spline1(mglPoint &, double, double, double)\n");
		return 0;
	}

	// double mglData::Linear(double x, double y = 0, double z = 0) const
	static int _bind_Linear_overload_1(lua_State *L) {
		if (!_lg_typecheck_Linear_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double mglData::Linear(double x, double y = 0, double z = 0) const function, expected prototype:\ndouble mglData::Linear(double x, double y = 0, double z = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double x=(double)lua_tonumber(L,2);
		double y=luatop>2 ? (double)lua_tonumber(L,3) : (double)0;
		double z=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double mglData::Linear(double, double, double) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->Linear(x, y, z);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglData::Linear(mglPoint & dif, double x, double y = 0, double z = 0) const
	static int _bind_Linear_overload_2(lua_State *L) {
		if (!_lg_typecheck_Linear_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in double mglData::Linear(mglPoint & dif, double x, double y = 0, double z = 0) const function, expected prototype:\ndouble mglData::Linear(mglPoint & dif, double x, double y = 0, double z = 0) const\nClass arguments details:\narg 1 ID = 56902440\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		mglPoint* dif_ptr=(Luna< mglPoint >::check(L,2));
		if( !dif_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dif in mglData::Linear function");
		}
		mglPoint & dif=*dif_ptr;
		double x=(double)lua_tonumber(L,3);
		double y=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;
		double z=luatop>4 ? (double)lua_tonumber(L,5) : (double)0;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double mglData::Linear(mglPoint &, double, double, double) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->Linear(dif, x, y, z);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for mglData::Linear
	static int _bind_Linear(lua_State *L) {
		if (_lg_typecheck_Linear_overload_1(L)) return _bind_Linear_overload_1(L);
		if (_lg_typecheck_Linear_overload_2(L)) return _bind_Linear_overload_2(L);

		luaL_error(L, "error in function Linear, cannot match any of the overloads for function Linear:\n  Linear(double, double, double)\n  Linear(mglPoint &, double, double, double)\n");
		return 0;
	}

	// double mglData::Linear1(double x, double y = 0, double z = 0) const
	static int _bind_Linear1_overload_1(lua_State *L) {
		if (!_lg_typecheck_Linear1_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double mglData::Linear1(double x, double y = 0, double z = 0) const function, expected prototype:\ndouble mglData::Linear1(double x, double y = 0, double z = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double x=(double)lua_tonumber(L,2);
		double y=luatop>2 ? (double)lua_tonumber(L,3) : (double)0;
		double z=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double mglData::Linear1(double, double, double) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->Linear1(x, y, z);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglData::Linear1(mglPoint & dif, double x, double y = 0, double z = 0) const
	static int _bind_Linear1_overload_2(lua_State *L) {
		if (!_lg_typecheck_Linear1_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in double mglData::Linear1(mglPoint & dif, double x, double y = 0, double z = 0) const function, expected prototype:\ndouble mglData::Linear1(mglPoint & dif, double x, double y = 0, double z = 0) const\nClass arguments details:\narg 1 ID = 56902440\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		mglPoint* dif_ptr=(Luna< mglPoint >::check(L,2));
		if( !dif_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dif in mglData::Linear1 function");
		}
		mglPoint & dif=*dif_ptr;
		double x=(double)lua_tonumber(L,3);
		double y=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;
		double z=luatop>4 ? (double)lua_tonumber(L,5) : (double)0;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double mglData::Linear1(mglPoint &, double, double, double) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->Linear1(dif, x, y, z);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for mglData::Linear1
	static int _bind_Linear1(lua_State *L) {
		if (_lg_typecheck_Linear1_overload_1(L)) return _bind_Linear1_overload_1(L);
		if (_lg_typecheck_Linear1_overload_2(L)) return _bind_Linear1_overload_2(L);

		luaL_error(L, "error in function Linear1, cannot match any of the overloads for function Linear1:\n  Linear1(double, double, double)\n  Linear1(mglPoint &, double, double, double)\n");
		return 0;
	}

	// double mglData::Solve(double val, bool use_spline = true, long i0 = 0) const
	static int _bind_Solve_overload_1(lua_State *L) {
		if (!_lg_typecheck_Solve_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double mglData::Solve(double val, bool use_spline = true, long i0 = 0) const function, expected prototype:\ndouble mglData::Solve(double val, bool use_spline = true, long i0 = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double val=(double)lua_tonumber(L,2);
		bool use_spline=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;
		long i0=luatop>3 ? (long)lua_tonumber(L,4) : (long)0;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double mglData::Solve(double, bool, long) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->Solve(val, use_spline, i0);
		lua_pushnumber(L,lret);

		return 1;
	}

	// mglData mglData::Solve(double val, char dir, bool norm = true) const
	static int _bind_Solve_overload_2(lua_State *L) {
		if (!_lg_typecheck_Solve_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in mglData mglData::Solve(double val, char dir, bool norm = true) const function, expected prototype:\nmglData mglData::Solve(double val, char dir, bool norm = true) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double val=(double)lua_tonumber(L,2);
		char dir=(char)lua_tointeger(L,3);
		bool norm=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call mglData mglData::Solve(double, char, bool) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		mglData stack_lret = self->Solve(val, dir, norm);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglData::Solve(double val, char dir, const mglData & i0, bool norm = true) const
	static int _bind_Solve_overload_3(lua_State *L) {
		if (!_lg_typecheck_Solve_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in mglData mglData::Solve(double val, char dir, const mglData & i0, bool norm = true) const function, expected prototype:\nmglData mglData::Solve(double val, char dir, const mglData & i0, bool norm = true) const\nClass arguments details:\narg 3 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double val=(double)lua_tonumber(L,2);
		char dir=(char)lua_tointeger(L,3);
		const mglData* i0_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,4));
		if( !i0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg i0 in mglData::Solve function");
		}
		const mglData & i0=*i0_ptr;
		bool norm=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)true;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call mglData mglData::Solve(double, char, const mglData &, bool) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		mglData stack_lret = self->Solve(val, dir, i0, norm);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// Overload binder for mglData::Solve
	static int _bind_Solve(lua_State *L) {
		if (_lg_typecheck_Solve_overload_1(L)) return _bind_Solve_overload_1(L);
		if (_lg_typecheck_Solve_overload_2(L)) return _bind_Solve_overload_2(L);
		if (_lg_typecheck_Solve_overload_3(L)) return _bind_Solve_overload_3(L);

		luaL_error(L, "error in function Solve, cannot match any of the overloads for function Solve:\n  Solve(double, bool, long)\n  Solve(double, char, bool)\n  Solve(double, char, const mglData &, bool)\n");
		return 0;
	}

	// const char * mglData::PrintInfo() const
	static int _bind_PrintInfo(lua_State *L) {
		if (!_lg_typecheck_PrintInfo(L)) {
			luaL_error(L, "luna typecheck failed in const char * mglData::PrintInfo() const function, expected prototype:\nconst char * mglData::PrintInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * mglData::PrintInfo() const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->PrintInfo();
		lua_pushstring(L,lret);

		return 1;
	}

	// double mglData::Maximal() const
	static int _bind_Maximal_overload_1(lua_State *L) {
		if (!_lg_typecheck_Maximal_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double mglData::Maximal() const function, expected prototype:\ndouble mglData::Maximal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double mglData::Maximal() const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->Maximal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglData::Maximal(long & i, long & j, long & k) const
	static int _bind_Maximal_overload_2(lua_State *L) {
		if (!_lg_typecheck_Maximal_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in double mglData::Maximal(long & i, long & j, long & k) const function, expected prototype:\ndouble mglData::Maximal(long & i, long & j, long & k) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long i=(long)lua_tonumber(L,2);
		long j=(long)lua_tonumber(L,3);
		long k=(long)lua_tonumber(L,4);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double mglData::Maximal(long &, long &, long &) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->Maximal(i, j, k);
		lua_pushnumber(L,lret);

		lua_pushnumber(L,i);
		lua_pushnumber(L,j);
		lua_pushnumber(L,k);
		return 4;
	}

	// double mglData::Maximal(double & x, double & y, double & z) const
	static int _bind_Maximal_overload_3(lua_State *L) {
		if (!_lg_typecheck_Maximal_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in double mglData::Maximal(double & x, double & y, double & z) const function, expected prototype:\ndouble mglData::Maximal(double & x, double & y, double & z) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		double z=(double)lua_tonumber(L,4);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double mglData::Maximal(double &, double &, double &) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->Maximal(x, y, z);
		lua_pushnumber(L,lret);

		lua_pushnumber(L,x);
		lua_pushnumber(L,y);
		lua_pushnumber(L,z);
		return 4;
	}

	// Overload binder for mglData::Maximal
	static int _bind_Maximal(lua_State *L) {
		if (_lg_typecheck_Maximal_overload_1(L)) return _bind_Maximal_overload_1(L);
		if (_lg_typecheck_Maximal_overload_2(L)) return _bind_Maximal_overload_2(L);
		if (_lg_typecheck_Maximal_overload_3(L)) return _bind_Maximal_overload_3(L);

		luaL_error(L, "error in function Maximal, cannot match any of the overloads for function Maximal:\n  Maximal()\n  Maximal(long &, long &, long &)\n  Maximal(double &, double &, double &)\n");
		return 0;
	}

	// double mglData::Minimal() const
	static int _bind_Minimal_overload_1(lua_State *L) {
		if (!_lg_typecheck_Minimal_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double mglData::Minimal() const function, expected prototype:\ndouble mglData::Minimal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double mglData::Minimal() const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->Minimal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglData::Minimal(long & i, long & j, long & k) const
	static int _bind_Minimal_overload_2(lua_State *L) {
		if (!_lg_typecheck_Minimal_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in double mglData::Minimal(long & i, long & j, long & k) const function, expected prototype:\ndouble mglData::Minimal(long & i, long & j, long & k) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long i=(long)lua_tonumber(L,2);
		long j=(long)lua_tonumber(L,3);
		long k=(long)lua_tonumber(L,4);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double mglData::Minimal(long &, long &, long &) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->Minimal(i, j, k);
		lua_pushnumber(L,lret);

		lua_pushnumber(L,i);
		lua_pushnumber(L,j);
		lua_pushnumber(L,k);
		return 4;
	}

	// double mglData::Minimal(double & x, double & y, double & z) const
	static int _bind_Minimal_overload_3(lua_State *L) {
		if (!_lg_typecheck_Minimal_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in double mglData::Minimal(double & x, double & y, double & z) const function, expected prototype:\ndouble mglData::Minimal(double & x, double & y, double & z) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		double z=(double)lua_tonumber(L,4);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double mglData::Minimal(double &, double &, double &) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->Minimal(x, y, z);
		lua_pushnumber(L,lret);

		lua_pushnumber(L,x);
		lua_pushnumber(L,y);
		lua_pushnumber(L,z);
		return 4;
	}

	// Overload binder for mglData::Minimal
	static int _bind_Minimal(lua_State *L) {
		if (_lg_typecheck_Minimal_overload_1(L)) return _bind_Minimal_overload_1(L);
		if (_lg_typecheck_Minimal_overload_2(L)) return _bind_Minimal_overload_2(L);
		if (_lg_typecheck_Minimal_overload_3(L)) return _bind_Minimal_overload_3(L);

		luaL_error(L, "error in function Minimal, cannot match any of the overloads for function Minimal:\n  Minimal()\n  Minimal(long &, long &, long &)\n  Minimal(double &, double &, double &)\n");
		return 0;
	}

	// double mglData::Find(const char * cond, long & i, long & j, long & k) const
	static int _bind_Find_overload_1(lua_State *L) {
		if (!_lg_typecheck_Find_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double mglData::Find(const char * cond, long & i, long & j, long & k) const function, expected prototype:\ndouble mglData::Find(const char * cond, long & i, long & j, long & k) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * cond=(const char *)lua_tostring(L,2);
		long i=(long)lua_tonumber(L,3);
		long j=(long)lua_tonumber(L,4);
		long k=(long)lua_tonumber(L,5);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double mglData::Find(const char *, long &, long &, long &) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->Find(cond, i, j, k);
		lua_pushnumber(L,lret);

		lua_pushnumber(L,i);
		lua_pushnumber(L,j);
		lua_pushnumber(L,k);
		return 4;
	}

	// long mglData::Find(const char * cond, char dir, long i = 0, long j = 0, long k = 0) const
	static int _bind_Find_overload_2(lua_State *L) {
		if (!_lg_typecheck_Find_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in long mglData::Find(const char * cond, char dir, long i = 0, long j = 0, long k = 0) const function, expected prototype:\nlong mglData::Find(const char * cond, char dir, long i = 0, long j = 0, long k = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const char * cond=(const char *)lua_tostring(L,2);
		char dir=(char)lua_tointeger(L,3);
		long i=luatop>3 ? (long)lua_tonumber(L,4) : (long)0;
		long j=luatop>4 ? (long)lua_tonumber(L,5) : (long)0;
		long k=luatop>5 ? (long)lua_tonumber(L,6) : (long)0;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long mglData::Find(const char *, char, long, long, long) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->Find(cond, dir, i, j, k);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for mglData::Find
	static int _bind_Find(lua_State *L) {
		if (_lg_typecheck_Find_overload_1(L)) return _bind_Find_overload_1(L);
		if (_lg_typecheck_Find_overload_2(L)) return _bind_Find_overload_2(L);

		luaL_error(L, "error in function Find, cannot match any of the overloads for function Find:\n  Find(const char *, long &, long &, long &)\n  Find(const char *, char, long, long, long)\n");
		return 0;
	}

	// double mglData::Last(const char * cond, long & i, long & j, long & k) const
	static int _bind_Last(lua_State *L) {
		if (!_lg_typecheck_Last(L)) {
			luaL_error(L, "luna typecheck failed in double mglData::Last(const char * cond, long & i, long & j, long & k) const function, expected prototype:\ndouble mglData::Last(const char * cond, long & i, long & j, long & k) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * cond=(const char *)lua_tostring(L,2);
		long i=(long)lua_tonumber(L,3);
		long j=(long)lua_tonumber(L,4);
		long k=(long)lua_tonumber(L,5);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double mglData::Last(const char *, long &, long &, long &) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->Last(cond, i, j, k);
		lua_pushnumber(L,lret);

		lua_pushnumber(L,i);
		lua_pushnumber(L,j);
		lua_pushnumber(L,k);
		return 4;
	}

	// bool mglData::FindAny(const char * cond) const
	static int _bind_FindAny(lua_State *L) {
		if (!_lg_typecheck_FindAny(L)) {
			luaL_error(L, "luna typecheck failed in bool mglData::FindAny(const char * cond) const function, expected prototype:\nbool mglData::FindAny(const char * cond) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * cond=(const char *)lua_tostring(L,2);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool mglData::FindAny(const char *) const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FindAny(cond);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static int mglData::DatasHDF(const char * fname, char * buf, long size)
	static int _bind_DatasHDF(lua_State *L) {
		if (!_lg_typecheck_DatasHDF(L)) {
			luaL_error(L, "luna typecheck failed in static int mglData::DatasHDF(const char * fname, char * buf, long size) function, expected prototype:\nstatic int mglData::DatasHDF(const char * fname, char * buf, long size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * fname=(const char *)lua_tostring(L,1);
		char* buf=(char*)Luna< void >::check(L,2);
		long size=(long)lua_tonumber(L,3);

		int lret = mglData::DatasHDF(fname, buf, size);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglData::nx()
	static int _bind_getNx(lua_State *L) {
		if (!_lg_typecheck_getNx(L)) {
			luaL_error(L, "luna typecheck failed in long mglData::nx() function, expected prototype:\nlong mglData::nx()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long mglData::nx(). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->nx;
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglData::ny()
	static int _bind_getNy(lua_State *L) {
		if (!_lg_typecheck_getNy(L)) {
			luaL_error(L, "luna typecheck failed in long mglData::ny() function, expected prototype:\nlong mglData::ny()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long mglData::ny(). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->ny;
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglData::nz()
	static int _bind_getNz(lua_State *L) {
		if (!_lg_typecheck_getNz(L)) {
			luaL_error(L, "luna typecheck failed in long mglData::nz() function, expected prototype:\nlong mglData::nz()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long mglData::nz(). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->nz;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double * mglData::a()
	static int _bind_getA(lua_State *L) {
		if (!_lg_typecheck_getA(L)) {
			luaL_error(L, "luna typecheck failed in double * mglData::a() function, expected prototype:\ndouble * mglData::a()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double * mglData::a(). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double * lret = self->a;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// std::string mglData::id()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in std::string mglData::id() function, expected prototype:\nstd::string mglData::id()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string mglData::id(). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->id;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool mglData::link()
	static int _bind_getLink(lua_State *L) {
		if (!_lg_typecheck_getLink(L)) {
			luaL_error(L, "luna typecheck failed in bool mglData::link() function, expected prototype:\nbool mglData::link()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool mglData::link(). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->link;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void mglData::nx(long value)
	static int _bind_setNx(lua_State *L) {
		if (!_lg_typecheck_setNx(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::nx(long value) function, expected prototype:\nvoid mglData::nx(long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long value=(long)lua_tonumber(L,2);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::nx(long). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->nx = value;

		return 0;
	}

	// void mglData::ny(long value)
	static int _bind_setNy(lua_State *L) {
		if (!_lg_typecheck_setNy(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::ny(long value) function, expected prototype:\nvoid mglData::ny(long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long value=(long)lua_tonumber(L,2);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::ny(long). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ny = value;

		return 0;
	}

	// void mglData::nz(long value)
	static int _bind_setNz(lua_State *L) {
		if (!_lg_typecheck_setNz(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::nz(long value) function, expected prototype:\nvoid mglData::nz(long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long value=(long)lua_tonumber(L,2);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::nz(long). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->nz = value;

		return 0;
	}

	// void mglData::a(double * value)
	static int _bind_setA(lua_State *L) {
		if (!_lg_typecheck_setA(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::a(double * value) function, expected prototype:\nvoid mglData::a(double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double* value=(double*)Luna< void >::check(L,2);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::a(double *). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->a = value;

		return 0;
	}

	// void mglData::id(std::string value)
	static int _bind_setId(lua_State *L) {
		if (!_lg_typecheck_setId(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::id(std::string value) function, expected prototype:\nvoid mglData::id(std::string value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::id(std::string). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->id = value;

		return 0;
	}

	// void mglData::link(bool value)
	static int _bind_setLink(lua_State *L) {
		if (!_lg_typecheck_setLink(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::link(bool value) function, expected prototype:\nvoid mglData::link(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::link(bool). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->link = value;

		return 0;
	}

	// long mglData::base_GetNx() const
	static int _bind_base_GetNx(lua_State *L) {
		if (!_lg_typecheck_base_GetNx(L)) {
			luaL_error(L, "luna typecheck failed in long mglData::base_GetNx() const function, expected prototype:\nlong mglData::base_GetNx() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long mglData::base_GetNx() const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->mglData::GetNx();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglData::base_GetNy() const
	static int _bind_base_GetNy(lua_State *L) {
		if (!_lg_typecheck_base_GetNy(L)) {
			luaL_error(L, "luna typecheck failed in long mglData::base_GetNy() const function, expected prototype:\nlong mglData::base_GetNy() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long mglData::base_GetNy() const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->mglData::GetNy();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglData::base_GetNz() const
	static int _bind_base_GetNz(lua_State *L) {
		if (!_lg_typecheck_base_GetNz(L)) {
			luaL_error(L, "luna typecheck failed in long mglData::base_GetNz() const function, expected prototype:\nlong mglData::base_GetNz() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long mglData::base_GetNz() const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->mglData::GetNz();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglData::base_Maximal() const
	static int _bind_base_Maximal(lua_State *L) {
		if (!_lg_typecheck_base_Maximal(L)) {
			luaL_error(L, "luna typecheck failed in double mglData::base_Maximal() const function, expected prototype:\ndouble mglData::base_Maximal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double mglData::base_Maximal() const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->mglData::Maximal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglData::base_Minimal() const
	static int _bind_base_Minimal(lua_State *L) {
		if (!_lg_typecheck_base_Minimal(L)) {
			luaL_error(L, "luna typecheck failed in double mglData::base_Minimal() const function, expected prototype:\ndouble mglData::base_Minimal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double mglData::base_Minimal() const. Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->mglData::Minimal();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:
	// mglData & mglData::operator=(const mglData & d)
	static int _bind_op_assign_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_assign_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in mglData & mglData::operator=(const mglData & d) function, expected prototype:\nmglData & mglData::operator=(const mglData & d)\nClass arguments details:\narg 1 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		const mglData* d_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,2));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglData::operator= function");
		}
		const mglData & d=*d_ptr;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call mglData & mglData::operator=(const mglData &). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const mglData* lret = &self->operator=(d);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,false);

		return 1;
	}

	// double mglData::operator=(double val)
	static int _bind_op_assign_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_assign_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in double mglData::operator=(double val) function, expected prototype:\ndouble mglData::operator=(double val)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double val=(double)lua_tonumber(L,2);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double mglData::operator=(double). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->operator=(val);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for mglData::operator=
	static int _bind_op_assign(lua_State *L) {
		if (_lg_typecheck_op_assign_overload_1(L)) return _bind_op_assign_overload_1(L);
		if (_lg_typecheck_op_assign_overload_2(L)) return _bind_op_assign_overload_2(L);

		luaL_error(L, "error in function operator=, cannot match any of the overloads for function operator=:\n  operator=(const mglData &)\n  operator=(double)\n");
		return 0;
	}

	// void mglData::operator*=(const mglDataA & d)
	static int _bind_op_mult_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_mult_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::operator*=(const mglDataA & d) function, expected prototype:\nvoid mglData::operator*=(const mglDataA & d)\nClass arguments details:\narg 1 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		const mglDataA* d_ptr=(Luna< mglDataA >::check(L,2));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglData::operator*= function");
		}
		const mglDataA & d=*d_ptr;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::operator*=(const mglDataA &). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator*=(d);

		return 0;
	}

	// void mglData::operator*=(double d)
	static int _bind_op_mult_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_mult_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::operator*=(double d) function, expected prototype:\nvoid mglData::operator*=(double d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double d=(double)lua_tonumber(L,2);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::operator*=(double). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator*=(d);

		return 0;
	}

	// Overload binder for mglData::operator*=
	static int _bind_op_mult(lua_State *L) {
		if (_lg_typecheck_op_mult_overload_1(L)) return _bind_op_mult_overload_1(L);
		if (_lg_typecheck_op_mult_overload_2(L)) return _bind_op_mult_overload_2(L);

		luaL_error(L, "error in function operator*=, cannot match any of the overloads for function operator*=:\n  operator*=(const mglDataA &)\n  operator*=(double)\n");
		return 0;
	}

	// void mglData::operator/=(const mglDataA & d)
	static int _bind_op_div_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_div_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::operator/=(const mglDataA & d) function, expected prototype:\nvoid mglData::operator/=(const mglDataA & d)\nClass arguments details:\narg 1 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		const mglDataA* d_ptr=(Luna< mglDataA >::check(L,2));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglData::operator/= function");
		}
		const mglDataA & d=*d_ptr;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::operator/=(const mglDataA &). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator/=(d);

		return 0;
	}

	// void mglData::operator/=(double d)
	static int _bind_op_div_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_div_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::operator/=(double d) function, expected prototype:\nvoid mglData::operator/=(double d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double d=(double)lua_tonumber(L,2);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::operator/=(double). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator/=(d);

		return 0;
	}

	// Overload binder for mglData::operator/=
	static int _bind_op_div(lua_State *L) {
		if (_lg_typecheck_op_div_overload_1(L)) return _bind_op_div_overload_1(L);
		if (_lg_typecheck_op_div_overload_2(L)) return _bind_op_div_overload_2(L);

		luaL_error(L, "error in function operator/=, cannot match any of the overloads for function operator/=:\n  operator/=(const mglDataA &)\n  operator/=(double)\n");
		return 0;
	}

	// void mglData::operator+=(const mglDataA & d)
	static int _bind_op_add_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_add_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::operator+=(const mglDataA & d) function, expected prototype:\nvoid mglData::operator+=(const mglDataA & d)\nClass arguments details:\narg 1 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		const mglDataA* d_ptr=(Luna< mglDataA >::check(L,2));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglData::operator+= function");
		}
		const mglDataA & d=*d_ptr;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::operator+=(const mglDataA &). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator+=(d);

		return 0;
	}

	// void mglData::operator+=(double d)
	static int _bind_op_add_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_add_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::operator+=(double d) function, expected prototype:\nvoid mglData::operator+=(double d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double d=(double)lua_tonumber(L,2);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::operator+=(double). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator+=(d);

		return 0;
	}

	// Overload binder for mglData::operator+=
	static int _bind_op_add(lua_State *L) {
		if (_lg_typecheck_op_add_overload_1(L)) return _bind_op_add_overload_1(L);
		if (_lg_typecheck_op_add_overload_2(L)) return _bind_op_add_overload_2(L);

		luaL_error(L, "error in function operator+=, cannot match any of the overloads for function operator+=:\n  operator+=(const mglDataA &)\n  operator+=(double)\n");
		return 0;
	}

	// void mglData::operator-=(const mglDataA & d)
	static int _bind_op_sub_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_sub_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::operator-=(const mglDataA & d) function, expected prototype:\nvoid mglData::operator-=(const mglDataA & d)\nClass arguments details:\narg 1 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		const mglDataA* d_ptr=(Luna< mglDataA >::check(L,2));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglData::operator-= function");
		}
		const mglDataA & d=*d_ptr;

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::operator-=(const mglDataA &). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator-=(d);

		return 0;
	}

	// void mglData::operator-=(double d)
	static int _bind_op_sub_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_sub_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void mglData::operator-=(double d) function, expected prototype:\nvoid mglData::operator-=(double d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double d=(double)lua_tonumber(L,2);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglData::operator-=(double). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator-=(d);

		return 0;
	}

	// Overload binder for mglData::operator-=
	static int _bind_op_sub(lua_State *L) {
		if (_lg_typecheck_op_sub_overload_1(L)) return _bind_op_sub_overload_1(L);
		if (_lg_typecheck_op_sub_overload_2(L)) return _bind_op_sub_overload_2(L);

		luaL_error(L, "error in function operator-=, cannot match any of the overloads for function operator-=:\n  operator-=(const mglDataA &)\n  operator-=(double)\n");
		return 0;
	}

	// double & mglData::operator[](long i)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luaL_error(L, "luna typecheck failed in double & mglData::operator[](long i) function, expected prototype:\ndouble & mglData::operator[](long i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long i=(long)lua_tonumber(L,2);

		mglData* self=Luna< mglDataA >::checkSubType< mglData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double & mglData::operator[](long). Got : '%s'\n%s",typeid(Luna< mglDataA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double & lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}


};

mglData* LunaTraits< mglData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglData::_bind_ctor(L);
}

void LunaTraits< mglData >::_bind_dtor(mglData* obj) {
	delete obj;
}

const char LunaTraits< mglData >::className[] = "mglData";
const char LunaTraits< mglData >::fullName[] = "mglData";
const char LunaTraits< mglData >::moduleName[] = "mathgl";
const char* LunaTraits< mglData >::parents[] = {"mathgl.mglDataA", 0};
const int LunaTraits< mglData >::hash = 88561722;
const int LunaTraits< mglData >::uniqueIDs[] = {45413231,0};

luna_RegType LunaTraits< mglData >::methods[] = {
	{"GetVal", &luna_wrapper_mglData::_bind_GetVal},
	{"SetVal", &luna_wrapper_mglData::_bind_SetVal},
	{"GetNx", &luna_wrapper_mglData::_bind_GetNx},
	{"GetNy", &luna_wrapper_mglData::_bind_GetNy},
	{"GetNz", &luna_wrapper_mglData::_bind_GetNz},
	{"Link", &luna_wrapper_mglData::_bind_Link},
	{"Set", &luna_wrapper_mglData::_bind_Set},
	{"Create", &luna_wrapper_mglData::_bind_Create},
	{"Rearrange", &luna_wrapper_mglData::_bind_Rearrange},
	{"Transpose", &luna_wrapper_mglData::_bind_Transpose},
	{"Extend", &luna_wrapper_mglData::_bind_Extend},
	{"Squeeze", &luna_wrapper_mglData::_bind_Squeeze},
	{"Crop", &luna_wrapper_mglData::_bind_Crop},
	{"Insert", &luna_wrapper_mglData::_bind_Insert},
	{"Delete", &luna_wrapper_mglData::_bind_Delete},
	{"Clean", &luna_wrapper_mglData::_bind_Clean},
	{"Modify", &luna_wrapper_mglData::_bind_Modify},
	{"Fill", &luna_wrapper_mglData::_bind_Fill},
	{"Grid", &luna_wrapper_mglData::_bind_Grid},
	{"Put", &luna_wrapper_mglData::_bind_Put},
	{"SetColumnId", &luna_wrapper_mglData::_bind_SetColumnId},
	{"NewId", &luna_wrapper_mglData::_bind_NewId},
	{"Read", &luna_wrapper_mglData::_bind_Read},
	{"Save", &luna_wrapper_mglData::_bind_Save},
	{"Export", &luna_wrapper_mglData::_bind_Export},
	{"Import", &luna_wrapper_mglData::_bind_Import},
	{"ReadRange", &luna_wrapper_mglData::_bind_ReadRange},
	{"ReadAll", &luna_wrapper_mglData::_bind_ReadAll},
	{"ReadMat", &luna_wrapper_mglData::_bind_ReadMat},
	{"ReadHDF", &luna_wrapper_mglData::_bind_ReadHDF},
	{"SaveHDF", &luna_wrapper_mglData::_bind_SaveHDF},
	{"Column", &luna_wrapper_mglData::_bind_Column},
	{"Momentum", &luna_wrapper_mglData::_bind_Momentum},
	{"SubData", &luna_wrapper_mglData::_bind_SubData},
	{"Trace", &luna_wrapper_mglData::_bind_Trace},
	{"Hist", &luna_wrapper_mglData::_bind_Hist},
	{"Sum", &luna_wrapper_mglData::_bind_Sum},
	{"Max", &luna_wrapper_mglData::_bind_Max},
	{"Min", &luna_wrapper_mglData::_bind_Min},
	{"Combine", &luna_wrapper_mglData::_bind_Combine},
	{"Resize", &luna_wrapper_mglData::_bind_Resize},
	{"Evaluate", &luna_wrapper_mglData::_bind_Evaluate},
	{"CumSum", &luna_wrapper_mglData::_bind_CumSum},
	{"Integral", &luna_wrapper_mglData::_bind_Integral},
	{"Diff", &luna_wrapper_mglData::_bind_Diff},
	{"Diff2", &luna_wrapper_mglData::_bind_Diff2},
	{"Swap", &luna_wrapper_mglData::_bind_Swap},
	{"Roll", &luna_wrapper_mglData::_bind_Roll},
	{"Mirror", &luna_wrapper_mglData::_bind_Mirror},
	{"Sort", &luna_wrapper_mglData::_bind_Sort},
	{"Envelop", &luna_wrapper_mglData::_bind_Envelop},
	{"Sew", &luna_wrapper_mglData::_bind_Sew},
	{"Smooth", &luna_wrapper_mglData::_bind_Smooth},
	{"Norm", &luna_wrapper_mglData::_bind_Norm},
	{"NormSl", &luna_wrapper_mglData::_bind_NormSl},
	{"Hankel", &luna_wrapper_mglData::_bind_Hankel},
	{"SinFFT", &luna_wrapper_mglData::_bind_SinFFT},
	{"CosFFT", &luna_wrapper_mglData::_bind_CosFFT},
	{"FillSample", &luna_wrapper_mglData::_bind_FillSample},
	{"Spline", &luna_wrapper_mglData::_bind_Spline},
	{"Spline1", &luna_wrapper_mglData::_bind_Spline1},
	{"Linear", &luna_wrapper_mglData::_bind_Linear},
	{"Linear1", &luna_wrapper_mglData::_bind_Linear1},
	{"Solve", &luna_wrapper_mglData::_bind_Solve},
	{"PrintInfo", &luna_wrapper_mglData::_bind_PrintInfo},
	{"Maximal", &luna_wrapper_mglData::_bind_Maximal},
	{"Minimal", &luna_wrapper_mglData::_bind_Minimal},
	{"Find", &luna_wrapper_mglData::_bind_Find},
	{"Last", &luna_wrapper_mglData::_bind_Last},
	{"FindAny", &luna_wrapper_mglData::_bind_FindAny},
	{"DatasHDF", &luna_wrapper_mglData::_bind_DatasHDF},
	{"getNx", &luna_wrapper_mglData::_bind_getNx},
	{"getNy", &luna_wrapper_mglData::_bind_getNy},
	{"getNz", &luna_wrapper_mglData::_bind_getNz},
	{"getA", &luna_wrapper_mglData::_bind_getA},
	{"getId", &luna_wrapper_mglData::_bind_getId},
	{"getLink", &luna_wrapper_mglData::_bind_getLink},
	{"setNx", &luna_wrapper_mglData::_bind_setNx},
	{"setNy", &luna_wrapper_mglData::_bind_setNy},
	{"setNz", &luna_wrapper_mglData::_bind_setNz},
	{"setA", &luna_wrapper_mglData::_bind_setA},
	{"setId", &luna_wrapper_mglData::_bind_setId},
	{"setLink", &luna_wrapper_mglData::_bind_setLink},
	{"base_GetNx", &luna_wrapper_mglData::_bind_base_GetNx},
	{"base_GetNy", &luna_wrapper_mglData::_bind_base_GetNy},
	{"base_GetNz", &luna_wrapper_mglData::_bind_base_GetNz},
	{"base_Maximal", &luna_wrapper_mglData::_bind_base_Maximal},
	{"base_Minimal", &luna_wrapper_mglData::_bind_base_Minimal},
	{"op_assign", &luna_wrapper_mglData::_bind_op_assign},
	{"op_mult", &luna_wrapper_mglData::_bind_op_mult},
	{"op_div", &luna_wrapper_mglData::_bind_op_div},
	{"op_add", &luna_wrapper_mglData::_bind_op_add},
	{"op_sub", &luna_wrapper_mglData::_bind_op_sub},
	{"op_index", &luna_wrapper_mglData::_bind_op_index},
	{"fromVoid", &luna_wrapper_mglData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglData::_bind_asVoid},
	{"getTable", &luna_wrapper_mglData::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< mglData >::converters[] = {
	{"mglDataA", &luna_wrapper_mglData::_cast_from_mglDataA},
	{0,0}
};

luna_RegEnumType LunaTraits< mglData >::enumValues[] = {
	{0,0}
};


