#include <plug_common.h>

#include <luna/wrappers/wrapper_mglBase.h>

class luna_wrapper_mglBase {
public:
	typedef Luna< mglBase > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<mglBase,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88502113) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglBase*)");
		}

		mglBase* rhs =(Luna< mglBase >::check(L,2));
		mglBase* self=(Luna< mglBase >::check(L,1));
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

		mglBase* self= (mglBase*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglBase >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88502113) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< mglBase >::check(L,1));
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

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglBase");
		
		return luna_dynamicCast(L,converters,"mglBase",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_get(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ZoomAxis(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,56902440) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRanges_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>9 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		if( luatop>6 && lua_isnumber(L,7)==0 ) return false;
		if( luatop>7 && lua_isnumber(L,8)==0 ) return false;
		if( luatop>8 && lua_isnumber(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRanges_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CRange_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,45413231)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< mglDataA >::check(L,2)) ) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CRange_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_XRange_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,45413231)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< mglDataA >::check(L,2)) ) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_XRange_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_YRange_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,45413231)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< mglDataA >::check(L,2)) ) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_YRange_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ZRange_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,45413231)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< mglDataA >::check(L,2)) ) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ZRange_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAutoRanges(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>9 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		if( luatop>6 && lua_isnumber(L,7)==0 ) return false;
		if( luatop>7 && lua_isnumber(L,8)==0 ) return false;
		if( luatop>8 && lua_isnumber(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOrigin(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SaveState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AdjustZMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFunc(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCoor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CutOff(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Ternary(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCut(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCutBox_overload_1(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCutBox_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Light(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAmbient(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDifLight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Alpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAlphaDef(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPalette(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNumPal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDefScheme(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMeshNum(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBarWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMarkSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetArrowSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWarn(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetWarn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_StartAutoGroup(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StartGroup(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EndGroup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Highlight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RestoreFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LoadFont(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CopyFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,88502113)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFontSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_TextWidth(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TextHeight(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FontFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRotatedText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTickRotate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTickSkip(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddLegend(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClearLegend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetQuality(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetQuality(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AddPnt(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56902440) ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CopyNtoC(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CopyProj(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56902440) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56902440) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Reserve(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetReduceAcc(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddGlyph(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddActive(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClearUnused(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPntP(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPntN(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetClrC(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetGlf(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetGlfNum(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPnt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPntNum(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPrm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPrmNum(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPtx(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPtxNum(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTxt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTxtNum(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ScalePoint(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56902440) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetOrgX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetOrgY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetOrgZ(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetC(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPenPal(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddTexture_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddTexture_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,44899579) ) return false;
		if( (!(Luna< mglColor >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DefColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,44899579) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_NextColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_mark_plot(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_arrow_plot(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_line_plot(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_trig_plot(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_quad_plot(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Glyph(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_vect_plot(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_mark_size(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_last_line(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getZMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMess(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getObjId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHighId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGrp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAct(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPlotId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCDef(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAlphaDef(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBarWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMeshNum(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFaceNum(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getArrow1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getArrow2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInUse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFlag(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStop(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMax(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZMin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMess(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setObjId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHighId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGrp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,21092053) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAct(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,82850976) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPlotId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCDef(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAlphaDef(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBarWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMeshNum(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFaceNum(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setArrow1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setArrow2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInUse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Light(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetAmbient(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Alpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetQuality(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Reserve(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ScalePoint(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56902440) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// mglBase::mglBase(lua_Table * data)
	static mglBase* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglBase::mglBase(lua_Table * data) function, expected prototype:\nmglBase::mglBase(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_mglBase(L,NULL);
	}


	// Function binds:
	// bool mglBase::get(long fl) const
	static int _bind_get(lua_State *L) {
		if (!_lg_typecheck_get(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglBase::get(long fl) const function, expected prototype:\nbool mglBase::get(long fl) const\nClass arguments details:\n");
		}

		long fl=(long)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglBase::get(long) const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		bool lret = self->get(fl);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void mglBase::set(long fl)
	static int _bind_set_overload_1(lua_State *L) {
		if (!_lg_typecheck_set_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::set(long fl) function, expected prototype:\nvoid mglBase::set(long fl)\nClass arguments details:\n");
		}

		long fl=(long)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::set(long). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->set(fl);

		return 0;
	}

	// void mglBase::set(bool v, long fl)
	static int _bind_set_overload_2(lua_State *L) {
		if (!_lg_typecheck_set_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::set(bool v, long fl) function, expected prototype:\nvoid mglBase::set(bool v, long fl)\nClass arguments details:\n");
		}

		bool v=(bool)(lua_toboolean(L,2)==1);
		long fl=(long)lua_tointeger(L,3);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::set(bool, long). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->set(v, fl);

		return 0;
	}

	// Overload binder for mglBase::set
	static int _bind_set(lua_State *L) {
		if (_lg_typecheck_set_overload_1(L)) return _bind_set_overload_1(L);
		if (_lg_typecheck_set_overload_2(L)) return _bind_set_overload_2(L);

		luaL_error(L, "error in function set, cannot match any of the overloads for function set:\n  set(long)\n  set(bool, long)\n");
		return 0;
	}

	// void mglBase::clr(long fl)
	static int _bind_clr(lua_State *L) {
		if (!_lg_typecheck_clr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::clr(long fl) function, expected prototype:\nvoid mglBase::clr(long fl)\nClass arguments details:\n");
		}

		long fl=(long)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::clr(long). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->clr(fl);

		return 0;
	}

	// void mglBase::ZoomAxis(mglPoint p1 = mglPoint (0, 0, 0, 0), mglPoint p2 = mglPoint (1, 1, 1, 1))
	static int _bind_ZoomAxis(lua_State *L) {
		if (!_lg_typecheck_ZoomAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::ZoomAxis(mglPoint p1 = mglPoint (0, 0, 0, 0), mglPoint p2 = mglPoint (1, 1, 1, 1)) function, expected prototype:\nvoid mglBase::ZoomAxis(mglPoint p1 = mglPoint (0, 0, 0, 0), mglPoint p2 = mglPoint (1, 1, 1, 1))\nClass arguments details:\narg 1 ID = 56902440\narg 2 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		mglPoint* p1_ptr=luatop>1 ? (Luna< mglPoint >::check(L,2)) : NULL;
		if( luatop>1 && !p1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p1 in mglBase::ZoomAxis function");
		}
		mglPoint p1=luatop>1 ? *p1_ptr : (mglPoint)mglPoint (0, 0, 0, 0);
		mglPoint* p2_ptr=luatop>2 ? (Luna< mglPoint >::check(L,3)) : NULL;
		if( luatop>2 && !p2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p2 in mglBase::ZoomAxis function");
		}
		mglPoint p2=luatop>2 ? *p2_ptr : (mglPoint)mglPoint (1, 1, 1, 1);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::ZoomAxis(mglPoint, mglPoint). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->ZoomAxis(p1, p2);

		return 0;
	}

	// void mglBase::SetRanges(double x1, double x2, double y1, double y2, double z1 = 0, double z2 = 0, double c1 = 0, double c2 = 0)
	static int _bind_SetRanges_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetRanges_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::SetRanges(double x1, double x2, double y1, double y2, double z1 = 0, double z2 = 0, double c1 = 0, double c2 = 0) function, expected prototype:\nvoid mglBase::SetRanges(double x1, double x2, double y1, double y2, double z1 = 0, double z2 = 0, double c1 = 0, double c2 = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double x1=(double)lua_tonumber(L,2);
		double x2=(double)lua_tonumber(L,3);
		double y1=(double)lua_tonumber(L,4);
		double y2=(double)lua_tonumber(L,5);
		double z1=luatop>5 ? (double)lua_tonumber(L,6) : (double)0;
		double z2=luatop>6 ? (double)lua_tonumber(L,7) : (double)0;
		double c1=luatop>7 ? (double)lua_tonumber(L,8) : (double)0;
		double c2=luatop>8 ? (double)lua_tonumber(L,9) : (double)0;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::SetRanges(double, double, double, double, double, double, double, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetRanges(x1, x2, y1, y2, z1, z2, c1, c2);

		return 0;
	}

	// void mglBase::SetRanges(mglPoint v1, mglPoint v2)
	static int _bind_SetRanges_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetRanges_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::SetRanges(mglPoint v1, mglPoint v2) function, expected prototype:\nvoid mglBase::SetRanges(mglPoint v1, mglPoint v2)\nClass arguments details:\narg 1 ID = 56902440\narg 2 ID = 56902440\n");
		}

		mglPoint* v1_ptr=(Luna< mglPoint >::check(L,2));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in mglBase::SetRanges function");
		}
		mglPoint v1=*v1_ptr;
		mglPoint* v2_ptr=(Luna< mglPoint >::check(L,3));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in mglBase::SetRanges function");
		}
		mglPoint v2=*v2_ptr;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::SetRanges(mglPoint, mglPoint). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetRanges(v1, v2);

		return 0;
	}

	// Overload binder for mglBase::SetRanges
	static int _bind_SetRanges(lua_State *L) {
		if (_lg_typecheck_SetRanges_overload_1(L)) return _bind_SetRanges_overload_1(L);
		if (_lg_typecheck_SetRanges_overload_2(L)) return _bind_SetRanges_overload_2(L);

		luaL_error(L, "error in function SetRanges, cannot match any of the overloads for function SetRanges:\n  SetRanges(double, double, double, double, double, double, double, double)\n  SetRanges(mglPoint, mglPoint)\n");
		return 0;
	}

	// void mglBase::CRange(const mglDataA * a, bool add = false, double fact = 0)
	static int _bind_CRange_overload_1(lua_State *L) {
		if (!_lg_typecheck_CRange_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::CRange(const mglDataA * a, bool add = false, double fact = 0) function, expected prototype:\nvoid mglBase::CRange(const mglDataA * a, bool add = false, double fact = 0)\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* a=(Luna< mglDataA >::check(L,2));
		bool add=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;
		double fact=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::CRange(const mglDataA *, bool, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->CRange(a, add, fact);

		return 0;
	}

	// void mglBase::CRange(double v1, double v2)
	static int _bind_CRange_overload_2(lua_State *L) {
		if (!_lg_typecheck_CRange_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::CRange(double v1, double v2) function, expected prototype:\nvoid mglBase::CRange(double v1, double v2)\nClass arguments details:\n");
		}

		double v1=(double)lua_tonumber(L,2);
		double v2=(double)lua_tonumber(L,3);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::CRange(double, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->CRange(v1, v2);

		return 0;
	}

	// Overload binder for mglBase::CRange
	static int _bind_CRange(lua_State *L) {
		if (_lg_typecheck_CRange_overload_1(L)) return _bind_CRange_overload_1(L);
		if (_lg_typecheck_CRange_overload_2(L)) return _bind_CRange_overload_2(L);

		luaL_error(L, "error in function CRange, cannot match any of the overloads for function CRange:\n  CRange(const mglDataA *, bool, double)\n  CRange(double, double)\n");
		return 0;
	}

	// void mglBase::XRange(const mglDataA * a, bool add = false, double fact = 0)
	static int _bind_XRange_overload_1(lua_State *L) {
		if (!_lg_typecheck_XRange_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::XRange(const mglDataA * a, bool add = false, double fact = 0) function, expected prototype:\nvoid mglBase::XRange(const mglDataA * a, bool add = false, double fact = 0)\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* a=(Luna< mglDataA >::check(L,2));
		bool add=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;
		double fact=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::XRange(const mglDataA *, bool, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->XRange(a, add, fact);

		return 0;
	}

	// void mglBase::XRange(double v1, double v2)
	static int _bind_XRange_overload_2(lua_State *L) {
		if (!_lg_typecheck_XRange_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::XRange(double v1, double v2) function, expected prototype:\nvoid mglBase::XRange(double v1, double v2)\nClass arguments details:\n");
		}

		double v1=(double)lua_tonumber(L,2);
		double v2=(double)lua_tonumber(L,3);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::XRange(double, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->XRange(v1, v2);

		return 0;
	}

	// Overload binder for mglBase::XRange
	static int _bind_XRange(lua_State *L) {
		if (_lg_typecheck_XRange_overload_1(L)) return _bind_XRange_overload_1(L);
		if (_lg_typecheck_XRange_overload_2(L)) return _bind_XRange_overload_2(L);

		luaL_error(L, "error in function XRange, cannot match any of the overloads for function XRange:\n  XRange(const mglDataA *, bool, double)\n  XRange(double, double)\n");
		return 0;
	}

	// void mglBase::YRange(const mglDataA * a, bool add = false, double fact = 0)
	static int _bind_YRange_overload_1(lua_State *L) {
		if (!_lg_typecheck_YRange_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::YRange(const mglDataA * a, bool add = false, double fact = 0) function, expected prototype:\nvoid mglBase::YRange(const mglDataA * a, bool add = false, double fact = 0)\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* a=(Luna< mglDataA >::check(L,2));
		bool add=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;
		double fact=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::YRange(const mglDataA *, bool, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->YRange(a, add, fact);

		return 0;
	}

	// void mglBase::YRange(double v1, double v2)
	static int _bind_YRange_overload_2(lua_State *L) {
		if (!_lg_typecheck_YRange_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::YRange(double v1, double v2) function, expected prototype:\nvoid mglBase::YRange(double v1, double v2)\nClass arguments details:\n");
		}

		double v1=(double)lua_tonumber(L,2);
		double v2=(double)lua_tonumber(L,3);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::YRange(double, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->YRange(v1, v2);

		return 0;
	}

	// Overload binder for mglBase::YRange
	static int _bind_YRange(lua_State *L) {
		if (_lg_typecheck_YRange_overload_1(L)) return _bind_YRange_overload_1(L);
		if (_lg_typecheck_YRange_overload_2(L)) return _bind_YRange_overload_2(L);

		luaL_error(L, "error in function YRange, cannot match any of the overloads for function YRange:\n  YRange(const mglDataA *, bool, double)\n  YRange(double, double)\n");
		return 0;
	}

	// void mglBase::ZRange(const mglDataA * a, bool add = false, double fact = 0)
	static int _bind_ZRange_overload_1(lua_State *L) {
		if (!_lg_typecheck_ZRange_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::ZRange(const mglDataA * a, bool add = false, double fact = 0) function, expected prototype:\nvoid mglBase::ZRange(const mglDataA * a, bool add = false, double fact = 0)\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* a=(Luna< mglDataA >::check(L,2));
		bool add=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;
		double fact=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::ZRange(const mglDataA *, bool, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->ZRange(a, add, fact);

		return 0;
	}

	// void mglBase::ZRange(double v1, double v2)
	static int _bind_ZRange_overload_2(lua_State *L) {
		if (!_lg_typecheck_ZRange_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::ZRange(double v1, double v2) function, expected prototype:\nvoid mglBase::ZRange(double v1, double v2)\nClass arguments details:\n");
		}

		double v1=(double)lua_tonumber(L,2);
		double v2=(double)lua_tonumber(L,3);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::ZRange(double, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->ZRange(v1, v2);

		return 0;
	}

	// Overload binder for mglBase::ZRange
	static int _bind_ZRange(lua_State *L) {
		if (_lg_typecheck_ZRange_overload_1(L)) return _bind_ZRange_overload_1(L);
		if (_lg_typecheck_ZRange_overload_2(L)) return _bind_ZRange_overload_2(L);

		luaL_error(L, "error in function ZRange, cannot match any of the overloads for function ZRange:\n  ZRange(const mglDataA *, bool, double)\n  ZRange(double, double)\n");
		return 0;
	}

	// void mglBase::SetAutoRanges(double x1, double x2, double y1 = 0, double y2 = 0, double z1 = 0, double z2 = 0, double c1 = 0, double c2 = 0)
	static int _bind_SetAutoRanges(lua_State *L) {
		if (!_lg_typecheck_SetAutoRanges(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::SetAutoRanges(double x1, double x2, double y1 = 0, double y2 = 0, double z1 = 0, double z2 = 0, double c1 = 0, double c2 = 0) function, expected prototype:\nvoid mglBase::SetAutoRanges(double x1, double x2, double y1 = 0, double y2 = 0, double z1 = 0, double z2 = 0, double c1 = 0, double c2 = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double x1=(double)lua_tonumber(L,2);
		double x2=(double)lua_tonumber(L,3);
		double y1=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;
		double y2=luatop>4 ? (double)lua_tonumber(L,5) : (double)0;
		double z1=luatop>5 ? (double)lua_tonumber(L,6) : (double)0;
		double z2=luatop>6 ? (double)lua_tonumber(L,7) : (double)0;
		double c1=luatop>7 ? (double)lua_tonumber(L,8) : (double)0;
		double c2=luatop>8 ? (double)lua_tonumber(L,9) : (double)0;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::SetAutoRanges(double, double, double, double, double, double, double, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetAutoRanges(x1, x2, y1, y2, z1, z2, c1, c2);

		return 0;
	}

	// void mglBase::SetOrigin(double x0, double y0, double z0 = NAN, double c0 = NAN)
	static int _bind_SetOrigin(lua_State *L) {
		if (!_lg_typecheck_SetOrigin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::SetOrigin(double x0, double y0, double z0 = NAN, double c0 = NAN) function, expected prototype:\nvoid mglBase::SetOrigin(double x0, double y0, double z0 = NAN, double c0 = NAN)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double x0=(double)lua_tonumber(L,2);
		double y0=(double)lua_tonumber(L,3);
		double z0=luatop>3 ? (double)lua_tonumber(L,4) : (double)NAN;
		double c0=luatop>4 ? (double)lua_tonumber(L,5) : (double)NAN;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::SetOrigin(double, double, double, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetOrigin(x0, y0, z0, c0);

		return 0;
	}

	// double mglBase::SaveState(const char * opt)
	static int _bind_SaveState(lua_State *L) {
		if (!_lg_typecheck_SaveState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglBase::SaveState(const char * opt) function, expected prototype:\ndouble mglBase::SaveState(const char * opt)\nClass arguments details:\n");
		}

		const char * opt=(const char *)lua_tostring(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglBase::SaveState(const char *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		double lret = self->SaveState(opt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglBase::LoadState()
	static int _bind_LoadState(lua_State *L) {
		if (!_lg_typecheck_LoadState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::LoadState() function, expected prototype:\nvoid mglBase::LoadState()\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::LoadState(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->LoadState();

		return 0;
	}

	// double mglBase::AdjustZMin()
	static int _bind_AdjustZMin(lua_State *L) {
		if (!_lg_typecheck_AdjustZMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglBase::AdjustZMin() function, expected prototype:\ndouble mglBase::AdjustZMin()\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglBase::AdjustZMin(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		double lret = self->AdjustZMin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglBase::SetFunc(const char * EqX, const char * EqY, const char * EqZ = 0, const char * EqA = 0)
	static int _bind_SetFunc(lua_State *L) {
		if (!_lg_typecheck_SetFunc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::SetFunc(const char * EqX, const char * EqY, const char * EqZ = 0, const char * EqA = 0) function, expected prototype:\nvoid mglBase::SetFunc(const char * EqX, const char * EqY, const char * EqZ = 0, const char * EqA = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * EqX=(const char *)lua_tostring(L,2);
		const char * EqY=(const char *)lua_tostring(L,3);
		const char * EqZ=luatop>3 ? (const char *)lua_tostring(L,4) : (const char*)0;
		const char * EqA=luatop>4 ? (const char *)lua_tostring(L,5) : (const char*)0;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::SetFunc(const char *, const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetFunc(EqX, EqY, EqZ, EqA);

		return 0;
	}

	// void mglBase::SetCoor(int how)
	static int _bind_SetCoor(lua_State *L) {
		if (!_lg_typecheck_SetCoor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::SetCoor(int how) function, expected prototype:\nvoid mglBase::SetCoor(int how)\nClass arguments details:\n");
		}

		int how=(int)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::SetCoor(int). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetCoor(how);

		return 0;
	}

	// void mglBase::CutOff(const char * EqCut)
	static int _bind_CutOff(lua_State *L) {
		if (!_lg_typecheck_CutOff(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::CutOff(const char * EqCut) function, expected prototype:\nvoid mglBase::CutOff(const char * EqCut)\nClass arguments details:\n");
		}

		const char * EqCut=(const char *)lua_tostring(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::CutOff(const char *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->CutOff(EqCut);

		return 0;
	}

	// void mglBase::Ternary(int tern)
	static int _bind_Ternary(lua_State *L) {
		if (!_lg_typecheck_Ternary(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::Ternary(int tern) function, expected prototype:\nvoid mglBase::Ternary(int tern)\nClass arguments details:\n");
		}

		int tern=(int)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::Ternary(int). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Ternary(tern);

		return 0;
	}

	// void mglBase::SetCut(bool val)
	static int _bind_SetCut(lua_State *L) {
		if (!_lg_typecheck_SetCut(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::SetCut(bool val) function, expected prototype:\nvoid mglBase::SetCut(bool val)\nClass arguments details:\n");
		}

		bool val=(bool)(lua_toboolean(L,2)==1);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::SetCut(bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetCut(val);

		return 0;
	}

	// void mglBase::SetCutBox(double x1, double y1, double z1, double x2, double y2, double z2)
	static int _bind_SetCutBox_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetCutBox_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::SetCutBox(double x1, double y1, double z1, double x2, double y2, double z2) function, expected prototype:\nvoid mglBase::SetCutBox(double x1, double y1, double z1, double x2, double y2, double z2)\nClass arguments details:\n");
		}

		double x1=(double)lua_tonumber(L,2);
		double y1=(double)lua_tonumber(L,3);
		double z1=(double)lua_tonumber(L,4);
		double x2=(double)lua_tonumber(L,5);
		double y2=(double)lua_tonumber(L,6);
		double z2=(double)lua_tonumber(L,7);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::SetCutBox(double, double, double, double, double, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetCutBox(x1, y1, z1, x2, y2, z2);

		return 0;
	}

	// void mglBase::SetCutBox(mglPoint v1, mglPoint v2)
	static int _bind_SetCutBox_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetCutBox_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::SetCutBox(mglPoint v1, mglPoint v2) function, expected prototype:\nvoid mglBase::SetCutBox(mglPoint v1, mglPoint v2)\nClass arguments details:\narg 1 ID = 56902440\narg 2 ID = 56902440\n");
		}

		mglPoint* v1_ptr=(Luna< mglPoint >::check(L,2));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in mglBase::SetCutBox function");
		}
		mglPoint v1=*v1_ptr;
		mglPoint* v2_ptr=(Luna< mglPoint >::check(L,3));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in mglBase::SetCutBox function");
		}
		mglPoint v2=*v2_ptr;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::SetCutBox(mglPoint, mglPoint). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetCutBox(v1, v2);

		return 0;
	}

	// Overload binder for mglBase::SetCutBox
	static int _bind_SetCutBox(lua_State *L) {
		if (_lg_typecheck_SetCutBox_overload_1(L)) return _bind_SetCutBox_overload_1(L);
		if (_lg_typecheck_SetCutBox_overload_2(L)) return _bind_SetCutBox_overload_2(L);

		luaL_error(L, "error in function SetCutBox, cannot match any of the overloads for function SetCutBox:\n  SetCutBox(double, double, double, double, double, double)\n  SetCutBox(mglPoint, mglPoint)\n");
		return 0;
	}

	// bool mglBase::Light(bool enable)
	static int _bind_Light(lua_State *L) {
		if (!_lg_typecheck_Light(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglBase::Light(bool enable) function, expected prototype:\nbool mglBase::Light(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglBase::Light(bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		bool lret = self->Light(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void mglBase::SetAmbient(double bright = 0.5)
	static int _bind_SetAmbient(lua_State *L) {
		if (!_lg_typecheck_SetAmbient(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::SetAmbient(double bright = 0.5) function, expected prototype:\nvoid mglBase::SetAmbient(double bright = 0.5)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double bright=luatop>1 ? (double)lua_tonumber(L,2) : (double)0.5;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::SetAmbient(double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetAmbient(bright);

		return 0;
	}

	// void mglBase::SetDifLight(bool dif)
	static int _bind_SetDifLight(lua_State *L) {
		if (!_lg_typecheck_SetDifLight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::SetDifLight(bool dif) function, expected prototype:\nvoid mglBase::SetDifLight(bool dif)\nClass arguments details:\n");
		}

		bool dif=(bool)(lua_toboolean(L,2)==1);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::SetDifLight(bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetDifLight(dif);

		return 0;
	}

	// bool mglBase::Alpha(bool enable)
	static int _bind_Alpha(lua_State *L) {
		if (!_lg_typecheck_Alpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglBase::Alpha(bool enable) function, expected prototype:\nbool mglBase::Alpha(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglBase::Alpha(bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		bool lret = self->Alpha(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void mglBase::SetAlphaDef(double val)
	static int _bind_SetAlphaDef(lua_State *L) {
		if (!_lg_typecheck_SetAlphaDef(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::SetAlphaDef(double val) function, expected prototype:\nvoid mglBase::SetAlphaDef(double val)\nClass arguments details:\n");
		}

		double val=(double)lua_tonumber(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::SetAlphaDef(double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetAlphaDef(val);

		return 0;
	}

	// void mglBase::SetPalette(const char * colors)
	static int _bind_SetPalette(lua_State *L) {
		if (!_lg_typecheck_SetPalette(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::SetPalette(const char * colors) function, expected prototype:\nvoid mglBase::SetPalette(const char * colors)\nClass arguments details:\n");
		}

		const char * colors=(const char *)lua_tostring(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::SetPalette(const char *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetPalette(colors);

		return 0;
	}

	// long mglBase::GetNumPal(long id) const
	static int _bind_GetNumPal(lua_State *L) {
		if (!_lg_typecheck_GetNumPal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglBase::GetNumPal(long id) const function, expected prototype:\nlong mglBase::GetNumPal(long id) const\nClass arguments details:\n");
		}

		long id=(long)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglBase::GetNumPal(long) const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		long lret = self->GetNumPal(id);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglBase::SetDefScheme(const char * colors)
	static int _bind_SetDefScheme(lua_State *L) {
		if (!_lg_typecheck_SetDefScheme(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::SetDefScheme(const char * colors) function, expected prototype:\nvoid mglBase::SetDefScheme(const char * colors)\nClass arguments details:\n");
		}

		const char * colors=(const char *)lua_tostring(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::SetDefScheme(const char *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetDefScheme(colors);

		return 0;
	}

	// void mglBase::SetMeshNum(int val)
	static int _bind_SetMeshNum(lua_State *L) {
		if (!_lg_typecheck_SetMeshNum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::SetMeshNum(int val) function, expected prototype:\nvoid mglBase::SetMeshNum(int val)\nClass arguments details:\n");
		}

		int val=(int)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::SetMeshNum(int). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetMeshNum(val);

		return 0;
	}

	// void mglBase::SetBarWidth(double val)
	static int _bind_SetBarWidth(lua_State *L) {
		if (!_lg_typecheck_SetBarWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::SetBarWidth(double val) function, expected prototype:\nvoid mglBase::SetBarWidth(double val)\nClass arguments details:\n");
		}

		double val=(double)lua_tonumber(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::SetBarWidth(double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetBarWidth(val);

		return 0;
	}

	// void mglBase::SetMarkSize(double val)
	static int _bind_SetMarkSize(lua_State *L) {
		if (!_lg_typecheck_SetMarkSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::SetMarkSize(double val) function, expected prototype:\nvoid mglBase::SetMarkSize(double val)\nClass arguments details:\n");
		}

		double val=(double)lua_tonumber(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::SetMarkSize(double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetMarkSize(val);

		return 0;
	}

	// void mglBase::SetArrowSize(double val)
	static int _bind_SetArrowSize(lua_State *L) {
		if (!_lg_typecheck_SetArrowSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::SetArrowSize(double val) function, expected prototype:\nvoid mglBase::SetArrowSize(double val)\nClass arguments details:\n");
		}

		double val=(double)lua_tonumber(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::SetArrowSize(double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetArrowSize(val);

		return 0;
	}

	// void mglBase::SetWarn(int code, const char * who)
	static int _bind_SetWarn(lua_State *L) {
		if (!_lg_typecheck_SetWarn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::SetWarn(int code, const char * who) function, expected prototype:\nvoid mglBase::SetWarn(int code, const char * who)\nClass arguments details:\n");
		}

		int code=(int)lua_tointeger(L,2);
		const char * who=(const char *)lua_tostring(L,3);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::SetWarn(int, const char *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetWarn(code, who);

		return 0;
	}

	// int mglBase::GetWarn() const
	static int _bind_GetWarn(lua_State *L) {
		if (!_lg_typecheck_GetWarn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglBase::GetWarn() const function, expected prototype:\nint mglBase::GetWarn() const\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglBase::GetWarn() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		int lret = self->GetWarn();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglBase::StartAutoGroup(const char * arg1)
	static int _bind_StartAutoGroup(lua_State *L) {
		if (!_lg_typecheck_StartAutoGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::StartAutoGroup(const char * arg1) function, expected prototype:\nvoid mglBase::StartAutoGroup(const char * arg1)\nClass arguments details:\n");
		}

		const char * _arg1=(const char *)lua_tostring(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::StartAutoGroup(const char *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->StartAutoGroup(_arg1);

		return 0;
	}

	// void mglBase::StartGroup(const char * name, int id)
	static int _bind_StartGroup(lua_State *L) {
		if (!_lg_typecheck_StartGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::StartGroup(const char * name, int id) function, expected prototype:\nvoid mglBase::StartGroup(const char * name, int id)\nClass arguments details:\n");
		}

		const char * name=(const char *)lua_tostring(L,2);
		int id=(int)lua_tointeger(L,3);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::StartGroup(const char *, int). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->StartGroup(name, id);

		return 0;
	}

	// void mglBase::EndGroup()
	static int _bind_EndGroup(lua_State *L) {
		if (!_lg_typecheck_EndGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::EndGroup() function, expected prototype:\nvoid mglBase::EndGroup()\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::EndGroup(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->EndGroup();

		return 0;
	}

	// void mglBase::Highlight(int id)
	static int _bind_Highlight(lua_State *L) {
		if (!_lg_typecheck_Highlight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::Highlight(int id) function, expected prototype:\nvoid mglBase::Highlight(int id)\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::Highlight(int). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Highlight(id);

		return 0;
	}

	// mglFont * mglBase::GetFont()
	static int _bind_GetFont(lua_State *L) {
		if (!_lg_typecheck_GetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglFont * mglBase::GetFont() function, expected prototype:\nmglFont * mglBase::GetFont()\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglFont * mglBase::GetFont(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		mglFont * lret = self->GetFont();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglFont >::push(L,lret,false);

		return 1;
	}

	// void mglBase::RestoreFont()
	static int _bind_RestoreFont(lua_State *L) {
		if (!_lg_typecheck_RestoreFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::RestoreFont() function, expected prototype:\nvoid mglBase::RestoreFont()\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::RestoreFont(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->RestoreFont();

		return 0;
	}

	// void mglBase::LoadFont(const char * name, const char * path = NULL)
	static int _bind_LoadFont(lua_State *L) {
		if (!_lg_typecheck_LoadFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::LoadFont(const char * name, const char * path = NULL) function, expected prototype:\nvoid mglBase::LoadFont(const char * name, const char * path = NULL)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * name=(const char *)lua_tostring(L,2);
		const char * path=luatop>2 ? (const char *)lua_tostring(L,3) : (const char*)NULL;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::LoadFont(const char *, const char *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->LoadFont(name, path);

		return 0;
	}

	// void mglBase::CopyFont(mglBase * gr)
	static int _bind_CopyFont(lua_State *L) {
		if (!_lg_typecheck_CopyFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::CopyFont(mglBase * gr) function, expected prototype:\nvoid mglBase::CopyFont(mglBase * gr)\nClass arguments details:\narg 1 ID = 88502113\n");
		}

		mglBase* gr=(Luna< mglBase >::check(L,2));

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::CopyFont(mglBase *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->CopyFont(gr);

		return 0;
	}

	// double mglBase::GetFontSize() const
	static int _bind_GetFontSize(lua_State *L) {
		if (!_lg_typecheck_GetFontSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglBase::GetFontSize() const function, expected prototype:\ndouble mglBase::GetFontSize() const\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglBase::GetFontSize() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		double lret = self->GetFontSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglBase::TextWidth(const char * text, const char * font, double size) const
	static int _bind_TextWidth(lua_State *L) {
		if (!_lg_typecheck_TextWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglBase::TextWidth(const char * text, const char * font, double size) const function, expected prototype:\ndouble mglBase::TextWidth(const char * text, const char * font, double size) const\nClass arguments details:\n");
		}

		const char * text=(const char *)lua_tostring(L,2);
		const char * font=(const char *)lua_tostring(L,3);
		double size=(double)lua_tonumber(L,4);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglBase::TextWidth(const char *, const char *, double) const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		double lret = self->TextWidth(text, font, size);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglBase::TextHeight(const char * font, double size) const
	static int _bind_TextHeight(lua_State *L) {
		if (!_lg_typecheck_TextHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglBase::TextHeight(const char * font, double size) const function, expected prototype:\ndouble mglBase::TextHeight(const char * font, double size) const\nClass arguments details:\n");
		}

		const char * font=(const char *)lua_tostring(L,2);
		double size=(double)lua_tonumber(L,3);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglBase::TextHeight(const char *, double) const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		double lret = self->TextHeight(font, size);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglBase::FontFactor() const
	static int _bind_FontFactor(lua_State *L) {
		if (!_lg_typecheck_FontFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglBase::FontFactor() const function, expected prototype:\ndouble mglBase::FontFactor() const\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglBase::FontFactor() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		double lret = self->FontFactor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglBase::GetRatio() const
	static int _bind_GetRatio(lua_State *L) {
		if (!_lg_typecheck_GetRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglBase::GetRatio() const function, expected prototype:\ndouble mglBase::GetRatio() const\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglBase::GetRatio() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		double lret = self->GetRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglBase::GetWidth() const
	static int _bind_GetWidth(lua_State *L) {
		if (!_lg_typecheck_GetWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglBase::GetWidth() const function, expected prototype:\nint mglBase::GetWidth() const\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglBase::GetWidth() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		int lret = self->GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglBase::GetHeight() const
	static int _bind_GetHeight(lua_State *L) {
		if (!_lg_typecheck_GetHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglBase::GetHeight() const function, expected prototype:\nint mglBase::GetHeight() const\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglBase::GetHeight() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		int lret = self->GetHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglBase::SetRotatedText(bool val)
	static int _bind_SetRotatedText(lua_State *L) {
		if (!_lg_typecheck_SetRotatedText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::SetRotatedText(bool val) function, expected prototype:\nvoid mglBase::SetRotatedText(bool val)\nClass arguments details:\n");
		}

		bool val=(bool)(lua_toboolean(L,2)==1);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::SetRotatedText(bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetRotatedText(val);

		return 0;
	}

	// void mglBase::SetTickRotate(bool val)
	static int _bind_SetTickRotate(lua_State *L) {
		if (!_lg_typecheck_SetTickRotate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::SetTickRotate(bool val) function, expected prototype:\nvoid mglBase::SetTickRotate(bool val)\nClass arguments details:\n");
		}

		bool val=(bool)(lua_toboolean(L,2)==1);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::SetTickRotate(bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetTickRotate(val);

		return 0;
	}

	// void mglBase::SetTickSkip(bool val)
	static int _bind_SetTickSkip(lua_State *L) {
		if (!_lg_typecheck_SetTickSkip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::SetTickSkip(bool val) function, expected prototype:\nvoid mglBase::SetTickSkip(bool val)\nClass arguments details:\n");
		}

		bool val=(bool)(lua_toboolean(L,2)==1);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::SetTickSkip(bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetTickSkip(val);

		return 0;
	}

	// void mglBase::AddLegend(const char * text, const char * style)
	static int _bind_AddLegend(lua_State *L) {
		if (!_lg_typecheck_AddLegend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::AddLegend(const char * text, const char * style) function, expected prototype:\nvoid mglBase::AddLegend(const char * text, const char * style)\nClass arguments details:\n");
		}

		const char * text=(const char *)lua_tostring(L,2);
		const char * style=(const char *)lua_tostring(L,3);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::AddLegend(const char *, const char *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->AddLegend(text, style);

		return 0;
	}

	// void mglBase::ClearLegend()
	static int _bind_ClearLegend(lua_State *L) {
		if (!_lg_typecheck_ClearLegend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::ClearLegend() function, expected prototype:\nvoid mglBase::ClearLegend()\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::ClearLegend(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->ClearLegend();

		return 0;
	}

	// void mglBase::SetQuality(int qual = 2)
	static int _bind_SetQuality(lua_State *L) {
		if (!_lg_typecheck_SetQuality(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::SetQuality(int qual = 2) function, expected prototype:\nvoid mglBase::SetQuality(int qual = 2)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int qual=luatop>1 ? (int)lua_tointeger(L,2) : (int)2;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::SetQuality(int). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetQuality(qual);

		return 0;
	}

	// int mglBase::GetQuality() const
	static int _bind_GetQuality(lua_State *L) {
		if (!_lg_typecheck_GetQuality(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglBase::GetQuality() const function, expected prototype:\nint mglBase::GetQuality() const\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglBase::GetQuality() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		int lret = self->GetQuality();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglBase::AddPnt(mglPoint p, double c = -1, mglPoint n = mglPoint (NAN), double a = -1, int scl = 1)
	static int _bind_AddPnt(lua_State *L) {
		if (!_lg_typecheck_AddPnt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglBase::AddPnt(mglPoint p, double c = -1, mglPoint n = mglPoint (NAN), double a = -1, int scl = 1) function, expected prototype:\nlong mglBase::AddPnt(mglPoint p, double c = -1, mglPoint n = mglPoint (NAN), double a = -1, int scl = 1)\nClass arguments details:\narg 1 ID = 56902440\narg 3 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		mglPoint* p_ptr=(Luna< mglPoint >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglBase::AddPnt function");
		}
		mglPoint p=*p_ptr;
		double c=luatop>2 ? (double)lua_tonumber(L,3) : (double)-1;
		mglPoint* n_ptr=luatop>3 ? (Luna< mglPoint >::check(L,4)) : NULL;
		if( luatop>3 && !n_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg n in mglBase::AddPnt function");
		}
		mglPoint n=luatop>3 ? *n_ptr : (mglPoint)mglPoint (NAN);
		double a=luatop>4 ? (double)lua_tonumber(L,5) : (double)-1;
		int scl=luatop>5 ? (int)lua_tointeger(L,6) : (int)1;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglBase::AddPnt(mglPoint, double, mglPoint, double, int). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		long lret = self->AddPnt(p, c, n, a, scl);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglBase::CopyNtoC(long k, double c)
	static int _bind_CopyNtoC(lua_State *L) {
		if (!_lg_typecheck_CopyNtoC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglBase::CopyNtoC(long k, double c) function, expected prototype:\nlong mglBase::CopyNtoC(long k, double c)\nClass arguments details:\n");
		}

		long k=(long)lua_tointeger(L,2);
		double c=(double)lua_tonumber(L,3);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglBase::CopyNtoC(long, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		long lret = self->CopyNtoC(k, c);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglBase::CopyProj(long from, mglPoint p, mglPoint n)
	static int _bind_CopyProj(lua_State *L) {
		if (!_lg_typecheck_CopyProj(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglBase::CopyProj(long from, mglPoint p, mglPoint n) function, expected prototype:\nlong mglBase::CopyProj(long from, mglPoint p, mglPoint n)\nClass arguments details:\narg 2 ID = 56902440\narg 3 ID = 56902440\n");
		}

		long from=(long)lua_tointeger(L,2);
		mglPoint* p_ptr=(Luna< mglPoint >::check(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglBase::CopyProj function");
		}
		mglPoint p=*p_ptr;
		mglPoint* n_ptr=(Luna< mglPoint >::check(L,4));
		if( !n_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg n in mglBase::CopyProj function");
		}
		mglPoint n=*n_ptr;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglBase::CopyProj(long, mglPoint, mglPoint). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		long lret = self->CopyProj(from, p, n);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglBase::Reserve(long n)
	static int _bind_Reserve(lua_State *L) {
		if (!_lg_typecheck_Reserve(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::Reserve(long n) function, expected prototype:\nvoid mglBase::Reserve(long n)\nClass arguments details:\n");
		}

		long n=(long)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::Reserve(long). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Reserve(n);

		return 0;
	}

	// void mglBase::SetReduceAcc(bool val)
	static int _bind_SetReduceAcc(lua_State *L) {
		if (!_lg_typecheck_SetReduceAcc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::SetReduceAcc(bool val) function, expected prototype:\nvoid mglBase::SetReduceAcc(bool val)\nClass arguments details:\n");
		}

		bool val=(bool)(lua_toboolean(L,2)==1);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::SetReduceAcc(bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetReduceAcc(val);

		return 0;
	}

	// long mglBase::AddGlyph(int s, long j)
	static int _bind_AddGlyph(lua_State *L) {
		if (!_lg_typecheck_AddGlyph(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglBase::AddGlyph(int s, long j) function, expected prototype:\nlong mglBase::AddGlyph(int s, long j)\nClass arguments details:\n");
		}

		int s=(int)lua_tointeger(L,2);
		long j=(long)lua_tointeger(L,3);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglBase::AddGlyph(int, long). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		long lret = self->AddGlyph(s, j);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglBase::AddActive(long k, int n = 0)
	static int _bind_AddActive(lua_State *L) {
		if (!_lg_typecheck_AddActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::AddActive(long k, int n = 0) function, expected prototype:\nvoid mglBase::AddActive(long k, int n = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long k=(long)lua_tointeger(L,2);
		int n=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::AddActive(long, int). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->AddActive(k, n);

		return 0;
	}

	// void mglBase::ClearUnused()
	static int _bind_ClearUnused(lua_State *L) {
		if (!_lg_typecheck_ClearUnused(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::ClearUnused() function, expected prototype:\nvoid mglBase::ClearUnused()\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::ClearUnused(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->ClearUnused();

		return 0;
	}

	// mglPoint mglBase::GetPntP(long i) const
	static int _bind_GetPntP(lua_State *L) {
		if (!_lg_typecheck_GetPntP(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglPoint mglBase::GetPntP(long i) const function, expected prototype:\nmglPoint mglBase::GetPntP(long i) const\nClass arguments details:\n");
		}

		long i=(long)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglPoint mglBase::GetPntP(long) const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		mglPoint stack_lret = self->GetPntP(i);
		mglPoint* lret = new mglPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglPoint >::push(L,lret,true);

		return 1;
	}

	// mglPoint mglBase::GetPntN(long i) const
	static int _bind_GetPntN(lua_State *L) {
		if (!_lg_typecheck_GetPntN(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglPoint mglBase::GetPntN(long i) const function, expected prototype:\nmglPoint mglBase::GetPntN(long i) const\nClass arguments details:\n");
		}

		long i=(long)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglPoint mglBase::GetPntN(long) const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		mglPoint stack_lret = self->GetPntN(i);
		mglPoint* lret = new mglPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglPoint >::push(L,lret,true);

		return 1;
	}

	// float mglBase::GetClrC(long i) const
	static int _bind_GetClrC(lua_State *L) {
		if (!_lg_typecheck_GetClrC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float mglBase::GetClrC(long i) const function, expected prototype:\nfloat mglBase::GetClrC(long i) const\nClass arguments details:\n");
		}

		long i=(long)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float mglBase::GetClrC(long) const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		float lret = self->GetClrC(i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const mglGlyph & mglBase::GetGlf(long i) const
	static int _bind_GetGlf(lua_State *L) {
		if (!_lg_typecheck_GetGlf(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const mglGlyph & mglBase::GetGlf(long i) const function, expected prototype:\nconst mglGlyph & mglBase::GetGlf(long i) const\nClass arguments details:\n");
		}

		long i=(long)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const mglGlyph & mglBase::GetGlf(long) const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		const mglGlyph* lret = &self->GetGlf(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglGlyph >::push(L,lret,false);

		return 1;
	}

	// long mglBase::GetGlfNum() const
	static int _bind_GetGlfNum(lua_State *L) {
		if (!_lg_typecheck_GetGlfNum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglBase::GetGlfNum() const function, expected prototype:\nlong mglBase::GetGlfNum() const\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglBase::GetGlfNum() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		long lret = self->GetGlfNum();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const mglPnt & mglBase::GetPnt(long i) const
	static int _bind_GetPnt(lua_State *L) {
		if (!_lg_typecheck_GetPnt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const mglPnt & mglBase::GetPnt(long i) const function, expected prototype:\nconst mglPnt & mglBase::GetPnt(long i) const\nClass arguments details:\n");
		}

		long i=(long)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const mglPnt & mglBase::GetPnt(long) const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		const mglPnt* lret = &self->GetPnt(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglPnt >::push(L,lret,false);

		return 1;
	}

	// long mglBase::GetPntNum() const
	static int _bind_GetPntNum(lua_State *L) {
		if (!_lg_typecheck_GetPntNum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglBase::GetPntNum() const function, expected prototype:\nlong mglBase::GetPntNum() const\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglBase::GetPntNum() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		long lret = self->GetPntNum();
		lua_pushnumber(L,lret);

		return 1;
	}

	// mglPrim & mglBase::GetPrm(long i)
	static int _bind_GetPrm(lua_State *L) {
		if (!_lg_typecheck_GetPrm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglPrim & mglBase::GetPrm(long i) function, expected prototype:\nmglPrim & mglBase::GetPrm(long i)\nClass arguments details:\n");
		}

		long i=(long)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglPrim & mglBase::GetPrm(long). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		const mglPrim* lret = &self->GetPrm(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglPrim >::push(L,lret,false);

		return 1;
	}

	// long mglBase::GetPrmNum() const
	static int _bind_GetPrmNum(lua_State *L) {
		if (!_lg_typecheck_GetPrmNum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglBase::GetPrmNum() const function, expected prototype:\nlong mglBase::GetPrmNum() const\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglBase::GetPrmNum() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		long lret = self->GetPrmNum();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const mglText & mglBase::GetPtx(long i) const
	static int _bind_GetPtx(lua_State *L) {
		if (!_lg_typecheck_GetPtx(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const mglText & mglBase::GetPtx(long i) const function, expected prototype:\nconst mglText & mglBase::GetPtx(long i) const\nClass arguments details:\n");
		}

		long i=(long)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const mglText & mglBase::GetPtx(long) const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		const mglText* lret = &self->GetPtx(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglText >::push(L,lret,false);

		return 1;
	}

	// long mglBase::GetPtxNum() const
	static int _bind_GetPtxNum(lua_State *L) {
		if (!_lg_typecheck_GetPtxNum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglBase::GetPtxNum() const function, expected prototype:\nlong mglBase::GetPtxNum() const\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglBase::GetPtxNum() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		long lret = self->GetPtxNum();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const mglTexture & mglBase::GetTxt(long i) const
	static int _bind_GetTxt(lua_State *L) {
		if (!_lg_typecheck_GetTxt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const mglTexture & mglBase::GetTxt(long i) const function, expected prototype:\nconst mglTexture & mglBase::GetTxt(long i) const\nClass arguments details:\n");
		}

		long i=(long)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const mglTexture & mglBase::GetTxt(long) const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		const mglTexture* lret = &self->GetTxt(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglTexture >::push(L,lret,false);

		return 1;
	}

	// long mglBase::GetTxtNum() const
	static int _bind_GetTxtNum(lua_State *L) {
		if (!_lg_typecheck_GetTxtNum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglBase::GetTxtNum() const function, expected prototype:\nlong mglBase::GetTxtNum() const\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglBase::GetTxtNum() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		long lret = self->GetTxtNum();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool mglBase::ScalePoint(mglPoint & p, mglPoint & n, bool use_nan = true) const
	static int _bind_ScalePoint(lua_State *L) {
		if (!_lg_typecheck_ScalePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglBase::ScalePoint(mglPoint & p, mglPoint & n, bool use_nan = true) const function, expected prototype:\nbool mglBase::ScalePoint(mglPoint & p, mglPoint & n, bool use_nan = true) const\nClass arguments details:\narg 1 ID = 56902440\narg 2 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		mglPoint* p_ptr=(Luna< mglPoint >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglBase::ScalePoint function");
		}
		mglPoint & p=*p_ptr;
		mglPoint* n_ptr=(Luna< mglPoint >::check(L,3));
		if( !n_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg n in mglBase::ScalePoint function");
		}
		mglPoint & n=*n_ptr;
		bool use_nan=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglBase::ScalePoint(mglPoint &, mglPoint &, bool) const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		bool lret = self->ScalePoint(p, n, use_nan);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// double mglBase::GetOrgX(char dir) const
	static int _bind_GetOrgX(lua_State *L) {
		if (!_lg_typecheck_GetOrgX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglBase::GetOrgX(char dir) const function, expected prototype:\ndouble mglBase::GetOrgX(char dir) const\nClass arguments details:\n");
		}

		char dir=(char)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglBase::GetOrgX(char) const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		double lret = self->GetOrgX(dir);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglBase::GetOrgY(char dir) const
	static int _bind_GetOrgY(lua_State *L) {
		if (!_lg_typecheck_GetOrgY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglBase::GetOrgY(char dir) const function, expected prototype:\ndouble mglBase::GetOrgY(char dir) const\nClass arguments details:\n");
		}

		char dir=(char)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglBase::GetOrgY(char) const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		double lret = self->GetOrgY(dir);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglBase::GetOrgZ(char dir) const
	static int _bind_GetOrgZ(lua_State *L) {
		if (!_lg_typecheck_GetOrgZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglBase::GetOrgZ(char dir) const function, expected prototype:\ndouble mglBase::GetOrgZ(char dir) const\nClass arguments details:\n");
		}

		char dir=(char)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglBase::GetOrgZ(char) const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		double lret = self->GetOrgZ(dir);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglBase::GetC(long s, double z, bool scale = true) const
	static int _bind_GetC(lua_State *L) {
		if (!_lg_typecheck_GetC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglBase::GetC(long s, double z, bool scale = true) const function, expected prototype:\ndouble mglBase::GetC(long s, double z, bool scale = true) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long s=(long)lua_tointeger(L,2);
		double z=(double)lua_tonumber(L,3);
		bool scale=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglBase::GetC(long, double, bool) const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		double lret = self->GetC(s, z, scale);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglBase::GetA(double a) const
	static int _bind_GetA(lua_State *L) {
		if (!_lg_typecheck_GetA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglBase::GetA(double a) const function, expected prototype:\ndouble mglBase::GetA(double a) const\nClass arguments details:\n");
		}

		double a=(double)lua_tonumber(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglBase::GetA(double) const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		double lret = self->GetA(a);
		lua_pushnumber(L,lret);

		return 1;
	}

	// char mglBase::SetPenPal(const char * stl, long * id = 0)
	static int _bind_SetPenPal(lua_State *L) {
		if (!_lg_typecheck_SetPenPal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in char mglBase::SetPenPal(const char * stl, long * id = 0) function, expected prototype:\nchar mglBase::SetPenPal(const char * stl, long * id = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * stl=(const char *)lua_tostring(L,2);
		long* id=luatop>2 ? (long*)Luna< void >::check(L,3) : (long*)0;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call char mglBase::SetPenPal(const char *, long *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		char lret = self->SetPenPal(stl, id);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglBase::AddTexture(const char * cols, int smooth = 0)
	static int _bind_AddTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_AddTexture_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglBase::AddTexture(const char * cols, int smooth = 0) function, expected prototype:\nlong mglBase::AddTexture(const char * cols, int smooth = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * cols=(const char *)lua_tostring(L,2);
		int smooth=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglBase::AddTexture(const char *, int). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		long lret = self->AddTexture(cols, smooth);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglBase::AddTexture(mglColor col)
	static int _bind_AddTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_AddTexture_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglBase::AddTexture(mglColor col) function, expected prototype:\ndouble mglBase::AddTexture(mglColor col)\nClass arguments details:\narg 1 ID = 44899579\n");
		}

		mglColor* col_ptr=(Luna< mglColor >::check(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in mglBase::AddTexture function");
		}
		mglColor col=*col_ptr;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglBase::AddTexture(mglColor). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		double lret = self->AddTexture(col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for mglBase::AddTexture
	static int _bind_AddTexture(lua_State *L) {
		if (_lg_typecheck_AddTexture_overload_1(L)) return _bind_AddTexture_overload_1(L);
		if (_lg_typecheck_AddTexture_overload_2(L)) return _bind_AddTexture_overload_2(L);

		luaL_error(L, "error in function AddTexture, cannot match any of the overloads for function AddTexture:\n  AddTexture(const char *, int)\n  AddTexture(mglColor)\n");
		return 0;
	}

	// void mglBase::DefColor(mglColor col)
	static int _bind_DefColor(lua_State *L) {
		if (!_lg_typecheck_DefColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::DefColor(mglColor col) function, expected prototype:\nvoid mglBase::DefColor(mglColor col)\nClass arguments details:\narg 1 ID = 44899579\n");
		}

		mglColor* col_ptr=(Luna< mglColor >::check(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in mglBase::DefColor function");
		}
		mglColor col=*col_ptr;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::DefColor(mglColor). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->DefColor(col);

		return 0;
	}

	// double mglBase::NextColor(long & id)
	static int _bind_NextColor(lua_State *L) {
		if (!_lg_typecheck_NextColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglBase::NextColor(long & id) function, expected prototype:\ndouble mglBase::NextColor(long & id)\nClass arguments details:\n");
		}

		long id=(long)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglBase::NextColor(long &). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		double lret = self->NextColor(id);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglBase::mark_plot(long p, char type, double size = 1)
	static int _bind_mark_plot(lua_State *L) {
		if (!_lg_typecheck_mark_plot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::mark_plot(long p, char type, double size = 1) function, expected prototype:\nvoid mglBase::mark_plot(long p, char type, double size = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long p=(long)lua_tointeger(L,2);
		char type=(char)lua_tointeger(L,3);
		double size=luatop>3 ? (double)lua_tonumber(L,4) : (double)1;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::mark_plot(long, char, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mark_plot(p, type, size);

		return 0;
	}

	// void mglBase::arrow_plot(long p1, long p2, char st)
	static int _bind_arrow_plot(lua_State *L) {
		if (!_lg_typecheck_arrow_plot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::arrow_plot(long p1, long p2, char st) function, expected prototype:\nvoid mglBase::arrow_plot(long p1, long p2, char st)\nClass arguments details:\n");
		}

		long p1=(long)lua_tointeger(L,2);
		long p2=(long)lua_tointeger(L,3);
		char st=(char)lua_tointeger(L,4);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::arrow_plot(long, long, char). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->arrow_plot(p1, p2, st);

		return 0;
	}

	// void mglBase::line_plot(long p1, long p2)
	static int _bind_line_plot(lua_State *L) {
		if (!_lg_typecheck_line_plot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::line_plot(long p1, long p2) function, expected prototype:\nvoid mglBase::line_plot(long p1, long p2)\nClass arguments details:\n");
		}

		long p1=(long)lua_tointeger(L,2);
		long p2=(long)lua_tointeger(L,3);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::line_plot(long, long). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->line_plot(p1, p2);

		return 0;
	}

	// void mglBase::trig_plot(long p1, long p2, long p3)
	static int _bind_trig_plot(lua_State *L) {
		if (!_lg_typecheck_trig_plot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::trig_plot(long p1, long p2, long p3) function, expected prototype:\nvoid mglBase::trig_plot(long p1, long p2, long p3)\nClass arguments details:\n");
		}

		long p1=(long)lua_tointeger(L,2);
		long p2=(long)lua_tointeger(L,3);
		long p3=(long)lua_tointeger(L,4);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::trig_plot(long, long, long). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->trig_plot(p1, p2, p3);

		return 0;
	}

	// void mglBase::quad_plot(long p1, long p2, long p3, long p4)
	static int _bind_quad_plot(lua_State *L) {
		if (!_lg_typecheck_quad_plot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::quad_plot(long p1, long p2, long p3, long p4) function, expected prototype:\nvoid mglBase::quad_plot(long p1, long p2, long p3, long p4)\nClass arguments details:\n");
		}

		long p1=(long)lua_tointeger(L,2);
		long p2=(long)lua_tointeger(L,3);
		long p3=(long)lua_tointeger(L,4);
		long p4=(long)lua_tointeger(L,5);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::quad_plot(long, long, long, long). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->quad_plot(p1, p2, p3, p4);

		return 0;
	}

	// void mglBase::Glyph(double x, double y, double f, int style, long icode, double col)
	static int _bind_Glyph(lua_State *L) {
		if (!_lg_typecheck_Glyph(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::Glyph(double x, double y, double f, int style, long icode, double col) function, expected prototype:\nvoid mglBase::Glyph(double x, double y, double f, int style, long icode, double col)\nClass arguments details:\n");
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		double f=(double)lua_tonumber(L,4);
		int style=(int)lua_tointeger(L,5);
		long icode=(long)lua_tointeger(L,6);
		double col=(double)lua_tonumber(L,7);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::Glyph(double, double, double, int, long, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Glyph(x, y, f, style, icode, col);

		return 0;
	}

	// void mglBase::vect_plot(long p1, long p2, double s = 1)
	static int _bind_vect_plot(lua_State *L) {
		if (!_lg_typecheck_vect_plot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::vect_plot(long p1, long p2, double s = 1) function, expected prototype:\nvoid mglBase::vect_plot(long p1, long p2, double s = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long p1=(long)lua_tointeger(L,2);
		long p2=(long)lua_tointeger(L,3);
		double s=luatop>3 ? (double)lua_tonumber(L,4) : (double)1;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::vect_plot(long, long, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->vect_plot(p1, p2, s);

		return 0;
	}

	// double mglBase::mark_size()
	static int _bind_mark_size(lua_State *L) {
		if (!_lg_typecheck_mark_size(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglBase::mark_size() function, expected prototype:\ndouble mglBase::mark_size()\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglBase::mark_size(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		double lret = self->mark_size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * mglBase::last_line()
	static int _bind_last_line(lua_State *L) {
		if (!_lg_typecheck_last_line(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * mglBase::last_line() function, expected prototype:\nconst char * mglBase::last_line()\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * mglBase::last_line(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		const char * lret = self->last_line();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool mglBase::Stop()
	static int _bind_getStop(lua_State *L) {
		if (!_lg_typecheck_getStop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglBase::Stop() function, expected prototype:\nbool mglBase::Stop()\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglBase::Stop(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		bool lret = self->Stop;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// mglPoint mglBase::Min()
	static int _bind_getMin(lua_State *L) {
		if (!_lg_typecheck_getMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglPoint mglBase::Min() function, expected prototype:\nmglPoint mglBase::Min()\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglPoint mglBase::Min(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		const mglPoint* lret = &self->Min;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglPoint >::push(L,lret,false);

		return 1;
	}

	// mglPoint mglBase::Max()
	static int _bind_getMax(lua_State *L) {
		if (!_lg_typecheck_getMax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglPoint mglBase::Max() function, expected prototype:\nmglPoint mglBase::Max()\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglPoint mglBase::Max(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		const mglPoint* lret = &self->Max;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglPoint >::push(L,lret,false);

		return 1;
	}

	// double mglBase::ZMin()
	static int _bind_getZMin(lua_State *L) {
		if (!_lg_typecheck_getZMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglBase::ZMin() function, expected prototype:\ndouble mglBase::ZMin()\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglBase::ZMin(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		double lret = self->ZMin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// std::string mglBase::Mess()
	static int _bind_getMess(lua_State *L) {
		if (!_lg_typecheck_getMess(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string mglBase::Mess() function, expected prototype:\nstd::string mglBase::Mess()\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string mglBase::Mess(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		std::string lret = self->Mess;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int mglBase::ObjId()
	static int _bind_getObjId(lua_State *L) {
		if (!_lg_typecheck_getObjId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglBase::ObjId() function, expected prototype:\nint mglBase::ObjId()\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglBase::ObjId(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		int lret = self->ObjId;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglBase::HighId()
	static int _bind_getHighId(lua_State *L) {
		if (!_lg_typecheck_getHighId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglBase::HighId() function, expected prototype:\nint mglBase::HighId()\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglBase::HighId(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		int lret = self->HighId;
		lua_pushnumber(L,lret);

		return 1;
	}

	// std::vector< mglGroup > mglBase::Grp()
	static int _bind_getGrp(lua_State *L) {
		if (!_lg_typecheck_getGrp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::vector< mglGroup > mglBase::Grp() function, expected prototype:\nstd::vector< mglGroup > mglBase::Grp()\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::vector< mglGroup > mglBase::Grp(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		const std::vector< mglGroup >* lret = &self->Grp;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< std::vector< mglGroup > >::push(L,lret,false);

		return 1;
	}

	// std::vector< mglActivePos > mglBase::Act()
	static int _bind_getAct(lua_State *L) {
		if (!_lg_typecheck_getAct(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::vector< mglActivePos > mglBase::Act() function, expected prototype:\nstd::vector< mglActivePos > mglBase::Act()\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::vector< mglActivePos > mglBase::Act(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		const std::vector< mglActivePos >* lret = &self->Act;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< std::vector< mglActivePos > >::push(L,lret,false);

		return 1;
	}

	// std::string mglBase::PlotId()
	static int _bind_getPlotId(lua_State *L) {
		if (!_lg_typecheck_getPlotId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string mglBase::PlotId() function, expected prototype:\nstd::string mglBase::PlotId()\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string mglBase::PlotId(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		std::string lret = self->PlotId;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// double mglBase::CDef()
	static int _bind_getCDef(lua_State *L) {
		if (!_lg_typecheck_getCDef(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglBase::CDef() function, expected prototype:\ndouble mglBase::CDef()\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglBase::CDef(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		double lret = self->CDef;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglBase::AlphaDef()
	static int _bind_getAlphaDef(lua_State *L) {
		if (!_lg_typecheck_getAlphaDef(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglBase::AlphaDef() function, expected prototype:\ndouble mglBase::AlphaDef()\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglBase::AlphaDef(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		double lret = self->AlphaDef;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglBase::BarWidth()
	static int _bind_getBarWidth(lua_State *L) {
		if (!_lg_typecheck_getBarWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglBase::BarWidth() function, expected prototype:\ndouble mglBase::BarWidth()\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglBase::BarWidth(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		double lret = self->BarWidth;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglBase::MeshNum()
	static int _bind_getMeshNum(lua_State *L) {
		if (!_lg_typecheck_getMeshNum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglBase::MeshNum() function, expected prototype:\nint mglBase::MeshNum()\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglBase::MeshNum(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		int lret = self->MeshNum;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglBase::FaceNum()
	static int _bind_getFaceNum(lua_State *L) {
		if (!_lg_typecheck_getFaceNum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglBase::FaceNum() function, expected prototype:\nint mglBase::FaceNum()\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglBase::FaceNum(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		int lret = self->FaceNum;
		lua_pushnumber(L,lret);

		return 1;
	}

	// char mglBase::Arrow1()
	static int _bind_getArrow1(lua_State *L) {
		if (!_lg_typecheck_getArrow1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in char mglBase::Arrow1() function, expected prototype:\nchar mglBase::Arrow1()\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call char mglBase::Arrow1(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		char lret = self->Arrow1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// char mglBase::Arrow2()
	static int _bind_getArrow2(lua_State *L) {
		if (!_lg_typecheck_getArrow2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in char mglBase::Arrow2() function, expected prototype:\nchar mglBase::Arrow2()\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call char mglBase::Arrow2(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		char lret = self->Arrow2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglBase::InUse()
	static int _bind_getInUse(lua_State *L) {
		if (!_lg_typecheck_getInUse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglBase::InUse() function, expected prototype:\nlong mglBase::InUse()\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglBase::InUse(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		long lret = self->InUse;
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglBase::Flag()
	static int _bind_getFlag(lua_State *L) {
		if (!_lg_typecheck_getFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglBase::Flag() function, expected prototype:\nlong mglBase::Flag()\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglBase::Flag(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		long lret = self->Flag;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglBase::Stop(bool value)
	static int _bind_setStop(lua_State *L) {
		if (!_lg_typecheck_setStop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::Stop(bool value) function, expected prototype:\nvoid mglBase::Stop(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::Stop(bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Stop = value;

		return 0;
	}

	// void mglBase::Min(mglPoint value)
	static int _bind_setMin(lua_State *L) {
		if (!_lg_typecheck_setMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::Min(mglPoint value) function, expected prototype:\nvoid mglBase::Min(mglPoint value)\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		mglPoint* value_ptr=(Luna< mglPoint >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in mglBase::Min function");
		}
		mglPoint value=*value_ptr;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::Min(mglPoint). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Min = value;

		return 0;
	}

	// void mglBase::Max(mglPoint value)
	static int _bind_setMax(lua_State *L) {
		if (!_lg_typecheck_setMax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::Max(mglPoint value) function, expected prototype:\nvoid mglBase::Max(mglPoint value)\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		mglPoint* value_ptr=(Luna< mglPoint >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in mglBase::Max function");
		}
		mglPoint value=*value_ptr;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::Max(mglPoint). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Max = value;

		return 0;
	}

	// void mglBase::ZMin(double value)
	static int _bind_setZMin(lua_State *L) {
		if (!_lg_typecheck_setZMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::ZMin(double value) function, expected prototype:\nvoid mglBase::ZMin(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::ZMin(double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->ZMin = value;

		return 0;
	}

	// void mglBase::Mess(std::string value)
	static int _bind_setMess(lua_State *L) {
		if (!_lg_typecheck_setMess(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::Mess(std::string value) function, expected prototype:\nvoid mglBase::Mess(std::string value)\nClass arguments details:\n");
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::Mess(std::string). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Mess = value;

		return 0;
	}

	// void mglBase::ObjId(int value)
	static int _bind_setObjId(lua_State *L) {
		if (!_lg_typecheck_setObjId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::ObjId(int value) function, expected prototype:\nvoid mglBase::ObjId(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::ObjId(int). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->ObjId = value;

		return 0;
	}

	// void mglBase::HighId(int value)
	static int _bind_setHighId(lua_State *L) {
		if (!_lg_typecheck_setHighId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::HighId(int value) function, expected prototype:\nvoid mglBase::HighId(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::HighId(int). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->HighId = value;

		return 0;
	}

	// void mglBase::Grp(std::vector< mglGroup > value)
	static int _bind_setGrp(lua_State *L) {
		if (!_lg_typecheck_setGrp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::Grp(std::vector< mglGroup > value) function, expected prototype:\nvoid mglBase::Grp(std::vector< mglGroup > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		std::vector< mglGroup >* value_ptr=(Luna< std::vector< mglGroup > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in mglBase::Grp function");
		}
		std::vector< mglGroup > value=*value_ptr;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::Grp(std::vector< mglGroup >). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Grp = value;

		return 0;
	}

	// void mglBase::Act(std::vector< mglActivePos > value)
	static int _bind_setAct(lua_State *L) {
		if (!_lg_typecheck_setAct(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::Act(std::vector< mglActivePos > value) function, expected prototype:\nvoid mglBase::Act(std::vector< mglActivePos > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		std::vector< mglActivePos >* value_ptr=(Luna< std::vector< mglActivePos > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in mglBase::Act function");
		}
		std::vector< mglActivePos > value=*value_ptr;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::Act(std::vector< mglActivePos >). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Act = value;

		return 0;
	}

	// void mglBase::PlotId(std::string value)
	static int _bind_setPlotId(lua_State *L) {
		if (!_lg_typecheck_setPlotId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::PlotId(std::string value) function, expected prototype:\nvoid mglBase::PlotId(std::string value)\nClass arguments details:\n");
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::PlotId(std::string). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->PlotId = value;

		return 0;
	}

	// void mglBase::CDef(double value)
	static int _bind_setCDef(lua_State *L) {
		if (!_lg_typecheck_setCDef(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::CDef(double value) function, expected prototype:\nvoid mglBase::CDef(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::CDef(double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->CDef = value;

		return 0;
	}

	// void mglBase::AlphaDef(double value)
	static int _bind_setAlphaDef(lua_State *L) {
		if (!_lg_typecheck_setAlphaDef(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::AlphaDef(double value) function, expected prototype:\nvoid mglBase::AlphaDef(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::AlphaDef(double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->AlphaDef = value;

		return 0;
	}

	// void mglBase::BarWidth(double value)
	static int _bind_setBarWidth(lua_State *L) {
		if (!_lg_typecheck_setBarWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::BarWidth(double value) function, expected prototype:\nvoid mglBase::BarWidth(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::BarWidth(double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->BarWidth = value;

		return 0;
	}

	// void mglBase::MeshNum(int value)
	static int _bind_setMeshNum(lua_State *L) {
		if (!_lg_typecheck_setMeshNum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::MeshNum(int value) function, expected prototype:\nvoid mglBase::MeshNum(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::MeshNum(int). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->MeshNum = value;

		return 0;
	}

	// void mglBase::FaceNum(int value)
	static int _bind_setFaceNum(lua_State *L) {
		if (!_lg_typecheck_setFaceNum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::FaceNum(int value) function, expected prototype:\nvoid mglBase::FaceNum(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::FaceNum(int). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->FaceNum = value;

		return 0;
	}

	// void mglBase::Arrow1(char value)
	static int _bind_setArrow1(lua_State *L) {
		if (!_lg_typecheck_setArrow1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::Arrow1(char value) function, expected prototype:\nvoid mglBase::Arrow1(char value)\nClass arguments details:\n");
		}

		char value=(char)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::Arrow1(char). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Arrow1 = value;

		return 0;
	}

	// void mglBase::Arrow2(char value)
	static int _bind_setArrow2(lua_State *L) {
		if (!_lg_typecheck_setArrow2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::Arrow2(char value) function, expected prototype:\nvoid mglBase::Arrow2(char value)\nClass arguments details:\n");
		}

		char value=(char)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::Arrow2(char). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Arrow2 = value;

		return 0;
	}

	// void mglBase::InUse(long value)
	static int _bind_setInUse(lua_State *L) {
		if (!_lg_typecheck_setInUse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::InUse(long value) function, expected prototype:\nvoid mglBase::InUse(long value)\nClass arguments details:\n");
		}

		long value=(long)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::InUse(long). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->InUse = value;

		return 0;
	}

	// void mglBase::Flag(long value)
	static int _bind_setFlag(lua_State *L) {
		if (!_lg_typecheck_setFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::Flag(long value) function, expected prototype:\nvoid mglBase::Flag(long value)\nClass arguments details:\n");
		}

		long value=(long)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::Flag(long). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Flag = value;

		return 0;
	}

	// bool mglBase::base_Light(bool enable)
	static int _bind_base_Light(lua_State *L) {
		if (!_lg_typecheck_base_Light(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglBase::base_Light(bool enable) function, expected prototype:\nbool mglBase::base_Light(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglBase::base_Light(bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		bool lret = self->mglBase::Light(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void mglBase::base_SetAmbient(double bright = 0.5)
	static int _bind_base_SetAmbient(lua_State *L) {
		if (!_lg_typecheck_base_SetAmbient(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::base_SetAmbient(double bright = 0.5) function, expected prototype:\nvoid mglBase::base_SetAmbient(double bright = 0.5)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double bright=luatop>1 ? (double)lua_tonumber(L,2) : (double)0.5;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::base_SetAmbient(double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglBase::SetAmbient(bright);

		return 0;
	}

	// bool mglBase::base_Alpha(bool enable)
	static int _bind_base_Alpha(lua_State *L) {
		if (!_lg_typecheck_base_Alpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglBase::base_Alpha(bool enable) function, expected prototype:\nbool mglBase::base_Alpha(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglBase::base_Alpha(bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		bool lret = self->mglBase::Alpha(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// double mglBase::base_GetRatio() const
	static int _bind_base_GetRatio(lua_State *L) {
		if (!_lg_typecheck_base_GetRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglBase::base_GetRatio() const function, expected prototype:\ndouble mglBase::base_GetRatio() const\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglBase::base_GetRatio() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		double lret = self->mglBase::GetRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglBase::base_GetWidth() const
	static int _bind_base_GetWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglBase::base_GetWidth() const function, expected prototype:\nint mglBase::base_GetWidth() const\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglBase::base_GetWidth() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		int lret = self->mglBase::GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglBase::base_GetHeight() const
	static int _bind_base_GetHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglBase::base_GetHeight() const function, expected prototype:\nint mglBase::base_GetHeight() const\nClass arguments details:\n");
		}


		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglBase::base_GetHeight() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		int lret = self->mglBase::GetHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglBase::base_SetQuality(int qual = 2)
	static int _bind_base_SetQuality(lua_State *L) {
		if (!_lg_typecheck_base_SetQuality(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::base_SetQuality(int qual = 2) function, expected prototype:\nvoid mglBase::base_SetQuality(int qual = 2)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int qual=luatop>1 ? (int)lua_tointeger(L,2) : (int)2;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::base_SetQuality(int). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglBase::SetQuality(qual);

		return 0;
	}

	// void mglBase::base_Reserve(long n)
	static int _bind_base_Reserve(lua_State *L) {
		if (!_lg_typecheck_base_Reserve(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglBase::base_Reserve(long n) function, expected prototype:\nvoid mglBase::base_Reserve(long n)\nClass arguments details:\n");
		}

		long n=(long)lua_tointeger(L,2);

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglBase::base_Reserve(long). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglBase::Reserve(n);

		return 0;
	}

	// bool mglBase::base_ScalePoint(mglPoint & p, mglPoint & n, bool use_nan = true) const
	static int _bind_base_ScalePoint(lua_State *L) {
		if (!_lg_typecheck_base_ScalePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglBase::base_ScalePoint(mglPoint & p, mglPoint & n, bool use_nan = true) const function, expected prototype:\nbool mglBase::base_ScalePoint(mglPoint & p, mglPoint & n, bool use_nan = true) const\nClass arguments details:\narg 1 ID = 56902440\narg 2 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		mglPoint* p_ptr=(Luna< mglPoint >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglBase::base_ScalePoint function");
		}
		mglPoint & p=*p_ptr;
		mglPoint* n_ptr=(Luna< mglPoint >::check(L,3));
		if( !n_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg n in mglBase::base_ScalePoint function");
		}
		mglPoint & n=*n_ptr;
		bool use_nan=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglBase::base_ScalePoint(mglPoint &, mglPoint &, bool) const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		bool lret = self->mglBase::ScalePoint(p, n, use_nan);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

mglBase* LunaTraits< mglBase >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglBase::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void mglBase::StartAutoGroup(const char * arg1)
	// void mglBase::EndGroup()
	// double mglBase::GetOrgX(char dir) const
	// double mglBase::GetOrgY(char dir) const
	// double mglBase::GetOrgZ(char dir) const
	// void mglBase::mark_plot(long p, char type, double size = 1)
	// void mglBase::arrow_plot(long p1, long p2, char st)
	// void mglBase::line_plot(long p1, long p2)
	// void mglBase::trig_plot(long p1, long p2, long p3)
	// void mglBase::quad_plot(long p1, long p2, long p3, long p4)
	// void mglBase::Glyph(double x, double y, double f, int style, long icode, double col)
	// double mglBase::text_plot(long p, const wchar_t * text, const char * fnt, double size = -1, double sh = 0, double col = -('k'), bool rot = true)
	// void mglBase::LightScale()
}

void LunaTraits< mglBase >::_bind_dtor(mglBase* obj) {
	delete obj;
}

const char LunaTraits< mglBase >::className[] = "mglBase";
const char LunaTraits< mglBase >::fullName[] = "mglBase";
const char LunaTraits< mglBase >::moduleName[] = "mathgl";
const char* LunaTraits< mglBase >::parents[] = {0};
const int LunaTraits< mglBase >::hash = 88502113;
const int LunaTraits< mglBase >::uniqueIDs[] = {88502113,0};

luna_RegType LunaTraits< mglBase >::methods[] = {
	{"get", &luna_wrapper_mglBase::_bind_get},
	{"set", &luna_wrapper_mglBase::_bind_set},
	{"clr", &luna_wrapper_mglBase::_bind_clr},
	{"ZoomAxis", &luna_wrapper_mglBase::_bind_ZoomAxis},
	{"SetRanges", &luna_wrapper_mglBase::_bind_SetRanges},
	{"CRange", &luna_wrapper_mglBase::_bind_CRange},
	{"XRange", &luna_wrapper_mglBase::_bind_XRange},
	{"YRange", &luna_wrapper_mglBase::_bind_YRange},
	{"ZRange", &luna_wrapper_mglBase::_bind_ZRange},
	{"SetAutoRanges", &luna_wrapper_mglBase::_bind_SetAutoRanges},
	{"SetOrigin", &luna_wrapper_mglBase::_bind_SetOrigin},
	{"SaveState", &luna_wrapper_mglBase::_bind_SaveState},
	{"LoadState", &luna_wrapper_mglBase::_bind_LoadState},
	{"AdjustZMin", &luna_wrapper_mglBase::_bind_AdjustZMin},
	{"SetFunc", &luna_wrapper_mglBase::_bind_SetFunc},
	{"SetCoor", &luna_wrapper_mglBase::_bind_SetCoor},
	{"CutOff", &luna_wrapper_mglBase::_bind_CutOff},
	{"Ternary", &luna_wrapper_mglBase::_bind_Ternary},
	{"SetCut", &luna_wrapper_mglBase::_bind_SetCut},
	{"SetCutBox", &luna_wrapper_mglBase::_bind_SetCutBox},
	{"Light", &luna_wrapper_mglBase::_bind_Light},
	{"SetAmbient", &luna_wrapper_mglBase::_bind_SetAmbient},
	{"SetDifLight", &luna_wrapper_mglBase::_bind_SetDifLight},
	{"Alpha", &luna_wrapper_mglBase::_bind_Alpha},
	{"SetAlphaDef", &luna_wrapper_mglBase::_bind_SetAlphaDef},
	{"SetPalette", &luna_wrapper_mglBase::_bind_SetPalette},
	{"GetNumPal", &luna_wrapper_mglBase::_bind_GetNumPal},
	{"SetDefScheme", &luna_wrapper_mglBase::_bind_SetDefScheme},
	{"SetMeshNum", &luna_wrapper_mglBase::_bind_SetMeshNum},
	{"SetBarWidth", &luna_wrapper_mglBase::_bind_SetBarWidth},
	{"SetMarkSize", &luna_wrapper_mglBase::_bind_SetMarkSize},
	{"SetArrowSize", &luna_wrapper_mglBase::_bind_SetArrowSize},
	{"SetWarn", &luna_wrapper_mglBase::_bind_SetWarn},
	{"GetWarn", &luna_wrapper_mglBase::_bind_GetWarn},
	{"StartAutoGroup", &luna_wrapper_mglBase::_bind_StartAutoGroup},
	{"StartGroup", &luna_wrapper_mglBase::_bind_StartGroup},
	{"EndGroup", &luna_wrapper_mglBase::_bind_EndGroup},
	{"Highlight", &luna_wrapper_mglBase::_bind_Highlight},
	{"GetFont", &luna_wrapper_mglBase::_bind_GetFont},
	{"RestoreFont", &luna_wrapper_mglBase::_bind_RestoreFont},
	{"LoadFont", &luna_wrapper_mglBase::_bind_LoadFont},
	{"CopyFont", &luna_wrapper_mglBase::_bind_CopyFont},
	{"GetFontSize", &luna_wrapper_mglBase::_bind_GetFontSize},
	{"TextWidth", &luna_wrapper_mglBase::_bind_TextWidth},
	{"TextHeight", &luna_wrapper_mglBase::_bind_TextHeight},
	{"FontFactor", &luna_wrapper_mglBase::_bind_FontFactor},
	{"GetRatio", &luna_wrapper_mglBase::_bind_GetRatio},
	{"GetWidth", &luna_wrapper_mglBase::_bind_GetWidth},
	{"GetHeight", &luna_wrapper_mglBase::_bind_GetHeight},
	{"SetRotatedText", &luna_wrapper_mglBase::_bind_SetRotatedText},
	{"SetTickRotate", &luna_wrapper_mglBase::_bind_SetTickRotate},
	{"SetTickSkip", &luna_wrapper_mglBase::_bind_SetTickSkip},
	{"AddLegend", &luna_wrapper_mglBase::_bind_AddLegend},
	{"ClearLegend", &luna_wrapper_mglBase::_bind_ClearLegend},
	{"SetQuality", &luna_wrapper_mglBase::_bind_SetQuality},
	{"GetQuality", &luna_wrapper_mglBase::_bind_GetQuality},
	{"AddPnt", &luna_wrapper_mglBase::_bind_AddPnt},
	{"CopyNtoC", &luna_wrapper_mglBase::_bind_CopyNtoC},
	{"CopyProj", &luna_wrapper_mglBase::_bind_CopyProj},
	{"Reserve", &luna_wrapper_mglBase::_bind_Reserve},
	{"SetReduceAcc", &luna_wrapper_mglBase::_bind_SetReduceAcc},
	{"AddGlyph", &luna_wrapper_mglBase::_bind_AddGlyph},
	{"AddActive", &luna_wrapper_mglBase::_bind_AddActive},
	{"ClearUnused", &luna_wrapper_mglBase::_bind_ClearUnused},
	{"GetPntP", &luna_wrapper_mglBase::_bind_GetPntP},
	{"GetPntN", &luna_wrapper_mglBase::_bind_GetPntN},
	{"GetClrC", &luna_wrapper_mglBase::_bind_GetClrC},
	{"GetGlf", &luna_wrapper_mglBase::_bind_GetGlf},
	{"GetGlfNum", &luna_wrapper_mglBase::_bind_GetGlfNum},
	{"GetPnt", &luna_wrapper_mglBase::_bind_GetPnt},
	{"GetPntNum", &luna_wrapper_mglBase::_bind_GetPntNum},
	{"GetPrm", &luna_wrapper_mglBase::_bind_GetPrm},
	{"GetPrmNum", &luna_wrapper_mglBase::_bind_GetPrmNum},
	{"GetPtx", &luna_wrapper_mglBase::_bind_GetPtx},
	{"GetPtxNum", &luna_wrapper_mglBase::_bind_GetPtxNum},
	{"GetTxt", &luna_wrapper_mglBase::_bind_GetTxt},
	{"GetTxtNum", &luna_wrapper_mglBase::_bind_GetTxtNum},
	{"ScalePoint", &luna_wrapper_mglBase::_bind_ScalePoint},
	{"GetOrgX", &luna_wrapper_mglBase::_bind_GetOrgX},
	{"GetOrgY", &luna_wrapper_mglBase::_bind_GetOrgY},
	{"GetOrgZ", &luna_wrapper_mglBase::_bind_GetOrgZ},
	{"GetC", &luna_wrapper_mglBase::_bind_GetC},
	{"GetA", &luna_wrapper_mglBase::_bind_GetA},
	{"SetPenPal", &luna_wrapper_mglBase::_bind_SetPenPal},
	{"AddTexture", &luna_wrapper_mglBase::_bind_AddTexture},
	{"DefColor", &luna_wrapper_mglBase::_bind_DefColor},
	{"NextColor", &luna_wrapper_mglBase::_bind_NextColor},
	{"mark_plot", &luna_wrapper_mglBase::_bind_mark_plot},
	{"arrow_plot", &luna_wrapper_mglBase::_bind_arrow_plot},
	{"line_plot", &luna_wrapper_mglBase::_bind_line_plot},
	{"trig_plot", &luna_wrapper_mglBase::_bind_trig_plot},
	{"quad_plot", &luna_wrapper_mglBase::_bind_quad_plot},
	{"Glyph", &luna_wrapper_mglBase::_bind_Glyph},
	{"vect_plot", &luna_wrapper_mglBase::_bind_vect_plot},
	{"mark_size", &luna_wrapper_mglBase::_bind_mark_size},
	{"last_line", &luna_wrapper_mglBase::_bind_last_line},
	{"getStop", &luna_wrapper_mglBase::_bind_getStop},
	{"getMin", &luna_wrapper_mglBase::_bind_getMin},
	{"getMax", &luna_wrapper_mglBase::_bind_getMax},
	{"getZMin", &luna_wrapper_mglBase::_bind_getZMin},
	{"getMess", &luna_wrapper_mglBase::_bind_getMess},
	{"getObjId", &luna_wrapper_mglBase::_bind_getObjId},
	{"getHighId", &luna_wrapper_mglBase::_bind_getHighId},
	{"getGrp", &luna_wrapper_mglBase::_bind_getGrp},
	{"getAct", &luna_wrapper_mglBase::_bind_getAct},
	{"getPlotId", &luna_wrapper_mglBase::_bind_getPlotId},
	{"getCDef", &luna_wrapper_mglBase::_bind_getCDef},
	{"getAlphaDef", &luna_wrapper_mglBase::_bind_getAlphaDef},
	{"getBarWidth", &luna_wrapper_mglBase::_bind_getBarWidth},
	{"getMeshNum", &luna_wrapper_mglBase::_bind_getMeshNum},
	{"getFaceNum", &luna_wrapper_mglBase::_bind_getFaceNum},
	{"getArrow1", &luna_wrapper_mglBase::_bind_getArrow1},
	{"getArrow2", &luna_wrapper_mglBase::_bind_getArrow2},
	{"getInUse", &luna_wrapper_mglBase::_bind_getInUse},
	{"getFlag", &luna_wrapper_mglBase::_bind_getFlag},
	{"setStop", &luna_wrapper_mglBase::_bind_setStop},
	{"setMin", &luna_wrapper_mglBase::_bind_setMin},
	{"setMax", &luna_wrapper_mglBase::_bind_setMax},
	{"setZMin", &luna_wrapper_mglBase::_bind_setZMin},
	{"setMess", &luna_wrapper_mglBase::_bind_setMess},
	{"setObjId", &luna_wrapper_mglBase::_bind_setObjId},
	{"setHighId", &luna_wrapper_mglBase::_bind_setHighId},
	{"setGrp", &luna_wrapper_mglBase::_bind_setGrp},
	{"setAct", &luna_wrapper_mglBase::_bind_setAct},
	{"setPlotId", &luna_wrapper_mglBase::_bind_setPlotId},
	{"setCDef", &luna_wrapper_mglBase::_bind_setCDef},
	{"setAlphaDef", &luna_wrapper_mglBase::_bind_setAlphaDef},
	{"setBarWidth", &luna_wrapper_mglBase::_bind_setBarWidth},
	{"setMeshNum", &luna_wrapper_mglBase::_bind_setMeshNum},
	{"setFaceNum", &luna_wrapper_mglBase::_bind_setFaceNum},
	{"setArrow1", &luna_wrapper_mglBase::_bind_setArrow1},
	{"setArrow2", &luna_wrapper_mglBase::_bind_setArrow2},
	{"setInUse", &luna_wrapper_mglBase::_bind_setInUse},
	{"setFlag", &luna_wrapper_mglBase::_bind_setFlag},
	{"base_Light", &luna_wrapper_mglBase::_bind_base_Light},
	{"base_SetAmbient", &luna_wrapper_mglBase::_bind_base_SetAmbient},
	{"base_Alpha", &luna_wrapper_mglBase::_bind_base_Alpha},
	{"base_GetRatio", &luna_wrapper_mglBase::_bind_base_GetRatio},
	{"base_GetWidth", &luna_wrapper_mglBase::_bind_base_GetWidth},
	{"base_GetHeight", &luna_wrapper_mglBase::_bind_base_GetHeight},
	{"base_SetQuality", &luna_wrapper_mglBase::_bind_base_SetQuality},
	{"base_Reserve", &luna_wrapper_mglBase::_bind_base_Reserve},
	{"base_ScalePoint", &luna_wrapper_mglBase::_bind_base_ScalePoint},
	{"dynCast", &luna_wrapper_mglBase::_bind_dynCast},
	{"__eq", &luna_wrapper_mglBase::_bind___eq},
	{"fromVoid", &luna_wrapper_mglBase::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglBase::_bind_asVoid},
	{"getTable", &luna_wrapper_mglBase::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< mglBase >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglBase >::enumValues[] = {
	{0,0}
};


