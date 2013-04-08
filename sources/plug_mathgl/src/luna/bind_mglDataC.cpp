#include <plug_common.h>

#include <luna/wrappers/wrapper_mglDataC.h>

class luna_wrapper_mglDataC {
public:
	typedef Luna< mglDataC > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
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

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45413231) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglDataA*)");
		}

		mglDataA* rhs =(Luna< mglDataA >::check(L,2));
		mglDataA* self=(Luna< mglDataA >::check(L,1));
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

		mglDataC* self= (mglDataC*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglDataC >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45413231) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
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
		//mglDataC* ptr= dynamic_cast< mglDataC* >(Luna< mglDataA >::check(L,1));
		mglDataC* ptr= luna_caster< mglDataA, mglDataC >::cast(Luna< mglDataA >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< mglDataC >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglDataC >(L,1))) ) return false;
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
		if( (lua_isnil(L,2)==0 && !(Luna< mglDataA >::checkSubType< mglDataC >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,37931827)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< std::complex< double > >::checkSubType< dual >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,37931827)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< std::complex< double > >::checkSubType< dual >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_9(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_10(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_11(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>3 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglDataC >(L,2))) ) return false;
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
		if( (lua_isnil(L,3)==0 && !(Luna< mglDataA >::checkSubType< mglDataC >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_15(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,37931827)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< std::complex< double > >::checkSubType< dual >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_16(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,37931827)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< std::complex< double > >::checkSubType< dual >(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_17(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_18(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_19(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_20(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_21(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_22(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetVal(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVal(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,37931827) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
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

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,37931827)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< std::complex< double > >::checkSubType< dual >(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Link_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglDataC >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,37931827)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< std::complex< double > >::checkSubType< dual >(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,45413231)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< mglDataA >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set_overload_7(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set_overload_8(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,45413231)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< mglDataA >::check(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,45413231)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< mglDataA >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92299338) ) return false;
		if( (!(Luna< std::vector< int > >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,77249888) ) return false;
		if( (!(Luna< std::vector< float > >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,4564820) ) return false;
		if( (!(Luna< std::vector< double > >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,24103996) ) return false;
		if( (!(Luna< std::vector< dual > >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAmpl(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Rearrange(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Transpose(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Extend(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Squeeze(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Crop(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Insert(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Delete(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Modify_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Modify_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Modify_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fill_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,88502113)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< mglBase >::check(L,2)) ) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fill_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,88502113)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< mglBase >::check(L,2)) ) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fill_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,88502113)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< mglBase >::check(L,2)) ) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fill_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,37931827) ) return false;
		if( (!(Luna< std::complex< double > >::checkSubType< dual >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,37931827) ) return false;
		if( luatop>2 && (!(Luna< std::complex< double > >::checkSubType< dual >(L,3))) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColumnId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_NewId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Read_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Read_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Save(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReadRange(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReadAll(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReadMat(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReadHDF(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SaveHDF(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Real(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Imag(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Abs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Arg(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Column(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Momentum(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SubData_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
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

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Hist_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Sum(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Max(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Min(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
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

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		if( luatop>6 && lua_isnumber(L,7)==0 ) return false;
		if( luatop>7 && lua_isnumber(L,8)==0 ) return false;
		if( luatop>8 && lua_isnumber(L,9)==0 ) return false;
		if( luatop>9 && lua_isnumber(L,10)==0 ) return false;
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

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Integral(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Diff(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Diff2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Roll(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Mirror(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Smooth(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Hankel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FFT(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Linear_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Linear_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,2))) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Linear1_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Linear1_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,2))) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Solve_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Solve_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Solve_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Maximal_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Minimal_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Minimal_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Minimal_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DatasHDF(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNz(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,37931827)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
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
	// (found 4 valid operators)
	inline static bool _lg_typecheck_op_assign_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglData >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_assign_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglDataC >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_assign_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,37931827) ) return false;
		if( (!(Luna< std::complex< double > >::checkSubType< dual >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Constructor binds:
	// mglDataC::mglDataC(const mglDataC & d)
	static mglDataC* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglDataC::mglDataC(const mglDataC & d) function, expected prototype:\nmglDataC::mglDataC(const mglDataC & d)\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		const mglDataC* d_ptr=(Luna< mglDataA >::checkSubType< mglDataC >(L,1));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglDataC::mglDataC function");
		}
		const mglDataC & d=*d_ptr;

		return new mglDataC(d);
	}

	// mglDataC::mglDataC(const mglDataA * d)
	static mglDataC* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglDataC::mglDataC(const mglDataA * d) function, expected prototype:\nmglDataC::mglDataC(const mglDataA * d)\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		const mglDataA* d=(Luna< mglDataA >::check(L,1));

		return new mglDataC(d);
	}

	// mglDataC::mglDataC(bool arg1, mglDataC * d)
	static mglDataC* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglDataC::mglDataC(bool arg1, mglDataC * d) function, expected prototype:\nmglDataC::mglDataC(bool arg1, mglDataC * d)\nClass arguments details:\narg 2 ID = 45413231\n");
		}

		bool _arg1=(bool)(lua_toboolean(L,1)==1);
		mglDataC* d=(Luna< mglDataA >::checkSubType< mglDataC >(L,2));

		return new mglDataC(_arg1, d);
	}

	// mglDataC::mglDataC(int size, const dual * d)
	static mglDataC* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglDataC::mglDataC(int size, const dual * d) function, expected prototype:\nmglDataC::mglDataC(int size, const dual * d)\nClass arguments details:\narg 2 ID = 3094652\n");
		}

		int size=(int)lua_tointeger(L,1);
		const dual* d=(Luna< std::complex< double > >::checkSubType< dual >(L,2));

		return new mglDataC(size, d);
	}

	// mglDataC::mglDataC(int rows, int cols, const dual * d)
	static mglDataC* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglDataC::mglDataC(int rows, int cols, const dual * d) function, expected prototype:\nmglDataC::mglDataC(int rows, int cols, const dual * d)\nClass arguments details:\narg 3 ID = 3094652\n");
		}

		int rows=(int)lua_tointeger(L,1);
		int cols=(int)lua_tointeger(L,2);
		const dual* d=(Luna< std::complex< double > >::checkSubType< dual >(L,3));

		return new mglDataC(rows, cols, d);
	}

	// mglDataC::mglDataC(int size, const double * d)
	static mglDataC* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglDataC::mglDataC(int size, const double * d) function, expected prototype:\nmglDataC::mglDataC(int size, const double * d)\nClass arguments details:\n");
		}

		int size=(int)lua_tointeger(L,1);
		const double* d=(const double*)Luna< void >::check(L,2);

		return new mglDataC(size, d);
	}

	// mglDataC::mglDataC(int rows, int cols, const double * d)
	static mglDataC* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglDataC::mglDataC(int rows, int cols, const double * d) function, expected prototype:\nmglDataC::mglDataC(int rows, int cols, const double * d)\nClass arguments details:\n");
		}

		int rows=(int)lua_tointeger(L,1);
		int cols=(int)lua_tointeger(L,2);
		const double* d=(const double*)Luna< void >::check(L,3);

		return new mglDataC(rows, cols, d);
	}

	// mglDataC::mglDataC(int size, const float * d)
	static mglDataC* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglDataC::mglDataC(int size, const float * d) function, expected prototype:\nmglDataC::mglDataC(int size, const float * d)\nClass arguments details:\n");
		}

		int size=(int)lua_tointeger(L,1);
		const float* d=(const float*)Luna< void >::check(L,2);

		return new mglDataC(size, d);
	}

	// mglDataC::mglDataC(int rows, int cols, const float * d)
	static mglDataC* _bind_ctor_overload_9(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_9(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglDataC::mglDataC(int rows, int cols, const float * d) function, expected prototype:\nmglDataC::mglDataC(int rows, int cols, const float * d)\nClass arguments details:\n");
		}

		int rows=(int)lua_tointeger(L,1);
		int cols=(int)lua_tointeger(L,2);
		const float* d=(const float*)Luna< void >::check(L,3);

		return new mglDataC(rows, cols, d);
	}

	// mglDataC::mglDataC(const char * fname)
	static mglDataC* _bind_ctor_overload_10(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_10(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglDataC::mglDataC(const char * fname) function, expected prototype:\nmglDataC::mglDataC(const char * fname)\nClass arguments details:\n");
		}

		const char * fname=(const char *)lua_tostring(L,1);

		return new mglDataC(fname);
	}

	// mglDataC::mglDataC(long xx = 1, long yy = 1, long zz = 1)
	static mglDataC* _bind_ctor_overload_11(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_11(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglDataC::mglDataC(long xx = 1, long yy = 1, long zz = 1) function, expected prototype:\nmglDataC::mglDataC(long xx = 1, long yy = 1, long zz = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long xx=luatop>0 ? (long)lua_tointeger(L,1) : (long)1;
		long yy=luatop>1 ? (long)lua_tointeger(L,2) : (long)1;
		long zz=luatop>2 ? (long)lua_tointeger(L,3) : (long)1;

		return new mglDataC(xx, yy, zz);
	}

	// mglDataC::mglDataC(lua_Table * data, const mglDataC & d)
	static mglDataC* _bind_ctor_overload_12(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_12(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglDataC::mglDataC(lua_Table * data, const mglDataC & d) function, expected prototype:\nmglDataC::mglDataC(lua_Table * data, const mglDataC & d)\nClass arguments details:\narg 2 ID = 45413231\n");
		}

		const mglDataC* d_ptr=(Luna< mglDataA >::checkSubType< mglDataC >(L,2));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglDataC::mglDataC function");
		}
		const mglDataC & d=*d_ptr;

		return new wrapper_mglDataC(L,NULL, d);
	}

	// mglDataC::mglDataC(lua_Table * data, const mglDataA * d)
	static mglDataC* _bind_ctor_overload_13(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_13(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglDataC::mglDataC(lua_Table * data, const mglDataA * d) function, expected prototype:\nmglDataC::mglDataC(lua_Table * data, const mglDataA * d)\nClass arguments details:\narg 2 ID = 45413231\n");
		}

		const mglDataA* d=(Luna< mglDataA >::check(L,2));

		return new wrapper_mglDataC(L,NULL, d);
	}

	// mglDataC::mglDataC(lua_Table * data, bool arg2, mglDataC * d)
	static mglDataC* _bind_ctor_overload_14(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_14(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglDataC::mglDataC(lua_Table * data, bool arg2, mglDataC * d) function, expected prototype:\nmglDataC::mglDataC(lua_Table * data, bool arg2, mglDataC * d)\nClass arguments details:\narg 3 ID = 45413231\n");
		}

		bool _arg2=(bool)(lua_toboolean(L,2)==1);
		mglDataC* d=(Luna< mglDataA >::checkSubType< mglDataC >(L,3));

		return new wrapper_mglDataC(L,NULL, _arg2, d);
	}

	// mglDataC::mglDataC(lua_Table * data, int size, const dual * d)
	static mglDataC* _bind_ctor_overload_15(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_15(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglDataC::mglDataC(lua_Table * data, int size, const dual * d) function, expected prototype:\nmglDataC::mglDataC(lua_Table * data, int size, const dual * d)\nClass arguments details:\narg 3 ID = 3094652\n");
		}

		int size=(int)lua_tointeger(L,2);
		const dual* d=(Luna< std::complex< double > >::checkSubType< dual >(L,3));

		return new wrapper_mglDataC(L,NULL, size, d);
	}

	// mglDataC::mglDataC(lua_Table * data, int rows, int cols, const dual * d)
	static mglDataC* _bind_ctor_overload_16(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_16(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglDataC::mglDataC(lua_Table * data, int rows, int cols, const dual * d) function, expected prototype:\nmglDataC::mglDataC(lua_Table * data, int rows, int cols, const dual * d)\nClass arguments details:\narg 4 ID = 3094652\n");
		}

		int rows=(int)lua_tointeger(L,2);
		int cols=(int)lua_tointeger(L,3);
		const dual* d=(Luna< std::complex< double > >::checkSubType< dual >(L,4));

		return new wrapper_mglDataC(L,NULL, rows, cols, d);
	}

	// mglDataC::mglDataC(lua_Table * data, int size, const double * d)
	static mglDataC* _bind_ctor_overload_17(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_17(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglDataC::mglDataC(lua_Table * data, int size, const double * d) function, expected prototype:\nmglDataC::mglDataC(lua_Table * data, int size, const double * d)\nClass arguments details:\n");
		}

		int size=(int)lua_tointeger(L,2);
		const double* d=(const double*)Luna< void >::check(L,3);

		return new wrapper_mglDataC(L,NULL, size, d);
	}

	// mglDataC::mglDataC(lua_Table * data, int rows, int cols, const double * d)
	static mglDataC* _bind_ctor_overload_18(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_18(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglDataC::mglDataC(lua_Table * data, int rows, int cols, const double * d) function, expected prototype:\nmglDataC::mglDataC(lua_Table * data, int rows, int cols, const double * d)\nClass arguments details:\n");
		}

		int rows=(int)lua_tointeger(L,2);
		int cols=(int)lua_tointeger(L,3);
		const double* d=(const double*)Luna< void >::check(L,4);

		return new wrapper_mglDataC(L,NULL, rows, cols, d);
	}

	// mglDataC::mglDataC(lua_Table * data, int size, const float * d)
	static mglDataC* _bind_ctor_overload_19(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_19(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglDataC::mglDataC(lua_Table * data, int size, const float * d) function, expected prototype:\nmglDataC::mglDataC(lua_Table * data, int size, const float * d)\nClass arguments details:\n");
		}

		int size=(int)lua_tointeger(L,2);
		const float* d=(const float*)Luna< void >::check(L,3);

		return new wrapper_mglDataC(L,NULL, size, d);
	}

	// mglDataC::mglDataC(lua_Table * data, int rows, int cols, const float * d)
	static mglDataC* _bind_ctor_overload_20(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_20(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglDataC::mglDataC(lua_Table * data, int rows, int cols, const float * d) function, expected prototype:\nmglDataC::mglDataC(lua_Table * data, int rows, int cols, const float * d)\nClass arguments details:\n");
		}

		int rows=(int)lua_tointeger(L,2);
		int cols=(int)lua_tointeger(L,3);
		const float* d=(const float*)Luna< void >::check(L,4);

		return new wrapper_mglDataC(L,NULL, rows, cols, d);
	}

	// mglDataC::mglDataC(lua_Table * data, const char * fname)
	static mglDataC* _bind_ctor_overload_21(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_21(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglDataC::mglDataC(lua_Table * data, const char * fname) function, expected prototype:\nmglDataC::mglDataC(lua_Table * data, const char * fname)\nClass arguments details:\n");
		}

		const char * fname=(const char *)lua_tostring(L,2);

		return new wrapper_mglDataC(L,NULL, fname);
	}

	// mglDataC::mglDataC(lua_Table * data, long xx = 1, long yy = 1, long zz = 1)
	static mglDataC* _bind_ctor_overload_22(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_22(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglDataC::mglDataC(lua_Table * data, long xx = 1, long yy = 1, long zz = 1) function, expected prototype:\nmglDataC::mglDataC(lua_Table * data, long xx = 1, long yy = 1, long zz = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long xx=luatop>1 ? (long)lua_tointeger(L,2) : (long)1;
		long yy=luatop>2 ? (long)lua_tointeger(L,3) : (long)1;
		long zz=luatop>3 ? (long)lua_tointeger(L,4) : (long)1;

		return new wrapper_mglDataC(L,NULL, xx, yy, zz);
	}

	// Overload binder for mglDataC::mglDataC
	static mglDataC* _bind_ctor(lua_State *L) {
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

		luaL_error(L, "error in function mglDataC, cannot match any of the overloads for function mglDataC:\n  mglDataC(const mglDataC &)\n  mglDataC(const mglDataA *)\n  mglDataC(bool, mglDataC *)\n  mglDataC(int, const dual *)\n  mglDataC(int, int, const dual *)\n  mglDataC(int, const double *)\n  mglDataC(int, int, const double *)\n  mglDataC(int, const float *)\n  mglDataC(int, int, const float *)\n  mglDataC(const char *)\n  mglDataC(long, long, long)\n  mglDataC(lua_Table *, const mglDataC &)\n  mglDataC(lua_Table *, const mglDataA *)\n  mglDataC(lua_Table *, bool, mglDataC *)\n  mglDataC(lua_Table *, int, const dual *)\n  mglDataC(lua_Table *, int, int, const dual *)\n  mglDataC(lua_Table *, int, const double *)\n  mglDataC(lua_Table *, int, int, const double *)\n  mglDataC(lua_Table *, int, const float *)\n  mglDataC(lua_Table *, int, int, const float *)\n  mglDataC(lua_Table *, const char *)\n  mglDataC(lua_Table *, long, long, long)\n");
		return NULL;
	}


	// Function binds:
	// dual mglDataC::GetVal(long i, long j = 0, long k = 0)
	static int _bind_GetVal(lua_State *L) {
		if (!_lg_typecheck_GetVal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dual mglDataC::GetVal(long i, long j = 0, long k = 0) function, expected prototype:\ndual mglDataC::GetVal(long i, long j = 0, long k = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long i=(long)lua_tointeger(L,2);
		long j=luatop>2 ? (long)lua_tointeger(L,3) : (long)0;
		long k=luatop>3 ? (long)lua_tointeger(L,4) : (long)0;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call dual mglDataC::GetVal(long, long, long). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		dual stack_lret = self->GetVal(i, j, k);
		dual* lret = new dual(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< dual >::push(L,lret,true);

		return 1;
	}

	// void mglDataC::SetVal(dual f, long i, long j = 0, long k = 0)
	static int _bind_SetVal(lua_State *L) {
		if (!_lg_typecheck_SetVal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::SetVal(dual f, long i, long j = 0, long k = 0) function, expected prototype:\nvoid mglDataC::SetVal(dual f, long i, long j = 0, long k = 0)\nClass arguments details:\narg 1 ID = 3094652\n");
		}

		int luatop = lua_gettop(L);

		dual* f_ptr=(Luna< std::complex< double > >::checkSubType< dual >(L,2));
		if( !f_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg f in mglDataC::SetVal function");
		}
		dual f=*f_ptr;
		long i=(long)lua_tointeger(L,3);
		long j=luatop>3 ? (long)lua_tointeger(L,4) : (long)0;
		long k=luatop>4 ? (long)lua_tointeger(L,5) : (long)0;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::SetVal(dual, long, long, long). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->SetVal(f, i, j, k);

		return 0;
	}

	// long mglDataC::GetNx() const
	static int _bind_GetNx(lua_State *L) {
		if (!_lg_typecheck_GetNx(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglDataC::GetNx() const function, expected prototype:\nlong mglDataC::GetNx() const\nClass arguments details:\n");
		}


		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglDataC::GetNx() const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		long lret = self->GetNx();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglDataC::GetNy() const
	static int _bind_GetNy(lua_State *L) {
		if (!_lg_typecheck_GetNy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglDataC::GetNy() const function, expected prototype:\nlong mglDataC::GetNy() const\nClass arguments details:\n");
		}


		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglDataC::GetNy() const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		long lret = self->GetNy();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglDataC::GetNz() const
	static int _bind_GetNz(lua_State *L) {
		if (!_lg_typecheck_GetNz(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglDataC::GetNz() const function, expected prototype:\nlong mglDataC::GetNz() const\nClass arguments details:\n");
		}


		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglDataC::GetNz() const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		long lret = self->GetNz();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglDataC::Link(dual * A, long NX, long NY = 1, long NZ = 1)
	static int _bind_Link_overload_1(lua_State *L) {
		if (!_lg_typecheck_Link_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Link(dual * A, long NX, long NY = 1, long NZ = 1) function, expected prototype:\nvoid mglDataC::Link(dual * A, long NX, long NY = 1, long NZ = 1)\nClass arguments details:\narg 1 ID = 3094652\n");
		}

		int luatop = lua_gettop(L);

		dual* A=(Luna< std::complex< double > >::checkSubType< dual >(L,2));
		long NX=(long)lua_tointeger(L,3);
		long NY=luatop>3 ? (long)lua_tointeger(L,4) : (long)1;
		long NZ=luatop>4 ? (long)lua_tointeger(L,5) : (long)1;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Link(dual *, long, long, long). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Link(A, NX, NY, NZ);

		return 0;
	}

	// void mglDataC::Link(mglDataC & d)
	static int _bind_Link_overload_2(lua_State *L) {
		if (!_lg_typecheck_Link_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Link(mglDataC & d) function, expected prototype:\nvoid mglDataC::Link(mglDataC & d)\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		mglDataC* d_ptr=(Luna< mglDataA >::checkSubType< mglDataC >(L,2));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglDataC::Link function");
		}
		mglDataC & d=*d_ptr;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Link(mglDataC &). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Link(d);

		return 0;
	}

	// Overload binder for mglDataC::Link
	static int _bind_Link(lua_State *L) {
		if (_lg_typecheck_Link_overload_1(L)) return _bind_Link_overload_1(L);
		if (_lg_typecheck_Link_overload_2(L)) return _bind_Link_overload_2(L);

		luaL_error(L, "error in function Link, cannot match any of the overloads for function Link:\n  Link(dual *, long, long, long)\n  Link(mglDataC &)\n");
		return 0;
	}

	// void mglDataC::Set(const float * A, long NX, long NY = 1, long NZ = 1)
	static int _bind_Set_overload_1(lua_State *L) {
		if (!_lg_typecheck_Set_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Set(const float * A, long NX, long NY = 1, long NZ = 1) function, expected prototype:\nvoid mglDataC::Set(const float * A, long NX, long NY = 1, long NZ = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const float* A=(const float*)Luna< void >::check(L,2);
		long NX=(long)lua_tointeger(L,3);
		long NY=luatop>3 ? (long)lua_tointeger(L,4) : (long)1;
		long NZ=luatop>4 ? (long)lua_tointeger(L,5) : (long)1;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Set(const float *, long, long, long). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Set(A, NX, NY, NZ);

		return 0;
	}

	// void mglDataC::Set(const double * A, long NX, long NY = 1, long NZ = 1)
	static int _bind_Set_overload_2(lua_State *L) {
		if (!_lg_typecheck_Set_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Set(const double * A, long NX, long NY = 1, long NZ = 1) function, expected prototype:\nvoid mglDataC::Set(const double * A, long NX, long NY = 1, long NZ = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const double* A=(const double*)Luna< void >::check(L,2);
		long NX=(long)lua_tointeger(L,3);
		long NY=luatop>3 ? (long)lua_tointeger(L,4) : (long)1;
		long NZ=luatop>4 ? (long)lua_tointeger(L,5) : (long)1;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Set(const double *, long, long, long). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Set(A, NX, NY, NZ);

		return 0;
	}

	// void mglDataC::Set(const dual * A, long NX, long NY = 1, long NZ = 1)
	static int _bind_Set_overload_3(lua_State *L) {
		if (!_lg_typecheck_Set_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Set(const dual * A, long NX, long NY = 1, long NZ = 1) function, expected prototype:\nvoid mglDataC::Set(const dual * A, long NX, long NY = 1, long NZ = 1)\nClass arguments details:\narg 1 ID = 3094652\n");
		}

		int luatop = lua_gettop(L);

		const dual* A=(Luna< std::complex< double > >::checkSubType< dual >(L,2));
		long NX=(long)lua_tointeger(L,3);
		long NY=luatop>3 ? (long)lua_tointeger(L,4) : (long)1;
		long NZ=luatop>4 ? (long)lua_tointeger(L,5) : (long)1;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Set(const dual *, long, long, long). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Set(A, NX, NY, NZ);

		return 0;
	}

	// void mglDataC::Set(const char * str, long NX, long NY = 1, long NZ = 1)
	static int _bind_Set_overload_4(lua_State *L) {
		if (!_lg_typecheck_Set_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Set(const char * str, long NX, long NY = 1, long NZ = 1) function, expected prototype:\nvoid mglDataC::Set(const char * str, long NX, long NY = 1, long NZ = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * str=(const char *)lua_tostring(L,2);
		long NX=(long)lua_tointeger(L,3);
		long NY=luatop>3 ? (long)lua_tointeger(L,4) : (long)1;
		long NZ=luatop>4 ? (long)lua_tointeger(L,5) : (long)1;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Set(const char *, long, long, long). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Set(str, NX, NY, NZ);

		return 0;
	}

	// void mglDataC::Set(const mglDataA * dat)
	static int _bind_Set_overload_5(lua_State *L) {
		if (!_lg_typecheck_Set_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Set(const mglDataA * dat) function, expected prototype:\nvoid mglDataC::Set(const mglDataA * dat)\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		const mglDataA* dat=(Luna< mglDataA >::check(L,2));

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Set(const mglDataA *). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Set(dat);

		return 0;
	}

	// void mglDataC::Set(const mglDataA & dat)
	static int _bind_Set_overload_6(lua_State *L) {
		if (!_lg_typecheck_Set_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Set(const mglDataA & dat) function, expected prototype:\nvoid mglDataC::Set(const mglDataA & dat)\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		const mglDataA* dat_ptr=(Luna< mglDataA >::check(L,2));
		if( !dat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dat in mglDataC::Set function");
		}
		const mglDataA & dat=*dat_ptr;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Set(const mglDataA &). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Set(dat);

		return 0;
	}

	// void mglDataC::Set(const mglDataA & re, const mglDataA & im)
	static int _bind_Set_overload_7(lua_State *L) {
		if (!_lg_typecheck_Set_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Set(const mglDataA & re, const mglDataA & im) function, expected prototype:\nvoid mglDataC::Set(const mglDataA & re, const mglDataA & im)\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		const mglDataA* re_ptr=(Luna< mglDataA >::check(L,2));
		if( !re_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg re in mglDataC::Set function");
		}
		const mglDataA & re=*re_ptr;
		const mglDataA* im_ptr=(Luna< mglDataA >::check(L,3));
		if( !im_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg im in mglDataC::Set function");
		}
		const mglDataA & im=*im_ptr;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Set(const mglDataA &, const mglDataA &). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Set(re, im);

		return 0;
	}

	// void mglDataC::Set(const mglDataA * re, const mglDataA * im)
	static int _bind_Set_overload_8(lua_State *L) {
		if (!_lg_typecheck_Set_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Set(const mglDataA * re, const mglDataA * im) function, expected prototype:\nvoid mglDataC::Set(const mglDataA * re, const mglDataA * im)\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		const mglDataA* re=(Luna< mglDataA >::check(L,2));
		const mglDataA* im=(Luna< mglDataA >::check(L,3));

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Set(const mglDataA *, const mglDataA *). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Set(re, im);

		return 0;
	}

	// void mglDataC::Set(const std::vector< int > & d)
	static int _bind_Set_overload_9(lua_State *L) {
		if (!_lg_typecheck_Set_overload_9(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Set(const std::vector< int > & d) function, expected prototype:\nvoid mglDataC::Set(const std::vector< int > & d)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		const std::vector< int >* d_ptr=(Luna< std::vector< int > >::check(L,2));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglDataC::Set function");
		}
		const std::vector< int > & d=*d_ptr;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Set(const std::vector< int > &). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Set(d);

		return 0;
	}

	// void mglDataC::Set(const std::vector< float > & d)
	static int _bind_Set_overload_10(lua_State *L) {
		if (!_lg_typecheck_Set_overload_10(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Set(const std::vector< float > & d) function, expected prototype:\nvoid mglDataC::Set(const std::vector< float > & d)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		const std::vector< float >* d_ptr=(Luna< std::vector< float > >::check(L,2));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglDataC::Set function");
		}
		const std::vector< float > & d=*d_ptr;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Set(const std::vector< float > &). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Set(d);

		return 0;
	}

	// void mglDataC::Set(const std::vector< double > & d)
	static int _bind_Set_overload_11(lua_State *L) {
		if (!_lg_typecheck_Set_overload_11(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Set(const std::vector< double > & d) function, expected prototype:\nvoid mglDataC::Set(const std::vector< double > & d)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		const std::vector< double >* d_ptr=(Luna< std::vector< double > >::check(L,2));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglDataC::Set function");
		}
		const std::vector< double > & d=*d_ptr;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Set(const std::vector< double > &). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Set(d);

		return 0;
	}

	// void mglDataC::Set(const std::vector< dual > & d)
	static int _bind_Set_overload_12(lua_State *L) {
		if (!_lg_typecheck_Set_overload_12(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Set(const std::vector< dual > & d) function, expected prototype:\nvoid mglDataC::Set(const std::vector< dual > & d)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		const std::vector< dual >* d_ptr=(Luna< std::vector< dual > >::check(L,2));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglDataC::Set function");
		}
		const std::vector< dual > & d=*d_ptr;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Set(const std::vector< dual > &). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Set(d);

		return 0;
	}

	// Overload binder for mglDataC::Set
	static int _bind_Set(lua_State *L) {
		if (_lg_typecheck_Set_overload_1(L)) return _bind_Set_overload_1(L);
		if (_lg_typecheck_Set_overload_2(L)) return _bind_Set_overload_2(L);
		if (_lg_typecheck_Set_overload_3(L)) return _bind_Set_overload_3(L);
		if (_lg_typecheck_Set_overload_4(L)) return _bind_Set_overload_4(L);
		if (_lg_typecheck_Set_overload_5(L)) return _bind_Set_overload_5(L);
		if (_lg_typecheck_Set_overload_6(L)) return _bind_Set_overload_6(L);
		if (_lg_typecheck_Set_overload_7(L)) return _bind_Set_overload_7(L);
		if (_lg_typecheck_Set_overload_8(L)) return _bind_Set_overload_8(L);
		if (_lg_typecheck_Set_overload_9(L)) return _bind_Set_overload_9(L);
		if (_lg_typecheck_Set_overload_10(L)) return _bind_Set_overload_10(L);
		if (_lg_typecheck_Set_overload_11(L)) return _bind_Set_overload_11(L);
		if (_lg_typecheck_Set_overload_12(L)) return _bind_Set_overload_12(L);

		luaL_error(L, "error in function Set, cannot match any of the overloads for function Set:\n  Set(const float *, long, long, long)\n  Set(const double *, long, long, long)\n  Set(const dual *, long, long, long)\n  Set(const char *, long, long, long)\n  Set(const mglDataA *)\n  Set(const mglDataA &)\n  Set(const mglDataA &, const mglDataA &)\n  Set(const mglDataA *, const mglDataA *)\n  Set(const std::vector< int > &)\n  Set(const std::vector< float > &)\n  Set(const std::vector< double > &)\n  Set(const std::vector< dual > &)\n");
		return 0;
	}

	// void mglDataC::SetAmpl(const mglDataA & ampl, const mglDataA & phase)
	static int _bind_SetAmpl(lua_State *L) {
		if (!_lg_typecheck_SetAmpl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::SetAmpl(const mglDataA & ampl, const mglDataA & phase) function, expected prototype:\nvoid mglDataC::SetAmpl(const mglDataA & ampl, const mglDataA & phase)\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		const mglDataA* ampl_ptr=(Luna< mglDataA >::check(L,2));
		if( !ampl_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ampl in mglDataC::SetAmpl function");
		}
		const mglDataA & ampl=*ampl_ptr;
		const mglDataA* phase_ptr=(Luna< mglDataA >::check(L,3));
		if( !phase_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg phase in mglDataC::SetAmpl function");
		}
		const mglDataA & phase=*phase_ptr;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::SetAmpl(const mglDataA &, const mglDataA &). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->SetAmpl(ampl, phase);

		return 0;
	}

	// void mglDataC::Create(long mx, long my = 1, long mz = 1)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Create(long mx, long my = 1, long mz = 1) function, expected prototype:\nvoid mglDataC::Create(long mx, long my = 1, long mz = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long mx=(long)lua_tointeger(L,2);
		long my=luatop>2 ? (long)lua_tointeger(L,3) : (long)1;
		long mz=luatop>3 ? (long)lua_tointeger(L,4) : (long)1;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Create(long, long, long). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Create(mx, my, mz);

		return 0;
	}

	// void mglDataC::Rearrange(long mx, long my = 0, long mz = 0)
	static int _bind_Rearrange(lua_State *L) {
		if (!_lg_typecheck_Rearrange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Rearrange(long mx, long my = 0, long mz = 0) function, expected prototype:\nvoid mglDataC::Rearrange(long mx, long my = 0, long mz = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long mx=(long)lua_tointeger(L,2);
		long my=luatop>2 ? (long)lua_tointeger(L,3) : (long)0;
		long mz=luatop>3 ? (long)lua_tointeger(L,4) : (long)0;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Rearrange(long, long, long). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Rearrange(mx, my, mz);

		return 0;
	}

	// void mglDataC::Transpose(const char * dim = "yx")
	static int _bind_Transpose(lua_State *L) {
		if (!_lg_typecheck_Transpose(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Transpose(const char * dim = \"yx\") function, expected prototype:\nvoid mglDataC::Transpose(const char * dim = \"yx\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * dim=luatop>1 ? (const char *)lua_tostring(L,2) : (const char*)"yx";

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Transpose(const char *). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Transpose(dim);

		return 0;
	}

	// void mglDataC::Extend(long n1, long n2 = 0)
	static int _bind_Extend(lua_State *L) {
		if (!_lg_typecheck_Extend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Extend(long n1, long n2 = 0) function, expected prototype:\nvoid mglDataC::Extend(long n1, long n2 = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long n1=(long)lua_tointeger(L,2);
		long n2=luatop>2 ? (long)lua_tointeger(L,3) : (long)0;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Extend(long, long). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Extend(n1, n2);

		return 0;
	}

	// void mglDataC::Squeeze(long rx, long ry = 1, long rz = 1, bool smooth = false)
	static int _bind_Squeeze(lua_State *L) {
		if (!_lg_typecheck_Squeeze(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Squeeze(long rx, long ry = 1, long rz = 1, bool smooth = false) function, expected prototype:\nvoid mglDataC::Squeeze(long rx, long ry = 1, long rz = 1, bool smooth = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long rx=(long)lua_tointeger(L,2);
		long ry=luatop>2 ? (long)lua_tointeger(L,3) : (long)1;
		long rz=luatop>3 ? (long)lua_tointeger(L,4) : (long)1;
		bool smooth=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Squeeze(long, long, long, bool). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Squeeze(rx, ry, rz, smooth);

		return 0;
	}

	// void mglDataC::Crop(long n1, long n2, char dir = 'x')
	static int _bind_Crop(lua_State *L) {
		if (!_lg_typecheck_Crop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Crop(long n1, long n2, char dir = 'x') function, expected prototype:\nvoid mglDataC::Crop(long n1, long n2, char dir = 'x')\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long n1=(long)lua_tointeger(L,2);
		long n2=(long)lua_tointeger(L,3);
		char dir=luatop>3 ? (char)lua_tointeger(L,4) : (char)'x';

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Crop(long, long, char). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Crop(n1, n2, dir);

		return 0;
	}

	// void mglDataC::Insert(char dir, long at = 0, long num = 1)
	static int _bind_Insert(lua_State *L) {
		if (!_lg_typecheck_Insert(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Insert(char dir, long at = 0, long num = 1) function, expected prototype:\nvoid mglDataC::Insert(char dir, long at = 0, long num = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		char dir=(char)lua_tointeger(L,2);
		long at=luatop>2 ? (long)lua_tointeger(L,3) : (long)0;
		long num=luatop>3 ? (long)lua_tointeger(L,4) : (long)1;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Insert(char, long, long). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Insert(dir, at, num);

		return 0;
	}

	// void mglDataC::Delete(char dir, long at = 0, long num = 1)
	static int _bind_Delete(lua_State *L) {
		if (!_lg_typecheck_Delete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Delete(char dir, long at = 0, long num = 1) function, expected prototype:\nvoid mglDataC::Delete(char dir, long at = 0, long num = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		char dir=(char)lua_tointeger(L,2);
		long at=luatop>2 ? (long)lua_tointeger(L,3) : (long)0;
		long num=luatop>3 ? (long)lua_tointeger(L,4) : (long)1;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Delete(char, long, long). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Delete(dir, at, num);

		return 0;
	}

	// void mglDataC::Modify(const char * eq, long dim = 0)
	static int _bind_Modify_overload_1(lua_State *L) {
		if (!_lg_typecheck_Modify_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Modify(const char * eq, long dim = 0) function, expected prototype:\nvoid mglDataC::Modify(const char * eq, long dim = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * eq=(const char *)lua_tostring(L,2);
		long dim=luatop>2 ? (long)lua_tointeger(L,3) : (long)0;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Modify(const char *, long). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Modify(eq, dim);

		return 0;
	}

	// void mglDataC::Modify(const char * eq, const mglDataA & vdat, const mglDataA & wdat)
	static int _bind_Modify_overload_2(lua_State *L) {
		if (!_lg_typecheck_Modify_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Modify(const char * eq, const mglDataA & vdat, const mglDataA & wdat) function, expected prototype:\nvoid mglDataC::Modify(const char * eq, const mglDataA & vdat, const mglDataA & wdat)\nClass arguments details:\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		const char * eq=(const char *)lua_tostring(L,2);
		const mglDataA* vdat_ptr=(Luna< mglDataA >::check(L,3));
		if( !vdat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vdat in mglDataC::Modify function");
		}
		const mglDataA & vdat=*vdat_ptr;
		const mglDataA* wdat_ptr=(Luna< mglDataA >::check(L,4));
		if( !wdat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wdat in mglDataC::Modify function");
		}
		const mglDataA & wdat=*wdat_ptr;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Modify(const char *, const mglDataA &, const mglDataA &). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Modify(eq, vdat, wdat);

		return 0;
	}

	// void mglDataC::Modify(const char * eq, const mglDataA & vdat)
	static int _bind_Modify_overload_3(lua_State *L) {
		if (!_lg_typecheck_Modify_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Modify(const char * eq, const mglDataA & vdat) function, expected prototype:\nvoid mglDataC::Modify(const char * eq, const mglDataA & vdat)\nClass arguments details:\narg 2 ID = 45413231\n");
		}

		const char * eq=(const char *)lua_tostring(L,2);
		const mglDataA* vdat_ptr=(Luna< mglDataA >::check(L,3));
		if( !vdat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vdat in mglDataC::Modify function");
		}
		const mglDataA & vdat=*vdat_ptr;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Modify(const char *, const mglDataA &). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Modify(eq, vdat);

		return 0;
	}

	// Overload binder for mglDataC::Modify
	static int _bind_Modify(lua_State *L) {
		if (_lg_typecheck_Modify_overload_1(L)) return _bind_Modify_overload_1(L);
		if (_lg_typecheck_Modify_overload_2(L)) return _bind_Modify_overload_2(L);
		if (_lg_typecheck_Modify_overload_3(L)) return _bind_Modify_overload_3(L);

		luaL_error(L, "error in function Modify, cannot match any of the overloads for function Modify:\n  Modify(const char *, long)\n  Modify(const char *, const mglDataA &, const mglDataA &)\n  Modify(const char *, const mglDataA &)\n");
		return 0;
	}

	// void mglDataC::Fill(mglBase * gr, const char * eq, const char * opt = "")
	static int _bind_Fill_overload_1(lua_State *L) {
		if (!_lg_typecheck_Fill_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Fill(mglBase * gr, const char * eq, const char * opt = \"\") function, expected prototype:\nvoid mglDataC::Fill(mglBase * gr, const char * eq, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 88502113\n");
		}

		int luatop = lua_gettop(L);

		mglBase* gr=(Luna< mglBase >::check(L,2));
		const char * eq=(const char *)lua_tostring(L,3);
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : (const char*)"";

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Fill(mglBase *, const char *, const char *). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Fill(gr, eq, opt);

		return 0;
	}

	// void mglDataC::Fill(mglBase * gr, const char * eq, const mglDataA & vdat, const char * opt = "")
	static int _bind_Fill_overload_2(lua_State *L) {
		if (!_lg_typecheck_Fill_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Fill(mglBase * gr, const char * eq, const mglDataA & vdat, const char * opt = \"\") function, expected prototype:\nvoid mglDataC::Fill(mglBase * gr, const char * eq, const mglDataA & vdat, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 88502113\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		mglBase* gr=(Luna< mglBase >::check(L,2));
		const char * eq=(const char *)lua_tostring(L,3);
		const mglDataA* vdat_ptr=(Luna< mglDataA >::check(L,4));
		if( !vdat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vdat in mglDataC::Fill function");
		}
		const mglDataA & vdat=*vdat_ptr;
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : (const char*)"";

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Fill(mglBase *, const char *, const mglDataA &, const char *). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Fill(gr, eq, vdat, opt);

		return 0;
	}

	// void mglDataC::Fill(mglBase * gr, const char * eq, const mglDataA & vdat, const mglDataA & wdat, const char * opt = "")
	static int _bind_Fill_overload_3(lua_State *L) {
		if (!_lg_typecheck_Fill_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Fill(mglBase * gr, const char * eq, const mglDataA & vdat, const mglDataA & wdat, const char * opt = \"\") function, expected prototype:\nvoid mglDataC::Fill(mglBase * gr, const char * eq, const mglDataA & vdat, const mglDataA & wdat, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 88502113\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		mglBase* gr=(Luna< mglBase >::check(L,2));
		const char * eq=(const char *)lua_tostring(L,3);
		const mglDataA* vdat_ptr=(Luna< mglDataA >::check(L,4));
		if( !vdat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vdat in mglDataC::Fill function");
		}
		const mglDataA & vdat=*vdat_ptr;
		const mglDataA* wdat_ptr=(Luna< mglDataA >::check(L,5));
		if( !wdat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wdat in mglDataC::Fill function");
		}
		const mglDataA & wdat=*wdat_ptr;
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : (const char*)"";

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Fill(mglBase *, const char *, const mglDataA &, const mglDataA &, const char *). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Fill(gr, eq, vdat, wdat, opt);

		return 0;
	}

	// void mglDataC::Fill(dual x1, dual x2 = NaN, char dir = 'x')
	static int _bind_Fill_overload_4(lua_State *L) {
		if (!_lg_typecheck_Fill_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Fill(dual x1, dual x2 = NaN, char dir = 'x') function, expected prototype:\nvoid mglDataC::Fill(dual x1, dual x2 = NaN, char dir = 'x')\nClass arguments details:\narg 1 ID = 3094652\narg 2 ID = 3094652\n");
		}

		int luatop = lua_gettop(L);

		dual* x1_ptr=(Luna< std::complex< double > >::checkSubType< dual >(L,2));
		if( !x1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x1 in mglDataC::Fill function");
		}
		dual x1=*x1_ptr;
		dual* x2_ptr=luatop>2 ? (Luna< std::complex< double > >::checkSubType< dual >(L,3)) : NULL;
		if( luatop>2 && !x2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x2 in mglDataC::Fill function");
		}
		dual x2=luatop>2 ? *x2_ptr : (dual)NaN;
		char dir=luatop>3 ? (char)lua_tointeger(L,4) : (char)'x';

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Fill(dual, dual, char). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Fill(x1, x2, dir);

		return 0;
	}

	// Overload binder for mglDataC::Fill
	static int _bind_Fill(lua_State *L) {
		if (_lg_typecheck_Fill_overload_1(L)) return _bind_Fill_overload_1(L);
		if (_lg_typecheck_Fill_overload_2(L)) return _bind_Fill_overload_2(L);
		if (_lg_typecheck_Fill_overload_3(L)) return _bind_Fill_overload_3(L);
		if (_lg_typecheck_Fill_overload_4(L)) return _bind_Fill_overload_4(L);

		luaL_error(L, "error in function Fill, cannot match any of the overloads for function Fill:\n  Fill(mglBase *, const char *, const char *)\n  Fill(mglBase *, const char *, const mglDataA &, const char *)\n  Fill(mglBase *, const char *, const mglDataA &, const mglDataA &, const char *)\n  Fill(dual, dual, char)\n");
		return 0;
	}

	// void mglDataC::SetColumnId(const char * ids)
	static int _bind_SetColumnId(lua_State *L) {
		if (!_lg_typecheck_SetColumnId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::SetColumnId(const char * ids) function, expected prototype:\nvoid mglDataC::SetColumnId(const char * ids)\nClass arguments details:\n");
		}

		const char * ids=(const char *)lua_tostring(L,2);

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::SetColumnId(const char *). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->SetColumnId(ids);

		return 0;
	}

	// void mglDataC::NewId()
	static int _bind_NewId(lua_State *L) {
		if (!_lg_typecheck_NewId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::NewId() function, expected prototype:\nvoid mglDataC::NewId()\nClass arguments details:\n");
		}


		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::NewId(). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->NewId();

		return 0;
	}

	// bool mglDataC::Read(const char * fname)
	static int _bind_Read_overload_1(lua_State *L) {
		if (!_lg_typecheck_Read_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglDataC::Read(const char * fname) function, expected prototype:\nbool mglDataC::Read(const char * fname)\nClass arguments details:\n");
		}

		const char * fname=(const char *)lua_tostring(L,2);

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglDataC::Read(const char *). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		bool lret = self->Read(fname);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool mglDataC::Read(const char * fname, long mx, long my = 1, long mz = 1)
	static int _bind_Read_overload_2(lua_State *L) {
		if (!_lg_typecheck_Read_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglDataC::Read(const char * fname, long mx, long my = 1, long mz = 1) function, expected prototype:\nbool mglDataC::Read(const char * fname, long mx, long my = 1, long mz = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		long mx=(long)lua_tointeger(L,3);
		long my=luatop>3 ? (long)lua_tointeger(L,4) : (long)1;
		long mz=luatop>4 ? (long)lua_tointeger(L,5) : (long)1;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglDataC::Read(const char *, long, long, long). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		bool lret = self->Read(fname, mx, my, mz);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for mglDataC::Read
	static int _bind_Read(lua_State *L) {
		if (_lg_typecheck_Read_overload_1(L)) return _bind_Read_overload_1(L);
		if (_lg_typecheck_Read_overload_2(L)) return _bind_Read_overload_2(L);

		luaL_error(L, "error in function Read, cannot match any of the overloads for function Read:\n  Read(const char *)\n  Read(const char *, long, long, long)\n");
		return 0;
	}

	// void mglDataC::Save(const char * fname, long ns = -1) const
	static int _bind_Save(lua_State *L) {
		if (!_lg_typecheck_Save(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Save(const char * fname, long ns = -1) const function, expected prototype:\nvoid mglDataC::Save(const char * fname, long ns = -1) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		long ns=luatop>2 ? (long)lua_tointeger(L,3) : (long)-1;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Save(const char *, long) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Save(fname, ns);

		return 0;
	}

	// bool mglDataC::ReadRange(const char * templ, double from, double to, double step = 1, bool as_slice = false)
	static int _bind_ReadRange(lua_State *L) {
		if (!_lg_typecheck_ReadRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglDataC::ReadRange(const char * templ, double from, double to, double step = 1, bool as_slice = false) function, expected prototype:\nbool mglDataC::ReadRange(const char * templ, double from, double to, double step = 1, bool as_slice = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * templ=(const char *)lua_tostring(L,2);
		double from=(double)lua_tonumber(L,3);
		double to=(double)lua_tonumber(L,4);
		double step=luatop>4 ? (double)lua_tonumber(L,5) : (double)1;
		bool as_slice=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglDataC::ReadRange(const char *, double, double, double, bool). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		bool lret = self->ReadRange(templ, from, to, step, as_slice);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool mglDataC::ReadAll(const char * templ, bool as_slice = false)
	static int _bind_ReadAll(lua_State *L) {
		if (!_lg_typecheck_ReadAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglDataC::ReadAll(const char * templ, bool as_slice = false) function, expected prototype:\nbool mglDataC::ReadAll(const char * templ, bool as_slice = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * templ=(const char *)lua_tostring(L,2);
		bool as_slice=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglDataC::ReadAll(const char *, bool). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		bool lret = self->ReadAll(templ, as_slice);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool mglDataC::ReadMat(const char * fname, long dim = 2)
	static int _bind_ReadMat(lua_State *L) {
		if (!_lg_typecheck_ReadMat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglDataC::ReadMat(const char * fname, long dim = 2) function, expected prototype:\nbool mglDataC::ReadMat(const char * fname, long dim = 2)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		long dim=luatop>2 ? (long)lua_tointeger(L,3) : (long)2;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglDataC::ReadMat(const char *, long). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		bool lret = self->ReadMat(fname, dim);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int mglDataC::ReadHDF(const char * fname, const char * data)
	static int _bind_ReadHDF(lua_State *L) {
		if (!_lg_typecheck_ReadHDF(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglDataC::ReadHDF(const char * fname, const char * data) function, expected prototype:\nint mglDataC::ReadHDF(const char * fname, const char * data)\nClass arguments details:\n");
		}

		const char * fname=(const char *)lua_tostring(L,2);
		const char * data=(const char *)lua_tostring(L,3);

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglDataC::ReadHDF(const char *, const char *). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		int lret = self->ReadHDF(fname, data);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglDataC::SaveHDF(const char * fname, const char * data, bool rewrite = false) const
	static int _bind_SaveHDF(lua_State *L) {
		if (!_lg_typecheck_SaveHDF(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::SaveHDF(const char * fname, const char * data, bool rewrite = false) const function, expected prototype:\nvoid mglDataC::SaveHDF(const char * fname, const char * data, bool rewrite = false) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		const char * data=(const char *)lua_tostring(L,3);
		bool rewrite=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::SaveHDF(const char *, const char *, bool) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->SaveHDF(fname, data, rewrite);

		return 0;
	}

	// mglData mglDataC::Real() const
	static int _bind_Real(lua_State *L) {
		if (!_lg_typecheck_Real(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglDataC::Real() const function, expected prototype:\nmglData mglDataC::Real() const\nClass arguments details:\n");
		}


		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglDataC::Real() const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		mglData stack_lret = self->Real();
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglDataC::Imag() const
	static int _bind_Imag(lua_State *L) {
		if (!_lg_typecheck_Imag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglDataC::Imag() const function, expected prototype:\nmglData mglDataC::Imag() const\nClass arguments details:\n");
		}


		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglDataC::Imag() const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		mglData stack_lret = self->Imag();
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglDataC::Abs() const
	static int _bind_Abs(lua_State *L) {
		if (!_lg_typecheck_Abs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglDataC::Abs() const function, expected prototype:\nmglData mglDataC::Abs() const\nClass arguments details:\n");
		}


		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglDataC::Abs() const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		mglData stack_lret = self->Abs();
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglDataC::Arg() const
	static int _bind_Arg(lua_State *L) {
		if (!_lg_typecheck_Arg(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglDataC::Arg() const function, expected prototype:\nmglData mglDataC::Arg() const\nClass arguments details:\n");
		}


		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglDataC::Arg() const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		mglData stack_lret = self->Arg();
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglDataC::Column(const char * eq) const
	static int _bind_Column(lua_State *L) {
		if (!_lg_typecheck_Column(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglDataC::Column(const char * eq) const function, expected prototype:\nmglData mglDataC::Column(const char * eq) const\nClass arguments details:\n");
		}

		const char * eq=(const char *)lua_tostring(L,2);

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglDataC::Column(const char *) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		mglData stack_lret = self->Column(eq);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglDataC::Momentum(char dir, const char * how) const
	static int _bind_Momentum(lua_State *L) {
		if (!_lg_typecheck_Momentum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglDataC::Momentum(char dir, const char * how) const function, expected prototype:\nmglData mglDataC::Momentum(char dir, const char * how) const\nClass arguments details:\n");
		}

		char dir=(char)lua_tointeger(L,2);
		const char * how=(const char *)lua_tostring(L,3);

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglDataC::Momentum(char, const char *) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		mglData stack_lret = self->Momentum(dir, how);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglDataC::SubData(long xx, long yy = -1, long zz = -1) const
	static int _bind_SubData_overload_1(lua_State *L) {
		if (!_lg_typecheck_SubData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglDataC::SubData(long xx, long yy = -1, long zz = -1) const function, expected prototype:\nmglData mglDataC::SubData(long xx, long yy = -1, long zz = -1) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long xx=(long)lua_tointeger(L,2);
		long yy=luatop>2 ? (long)lua_tointeger(L,3) : (long)-1;
		long zz=luatop>3 ? (long)lua_tointeger(L,4) : (long)-1;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglDataC::SubData(long, long, long) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		mglData stack_lret = self->SubData(xx, yy, zz);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglDataC::SubData(const mglDataA & xx, const mglDataA & yy, const mglDataA & zz) const
	static int _bind_SubData_overload_2(lua_State *L) {
		if (!_lg_typecheck_SubData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglDataC::SubData(const mglDataA & xx, const mglDataA & yy, const mglDataA & zz) const function, expected prototype:\nmglData mglDataC::SubData(const mglDataA & xx, const mglDataA & yy, const mglDataA & zz) const\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		const mglDataA* xx_ptr=(Luna< mglDataA >::check(L,2));
		if( !xx_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xx in mglDataC::SubData function");
		}
		const mglDataA & xx=*xx_ptr;
		const mglDataA* yy_ptr=(Luna< mglDataA >::check(L,3));
		if( !yy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg yy in mglDataC::SubData function");
		}
		const mglDataA & yy=*yy_ptr;
		const mglDataA* zz_ptr=(Luna< mglDataA >::check(L,4));
		if( !zz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg zz in mglDataC::SubData function");
		}
		const mglDataA & zz=*zz_ptr;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglDataC::SubData(const mglDataA &, const mglDataA &, const mglDataA &) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		mglData stack_lret = self->SubData(xx, yy, zz);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// Overload binder for mglDataC::SubData
	static int _bind_SubData(lua_State *L) {
		if (_lg_typecheck_SubData_overload_1(L)) return _bind_SubData_overload_1(L);
		if (_lg_typecheck_SubData_overload_2(L)) return _bind_SubData_overload_2(L);

		luaL_error(L, "error in function SubData, cannot match any of the overloads for function SubData:\n  SubData(long, long, long)\n  SubData(const mglDataA &, const mglDataA &, const mglDataA &)\n");
		return 0;
	}

	// mglData mglDataC::Trace() const
	static int _bind_Trace(lua_State *L) {
		if (!_lg_typecheck_Trace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglDataC::Trace() const function, expected prototype:\nmglData mglDataC::Trace() const\nClass arguments details:\n");
		}


		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglDataC::Trace() const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		mglData stack_lret = self->Trace();
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglDataC::Hist(long n, double v1 = 0, double v2 = 1, long nsub = 0) const
	static int _bind_Hist_overload_1(lua_State *L) {
		if (!_lg_typecheck_Hist_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglDataC::Hist(long n, double v1 = 0, double v2 = 1, long nsub = 0) const function, expected prototype:\nmglData mglDataC::Hist(long n, double v1 = 0, double v2 = 1, long nsub = 0) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long n=(long)lua_tointeger(L,2);
		double v1=luatop>2 ? (double)lua_tonumber(L,3) : (double)0;
		double v2=luatop>3 ? (double)lua_tonumber(L,4) : (double)1;
		long nsub=luatop>4 ? (long)lua_tointeger(L,5) : (long)0;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglDataC::Hist(long, double, double, long) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		mglData stack_lret = self->Hist(n, v1, v2, nsub);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglDataC::Hist(const mglDataA & w, long n, double v1 = 0, double v2 = 1, long nsub = 0) const
	static int _bind_Hist_overload_2(lua_State *L) {
		if (!_lg_typecheck_Hist_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglDataC::Hist(const mglDataA & w, long n, double v1 = 0, double v2 = 1, long nsub = 0) const function, expected prototype:\nmglData mglDataC::Hist(const mglDataA & w, long n, double v1 = 0, double v2 = 1, long nsub = 0) const\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* w_ptr=(Luna< mglDataA >::check(L,2));
		if( !w_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg w in mglDataC::Hist function");
		}
		const mglDataA & w=*w_ptr;
		long n=(long)lua_tointeger(L,3);
		double v1=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;
		double v2=luatop>4 ? (double)lua_tonumber(L,5) : (double)1;
		long nsub=luatop>5 ? (long)lua_tointeger(L,6) : (long)0;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglDataC::Hist(const mglDataA &, long, double, double, long) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		mglData stack_lret = self->Hist(w, n, v1, v2, nsub);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// Overload binder for mglDataC::Hist
	static int _bind_Hist(lua_State *L) {
		if (_lg_typecheck_Hist_overload_1(L)) return _bind_Hist_overload_1(L);
		if (_lg_typecheck_Hist_overload_2(L)) return _bind_Hist_overload_2(L);

		luaL_error(L, "error in function Hist, cannot match any of the overloads for function Hist:\n  Hist(long, double, double, long)\n  Hist(const mglDataA &, long, double, double, long)\n");
		return 0;
	}

	// mglData mglDataC::Sum(const char * dir) const
	static int _bind_Sum(lua_State *L) {
		if (!_lg_typecheck_Sum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglDataC::Sum(const char * dir) const function, expected prototype:\nmglData mglDataC::Sum(const char * dir) const\nClass arguments details:\n");
		}

		const char * dir=(const char *)lua_tostring(L,2);

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglDataC::Sum(const char *) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		mglData stack_lret = self->Sum(dir);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglDataC::Max(const char * dir) const
	static int _bind_Max(lua_State *L) {
		if (!_lg_typecheck_Max(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglDataC::Max(const char * dir) const function, expected prototype:\nmglData mglDataC::Max(const char * dir) const\nClass arguments details:\n");
		}

		const char * dir=(const char *)lua_tostring(L,2);

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglDataC::Max(const char *) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		mglData stack_lret = self->Max(dir);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglDataC::Min(const char * dir) const
	static int _bind_Min(lua_State *L) {
		if (!_lg_typecheck_Min(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglDataC::Min(const char * dir) const function, expected prototype:\nmglData mglDataC::Min(const char * dir) const\nClass arguments details:\n");
		}

		const char * dir=(const char *)lua_tostring(L,2);

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglDataC::Min(const char *) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		mglData stack_lret = self->Min(dir);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglDataC::Combine(const mglDataA & dat) const
	static int _bind_Combine(lua_State *L) {
		if (!_lg_typecheck_Combine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglDataC::Combine(const mglDataA & dat) const function, expected prototype:\nmglData mglDataC::Combine(const mglDataA & dat) const\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		const mglDataA* dat_ptr=(Luna< mglDataA >::check(L,2));
		if( !dat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dat in mglDataC::Combine function");
		}
		const mglDataA & dat=*dat_ptr;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglDataC::Combine(const mglDataA &) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		mglData stack_lret = self->Combine(dat);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglDataC::Resize(long mx, long my = 1, long mz = 1, double x1 = 0, double x2 = 1, double y1 = 0, double y2 = 1, double z1 = 0, double z2 = 1) const
	static int _bind_Resize(lua_State *L) {
		if (!_lg_typecheck_Resize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglDataC::Resize(long mx, long my = 1, long mz = 1, double x1 = 0, double x2 = 1, double y1 = 0, double y2 = 1, double z1 = 0, double z2 = 1) const function, expected prototype:\nmglData mglDataC::Resize(long mx, long my = 1, long mz = 1, double x1 = 0, double x2 = 1, double y1 = 0, double y2 = 1, double z1 = 0, double z2 = 1) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long mx=(long)lua_tointeger(L,2);
		long my=luatop>2 ? (long)lua_tointeger(L,3) : (long)1;
		long mz=luatop>3 ? (long)lua_tointeger(L,4) : (long)1;
		double x1=luatop>4 ? (double)lua_tonumber(L,5) : (double)0;
		double x2=luatop>5 ? (double)lua_tonumber(L,6) : (double)1;
		double y1=luatop>6 ? (double)lua_tonumber(L,7) : (double)0;
		double y2=luatop>7 ? (double)lua_tonumber(L,8) : (double)1;
		double z1=luatop>8 ? (double)lua_tonumber(L,9) : (double)0;
		double z2=luatop>9 ? (double)lua_tonumber(L,10) : (double)1;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglDataC::Resize(long, long, long, double, double, double, double, double, double) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		mglData stack_lret = self->Resize(mx, my, mz, x1, x2, y1, y2, z1, z2);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglDataC::Evaluate(const mglData & idat, bool norm = true) const
	static int _bind_Evaluate_overload_1(lua_State *L) {
		if (!_lg_typecheck_Evaluate_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglDataC::Evaluate(const mglData & idat, bool norm = true) const function, expected prototype:\nmglData mglDataC::Evaluate(const mglData & idat, bool norm = true) const\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglData* idat_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,2));
		if( !idat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg idat in mglDataC::Evaluate function");
		}
		const mglData & idat=*idat_ptr;
		bool norm=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglDataC::Evaluate(const mglData &, bool) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		mglData stack_lret = self->Evaluate(idat, norm);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglDataC::Evaluate(const mglData & idat, const mglData & jdat, bool norm = true) const
	static int _bind_Evaluate_overload_2(lua_State *L) {
		if (!_lg_typecheck_Evaluate_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglDataC::Evaluate(const mglData & idat, const mglData & jdat, bool norm = true) const function, expected prototype:\nmglData mglDataC::Evaluate(const mglData & idat, const mglData & jdat, bool norm = true) const\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglData* idat_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,2));
		if( !idat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg idat in mglDataC::Evaluate function");
		}
		const mglData & idat=*idat_ptr;
		const mglData* jdat_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,3));
		if( !jdat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg jdat in mglDataC::Evaluate function");
		}
		const mglData & jdat=*jdat_ptr;
		bool norm=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglDataC::Evaluate(const mglData &, const mglData &, bool) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		mglData stack_lret = self->Evaluate(idat, jdat, norm);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglDataC::Evaluate(const mglData & idat, const mglData & jdat, const mglData & kdat, bool norm = true) const
	static int _bind_Evaluate_overload_3(lua_State *L) {
		if (!_lg_typecheck_Evaluate_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglDataC::Evaluate(const mglData & idat, const mglData & jdat, const mglData & kdat, bool norm = true) const function, expected prototype:\nmglData mglDataC::Evaluate(const mglData & idat, const mglData & jdat, const mglData & kdat, bool norm = true) const\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglData* idat_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,2));
		if( !idat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg idat in mglDataC::Evaluate function");
		}
		const mglData & idat=*idat_ptr;
		const mglData* jdat_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,3));
		if( !jdat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg jdat in mglDataC::Evaluate function");
		}
		const mglData & jdat=*jdat_ptr;
		const mglData* kdat_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,4));
		if( !kdat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg kdat in mglDataC::Evaluate function");
		}
		const mglData & kdat=*kdat_ptr;
		bool norm=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)true;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglDataC::Evaluate(const mglData &, const mglData &, const mglData &, bool) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		mglData stack_lret = self->Evaluate(idat, jdat, kdat, norm);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// Overload binder for mglDataC::Evaluate
	static int _bind_Evaluate(lua_State *L) {
		if (_lg_typecheck_Evaluate_overload_1(L)) return _bind_Evaluate_overload_1(L);
		if (_lg_typecheck_Evaluate_overload_2(L)) return _bind_Evaluate_overload_2(L);
		if (_lg_typecheck_Evaluate_overload_3(L)) return _bind_Evaluate_overload_3(L);

		luaL_error(L, "error in function Evaluate, cannot match any of the overloads for function Evaluate:\n  Evaluate(const mglData &, bool)\n  Evaluate(const mglData &, const mglData &, bool)\n  Evaluate(const mglData &, const mglData &, const mglData &, bool)\n");
		return 0;
	}

	// void mglDataC::CumSum(const char * dir)
	static int _bind_CumSum(lua_State *L) {
		if (!_lg_typecheck_CumSum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::CumSum(const char * dir) function, expected prototype:\nvoid mglDataC::CumSum(const char * dir)\nClass arguments details:\n");
		}

		const char * dir=(const char *)lua_tostring(L,2);

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::CumSum(const char *). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->CumSum(dir);

		return 0;
	}

	// void mglDataC::Integral(const char * dir)
	static int _bind_Integral(lua_State *L) {
		if (!_lg_typecheck_Integral(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Integral(const char * dir) function, expected prototype:\nvoid mglDataC::Integral(const char * dir)\nClass arguments details:\n");
		}

		const char * dir=(const char *)lua_tostring(L,2);

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Integral(const char *). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Integral(dir);

		return 0;
	}

	// void mglDataC::Diff(const char * dir)
	static int _bind_Diff(lua_State *L) {
		if (!_lg_typecheck_Diff(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Diff(const char * dir) function, expected prototype:\nvoid mglDataC::Diff(const char * dir)\nClass arguments details:\n");
		}

		const char * dir=(const char *)lua_tostring(L,2);

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Diff(const char *). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Diff(dir);

		return 0;
	}

	// void mglDataC::Diff2(const char * dir)
	static int _bind_Diff2(lua_State *L) {
		if (!_lg_typecheck_Diff2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Diff2(const char * dir) function, expected prototype:\nvoid mglDataC::Diff2(const char * dir)\nClass arguments details:\n");
		}

		const char * dir=(const char *)lua_tostring(L,2);

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Diff2(const char *). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Diff2(dir);

		return 0;
	}

	// void mglDataC::Swap(const char * dir)
	static int _bind_Swap(lua_State *L) {
		if (!_lg_typecheck_Swap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Swap(const char * dir) function, expected prototype:\nvoid mglDataC::Swap(const char * dir)\nClass arguments details:\n");
		}

		const char * dir=(const char *)lua_tostring(L,2);

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Swap(const char *). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Swap(dir);

		return 0;
	}

	// void mglDataC::Roll(char dir, long num)
	static int _bind_Roll(lua_State *L) {
		if (!_lg_typecheck_Roll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Roll(char dir, long num) function, expected prototype:\nvoid mglDataC::Roll(char dir, long num)\nClass arguments details:\n");
		}

		char dir=(char)lua_tointeger(L,2);
		long num=(long)lua_tointeger(L,3);

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Roll(char, long). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Roll(dir, num);

		return 0;
	}

	// void mglDataC::Mirror(const char * dir)
	static int _bind_Mirror(lua_State *L) {
		if (!_lg_typecheck_Mirror(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Mirror(const char * dir) function, expected prototype:\nvoid mglDataC::Mirror(const char * dir)\nClass arguments details:\n");
		}

		const char * dir=(const char *)lua_tostring(L,2);

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Mirror(const char *). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Mirror(dir);

		return 0;
	}

	// void mglDataC::Smooth(const char * dirs = "xyz", double delta = 0)
	static int _bind_Smooth(lua_State *L) {
		if (!_lg_typecheck_Smooth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Smooth(const char * dirs = \"xyz\", double delta = 0) function, expected prototype:\nvoid mglDataC::Smooth(const char * dirs = \"xyz\", double delta = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * dirs=luatop>1 ? (const char *)lua_tostring(L,2) : (const char*)"xyz";
		double delta=luatop>2 ? (double)lua_tonumber(L,3) : (double)0;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Smooth(const char *, double). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Smooth(dirs, delta);

		return 0;
	}

	// void mglDataC::Hankel(const char * dir)
	static int _bind_Hankel(lua_State *L) {
		if (!_lg_typecheck_Hankel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::Hankel(const char * dir) function, expected prototype:\nvoid mglDataC::Hankel(const char * dir)\nClass arguments details:\n");
		}

		const char * dir=(const char *)lua_tostring(L,2);

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::Hankel(const char *). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->Hankel(dir);

		return 0;
	}

	// void mglDataC::FFT(const char * dir)
	static int _bind_FFT(lua_State *L) {
		if (!_lg_typecheck_FFT(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::FFT(const char * dir) function, expected prototype:\nvoid mglDataC::FFT(const char * dir)\nClass arguments details:\n");
		}

		const char * dir=(const char *)lua_tostring(L,2);

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::FFT(const char *). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->FFT(dir);

		return 0;
	}

	// dual mglDataC::Linear(double x, double y = 0, double z = 0) const
	static int _bind_Linear_overload_1(lua_State *L) {
		if (!_lg_typecheck_Linear_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dual mglDataC::Linear(double x, double y = 0, double z = 0) const function, expected prototype:\ndual mglDataC::Linear(double x, double y = 0, double z = 0) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double x=(double)lua_tonumber(L,2);
		double y=luatop>2 ? (double)lua_tonumber(L,3) : (double)0;
		double z=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call dual mglDataC::Linear(double, double, double) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		dual stack_lret = self->Linear(x, y, z);
		dual* lret = new dual(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< dual >::push(L,lret,true);

		return 1;
	}

	// dual mglDataC::Linear(mglPoint & dif, double x, double y = 0, double z = 0) const
	static int _bind_Linear_overload_2(lua_State *L) {
		if (!_lg_typecheck_Linear_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dual mglDataC::Linear(mglPoint & dif, double x, double y = 0, double z = 0) const function, expected prototype:\ndual mglDataC::Linear(mglPoint & dif, double x, double y = 0, double z = 0) const\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		mglPoint* dif_ptr=(Luna< mglPoint >::check(L,2));
		if( !dif_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dif in mglDataC::Linear function");
		}
		mglPoint & dif=*dif_ptr;
		double x=(double)lua_tonumber(L,3);
		double y=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;
		double z=luatop>4 ? (double)lua_tonumber(L,5) : (double)0;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call dual mglDataC::Linear(mglPoint &, double, double, double) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		dual stack_lret = self->Linear(dif, x, y, z);
		dual* lret = new dual(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< dual >::push(L,lret,true);

		return 1;
	}

	// Overload binder for mglDataC::Linear
	static int _bind_Linear(lua_State *L) {
		if (_lg_typecheck_Linear_overload_1(L)) return _bind_Linear_overload_1(L);
		if (_lg_typecheck_Linear_overload_2(L)) return _bind_Linear_overload_2(L);

		luaL_error(L, "error in function Linear, cannot match any of the overloads for function Linear:\n  Linear(double, double, double)\n  Linear(mglPoint &, double, double, double)\n");
		return 0;
	}

	// dual mglDataC::Linear1(double x, double y = 0, double z = 0) const
	static int _bind_Linear1_overload_1(lua_State *L) {
		if (!_lg_typecheck_Linear1_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dual mglDataC::Linear1(double x, double y = 0, double z = 0) const function, expected prototype:\ndual mglDataC::Linear1(double x, double y = 0, double z = 0) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double x=(double)lua_tonumber(L,2);
		double y=luatop>2 ? (double)lua_tonumber(L,3) : (double)0;
		double z=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call dual mglDataC::Linear1(double, double, double) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		dual stack_lret = self->Linear1(x, y, z);
		dual* lret = new dual(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< dual >::push(L,lret,true);

		return 1;
	}

	// dual mglDataC::Linear1(mglPoint & dif, double x, double y = 0, double z = 0) const
	static int _bind_Linear1_overload_2(lua_State *L) {
		if (!_lg_typecheck_Linear1_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dual mglDataC::Linear1(mglPoint & dif, double x, double y = 0, double z = 0) const function, expected prototype:\ndual mglDataC::Linear1(mglPoint & dif, double x, double y = 0, double z = 0) const\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		mglPoint* dif_ptr=(Luna< mglPoint >::check(L,2));
		if( !dif_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dif in mglDataC::Linear1 function");
		}
		mglPoint & dif=*dif_ptr;
		double x=(double)lua_tonumber(L,3);
		double y=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;
		double z=luatop>4 ? (double)lua_tonumber(L,5) : (double)0;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call dual mglDataC::Linear1(mglPoint &, double, double, double) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		dual stack_lret = self->Linear1(dif, x, y, z);
		dual* lret = new dual(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< dual >::push(L,lret,true);

		return 1;
	}

	// Overload binder for mglDataC::Linear1
	static int _bind_Linear1(lua_State *L) {
		if (_lg_typecheck_Linear1_overload_1(L)) return _bind_Linear1_overload_1(L);
		if (_lg_typecheck_Linear1_overload_2(L)) return _bind_Linear1_overload_2(L);

		luaL_error(L, "error in function Linear1, cannot match any of the overloads for function Linear1:\n  Linear1(double, double, double)\n  Linear1(mglPoint &, double, double, double)\n");
		return 0;
	}

	// double mglDataC::Solve(double val, bool use_spline = true, long i0 = 0) const
	static int _bind_Solve_overload_1(lua_State *L) {
		if (!_lg_typecheck_Solve_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglDataC::Solve(double val, bool use_spline = true, long i0 = 0) const function, expected prototype:\ndouble mglDataC::Solve(double val, bool use_spline = true, long i0 = 0) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double val=(double)lua_tonumber(L,2);
		bool use_spline=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;
		long i0=luatop>3 ? (long)lua_tointeger(L,4) : (long)0;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglDataC::Solve(double, bool, long) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		double lret = self->Solve(val, use_spline, i0);
		lua_pushnumber(L,lret);

		return 1;
	}

	// mglData mglDataC::Solve(double val, char dir, bool norm = true) const
	static int _bind_Solve_overload_2(lua_State *L) {
		if (!_lg_typecheck_Solve_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglDataC::Solve(double val, char dir, bool norm = true) const function, expected prototype:\nmglData mglDataC::Solve(double val, char dir, bool norm = true) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double val=(double)lua_tonumber(L,2);
		char dir=(char)lua_tointeger(L,3);
		bool norm=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglDataC::Solve(double, char, bool) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		mglData stack_lret = self->Solve(val, dir, norm);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglDataC::Solve(double val, char dir, const mglData & i0, bool norm = true) const
	static int _bind_Solve_overload_3(lua_State *L) {
		if (!_lg_typecheck_Solve_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglDataC::Solve(double val, char dir, const mglData & i0, bool norm = true) const function, expected prototype:\nmglData mglDataC::Solve(double val, char dir, const mglData & i0, bool norm = true) const\nClass arguments details:\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		double val=(double)lua_tonumber(L,2);
		char dir=(char)lua_tointeger(L,3);
		const mglData* i0_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,4));
		if( !i0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg i0 in mglDataC::Solve function");
		}
		const mglData & i0=*i0_ptr;
		bool norm=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)true;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglDataC::Solve(double, char, const mglData &, bool) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		mglData stack_lret = self->Solve(val, dir, i0, norm);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// Overload binder for mglDataC::Solve
	static int _bind_Solve(lua_State *L) {
		if (_lg_typecheck_Solve_overload_1(L)) return _bind_Solve_overload_1(L);
		if (_lg_typecheck_Solve_overload_2(L)) return _bind_Solve_overload_2(L);
		if (_lg_typecheck_Solve_overload_3(L)) return _bind_Solve_overload_3(L);

		luaL_error(L, "error in function Solve, cannot match any of the overloads for function Solve:\n  Solve(double, bool, long)\n  Solve(double, char, bool)\n  Solve(double, char, const mglData &, bool)\n");
		return 0;
	}

	// const char * mglDataC::PrintInfo() const
	static int _bind_PrintInfo(lua_State *L) {
		if (!_lg_typecheck_PrintInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * mglDataC::PrintInfo() const function, expected prototype:\nconst char * mglDataC::PrintInfo() const\nClass arguments details:\n");
		}


		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * mglDataC::PrintInfo() const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		const char * lret = self->PrintInfo();
		lua_pushstring(L,lret);

		return 1;
	}

	// double mglDataC::Maximal() const
	static int _bind_Maximal_overload_1(lua_State *L) {
		if (!_lg_typecheck_Maximal_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglDataC::Maximal() const function, expected prototype:\ndouble mglDataC::Maximal() const\nClass arguments details:\n");
		}


		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglDataC::Maximal() const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		double lret = self->Maximal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglDataC::Maximal(long & i, long & j, long & k) const
	static int _bind_Maximal_overload_2(lua_State *L) {
		if (!_lg_typecheck_Maximal_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglDataC::Maximal(long & i, long & j, long & k) const function, expected prototype:\ndouble mglDataC::Maximal(long & i, long & j, long & k) const\nClass arguments details:\n");
		}

		long i=(long)lua_tointeger(L,2);
		long j=(long)lua_tointeger(L,3);
		long k=(long)lua_tointeger(L,4);

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglDataC::Maximal(long &, long &, long &) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		double lret = self->Maximal(i, j, k);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglDataC::Maximal(double & x, double & y, double & z) const
	static int _bind_Maximal_overload_3(lua_State *L) {
		if (!_lg_typecheck_Maximal_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglDataC::Maximal(double & x, double & y, double & z) const function, expected prototype:\ndouble mglDataC::Maximal(double & x, double & y, double & z) const\nClass arguments details:\n");
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		double z=(double)lua_tonumber(L,4);

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglDataC::Maximal(double &, double &, double &) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		double lret = self->Maximal(x, y, z);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for mglDataC::Maximal
	static int _bind_Maximal(lua_State *L) {
		if (_lg_typecheck_Maximal_overload_1(L)) return _bind_Maximal_overload_1(L);
		if (_lg_typecheck_Maximal_overload_2(L)) return _bind_Maximal_overload_2(L);
		if (_lg_typecheck_Maximal_overload_3(L)) return _bind_Maximal_overload_3(L);

		luaL_error(L, "error in function Maximal, cannot match any of the overloads for function Maximal:\n  Maximal()\n  Maximal(long &, long &, long &)\n  Maximal(double &, double &, double &)\n");
		return 0;
	}

	// double mglDataC::Minimal() const
	static int _bind_Minimal_overload_1(lua_State *L) {
		if (!_lg_typecheck_Minimal_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglDataC::Minimal() const function, expected prototype:\ndouble mglDataC::Minimal() const\nClass arguments details:\n");
		}


		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglDataC::Minimal() const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		double lret = self->Minimal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglDataC::Minimal(long & i, long & j, long & k) const
	static int _bind_Minimal_overload_2(lua_State *L) {
		if (!_lg_typecheck_Minimal_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglDataC::Minimal(long & i, long & j, long & k) const function, expected prototype:\ndouble mglDataC::Minimal(long & i, long & j, long & k) const\nClass arguments details:\n");
		}

		long i=(long)lua_tointeger(L,2);
		long j=(long)lua_tointeger(L,3);
		long k=(long)lua_tointeger(L,4);

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglDataC::Minimal(long &, long &, long &) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		double lret = self->Minimal(i, j, k);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglDataC::Minimal(double & x, double & y, double & z) const
	static int _bind_Minimal_overload_3(lua_State *L) {
		if (!_lg_typecheck_Minimal_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglDataC::Minimal(double & x, double & y, double & z) const function, expected prototype:\ndouble mglDataC::Minimal(double & x, double & y, double & z) const\nClass arguments details:\n");
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		double z=(double)lua_tonumber(L,4);

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglDataC::Minimal(double &, double &, double &) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		double lret = self->Minimal(x, y, z);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for mglDataC::Minimal
	static int _bind_Minimal(lua_State *L) {
		if (_lg_typecheck_Minimal_overload_1(L)) return _bind_Minimal_overload_1(L);
		if (_lg_typecheck_Minimal_overload_2(L)) return _bind_Minimal_overload_2(L);
		if (_lg_typecheck_Minimal_overload_3(L)) return _bind_Minimal_overload_3(L);

		luaL_error(L, "error in function Minimal, cannot match any of the overloads for function Minimal:\n  Minimal()\n  Minimal(long &, long &, long &)\n  Minimal(double &, double &, double &)\n");
		return 0;
	}

	// static int mglDataC::DatasHDF(const char * fname, char * buf, long size)
	static int _bind_DatasHDF(lua_State *L) {
		if (!_lg_typecheck_DatasHDF(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static int mglDataC::DatasHDF(const char * fname, char * buf, long size) function, expected prototype:\nstatic int mglDataC::DatasHDF(const char * fname, char * buf, long size)\nClass arguments details:\n");
		}

		const char * fname=(const char *)lua_tostring(L,1);
		char* buf=(char*)Luna< void >::check(L,2);
		long size=(long)lua_tointeger(L,3);

		int lret = mglDataC::DatasHDF(fname, buf, size);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglDataC::nx()
	static int _bind_getNx(lua_State *L) {
		if (!_lg_typecheck_getNx(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglDataC::nx() function, expected prototype:\nlong mglDataC::nx()\nClass arguments details:\n");
		}


		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglDataC::nx(). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		long lret = self->nx;
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglDataC::ny()
	static int _bind_getNy(lua_State *L) {
		if (!_lg_typecheck_getNy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglDataC::ny() function, expected prototype:\nlong mglDataC::ny()\nClass arguments details:\n");
		}


		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglDataC::ny(). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		long lret = self->ny;
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglDataC::nz()
	static int _bind_getNz(lua_State *L) {
		if (!_lg_typecheck_getNz(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglDataC::nz() function, expected prototype:\nlong mglDataC::nz()\nClass arguments details:\n");
		}


		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglDataC::nz(). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		long lret = self->nz;
		lua_pushnumber(L,lret);

		return 1;
	}

	// dual * mglDataC::a()
	static int _bind_getA(lua_State *L) {
		if (!_lg_typecheck_getA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dual * mglDataC::a() function, expected prototype:\ndual * mglDataC::a()\nClass arguments details:\n");
		}


		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call dual * mglDataC::a(). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		dual * lret = self->a;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< dual >::push(L,lret,false);

		return 1;
	}

	// std::string mglDataC::id()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string mglDataC::id() function, expected prototype:\nstd::string mglDataC::id()\nClass arguments details:\n");
		}


		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string mglDataC::id(). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		std::string lret = self->id;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool mglDataC::link()
	static int _bind_getLink(lua_State *L) {
		if (!_lg_typecheck_getLink(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglDataC::link() function, expected prototype:\nbool mglDataC::link()\nClass arguments details:\n");
		}


		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglDataC::link(). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		bool lret = self->link;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void mglDataC::nx(long value)
	static int _bind_setNx(lua_State *L) {
		if (!_lg_typecheck_setNx(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::nx(long value) function, expected prototype:\nvoid mglDataC::nx(long value)\nClass arguments details:\n");
		}

		long value=(long)lua_tointeger(L,2);

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::nx(long). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->nx = value;

		return 0;
	}

	// void mglDataC::ny(long value)
	static int _bind_setNy(lua_State *L) {
		if (!_lg_typecheck_setNy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::ny(long value) function, expected prototype:\nvoid mglDataC::ny(long value)\nClass arguments details:\n");
		}

		long value=(long)lua_tointeger(L,2);

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::ny(long). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->ny = value;

		return 0;
	}

	// void mglDataC::nz(long value)
	static int _bind_setNz(lua_State *L) {
		if (!_lg_typecheck_setNz(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::nz(long value) function, expected prototype:\nvoid mglDataC::nz(long value)\nClass arguments details:\n");
		}

		long value=(long)lua_tointeger(L,2);

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::nz(long). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->nz = value;

		return 0;
	}

	// void mglDataC::a(dual * value)
	static int _bind_setA(lua_State *L) {
		if (!_lg_typecheck_setA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::a(dual * value) function, expected prototype:\nvoid mglDataC::a(dual * value)\nClass arguments details:\narg 1 ID = 3094652\n");
		}

		dual* value=(Luna< std::complex< double > >::checkSubType< dual >(L,2));

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::a(dual *). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->a = value;

		return 0;
	}

	// void mglDataC::id(std::string value)
	static int _bind_setId(lua_State *L) {
		if (!_lg_typecheck_setId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::id(std::string value) function, expected prototype:\nvoid mglDataC::id(std::string value)\nClass arguments details:\n");
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::id(std::string). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->id = value;

		return 0;
	}

	// void mglDataC::link(bool value)
	static int _bind_setLink(lua_State *L) {
		if (!_lg_typecheck_setLink(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDataC::link(bool value) function, expected prototype:\nvoid mglDataC::link(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDataC::link(bool). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->link = value;

		return 0;
	}

	// long mglDataC::base_GetNx() const
	static int _bind_base_GetNx(lua_State *L) {
		if (!_lg_typecheck_base_GetNx(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglDataC::base_GetNx() const function, expected prototype:\nlong mglDataC::base_GetNx() const\nClass arguments details:\n");
		}


		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglDataC::base_GetNx() const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		long lret = self->mglDataC::GetNx();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglDataC::base_GetNy() const
	static int _bind_base_GetNy(lua_State *L) {
		if (!_lg_typecheck_base_GetNy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglDataC::base_GetNy() const function, expected prototype:\nlong mglDataC::base_GetNy() const\nClass arguments details:\n");
		}


		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglDataC::base_GetNy() const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		long lret = self->mglDataC::GetNy();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglDataC::base_GetNz() const
	static int _bind_base_GetNz(lua_State *L) {
		if (!_lg_typecheck_base_GetNz(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglDataC::base_GetNz() const function, expected prototype:\nlong mglDataC::base_GetNz() const\nClass arguments details:\n");
		}


		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglDataC::base_GetNz() const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		long lret = self->mglDataC::GetNz();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglDataC::base_Maximal() const
	static int _bind_base_Maximal(lua_State *L) {
		if (!_lg_typecheck_base_Maximal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglDataC::base_Maximal() const function, expected prototype:\ndouble mglDataC::base_Maximal() const\nClass arguments details:\n");
		}


		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglDataC::base_Maximal() const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		double lret = self->mglDataC::Maximal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglDataC::base_Minimal() const
	static int _bind_base_Minimal(lua_State *L) {
		if (!_lg_typecheck_base_Minimal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglDataC::base_Minimal() const function, expected prototype:\ndouble mglDataC::base_Minimal() const\nClass arguments details:\n");
		}


		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglDataC::base_Minimal() const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		double lret = self->mglDataC::Minimal();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:
	// mglDataC & mglDataC::operator=(const mglData & d)
	static int _bind_op_assign_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_assign_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglDataC & mglDataC::operator=(const mglData & d) function, expected prototype:\nmglDataC & mglDataC::operator=(const mglData & d)\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		const mglData* d_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,2));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglDataC::operator= function");
		}
		const mglData & d=*d_ptr;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglDataC & mglDataC::operator=(const mglData &). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		const mglDataC* lret = &self->operator=(d);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglDataC >::push(L,lret,false);

		return 1;
	}

	// mglDataC & mglDataC::operator=(const mglDataC & d)
	static int _bind_op_assign_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_assign_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglDataC & mglDataC::operator=(const mglDataC & d) function, expected prototype:\nmglDataC & mglDataC::operator=(const mglDataC & d)\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		const mglDataC* d_ptr=(Luna< mglDataA >::checkSubType< mglDataC >(L,2));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglDataC::operator= function");
		}
		const mglDataC & d=*d_ptr;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglDataC & mglDataC::operator=(const mglDataC &). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		const mglDataC* lret = &self->operator=(d);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglDataC >::push(L,lret,false);

		return 1;
	}

	// dual mglDataC::operator=(dual val)
	static int _bind_op_assign_overload_3(lua_State *L) {
		if (!_lg_typecheck_op_assign_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dual mglDataC::operator=(dual val) function, expected prototype:\ndual mglDataC::operator=(dual val)\nClass arguments details:\narg 1 ID = 3094652\n");
		}

		dual* val_ptr=(Luna< std::complex< double > >::checkSubType< dual >(L,2));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in mglDataC::operator= function");
		}
		dual val=*val_ptr;

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call dual mglDataC::operator=(dual). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		dual stack_lret = self->operator=(val);
		dual* lret = new dual(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< dual >::push(L,lret,true);

		return 1;
	}

	// Overload binder for mglDataC::operator=
	static int _bind_op_assign(lua_State *L) {
		if (_lg_typecheck_op_assign_overload_1(L)) return _bind_op_assign_overload_1(L);
		if (_lg_typecheck_op_assign_overload_2(L)) return _bind_op_assign_overload_2(L);
		if (_lg_typecheck_op_assign_overload_3(L)) return _bind_op_assign_overload_3(L);

		luaL_error(L, "error in function operator=, cannot match any of the overloads for function operator=:\n  operator=(const mglData &)\n  operator=(const mglDataC &)\n  operator=(dual)\n");
		return 0;
	}

	// dual & mglDataC::operator[](long i)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dual & mglDataC::operator[](long i) function, expected prototype:\ndual & mglDataC::operator[](long i)\nClass arguments details:\n");
		}

		long i=(long)lua_tointeger(L,2);

		mglDataC* self=Luna< mglDataA >::checkSubType< mglDataC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call dual & mglDataC::operator[](long). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		const dual* lret = &self->operator[](i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< dual >::push(L,lret,false);

		return 1;
	}


};

mglDataC* LunaTraits< mglDataC >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglDataC::_bind_ctor(L);
}

void LunaTraits< mglDataC >::_bind_dtor(mglDataC* obj) {
	delete obj;
}

const char LunaTraits< mglDataC >::className[] = "mglDataC";
const char LunaTraits< mglDataC >::fullName[] = "mglDataC";
const char LunaTraits< mglDataC >::moduleName[] = "mathgl";
const char* LunaTraits< mglDataC >::parents[] = {"mathgl.mglDataA", 0};
const int LunaTraits< mglDataC >::hash = 45413233;
const int LunaTraits< mglDataC >::uniqueIDs[] = {45413231,0};

luna_RegType LunaTraits< mglDataC >::methods[] = {
	{"GetVal", &luna_wrapper_mglDataC::_bind_GetVal},
	{"SetVal", &luna_wrapper_mglDataC::_bind_SetVal},
	{"GetNx", &luna_wrapper_mglDataC::_bind_GetNx},
	{"GetNy", &luna_wrapper_mglDataC::_bind_GetNy},
	{"GetNz", &luna_wrapper_mglDataC::_bind_GetNz},
	{"Link", &luna_wrapper_mglDataC::_bind_Link},
	{"Set", &luna_wrapper_mglDataC::_bind_Set},
	{"SetAmpl", &luna_wrapper_mglDataC::_bind_SetAmpl},
	{"Create", &luna_wrapper_mglDataC::_bind_Create},
	{"Rearrange", &luna_wrapper_mglDataC::_bind_Rearrange},
	{"Transpose", &luna_wrapper_mglDataC::_bind_Transpose},
	{"Extend", &luna_wrapper_mglDataC::_bind_Extend},
	{"Squeeze", &luna_wrapper_mglDataC::_bind_Squeeze},
	{"Crop", &luna_wrapper_mglDataC::_bind_Crop},
	{"Insert", &luna_wrapper_mglDataC::_bind_Insert},
	{"Delete", &luna_wrapper_mglDataC::_bind_Delete},
	{"Modify", &luna_wrapper_mglDataC::_bind_Modify},
	{"Fill", &luna_wrapper_mglDataC::_bind_Fill},
	{"SetColumnId", &luna_wrapper_mglDataC::_bind_SetColumnId},
	{"NewId", &luna_wrapper_mglDataC::_bind_NewId},
	{"Read", &luna_wrapper_mglDataC::_bind_Read},
	{"Save", &luna_wrapper_mglDataC::_bind_Save},
	{"ReadRange", &luna_wrapper_mglDataC::_bind_ReadRange},
	{"ReadAll", &luna_wrapper_mglDataC::_bind_ReadAll},
	{"ReadMat", &luna_wrapper_mglDataC::_bind_ReadMat},
	{"ReadHDF", &luna_wrapper_mglDataC::_bind_ReadHDF},
	{"SaveHDF", &luna_wrapper_mglDataC::_bind_SaveHDF},
	{"Real", &luna_wrapper_mglDataC::_bind_Real},
	{"Imag", &luna_wrapper_mglDataC::_bind_Imag},
	{"Abs", &luna_wrapper_mglDataC::_bind_Abs},
	{"Arg", &luna_wrapper_mglDataC::_bind_Arg},
	{"Column", &luna_wrapper_mglDataC::_bind_Column},
	{"Momentum", &luna_wrapper_mglDataC::_bind_Momentum},
	{"SubData", &luna_wrapper_mglDataC::_bind_SubData},
	{"Trace", &luna_wrapper_mglDataC::_bind_Trace},
	{"Hist", &luna_wrapper_mglDataC::_bind_Hist},
	{"Sum", &luna_wrapper_mglDataC::_bind_Sum},
	{"Max", &luna_wrapper_mglDataC::_bind_Max},
	{"Min", &luna_wrapper_mglDataC::_bind_Min},
	{"Combine", &luna_wrapper_mglDataC::_bind_Combine},
	{"Resize", &luna_wrapper_mglDataC::_bind_Resize},
	{"Evaluate", &luna_wrapper_mglDataC::_bind_Evaluate},
	{"CumSum", &luna_wrapper_mglDataC::_bind_CumSum},
	{"Integral", &luna_wrapper_mglDataC::_bind_Integral},
	{"Diff", &luna_wrapper_mglDataC::_bind_Diff},
	{"Diff2", &luna_wrapper_mglDataC::_bind_Diff2},
	{"Swap", &luna_wrapper_mglDataC::_bind_Swap},
	{"Roll", &luna_wrapper_mglDataC::_bind_Roll},
	{"Mirror", &luna_wrapper_mglDataC::_bind_Mirror},
	{"Smooth", &luna_wrapper_mglDataC::_bind_Smooth},
	{"Hankel", &luna_wrapper_mglDataC::_bind_Hankel},
	{"FFT", &luna_wrapper_mglDataC::_bind_FFT},
	{"Linear", &luna_wrapper_mglDataC::_bind_Linear},
	{"Linear1", &luna_wrapper_mglDataC::_bind_Linear1},
	{"Solve", &luna_wrapper_mglDataC::_bind_Solve},
	{"PrintInfo", &luna_wrapper_mglDataC::_bind_PrintInfo},
	{"Maximal", &luna_wrapper_mglDataC::_bind_Maximal},
	{"Minimal", &luna_wrapper_mglDataC::_bind_Minimal},
	{"DatasHDF", &luna_wrapper_mglDataC::_bind_DatasHDF},
	{"getNx", &luna_wrapper_mglDataC::_bind_getNx},
	{"getNy", &luna_wrapper_mglDataC::_bind_getNy},
	{"getNz", &luna_wrapper_mglDataC::_bind_getNz},
	{"getA", &luna_wrapper_mglDataC::_bind_getA},
	{"getId", &luna_wrapper_mglDataC::_bind_getId},
	{"getLink", &luna_wrapper_mglDataC::_bind_getLink},
	{"setNx", &luna_wrapper_mglDataC::_bind_setNx},
	{"setNy", &luna_wrapper_mglDataC::_bind_setNy},
	{"setNz", &luna_wrapper_mglDataC::_bind_setNz},
	{"setA", &luna_wrapper_mglDataC::_bind_setA},
	{"setId", &luna_wrapper_mglDataC::_bind_setId},
	{"setLink", &luna_wrapper_mglDataC::_bind_setLink},
	{"base_GetNx", &luna_wrapper_mglDataC::_bind_base_GetNx},
	{"base_GetNy", &luna_wrapper_mglDataC::_bind_base_GetNy},
	{"base_GetNz", &luna_wrapper_mglDataC::_bind_base_GetNz},
	{"base_Maximal", &luna_wrapper_mglDataC::_bind_base_Maximal},
	{"base_Minimal", &luna_wrapper_mglDataC::_bind_base_Minimal},
	{"op_assign", &luna_wrapper_mglDataC::_bind_op_assign},
	{"op_index", &luna_wrapper_mglDataC::_bind_op_index},
	{"__eq", &luna_wrapper_mglDataC::_bind___eq},
	{"fromVoid", &luna_wrapper_mglDataC::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglDataC::_bind_asVoid},
	{"getTable", &luna_wrapper_mglDataC::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< mglDataC >::converters[] = {
	{"mglDataA", &luna_wrapper_mglDataC::_cast_from_mglDataA},
	{0,0}
};

luna_RegEnumType LunaTraits< mglDataC >::enumValues[] = {
	{0,0}
};


