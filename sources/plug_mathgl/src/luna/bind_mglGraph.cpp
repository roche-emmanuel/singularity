#include <plug_common.h>

#include <luna/wrappers/wrapper_mglGraph.h>

class luna_wrapper_mglGraph {
public:
	typedef Luna< mglGraph > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<mglGraph,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48672486) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglGraph*)");
		}

		mglGraph* rhs =(Luna< mglGraph >::check(L,2));
		mglGraph* self=(Luna< mglGraph >::check(L,1));
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

		mglGraph* self= (mglGraph*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglGraph >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48672486) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< mglGraph >::check(L,1));
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

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglGraph");
		
		return luna_dynamicCast(L,converters,"mglGraph",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>3 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48672486) ) return false;
		if( (!(Luna< mglGraph >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,88502113)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< mglBase >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,48672486) ) return false;
		if( (!(Luna< mglGraph >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,88502113)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< mglBase >::check(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Self(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DefaultPlotParam(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetPlotId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_SetTranspType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Light_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Light_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDifLight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddLight_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,3))) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddLight_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,4))) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		if( luatop>6 && lua_isnumber(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAmbient(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fog(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
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

	inline static bool _lg_typecheck_SetMeshNum(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFaceNum(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCut(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCutBox(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56902440) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CutOff(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFontSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFontDef(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFontSizePT(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFontSizeCM(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFontSizeIN(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,48672486)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RestoreFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRotatedText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPalette(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDefScheme(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetWarn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetWarn(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Message(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ZoomAxis(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,56902440) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRange_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRange_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRanges_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRanges_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRanges_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRanges_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		if( luatop>6 && lua_isnumber(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRanges_overload_5(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOrigin_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOrigin_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
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

	inline static bool _lg_typecheck_Ternary(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	inline static bool _lg_typecheck_SetTickLen(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAxisStl(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTicksTime(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTicksVal_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTicksVal_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTicks(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Adjust(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTickTempl(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTuneTicks(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTickShift(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTimeUTC(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SubPlot(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		if( luatop>6 && lua_isnumber(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MultiPlot(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InPlot(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ColumnPlot(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GridPlot(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StickPlot(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPlotFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Push(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Pop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Title(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Aspect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Rotate(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RotateN(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Perspective(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_View(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Zoom(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetQuality(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StartGroup(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_ShowImage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WriteFrame(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WriteJPEG(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WritePNG(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WriteBMP(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WriteTGA(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WriteEPS(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WriteTEX(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WriteBPS(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WriteSVG(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WriteGIF(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WriteOBJ(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WriteXYZ(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WriteSTL(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WriteOFF(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WritePRC(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WriteJSON(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Finish(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_NewFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EndFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNumFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ResetFrames(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DelFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StartGIF(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CloseGIF(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ExportMGLD(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ImportMGLD(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRGB_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRGB_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRGBA_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRGBA_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBGRN(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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

	inline static bool _lg_typecheck_CalcXYZ(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CalcScr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetObjId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetObjId(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSplId(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsActive(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Combine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,48672486)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MPI_Send(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MPI_Recv(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clf_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clf_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ClearUnused(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Ball(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Mark_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,2))) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Mark_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Mark_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Mark_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Line(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56902440) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Curve(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56902440) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56902440) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,56902440) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Error_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Error_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Error_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Error_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Face(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56902440) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56902440) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,56902440) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FaceX(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		if( luatop>6 && lua_isnumber(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FaceY(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		if( luatop>6 && lua_isnumber(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FaceZ(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		if( luatop>6 && lua_isnumber(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Drop(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56902440) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		if( luatop>6 && lua_isnumber(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Sphere(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Ellipse(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56902440) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Circle(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Rhomb(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56902440) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Puts_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,2))) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Puts_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Puts_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,3))) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Text_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Text_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Text_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Box(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Axis(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Grid_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Grid_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Grid_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Label_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Label_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Label_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Label_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Colorbar_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Colorbar_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Colorbar_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Colorbar_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		if( luatop>6 && lua_isnumber(L,7)==0 ) return false;
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

	inline static bool _lg_typecheck_Legend_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Legend_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLegendMarks(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Plot_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Plot_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Plot_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Tape_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Tape_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Tape_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Radar(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Step_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Step_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Step_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Tens_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Tens_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Tens_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Area_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Area_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Area_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Region_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Region_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Stem_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Stem_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Stem_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Bars_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Bars_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Bars_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Barh_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Barh_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Chart(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_BoxPlot_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_BoxPlot_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Candle_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,6))) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Candle_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Candle_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Candle_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Candle_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TextMark_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TextMark_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TextMark_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TextMark_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Table_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Table_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Tube_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Tube_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Tube_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Tube_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Tube_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Tube_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Torus(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Mesh_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Mesh_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fall_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fall_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Belt_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Belt_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Surf_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Surf_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Tile_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Tile_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Dens_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Dens_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Boxs_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Boxs_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Cont_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Cont_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Cont_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Cont_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ContF_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ContF_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ContF_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ContF_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ContD_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ContD_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ContD_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ContD_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ContV_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ContV_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ContV_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ContV_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Axial_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Axial_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Axial_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Axial_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Grid3_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isnumber(L,7)==0 ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Grid3_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Dens3_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isnumber(L,7)==0 ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Dens3_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Surf3_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>8 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,6))) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Surf3_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Surf3_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Surf3_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Cloud_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Cloud_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Cont3_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>9 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,6))) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		if( luatop>7 && lua_isnumber(L,8)==0 ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Cont3_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Cont3_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isnumber(L,7)==0 ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Cont3_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ContF3_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>9 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,6))) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		if( luatop>7 && lua_isnumber(L,8)==0 ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ContF3_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ContF3_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isnumber(L,7)==0 ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ContF3_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Beam_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>9 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		if( luatop>7 && (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Beam_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>9 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,6))) ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		if( luatop>8 && (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TileS_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TileS_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SurfC_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SurfC_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SurfA_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SurfA_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Map_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Map_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_STFA_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_STFA_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Surf3A_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>9 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,7))) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Surf3A_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Surf3A_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,6))) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Surf3A_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Surf3C_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>9 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,7))) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Surf3C_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Surf3C_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,6))) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Surf3C_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Dew_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Dew_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Traj_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Traj_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>9 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,7))) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Vect_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Vect_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Vect_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>9 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,7))) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Vect_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Vect3_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>10 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,7))) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		if( luatop>8 && lua_isnumber(L,9)==0 ) return false;
		if( luatop>9 && lua_isstring(L,10)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Vect3_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Flow_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Flow_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Flow_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>9 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,7))) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Flow_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FlowP_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,6))) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FlowP_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FlowP_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<8 || luatop>10 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,7))) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,8))) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		if( luatop>9 && lua_isstring(L,10)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FlowP_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Grad_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Grad_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Grad_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Pipe_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isnumber(L,7)==0 ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Pipe_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Pipe_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>10 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,7))) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		if( luatop>8 && lua_isnumber(L,9)==0 ) return false;
		if( luatop>9 && lua_isstring(L,10)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Pipe_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DensX(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DensY(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DensZ(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ContX_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ContX_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ContY_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ContY_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ContZ_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ContZ_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ContFX_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ContFX_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ContFY_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ContFY_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ContFZ_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ContFZ_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FPlot_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FPlot_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FSurf_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FSurf_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TriPlot_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,6))) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TriPlot_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TriPlot_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_QuadPlot_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,6))) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_QuadPlot_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_QuadPlot_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TriCont_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TriCont_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,6))) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TriContV_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,6))) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TriContV_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>9 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,7))) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Dots_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Dots_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Crust(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fit_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fit_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglData >(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fit_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fit_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,6,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglData >(L,6))) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fit_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		if( lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fit_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		if( lua_isstring(L,6)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,7,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglData >(L,7))) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fit_overload_7(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( lua_isstring(L,6)==0 ) return false;
		if( lua_isstring(L,7)==0 ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fit_overload_8(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<8 || luatop>9 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( lua_isstring(L,6)==0 ) return false;
		if( lua_isstring(L,7)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,8,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglData >(L,8))) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fit2_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fit2_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglData >(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fit3_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fit3_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglData >(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FitS_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FitS_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,6,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglData >(L,6))) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FitS_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		if( lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FitS_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		if( lua_isstring(L,6)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,7,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglData >(L,7))) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FitS_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( lua_isstring(L,6)==0 ) return false;
		if( lua_isstring(L,7)==0 ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FitS_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<8 || luatop>9 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( lua_isstring(L,6)==0 ) return false;
		if( lua_isstring(L,7)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,8,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglData >(L,8))) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FitS_overload_7(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<8 || luatop>9 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,6))) ) return false;
		if( lua_isstring(L,7)==0 ) return false;
		if( lua_isstring(L,8)==0 ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FitS_overload_8(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<9 || luatop>10 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,6))) ) return false;
		if( lua_isstring(L,7)==0 ) return false;
		if( lua_isstring(L,8)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,9,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglData >(L,9))) ) return false;
		if( luatop>9 && lua_isstring(L,10)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PutsFit(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PDE(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fill_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglData >(L,2))) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fill_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglData >(L,2))) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fill_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglData >(L,2))) ) return false;
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
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglDataC >(L,2))) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fill_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglDataC >(L,2))) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fill_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::checkSubType< mglDataC >(L,2))) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DataGrid(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Hist_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Hist_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Hist_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,45413231) ) return false;
		if( (!(Luna< mglDataA >::check(L,5))) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Compression(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_VertexColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DoubleSided(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TextureColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_asImage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,48672486)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetFontSizePT(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// mglGraph::mglGraph(int kind = 0, int width = 600, int height = 400)
	static mglGraph* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglGraph::mglGraph(int kind = 0, int width = 600, int height = 400) function, expected prototype:\nmglGraph::mglGraph(int kind = 0, int width = 600, int height = 400)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int kind=luatop>0 ? (int)lua_tointeger(L,1) : 0;
		int width=luatop>1 ? (int)lua_tointeger(L,2) : 600;
		int height=luatop>2 ? (int)lua_tointeger(L,3) : 400;

		return new mglGraph(kind, width, height);
	}

	// mglGraph::mglGraph(const mglGraph & graph)
	static mglGraph* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglGraph::mglGraph(const mglGraph & graph) function, expected prototype:\nmglGraph::mglGraph(const mglGraph & graph)\nClass arguments details:\narg 1 ID = 48672486\n");
		}

		const mglGraph* graph_ptr=(Luna< mglGraph >::check(L,1));
		if( !graph_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg graph in mglGraph::mglGraph function");
		}
		const mglGraph & graph=*graph_ptr;

		return new mglGraph(graph);
	}

	// mglGraph::mglGraph(mglBase * graph)
	static mglGraph* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglGraph::mglGraph(mglBase * graph) function, expected prototype:\nmglGraph::mglGraph(mglBase * graph)\nClass arguments details:\narg 1 ID = 88502113\n");
		}

		mglBase* graph=(Luna< mglBase >::check(L,1));

		return new mglGraph(graph);
	}

	// mglGraph::mglGraph(lua_Table * data, int kind = 0, int width = 600, int height = 400)
	static mglGraph* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglGraph::mglGraph(lua_Table * data, int kind = 0, int width = 600, int height = 400) function, expected prototype:\nmglGraph::mglGraph(lua_Table * data, int kind = 0, int width = 600, int height = 400)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int kind=luatop>1 ? (int)lua_tointeger(L,2) : 0;
		int width=luatop>2 ? (int)lua_tointeger(L,3) : 600;
		int height=luatop>3 ? (int)lua_tointeger(L,4) : 400;

		return new wrapper_mglGraph(L,NULL, kind, width, height);
	}

	// mglGraph::mglGraph(lua_Table * data, const mglGraph & graph)
	static mglGraph* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglGraph::mglGraph(lua_Table * data, const mglGraph & graph) function, expected prototype:\nmglGraph::mglGraph(lua_Table * data, const mglGraph & graph)\nClass arguments details:\narg 2 ID = 48672486\n");
		}

		const mglGraph* graph_ptr=(Luna< mglGraph >::check(L,2));
		if( !graph_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg graph in mglGraph::mglGraph function");
		}
		const mglGraph & graph=*graph_ptr;

		return new wrapper_mglGraph(L,NULL, graph);
	}

	// mglGraph::mglGraph(lua_Table * data, mglBase * graph)
	static mglGraph* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglGraph::mglGraph(lua_Table * data, mglBase * graph) function, expected prototype:\nmglGraph::mglGraph(lua_Table * data, mglBase * graph)\nClass arguments details:\narg 2 ID = 88502113\n");
		}

		mglBase* graph=(Luna< mglBase >::check(L,2));

		return new wrapper_mglGraph(L,NULL, graph);
	}

	// Overload binder for mglGraph::mglGraph
	static mglGraph* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function mglGraph, cannot match any of the overloads for function mglGraph:\n  mglGraph(int, int, int)\n  mglGraph(const mglGraph &)\n  mglGraph(mglBase *)\n  mglGraph(lua_Table *, int, int, int)\n  mglGraph(lua_Table *, const mglGraph &)\n  mglGraph(lua_Table *, mglBase *)\n");
		return NULL;
	}


	// Function binds:
	// mglBase * mglGraph::Self()
	static int _bind_Self(lua_State *L) {
		if (!_lg_typecheck_Self(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglBase * mglGraph::Self() function, expected prototype:\nmglBase * mglGraph::Self()\nClass arguments details:\n");
		}


		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglBase * mglGraph::Self(). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		mglBase * lret = self->Self();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglBase >::push(L,lret,false);

		return 1;
	}

	// void mglGraph::DefaultPlotParam()
	static int _bind_DefaultPlotParam(lua_State *L) {
		if (!_lg_typecheck_DefaultPlotParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::DefaultPlotParam() function, expected prototype:\nvoid mglGraph::DefaultPlotParam()\nClass arguments details:\n");
		}


		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::DefaultPlotParam(). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->DefaultPlotParam();

		return 0;
	}

	// void mglGraph::SetPlotId(const char * id)
	static int _bind_SetPlotId(lua_State *L) {
		if (!_lg_typecheck_SetPlotId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetPlotId(const char * id) function, expected prototype:\nvoid mglGraph::SetPlotId(const char * id)\nClass arguments details:\n");
		}

		const char * id=(const char *)lua_tostring(L,2);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetPlotId(const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetPlotId(id);

		return 0;
	}

	// void mglGraph::Alpha(bool enable)
	static int _bind_Alpha(lua_State *L) {
		if (!_lg_typecheck_Alpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Alpha(bool enable) function, expected prototype:\nvoid mglGraph::Alpha(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Alpha(bool). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Alpha(enable);

		return 0;
	}

	// void mglGraph::SetAlphaDef(double alpha)
	static int _bind_SetAlphaDef(lua_State *L) {
		if (!_lg_typecheck_SetAlphaDef(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetAlphaDef(double alpha) function, expected prototype:\nvoid mglGraph::SetAlphaDef(double alpha)\nClass arguments details:\n");
		}

		double alpha=(double)lua_tonumber(L,2);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetAlphaDef(double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetAlphaDef(alpha);

		return 0;
	}

	// void mglGraph::SetTranspType(int type)
	static int _bind_SetTranspType(lua_State *L) {
		if (!_lg_typecheck_SetTranspType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetTranspType(int type) function, expected prototype:\nvoid mglGraph::SetTranspType(int type)\nClass arguments details:\n");
		}

		int type=(int)lua_tointeger(L,2);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetTranspType(int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetTranspType(type);

		return 0;
	}

	// void mglGraph::Light(bool enable)
	static int _bind_Light_overload_1(lua_State *L) {
		if (!_lg_typecheck_Light_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Light(bool enable) function, expected prototype:\nvoid mglGraph::Light(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Light(bool). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Light(enable);

		return 0;
	}

	// void mglGraph::Light(int n, bool enable)
	static int _bind_Light_overload_2(lua_State *L) {
		if (!_lg_typecheck_Light_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Light(int n, bool enable) function, expected prototype:\nvoid mglGraph::Light(int n, bool enable)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);
		bool enable=(bool)(lua_toboolean(L,3)==1);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Light(int, bool). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Light(n, enable);

		return 0;
	}

	// Overload binder for mglGraph::Light
	static int _bind_Light(lua_State *L) {
		if (_lg_typecheck_Light_overload_1(L)) return _bind_Light_overload_1(L);
		if (_lg_typecheck_Light_overload_2(L)) return _bind_Light_overload_2(L);

		luaL_error(L, "error in function Light, cannot match any of the overloads for function Light:\n  Light(bool)\n  Light(int, bool)\n");
		return 0;
	}

	// void mglGraph::SetDifLight(bool dif)
	static int _bind_SetDifLight(lua_State *L) {
		if (!_lg_typecheck_SetDifLight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetDifLight(bool dif) function, expected prototype:\nvoid mglGraph::SetDifLight(bool dif)\nClass arguments details:\n");
		}

		bool dif=(bool)(lua_toboolean(L,2)==1);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetDifLight(bool). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetDifLight(dif);

		return 0;
	}

	// void mglGraph::AddLight(int n, mglPoint p, char col = 'w', double bright = 0.5, double ap = 0)
	static int _bind_AddLight_overload_1(lua_State *L) {
		if (!_lg_typecheck_AddLight_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::AddLight(int n, mglPoint p, char col = 'w', double bright = 0.5, double ap = 0) function, expected prototype:\nvoid mglGraph::AddLight(int n, mglPoint p, char col = 'w', double bright = 0.5, double ap = 0)\nClass arguments details:\narg 2 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		int n=(int)lua_tointeger(L,2);
		mglPoint* p_ptr=(Luna< mglPoint >::check(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglGraph::AddLight function");
		}
		mglPoint p=*p_ptr;
		char col=luatop>3 ? (char)lua_tointeger(L,4) : 'w';
		double bright=luatop>4 ? (double)lua_tonumber(L,5) : 0.5;
		double ap=luatop>5 ? (double)lua_tonumber(L,6) : 0;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::AddLight(int, mglPoint, char, double, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->AddLight(n, p, col, bright, ap);

		return 0;
	}

	// void mglGraph::AddLight(int n, mglPoint r, mglPoint p, char col = 'w', double bright = 0.5, double ap = 0)
	static int _bind_AddLight_overload_2(lua_State *L) {
		if (!_lg_typecheck_AddLight_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::AddLight(int n, mglPoint r, mglPoint p, char col = 'w', double bright = 0.5, double ap = 0) function, expected prototype:\nvoid mglGraph::AddLight(int n, mglPoint r, mglPoint p, char col = 'w', double bright = 0.5, double ap = 0)\nClass arguments details:\narg 2 ID = 56902440\narg 3 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		int n=(int)lua_tointeger(L,2);
		mglPoint* r_ptr=(Luna< mglPoint >::check(L,3));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in mglGraph::AddLight function");
		}
		mglPoint r=*r_ptr;
		mglPoint* p_ptr=(Luna< mglPoint >::check(L,4));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglGraph::AddLight function");
		}
		mglPoint p=*p_ptr;
		char col=luatop>4 ? (char)lua_tointeger(L,5) : 'w';
		double bright=luatop>5 ? (double)lua_tonumber(L,6) : 0.5;
		double ap=luatop>6 ? (double)lua_tonumber(L,7) : 0;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::AddLight(int, mglPoint, mglPoint, char, double, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->AddLight(n, r, p, col, bright, ap);

		return 0;
	}

	// Overload binder for mglGraph::AddLight
	static int _bind_AddLight(lua_State *L) {
		if (_lg_typecheck_AddLight_overload_1(L)) return _bind_AddLight_overload_1(L);
		if (_lg_typecheck_AddLight_overload_2(L)) return _bind_AddLight_overload_2(L);

		luaL_error(L, "error in function AddLight, cannot match any of the overloads for function AddLight:\n  AddLight(int, mglPoint, char, double, double)\n  AddLight(int, mglPoint, mglPoint, char, double, double)\n");
		return 0;
	}

	// void mglGraph::SetAmbient(double i)
	static int _bind_SetAmbient(lua_State *L) {
		if (!_lg_typecheck_SetAmbient(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetAmbient(double i) function, expected prototype:\nvoid mglGraph::SetAmbient(double i)\nClass arguments details:\n");
		}

		double i=(double)lua_tonumber(L,2);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetAmbient(double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetAmbient(i);

		return 0;
	}

	// void mglGraph::Fog(double d, double dz = 0.25)
	static int _bind_Fog(lua_State *L) {
		if (!_lg_typecheck_Fog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Fog(double d, double dz = 0.25) function, expected prototype:\nvoid mglGraph::Fog(double d, double dz = 0.25)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double d=(double)lua_tonumber(L,2);
		double dz=luatop>2 ? (double)lua_tonumber(L,3) : 0.25;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Fog(double, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Fog(d, dz);

		return 0;
	}

	// void mglGraph::SetBarWidth(double width)
	static int _bind_SetBarWidth(lua_State *L) {
		if (!_lg_typecheck_SetBarWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetBarWidth(double width) function, expected prototype:\nvoid mglGraph::SetBarWidth(double width)\nClass arguments details:\n");
		}

		double width=(double)lua_tonumber(L,2);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetBarWidth(double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetBarWidth(width);

		return 0;
	}

	// void mglGraph::SetMarkSize(double size)
	static int _bind_SetMarkSize(lua_State *L) {
		if (!_lg_typecheck_SetMarkSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetMarkSize(double size) function, expected prototype:\nvoid mglGraph::SetMarkSize(double size)\nClass arguments details:\n");
		}

		double size=(double)lua_tonumber(L,2);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetMarkSize(double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetMarkSize(size);

		return 0;
	}

	// void mglGraph::SetArrowSize(double size)
	static int _bind_SetArrowSize(lua_State *L) {
		if (!_lg_typecheck_SetArrowSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetArrowSize(double size) function, expected prototype:\nvoid mglGraph::SetArrowSize(double size)\nClass arguments details:\n");
		}

		double size=(double)lua_tonumber(L,2);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetArrowSize(double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetArrowSize(size);

		return 0;
	}

	// void mglGraph::SetMeshNum(int num)
	static int _bind_SetMeshNum(lua_State *L) {
		if (!_lg_typecheck_SetMeshNum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetMeshNum(int num) function, expected prototype:\nvoid mglGraph::SetMeshNum(int num)\nClass arguments details:\n");
		}

		int num=(int)lua_tointeger(L,2);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetMeshNum(int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetMeshNum(num);

		return 0;
	}

	// void mglGraph::SetFaceNum(int num)
	static int _bind_SetFaceNum(lua_State *L) {
		if (!_lg_typecheck_SetFaceNum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetFaceNum(int num) function, expected prototype:\nvoid mglGraph::SetFaceNum(int num)\nClass arguments details:\n");
		}

		int num=(int)lua_tointeger(L,2);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetFaceNum(int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetFaceNum(num);

		return 0;
	}

	// void mglGraph::SetCut(bool cut)
	static int _bind_SetCut(lua_State *L) {
		if (!_lg_typecheck_SetCut(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetCut(bool cut) function, expected prototype:\nvoid mglGraph::SetCut(bool cut)\nClass arguments details:\n");
		}

		bool cut=(bool)(lua_toboolean(L,2)==1);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetCut(bool). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetCut(cut);

		return 0;
	}

	// void mglGraph::SetCutBox(mglPoint p1, mglPoint p2)
	static int _bind_SetCutBox(lua_State *L) {
		if (!_lg_typecheck_SetCutBox(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetCutBox(mglPoint p1, mglPoint p2) function, expected prototype:\nvoid mglGraph::SetCutBox(mglPoint p1, mglPoint p2)\nClass arguments details:\narg 1 ID = 56902440\narg 2 ID = 56902440\n");
		}

		mglPoint* p1_ptr=(Luna< mglPoint >::check(L,2));
		if( !p1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p1 in mglGraph::SetCutBox function");
		}
		mglPoint p1=*p1_ptr;
		mglPoint* p2_ptr=(Luna< mglPoint >::check(L,3));
		if( !p2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p2 in mglGraph::SetCutBox function");
		}
		mglPoint p2=*p2_ptr;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetCutBox(mglPoint, mglPoint). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetCutBox(p1, p2);

		return 0;
	}

	// void mglGraph::CutOff(const char * EqC)
	static int _bind_CutOff(lua_State *L) {
		if (!_lg_typecheck_CutOff(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::CutOff(const char * EqC) function, expected prototype:\nvoid mglGraph::CutOff(const char * EqC)\nClass arguments details:\n");
		}

		const char * EqC=(const char *)lua_tostring(L,2);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::CutOff(const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->CutOff(EqC);

		return 0;
	}

	// void mglGraph::SetFontSize(double size)
	static int _bind_SetFontSize(lua_State *L) {
		if (!_lg_typecheck_SetFontSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetFontSize(double size) function, expected prototype:\nvoid mglGraph::SetFontSize(double size)\nClass arguments details:\n");
		}

		double size=(double)lua_tonumber(L,2);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetFontSize(double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetFontSize(size);

		return 0;
	}

	// void mglGraph::SetFontDef(const char * fnt)
	static int _bind_SetFontDef(lua_State *L) {
		if (!_lg_typecheck_SetFontDef(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetFontDef(const char * fnt) function, expected prototype:\nvoid mglGraph::SetFontDef(const char * fnt)\nClass arguments details:\n");
		}

		const char * fnt=(const char *)lua_tostring(L,2);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetFontDef(const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetFontDef(fnt);

		return 0;
	}

	// void mglGraph::SetFontSizePT(double pt, int dpi = 72)
	static int _bind_SetFontSizePT(lua_State *L) {
		if (!_lg_typecheck_SetFontSizePT(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetFontSizePT(double pt, int dpi = 72) function, expected prototype:\nvoid mglGraph::SetFontSizePT(double pt, int dpi = 72)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double pt=(double)lua_tonumber(L,2);
		int dpi=luatop>2 ? (int)lua_tointeger(L,3) : 72;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetFontSizePT(double, int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetFontSizePT(pt, dpi);

		return 0;
	}

	// void mglGraph::SetFontSizeCM(double cm, int dpi = 72)
	static int _bind_SetFontSizeCM(lua_State *L) {
		if (!_lg_typecheck_SetFontSizeCM(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetFontSizeCM(double cm, int dpi = 72) function, expected prototype:\nvoid mglGraph::SetFontSizeCM(double cm, int dpi = 72)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double cm=(double)lua_tonumber(L,2);
		int dpi=luatop>2 ? (int)lua_tointeger(L,3) : 72;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetFontSizeCM(double, int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetFontSizeCM(cm, dpi);

		return 0;
	}

	// void mglGraph::SetFontSizeIN(double in, int dpi = 72)
	static int _bind_SetFontSizeIN(lua_State *L) {
		if (!_lg_typecheck_SetFontSizeIN(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetFontSizeIN(double in, int dpi = 72) function, expected prototype:\nvoid mglGraph::SetFontSizeIN(double in, int dpi = 72)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double in=(double)lua_tonumber(L,2);
		int dpi=luatop>2 ? (int)lua_tointeger(L,3) : 72;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetFontSizeIN(double, int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetFontSizeIN(in, dpi);

		return 0;
	}

	// void mglGraph::LoadFont(const char * name, const char * path = NULL)
	static int _bind_LoadFont(lua_State *L) {
		if (!_lg_typecheck_LoadFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::LoadFont(const char * name, const char * path = NULL) function, expected prototype:\nvoid mglGraph::LoadFont(const char * name, const char * path = NULL)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * name=(const char *)lua_tostring(L,2);
		const char * path=luatop>2 ? (const char *)lua_tostring(L,3) : NULL;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::LoadFont(const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->LoadFont(name, path);

		return 0;
	}

	// void mglGraph::CopyFont(const mglGraph * GR)
	static int _bind_CopyFont(lua_State *L) {
		if (!_lg_typecheck_CopyFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::CopyFont(const mglGraph * GR) function, expected prototype:\nvoid mglGraph::CopyFont(const mglGraph * GR)\nClass arguments details:\narg 1 ID = 48672486\n");
		}

		const mglGraph* GR=(Luna< mglGraph >::check(L,2));

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::CopyFont(const mglGraph *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->CopyFont(GR);

		return 0;
	}

	// void mglGraph::RestoreFont()
	static int _bind_RestoreFont(lua_State *L) {
		if (!_lg_typecheck_RestoreFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::RestoreFont() function, expected prototype:\nvoid mglGraph::RestoreFont()\nClass arguments details:\n");
		}


		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::RestoreFont(). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->RestoreFont();

		return 0;
	}

	// void mglGraph::SetRotatedText(bool rotated)
	static int _bind_SetRotatedText(lua_State *L) {
		if (!_lg_typecheck_SetRotatedText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetRotatedText(bool rotated) function, expected prototype:\nvoid mglGraph::SetRotatedText(bool rotated)\nClass arguments details:\n");
		}

		bool rotated=(bool)(lua_toboolean(L,2)==1);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetRotatedText(bool). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetRotatedText(rotated);

		return 0;
	}

	// void mglGraph::SetPalette(const char * colors)
	static int _bind_SetPalette(lua_State *L) {
		if (!_lg_typecheck_SetPalette(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetPalette(const char * colors) function, expected prototype:\nvoid mglGraph::SetPalette(const char * colors)\nClass arguments details:\n");
		}

		const char * colors=(const char *)lua_tostring(L,2);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetPalette(const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetPalette(colors);

		return 0;
	}

	// void mglGraph::SetDefScheme(const char * sch)
	static int _bind_SetDefScheme(lua_State *L) {
		if (!_lg_typecheck_SetDefScheme(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetDefScheme(const char * sch) function, expected prototype:\nvoid mglGraph::SetDefScheme(const char * sch)\nClass arguments details:\n");
		}

		const char * sch=(const char *)lua_tostring(L,2);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetDefScheme(const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetDefScheme(sch);

		return 0;
	}

	// int mglGraph::GetWarn()
	static int _bind_GetWarn(lua_State *L) {
		if (!_lg_typecheck_GetWarn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglGraph::GetWarn() function, expected prototype:\nint mglGraph::GetWarn()\nClass arguments details:\n");
		}


		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglGraph::GetWarn(). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		int lret = self->GetWarn();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglGraph::SetWarn(int code, const char * info)
	static int _bind_SetWarn(lua_State *L) {
		if (!_lg_typecheck_SetWarn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetWarn(int code, const char * info) function, expected prototype:\nvoid mglGraph::SetWarn(int code, const char * info)\nClass arguments details:\n");
		}

		int code=(int)lua_tointeger(L,2);
		const char * info=(const char *)lua_tostring(L,3);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetWarn(int, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetWarn(code, info);

		return 0;
	}

	// const char * mglGraph::Message()
	static int _bind_Message(lua_State *L) {
		if (!_lg_typecheck_Message(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * mglGraph::Message() function, expected prototype:\nconst char * mglGraph::Message()\nClass arguments details:\n");
		}


		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * mglGraph::Message(). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		const char * lret = self->Message();
		lua_pushstring(L,lret);

		return 1;
	}

	// void mglGraph::ZoomAxis(mglPoint p1 = mglPoint (0, 0, 0, 0), mglPoint p2 = mglPoint (1, 1, 1, 1))
	static int _bind_ZoomAxis(lua_State *L) {
		if (!_lg_typecheck_ZoomAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ZoomAxis(mglPoint p1 = mglPoint (0, 0, 0, 0), mglPoint p2 = mglPoint (1, 1, 1, 1)) function, expected prototype:\nvoid mglGraph::ZoomAxis(mglPoint p1 = mglPoint (0, 0, 0, 0), mglPoint p2 = mglPoint (1, 1, 1, 1))\nClass arguments details:\narg 1 ID = 56902440\narg 2 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		mglPoint* p1_ptr=luatop>1 ? (Luna< mglPoint >::check(L,2)) : NULL;
		if( luatop>1 && !p1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p1 in mglGraph::ZoomAxis function");
		}
		mglPoint p1=luatop>1 ? *p1_ptr : mglPoint (0, 0, 0, 0);
		mglPoint* p2_ptr=luatop>2 ? (Luna< mglPoint >::check(L,3)) : NULL;
		if( luatop>2 && !p2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p2 in mglGraph::ZoomAxis function");
		}
		mglPoint p2=luatop>2 ? *p2_ptr : mglPoint (1, 1, 1, 1);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ZoomAxis(mglPoint, mglPoint). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ZoomAxis(p1, p2);

		return 0;
	}

	// void mglGraph::SetRange(char dir, double v1, double v2)
	static int _bind_SetRange_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetRange_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetRange(char dir, double v1, double v2) function, expected prototype:\nvoid mglGraph::SetRange(char dir, double v1, double v2)\nClass arguments details:\n");
		}

		char dir=(char)lua_tointeger(L,2);
		double v1=(double)lua_tonumber(L,3);
		double v2=(double)lua_tonumber(L,4);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetRange(char, double, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetRange(dir, v1, v2);

		return 0;
	}

	// void mglGraph::SetRange(char dir, const mglDataA & dat, bool add = false)
	static int _bind_SetRange_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetRange_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetRange(char dir, const mglDataA & dat, bool add = false) function, expected prototype:\nvoid mglGraph::SetRange(char dir, const mglDataA & dat, bool add = false)\nClass arguments details:\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		char dir=(char)lua_tointeger(L,2);
		const mglDataA* dat_ptr=(Luna< mglDataA >::check(L,3));
		if( !dat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dat in mglGraph::SetRange function");
		}
		const mglDataA & dat=*dat_ptr;
		bool add=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : false;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetRange(char, const mglDataA &, bool). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetRange(dir, dat, add);

		return 0;
	}

	// Overload binder for mglGraph::SetRange
	static int _bind_SetRange(lua_State *L) {
		if (_lg_typecheck_SetRange_overload_1(L)) return _bind_SetRange_overload_1(L);
		if (_lg_typecheck_SetRange_overload_2(L)) return _bind_SetRange_overload_2(L);

		luaL_error(L, "error in function SetRange, cannot match any of the overloads for function SetRange:\n  SetRange(char, double, double)\n  SetRange(char, const mglDataA &, bool)\n");
		return 0;
	}

	// void mglGraph::SetRanges(const mglDataA & xx, const mglDataA & yy, const mglDataA & zz, const mglDataA & cc)
	static int _bind_SetRanges_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetRanges_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetRanges(const mglDataA & xx, const mglDataA & yy, const mglDataA & zz, const mglDataA & cc) function, expected prototype:\nvoid mglGraph::SetRanges(const mglDataA & xx, const mglDataA & yy, const mglDataA & zz, const mglDataA & cc)\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		const mglDataA* xx_ptr=(Luna< mglDataA >::check(L,2));
		if( !xx_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xx in mglGraph::SetRanges function");
		}
		const mglDataA & xx=*xx_ptr;
		const mglDataA* yy_ptr=(Luna< mglDataA >::check(L,3));
		if( !yy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg yy in mglGraph::SetRanges function");
		}
		const mglDataA & yy=*yy_ptr;
		const mglDataA* zz_ptr=(Luna< mglDataA >::check(L,4));
		if( !zz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg zz in mglGraph::SetRanges function");
		}
		const mglDataA & zz=*zz_ptr;
		const mglDataA* cc_ptr=(Luna< mglDataA >::check(L,5));
		if( !cc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cc in mglGraph::SetRanges function");
		}
		const mglDataA & cc=*cc_ptr;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetRanges(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetRanges(xx, yy, zz, cc);

		return 0;
	}

	// void mglGraph::SetRanges(const mglDataA & xx, const mglDataA & yy, const mglDataA & zz)
	static int _bind_SetRanges_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetRanges_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetRanges(const mglDataA & xx, const mglDataA & yy, const mglDataA & zz) function, expected prototype:\nvoid mglGraph::SetRanges(const mglDataA & xx, const mglDataA & yy, const mglDataA & zz)\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		const mglDataA* xx_ptr=(Luna< mglDataA >::check(L,2));
		if( !xx_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xx in mglGraph::SetRanges function");
		}
		const mglDataA & xx=*xx_ptr;
		const mglDataA* yy_ptr=(Luna< mglDataA >::check(L,3));
		if( !yy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg yy in mglGraph::SetRanges function");
		}
		const mglDataA & yy=*yy_ptr;
		const mglDataA* zz_ptr=(Luna< mglDataA >::check(L,4));
		if( !zz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg zz in mglGraph::SetRanges function");
		}
		const mglDataA & zz=*zz_ptr;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetRanges(const mglDataA &, const mglDataA &, const mglDataA &). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetRanges(xx, yy, zz);

		return 0;
	}

	// void mglGraph::SetRanges(const mglDataA & xx, const mglDataA & yy)
	static int _bind_SetRanges_overload_3(lua_State *L) {
		if (!_lg_typecheck_SetRanges_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetRanges(const mglDataA & xx, const mglDataA & yy) function, expected prototype:\nvoid mglGraph::SetRanges(const mglDataA & xx, const mglDataA & yy)\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		const mglDataA* xx_ptr=(Luna< mglDataA >::check(L,2));
		if( !xx_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xx in mglGraph::SetRanges function");
		}
		const mglDataA & xx=*xx_ptr;
		const mglDataA* yy_ptr=(Luna< mglDataA >::check(L,3));
		if( !yy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg yy in mglGraph::SetRanges function");
		}
		const mglDataA & yy=*yy_ptr;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetRanges(const mglDataA &, const mglDataA &). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetRanges(xx, yy);

		return 0;
	}

	// void mglGraph::SetRanges(double x1, double x2, double y1, double y2, double z1 = 0, double z2 = 0)
	static int _bind_SetRanges_overload_4(lua_State *L) {
		if (!_lg_typecheck_SetRanges_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetRanges(double x1, double x2, double y1, double y2, double z1 = 0, double z2 = 0) function, expected prototype:\nvoid mglGraph::SetRanges(double x1, double x2, double y1, double y2, double z1 = 0, double z2 = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double x1=(double)lua_tonumber(L,2);
		double x2=(double)lua_tonumber(L,3);
		double y1=(double)lua_tonumber(L,4);
		double y2=(double)lua_tonumber(L,5);
		double z1=luatop>5 ? (double)lua_tonumber(L,6) : 0;
		double z2=luatop>6 ? (double)lua_tonumber(L,7) : 0;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetRanges(double, double, double, double, double, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetRanges(x1, x2, y1, y2, z1, z2);

		return 0;
	}

	// void mglGraph::SetRanges(mglPoint p1, mglPoint p2)
	static int _bind_SetRanges_overload_5(lua_State *L) {
		if (!_lg_typecheck_SetRanges_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetRanges(mglPoint p1, mglPoint p2) function, expected prototype:\nvoid mglGraph::SetRanges(mglPoint p1, mglPoint p2)\nClass arguments details:\narg 1 ID = 56902440\narg 2 ID = 56902440\n");
		}

		mglPoint* p1_ptr=(Luna< mglPoint >::check(L,2));
		if( !p1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p1 in mglGraph::SetRanges function");
		}
		mglPoint p1=*p1_ptr;
		mglPoint* p2_ptr=(Luna< mglPoint >::check(L,3));
		if( !p2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p2 in mglGraph::SetRanges function");
		}
		mglPoint p2=*p2_ptr;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetRanges(mglPoint, mglPoint). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetRanges(p1, p2);

		return 0;
	}

	// Overload binder for mglGraph::SetRanges
	static int _bind_SetRanges(lua_State *L) {
		if (_lg_typecheck_SetRanges_overload_1(L)) return _bind_SetRanges_overload_1(L);
		if (_lg_typecheck_SetRanges_overload_2(L)) return _bind_SetRanges_overload_2(L);
		if (_lg_typecheck_SetRanges_overload_3(L)) return _bind_SetRanges_overload_3(L);
		if (_lg_typecheck_SetRanges_overload_4(L)) return _bind_SetRanges_overload_4(L);
		if (_lg_typecheck_SetRanges_overload_5(L)) return _bind_SetRanges_overload_5(L);

		luaL_error(L, "error in function SetRanges, cannot match any of the overloads for function SetRanges:\n  SetRanges(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &)\n  SetRanges(const mglDataA &, const mglDataA &, const mglDataA &)\n  SetRanges(const mglDataA &, const mglDataA &)\n  SetRanges(double, double, double, double, double, double)\n  SetRanges(mglPoint, mglPoint)\n");
		return 0;
	}

	// void mglGraph::SetOrigin(mglPoint p)
	static int _bind_SetOrigin_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetOrigin_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetOrigin(mglPoint p) function, expected prototype:\nvoid mglGraph::SetOrigin(mglPoint p)\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		mglPoint* p_ptr=(Luna< mglPoint >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglGraph::SetOrigin function");
		}
		mglPoint p=*p_ptr;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetOrigin(mglPoint). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetOrigin(p);

		return 0;
	}

	// void mglGraph::SetOrigin(double x0, double y0, double z0 = NaN)
	static int _bind_SetOrigin_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetOrigin_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetOrigin(double x0, double y0, double z0 = NaN) function, expected prototype:\nvoid mglGraph::SetOrigin(double x0, double y0, double z0 = NaN)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double x0=(double)lua_tonumber(L,2);
		double y0=(double)lua_tonumber(L,3);
		double z0=luatop>3 ? (double)lua_tonumber(L,4) : NaN;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetOrigin(double, double, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetOrigin(x0, y0, z0);

		return 0;
	}

	// Overload binder for mglGraph::SetOrigin
	static int _bind_SetOrigin(lua_State *L) {
		if (_lg_typecheck_SetOrigin_overload_1(L)) return _bind_SetOrigin_overload_1(L);
		if (_lg_typecheck_SetOrigin_overload_2(L)) return _bind_SetOrigin_overload_2(L);

		luaL_error(L, "error in function SetOrigin, cannot match any of the overloads for function SetOrigin:\n  SetOrigin(mglPoint)\n  SetOrigin(double, double, double)\n");
		return 0;
	}

	// void mglGraph::SetFunc(const char * EqX, const char * EqY, const char * EqZ = NULL, const char * EqA = NULL)
	static int _bind_SetFunc(lua_State *L) {
		if (!_lg_typecheck_SetFunc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetFunc(const char * EqX, const char * EqY, const char * EqZ = NULL, const char * EqA = NULL) function, expected prototype:\nvoid mglGraph::SetFunc(const char * EqX, const char * EqY, const char * EqZ = NULL, const char * EqA = NULL)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * EqX=(const char *)lua_tostring(L,2);
		const char * EqY=(const char *)lua_tostring(L,3);
		const char * EqZ=luatop>3 ? (const char *)lua_tostring(L,4) : NULL;
		const char * EqA=luatop>4 ? (const char *)lua_tostring(L,5) : NULL;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetFunc(const char *, const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetFunc(EqX, EqY, EqZ, EqA);

		return 0;
	}

	// void mglGraph::SetCoor(int how)
	static int _bind_SetCoor(lua_State *L) {
		if (!_lg_typecheck_SetCoor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetCoor(int how) function, expected prototype:\nvoid mglGraph::SetCoor(int how)\nClass arguments details:\n");
		}

		int how=(int)lua_tointeger(L,2);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetCoor(int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetCoor(how);

		return 0;
	}

	// void mglGraph::Ternary(int val)
	static int _bind_Ternary(lua_State *L) {
		if (!_lg_typecheck_Ternary(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Ternary(int val) function, expected prototype:\nvoid mglGraph::Ternary(int val)\nClass arguments details:\n");
		}

		int val=(int)lua_tointeger(L,2);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Ternary(int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Ternary(val);

		return 0;
	}

	// void mglGraph::SetTickRotate(bool val)
	static int _bind_SetTickRotate(lua_State *L) {
		if (!_lg_typecheck_SetTickRotate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetTickRotate(bool val) function, expected prototype:\nvoid mglGraph::SetTickRotate(bool val)\nClass arguments details:\n");
		}

		bool val=(bool)(lua_toboolean(L,2)==1);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetTickRotate(bool). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetTickRotate(val);

		return 0;
	}

	// void mglGraph::SetTickSkip(bool val)
	static int _bind_SetTickSkip(lua_State *L) {
		if (!_lg_typecheck_SetTickSkip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetTickSkip(bool val) function, expected prototype:\nvoid mglGraph::SetTickSkip(bool val)\nClass arguments details:\n");
		}

		bool val=(bool)(lua_toboolean(L,2)==1);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetTickSkip(bool). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetTickSkip(val);

		return 0;
	}

	// void mglGraph::SetTickLen(double len, double stt = 1)
	static int _bind_SetTickLen(lua_State *L) {
		if (!_lg_typecheck_SetTickLen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetTickLen(double len, double stt = 1) function, expected prototype:\nvoid mglGraph::SetTickLen(double len, double stt = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double len=(double)lua_tonumber(L,2);
		double stt=luatop>2 ? (double)lua_tonumber(L,3) : 1;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetTickLen(double, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetTickLen(len, stt);

		return 0;
	}

	// void mglGraph::SetAxisStl(const char * stl = "k", const char * tck = 0, const char * sub = 0)
	static int _bind_SetAxisStl(lua_State *L) {
		if (!_lg_typecheck_SetAxisStl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetAxisStl(const char * stl = \"k\", const char * tck = 0, const char * sub = 0) function, expected prototype:\nvoid mglGraph::SetAxisStl(const char * stl = \"k\", const char * tck = 0, const char * sub = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * stl=luatop>1 ? (const char *)lua_tostring(L,2) : "k";
		const char * tck=luatop>2 ? (const char *)lua_tostring(L,3) : 0;
		const char * sub=luatop>3 ? (const char *)lua_tostring(L,4) : 0;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetAxisStl(const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetAxisStl(stl, tck, sub);

		return 0;
	}

	// void mglGraph::SetTicksTime(char dir, double d = 0, const char * t = "")
	static int _bind_SetTicksTime(lua_State *L) {
		if (!_lg_typecheck_SetTicksTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetTicksTime(char dir, double d = 0, const char * t = \"\") function, expected prototype:\nvoid mglGraph::SetTicksTime(char dir, double d = 0, const char * t = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		char dir=(char)lua_tointeger(L,2);
		double d=luatop>2 ? (double)lua_tonumber(L,3) : 0;
		const char * t=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetTicksTime(char, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetTicksTime(dir, d, t);

		return 0;
	}

	// void mglGraph::SetTicksVal(char dir, const char * lbl, bool add = false)
	static int _bind_SetTicksVal_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetTicksVal_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetTicksVal(char dir, const char * lbl, bool add = false) function, expected prototype:\nvoid mglGraph::SetTicksVal(char dir, const char * lbl, bool add = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		char dir=(char)lua_tointeger(L,2);
		const char * lbl=(const char *)lua_tostring(L,3);
		bool add=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : false;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetTicksVal(char, const char *, bool). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetTicksVal(dir, lbl, add);

		return 0;
	}

	// void mglGraph::SetTicksVal(char dir, const mglDataA & v, const char * lbl, bool add = false)
	static int _bind_SetTicksVal_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetTicksVal_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetTicksVal(char dir, const mglDataA & v, const char * lbl, bool add = false) function, expected prototype:\nvoid mglGraph::SetTicksVal(char dir, const mglDataA & v, const char * lbl, bool add = false)\nClass arguments details:\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		char dir=(char)lua_tointeger(L,2);
		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,3));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::SetTicksVal function");
		}
		const mglDataA & v=*v_ptr;
		const char * lbl=(const char *)lua_tostring(L,4);
		bool add=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : false;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetTicksVal(char, const mglDataA &, const char *, bool). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetTicksVal(dir, v, lbl, add);

		return 0;
	}

	// Overload binder for mglGraph::SetTicksVal
	static int _bind_SetTicksVal(lua_State *L) {
		if (_lg_typecheck_SetTicksVal_overload_1(L)) return _bind_SetTicksVal_overload_1(L);
		if (_lg_typecheck_SetTicksVal_overload_2(L)) return _bind_SetTicksVal_overload_2(L);

		luaL_error(L, "error in function SetTicksVal, cannot match any of the overloads for function SetTicksVal:\n  SetTicksVal(char, const char *, bool)\n  SetTicksVal(char, const mglDataA &, const char *, bool)\n");
		return 0;
	}

	// void mglGraph::SetTicks(char dir, double d = 0, int ns = 0, double org = NaN)
	static int _bind_SetTicks(lua_State *L) {
		if (!_lg_typecheck_SetTicks(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetTicks(char dir, double d = 0, int ns = 0, double org = NaN) function, expected prototype:\nvoid mglGraph::SetTicks(char dir, double d = 0, int ns = 0, double org = NaN)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		char dir=(char)lua_tointeger(L,2);
		double d=luatop>2 ? (double)lua_tonumber(L,3) : 0;
		int ns=luatop>3 ? (int)lua_tointeger(L,4) : 0;
		double org=luatop>4 ? (double)lua_tonumber(L,5) : NaN;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetTicks(char, double, int, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetTicks(dir, d, ns, org);

		return 0;
	}

	// void mglGraph::Adjust(const char * dir = "xyzc")
	static int _bind_Adjust(lua_State *L) {
		if (!_lg_typecheck_Adjust(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Adjust(const char * dir = \"xyzc\") function, expected prototype:\nvoid mglGraph::Adjust(const char * dir = \"xyzc\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * dir=luatop>1 ? (const char *)lua_tostring(L,2) : "xyzc";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Adjust(const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Adjust(dir);

		return 0;
	}

	// void mglGraph::SetTickTempl(char dir, const char * t)
	static int _bind_SetTickTempl(lua_State *L) {
		if (!_lg_typecheck_SetTickTempl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetTickTempl(char dir, const char * t) function, expected prototype:\nvoid mglGraph::SetTickTempl(char dir, const char * t)\nClass arguments details:\n");
		}

		char dir=(char)lua_tointeger(L,2);
		const char * t=(const char *)lua_tostring(L,3);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetTickTempl(char, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetTickTempl(dir, t);

		return 0;
	}

	// void mglGraph::SetTuneTicks(int tune, double fact_pos = 1.15)
	static int _bind_SetTuneTicks(lua_State *L) {
		if (!_lg_typecheck_SetTuneTicks(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetTuneTicks(int tune, double fact_pos = 1.15) function, expected prototype:\nvoid mglGraph::SetTuneTicks(int tune, double fact_pos = 1.15)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int tune=(int)lua_tointeger(L,2);
		double fact_pos=luatop>2 ? (double)lua_tonumber(L,3) : 1.15;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetTuneTicks(int, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetTuneTicks(tune, fact_pos);

		return 0;
	}

	// void mglGraph::SetTickShift(mglPoint p)
	static int _bind_SetTickShift(lua_State *L) {
		if (!_lg_typecheck_SetTickShift(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetTickShift(mglPoint p) function, expected prototype:\nvoid mglGraph::SetTickShift(mglPoint p)\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		mglPoint* p_ptr=(Luna< mglPoint >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglGraph::SetTickShift function");
		}
		mglPoint p=*p_ptr;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetTickShift(mglPoint). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetTickShift(p);

		return 0;
	}

	// void mglGraph::SetTimeUTC(bool enable)
	static int _bind_SetTimeUTC(lua_State *L) {
		if (!_lg_typecheck_SetTimeUTC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetTimeUTC(bool enable) function, expected prototype:\nvoid mglGraph::SetTimeUTC(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetTimeUTC(bool). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetTimeUTC(enable);

		return 0;
	}

	// void mglGraph::SubPlot(int nx, int ny, int m, const char * style = "<>_^", double dx = 0, double dy = 0)
	static int _bind_SubPlot(lua_State *L) {
		if (!_lg_typecheck_SubPlot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SubPlot(int nx, int ny, int m, const char * style = \"<>_^\", double dx = 0, double dy = 0) function, expected prototype:\nvoid mglGraph::SubPlot(int nx, int ny, int m, const char * style = \"<>_^\", double dx = 0, double dy = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int nx=(int)lua_tointeger(L,2);
		int ny=(int)lua_tointeger(L,3);
		int m=(int)lua_tointeger(L,4);
		const char * style=luatop>4 ? (const char *)lua_tostring(L,5) : "<>_^";
		double dx=luatop>5 ? (double)lua_tonumber(L,6) : 0;
		double dy=luatop>6 ? (double)lua_tonumber(L,7) : 0;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SubPlot(int, int, int, const char *, double, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SubPlot(nx, ny, m, style, dx, dy);

		return 0;
	}

	// void mglGraph::MultiPlot(int nx, int ny, int m, int dx, int dy, const char * style = "<>_^")
	static int _bind_MultiPlot(lua_State *L) {
		if (!_lg_typecheck_MultiPlot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::MultiPlot(int nx, int ny, int m, int dx, int dy, const char * style = \"<>_^\") function, expected prototype:\nvoid mglGraph::MultiPlot(int nx, int ny, int m, int dx, int dy, const char * style = \"<>_^\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int nx=(int)lua_tointeger(L,2);
		int ny=(int)lua_tointeger(L,3);
		int m=(int)lua_tointeger(L,4);
		int dx=(int)lua_tointeger(L,5);
		int dy=(int)lua_tointeger(L,6);
		const char * style=luatop>6 ? (const char *)lua_tostring(L,7) : "<>_^";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::MultiPlot(int, int, int, int, int, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->MultiPlot(nx, ny, m, dx, dy, style);

		return 0;
	}

	// void mglGraph::InPlot(double x1, double x2, double y1, double y2, bool rel = true)
	static int _bind_InPlot(lua_State *L) {
		if (!_lg_typecheck_InPlot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::InPlot(double x1, double x2, double y1, double y2, bool rel = true) function, expected prototype:\nvoid mglGraph::InPlot(double x1, double x2, double y1, double y2, bool rel = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double x1=(double)lua_tonumber(L,2);
		double x2=(double)lua_tonumber(L,3);
		double y1=(double)lua_tonumber(L,4);
		double y2=(double)lua_tonumber(L,5);
		bool rel=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : true;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::InPlot(double, double, double, double, bool). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->InPlot(x1, x2, y1, y2, rel);

		return 0;
	}

	// void mglGraph::ColumnPlot(int num, int ind, double d = 0)
	static int _bind_ColumnPlot(lua_State *L) {
		if (!_lg_typecheck_ColumnPlot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ColumnPlot(int num, int ind, double d = 0) function, expected prototype:\nvoid mglGraph::ColumnPlot(int num, int ind, double d = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		int ind=(int)lua_tointeger(L,3);
		double d=luatop>3 ? (double)lua_tonumber(L,4) : 0;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ColumnPlot(int, int, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ColumnPlot(num, ind, d);

		return 0;
	}

	// void mglGraph::GridPlot(int nx, int ny, int ind, double d = 0)
	static int _bind_GridPlot(lua_State *L) {
		if (!_lg_typecheck_GridPlot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::GridPlot(int nx, int ny, int ind, double d = 0) function, expected prototype:\nvoid mglGraph::GridPlot(int nx, int ny, int ind, double d = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int nx=(int)lua_tointeger(L,2);
		int ny=(int)lua_tointeger(L,3);
		int ind=(int)lua_tointeger(L,4);
		double d=luatop>4 ? (double)lua_tonumber(L,5) : 0;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::GridPlot(int, int, int, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->GridPlot(nx, ny, ind, d);

		return 0;
	}

	// void mglGraph::StickPlot(int num, int i, double tet, double phi)
	static int _bind_StickPlot(lua_State *L) {
		if (!_lg_typecheck_StickPlot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::StickPlot(int num, int i, double tet, double phi) function, expected prototype:\nvoid mglGraph::StickPlot(int num, int i, double tet, double phi)\nClass arguments details:\n");
		}

		int num=(int)lua_tointeger(L,2);
		int i=(int)lua_tointeger(L,3);
		double tet=(double)lua_tonumber(L,4);
		double phi=(double)lua_tonumber(L,5);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::StickPlot(int, int, double, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->StickPlot(num, i, tet, phi);

		return 0;
	}

	// void mglGraph::SetPlotFactor(double val)
	static int _bind_SetPlotFactor(lua_State *L) {
		if (!_lg_typecheck_SetPlotFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetPlotFactor(double val) function, expected prototype:\nvoid mglGraph::SetPlotFactor(double val)\nClass arguments details:\n");
		}

		double val=(double)lua_tonumber(L,2);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetPlotFactor(double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetPlotFactor(val);

		return 0;
	}

	// void mglGraph::Push()
	static int _bind_Push(lua_State *L) {
		if (!_lg_typecheck_Push(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Push() function, expected prototype:\nvoid mglGraph::Push()\nClass arguments details:\n");
		}


		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Push(). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Push();

		return 0;
	}

	// void mglGraph::Pop()
	static int _bind_Pop(lua_State *L) {
		if (!_lg_typecheck_Pop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Pop() function, expected prototype:\nvoid mglGraph::Pop()\nClass arguments details:\n");
		}


		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Pop(). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Pop();

		return 0;
	}

	// void mglGraph::Title(const char * title, const char * stl = "", double size = -2)
	static int _bind_Title(lua_State *L) {
		if (!_lg_typecheck_Title(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Title(const char * title, const char * stl = \"\", double size = -2) function, expected prototype:\nvoid mglGraph::Title(const char * title, const char * stl = \"\", double size = -2)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * title=(const char *)lua_tostring(L,2);
		const char * stl=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		double size=luatop>3 ? (double)lua_tonumber(L,4) : -2;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Title(const char *, const char *, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Title(title, stl, size);

		return 0;
	}

	// void mglGraph::Aspect(double Ax, double Ay, double Az = 1)
	static int _bind_Aspect(lua_State *L) {
		if (!_lg_typecheck_Aspect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Aspect(double Ax, double Ay, double Az = 1) function, expected prototype:\nvoid mglGraph::Aspect(double Ax, double Ay, double Az = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double Ax=(double)lua_tonumber(L,2);
		double Ay=(double)lua_tonumber(L,3);
		double Az=luatop>3 ? (double)lua_tonumber(L,4) : 1;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Aspect(double, double, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Aspect(Ax, Ay, Az);

		return 0;
	}

	// void mglGraph::Rotate(double TetX, double TetZ = 0, double TetY = 0)
	static int _bind_Rotate(lua_State *L) {
		if (!_lg_typecheck_Rotate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Rotate(double TetX, double TetZ = 0, double TetY = 0) function, expected prototype:\nvoid mglGraph::Rotate(double TetX, double TetZ = 0, double TetY = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double TetX=(double)lua_tonumber(L,2);
		double TetZ=luatop>2 ? (double)lua_tonumber(L,3) : 0;
		double TetY=luatop>3 ? (double)lua_tonumber(L,4) : 0;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Rotate(double, double, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Rotate(TetX, TetZ, TetY);

		return 0;
	}

	// void mglGraph::RotateN(double Tet, double x, double y, double z)
	static int _bind_RotateN(lua_State *L) {
		if (!_lg_typecheck_RotateN(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::RotateN(double Tet, double x, double y, double z) function, expected prototype:\nvoid mglGraph::RotateN(double Tet, double x, double y, double z)\nClass arguments details:\n");
		}

		double Tet=(double)lua_tonumber(L,2);
		double x=(double)lua_tonumber(L,3);
		double y=(double)lua_tonumber(L,4);
		double z=(double)lua_tonumber(L,5);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::RotateN(double, double, double, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->RotateN(Tet, x, y, z);

		return 0;
	}

	// void mglGraph::Perspective(double val)
	static int _bind_Perspective(lua_State *L) {
		if (!_lg_typecheck_Perspective(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Perspective(double val) function, expected prototype:\nvoid mglGraph::Perspective(double val)\nClass arguments details:\n");
		}

		double val=(double)lua_tonumber(L,2);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Perspective(double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Perspective(val);

		return 0;
	}

	// void mglGraph::View(double TetX, double TetZ = 0, double TetY = 0)
	static int _bind_View(lua_State *L) {
		if (!_lg_typecheck_View(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::View(double TetX, double TetZ = 0, double TetY = 0) function, expected prototype:\nvoid mglGraph::View(double TetX, double TetZ = 0, double TetY = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double TetX=(double)lua_tonumber(L,2);
		double TetZ=luatop>2 ? (double)lua_tonumber(L,3) : 0;
		double TetY=luatop>3 ? (double)lua_tonumber(L,4) : 0;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::View(double, double, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->View(TetX, TetZ, TetY);

		return 0;
	}

	// void mglGraph::Zoom(double x1, double y1, double x2, double y2)
	static int _bind_Zoom(lua_State *L) {
		if (!_lg_typecheck_Zoom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Zoom(double x1, double y1, double x2, double y2) function, expected prototype:\nvoid mglGraph::Zoom(double x1, double y1, double x2, double y2)\nClass arguments details:\n");
		}

		double x1=(double)lua_tonumber(L,2);
		double y1=(double)lua_tonumber(L,3);
		double x2=(double)lua_tonumber(L,4);
		double y2=(double)lua_tonumber(L,5);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Zoom(double, double, double, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Zoom(x1, y1, x2, y2);

		return 0;
	}

	// void mglGraph::SetSize(int width, int height)
	static int _bind_SetSize(lua_State *L) {
		if (!_lg_typecheck_SetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetSize(int width, int height) function, expected prototype:\nvoid mglGraph::SetSize(int width, int height)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetSize(int, int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetSize(width, height);

		return 0;
	}

	// void mglGraph::SetQuality(int qual = 2)
	static int _bind_SetQuality(lua_State *L) {
		if (!_lg_typecheck_SetQuality(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetQuality(int qual = 2) function, expected prototype:\nvoid mglGraph::SetQuality(int qual = 2)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int qual=luatop>1 ? (int)lua_tointeger(L,2) : 2;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetQuality(int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetQuality(qual);

		return 0;
	}

	// void mglGraph::StartGroup(const char * name)
	static int _bind_StartGroup(lua_State *L) {
		if (!_lg_typecheck_StartGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::StartGroup(const char * name) function, expected prototype:\nvoid mglGraph::StartGroup(const char * name)\nClass arguments details:\n");
		}

		const char * name=(const char *)lua_tostring(L,2);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::StartGroup(const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->StartGroup(name);

		return 0;
	}

	// void mglGraph::EndGroup()
	static int _bind_EndGroup(lua_State *L) {
		if (!_lg_typecheck_EndGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::EndGroup() function, expected prototype:\nvoid mglGraph::EndGroup()\nClass arguments details:\n");
		}


		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::EndGroup(). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->EndGroup();

		return 0;
	}

	// void mglGraph::Highlight(int id)
	static int _bind_Highlight(lua_State *L) {
		if (!_lg_typecheck_Highlight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Highlight(int id) function, expected prototype:\nvoid mglGraph::Highlight(int id)\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Highlight(int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Highlight(id);

		return 0;
	}

	// void mglGraph::ShowImage(const char * viewer, bool keep = 0)
	static int _bind_ShowImage(lua_State *L) {
		if (!_lg_typecheck_ShowImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ShowImage(const char * viewer, bool keep = 0) function, expected prototype:\nvoid mglGraph::ShowImage(const char * viewer, bool keep = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * viewer=(const char *)lua_tostring(L,2);
		bool keep=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : 0;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ShowImage(const char *, bool). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ShowImage(viewer, keep);

		return 0;
	}

	// void mglGraph::WriteFrame(const char * fname = 0, const char * descr = "")
	static int _bind_WriteFrame(lua_State *L) {
		if (!_lg_typecheck_WriteFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::WriteFrame(const char * fname = 0, const char * descr = \"\") function, expected prototype:\nvoid mglGraph::WriteFrame(const char * fname = 0, const char * descr = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fname=luatop>1 ? (const char *)lua_tostring(L,2) : 0;
		const char * descr=luatop>2 ? (const char *)lua_tostring(L,3) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::WriteFrame(const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->WriteFrame(fname, descr);

		return 0;
	}

	// void mglGraph::WriteJPEG(const char * fname, const char * descr = "")
	static int _bind_WriteJPEG(lua_State *L) {
		if (!_lg_typecheck_WriteJPEG(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::WriteJPEG(const char * fname, const char * descr = \"\") function, expected prototype:\nvoid mglGraph::WriteJPEG(const char * fname, const char * descr = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		const char * descr=luatop>2 ? (const char *)lua_tostring(L,3) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::WriteJPEG(const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->WriteJPEG(fname, descr);

		return 0;
	}

	// void mglGraph::WritePNG(const char * fname, const char * descr = "", bool alpha = true)
	static int _bind_WritePNG(lua_State *L) {
		if (!_lg_typecheck_WritePNG(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::WritePNG(const char * fname, const char * descr = \"\", bool alpha = true) function, expected prototype:\nvoid mglGraph::WritePNG(const char * fname, const char * descr = \"\", bool alpha = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		const char * descr=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		bool alpha=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : true;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::WritePNG(const char *, const char *, bool). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->WritePNG(fname, descr, alpha);

		return 0;
	}

	// void mglGraph::WriteBMP(const char * fname, const char * descr = "")
	static int _bind_WriteBMP(lua_State *L) {
		if (!_lg_typecheck_WriteBMP(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::WriteBMP(const char * fname, const char * descr = \"\") function, expected prototype:\nvoid mglGraph::WriteBMP(const char * fname, const char * descr = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		const char * descr=luatop>2 ? (const char *)lua_tostring(L,3) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::WriteBMP(const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->WriteBMP(fname, descr);

		return 0;
	}

	// void mglGraph::WriteTGA(const char * fname, const char * descr = "")
	static int _bind_WriteTGA(lua_State *L) {
		if (!_lg_typecheck_WriteTGA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::WriteTGA(const char * fname, const char * descr = \"\") function, expected prototype:\nvoid mglGraph::WriteTGA(const char * fname, const char * descr = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		const char * descr=luatop>2 ? (const char *)lua_tostring(L,3) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::WriteTGA(const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->WriteTGA(fname, descr);

		return 0;
	}

	// void mglGraph::WriteEPS(const char * fname, const char * descr = "")
	static int _bind_WriteEPS(lua_State *L) {
		if (!_lg_typecheck_WriteEPS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::WriteEPS(const char * fname, const char * descr = \"\") function, expected prototype:\nvoid mglGraph::WriteEPS(const char * fname, const char * descr = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		const char * descr=luatop>2 ? (const char *)lua_tostring(L,3) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::WriteEPS(const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->WriteEPS(fname, descr);

		return 0;
	}

	// void mglGraph::WriteTEX(const char * fname, const char * descr = "")
	static int _bind_WriteTEX(lua_State *L) {
		if (!_lg_typecheck_WriteTEX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::WriteTEX(const char * fname, const char * descr = \"\") function, expected prototype:\nvoid mglGraph::WriteTEX(const char * fname, const char * descr = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		const char * descr=luatop>2 ? (const char *)lua_tostring(L,3) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::WriteTEX(const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->WriteTEX(fname, descr);

		return 0;
	}

	// void mglGraph::WriteBPS(const char * fname, const char * descr = "")
	static int _bind_WriteBPS(lua_State *L) {
		if (!_lg_typecheck_WriteBPS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::WriteBPS(const char * fname, const char * descr = \"\") function, expected prototype:\nvoid mglGraph::WriteBPS(const char * fname, const char * descr = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		const char * descr=luatop>2 ? (const char *)lua_tostring(L,3) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::WriteBPS(const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->WriteBPS(fname, descr);

		return 0;
	}

	// void mglGraph::WriteSVG(const char * fname, const char * descr = "")
	static int _bind_WriteSVG(lua_State *L) {
		if (!_lg_typecheck_WriteSVG(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::WriteSVG(const char * fname, const char * descr = \"\") function, expected prototype:\nvoid mglGraph::WriteSVG(const char * fname, const char * descr = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		const char * descr=luatop>2 ? (const char *)lua_tostring(L,3) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::WriteSVG(const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->WriteSVG(fname, descr);

		return 0;
	}

	// void mglGraph::WriteGIF(const char * fname, const char * descr = "")
	static int _bind_WriteGIF(lua_State *L) {
		if (!_lg_typecheck_WriteGIF(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::WriteGIF(const char * fname, const char * descr = \"\") function, expected prototype:\nvoid mglGraph::WriteGIF(const char * fname, const char * descr = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		const char * descr=luatop>2 ? (const char *)lua_tostring(L,3) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::WriteGIF(const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->WriteGIF(fname, descr);

		return 0;
	}

	// void mglGraph::WriteOBJ(const char * fname, const char * descr = "", bool use_png = true)
	static int _bind_WriteOBJ(lua_State *L) {
		if (!_lg_typecheck_WriteOBJ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::WriteOBJ(const char * fname, const char * descr = \"\", bool use_png = true) function, expected prototype:\nvoid mglGraph::WriteOBJ(const char * fname, const char * descr = \"\", bool use_png = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		const char * descr=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		bool use_png=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : true;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::WriteOBJ(const char *, const char *, bool). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->WriteOBJ(fname, descr, use_png);

		return 0;
	}

	// void mglGraph::WriteXYZ(const char * fname, const char * descr = "")
	static int _bind_WriteXYZ(lua_State *L) {
		if (!_lg_typecheck_WriteXYZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::WriteXYZ(const char * fname, const char * descr = \"\") function, expected prototype:\nvoid mglGraph::WriteXYZ(const char * fname, const char * descr = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		const char * descr=luatop>2 ? (const char *)lua_tostring(L,3) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::WriteXYZ(const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->WriteXYZ(fname, descr);

		return 0;
	}

	// void mglGraph::WriteSTL(const char * fname, const char * descr = "")
	static int _bind_WriteSTL(lua_State *L) {
		if (!_lg_typecheck_WriteSTL(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::WriteSTL(const char * fname, const char * descr = \"\") function, expected prototype:\nvoid mglGraph::WriteSTL(const char * fname, const char * descr = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		const char * descr=luatop>2 ? (const char *)lua_tostring(L,3) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::WriteSTL(const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->WriteSTL(fname, descr);

		return 0;
	}

	// void mglGraph::WriteOFF(const char * fname, const char * descr = "", bool colored = false)
	static int _bind_WriteOFF(lua_State *L) {
		if (!_lg_typecheck_WriteOFF(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::WriteOFF(const char * fname, const char * descr = \"\", bool colored = false) function, expected prototype:\nvoid mglGraph::WriteOFF(const char * fname, const char * descr = \"\", bool colored = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		const char * descr=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		bool colored=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : false;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::WriteOFF(const char *, const char *, bool). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->WriteOFF(fname, descr, colored);

		return 0;
	}

	// void mglGraph::WritePRC(const char * fname, const char * descr = "", bool make_pdf = true)
	static int _bind_WritePRC(lua_State *L) {
		if (!_lg_typecheck_WritePRC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::WritePRC(const char * fname, const char * descr = \"\", bool make_pdf = true) function, expected prototype:\nvoid mglGraph::WritePRC(const char * fname, const char * descr = \"\", bool make_pdf = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		const char * descr=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		bool make_pdf=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : true;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::WritePRC(const char *, const char *, bool). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->WritePRC(fname, descr, make_pdf);

		return 0;
	}

	// void mglGraph::WriteJSON(const char * fname, const char * descr = "")
	static int _bind_WriteJSON(lua_State *L) {
		if (!_lg_typecheck_WriteJSON(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::WriteJSON(const char * fname, const char * descr = \"\") function, expected prototype:\nvoid mglGraph::WriteJSON(const char * fname, const char * descr = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		const char * descr=luatop>2 ? (const char *)lua_tostring(L,3) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::WriteJSON(const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->WriteJSON(fname, descr);

		return 0;
	}

	// void mglGraph::Finish()
	static int _bind_Finish(lua_State *L) {
		if (!_lg_typecheck_Finish(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Finish() function, expected prototype:\nvoid mglGraph::Finish()\nClass arguments details:\n");
		}


		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Finish(). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Finish();

		return 0;
	}

	// void mglGraph::NewFrame()
	static int _bind_NewFrame(lua_State *L) {
		if (!_lg_typecheck_NewFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::NewFrame() function, expected prototype:\nvoid mglGraph::NewFrame()\nClass arguments details:\n");
		}


		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::NewFrame(). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->NewFrame();

		return 0;
	}

	// void mglGraph::EndFrame()
	static int _bind_EndFrame(lua_State *L) {
		if (!_lg_typecheck_EndFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::EndFrame() function, expected prototype:\nvoid mglGraph::EndFrame()\nClass arguments details:\n");
		}


		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::EndFrame(). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->EndFrame();

		return 0;
	}

	// int mglGraph::GetNumFrame()
	static int _bind_GetNumFrame(lua_State *L) {
		if (!_lg_typecheck_GetNumFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglGraph::GetNumFrame() function, expected prototype:\nint mglGraph::GetNumFrame()\nClass arguments details:\n");
		}


		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglGraph::GetNumFrame(). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		int lret = self->GetNumFrame();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglGraph::ResetFrames()
	static int _bind_ResetFrames(lua_State *L) {
		if (!_lg_typecheck_ResetFrames(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ResetFrames() function, expected prototype:\nvoid mglGraph::ResetFrames()\nClass arguments details:\n");
		}


		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ResetFrames(). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ResetFrames();

		return 0;
	}

	// void mglGraph::DelFrame(int i)
	static int _bind_DelFrame(lua_State *L) {
		if (!_lg_typecheck_DelFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::DelFrame(int i) function, expected prototype:\nvoid mglGraph::DelFrame(int i)\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::DelFrame(int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->DelFrame(i);

		return 0;
	}

	// void mglGraph::GetFrame(int i)
	static int _bind_GetFrame(lua_State *L) {
		if (!_lg_typecheck_GetFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::GetFrame(int i) function, expected prototype:\nvoid mglGraph::GetFrame(int i)\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::GetFrame(int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->GetFrame(i);

		return 0;
	}

	// void mglGraph::SetFrame(int i)
	static int _bind_SetFrame(lua_State *L) {
		if (!_lg_typecheck_SetFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetFrame(int i) function, expected prototype:\nvoid mglGraph::SetFrame(int i)\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetFrame(int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetFrame(i);

		return 0;
	}

	// void mglGraph::ShowFrame(int i)
	static int _bind_ShowFrame(lua_State *L) {
		if (!_lg_typecheck_ShowFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ShowFrame(int i) function, expected prototype:\nvoid mglGraph::ShowFrame(int i)\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ShowFrame(int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ShowFrame(i);

		return 0;
	}

	// void mglGraph::StartGIF(const char * fname, int ms = 100)
	static int _bind_StartGIF(lua_State *L) {
		if (!_lg_typecheck_StartGIF(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::StartGIF(const char * fname, int ms = 100) function, expected prototype:\nvoid mglGraph::StartGIF(const char * fname, int ms = 100)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		int ms=luatop>2 ? (int)lua_tointeger(L,3) : 100;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::StartGIF(const char *, int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->StartGIF(fname, ms);

		return 0;
	}

	// void mglGraph::CloseGIF()
	static int _bind_CloseGIF(lua_State *L) {
		if (!_lg_typecheck_CloseGIF(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::CloseGIF() function, expected prototype:\nvoid mglGraph::CloseGIF()\nClass arguments details:\n");
		}


		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::CloseGIF(). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->CloseGIF();

		return 0;
	}

	// void mglGraph::ExportMGLD(const char * fname, const char * descr = 0)
	static int _bind_ExportMGLD(lua_State *L) {
		if (!_lg_typecheck_ExportMGLD(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ExportMGLD(const char * fname, const char * descr = 0) function, expected prototype:\nvoid mglGraph::ExportMGLD(const char * fname, const char * descr = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		const char * descr=luatop>2 ? (const char *)lua_tostring(L,3) : 0;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ExportMGLD(const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ExportMGLD(fname, descr);

		return 0;
	}

	// void mglGraph::ImportMGLD(const char * fname, bool add = false)
	static int _bind_ImportMGLD(lua_State *L) {
		if (!_lg_typecheck_ImportMGLD(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ImportMGLD(const char * fname, bool add = false) function, expected prototype:\nvoid mglGraph::ImportMGLD(const char * fname, bool add = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		bool add=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ImportMGLD(const char *, bool). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ImportMGLD(fname, add);

		return 0;
	}

	// void mglGraph::GetRGB(char * imgdata, int imglen)
	static int _bind_GetRGB_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetRGB_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::GetRGB(char * imgdata, int imglen) function, expected prototype:\nvoid mglGraph::GetRGB(char * imgdata, int imglen)\nClass arguments details:\n");
		}

		char imgdata=(char)lua_tointeger(L,2);
		int imglen=(int)lua_tointeger(L,3);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::GetRGB(char *, int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->GetRGB(&imgdata, imglen);

		return 0;
	}

	// const unsigned char * mglGraph::GetRGB()
	static int _bind_GetRGB_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetRGB_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const unsigned char * mglGraph::GetRGB() function, expected prototype:\nconst unsigned char * mglGraph::GetRGB()\nClass arguments details:\n");
		}


		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const unsigned char * mglGraph::GetRGB(). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		const unsigned char * lret = self->GetRGB();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// Overload binder for mglGraph::GetRGB
	static int _bind_GetRGB(lua_State *L) {
		if (_lg_typecheck_GetRGB_overload_1(L)) return _bind_GetRGB_overload_1(L);
		if (_lg_typecheck_GetRGB_overload_2(L)) return _bind_GetRGB_overload_2(L);

		luaL_error(L, "error in function GetRGB, cannot match any of the overloads for function GetRGB:\n  GetRGB(char *, int)\n  GetRGB()\n");
		return 0;
	}

	// void mglGraph::GetRGBA(char * imgdata, int imglen)
	static int _bind_GetRGBA_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetRGBA_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::GetRGBA(char * imgdata, int imglen) function, expected prototype:\nvoid mglGraph::GetRGBA(char * imgdata, int imglen)\nClass arguments details:\n");
		}

		char imgdata=(char)lua_tointeger(L,2);
		int imglen=(int)lua_tointeger(L,3);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::GetRGBA(char *, int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->GetRGBA(&imgdata, imglen);

		return 0;
	}

	// const unsigned char * mglGraph::GetRGBA()
	static int _bind_GetRGBA_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetRGBA_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const unsigned char * mglGraph::GetRGBA() function, expected prototype:\nconst unsigned char * mglGraph::GetRGBA()\nClass arguments details:\n");
		}


		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const unsigned char * mglGraph::GetRGBA(). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		const unsigned char * lret = self->GetRGBA();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// Overload binder for mglGraph::GetRGBA
	static int _bind_GetRGBA(lua_State *L) {
		if (_lg_typecheck_GetRGBA_overload_1(L)) return _bind_GetRGBA_overload_1(L);
		if (_lg_typecheck_GetRGBA_overload_2(L)) return _bind_GetRGBA_overload_2(L);

		luaL_error(L, "error in function GetRGBA, cannot match any of the overloads for function GetRGBA:\n  GetRGBA(char *, int)\n  GetRGBA()\n");
		return 0;
	}

	// void mglGraph::GetBGRN(unsigned char * imgdata, int imglen)
	static int _bind_GetBGRN(lua_State *L) {
		if (!_lg_typecheck_GetBGRN(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::GetBGRN(unsigned char * imgdata, int imglen) function, expected prototype:\nvoid mglGraph::GetBGRN(unsigned char * imgdata, int imglen)\nClass arguments details:\n");
		}

		unsigned char imgdata = (unsigned char)(lua_tointeger(L,2));
		int imglen=(int)lua_tointeger(L,3);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::GetBGRN(unsigned char *, int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->GetBGRN(&imgdata, imglen);

		return 0;
	}

	// int mglGraph::GetWidth()
	static int _bind_GetWidth(lua_State *L) {
		if (!_lg_typecheck_GetWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglGraph::GetWidth() function, expected prototype:\nint mglGraph::GetWidth()\nClass arguments details:\n");
		}


		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglGraph::GetWidth(). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		int lret = self->GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglGraph::GetHeight()
	static int _bind_GetHeight(lua_State *L) {
		if (!_lg_typecheck_GetHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglGraph::GetHeight() function, expected prototype:\nint mglGraph::GetHeight()\nClass arguments details:\n");
		}


		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglGraph::GetHeight(). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		int lret = self->GetHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// mglPoint mglGraph::CalcXYZ(int xs, int ys)
	static int _bind_CalcXYZ(lua_State *L) {
		if (!_lg_typecheck_CalcXYZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglPoint mglGraph::CalcXYZ(int xs, int ys) function, expected prototype:\nmglPoint mglGraph::CalcXYZ(int xs, int ys)\nClass arguments details:\n");
		}

		int xs=(int)lua_tointeger(L,2);
		int ys=(int)lua_tointeger(L,3);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglPoint mglGraph::CalcXYZ(int, int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		mglPoint stack_lret = self->CalcXYZ(xs, ys);
		mglPoint* lret = new mglPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglPoint >::push(L,lret,true);

		return 1;
	}

	// mglPoint mglGraph::CalcScr(mglPoint p)
	static int _bind_CalcScr(lua_State *L) {
		if (!_lg_typecheck_CalcScr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglPoint mglGraph::CalcScr(mglPoint p) function, expected prototype:\nmglPoint mglGraph::CalcScr(mglPoint p)\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		mglPoint* p_ptr=(Luna< mglPoint >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglGraph::CalcScr function");
		}
		mglPoint p=*p_ptr;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglPoint mglGraph::CalcScr(mglPoint). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		mglPoint stack_lret = self->CalcScr(p);
		mglPoint* lret = new mglPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglPoint >::push(L,lret,true);

		return 1;
	}

	// void mglGraph::SetObjId(int id)
	static int _bind_SetObjId(lua_State *L) {
		if (!_lg_typecheck_SetObjId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetObjId(int id) function, expected prototype:\nvoid mglGraph::SetObjId(int id)\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetObjId(int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetObjId(id);

		return 0;
	}

	// int mglGraph::GetObjId(long x, long y)
	static int _bind_GetObjId(lua_State *L) {
		if (!_lg_typecheck_GetObjId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglGraph::GetObjId(long x, long y) function, expected prototype:\nint mglGraph::GetObjId(long x, long y)\nClass arguments details:\n");
		}

		long x=(long)lua_tointeger(L,2);
		long y=(long)lua_tointeger(L,3);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglGraph::GetObjId(long, long). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		int lret = self->GetObjId(x, y);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglGraph::GetSplId(long x, long y)
	static int _bind_GetSplId(lua_State *L) {
		if (!_lg_typecheck_GetSplId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglGraph::GetSplId(long x, long y) function, expected prototype:\nint mglGraph::GetSplId(long x, long y)\nClass arguments details:\n");
		}

		long x=(long)lua_tointeger(L,2);
		long y=(long)lua_tointeger(L,3);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglGraph::GetSplId(long, long). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		int lret = self->GetSplId(x, y);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglGraph::IsActive(int xs, int ys, int d = 1)
	static int _bind_IsActive(lua_State *L) {
		if (!_lg_typecheck_IsActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglGraph::IsActive(int xs, int ys, int d = 1) function, expected prototype:\nlong mglGraph::IsActive(int xs, int ys, int d = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int xs=(int)lua_tointeger(L,2);
		int ys=(int)lua_tointeger(L,3);
		int d=luatop>3 ? (int)lua_tointeger(L,4) : 1;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglGraph::IsActive(int, int, int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		long lret = self->IsActive(xs, ys, d);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglGraph::Combine(const mglGraph * g)
	static int _bind_Combine(lua_State *L) {
		if (!_lg_typecheck_Combine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Combine(const mglGraph * g) function, expected prototype:\nvoid mglGraph::Combine(const mglGraph * g)\nClass arguments details:\narg 1 ID = 48672486\n");
		}

		const mglGraph* g=(Luna< mglGraph >::check(L,2));

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Combine(const mglGraph *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Combine(g);

		return 0;
	}

	// void mglGraph::MPI_Send(int id)
	static int _bind_MPI_Send(lua_State *L) {
		if (!_lg_typecheck_MPI_Send(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::MPI_Send(int id) function, expected prototype:\nvoid mglGraph::MPI_Send(int id)\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::MPI_Send(int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->MPI_Send(id);

		return 0;
	}

	// void mglGraph::MPI_Recv(int id)
	static int _bind_MPI_Recv(lua_State *L) {
		if (!_lg_typecheck_MPI_Recv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::MPI_Recv(int id) function, expected prototype:\nvoid mglGraph::MPI_Recv(int id)\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::MPI_Recv(int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->MPI_Recv(id);

		return 0;
	}

	// void mglGraph::Clf(double r, double g, double b)
	static int _bind_Clf_overload_1(lua_State *L) {
		if (!_lg_typecheck_Clf_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Clf(double r, double g, double b) function, expected prototype:\nvoid mglGraph::Clf(double r, double g, double b)\nClass arguments details:\n");
		}

		double r=(double)lua_tonumber(L,2);
		double g=(double)lua_tonumber(L,3);
		double b=(double)lua_tonumber(L,4);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Clf(double, double, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Clf(r, g, b);

		return 0;
	}

	// void mglGraph::Clf()
	static int _bind_Clf_overload_2(lua_State *L) {
		if (!_lg_typecheck_Clf_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Clf() function, expected prototype:\nvoid mglGraph::Clf()\nClass arguments details:\n");
		}


		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Clf(). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Clf();

		return 0;
	}

	// Overload binder for mglGraph::Clf
	static int _bind_Clf(lua_State *L) {
		if (_lg_typecheck_Clf_overload_1(L)) return _bind_Clf_overload_1(L);
		if (_lg_typecheck_Clf_overload_2(L)) return _bind_Clf_overload_2(L);

		luaL_error(L, "error in function Clf, cannot match any of the overloads for function Clf:\n  Clf(double, double, double)\n  Clf()\n");
		return 0;
	}

	// void mglGraph::ClearUnused()
	static int _bind_ClearUnused(lua_State *L) {
		if (!_lg_typecheck_ClearUnused(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ClearUnused() function, expected prototype:\nvoid mglGraph::ClearUnused()\nClass arguments details:\n");
		}


		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ClearUnused(). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ClearUnused();

		return 0;
	}

	// void mglGraph::Ball(mglPoint p, char c = 'r')
	static int _bind_Ball(lua_State *L) {
		if (!_lg_typecheck_Ball(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Ball(mglPoint p, char c = 'r') function, expected prototype:\nvoid mglGraph::Ball(mglPoint p, char c = 'r')\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		mglPoint* p_ptr=(Luna< mglPoint >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglGraph::Ball function");
		}
		mglPoint p=*p_ptr;
		char c=luatop>2 ? (char)lua_tointeger(L,3) : 'r';

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Ball(mglPoint, char). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Ball(p, c);

		return 0;
	}

	// void mglGraph::Mark(mglPoint p, const char * mark)
	static int _bind_Mark_overload_1(lua_State *L) {
		if (!_lg_typecheck_Mark_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Mark(mglPoint p, const char * mark) function, expected prototype:\nvoid mglGraph::Mark(mglPoint p, const char * mark)\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		mglPoint* p_ptr=(Luna< mglPoint >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglGraph::Mark function");
		}
		mglPoint p=*p_ptr;
		const char * mark=(const char *)lua_tostring(L,3);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Mark(mglPoint, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Mark(p, mark);

		return 0;
	}

	// void mglGraph::Mark(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & r, const char * pen, const char * opt = "")
	static int _bind_Mark_overload_2(lua_State *L) {
		if (!_lg_typecheck_Mark_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Mark(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & r, const char * pen, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Mark(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & r, const char * pen, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Mark function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Mark function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Mark function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* r_ptr=(Luna< mglDataA >::check(L,5));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in mglGraph::Mark function");
		}
		const mglDataA & r=*r_ptr;
		const char * pen=(const char *)lua_tostring(L,6);
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Mark(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Mark(x, y, z, r, pen, opt);

		return 0;
	}

	// void mglGraph::Mark(const mglDataA & x, const mglDataA & y, const mglDataA & r, const char * pen, const char * opt = "")
	static int _bind_Mark_overload_3(lua_State *L) {
		if (!_lg_typecheck_Mark_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Mark(const mglDataA & x, const mglDataA & y, const mglDataA & r, const char * pen, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Mark(const mglDataA & x, const mglDataA & y, const mglDataA & r, const char * pen, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Mark function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Mark function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* r_ptr=(Luna< mglDataA >::check(L,4));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in mglGraph::Mark function");
		}
		const mglDataA & r=*r_ptr;
		const char * pen=(const char *)lua_tostring(L,5);
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Mark(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Mark(x, y, r, pen, opt);

		return 0;
	}

	// void mglGraph::Mark(const mglDataA & y, const mglDataA & r, const char * pen, const char * opt = "")
	static int _bind_Mark_overload_4(lua_State *L) {
		if (!_lg_typecheck_Mark_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Mark(const mglDataA & y, const mglDataA & r, const char * pen, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Mark(const mglDataA & y, const mglDataA & r, const char * pen, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,2));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Mark function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* r_ptr=(Luna< mglDataA >::check(L,3));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in mglGraph::Mark function");
		}
		const mglDataA & r=*r_ptr;
		const char * pen=(const char *)lua_tostring(L,4);
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Mark(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Mark(y, r, pen, opt);

		return 0;
	}

	// Overload binder for mglGraph::Mark
	static int _bind_Mark(lua_State *L) {
		if (_lg_typecheck_Mark_overload_1(L)) return _bind_Mark_overload_1(L);
		if (_lg_typecheck_Mark_overload_2(L)) return _bind_Mark_overload_2(L);
		if (_lg_typecheck_Mark_overload_3(L)) return _bind_Mark_overload_3(L);
		if (_lg_typecheck_Mark_overload_4(L)) return _bind_Mark_overload_4(L);

		luaL_error(L, "error in function Mark, cannot match any of the overloads for function Mark:\n  Mark(mglPoint, const char *)\n  Mark(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Mark(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Mark(const mglDataA &, const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Line(mglPoint p1, mglPoint p2, const char * pen = "B", int n = 2)
	static int _bind_Line(lua_State *L) {
		if (!_lg_typecheck_Line(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Line(mglPoint p1, mglPoint p2, const char * pen = \"B\", int n = 2) function, expected prototype:\nvoid mglGraph::Line(mglPoint p1, mglPoint p2, const char * pen = \"B\", int n = 2)\nClass arguments details:\narg 1 ID = 56902440\narg 2 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		mglPoint* p1_ptr=(Luna< mglPoint >::check(L,2));
		if( !p1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p1 in mglGraph::Line function");
		}
		mglPoint p1=*p1_ptr;
		mglPoint* p2_ptr=(Luna< mglPoint >::check(L,3));
		if( !p2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p2 in mglGraph::Line function");
		}
		mglPoint p2=*p2_ptr;
		const char * pen=luatop>3 ? (const char *)lua_tostring(L,4) : "B";
		int n=luatop>4 ? (int)lua_tointeger(L,5) : 2;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Line(mglPoint, mglPoint, const char *, int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Line(p1, p2, pen, n);

		return 0;
	}

	// void mglGraph::Curve(mglPoint p1, mglPoint d1, mglPoint p2, mglPoint d2, const char * pen = "B", int n = 100)
	static int _bind_Curve(lua_State *L) {
		if (!_lg_typecheck_Curve(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Curve(mglPoint p1, mglPoint d1, mglPoint p2, mglPoint d2, const char * pen = \"B\", int n = 100) function, expected prototype:\nvoid mglGraph::Curve(mglPoint p1, mglPoint d1, mglPoint p2, mglPoint d2, const char * pen = \"B\", int n = 100)\nClass arguments details:\narg 1 ID = 56902440\narg 2 ID = 56902440\narg 3 ID = 56902440\narg 4 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		mglPoint* p1_ptr=(Luna< mglPoint >::check(L,2));
		if( !p1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p1 in mglGraph::Curve function");
		}
		mglPoint p1=*p1_ptr;
		mglPoint* d1_ptr=(Luna< mglPoint >::check(L,3));
		if( !d1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d1 in mglGraph::Curve function");
		}
		mglPoint d1=*d1_ptr;
		mglPoint* p2_ptr=(Luna< mglPoint >::check(L,4));
		if( !p2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p2 in mglGraph::Curve function");
		}
		mglPoint p2=*p2_ptr;
		mglPoint* d2_ptr=(Luna< mglPoint >::check(L,5));
		if( !d2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d2 in mglGraph::Curve function");
		}
		mglPoint d2=*d2_ptr;
		const char * pen=luatop>5 ? (const char *)lua_tostring(L,6) : "B";
		int n=luatop>6 ? (int)lua_tointeger(L,7) : 100;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Curve(mglPoint, mglPoint, mglPoint, mglPoint, const char *, int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Curve(p1, d1, p2, d2, pen, n);

		return 0;
	}

	// void mglGraph::Error(mglPoint p, mglPoint e, const char * pen = "k")
	static int _bind_Error_overload_1(lua_State *L) {
		if (!_lg_typecheck_Error_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Error(mglPoint p, mglPoint e, const char * pen = \"k\") function, expected prototype:\nvoid mglGraph::Error(mglPoint p, mglPoint e, const char * pen = \"k\")\nClass arguments details:\narg 1 ID = 56902440\narg 2 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		mglPoint* p_ptr=(Luna< mglPoint >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglGraph::Error function");
		}
		mglPoint p=*p_ptr;
		mglPoint* e_ptr=(Luna< mglPoint >::check(L,3));
		if( !e_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg e in mglGraph::Error function");
		}
		mglPoint e=*e_ptr;
		const char * pen=luatop>3 ? (const char *)lua_tostring(L,4) : "k";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Error(mglPoint, mglPoint, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Error(p, e, pen);

		return 0;
	}

	// void mglGraph::Error(const mglDataA & y, const mglDataA & ey, const char * pen = "", const char * opt = "")
	static int _bind_Error_overload_2(lua_State *L) {
		if (!_lg_typecheck_Error_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Error(const mglDataA & y, const mglDataA & ey, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Error(const mglDataA & y, const mglDataA & ey, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,2));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Error function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* ey_ptr=(Luna< mglDataA >::check(L,3));
		if( !ey_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ey in mglGraph::Error function");
		}
		const mglDataA & ey=*ey_ptr;
		const char * pen=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Error(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Error(y, ey, pen, opt);

		return 0;
	}

	// void mglGraph::Error(const mglDataA & x, const mglDataA & y, const mglDataA & ey, const char * pen = "", const char * opt = "")
	static int _bind_Error_overload_3(lua_State *L) {
		if (!_lg_typecheck_Error_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Error(const mglDataA & x, const mglDataA & y, const mglDataA & ey, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Error(const mglDataA & x, const mglDataA & y, const mglDataA & ey, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Error function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Error function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* ey_ptr=(Luna< mglDataA >::check(L,4));
		if( !ey_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ey in mglGraph::Error function");
		}
		const mglDataA & ey=*ey_ptr;
		const char * pen=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Error(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Error(x, y, ey, pen, opt);

		return 0;
	}

	// void mglGraph::Error(const mglDataA & x, const mglDataA & y, const mglDataA & ex, const mglDataA & ey, const char * pen = "", const char * opt = "")
	static int _bind_Error_overload_4(lua_State *L) {
		if (!_lg_typecheck_Error_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Error(const mglDataA & x, const mglDataA & y, const mglDataA & ex, const mglDataA & ey, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Error(const mglDataA & x, const mglDataA & y, const mglDataA & ex, const mglDataA & ey, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Error function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Error function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* ex_ptr=(Luna< mglDataA >::check(L,4));
		if( !ex_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ex in mglGraph::Error function");
		}
		const mglDataA & ex=*ex_ptr;
		const mglDataA* ey_ptr=(Luna< mglDataA >::check(L,5));
		if( !ey_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ey in mglGraph::Error function");
		}
		const mglDataA & ey=*ey_ptr;
		const char * pen=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Error(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Error(x, y, ex, ey, pen, opt);

		return 0;
	}

	// Overload binder for mglGraph::Error
	static int _bind_Error(lua_State *L) {
		if (_lg_typecheck_Error_overload_1(L)) return _bind_Error_overload_1(L);
		if (_lg_typecheck_Error_overload_2(L)) return _bind_Error_overload_2(L);
		if (_lg_typecheck_Error_overload_3(L)) return _bind_Error_overload_3(L);
		if (_lg_typecheck_Error_overload_4(L)) return _bind_Error_overload_4(L);

		luaL_error(L, "error in function Error, cannot match any of the overloads for function Error:\n  Error(mglPoint, mglPoint, const char *)\n  Error(const mglDataA &, const mglDataA &, const char *, const char *)\n  Error(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Error(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Face(mglPoint p1, mglPoint p2, mglPoint p3, mglPoint p4, const char * stl = "r")
	static int _bind_Face(lua_State *L) {
		if (!_lg_typecheck_Face(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Face(mglPoint p1, mglPoint p2, mglPoint p3, mglPoint p4, const char * stl = \"r\") function, expected prototype:\nvoid mglGraph::Face(mglPoint p1, mglPoint p2, mglPoint p3, mglPoint p4, const char * stl = \"r\")\nClass arguments details:\narg 1 ID = 56902440\narg 2 ID = 56902440\narg 3 ID = 56902440\narg 4 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		mglPoint* p1_ptr=(Luna< mglPoint >::check(L,2));
		if( !p1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p1 in mglGraph::Face function");
		}
		mglPoint p1=*p1_ptr;
		mglPoint* p2_ptr=(Luna< mglPoint >::check(L,3));
		if( !p2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p2 in mglGraph::Face function");
		}
		mglPoint p2=*p2_ptr;
		mglPoint* p3_ptr=(Luna< mglPoint >::check(L,4));
		if( !p3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p3 in mglGraph::Face function");
		}
		mglPoint p3=*p3_ptr;
		mglPoint* p4_ptr=(Luna< mglPoint >::check(L,5));
		if( !p4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p4 in mglGraph::Face function");
		}
		mglPoint p4=*p4_ptr;
		const char * stl=luatop>5 ? (const char *)lua_tostring(L,6) : "r";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Face(mglPoint, mglPoint, mglPoint, mglPoint, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Face(p1, p2, p3, p4, stl);

		return 0;
	}

	// void mglGraph::FaceX(mglPoint p, double wy, double wz, const char * stl = "w", double dx = 0, double dy = 0)
	static int _bind_FaceX(lua_State *L) {
		if (!_lg_typecheck_FaceX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::FaceX(mglPoint p, double wy, double wz, const char * stl = \"w\", double dx = 0, double dy = 0) function, expected prototype:\nvoid mglGraph::FaceX(mglPoint p, double wy, double wz, const char * stl = \"w\", double dx = 0, double dy = 0)\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		mglPoint* p_ptr=(Luna< mglPoint >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglGraph::FaceX function");
		}
		mglPoint p=*p_ptr;
		double wy=(double)lua_tonumber(L,3);
		double wz=(double)lua_tonumber(L,4);
		const char * stl=luatop>4 ? (const char *)lua_tostring(L,5) : "w";
		double dx=luatop>5 ? (double)lua_tonumber(L,6) : 0;
		double dy=luatop>6 ? (double)lua_tonumber(L,7) : 0;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::FaceX(mglPoint, double, double, const char *, double, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->FaceX(p, wy, wz, stl, dx, dy);

		return 0;
	}

	// void mglGraph::FaceY(mglPoint p, double wx, double wz, const char * stl = "w", double dx = 0, double dy = 0)
	static int _bind_FaceY(lua_State *L) {
		if (!_lg_typecheck_FaceY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::FaceY(mglPoint p, double wx, double wz, const char * stl = \"w\", double dx = 0, double dy = 0) function, expected prototype:\nvoid mglGraph::FaceY(mglPoint p, double wx, double wz, const char * stl = \"w\", double dx = 0, double dy = 0)\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		mglPoint* p_ptr=(Luna< mglPoint >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglGraph::FaceY function");
		}
		mglPoint p=*p_ptr;
		double wx=(double)lua_tonumber(L,3);
		double wz=(double)lua_tonumber(L,4);
		const char * stl=luatop>4 ? (const char *)lua_tostring(L,5) : "w";
		double dx=luatop>5 ? (double)lua_tonumber(L,6) : 0;
		double dy=luatop>6 ? (double)lua_tonumber(L,7) : 0;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::FaceY(mglPoint, double, double, const char *, double, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->FaceY(p, wx, wz, stl, dx, dy);

		return 0;
	}

	// void mglGraph::FaceZ(mglPoint p, double wx, double wy, const char * stl = "w", double dx = 0, double dy = 0)
	static int _bind_FaceZ(lua_State *L) {
		if (!_lg_typecheck_FaceZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::FaceZ(mglPoint p, double wx, double wy, const char * stl = \"w\", double dx = 0, double dy = 0) function, expected prototype:\nvoid mglGraph::FaceZ(mglPoint p, double wx, double wy, const char * stl = \"w\", double dx = 0, double dy = 0)\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		mglPoint* p_ptr=(Luna< mglPoint >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglGraph::FaceZ function");
		}
		mglPoint p=*p_ptr;
		double wx=(double)lua_tonumber(L,3);
		double wy=(double)lua_tonumber(L,4);
		const char * stl=luatop>4 ? (const char *)lua_tostring(L,5) : "w";
		double dx=luatop>5 ? (double)lua_tonumber(L,6) : 0;
		double dy=luatop>6 ? (double)lua_tonumber(L,7) : 0;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::FaceZ(mglPoint, double, double, const char *, double, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->FaceZ(p, wx, wy, stl, dx, dy);

		return 0;
	}

	// void mglGraph::Drop(mglPoint p, mglPoint d, double r, const char * col = "r", double shift = 1, double ap = 1)
	static int _bind_Drop(lua_State *L) {
		if (!_lg_typecheck_Drop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Drop(mglPoint p, mglPoint d, double r, const char * col = \"r\", double shift = 1, double ap = 1) function, expected prototype:\nvoid mglGraph::Drop(mglPoint p, mglPoint d, double r, const char * col = \"r\", double shift = 1, double ap = 1)\nClass arguments details:\narg 1 ID = 56902440\narg 2 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		mglPoint* p_ptr=(Luna< mglPoint >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglGraph::Drop function");
		}
		mglPoint p=*p_ptr;
		mglPoint* d_ptr=(Luna< mglPoint >::check(L,3));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglGraph::Drop function");
		}
		mglPoint d=*d_ptr;
		double r=(double)lua_tonumber(L,4);
		const char * col=luatop>4 ? (const char *)lua_tostring(L,5) : "r";
		double shift=luatop>5 ? (double)lua_tonumber(L,6) : 1;
		double ap=luatop>6 ? (double)lua_tonumber(L,7) : 1;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Drop(mglPoint, mglPoint, double, const char *, double, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Drop(p, d, r, col, shift, ap);

		return 0;
	}

	// void mglGraph::Sphere(mglPoint p, double r, const char * col = "r")
	static int _bind_Sphere(lua_State *L) {
		if (!_lg_typecheck_Sphere(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Sphere(mglPoint p, double r, const char * col = \"r\") function, expected prototype:\nvoid mglGraph::Sphere(mglPoint p, double r, const char * col = \"r\")\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		mglPoint* p_ptr=(Luna< mglPoint >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglGraph::Sphere function");
		}
		mglPoint p=*p_ptr;
		double r=(double)lua_tonumber(L,3);
		const char * col=luatop>3 ? (const char *)lua_tostring(L,4) : "r";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Sphere(mglPoint, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Sphere(p, r, col);

		return 0;
	}

	// void mglGraph::Ellipse(mglPoint p1, mglPoint p2, double r, const char * stl = "r")
	static int _bind_Ellipse(lua_State *L) {
		if (!_lg_typecheck_Ellipse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Ellipse(mglPoint p1, mglPoint p2, double r, const char * stl = \"r\") function, expected prototype:\nvoid mglGraph::Ellipse(mglPoint p1, mglPoint p2, double r, const char * stl = \"r\")\nClass arguments details:\narg 1 ID = 56902440\narg 2 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		mglPoint* p1_ptr=(Luna< mglPoint >::check(L,2));
		if( !p1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p1 in mglGraph::Ellipse function");
		}
		mglPoint p1=*p1_ptr;
		mglPoint* p2_ptr=(Luna< mglPoint >::check(L,3));
		if( !p2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p2 in mglGraph::Ellipse function");
		}
		mglPoint p2=*p2_ptr;
		double r=(double)lua_tonumber(L,4);
		const char * stl=luatop>4 ? (const char *)lua_tostring(L,5) : "r";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Ellipse(mglPoint, mglPoint, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Ellipse(p1, p2, r, stl);

		return 0;
	}

	// void mglGraph::Circle(mglPoint p, double r, const char * stl = "r")
	static int _bind_Circle(lua_State *L) {
		if (!_lg_typecheck_Circle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Circle(mglPoint p, double r, const char * stl = \"r\") function, expected prototype:\nvoid mglGraph::Circle(mglPoint p, double r, const char * stl = \"r\")\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		mglPoint* p_ptr=(Luna< mglPoint >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglGraph::Circle function");
		}
		mglPoint p=*p_ptr;
		double r=(double)lua_tonumber(L,3);
		const char * stl=luatop>3 ? (const char *)lua_tostring(L,4) : "r";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Circle(mglPoint, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Circle(p, r, stl);

		return 0;
	}

	// void mglGraph::Rhomb(mglPoint p1, mglPoint p2, double r, const char * stl = "r")
	static int _bind_Rhomb(lua_State *L) {
		if (!_lg_typecheck_Rhomb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Rhomb(mglPoint p1, mglPoint p2, double r, const char * stl = \"r\") function, expected prototype:\nvoid mglGraph::Rhomb(mglPoint p1, mglPoint p2, double r, const char * stl = \"r\")\nClass arguments details:\narg 1 ID = 56902440\narg 2 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		mglPoint* p1_ptr=(Luna< mglPoint >::check(L,2));
		if( !p1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p1 in mglGraph::Rhomb function");
		}
		mglPoint p1=*p1_ptr;
		mglPoint* p2_ptr=(Luna< mglPoint >::check(L,3));
		if( !p2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p2 in mglGraph::Rhomb function");
		}
		mglPoint p2=*p2_ptr;
		double r=(double)lua_tonumber(L,4);
		const char * stl=luatop>4 ? (const char *)lua_tostring(L,5) : "r";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Rhomb(mglPoint, mglPoint, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Rhomb(p1, p2, r, stl);

		return 0;
	}

	// void mglGraph::Puts(mglPoint p, const char * text, const char * font = ":C", double size = -1)
	static int _bind_Puts_overload_1(lua_State *L) {
		if (!_lg_typecheck_Puts_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Puts(mglPoint p, const char * text, const char * font = \":C\", double size = -1) function, expected prototype:\nvoid mglGraph::Puts(mglPoint p, const char * text, const char * font = \":C\", double size = -1)\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		mglPoint* p_ptr=(Luna< mglPoint >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglGraph::Puts function");
		}
		mglPoint p=*p_ptr;
		const char * text=(const char *)lua_tostring(L,3);
		const char * font=luatop>3 ? (const char *)lua_tostring(L,4) : ":C";
		double size=luatop>4 ? (double)lua_tonumber(L,5) : -1;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Puts(mglPoint, const char *, const char *, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Puts(p, text, font, size);

		return 0;
	}

	// void mglGraph::Puts(double x, double y, const char * text, const char * font = ":AC", double size = -1)
	static int _bind_Puts_overload_2(lua_State *L) {
		if (!_lg_typecheck_Puts_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Puts(double x, double y, const char * text, const char * font = \":AC\", double size = -1) function, expected prototype:\nvoid mglGraph::Puts(double x, double y, const char * text, const char * font = \":AC\", double size = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		const char * text=(const char *)lua_tostring(L,4);
		const char * font=luatop>4 ? (const char *)lua_tostring(L,5) : ":AC";
		double size=luatop>5 ? (double)lua_tonumber(L,6) : -1;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Puts(double, double, const char *, const char *, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Puts(x, y, text, font, size);

		return 0;
	}

	// void mglGraph::Puts(mglPoint p, mglPoint d, const char * text, const char * font = ":L", double size = -1)
	static int _bind_Puts_overload_3(lua_State *L) {
		if (!_lg_typecheck_Puts_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Puts(mglPoint p, mglPoint d, const char * text, const char * font = \":L\", double size = -1) function, expected prototype:\nvoid mglGraph::Puts(mglPoint p, mglPoint d, const char * text, const char * font = \":L\", double size = -1)\nClass arguments details:\narg 1 ID = 56902440\narg 2 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		mglPoint* p_ptr=(Luna< mglPoint >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglGraph::Puts function");
		}
		mglPoint p=*p_ptr;
		mglPoint* d_ptr=(Luna< mglPoint >::check(L,3));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglGraph::Puts function");
		}
		mglPoint d=*d_ptr;
		const char * text=(const char *)lua_tostring(L,4);
		const char * font=luatop>4 ? (const char *)lua_tostring(L,5) : ":L";
		double size=luatop>5 ? (double)lua_tonumber(L,6) : -1;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Puts(mglPoint, mglPoint, const char *, const char *, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Puts(p, d, text, font, size);

		return 0;
	}

	// Overload binder for mglGraph::Puts
	static int _bind_Puts(lua_State *L) {
		if (_lg_typecheck_Puts_overload_1(L)) return _bind_Puts_overload_1(L);
		if (_lg_typecheck_Puts_overload_2(L)) return _bind_Puts_overload_2(L);
		if (_lg_typecheck_Puts_overload_3(L)) return _bind_Puts_overload_3(L);

		luaL_error(L, "error in function Puts, cannot match any of the overloads for function Puts:\n  Puts(mglPoint, const char *, const char *, double)\n  Puts(double, double, const char *, const char *, double)\n  Puts(mglPoint, mglPoint, const char *, const char *, double)\n");
		return 0;
	}

	// void mglGraph::Text(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * text, const char * font = "", const char * opt = "")
	static int _bind_Text_overload_1(lua_State *L) {
		if (!_lg_typecheck_Text_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Text(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * text, const char * font = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Text(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * text, const char * font = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Text function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Text function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Text function");
		}
		const mglDataA & z=*z_ptr;
		const char * text=(const char *)lua_tostring(L,5);
		const char * font=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Text(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Text(x, y, z, text, font, opt);

		return 0;
	}

	// void mglGraph::Text(const mglDataA & x, const mglDataA & y, const char * text, const char * font = "", const char * opt = "")
	static int _bind_Text_overload_2(lua_State *L) {
		if (!_lg_typecheck_Text_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Text(const mglDataA & x, const mglDataA & y, const char * text, const char * font = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Text(const mglDataA & x, const mglDataA & y, const char * text, const char * font = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Text function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Text function");
		}
		const mglDataA & y=*y_ptr;
		const char * text=(const char *)lua_tostring(L,4);
		const char * font=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Text(const mglDataA &, const mglDataA &, const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Text(x, y, text, font, opt);

		return 0;
	}

	// void mglGraph::Text(const mglDataA & y, const char * text, const char * font = "", const char * opt = "")
	static int _bind_Text_overload_3(lua_State *L) {
		if (!_lg_typecheck_Text_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Text(const mglDataA & y, const char * text, const char * font = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Text(const mglDataA & y, const char * text, const char * font = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,2));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Text function");
		}
		const mglDataA & y=*y_ptr;
		const char * text=(const char *)lua_tostring(L,3);
		const char * font=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Text(const mglDataA &, const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Text(y, text, font, opt);

		return 0;
	}

	// Overload binder for mglGraph::Text
	static int _bind_Text(lua_State *L) {
		if (_lg_typecheck_Text_overload_1(L)) return _bind_Text_overload_1(L);
		if (_lg_typecheck_Text_overload_2(L)) return _bind_Text_overload_2(L);
		if (_lg_typecheck_Text_overload_3(L)) return _bind_Text_overload_3(L);

		luaL_error(L, "error in function Text, cannot match any of the overloads for function Text:\n  Text(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *, const char *)\n  Text(const mglDataA &, const mglDataA &, const char *, const char *, const char *)\n  Text(const mglDataA &, const char *, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Box(const char * col = "", bool ticks = true)
	static int _bind_Box(lua_State *L) {
		if (!_lg_typecheck_Box(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Box(const char * col = \"\", bool ticks = true) function, expected prototype:\nvoid mglGraph::Box(const char * col = \"\", bool ticks = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * col=luatop>1 ? (const char *)lua_tostring(L,2) : "";
		bool ticks=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Box(const char *, bool). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Box(col, ticks);

		return 0;
	}

	// void mglGraph::Axis(const char * dir = "xyzt", const char * stl = "", const char * opt = "")
	static int _bind_Axis(lua_State *L) {
		if (!_lg_typecheck_Axis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Axis(const char * dir = \"xyzt\", const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Axis(const char * dir = \"xyzt\", const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * dir=luatop>1 ? (const char *)lua_tostring(L,2) : "xyzt";
		const char * stl=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Axis(const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Axis(dir, stl, opt);

		return 0;
	}

	// void mglGraph::Grid(const char * dir = "xyzt", const char * pen = "B", const char * opt = "")
	static int _bind_Grid_overload_1(lua_State *L) {
		if (!_lg_typecheck_Grid_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Grid(const char * dir = \"xyzt\", const char * pen = \"B\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Grid(const char * dir = \"xyzt\", const char * pen = \"B\", const char * opt = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * dir=luatop>1 ? (const char *)lua_tostring(L,2) : "xyzt";
		const char * pen=luatop>2 ? (const char *)lua_tostring(L,3) : "B";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Grid(const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Grid(dir, pen, opt);

		return 0;
	}

	// void mglGraph::Grid(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * stl = "", const char * opt = "")
	static int _bind_Grid_overload_2(lua_State *L) {
		if (!_lg_typecheck_Grid_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Grid(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Grid(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Grid function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Grid function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Grid function");
		}
		const mglDataA & z=*z_ptr;
		const char * stl=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Grid(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Grid(x, y, z, stl, opt);

		return 0;
	}

	// void mglGraph::Grid(const mglDataA & z, const char * stl = "", const char * opt = "")
	static int _bind_Grid_overload_3(lua_State *L) {
		if (!_lg_typecheck_Grid_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Grid(const mglDataA & z, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Grid(const mglDataA & z, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,2));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Grid function");
		}
		const mglDataA & z=*z_ptr;
		const char * stl=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Grid(const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Grid(z, stl, opt);

		return 0;
	}

	// Overload binder for mglGraph::Grid
	static int _bind_Grid(lua_State *L) {
		if (_lg_typecheck_Grid_overload_1(L)) return _bind_Grid_overload_1(L);
		if (_lg_typecheck_Grid_overload_2(L)) return _bind_Grid_overload_2(L);
		if (_lg_typecheck_Grid_overload_3(L)) return _bind_Grid_overload_3(L);

		luaL_error(L, "error in function Grid, cannot match any of the overloads for function Grid:\n  Grid(const char *, const char *, const char *)\n  Grid(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Grid(const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Label(char dir, const char * text, double pos = +1, const char * opt = "")
	static int _bind_Label_overload_1(lua_State *L) {
		if (!_lg_typecheck_Label_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Label(char dir, const char * text, double pos = +1, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Label(char dir, const char * text, double pos = +1, const char * opt = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		char dir=(char)lua_tointeger(L,2);
		const char * text=(const char *)lua_tostring(L,3);
		double pos=luatop>3 ? (double)lua_tonumber(L,4) : +1;
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Label(char, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Label(dir, text, pos, opt);

		return 0;
	}

	// void mglGraph::Label(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * text, const char * fnt = "", const char * opt = "")
	static int _bind_Label_overload_2(lua_State *L) {
		if (!_lg_typecheck_Label_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Label(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * text, const char * fnt = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Label(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * text, const char * fnt = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Label function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Label function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Label function");
		}
		const mglDataA & z=*z_ptr;
		const char * text=(const char *)lua_tostring(L,5);
		const char * fnt=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Label(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Label(x, y, z, text, fnt, opt);

		return 0;
	}

	// void mglGraph::Label(const mglDataA & x, const mglDataA & y, const char * text, const char * fnt = "", const char * opt = "")
	static int _bind_Label_overload_3(lua_State *L) {
		if (!_lg_typecheck_Label_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Label(const mglDataA & x, const mglDataA & y, const char * text, const char * fnt = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Label(const mglDataA & x, const mglDataA & y, const char * text, const char * fnt = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Label function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Label function");
		}
		const mglDataA & y=*y_ptr;
		const char * text=(const char *)lua_tostring(L,4);
		const char * fnt=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Label(const mglDataA &, const mglDataA &, const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Label(x, y, text, fnt, opt);

		return 0;
	}

	// void mglGraph::Label(const mglDataA & y, const char * text, const char * fnt = "", const char * opt = "")
	static int _bind_Label_overload_4(lua_State *L) {
		if (!_lg_typecheck_Label_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Label(const mglDataA & y, const char * text, const char * fnt = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Label(const mglDataA & y, const char * text, const char * fnt = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,2));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Label function");
		}
		const mglDataA & y=*y_ptr;
		const char * text=(const char *)lua_tostring(L,3);
		const char * fnt=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Label(const mglDataA &, const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Label(y, text, fnt, opt);

		return 0;
	}

	// Overload binder for mglGraph::Label
	static int _bind_Label(lua_State *L) {
		if (_lg_typecheck_Label_overload_1(L)) return _bind_Label_overload_1(L);
		if (_lg_typecheck_Label_overload_2(L)) return _bind_Label_overload_2(L);
		if (_lg_typecheck_Label_overload_3(L)) return _bind_Label_overload_3(L);
		if (_lg_typecheck_Label_overload_4(L)) return _bind_Label_overload_4(L);

		luaL_error(L, "error in function Label, cannot match any of the overloads for function Label:\n  Label(char, const char *, double, const char *)\n  Label(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *, const char *)\n  Label(const mglDataA &, const mglDataA &, const char *, const char *, const char *)\n  Label(const mglDataA &, const char *, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Colorbar(const char * sch = "")
	static int _bind_Colorbar_overload_1(lua_State *L) {
		if (!_lg_typecheck_Colorbar_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Colorbar(const char * sch = \"\") function, expected prototype:\nvoid mglGraph::Colorbar(const char * sch = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * sch=luatop>1 ? (const char *)lua_tostring(L,2) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Colorbar(const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Colorbar(sch);

		return 0;
	}

	// void mglGraph::Colorbar(const char * sch, double x, double y, double w = 1, double h = 1)
	static int _bind_Colorbar_overload_2(lua_State *L) {
		if (!_lg_typecheck_Colorbar_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Colorbar(const char * sch, double x, double y, double w = 1, double h = 1) function, expected prototype:\nvoid mglGraph::Colorbar(const char * sch, double x, double y, double w = 1, double h = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * sch=(const char *)lua_tostring(L,2);
		double x=(double)lua_tonumber(L,3);
		double y=(double)lua_tonumber(L,4);
		double w=luatop>4 ? (double)lua_tonumber(L,5) : 1;
		double h=luatop>5 ? (double)lua_tonumber(L,6) : 1;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Colorbar(const char *, double, double, double, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Colorbar(sch, x, y, w, h);

		return 0;
	}

	// void mglGraph::Colorbar(const mglDataA & val, const char * sch = "")
	static int _bind_Colorbar_overload_3(lua_State *L) {
		if (!_lg_typecheck_Colorbar_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Colorbar(const mglDataA & val, const char * sch = \"\") function, expected prototype:\nvoid mglGraph::Colorbar(const mglDataA & val, const char * sch = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* val_ptr=(Luna< mglDataA >::check(L,2));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in mglGraph::Colorbar function");
		}
		const mglDataA & val=*val_ptr;
		const char * sch=luatop>2 ? (const char *)lua_tostring(L,3) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Colorbar(const mglDataA &, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Colorbar(val, sch);

		return 0;
	}

	// void mglGraph::Colorbar(const mglDataA & val, const char * sch, double x, double y, double w = 1, double h = 1)
	static int _bind_Colorbar_overload_4(lua_State *L) {
		if (!_lg_typecheck_Colorbar_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Colorbar(const mglDataA & val, const char * sch, double x, double y, double w = 1, double h = 1) function, expected prototype:\nvoid mglGraph::Colorbar(const mglDataA & val, const char * sch, double x, double y, double w = 1, double h = 1)\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* val_ptr=(Luna< mglDataA >::check(L,2));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in mglGraph::Colorbar function");
		}
		const mglDataA & val=*val_ptr;
		const char * sch=(const char *)lua_tostring(L,3);
		double x=(double)lua_tonumber(L,4);
		double y=(double)lua_tonumber(L,5);
		double w=luatop>5 ? (double)lua_tonumber(L,6) : 1;
		double h=luatop>6 ? (double)lua_tonumber(L,7) : 1;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Colorbar(const mglDataA &, const char *, double, double, double, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Colorbar(val, sch, x, y, w, h);

		return 0;
	}

	// Overload binder for mglGraph::Colorbar
	static int _bind_Colorbar(lua_State *L) {
		if (_lg_typecheck_Colorbar_overload_1(L)) return _bind_Colorbar_overload_1(L);
		if (_lg_typecheck_Colorbar_overload_2(L)) return _bind_Colorbar_overload_2(L);
		if (_lg_typecheck_Colorbar_overload_3(L)) return _bind_Colorbar_overload_3(L);
		if (_lg_typecheck_Colorbar_overload_4(L)) return _bind_Colorbar_overload_4(L);

		luaL_error(L, "error in function Colorbar, cannot match any of the overloads for function Colorbar:\n  Colorbar(const char *)\n  Colorbar(const char *, double, double, double, double)\n  Colorbar(const mglDataA &, const char *)\n  Colorbar(const mglDataA &, const char *, double, double, double, double)\n");
		return 0;
	}

	// void mglGraph::AddLegend(const char * text, const char * style)
	static int _bind_AddLegend(lua_State *L) {
		if (!_lg_typecheck_AddLegend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::AddLegend(const char * text, const char * style) function, expected prototype:\nvoid mglGraph::AddLegend(const char * text, const char * style)\nClass arguments details:\n");
		}

		const char * text=(const char *)lua_tostring(L,2);
		const char * style=(const char *)lua_tostring(L,3);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::AddLegend(const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->AddLegend(text, style);

		return 0;
	}

	// void mglGraph::ClearLegend()
	static int _bind_ClearLegend(lua_State *L) {
		if (!_lg_typecheck_ClearLegend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ClearLegend() function, expected prototype:\nvoid mglGraph::ClearLegend()\nClass arguments details:\n");
		}


		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ClearLegend(). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ClearLegend();

		return 0;
	}

	// void mglGraph::Legend(double x, double y, const char * font = "#", const char * opt = "")
	static int _bind_Legend_overload_1(lua_State *L) {
		if (!_lg_typecheck_Legend_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Legend(double x, double y, const char * font = \"#\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Legend(double x, double y, const char * font = \"#\", const char * opt = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		const char * font=luatop>3 ? (const char *)lua_tostring(L,4) : "#";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Legend(double, double, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Legend(x, y, font, opt);

		return 0;
	}

	// void mglGraph::Legend(int where = 3, const char * font = "#", const char * opt = "")
	static int _bind_Legend_overload_2(lua_State *L) {
		if (!_lg_typecheck_Legend_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Legend(int where = 3, const char * font = \"#\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Legend(int where = 3, const char * font = \"#\", const char * opt = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int where=luatop>1 ? (int)lua_tointeger(L,2) : 3;
		const char * font=luatop>2 ? (const char *)lua_tostring(L,3) : "#";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Legend(int, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Legend(where, font, opt);

		return 0;
	}

	// Overload binder for mglGraph::Legend
	static int _bind_Legend(lua_State *L) {
		if (_lg_typecheck_Legend_overload_1(L)) return _bind_Legend_overload_1(L);
		if (_lg_typecheck_Legend_overload_2(L)) return _bind_Legend_overload_2(L);

		luaL_error(L, "error in function Legend, cannot match any of the overloads for function Legend:\n  Legend(double, double, const char *, const char *)\n  Legend(int, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::SetLegendMarks(int num)
	static int _bind_SetLegendMarks(lua_State *L) {
		if (!_lg_typecheck_SetLegendMarks(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SetLegendMarks(int num) function, expected prototype:\nvoid mglGraph::SetLegendMarks(int num)\nClass arguments details:\n");
		}

		int num=(int)lua_tointeger(L,2);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SetLegendMarks(int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SetLegendMarks(num);

		return 0;
	}

	// void mglGraph::Plot(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * pen = "", const char * opt = "")
	static int _bind_Plot_overload_1(lua_State *L) {
		if (!_lg_typecheck_Plot_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Plot(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Plot(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Plot function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Plot function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Plot function");
		}
		const mglDataA & z=*z_ptr;
		const char * pen=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Plot(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Plot(x, y, z, pen, opt);

		return 0;
	}

	// void mglGraph::Plot(const mglDataA & x, const mglDataA & y, const char * pen = "", const char * opt = "")
	static int _bind_Plot_overload_2(lua_State *L) {
		if (!_lg_typecheck_Plot_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Plot(const mglDataA & x, const mglDataA & y, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Plot(const mglDataA & x, const mglDataA & y, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Plot function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Plot function");
		}
		const mglDataA & y=*y_ptr;
		const char * pen=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Plot(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Plot(x, y, pen, opt);

		return 0;
	}

	// void mglGraph::Plot(const mglDataA & y, const char * pen = "", const char * opt = "")
	static int _bind_Plot_overload_3(lua_State *L) {
		if (!_lg_typecheck_Plot_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Plot(const mglDataA & y, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Plot(const mglDataA & y, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,2));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Plot function");
		}
		const mglDataA & y=*y_ptr;
		const char * pen=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Plot(const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Plot(y, pen, opt);

		return 0;
	}

	// Overload binder for mglGraph::Plot
	static int _bind_Plot(lua_State *L) {
		if (_lg_typecheck_Plot_overload_1(L)) return _bind_Plot_overload_1(L);
		if (_lg_typecheck_Plot_overload_2(L)) return _bind_Plot_overload_2(L);
		if (_lg_typecheck_Plot_overload_3(L)) return _bind_Plot_overload_3(L);

		luaL_error(L, "error in function Plot, cannot match any of the overloads for function Plot:\n  Plot(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Plot(const mglDataA &, const mglDataA &, const char *, const char *)\n  Plot(const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Tape(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * pen = "", const char * opt = "")
	static int _bind_Tape_overload_1(lua_State *L) {
		if (!_lg_typecheck_Tape_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Tape(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Tape(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Tape function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Tape function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Tape function");
		}
		const mglDataA & z=*z_ptr;
		const char * pen=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Tape(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Tape(x, y, z, pen, opt);

		return 0;
	}

	// void mglGraph::Tape(const mglDataA & x, const mglDataA & y, const char * pen = "", const char * opt = "")
	static int _bind_Tape_overload_2(lua_State *L) {
		if (!_lg_typecheck_Tape_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Tape(const mglDataA & x, const mglDataA & y, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Tape(const mglDataA & x, const mglDataA & y, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Tape function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Tape function");
		}
		const mglDataA & y=*y_ptr;
		const char * pen=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Tape(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Tape(x, y, pen, opt);

		return 0;
	}

	// void mglGraph::Tape(const mglDataA & y, const char * pen = "", const char * opt = "")
	static int _bind_Tape_overload_3(lua_State *L) {
		if (!_lg_typecheck_Tape_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Tape(const mglDataA & y, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Tape(const mglDataA & y, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,2));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Tape function");
		}
		const mglDataA & y=*y_ptr;
		const char * pen=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Tape(const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Tape(y, pen, opt);

		return 0;
	}

	// Overload binder for mglGraph::Tape
	static int _bind_Tape(lua_State *L) {
		if (_lg_typecheck_Tape_overload_1(L)) return _bind_Tape_overload_1(L);
		if (_lg_typecheck_Tape_overload_2(L)) return _bind_Tape_overload_2(L);
		if (_lg_typecheck_Tape_overload_3(L)) return _bind_Tape_overload_3(L);

		luaL_error(L, "error in function Tape, cannot match any of the overloads for function Tape:\n  Tape(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Tape(const mglDataA &, const mglDataA &, const char *, const char *)\n  Tape(const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Radar(const mglDataA & a, const char * pen = "", const char * opt = "")
	static int _bind_Radar(lua_State *L) {
		if (!_lg_typecheck_Radar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Radar(const mglDataA & a, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Radar(const mglDataA & a, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Radar function");
		}
		const mglDataA & a=*a_ptr;
		const char * pen=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Radar(const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Radar(a, pen, opt);

		return 0;
	}

	// void mglGraph::Step(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * pen = "", const char * opt = "")
	static int _bind_Step_overload_1(lua_State *L) {
		if (!_lg_typecheck_Step_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Step(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Step(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Step function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Step function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Step function");
		}
		const mglDataA & z=*z_ptr;
		const char * pen=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Step(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Step(x, y, z, pen, opt);

		return 0;
	}

	// void mglGraph::Step(const mglDataA & x, const mglDataA & y, const char * pen = "", const char * opt = "")
	static int _bind_Step_overload_2(lua_State *L) {
		if (!_lg_typecheck_Step_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Step(const mglDataA & x, const mglDataA & y, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Step(const mglDataA & x, const mglDataA & y, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Step function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Step function");
		}
		const mglDataA & y=*y_ptr;
		const char * pen=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Step(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Step(x, y, pen, opt);

		return 0;
	}

	// void mglGraph::Step(const mglDataA & y, const char * pen = "", const char * opt = "")
	static int _bind_Step_overload_3(lua_State *L) {
		if (!_lg_typecheck_Step_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Step(const mglDataA & y, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Step(const mglDataA & y, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,2));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Step function");
		}
		const mglDataA & y=*y_ptr;
		const char * pen=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Step(const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Step(y, pen, opt);

		return 0;
	}

	// Overload binder for mglGraph::Step
	static int _bind_Step(lua_State *L) {
		if (_lg_typecheck_Step_overload_1(L)) return _bind_Step_overload_1(L);
		if (_lg_typecheck_Step_overload_2(L)) return _bind_Step_overload_2(L);
		if (_lg_typecheck_Step_overload_3(L)) return _bind_Step_overload_3(L);

		luaL_error(L, "error in function Step, cannot match any of the overloads for function Step:\n  Step(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Step(const mglDataA &, const mglDataA &, const char *, const char *)\n  Step(const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Tens(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & c, const char * pen = "", const char * opt = "")
	static int _bind_Tens_overload_1(lua_State *L) {
		if (!_lg_typecheck_Tens_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Tens(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & c, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Tens(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & c, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Tens function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Tens function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Tens function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* c_ptr=(Luna< mglDataA >::check(L,5));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in mglGraph::Tens function");
		}
		const mglDataA & c=*c_ptr;
		const char * pen=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Tens(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Tens(x, y, z, c, pen, opt);

		return 0;
	}

	// void mglGraph::Tens(const mglDataA & x, const mglDataA & y, const mglDataA & c, const char * pen = "", const char * opt = "")
	static int _bind_Tens_overload_2(lua_State *L) {
		if (!_lg_typecheck_Tens_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Tens(const mglDataA & x, const mglDataA & y, const mglDataA & c, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Tens(const mglDataA & x, const mglDataA & y, const mglDataA & c, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Tens function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Tens function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* c_ptr=(Luna< mglDataA >::check(L,4));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in mglGraph::Tens function");
		}
		const mglDataA & c=*c_ptr;
		const char * pen=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Tens(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Tens(x, y, c, pen, opt);

		return 0;
	}

	// void mglGraph::Tens(const mglDataA & y, const mglDataA & c, const char * pen = "", const char * opt = "")
	static int _bind_Tens_overload_3(lua_State *L) {
		if (!_lg_typecheck_Tens_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Tens(const mglDataA & y, const mglDataA & c, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Tens(const mglDataA & y, const mglDataA & c, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,2));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Tens function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* c_ptr=(Luna< mglDataA >::check(L,3));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in mglGraph::Tens function");
		}
		const mglDataA & c=*c_ptr;
		const char * pen=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Tens(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Tens(y, c, pen, opt);

		return 0;
	}

	// Overload binder for mglGraph::Tens
	static int _bind_Tens(lua_State *L) {
		if (_lg_typecheck_Tens_overload_1(L)) return _bind_Tens_overload_1(L);
		if (_lg_typecheck_Tens_overload_2(L)) return _bind_Tens_overload_2(L);
		if (_lg_typecheck_Tens_overload_3(L)) return _bind_Tens_overload_3(L);

		luaL_error(L, "error in function Tens, cannot match any of the overloads for function Tens:\n  Tens(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Tens(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Tens(const mglDataA &, const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Area(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * pen = "", const char * opt = "")
	static int _bind_Area_overload_1(lua_State *L) {
		if (!_lg_typecheck_Area_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Area(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Area(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Area function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Area function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Area function");
		}
		const mglDataA & z=*z_ptr;
		const char * pen=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Area(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Area(x, y, z, pen, opt);

		return 0;
	}

	// void mglGraph::Area(const mglDataA & x, const mglDataA & y, const char * pen = "", const char * opt = "")
	static int _bind_Area_overload_2(lua_State *L) {
		if (!_lg_typecheck_Area_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Area(const mglDataA & x, const mglDataA & y, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Area(const mglDataA & x, const mglDataA & y, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Area function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Area function");
		}
		const mglDataA & y=*y_ptr;
		const char * pen=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Area(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Area(x, y, pen, opt);

		return 0;
	}

	// void mglGraph::Area(const mglDataA & y, const char * pen = "", const char * opt = "")
	static int _bind_Area_overload_3(lua_State *L) {
		if (!_lg_typecheck_Area_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Area(const mglDataA & y, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Area(const mglDataA & y, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,2));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Area function");
		}
		const mglDataA & y=*y_ptr;
		const char * pen=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Area(const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Area(y, pen, opt);

		return 0;
	}

	// Overload binder for mglGraph::Area
	static int _bind_Area(lua_State *L) {
		if (_lg_typecheck_Area_overload_1(L)) return _bind_Area_overload_1(L);
		if (_lg_typecheck_Area_overload_2(L)) return _bind_Area_overload_2(L);
		if (_lg_typecheck_Area_overload_3(L)) return _bind_Area_overload_3(L);

		luaL_error(L, "error in function Area, cannot match any of the overloads for function Area:\n  Area(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Area(const mglDataA &, const mglDataA &, const char *, const char *)\n  Area(const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Region(const mglDataA & y1, const mglDataA & y2, const char * pen = "", const char * opt = "")
	static int _bind_Region_overload_1(lua_State *L) {
		if (!_lg_typecheck_Region_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Region(const mglDataA & y1, const mglDataA & y2, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Region(const mglDataA & y1, const mglDataA & y2, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* y1_ptr=(Luna< mglDataA >::check(L,2));
		if( !y1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y1 in mglGraph::Region function");
		}
		const mglDataA & y1=*y1_ptr;
		const mglDataA* y2_ptr=(Luna< mglDataA >::check(L,3));
		if( !y2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y2 in mglGraph::Region function");
		}
		const mglDataA & y2=*y2_ptr;
		const char * pen=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Region(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Region(y1, y2, pen, opt);

		return 0;
	}

	// void mglGraph::Region(const mglDataA & x, const mglDataA & y1, const mglDataA & y2, const char * pen = "", const char * opt = "")
	static int _bind_Region_overload_2(lua_State *L) {
		if (!_lg_typecheck_Region_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Region(const mglDataA & x, const mglDataA & y1, const mglDataA & y2, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Region(const mglDataA & x, const mglDataA & y1, const mglDataA & y2, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Region function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y1_ptr=(Luna< mglDataA >::check(L,3));
		if( !y1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y1 in mglGraph::Region function");
		}
		const mglDataA & y1=*y1_ptr;
		const mglDataA* y2_ptr=(Luna< mglDataA >::check(L,4));
		if( !y2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y2 in mglGraph::Region function");
		}
		const mglDataA & y2=*y2_ptr;
		const char * pen=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Region(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Region(x, y1, y2, pen, opt);

		return 0;
	}

	// Overload binder for mglGraph::Region
	static int _bind_Region(lua_State *L) {
		if (_lg_typecheck_Region_overload_1(L)) return _bind_Region_overload_1(L);
		if (_lg_typecheck_Region_overload_2(L)) return _bind_Region_overload_2(L);

		luaL_error(L, "error in function Region, cannot match any of the overloads for function Region:\n  Region(const mglDataA &, const mglDataA &, const char *, const char *)\n  Region(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Stem(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * pen = "", const char * opt = "")
	static int _bind_Stem_overload_1(lua_State *L) {
		if (!_lg_typecheck_Stem_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Stem(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Stem(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Stem function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Stem function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Stem function");
		}
		const mglDataA & z=*z_ptr;
		const char * pen=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Stem(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Stem(x, y, z, pen, opt);

		return 0;
	}

	// void mglGraph::Stem(const mglDataA & x, const mglDataA & y, const char * pen = "", const char * opt = "")
	static int _bind_Stem_overload_2(lua_State *L) {
		if (!_lg_typecheck_Stem_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Stem(const mglDataA & x, const mglDataA & y, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Stem(const mglDataA & x, const mglDataA & y, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Stem function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Stem function");
		}
		const mglDataA & y=*y_ptr;
		const char * pen=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Stem(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Stem(x, y, pen, opt);

		return 0;
	}

	// void mglGraph::Stem(const mglDataA & y, const char * pen = "", const char * opt = "")
	static int _bind_Stem_overload_3(lua_State *L) {
		if (!_lg_typecheck_Stem_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Stem(const mglDataA & y, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Stem(const mglDataA & y, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,2));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Stem function");
		}
		const mglDataA & y=*y_ptr;
		const char * pen=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Stem(const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Stem(y, pen, opt);

		return 0;
	}

	// Overload binder for mglGraph::Stem
	static int _bind_Stem(lua_State *L) {
		if (_lg_typecheck_Stem_overload_1(L)) return _bind_Stem_overload_1(L);
		if (_lg_typecheck_Stem_overload_2(L)) return _bind_Stem_overload_2(L);
		if (_lg_typecheck_Stem_overload_3(L)) return _bind_Stem_overload_3(L);

		luaL_error(L, "error in function Stem, cannot match any of the overloads for function Stem:\n  Stem(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Stem(const mglDataA &, const mglDataA &, const char *, const char *)\n  Stem(const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Bars(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * pen = "", const char * opt = "")
	static int _bind_Bars_overload_1(lua_State *L) {
		if (!_lg_typecheck_Bars_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Bars(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Bars(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Bars function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Bars function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Bars function");
		}
		const mglDataA & z=*z_ptr;
		const char * pen=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Bars(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Bars(x, y, z, pen, opt);

		return 0;
	}

	// void mglGraph::Bars(const mglDataA & x, const mglDataA & y, const char * pen = "", const char * opt = "")
	static int _bind_Bars_overload_2(lua_State *L) {
		if (!_lg_typecheck_Bars_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Bars(const mglDataA & x, const mglDataA & y, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Bars(const mglDataA & x, const mglDataA & y, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Bars function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Bars function");
		}
		const mglDataA & y=*y_ptr;
		const char * pen=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Bars(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Bars(x, y, pen, opt);

		return 0;
	}

	// void mglGraph::Bars(const mglDataA & y, const char * pen = "", const char * opt = "")
	static int _bind_Bars_overload_3(lua_State *L) {
		if (!_lg_typecheck_Bars_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Bars(const mglDataA & y, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Bars(const mglDataA & y, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,2));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Bars function");
		}
		const mglDataA & y=*y_ptr;
		const char * pen=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Bars(const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Bars(y, pen, opt);

		return 0;
	}

	// Overload binder for mglGraph::Bars
	static int _bind_Bars(lua_State *L) {
		if (_lg_typecheck_Bars_overload_1(L)) return _bind_Bars_overload_1(L);
		if (_lg_typecheck_Bars_overload_2(L)) return _bind_Bars_overload_2(L);
		if (_lg_typecheck_Bars_overload_3(L)) return _bind_Bars_overload_3(L);

		luaL_error(L, "error in function Bars, cannot match any of the overloads for function Bars:\n  Bars(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Bars(const mglDataA &, const mglDataA &, const char *, const char *)\n  Bars(const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Barh(const mglDataA & y, const mglDataA & v, const char * pen = "", const char * opt = "")
	static int _bind_Barh_overload_1(lua_State *L) {
		if (!_lg_typecheck_Barh_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Barh(const mglDataA & y, const mglDataA & v, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Barh(const mglDataA & y, const mglDataA & v, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,2));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Barh function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,3));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::Barh function");
		}
		const mglDataA & v=*v_ptr;
		const char * pen=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Barh(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Barh(y, v, pen, opt);

		return 0;
	}

	// void mglGraph::Barh(const mglDataA & v, const char * pen = "", const char * opt = "")
	static int _bind_Barh_overload_2(lua_State *L) {
		if (!_lg_typecheck_Barh_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Barh(const mglDataA & v, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Barh(const mglDataA & v, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::Barh function");
		}
		const mglDataA & v=*v_ptr;
		const char * pen=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Barh(const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Barh(v, pen, opt);

		return 0;
	}

	// Overload binder for mglGraph::Barh
	static int _bind_Barh(lua_State *L) {
		if (_lg_typecheck_Barh_overload_1(L)) return _bind_Barh_overload_1(L);
		if (_lg_typecheck_Barh_overload_2(L)) return _bind_Barh_overload_2(L);

		luaL_error(L, "error in function Barh, cannot match any of the overloads for function Barh:\n  Barh(const mglDataA &, const mglDataA &, const char *, const char *)\n  Barh(const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Chart(const mglDataA & a, const char * colors = "", const char * opt = "")
	static int _bind_Chart(lua_State *L) {
		if (!_lg_typecheck_Chart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Chart(const mglDataA & a, const char * colors = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Chart(const mglDataA & a, const char * colors = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Chart function");
		}
		const mglDataA & a=*a_ptr;
		const char * colors=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Chart(const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Chart(a, colors, opt);

		return 0;
	}

	// void mglGraph::BoxPlot(const mglDataA & x, const mglDataA & y, const char * pen = "", const char * opt = "")
	static int _bind_BoxPlot_overload_1(lua_State *L) {
		if (!_lg_typecheck_BoxPlot_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::BoxPlot(const mglDataA & x, const mglDataA & y, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::BoxPlot(const mglDataA & x, const mglDataA & y, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::BoxPlot function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::BoxPlot function");
		}
		const mglDataA & y=*y_ptr;
		const char * pen=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::BoxPlot(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->BoxPlot(x, y, pen, opt);

		return 0;
	}

	// void mglGraph::BoxPlot(const mglDataA & y, const char * pen = "", const char * opt = "")
	static int _bind_BoxPlot_overload_2(lua_State *L) {
		if (!_lg_typecheck_BoxPlot_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::BoxPlot(const mglDataA & y, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::BoxPlot(const mglDataA & y, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,2));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::BoxPlot function");
		}
		const mglDataA & y=*y_ptr;
		const char * pen=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::BoxPlot(const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->BoxPlot(y, pen, opt);

		return 0;
	}

	// Overload binder for mglGraph::BoxPlot
	static int _bind_BoxPlot(lua_State *L) {
		if (_lg_typecheck_BoxPlot_overload_1(L)) return _bind_BoxPlot_overload_1(L);
		if (_lg_typecheck_BoxPlot_overload_2(L)) return _bind_BoxPlot_overload_2(L);

		luaL_error(L, "error in function BoxPlot, cannot match any of the overloads for function BoxPlot:\n  BoxPlot(const mglDataA &, const mglDataA &, const char *, const char *)\n  BoxPlot(const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Candle(const mglDataA & x, const mglDataA & v1, const mglDataA & v2, const mglDataA & y1, const mglDataA & y2, const char * pen = "", const char * opt = "")
	static int _bind_Candle_overload_1(lua_State *L) {
		if (!_lg_typecheck_Candle_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Candle(const mglDataA & x, const mglDataA & v1, const mglDataA & v2, const mglDataA & y1, const mglDataA & y2, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Candle(const mglDataA & x, const mglDataA & v1, const mglDataA & v2, const mglDataA & y1, const mglDataA & y2, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\narg 5 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Candle function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* v1_ptr=(Luna< mglDataA >::check(L,3));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in mglGraph::Candle function");
		}
		const mglDataA & v1=*v1_ptr;
		const mglDataA* v2_ptr=(Luna< mglDataA >::check(L,4));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in mglGraph::Candle function");
		}
		const mglDataA & v2=*v2_ptr;
		const mglDataA* y1_ptr=(Luna< mglDataA >::check(L,5));
		if( !y1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y1 in mglGraph::Candle function");
		}
		const mglDataA & y1=*y1_ptr;
		const mglDataA* y2_ptr=(Luna< mglDataA >::check(L,6));
		if( !y2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y2 in mglGraph::Candle function");
		}
		const mglDataA & y2=*y2_ptr;
		const char * pen=luatop>6 ? (const char *)lua_tostring(L,7) : "";
		const char * opt=luatop>7 ? (const char *)lua_tostring(L,8) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Candle(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Candle(x, v1, v2, y1, y2, pen, opt);

		return 0;
	}

	// void mglGraph::Candle(const mglDataA & v1, const mglDataA & v2, const mglDataA & y1, const mglDataA & y2, const char * pen = "", const char * opt = "")
	static int _bind_Candle_overload_2(lua_State *L) {
		if (!_lg_typecheck_Candle_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Candle(const mglDataA & v1, const mglDataA & v2, const mglDataA & y1, const mglDataA & y2, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Candle(const mglDataA & v1, const mglDataA & v2, const mglDataA & y1, const mglDataA & y2, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* v1_ptr=(Luna< mglDataA >::check(L,2));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in mglGraph::Candle function");
		}
		const mglDataA & v1=*v1_ptr;
		const mglDataA* v2_ptr=(Luna< mglDataA >::check(L,3));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in mglGraph::Candle function");
		}
		const mglDataA & v2=*v2_ptr;
		const mglDataA* y1_ptr=(Luna< mglDataA >::check(L,4));
		if( !y1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y1 in mglGraph::Candle function");
		}
		const mglDataA & y1=*y1_ptr;
		const mglDataA* y2_ptr=(Luna< mglDataA >::check(L,5));
		if( !y2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y2 in mglGraph::Candle function");
		}
		const mglDataA & y2=*y2_ptr;
		const char * pen=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Candle(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Candle(v1, v2, y1, y2, pen, opt);

		return 0;
	}

	// void mglGraph::Candle(const mglDataA & v1, const mglDataA & v2, const char * pen = "", const char * opt = "")
	static int _bind_Candle_overload_3(lua_State *L) {
		if (!_lg_typecheck_Candle_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Candle(const mglDataA & v1, const mglDataA & v2, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Candle(const mglDataA & v1, const mglDataA & v2, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* v1_ptr=(Luna< mglDataA >::check(L,2));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in mglGraph::Candle function");
		}
		const mglDataA & v1=*v1_ptr;
		const mglDataA* v2_ptr=(Luna< mglDataA >::check(L,3));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in mglGraph::Candle function");
		}
		const mglDataA & v2=*v2_ptr;
		const char * pen=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Candle(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Candle(v1, v2, pen, opt);

		return 0;
	}

	// void mglGraph::Candle(const mglDataA & y, const mglDataA & y1, const mglDataA & y2, const char * pen = "", const char * opt = "")
	static int _bind_Candle_overload_4(lua_State *L) {
		if (!_lg_typecheck_Candle_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Candle(const mglDataA & y, const mglDataA & y1, const mglDataA & y2, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Candle(const mglDataA & y, const mglDataA & y1, const mglDataA & y2, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,2));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Candle function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* y1_ptr=(Luna< mglDataA >::check(L,3));
		if( !y1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y1 in mglGraph::Candle function");
		}
		const mglDataA & y1=*y1_ptr;
		const mglDataA* y2_ptr=(Luna< mglDataA >::check(L,4));
		if( !y2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y2 in mglGraph::Candle function");
		}
		const mglDataA & y2=*y2_ptr;
		const char * pen=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Candle(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Candle(y, y1, y2, pen, opt);

		return 0;
	}

	// void mglGraph::Candle(const mglDataA & y, const char * pen = "", const char * opt = "")
	static int _bind_Candle_overload_5(lua_State *L) {
		if (!_lg_typecheck_Candle_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Candle(const mglDataA & y, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Candle(const mglDataA & y, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,2));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Candle function");
		}
		const mglDataA & y=*y_ptr;
		const char * pen=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Candle(const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Candle(y, pen, opt);

		return 0;
	}

	// Overload binder for mglGraph::Candle
	static int _bind_Candle(lua_State *L) {
		if (_lg_typecheck_Candle_overload_1(L)) return _bind_Candle_overload_1(L);
		if (_lg_typecheck_Candle_overload_2(L)) return _bind_Candle_overload_2(L);
		if (_lg_typecheck_Candle_overload_3(L)) return _bind_Candle_overload_3(L);
		if (_lg_typecheck_Candle_overload_4(L)) return _bind_Candle_overload_4(L);
		if (_lg_typecheck_Candle_overload_5(L)) return _bind_Candle_overload_5(L);

		luaL_error(L, "error in function Candle, cannot match any of the overloads for function Candle:\n  Candle(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Candle(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Candle(const mglDataA &, const mglDataA &, const char *, const char *)\n  Candle(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Candle(const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::TextMark(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & r, const char * text, const char * fnt = "", const char * opt = "")
	static int _bind_TextMark_overload_1(lua_State *L) {
		if (!_lg_typecheck_TextMark_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::TextMark(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & r, const char * text, const char * fnt = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::TextMark(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & r, const char * text, const char * fnt = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::TextMark function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::TextMark function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::TextMark function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* r_ptr=(Luna< mglDataA >::check(L,5));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in mglGraph::TextMark function");
		}
		const mglDataA & r=*r_ptr;
		const char * text=(const char *)lua_tostring(L,6);
		const char * fnt=luatop>6 ? (const char *)lua_tostring(L,7) : "";
		const char * opt=luatop>7 ? (const char *)lua_tostring(L,8) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::TextMark(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->TextMark(x, y, z, r, text, fnt, opt);

		return 0;
	}

	// void mglGraph::TextMark(const mglDataA & x, const mglDataA & y, const mglDataA & r, const char * text, const char * fnt = "", const char * opt = "")
	static int _bind_TextMark_overload_2(lua_State *L) {
		if (!_lg_typecheck_TextMark_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::TextMark(const mglDataA & x, const mglDataA & y, const mglDataA & r, const char * text, const char * fnt = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::TextMark(const mglDataA & x, const mglDataA & y, const mglDataA & r, const char * text, const char * fnt = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::TextMark function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::TextMark function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* r_ptr=(Luna< mglDataA >::check(L,4));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in mglGraph::TextMark function");
		}
		const mglDataA & r=*r_ptr;
		const char * text=(const char *)lua_tostring(L,5);
		const char * fnt=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::TextMark(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->TextMark(x, y, r, text, fnt, opt);

		return 0;
	}

	// void mglGraph::TextMark(const mglDataA & y, const mglDataA & r, const char * text, const char * fnt = "", const char * opt = "")
	static int _bind_TextMark_overload_3(lua_State *L) {
		if (!_lg_typecheck_TextMark_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::TextMark(const mglDataA & y, const mglDataA & r, const char * text, const char * fnt = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::TextMark(const mglDataA & y, const mglDataA & r, const char * text, const char * fnt = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,2));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::TextMark function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* r_ptr=(Luna< mglDataA >::check(L,3));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in mglGraph::TextMark function");
		}
		const mglDataA & r=*r_ptr;
		const char * text=(const char *)lua_tostring(L,4);
		const char * fnt=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::TextMark(const mglDataA &, const mglDataA &, const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->TextMark(y, r, text, fnt, opt);

		return 0;
	}

	// void mglGraph::TextMark(const mglDataA & y, const char * text, const char * fnt = "", const char * opt = "")
	static int _bind_TextMark_overload_4(lua_State *L) {
		if (!_lg_typecheck_TextMark_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::TextMark(const mglDataA & y, const char * text, const char * fnt = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::TextMark(const mglDataA & y, const char * text, const char * fnt = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,2));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::TextMark function");
		}
		const mglDataA & y=*y_ptr;
		const char * text=(const char *)lua_tostring(L,3);
		const char * fnt=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::TextMark(const mglDataA &, const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->TextMark(y, text, fnt, opt);

		return 0;
	}

	// Overload binder for mglGraph::TextMark
	static int _bind_TextMark(lua_State *L) {
		if (_lg_typecheck_TextMark_overload_1(L)) return _bind_TextMark_overload_1(L);
		if (_lg_typecheck_TextMark_overload_2(L)) return _bind_TextMark_overload_2(L);
		if (_lg_typecheck_TextMark_overload_3(L)) return _bind_TextMark_overload_3(L);
		if (_lg_typecheck_TextMark_overload_4(L)) return _bind_TextMark_overload_4(L);

		luaL_error(L, "error in function TextMark, cannot match any of the overloads for function TextMark:\n  TextMark(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *, const char *)\n  TextMark(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *, const char *)\n  TextMark(const mglDataA &, const mglDataA &, const char *, const char *, const char *)\n  TextMark(const mglDataA &, const char *, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Table(const mglDataA & val, const char * text, const char * fnt = "#|", const char * opt = "")
	static int _bind_Table_overload_1(lua_State *L) {
		if (!_lg_typecheck_Table_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Table(const mglDataA & val, const char * text, const char * fnt = \"#|\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Table(const mglDataA & val, const char * text, const char * fnt = \"#|\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* val_ptr=(Luna< mglDataA >::check(L,2));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in mglGraph::Table function");
		}
		const mglDataA & val=*val_ptr;
		const char * text=(const char *)lua_tostring(L,3);
		const char * fnt=luatop>3 ? (const char *)lua_tostring(L,4) : "#|";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Table(const mglDataA &, const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Table(val, text, fnt, opt);

		return 0;
	}

	// void mglGraph::Table(double x, double y, const mglDataA & val, const char * text, const char * fnt = "#|", const char * opt = "")
	static int _bind_Table_overload_2(lua_State *L) {
		if (!_lg_typecheck_Table_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Table(double x, double y, const mglDataA & val, const char * text, const char * fnt = \"#|\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Table(double x, double y, const mglDataA & val, const char * text, const char * fnt = \"#|\", const char * opt = \"\")\nClass arguments details:\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		const mglDataA* val_ptr=(Luna< mglDataA >::check(L,4));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in mglGraph::Table function");
		}
		const mglDataA & val=*val_ptr;
		const char * text=(const char *)lua_tostring(L,5);
		const char * fnt=luatop>5 ? (const char *)lua_tostring(L,6) : "#|";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Table(double, double, const mglDataA &, const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Table(x, y, val, text, fnt, opt);

		return 0;
	}

	// Overload binder for mglGraph::Table
	static int _bind_Table(lua_State *L) {
		if (_lg_typecheck_Table_overload_1(L)) return _bind_Table_overload_1(L);
		if (_lg_typecheck_Table_overload_2(L)) return _bind_Table_overload_2(L);

		luaL_error(L, "error in function Table, cannot match any of the overloads for function Table:\n  Table(const mglDataA &, const char *, const char *, const char *)\n  Table(double, double, const mglDataA &, const char *, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Tube(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & r, const char * pen = "", const char * opt = "")
	static int _bind_Tube_overload_1(lua_State *L) {
		if (!_lg_typecheck_Tube_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Tube(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & r, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Tube(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & r, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Tube function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Tube function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Tube function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* r_ptr=(Luna< mglDataA >::check(L,5));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in mglGraph::Tube function");
		}
		const mglDataA & r=*r_ptr;
		const char * pen=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Tube(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Tube(x, y, z, r, pen, opt);

		return 0;
	}

	// void mglGraph::Tube(const mglDataA & x, const mglDataA & y, const mglDataA & z, double r, const char * pen = "", const char * opt = "")
	static int _bind_Tube_overload_2(lua_State *L) {
		if (!_lg_typecheck_Tube_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Tube(const mglDataA & x, const mglDataA & y, const mglDataA & z, double r, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Tube(const mglDataA & x, const mglDataA & y, const mglDataA & z, double r, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Tube function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Tube function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Tube function");
		}
		const mglDataA & z=*z_ptr;
		double r=(double)lua_tonumber(L,5);
		const char * pen=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Tube(const mglDataA &, const mglDataA &, const mglDataA &, double, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Tube(x, y, z, r, pen, opt);

		return 0;
	}

	// void mglGraph::Tube(const mglDataA & x, const mglDataA & y, const mglDataA & r, const char * pen = "", const char * opt = "")
	static int _bind_Tube_overload_3(lua_State *L) {
		if (!_lg_typecheck_Tube_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Tube(const mglDataA & x, const mglDataA & y, const mglDataA & r, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Tube(const mglDataA & x, const mglDataA & y, const mglDataA & r, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Tube function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Tube function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* r_ptr=(Luna< mglDataA >::check(L,4));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in mglGraph::Tube function");
		}
		const mglDataA & r=*r_ptr;
		const char * pen=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Tube(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Tube(x, y, r, pen, opt);

		return 0;
	}

	// void mglGraph::Tube(const mglDataA & x, const mglDataA & y, double r, const char * pen = "", const char * opt = "")
	static int _bind_Tube_overload_4(lua_State *L) {
		if (!_lg_typecheck_Tube_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Tube(const mglDataA & x, const mglDataA & y, double r, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Tube(const mglDataA & x, const mglDataA & y, double r, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Tube function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Tube function");
		}
		const mglDataA & y=*y_ptr;
		double r=(double)lua_tonumber(L,4);
		const char * pen=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Tube(const mglDataA &, const mglDataA &, double, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Tube(x, y, r, pen, opt);

		return 0;
	}

	// void mglGraph::Tube(const mglDataA & y, const mglDataA & r, const char * pen = "", const char * opt = "")
	static int _bind_Tube_overload_5(lua_State *L) {
		if (!_lg_typecheck_Tube_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Tube(const mglDataA & y, const mglDataA & r, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Tube(const mglDataA & y, const mglDataA & r, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,2));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Tube function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* r_ptr=(Luna< mglDataA >::check(L,3));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in mglGraph::Tube function");
		}
		const mglDataA & r=*r_ptr;
		const char * pen=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Tube(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Tube(y, r, pen, opt);

		return 0;
	}

	// void mglGraph::Tube(const mglDataA & y, double r, const char * pen = "", const char * opt = "")
	static int _bind_Tube_overload_6(lua_State *L) {
		if (!_lg_typecheck_Tube_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Tube(const mglDataA & y, double r, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Tube(const mglDataA & y, double r, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,2));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Tube function");
		}
		const mglDataA & y=*y_ptr;
		double r=(double)lua_tonumber(L,3);
		const char * pen=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Tube(const mglDataA &, double, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Tube(y, r, pen, opt);

		return 0;
	}

	// Overload binder for mglGraph::Tube
	static int _bind_Tube(lua_State *L) {
		if (_lg_typecheck_Tube_overload_1(L)) return _bind_Tube_overload_1(L);
		if (_lg_typecheck_Tube_overload_2(L)) return _bind_Tube_overload_2(L);
		if (_lg_typecheck_Tube_overload_3(L)) return _bind_Tube_overload_3(L);
		if (_lg_typecheck_Tube_overload_4(L)) return _bind_Tube_overload_4(L);
		if (_lg_typecheck_Tube_overload_5(L)) return _bind_Tube_overload_5(L);
		if (_lg_typecheck_Tube_overload_6(L)) return _bind_Tube_overload_6(L);

		luaL_error(L, "error in function Tube, cannot match any of the overloads for function Tube:\n  Tube(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Tube(const mglDataA &, const mglDataA &, const mglDataA &, double, const char *, const char *)\n  Tube(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Tube(const mglDataA &, const mglDataA &, double, const char *, const char *)\n  Tube(const mglDataA &, const mglDataA &, const char *, const char *)\n  Tube(const mglDataA &, double, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Torus(const mglDataA & r, const mglDataA & z, const char * pen = "", const char * opt = "")
	static int _bind_Torus(lua_State *L) {
		if (!_lg_typecheck_Torus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Torus(const mglDataA & r, const mglDataA & z, const char * pen = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Torus(const mglDataA & r, const mglDataA & z, const char * pen = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* r_ptr=(Luna< mglDataA >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in mglGraph::Torus function");
		}
		const mglDataA & r=*r_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,3));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Torus function");
		}
		const mglDataA & z=*z_ptr;
		const char * pen=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Torus(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Torus(r, z, pen, opt);

		return 0;
	}

	// void mglGraph::Mesh(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * stl = "", const char * opt = "")
	static int _bind_Mesh_overload_1(lua_State *L) {
		if (!_lg_typecheck_Mesh_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Mesh(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Mesh(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Mesh function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Mesh function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Mesh function");
		}
		const mglDataA & z=*z_ptr;
		const char * stl=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Mesh(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Mesh(x, y, z, stl, opt);

		return 0;
	}

	// void mglGraph::Mesh(const mglDataA & z, const char * stl = "", const char * opt = "")
	static int _bind_Mesh_overload_2(lua_State *L) {
		if (!_lg_typecheck_Mesh_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Mesh(const mglDataA & z, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Mesh(const mglDataA & z, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,2));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Mesh function");
		}
		const mglDataA & z=*z_ptr;
		const char * stl=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Mesh(const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Mesh(z, stl, opt);

		return 0;
	}

	// Overload binder for mglGraph::Mesh
	static int _bind_Mesh(lua_State *L) {
		if (_lg_typecheck_Mesh_overload_1(L)) return _bind_Mesh_overload_1(L);
		if (_lg_typecheck_Mesh_overload_2(L)) return _bind_Mesh_overload_2(L);

		luaL_error(L, "error in function Mesh, cannot match any of the overloads for function Mesh:\n  Mesh(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Mesh(const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Fall(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * stl = "", const char * opt = "")
	static int _bind_Fall_overload_1(lua_State *L) {
		if (!_lg_typecheck_Fall_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Fall(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Fall(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Fall function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Fall function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Fall function");
		}
		const mglDataA & z=*z_ptr;
		const char * stl=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Fall(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Fall(x, y, z, stl, opt);

		return 0;
	}

	// void mglGraph::Fall(const mglDataA & z, const char * stl = "", const char * opt = "")
	static int _bind_Fall_overload_2(lua_State *L) {
		if (!_lg_typecheck_Fall_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Fall(const mglDataA & z, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Fall(const mglDataA & z, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,2));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Fall function");
		}
		const mglDataA & z=*z_ptr;
		const char * stl=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Fall(const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Fall(z, stl, opt);

		return 0;
	}

	// Overload binder for mglGraph::Fall
	static int _bind_Fall(lua_State *L) {
		if (_lg_typecheck_Fall_overload_1(L)) return _bind_Fall_overload_1(L);
		if (_lg_typecheck_Fall_overload_2(L)) return _bind_Fall_overload_2(L);

		luaL_error(L, "error in function Fall, cannot match any of the overloads for function Fall:\n  Fall(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Fall(const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Belt(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * stl = "", const char * opt = "")
	static int _bind_Belt_overload_1(lua_State *L) {
		if (!_lg_typecheck_Belt_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Belt(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Belt(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Belt function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Belt function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Belt function");
		}
		const mglDataA & z=*z_ptr;
		const char * stl=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Belt(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Belt(x, y, z, stl, opt);

		return 0;
	}

	// void mglGraph::Belt(const mglDataA & z, const char * stl = "", const char * opt = "")
	static int _bind_Belt_overload_2(lua_State *L) {
		if (!_lg_typecheck_Belt_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Belt(const mglDataA & z, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Belt(const mglDataA & z, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,2));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Belt function");
		}
		const mglDataA & z=*z_ptr;
		const char * stl=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Belt(const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Belt(z, stl, opt);

		return 0;
	}

	// Overload binder for mglGraph::Belt
	static int _bind_Belt(lua_State *L) {
		if (_lg_typecheck_Belt_overload_1(L)) return _bind_Belt_overload_1(L);
		if (_lg_typecheck_Belt_overload_2(L)) return _bind_Belt_overload_2(L);

		luaL_error(L, "error in function Belt, cannot match any of the overloads for function Belt:\n  Belt(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Belt(const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Surf(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * stl = "", const char * opt = "")
	static int _bind_Surf_overload_1(lua_State *L) {
		if (!_lg_typecheck_Surf_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Surf(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Surf(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Surf function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Surf function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Surf function");
		}
		const mglDataA & z=*z_ptr;
		const char * stl=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Surf(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Surf(x, y, z, stl, opt);

		return 0;
	}

	// void mglGraph::Surf(const mglDataA & z, const char * stl = "", const char * opt = "")
	static int _bind_Surf_overload_2(lua_State *L) {
		if (!_lg_typecheck_Surf_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Surf(const mglDataA & z, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Surf(const mglDataA & z, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,2));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Surf function");
		}
		const mglDataA & z=*z_ptr;
		const char * stl=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Surf(const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Surf(z, stl, opt);

		return 0;
	}

	// Overload binder for mglGraph::Surf
	static int _bind_Surf(lua_State *L) {
		if (_lg_typecheck_Surf_overload_1(L)) return _bind_Surf_overload_1(L);
		if (_lg_typecheck_Surf_overload_2(L)) return _bind_Surf_overload_2(L);

		luaL_error(L, "error in function Surf, cannot match any of the overloads for function Surf:\n  Surf(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Surf(const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Tile(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * stl = "", const char * opt = "")
	static int _bind_Tile_overload_1(lua_State *L) {
		if (!_lg_typecheck_Tile_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Tile(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Tile(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Tile function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Tile function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Tile function");
		}
		const mglDataA & z=*z_ptr;
		const char * stl=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Tile(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Tile(x, y, z, stl, opt);

		return 0;
	}

	// void mglGraph::Tile(const mglDataA & z, const char * stl = "", const char * opt = "")
	static int _bind_Tile_overload_2(lua_State *L) {
		if (!_lg_typecheck_Tile_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Tile(const mglDataA & z, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Tile(const mglDataA & z, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,2));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Tile function");
		}
		const mglDataA & z=*z_ptr;
		const char * stl=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Tile(const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Tile(z, stl, opt);

		return 0;
	}

	// Overload binder for mglGraph::Tile
	static int _bind_Tile(lua_State *L) {
		if (_lg_typecheck_Tile_overload_1(L)) return _bind_Tile_overload_1(L);
		if (_lg_typecheck_Tile_overload_2(L)) return _bind_Tile_overload_2(L);

		luaL_error(L, "error in function Tile, cannot match any of the overloads for function Tile:\n  Tile(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Tile(const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Dens(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * stl = "", const char * opt = "")
	static int _bind_Dens_overload_1(lua_State *L) {
		if (!_lg_typecheck_Dens_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Dens(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Dens(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Dens function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Dens function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Dens function");
		}
		const mglDataA & z=*z_ptr;
		const char * stl=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Dens(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Dens(x, y, z, stl, opt);

		return 0;
	}

	// void mglGraph::Dens(const mglDataA & z, const char * stl = "", const char * opt = "")
	static int _bind_Dens_overload_2(lua_State *L) {
		if (!_lg_typecheck_Dens_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Dens(const mglDataA & z, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Dens(const mglDataA & z, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,2));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Dens function");
		}
		const mglDataA & z=*z_ptr;
		const char * stl=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Dens(const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Dens(z, stl, opt);

		return 0;
	}

	// Overload binder for mglGraph::Dens
	static int _bind_Dens(lua_State *L) {
		if (_lg_typecheck_Dens_overload_1(L)) return _bind_Dens_overload_1(L);
		if (_lg_typecheck_Dens_overload_2(L)) return _bind_Dens_overload_2(L);

		luaL_error(L, "error in function Dens, cannot match any of the overloads for function Dens:\n  Dens(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Dens(const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Boxs(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * stl = "", const char * opt = "")
	static int _bind_Boxs_overload_1(lua_State *L) {
		if (!_lg_typecheck_Boxs_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Boxs(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Boxs(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Boxs function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Boxs function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Boxs function");
		}
		const mglDataA & z=*z_ptr;
		const char * stl=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Boxs(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Boxs(x, y, z, stl, opt);

		return 0;
	}

	// void mglGraph::Boxs(const mglDataA & z, const char * stl = "", const char * opt = "")
	static int _bind_Boxs_overload_2(lua_State *L) {
		if (!_lg_typecheck_Boxs_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Boxs(const mglDataA & z, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Boxs(const mglDataA & z, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,2));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Boxs function");
		}
		const mglDataA & z=*z_ptr;
		const char * stl=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Boxs(const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Boxs(z, stl, opt);

		return 0;
	}

	// Overload binder for mglGraph::Boxs
	static int _bind_Boxs(lua_State *L) {
		if (_lg_typecheck_Boxs_overload_1(L)) return _bind_Boxs_overload_1(L);
		if (_lg_typecheck_Boxs_overload_2(L)) return _bind_Boxs_overload_2(L);

		luaL_error(L, "error in function Boxs, cannot match any of the overloads for function Boxs:\n  Boxs(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Boxs(const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Cont(const mglDataA & v, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = "", const char * opt = "")
	static int _bind_Cont_overload_1(lua_State *L) {
		if (!_lg_typecheck_Cont_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Cont(const mglDataA & v, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Cont(const mglDataA & v, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::Cont function");
		}
		const mglDataA & v=*v_ptr;
		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,3));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Cont function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,4));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Cont function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,5));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Cont function");
		}
		const mglDataA & z=*z_ptr;
		const char * sch=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Cont(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Cont(v, x, y, z, sch, opt);

		return 0;
	}

	// void mglGraph::Cont(const mglDataA & v, const mglDataA & z, const char * sch = "", const char * opt = "")
	static int _bind_Cont_overload_2(lua_State *L) {
		if (!_lg_typecheck_Cont_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Cont(const mglDataA & v, const mglDataA & z, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Cont(const mglDataA & v, const mglDataA & z, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::Cont function");
		}
		const mglDataA & v=*v_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,3));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Cont function");
		}
		const mglDataA & z=*z_ptr;
		const char * sch=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Cont(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Cont(v, z, sch, opt);

		return 0;
	}

	// void mglGraph::Cont(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = "", const char * opt = "")
	static int _bind_Cont_overload_3(lua_State *L) {
		if (!_lg_typecheck_Cont_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Cont(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Cont(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Cont function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Cont function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Cont function");
		}
		const mglDataA & z=*z_ptr;
		const char * sch=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Cont(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Cont(x, y, z, sch, opt);

		return 0;
	}

	// void mglGraph::Cont(const mglDataA & z, const char * sch = "", const char * opt = "")
	static int _bind_Cont_overload_4(lua_State *L) {
		if (!_lg_typecheck_Cont_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Cont(const mglDataA & z, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Cont(const mglDataA & z, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,2));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Cont function");
		}
		const mglDataA & z=*z_ptr;
		const char * sch=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Cont(const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Cont(z, sch, opt);

		return 0;
	}

	// Overload binder for mglGraph::Cont
	static int _bind_Cont(lua_State *L) {
		if (_lg_typecheck_Cont_overload_1(L)) return _bind_Cont_overload_1(L);
		if (_lg_typecheck_Cont_overload_2(L)) return _bind_Cont_overload_2(L);
		if (_lg_typecheck_Cont_overload_3(L)) return _bind_Cont_overload_3(L);
		if (_lg_typecheck_Cont_overload_4(L)) return _bind_Cont_overload_4(L);

		luaL_error(L, "error in function Cont, cannot match any of the overloads for function Cont:\n  Cont(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Cont(const mglDataA &, const mglDataA &, const char *, const char *)\n  Cont(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Cont(const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::ContF(const mglDataA & v, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = "", const char * opt = "")
	static int _bind_ContF_overload_1(lua_State *L) {
		if (!_lg_typecheck_ContF_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ContF(const mglDataA & v, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::ContF(const mglDataA & v, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::ContF function");
		}
		const mglDataA & v=*v_ptr;
		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,3));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::ContF function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,4));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::ContF function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,5));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::ContF function");
		}
		const mglDataA & z=*z_ptr;
		const char * sch=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ContF(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ContF(v, x, y, z, sch, opt);

		return 0;
	}

	// void mglGraph::ContF(const mglDataA & v, const mglDataA & z, const char * sch = "", const char * opt = "")
	static int _bind_ContF_overload_2(lua_State *L) {
		if (!_lg_typecheck_ContF_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ContF(const mglDataA & v, const mglDataA & z, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::ContF(const mglDataA & v, const mglDataA & z, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::ContF function");
		}
		const mglDataA & v=*v_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,3));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::ContF function");
		}
		const mglDataA & z=*z_ptr;
		const char * sch=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ContF(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ContF(v, z, sch, opt);

		return 0;
	}

	// void mglGraph::ContF(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = "", const char * opt = "")
	static int _bind_ContF_overload_3(lua_State *L) {
		if (!_lg_typecheck_ContF_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ContF(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::ContF(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::ContF function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::ContF function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::ContF function");
		}
		const mglDataA & z=*z_ptr;
		const char * sch=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ContF(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ContF(x, y, z, sch, opt);

		return 0;
	}

	// void mglGraph::ContF(const mglDataA & z, const char * sch = "", const char * opt = "")
	static int _bind_ContF_overload_4(lua_State *L) {
		if (!_lg_typecheck_ContF_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ContF(const mglDataA & z, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::ContF(const mglDataA & z, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,2));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::ContF function");
		}
		const mglDataA & z=*z_ptr;
		const char * sch=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ContF(const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ContF(z, sch, opt);

		return 0;
	}

	// Overload binder for mglGraph::ContF
	static int _bind_ContF(lua_State *L) {
		if (_lg_typecheck_ContF_overload_1(L)) return _bind_ContF_overload_1(L);
		if (_lg_typecheck_ContF_overload_2(L)) return _bind_ContF_overload_2(L);
		if (_lg_typecheck_ContF_overload_3(L)) return _bind_ContF_overload_3(L);
		if (_lg_typecheck_ContF_overload_4(L)) return _bind_ContF_overload_4(L);

		luaL_error(L, "error in function ContF, cannot match any of the overloads for function ContF:\n  ContF(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  ContF(const mglDataA &, const mglDataA &, const char *, const char *)\n  ContF(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  ContF(const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::ContD(const mglDataA & v, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = "", const char * opt = "")
	static int _bind_ContD_overload_1(lua_State *L) {
		if (!_lg_typecheck_ContD_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ContD(const mglDataA & v, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::ContD(const mglDataA & v, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::ContD function");
		}
		const mglDataA & v=*v_ptr;
		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,3));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::ContD function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,4));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::ContD function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,5));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::ContD function");
		}
		const mglDataA & z=*z_ptr;
		const char * sch=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ContD(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ContD(v, x, y, z, sch, opt);

		return 0;
	}

	// void mglGraph::ContD(const mglDataA & v, const mglDataA & z, const char * sch = "", const char * opt = "")
	static int _bind_ContD_overload_2(lua_State *L) {
		if (!_lg_typecheck_ContD_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ContD(const mglDataA & v, const mglDataA & z, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::ContD(const mglDataA & v, const mglDataA & z, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::ContD function");
		}
		const mglDataA & v=*v_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,3));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::ContD function");
		}
		const mglDataA & z=*z_ptr;
		const char * sch=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ContD(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ContD(v, z, sch, opt);

		return 0;
	}

	// void mglGraph::ContD(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = "", const char * opt = "")
	static int _bind_ContD_overload_3(lua_State *L) {
		if (!_lg_typecheck_ContD_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ContD(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::ContD(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::ContD function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::ContD function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::ContD function");
		}
		const mglDataA & z=*z_ptr;
		const char * sch=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ContD(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ContD(x, y, z, sch, opt);

		return 0;
	}

	// void mglGraph::ContD(const mglDataA & z, const char * sch = "", const char * opt = "")
	static int _bind_ContD_overload_4(lua_State *L) {
		if (!_lg_typecheck_ContD_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ContD(const mglDataA & z, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::ContD(const mglDataA & z, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,2));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::ContD function");
		}
		const mglDataA & z=*z_ptr;
		const char * sch=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ContD(const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ContD(z, sch, opt);

		return 0;
	}

	// Overload binder for mglGraph::ContD
	static int _bind_ContD(lua_State *L) {
		if (_lg_typecheck_ContD_overload_1(L)) return _bind_ContD_overload_1(L);
		if (_lg_typecheck_ContD_overload_2(L)) return _bind_ContD_overload_2(L);
		if (_lg_typecheck_ContD_overload_3(L)) return _bind_ContD_overload_3(L);
		if (_lg_typecheck_ContD_overload_4(L)) return _bind_ContD_overload_4(L);

		luaL_error(L, "error in function ContD, cannot match any of the overloads for function ContD:\n  ContD(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  ContD(const mglDataA &, const mglDataA &, const char *, const char *)\n  ContD(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  ContD(const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::ContV(const mglDataA & v, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = "", const char * opt = "")
	static int _bind_ContV_overload_1(lua_State *L) {
		if (!_lg_typecheck_ContV_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ContV(const mglDataA & v, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::ContV(const mglDataA & v, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::ContV function");
		}
		const mglDataA & v=*v_ptr;
		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,3));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::ContV function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,4));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::ContV function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,5));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::ContV function");
		}
		const mglDataA & z=*z_ptr;
		const char * sch=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ContV(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ContV(v, x, y, z, sch, opt);

		return 0;
	}

	// void mglGraph::ContV(const mglDataA & v, const mglDataA & z, const char * sch = "", const char * opt = "")
	static int _bind_ContV_overload_2(lua_State *L) {
		if (!_lg_typecheck_ContV_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ContV(const mglDataA & v, const mglDataA & z, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::ContV(const mglDataA & v, const mglDataA & z, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::ContV function");
		}
		const mglDataA & v=*v_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,3));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::ContV function");
		}
		const mglDataA & z=*z_ptr;
		const char * sch=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ContV(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ContV(v, z, sch, opt);

		return 0;
	}

	// void mglGraph::ContV(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = "", const char * opt = "")
	static int _bind_ContV_overload_3(lua_State *L) {
		if (!_lg_typecheck_ContV_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ContV(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::ContV(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::ContV function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::ContV function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::ContV function");
		}
		const mglDataA & z=*z_ptr;
		const char * sch=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ContV(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ContV(x, y, z, sch, opt);

		return 0;
	}

	// void mglGraph::ContV(const mglDataA & z, const char * sch = "", const char * opt = "")
	static int _bind_ContV_overload_4(lua_State *L) {
		if (!_lg_typecheck_ContV_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ContV(const mglDataA & z, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::ContV(const mglDataA & z, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,2));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::ContV function");
		}
		const mglDataA & z=*z_ptr;
		const char * sch=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ContV(const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ContV(z, sch, opt);

		return 0;
	}

	// Overload binder for mglGraph::ContV
	static int _bind_ContV(lua_State *L) {
		if (_lg_typecheck_ContV_overload_1(L)) return _bind_ContV_overload_1(L);
		if (_lg_typecheck_ContV_overload_2(L)) return _bind_ContV_overload_2(L);
		if (_lg_typecheck_ContV_overload_3(L)) return _bind_ContV_overload_3(L);
		if (_lg_typecheck_ContV_overload_4(L)) return _bind_ContV_overload_4(L);

		luaL_error(L, "error in function ContV, cannot match any of the overloads for function ContV:\n  ContV(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  ContV(const mglDataA &, const mglDataA &, const char *, const char *)\n  ContV(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  ContV(const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Axial(const mglDataA & v, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = "", const char * opt = "")
	static int _bind_Axial_overload_1(lua_State *L) {
		if (!_lg_typecheck_Axial_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Axial(const mglDataA & v, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Axial(const mglDataA & v, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::Axial function");
		}
		const mglDataA & v=*v_ptr;
		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,3));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Axial function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,4));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Axial function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,5));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Axial function");
		}
		const mglDataA & z=*z_ptr;
		const char * sch=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Axial(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Axial(v, x, y, z, sch, opt);

		return 0;
	}

	// void mglGraph::Axial(const mglDataA & v, const mglDataA & z, const char * sch = "", const char * opt = "")
	static int _bind_Axial_overload_2(lua_State *L) {
		if (!_lg_typecheck_Axial_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Axial(const mglDataA & v, const mglDataA & z, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Axial(const mglDataA & v, const mglDataA & z, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::Axial function");
		}
		const mglDataA & v=*v_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,3));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Axial function");
		}
		const mglDataA & z=*z_ptr;
		const char * sch=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Axial(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Axial(v, z, sch, opt);

		return 0;
	}

	// void mglGraph::Axial(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = "", const char * opt = "")
	static int _bind_Axial_overload_3(lua_State *L) {
		if (!_lg_typecheck_Axial_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Axial(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Axial(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Axial function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Axial function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Axial function");
		}
		const mglDataA & z=*z_ptr;
		const char * sch=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Axial(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Axial(x, y, z, sch, opt);

		return 0;
	}

	// void mglGraph::Axial(const mglDataA & z, const char * sch = "", const char * opt = "")
	static int _bind_Axial_overload_4(lua_State *L) {
		if (!_lg_typecheck_Axial_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Axial(const mglDataA & z, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Axial(const mglDataA & z, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,2));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Axial function");
		}
		const mglDataA & z=*z_ptr;
		const char * sch=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Axial(const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Axial(z, sch, opt);

		return 0;
	}

	// Overload binder for mglGraph::Axial
	static int _bind_Axial(lua_State *L) {
		if (_lg_typecheck_Axial_overload_1(L)) return _bind_Axial_overload_1(L);
		if (_lg_typecheck_Axial_overload_2(L)) return _bind_Axial_overload_2(L);
		if (_lg_typecheck_Axial_overload_3(L)) return _bind_Axial_overload_3(L);
		if (_lg_typecheck_Axial_overload_4(L)) return _bind_Axial_overload_4(L);

		luaL_error(L, "error in function Axial, cannot match any of the overloads for function Axial:\n  Axial(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Axial(const mglDataA &, const mglDataA &, const char *, const char *)\n  Axial(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Axial(const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Grid3(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * stl = "", double sVal = -1, const char * opt = "")
	static int _bind_Grid3_overload_1(lua_State *L) {
		if (!_lg_typecheck_Grid3_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Grid3(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * stl = \"\", double sVal = -1, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Grid3(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * stl = \"\", double sVal = -1, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Grid3 function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Grid3 function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Grid3 function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,5));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Grid3 function");
		}
		const mglDataA & a=*a_ptr;
		const char * stl=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		double sVal=luatop>6 ? (double)lua_tonumber(L,7) : -1;
		const char * opt=luatop>7 ? (const char *)lua_tostring(L,8) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Grid3(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Grid3(x, y, z, a, stl, sVal, opt);

		return 0;
	}

	// void mglGraph::Grid3(const mglDataA & a, const char * stl = "", double sVal = -1, const char * opt = "")
	static int _bind_Grid3_overload_2(lua_State *L) {
		if (!_lg_typecheck_Grid3_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Grid3(const mglDataA & a, const char * stl = \"\", double sVal = -1, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Grid3(const mglDataA & a, const char * stl = \"\", double sVal = -1, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Grid3 function");
		}
		const mglDataA & a=*a_ptr;
		const char * stl=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		double sVal=luatop>3 ? (double)lua_tonumber(L,4) : -1;
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Grid3(const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Grid3(a, stl, sVal, opt);

		return 0;
	}

	// Overload binder for mglGraph::Grid3
	static int _bind_Grid3(lua_State *L) {
		if (_lg_typecheck_Grid3_overload_1(L)) return _bind_Grid3_overload_1(L);
		if (_lg_typecheck_Grid3_overload_2(L)) return _bind_Grid3_overload_2(L);

		luaL_error(L, "error in function Grid3, cannot match any of the overloads for function Grid3:\n  Grid3(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, double, const char *)\n  Grid3(const mglDataA &, const char *, double, const char *)\n");
		return 0;
	}

	// void mglGraph::Dens3(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * stl = "", double sVal = -1, const char * opt = "")
	static int _bind_Dens3_overload_1(lua_State *L) {
		if (!_lg_typecheck_Dens3_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Dens3(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * stl = \"\", double sVal = -1, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Dens3(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * stl = \"\", double sVal = -1, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Dens3 function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Dens3 function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Dens3 function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,5));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Dens3 function");
		}
		const mglDataA & a=*a_ptr;
		const char * stl=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		double sVal=luatop>6 ? (double)lua_tonumber(L,7) : -1;
		const char * opt=luatop>7 ? (const char *)lua_tostring(L,8) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Dens3(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Dens3(x, y, z, a, stl, sVal, opt);

		return 0;
	}

	// void mglGraph::Dens3(const mglDataA & a, const char * stl = "", double sVal = -1, const char * opt = "")
	static int _bind_Dens3_overload_2(lua_State *L) {
		if (!_lg_typecheck_Dens3_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Dens3(const mglDataA & a, const char * stl = \"\", double sVal = -1, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Dens3(const mglDataA & a, const char * stl = \"\", double sVal = -1, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Dens3 function");
		}
		const mglDataA & a=*a_ptr;
		const char * stl=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		double sVal=luatop>3 ? (double)lua_tonumber(L,4) : -1;
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Dens3(const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Dens3(a, stl, sVal, opt);

		return 0;
	}

	// Overload binder for mglGraph::Dens3
	static int _bind_Dens3(lua_State *L) {
		if (_lg_typecheck_Dens3_overload_1(L)) return _bind_Dens3_overload_1(L);
		if (_lg_typecheck_Dens3_overload_2(L)) return _bind_Dens3_overload_2(L);

		luaL_error(L, "error in function Dens3, cannot match any of the overloads for function Dens3:\n  Dens3(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, double, const char *)\n  Dens3(const mglDataA &, const char *, double, const char *)\n");
		return 0;
	}

	// void mglGraph::Surf3(double Val, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * stl = "", const char * opt = "")
	static int _bind_Surf3_overload_1(lua_State *L) {
		if (!_lg_typecheck_Surf3_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Surf3(double Val, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Surf3(double Val, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\narg 5 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		double Val=(double)lua_tonumber(L,2);
		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,3));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Surf3 function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,4));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Surf3 function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,5));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Surf3 function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,6));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Surf3 function");
		}
		const mglDataA & a=*a_ptr;
		const char * stl=luatop>6 ? (const char *)lua_tostring(L,7) : "";
		const char * opt=luatop>7 ? (const char *)lua_tostring(L,8) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Surf3(double, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Surf3(Val, x, y, z, a, stl, opt);

		return 0;
	}

	// void mglGraph::Surf3(double Val, const mglDataA & a, const char * stl = "", const char * opt = "")
	static int _bind_Surf3_overload_2(lua_State *L) {
		if (!_lg_typecheck_Surf3_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Surf3(double Val, const mglDataA & a, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Surf3(double Val, const mglDataA & a, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		double Val=(double)lua_tonumber(L,2);
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,3));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Surf3 function");
		}
		const mglDataA & a=*a_ptr;
		const char * stl=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Surf3(double, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Surf3(Val, a, stl, opt);

		return 0;
	}

	// void mglGraph::Surf3(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * stl = "", const char * opt = "")
	static int _bind_Surf3_overload_3(lua_State *L) {
		if (!_lg_typecheck_Surf3_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Surf3(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Surf3(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Surf3 function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Surf3 function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Surf3 function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,5));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Surf3 function");
		}
		const mglDataA & a=*a_ptr;
		const char * stl=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Surf3(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Surf3(x, y, z, a, stl, opt);

		return 0;
	}

	// void mglGraph::Surf3(const mglDataA & a, const char * stl = "", const char * opt = "")
	static int _bind_Surf3_overload_4(lua_State *L) {
		if (!_lg_typecheck_Surf3_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Surf3(const mglDataA & a, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Surf3(const mglDataA & a, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Surf3 function");
		}
		const mglDataA & a=*a_ptr;
		const char * stl=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Surf3(const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Surf3(a, stl, opt);

		return 0;
	}

	// Overload binder for mglGraph::Surf3
	static int _bind_Surf3(lua_State *L) {
		if (_lg_typecheck_Surf3_overload_1(L)) return _bind_Surf3_overload_1(L);
		if (_lg_typecheck_Surf3_overload_2(L)) return _bind_Surf3_overload_2(L);
		if (_lg_typecheck_Surf3_overload_3(L)) return _bind_Surf3_overload_3(L);
		if (_lg_typecheck_Surf3_overload_4(L)) return _bind_Surf3_overload_4(L);

		luaL_error(L, "error in function Surf3, cannot match any of the overloads for function Surf3:\n  Surf3(double, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Surf3(double, const mglDataA &, const char *, const char *)\n  Surf3(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Surf3(const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Cloud(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * stl = "", const char * opt = "")
	static int _bind_Cloud_overload_1(lua_State *L) {
		if (!_lg_typecheck_Cloud_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Cloud(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Cloud(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Cloud function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Cloud function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Cloud function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,5));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Cloud function");
		}
		const mglDataA & a=*a_ptr;
		const char * stl=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Cloud(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Cloud(x, y, z, a, stl, opt);

		return 0;
	}

	// void mglGraph::Cloud(const mglDataA & a, const char * stl = "", const char * opt = "")
	static int _bind_Cloud_overload_2(lua_State *L) {
		if (!_lg_typecheck_Cloud_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Cloud(const mglDataA & a, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Cloud(const mglDataA & a, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Cloud function");
		}
		const mglDataA & a=*a_ptr;
		const char * stl=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Cloud(const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Cloud(a, stl, opt);

		return 0;
	}

	// Overload binder for mglGraph::Cloud
	static int _bind_Cloud(lua_State *L) {
		if (_lg_typecheck_Cloud_overload_1(L)) return _bind_Cloud_overload_1(L);
		if (_lg_typecheck_Cloud_overload_2(L)) return _bind_Cloud_overload_2(L);

		luaL_error(L, "error in function Cloud, cannot match any of the overloads for function Cloud:\n  Cloud(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Cloud(const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Cont3(const mglDataA & v, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * sch = "", double sVal = -1, const char * opt = "")
	static int _bind_Cont3_overload_1(lua_State *L) {
		if (!_lg_typecheck_Cont3_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Cont3(const mglDataA & v, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * sch = \"\", double sVal = -1, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Cont3(const mglDataA & v, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * sch = \"\", double sVal = -1, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\narg 5 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::Cont3 function");
		}
		const mglDataA & v=*v_ptr;
		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,3));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Cont3 function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,4));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Cont3 function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,5));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Cont3 function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,6));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Cont3 function");
		}
		const mglDataA & a=*a_ptr;
		const char * sch=luatop>6 ? (const char *)lua_tostring(L,7) : "";
		double sVal=luatop>7 ? (double)lua_tonumber(L,8) : -1;
		const char * opt=luatop>8 ? (const char *)lua_tostring(L,9) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Cont3(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Cont3(v, x, y, z, a, sch, sVal, opt);

		return 0;
	}

	// void mglGraph::Cont3(const mglDataA & v, const mglDataA & a, const char * sch = "", double sVal = -1, const char * opt = "")
	static int _bind_Cont3_overload_2(lua_State *L) {
		if (!_lg_typecheck_Cont3_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Cont3(const mglDataA & v, const mglDataA & a, const char * sch = \"\", double sVal = -1, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Cont3(const mglDataA & v, const mglDataA & a, const char * sch = \"\", double sVal = -1, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::Cont3 function");
		}
		const mglDataA & v=*v_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,3));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Cont3 function");
		}
		const mglDataA & a=*a_ptr;
		const char * sch=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		double sVal=luatop>4 ? (double)lua_tonumber(L,5) : -1;
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Cont3(const mglDataA &, const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Cont3(v, a, sch, sVal, opt);

		return 0;
	}

	// void mglGraph::Cont3(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * sch = "", double sVal = -1, const char * opt = "")
	static int _bind_Cont3_overload_3(lua_State *L) {
		if (!_lg_typecheck_Cont3_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Cont3(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * sch = \"\", double sVal = -1, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Cont3(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * sch = \"\", double sVal = -1, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Cont3 function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Cont3 function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Cont3 function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,5));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Cont3 function");
		}
		const mglDataA & a=*a_ptr;
		const char * sch=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		double sVal=luatop>6 ? (double)lua_tonumber(L,7) : -1;
		const char * opt=luatop>7 ? (const char *)lua_tostring(L,8) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Cont3(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Cont3(x, y, z, a, sch, sVal, opt);

		return 0;
	}

	// void mglGraph::Cont3(const mglDataA & a, const char * sch = "", double sVal = -1, const char * opt = "")
	static int _bind_Cont3_overload_4(lua_State *L) {
		if (!_lg_typecheck_Cont3_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Cont3(const mglDataA & a, const char * sch = \"\", double sVal = -1, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Cont3(const mglDataA & a, const char * sch = \"\", double sVal = -1, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Cont3 function");
		}
		const mglDataA & a=*a_ptr;
		const char * sch=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		double sVal=luatop>3 ? (double)lua_tonumber(L,4) : -1;
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Cont3(const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Cont3(a, sch, sVal, opt);

		return 0;
	}

	// Overload binder for mglGraph::Cont3
	static int _bind_Cont3(lua_State *L) {
		if (_lg_typecheck_Cont3_overload_1(L)) return _bind_Cont3_overload_1(L);
		if (_lg_typecheck_Cont3_overload_2(L)) return _bind_Cont3_overload_2(L);
		if (_lg_typecheck_Cont3_overload_3(L)) return _bind_Cont3_overload_3(L);
		if (_lg_typecheck_Cont3_overload_4(L)) return _bind_Cont3_overload_4(L);

		luaL_error(L, "error in function Cont3, cannot match any of the overloads for function Cont3:\n  Cont3(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, double, const char *)\n  Cont3(const mglDataA &, const mglDataA &, const char *, double, const char *)\n  Cont3(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, double, const char *)\n  Cont3(const mglDataA &, const char *, double, const char *)\n");
		return 0;
	}

	// void mglGraph::ContF3(const mglDataA & v, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * sch = "", double sVal = -1, const char * opt = "")
	static int _bind_ContF3_overload_1(lua_State *L) {
		if (!_lg_typecheck_ContF3_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ContF3(const mglDataA & v, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * sch = \"\", double sVal = -1, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::ContF3(const mglDataA & v, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * sch = \"\", double sVal = -1, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\narg 5 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::ContF3 function");
		}
		const mglDataA & v=*v_ptr;
		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,3));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::ContF3 function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,4));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::ContF3 function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,5));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::ContF3 function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,6));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::ContF3 function");
		}
		const mglDataA & a=*a_ptr;
		const char * sch=luatop>6 ? (const char *)lua_tostring(L,7) : "";
		double sVal=luatop>7 ? (double)lua_tonumber(L,8) : -1;
		const char * opt=luatop>8 ? (const char *)lua_tostring(L,9) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ContF3(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ContF3(v, x, y, z, a, sch, sVal, opt);

		return 0;
	}

	// void mglGraph::ContF3(const mglDataA & v, const mglDataA & a, const char * sch = "", double sVal = -1, const char * opt = "")
	static int _bind_ContF3_overload_2(lua_State *L) {
		if (!_lg_typecheck_ContF3_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ContF3(const mglDataA & v, const mglDataA & a, const char * sch = \"\", double sVal = -1, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::ContF3(const mglDataA & v, const mglDataA & a, const char * sch = \"\", double sVal = -1, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::ContF3 function");
		}
		const mglDataA & v=*v_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,3));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::ContF3 function");
		}
		const mglDataA & a=*a_ptr;
		const char * sch=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		double sVal=luatop>4 ? (double)lua_tonumber(L,5) : -1;
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ContF3(const mglDataA &, const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ContF3(v, a, sch, sVal, opt);

		return 0;
	}

	// void mglGraph::ContF3(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * sch = "", double sVal = -1, const char * opt = "")
	static int _bind_ContF3_overload_3(lua_State *L) {
		if (!_lg_typecheck_ContF3_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ContF3(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * sch = \"\", double sVal = -1, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::ContF3(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * sch = \"\", double sVal = -1, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::ContF3 function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::ContF3 function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::ContF3 function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,5));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::ContF3 function");
		}
		const mglDataA & a=*a_ptr;
		const char * sch=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		double sVal=luatop>6 ? (double)lua_tonumber(L,7) : -1;
		const char * opt=luatop>7 ? (const char *)lua_tostring(L,8) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ContF3(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ContF3(x, y, z, a, sch, sVal, opt);

		return 0;
	}

	// void mglGraph::ContF3(const mglDataA & a, const char * sch = "", double sVal = -1, const char * opt = "")
	static int _bind_ContF3_overload_4(lua_State *L) {
		if (!_lg_typecheck_ContF3_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ContF3(const mglDataA & a, const char * sch = \"\", double sVal = -1, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::ContF3(const mglDataA & a, const char * sch = \"\", double sVal = -1, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::ContF3 function");
		}
		const mglDataA & a=*a_ptr;
		const char * sch=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		double sVal=luatop>3 ? (double)lua_tonumber(L,4) : -1;
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ContF3(const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ContF3(a, sch, sVal, opt);

		return 0;
	}

	// Overload binder for mglGraph::ContF3
	static int _bind_ContF3(lua_State *L) {
		if (_lg_typecheck_ContF3_overload_1(L)) return _bind_ContF3_overload_1(L);
		if (_lg_typecheck_ContF3_overload_2(L)) return _bind_ContF3_overload_2(L);
		if (_lg_typecheck_ContF3_overload_3(L)) return _bind_ContF3_overload_3(L);
		if (_lg_typecheck_ContF3_overload_4(L)) return _bind_ContF3_overload_4(L);

		luaL_error(L, "error in function ContF3, cannot match any of the overloads for function ContF3:\n  ContF3(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, double, const char *)\n  ContF3(const mglDataA &, const mglDataA &, const char *, double, const char *)\n  ContF3(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, double, const char *)\n  ContF3(const mglDataA &, const char *, double, const char *)\n");
		return 0;
	}

	// void mglGraph::Beam(const mglDataA & tr, const mglDataA & g1, const mglDataA & g2, const mglDataA & a, double r, const char * stl = 0, int flag = 0, int num = 3)
	static int _bind_Beam_overload_1(lua_State *L) {
		if (!_lg_typecheck_Beam_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Beam(const mglDataA & tr, const mglDataA & g1, const mglDataA & g2, const mglDataA & a, double r, const char * stl = 0, int flag = 0, int num = 3) function, expected prototype:\nvoid mglGraph::Beam(const mglDataA & tr, const mglDataA & g1, const mglDataA & g2, const mglDataA & a, double r, const char * stl = 0, int flag = 0, int num = 3)\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* tr_ptr=(Luna< mglDataA >::check(L,2));
		if( !tr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tr in mglGraph::Beam function");
		}
		const mglDataA & tr=*tr_ptr;
		const mglDataA* g1_ptr=(Luna< mglDataA >::check(L,3));
		if( !g1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg g1 in mglGraph::Beam function");
		}
		const mglDataA & g1=*g1_ptr;
		const mglDataA* g2_ptr=(Luna< mglDataA >::check(L,4));
		if( !g2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg g2 in mglGraph::Beam function");
		}
		const mglDataA & g2=*g2_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,5));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Beam function");
		}
		const mglDataA & a=*a_ptr;
		double r=(double)lua_tonumber(L,6);
		const char * stl=luatop>6 ? (const char *)lua_tostring(L,7) : 0;
		int flag=luatop>7 ? (int)lua_tointeger(L,8) : 0;
		int num=luatop>8 ? (int)lua_tointeger(L,9) : 3;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Beam(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, double, const char *, int, int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Beam(tr, g1, g2, a, r, stl, flag, num);

		return 0;
	}

	// void mglGraph::Beam(double val, const mglDataA & tr, const mglDataA & g1, const mglDataA & g2, const mglDataA & a, double r, const char * stl = NULL, int flag = 0)
	static int _bind_Beam_overload_2(lua_State *L) {
		if (!_lg_typecheck_Beam_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Beam(double val, const mglDataA & tr, const mglDataA & g1, const mglDataA & g2, const mglDataA & a, double r, const char * stl = NULL, int flag = 0) function, expected prototype:\nvoid mglGraph::Beam(double val, const mglDataA & tr, const mglDataA & g1, const mglDataA & g2, const mglDataA & a, double r, const char * stl = NULL, int flag = 0)\nClass arguments details:\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\narg 5 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		double val=(double)lua_tonumber(L,2);
		const mglDataA* tr_ptr=(Luna< mglDataA >::check(L,3));
		if( !tr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tr in mglGraph::Beam function");
		}
		const mglDataA & tr=*tr_ptr;
		const mglDataA* g1_ptr=(Luna< mglDataA >::check(L,4));
		if( !g1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg g1 in mglGraph::Beam function");
		}
		const mglDataA & g1=*g1_ptr;
		const mglDataA* g2_ptr=(Luna< mglDataA >::check(L,5));
		if( !g2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg g2 in mglGraph::Beam function");
		}
		const mglDataA & g2=*g2_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,6));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Beam function");
		}
		const mglDataA & a=*a_ptr;
		double r=(double)lua_tonumber(L,7);
		const char * stl=luatop>7 ? (const char *)lua_tostring(L,8) : NULL;
		int flag=luatop>8 ? (int)lua_tointeger(L,9) : 0;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Beam(double, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, double, const char *, int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Beam(val, tr, g1, g2, a, r, stl, flag);

		return 0;
	}

	// Overload binder for mglGraph::Beam
	static int _bind_Beam(lua_State *L) {
		if (_lg_typecheck_Beam_overload_1(L)) return _bind_Beam_overload_1(L);
		if (_lg_typecheck_Beam_overload_2(L)) return _bind_Beam_overload_2(L);

		luaL_error(L, "error in function Beam, cannot match any of the overloads for function Beam:\n  Beam(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, double, const char *, int, int)\n  Beam(double, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, double, const char *, int)\n");
		return 0;
	}

	// void mglGraph::TileS(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & r, const char * stl = "", const char * opt = "")
	static int _bind_TileS_overload_1(lua_State *L) {
		if (!_lg_typecheck_TileS_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::TileS(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & r, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::TileS(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & r, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::TileS function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::TileS function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::TileS function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* r_ptr=(Luna< mglDataA >::check(L,5));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in mglGraph::TileS function");
		}
		const mglDataA & r=*r_ptr;
		const char * stl=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::TileS(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->TileS(x, y, z, r, stl, opt);

		return 0;
	}

	// void mglGraph::TileS(const mglDataA & z, const mglDataA & r, const char * stl = "", const char * opt = "")
	static int _bind_TileS_overload_2(lua_State *L) {
		if (!_lg_typecheck_TileS_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::TileS(const mglDataA & z, const mglDataA & r, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::TileS(const mglDataA & z, const mglDataA & r, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,2));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::TileS function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* r_ptr=(Luna< mglDataA >::check(L,3));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in mglGraph::TileS function");
		}
		const mglDataA & r=*r_ptr;
		const char * stl=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::TileS(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->TileS(z, r, stl, opt);

		return 0;
	}

	// Overload binder for mglGraph::TileS
	static int _bind_TileS(lua_State *L) {
		if (_lg_typecheck_TileS_overload_1(L)) return _bind_TileS_overload_1(L);
		if (_lg_typecheck_TileS_overload_2(L)) return _bind_TileS_overload_2(L);

		luaL_error(L, "error in function TileS, cannot match any of the overloads for function TileS:\n  TileS(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  TileS(const mglDataA &, const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::SurfC(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & c, const char * sch = "", const char * opt = "")
	static int _bind_SurfC_overload_1(lua_State *L) {
		if (!_lg_typecheck_SurfC_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SurfC(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & c, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::SurfC(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & c, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::SurfC function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::SurfC function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::SurfC function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* c_ptr=(Luna< mglDataA >::check(L,5));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in mglGraph::SurfC function");
		}
		const mglDataA & c=*c_ptr;
		const char * sch=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SurfC(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SurfC(x, y, z, c, sch, opt);

		return 0;
	}

	// void mglGraph::SurfC(const mglDataA & z, const mglDataA & c, const char * sch = "", const char * opt = "")
	static int _bind_SurfC_overload_2(lua_State *L) {
		if (!_lg_typecheck_SurfC_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SurfC(const mglDataA & z, const mglDataA & c, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::SurfC(const mglDataA & z, const mglDataA & c, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,2));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::SurfC function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* c_ptr=(Luna< mglDataA >::check(L,3));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in mglGraph::SurfC function");
		}
		const mglDataA & c=*c_ptr;
		const char * sch=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SurfC(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SurfC(z, c, sch, opt);

		return 0;
	}

	// Overload binder for mglGraph::SurfC
	static int _bind_SurfC(lua_State *L) {
		if (_lg_typecheck_SurfC_overload_1(L)) return _bind_SurfC_overload_1(L);
		if (_lg_typecheck_SurfC_overload_2(L)) return _bind_SurfC_overload_2(L);

		luaL_error(L, "error in function SurfC, cannot match any of the overloads for function SurfC:\n  SurfC(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  SurfC(const mglDataA &, const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::SurfA(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & c, const char * sch = "", const char * opt = "")
	static int _bind_SurfA_overload_1(lua_State *L) {
		if (!_lg_typecheck_SurfA_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SurfA(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & c, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::SurfA(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & c, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::SurfA function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::SurfA function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::SurfA function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* c_ptr=(Luna< mglDataA >::check(L,5));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in mglGraph::SurfA function");
		}
		const mglDataA & c=*c_ptr;
		const char * sch=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SurfA(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SurfA(x, y, z, c, sch, opt);

		return 0;
	}

	// void mglGraph::SurfA(const mglDataA & z, const mglDataA & c, const char * sch = "", const char * opt = "")
	static int _bind_SurfA_overload_2(lua_State *L) {
		if (!_lg_typecheck_SurfA_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::SurfA(const mglDataA & z, const mglDataA & c, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::SurfA(const mglDataA & z, const mglDataA & c, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,2));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::SurfA function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* c_ptr=(Luna< mglDataA >::check(L,3));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in mglGraph::SurfA function");
		}
		const mglDataA & c=*c_ptr;
		const char * sch=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::SurfA(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->SurfA(z, c, sch, opt);

		return 0;
	}

	// Overload binder for mglGraph::SurfA
	static int _bind_SurfA(lua_State *L) {
		if (_lg_typecheck_SurfA_overload_1(L)) return _bind_SurfA_overload_1(L);
		if (_lg_typecheck_SurfA_overload_2(L)) return _bind_SurfA_overload_2(L);

		luaL_error(L, "error in function SurfA, cannot match any of the overloads for function SurfA:\n  SurfA(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  SurfA(const mglDataA &, const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Map(const mglDataA & x, const mglDataA & y, const mglDataA & a, const mglDataA & b, const char * sch = "", const char * opt = "")
	static int _bind_Map_overload_1(lua_State *L) {
		if (!_lg_typecheck_Map_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Map(const mglDataA & x, const mglDataA & y, const mglDataA & a, const mglDataA & b, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Map(const mglDataA & x, const mglDataA & y, const mglDataA & a, const mglDataA & b, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Map function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Map function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,4));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Map function");
		}
		const mglDataA & a=*a_ptr;
		const mglDataA* b_ptr=(Luna< mglDataA >::check(L,5));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in mglGraph::Map function");
		}
		const mglDataA & b=*b_ptr;
		const char * sch=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Map(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Map(x, y, a, b, sch, opt);

		return 0;
	}

	// void mglGraph::Map(const mglDataA & a, const mglDataA & b, const char * sch = "", const char * opt = "")
	static int _bind_Map_overload_2(lua_State *L) {
		if (!_lg_typecheck_Map_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Map(const mglDataA & a, const mglDataA & b, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Map(const mglDataA & a, const mglDataA & b, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Map function");
		}
		const mglDataA & a=*a_ptr;
		const mglDataA* b_ptr=(Luna< mglDataA >::check(L,3));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in mglGraph::Map function");
		}
		const mglDataA & b=*b_ptr;
		const char * sch=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Map(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Map(a, b, sch, opt);

		return 0;
	}

	// Overload binder for mglGraph::Map
	static int _bind_Map(lua_State *L) {
		if (_lg_typecheck_Map_overload_1(L)) return _bind_Map_overload_1(L);
		if (_lg_typecheck_Map_overload_2(L)) return _bind_Map_overload_2(L);

		luaL_error(L, "error in function Map, cannot match any of the overloads for function Map:\n  Map(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Map(const mglDataA &, const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::STFA(const mglDataA & x, const mglDataA & y, const mglDataA & re, const mglDataA & im, int dn, const char * sch = "", const char * opt = "")
	static int _bind_STFA_overload_1(lua_State *L) {
		if (!_lg_typecheck_STFA_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::STFA(const mglDataA & x, const mglDataA & y, const mglDataA & re, const mglDataA & im, int dn, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::STFA(const mglDataA & x, const mglDataA & y, const mglDataA & re, const mglDataA & im, int dn, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::STFA function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::STFA function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* re_ptr=(Luna< mglDataA >::check(L,4));
		if( !re_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg re in mglGraph::STFA function");
		}
		const mglDataA & re=*re_ptr;
		const mglDataA* im_ptr=(Luna< mglDataA >::check(L,5));
		if( !im_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg im in mglGraph::STFA function");
		}
		const mglDataA & im=*im_ptr;
		int dn=(int)lua_tointeger(L,6);
		const char * sch=luatop>6 ? (const char *)lua_tostring(L,7) : "";
		const char * opt=luatop>7 ? (const char *)lua_tostring(L,8) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::STFA(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, int, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->STFA(x, y, re, im, dn, sch, opt);

		return 0;
	}

	// void mglGraph::STFA(const mglDataA & re, const mglDataA & im, int dn, const char * sch = "", const char * opt = "")
	static int _bind_STFA_overload_2(lua_State *L) {
		if (!_lg_typecheck_STFA_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::STFA(const mglDataA & re, const mglDataA & im, int dn, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::STFA(const mglDataA & re, const mglDataA & im, int dn, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* re_ptr=(Luna< mglDataA >::check(L,2));
		if( !re_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg re in mglGraph::STFA function");
		}
		const mglDataA & re=*re_ptr;
		const mglDataA* im_ptr=(Luna< mglDataA >::check(L,3));
		if( !im_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg im in mglGraph::STFA function");
		}
		const mglDataA & im=*im_ptr;
		int dn=(int)lua_tointeger(L,4);
		const char * sch=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::STFA(const mglDataA &, const mglDataA &, int, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->STFA(re, im, dn, sch, opt);

		return 0;
	}

	// Overload binder for mglGraph::STFA
	static int _bind_STFA(lua_State *L) {
		if (_lg_typecheck_STFA_overload_1(L)) return _bind_STFA_overload_1(L);
		if (_lg_typecheck_STFA_overload_2(L)) return _bind_STFA_overload_2(L);

		luaL_error(L, "error in function STFA, cannot match any of the overloads for function STFA:\n  STFA(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, int, const char *, const char *)\n  STFA(const mglDataA &, const mglDataA &, int, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Surf3A(double Val, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const mglDataA & b, const char * stl = "", const char * opt = "")
	static int _bind_Surf3A_overload_1(lua_State *L) {
		if (!_lg_typecheck_Surf3A_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Surf3A(double Val, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const mglDataA & b, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Surf3A(double Val, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const mglDataA & b, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\narg 5 ID = 45413231\narg 6 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		double Val=(double)lua_tonumber(L,2);
		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,3));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Surf3A function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,4));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Surf3A function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,5));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Surf3A function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,6));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Surf3A function");
		}
		const mglDataA & a=*a_ptr;
		const mglDataA* b_ptr=(Luna< mglDataA >::check(L,7));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in mglGraph::Surf3A function");
		}
		const mglDataA & b=*b_ptr;
		const char * stl=luatop>7 ? (const char *)lua_tostring(L,8) : "";
		const char * opt=luatop>8 ? (const char *)lua_tostring(L,9) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Surf3A(double, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Surf3A(Val, x, y, z, a, b, stl, opt);

		return 0;
	}

	// void mglGraph::Surf3A(double Val, const mglDataA & a, const mglDataA & b, const char * stl = "", const char * opt = "")
	static int _bind_Surf3A_overload_2(lua_State *L) {
		if (!_lg_typecheck_Surf3A_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Surf3A(double Val, const mglDataA & a, const mglDataA & b, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Surf3A(double Val, const mglDataA & a, const mglDataA & b, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		double Val=(double)lua_tonumber(L,2);
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,3));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Surf3A function");
		}
		const mglDataA & a=*a_ptr;
		const mglDataA* b_ptr=(Luna< mglDataA >::check(L,4));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in mglGraph::Surf3A function");
		}
		const mglDataA & b=*b_ptr;
		const char * stl=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Surf3A(double, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Surf3A(Val, a, b, stl, opt);

		return 0;
	}

	// void mglGraph::Surf3A(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const mglDataA & b, const char * stl = "", const char * opt = "")
	static int _bind_Surf3A_overload_3(lua_State *L) {
		if (!_lg_typecheck_Surf3A_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Surf3A(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const mglDataA & b, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Surf3A(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const mglDataA & b, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\narg 5 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Surf3A function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Surf3A function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Surf3A function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,5));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Surf3A function");
		}
		const mglDataA & a=*a_ptr;
		const mglDataA* b_ptr=(Luna< mglDataA >::check(L,6));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in mglGraph::Surf3A function");
		}
		const mglDataA & b=*b_ptr;
		const char * stl=luatop>6 ? (const char *)lua_tostring(L,7) : "";
		const char * opt=luatop>7 ? (const char *)lua_tostring(L,8) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Surf3A(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Surf3A(x, y, z, a, b, stl, opt);

		return 0;
	}

	// void mglGraph::Surf3A(const mglDataA & a, const mglDataA & b, const char * stl = "", const char * opt = "")
	static int _bind_Surf3A_overload_4(lua_State *L) {
		if (!_lg_typecheck_Surf3A_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Surf3A(const mglDataA & a, const mglDataA & b, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Surf3A(const mglDataA & a, const mglDataA & b, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Surf3A function");
		}
		const mglDataA & a=*a_ptr;
		const mglDataA* b_ptr=(Luna< mglDataA >::check(L,3));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in mglGraph::Surf3A function");
		}
		const mglDataA & b=*b_ptr;
		const char * stl=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Surf3A(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Surf3A(a, b, stl, opt);

		return 0;
	}

	// Overload binder for mglGraph::Surf3A
	static int _bind_Surf3A(lua_State *L) {
		if (_lg_typecheck_Surf3A_overload_1(L)) return _bind_Surf3A_overload_1(L);
		if (_lg_typecheck_Surf3A_overload_2(L)) return _bind_Surf3A_overload_2(L);
		if (_lg_typecheck_Surf3A_overload_3(L)) return _bind_Surf3A_overload_3(L);
		if (_lg_typecheck_Surf3A_overload_4(L)) return _bind_Surf3A_overload_4(L);

		luaL_error(L, "error in function Surf3A, cannot match any of the overloads for function Surf3A:\n  Surf3A(double, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Surf3A(double, const mglDataA &, const mglDataA &, const char *, const char *)\n  Surf3A(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Surf3A(const mglDataA &, const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Surf3C(double Val, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const mglDataA & b, const char * stl = "", const char * opt = "")
	static int _bind_Surf3C_overload_1(lua_State *L) {
		if (!_lg_typecheck_Surf3C_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Surf3C(double Val, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const mglDataA & b, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Surf3C(double Val, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const mglDataA & b, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\narg 5 ID = 45413231\narg 6 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		double Val=(double)lua_tonumber(L,2);
		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,3));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Surf3C function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,4));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Surf3C function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,5));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Surf3C function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,6));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Surf3C function");
		}
		const mglDataA & a=*a_ptr;
		const mglDataA* b_ptr=(Luna< mglDataA >::check(L,7));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in mglGraph::Surf3C function");
		}
		const mglDataA & b=*b_ptr;
		const char * stl=luatop>7 ? (const char *)lua_tostring(L,8) : "";
		const char * opt=luatop>8 ? (const char *)lua_tostring(L,9) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Surf3C(double, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Surf3C(Val, x, y, z, a, b, stl, opt);

		return 0;
	}

	// void mglGraph::Surf3C(double Val, const mglDataA & a, const mglDataA & b, const char * stl = "", const char * opt = "")
	static int _bind_Surf3C_overload_2(lua_State *L) {
		if (!_lg_typecheck_Surf3C_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Surf3C(double Val, const mglDataA & a, const mglDataA & b, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Surf3C(double Val, const mglDataA & a, const mglDataA & b, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		double Val=(double)lua_tonumber(L,2);
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,3));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Surf3C function");
		}
		const mglDataA & a=*a_ptr;
		const mglDataA* b_ptr=(Luna< mglDataA >::check(L,4));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in mglGraph::Surf3C function");
		}
		const mglDataA & b=*b_ptr;
		const char * stl=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Surf3C(double, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Surf3C(Val, a, b, stl, opt);

		return 0;
	}

	// void mglGraph::Surf3C(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const mglDataA & b, const char * stl = "", const char * opt = "")
	static int _bind_Surf3C_overload_3(lua_State *L) {
		if (!_lg_typecheck_Surf3C_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Surf3C(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const mglDataA & b, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Surf3C(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const mglDataA & b, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\narg 5 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Surf3C function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Surf3C function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Surf3C function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,5));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Surf3C function");
		}
		const mglDataA & a=*a_ptr;
		const mglDataA* b_ptr=(Luna< mglDataA >::check(L,6));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in mglGraph::Surf3C function");
		}
		const mglDataA & b=*b_ptr;
		const char * stl=luatop>6 ? (const char *)lua_tostring(L,7) : "";
		const char * opt=luatop>7 ? (const char *)lua_tostring(L,8) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Surf3C(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Surf3C(x, y, z, a, b, stl, opt);

		return 0;
	}

	// void mglGraph::Surf3C(const mglDataA & a, const mglDataA & b, const char * stl = "", const char * opt = "")
	static int _bind_Surf3C_overload_4(lua_State *L) {
		if (!_lg_typecheck_Surf3C_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Surf3C(const mglDataA & a, const mglDataA & b, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Surf3C(const mglDataA & a, const mglDataA & b, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Surf3C function");
		}
		const mglDataA & a=*a_ptr;
		const mglDataA* b_ptr=(Luna< mglDataA >::check(L,3));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in mglGraph::Surf3C function");
		}
		const mglDataA & b=*b_ptr;
		const char * stl=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Surf3C(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Surf3C(a, b, stl, opt);

		return 0;
	}

	// Overload binder for mglGraph::Surf3C
	static int _bind_Surf3C(lua_State *L) {
		if (_lg_typecheck_Surf3C_overload_1(L)) return _bind_Surf3C_overload_1(L);
		if (_lg_typecheck_Surf3C_overload_2(L)) return _bind_Surf3C_overload_2(L);
		if (_lg_typecheck_Surf3C_overload_3(L)) return _bind_Surf3C_overload_3(L);
		if (_lg_typecheck_Surf3C_overload_4(L)) return _bind_Surf3C_overload_4(L);

		luaL_error(L, "error in function Surf3C, cannot match any of the overloads for function Surf3C:\n  Surf3C(double, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Surf3C(double, const mglDataA &, const mglDataA &, const char *, const char *)\n  Surf3C(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Surf3C(const mglDataA &, const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Dew(const mglDataA & x, const mglDataA & y, const mglDataA & ax, const mglDataA & ay, const char * sch = "", const char * opt = "")
	static int _bind_Dew_overload_1(lua_State *L) {
		if (!_lg_typecheck_Dew_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Dew(const mglDataA & x, const mglDataA & y, const mglDataA & ax, const mglDataA & ay, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Dew(const mglDataA & x, const mglDataA & y, const mglDataA & ax, const mglDataA & ay, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Dew function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Dew function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* ax_ptr=(Luna< mglDataA >::check(L,4));
		if( !ax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ax in mglGraph::Dew function");
		}
		const mglDataA & ax=*ax_ptr;
		const mglDataA* ay_ptr=(Luna< mglDataA >::check(L,5));
		if( !ay_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ay in mglGraph::Dew function");
		}
		const mglDataA & ay=*ay_ptr;
		const char * sch=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Dew(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Dew(x, y, ax, ay, sch, opt);

		return 0;
	}

	// void mglGraph::Dew(const mglDataA & ax, const mglDataA & ay, const char * sch = "", const char * opt = "")
	static int _bind_Dew_overload_2(lua_State *L) {
		if (!_lg_typecheck_Dew_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Dew(const mglDataA & ax, const mglDataA & ay, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Dew(const mglDataA & ax, const mglDataA & ay, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* ax_ptr=(Luna< mglDataA >::check(L,2));
		if( !ax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ax in mglGraph::Dew function");
		}
		const mglDataA & ax=*ax_ptr;
		const mglDataA* ay_ptr=(Luna< mglDataA >::check(L,3));
		if( !ay_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ay in mglGraph::Dew function");
		}
		const mglDataA & ay=*ay_ptr;
		const char * sch=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Dew(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Dew(ax, ay, sch, opt);

		return 0;
	}

	// Overload binder for mglGraph::Dew
	static int _bind_Dew(lua_State *L) {
		if (_lg_typecheck_Dew_overload_1(L)) return _bind_Dew_overload_1(L);
		if (_lg_typecheck_Dew_overload_2(L)) return _bind_Dew_overload_2(L);

		luaL_error(L, "error in function Dew, cannot match any of the overloads for function Dew:\n  Dew(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Dew(const mglDataA &, const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Traj(const mglDataA & x, const mglDataA & y, const mglDataA & ax, const mglDataA & ay, const char * sch = "", const char * opt = "")
	static int _bind_Traj_overload_1(lua_State *L) {
		if (!_lg_typecheck_Traj_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Traj(const mglDataA & x, const mglDataA & y, const mglDataA & ax, const mglDataA & ay, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Traj(const mglDataA & x, const mglDataA & y, const mglDataA & ax, const mglDataA & ay, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Traj function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Traj function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* ax_ptr=(Luna< mglDataA >::check(L,4));
		if( !ax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ax in mglGraph::Traj function");
		}
		const mglDataA & ax=*ax_ptr;
		const mglDataA* ay_ptr=(Luna< mglDataA >::check(L,5));
		if( !ay_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ay in mglGraph::Traj function");
		}
		const mglDataA & ay=*ay_ptr;
		const char * sch=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Traj(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Traj(x, y, ax, ay, sch, opt);

		return 0;
	}

	// void mglGraph::Traj(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * sch = "", const char * opt = "")
	static int _bind_Traj_overload_2(lua_State *L) {
		if (!_lg_typecheck_Traj_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Traj(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Traj(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\narg 5 ID = 45413231\narg 6 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Traj function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Traj function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Traj function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* ax_ptr=(Luna< mglDataA >::check(L,5));
		if( !ax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ax in mglGraph::Traj function");
		}
		const mglDataA & ax=*ax_ptr;
		const mglDataA* ay_ptr=(Luna< mglDataA >::check(L,6));
		if( !ay_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ay in mglGraph::Traj function");
		}
		const mglDataA & ay=*ay_ptr;
		const mglDataA* az_ptr=(Luna< mglDataA >::check(L,7));
		if( !az_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg az in mglGraph::Traj function");
		}
		const mglDataA & az=*az_ptr;
		const char * sch=luatop>7 ? (const char *)lua_tostring(L,8) : "";
		const char * opt=luatop>8 ? (const char *)lua_tostring(L,9) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Traj(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Traj(x, y, z, ax, ay, az, sch, opt);

		return 0;
	}

	// Overload binder for mglGraph::Traj
	static int _bind_Traj(lua_State *L) {
		if (_lg_typecheck_Traj_overload_1(L)) return _bind_Traj_overload_1(L);
		if (_lg_typecheck_Traj_overload_2(L)) return _bind_Traj_overload_2(L);

		luaL_error(L, "error in function Traj, cannot match any of the overloads for function Traj:\n  Traj(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Traj(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Vect(const mglDataA & x, const mglDataA & y, const mglDataA & ax, const mglDataA & ay, const char * sch = "", const char * opt = "")
	static int _bind_Vect_overload_1(lua_State *L) {
		if (!_lg_typecheck_Vect_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Vect(const mglDataA & x, const mglDataA & y, const mglDataA & ax, const mglDataA & ay, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Vect(const mglDataA & x, const mglDataA & y, const mglDataA & ax, const mglDataA & ay, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Vect function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Vect function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* ax_ptr=(Luna< mglDataA >::check(L,4));
		if( !ax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ax in mglGraph::Vect function");
		}
		const mglDataA & ax=*ax_ptr;
		const mglDataA* ay_ptr=(Luna< mglDataA >::check(L,5));
		if( !ay_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ay in mglGraph::Vect function");
		}
		const mglDataA & ay=*ay_ptr;
		const char * sch=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Vect(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Vect(x, y, ax, ay, sch, opt);

		return 0;
	}

	// void mglGraph::Vect(const mglDataA & ax, const mglDataA & ay, const char * sch = "", const char * opt = "")
	static int _bind_Vect_overload_2(lua_State *L) {
		if (!_lg_typecheck_Vect_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Vect(const mglDataA & ax, const mglDataA & ay, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Vect(const mglDataA & ax, const mglDataA & ay, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* ax_ptr=(Luna< mglDataA >::check(L,2));
		if( !ax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ax in mglGraph::Vect function");
		}
		const mglDataA & ax=*ax_ptr;
		const mglDataA* ay_ptr=(Luna< mglDataA >::check(L,3));
		if( !ay_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ay in mglGraph::Vect function");
		}
		const mglDataA & ay=*ay_ptr;
		const char * sch=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Vect(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Vect(ax, ay, sch, opt);

		return 0;
	}

	// void mglGraph::Vect(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * sch = "", const char * opt = "")
	static int _bind_Vect_overload_3(lua_State *L) {
		if (!_lg_typecheck_Vect_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Vect(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Vect(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\narg 5 ID = 45413231\narg 6 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Vect function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Vect function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Vect function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* ax_ptr=(Luna< mglDataA >::check(L,5));
		if( !ax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ax in mglGraph::Vect function");
		}
		const mglDataA & ax=*ax_ptr;
		const mglDataA* ay_ptr=(Luna< mglDataA >::check(L,6));
		if( !ay_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ay in mglGraph::Vect function");
		}
		const mglDataA & ay=*ay_ptr;
		const mglDataA* az_ptr=(Luna< mglDataA >::check(L,7));
		if( !az_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg az in mglGraph::Vect function");
		}
		const mglDataA & az=*az_ptr;
		const char * sch=luatop>7 ? (const char *)lua_tostring(L,8) : "";
		const char * opt=luatop>8 ? (const char *)lua_tostring(L,9) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Vect(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Vect(x, y, z, ax, ay, az, sch, opt);

		return 0;
	}

	// void mglGraph::Vect(const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * sch = "", const char * opt = "")
	static int _bind_Vect_overload_4(lua_State *L) {
		if (!_lg_typecheck_Vect_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Vect(const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Vect(const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* ax_ptr=(Luna< mglDataA >::check(L,2));
		if( !ax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ax in mglGraph::Vect function");
		}
		const mglDataA & ax=*ax_ptr;
		const mglDataA* ay_ptr=(Luna< mglDataA >::check(L,3));
		if( !ay_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ay in mglGraph::Vect function");
		}
		const mglDataA & ay=*ay_ptr;
		const mglDataA* az_ptr=(Luna< mglDataA >::check(L,4));
		if( !az_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg az in mglGraph::Vect function");
		}
		const mglDataA & az=*az_ptr;
		const char * sch=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Vect(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Vect(ax, ay, az, sch, opt);

		return 0;
	}

	// Overload binder for mglGraph::Vect
	static int _bind_Vect(lua_State *L) {
		if (_lg_typecheck_Vect_overload_1(L)) return _bind_Vect_overload_1(L);
		if (_lg_typecheck_Vect_overload_2(L)) return _bind_Vect_overload_2(L);
		if (_lg_typecheck_Vect_overload_3(L)) return _bind_Vect_overload_3(L);
		if (_lg_typecheck_Vect_overload_4(L)) return _bind_Vect_overload_4(L);

		luaL_error(L, "error in function Vect, cannot match any of the overloads for function Vect:\n  Vect(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Vect(const mglDataA &, const mglDataA &, const char *, const char *)\n  Vect(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Vect(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Vect3(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * stl = "", double sVal = -1, const char * opt = "")
	static int _bind_Vect3_overload_1(lua_State *L) {
		if (!_lg_typecheck_Vect3_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Vect3(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * stl = \"\", double sVal = -1, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Vect3(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * stl = \"\", double sVal = -1, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\narg 5 ID = 45413231\narg 6 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Vect3 function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Vect3 function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Vect3 function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* ax_ptr=(Luna< mglDataA >::check(L,5));
		if( !ax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ax in mglGraph::Vect3 function");
		}
		const mglDataA & ax=*ax_ptr;
		const mglDataA* ay_ptr=(Luna< mglDataA >::check(L,6));
		if( !ay_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ay in mglGraph::Vect3 function");
		}
		const mglDataA & ay=*ay_ptr;
		const mglDataA* az_ptr=(Luna< mglDataA >::check(L,7));
		if( !az_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg az in mglGraph::Vect3 function");
		}
		const mglDataA & az=*az_ptr;
		const char * stl=luatop>7 ? (const char *)lua_tostring(L,8) : "";
		double sVal=luatop>8 ? (double)lua_tonumber(L,9) : -1;
		const char * opt=luatop>9 ? (const char *)lua_tostring(L,10) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Vect3(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Vect3(x, y, z, ax, ay, az, stl, sVal, opt);

		return 0;
	}

	// void mglGraph::Vect3(const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * stl = "", double sVal = -1, const char * opt = "")
	static int _bind_Vect3_overload_2(lua_State *L) {
		if (!_lg_typecheck_Vect3_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Vect3(const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * stl = \"\", double sVal = -1, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Vect3(const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * stl = \"\", double sVal = -1, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* ax_ptr=(Luna< mglDataA >::check(L,2));
		if( !ax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ax in mglGraph::Vect3 function");
		}
		const mglDataA & ax=*ax_ptr;
		const mglDataA* ay_ptr=(Luna< mglDataA >::check(L,3));
		if( !ay_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ay in mglGraph::Vect3 function");
		}
		const mglDataA & ay=*ay_ptr;
		const mglDataA* az_ptr=(Luna< mglDataA >::check(L,4));
		if( !az_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg az in mglGraph::Vect3 function");
		}
		const mglDataA & az=*az_ptr;
		const char * stl=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		double sVal=luatop>5 ? (double)lua_tonumber(L,6) : -1;
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Vect3(const mglDataA &, const mglDataA &, const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Vect3(ax, ay, az, stl, sVal, opt);

		return 0;
	}

	// Overload binder for mglGraph::Vect3
	static int _bind_Vect3(lua_State *L) {
		if (_lg_typecheck_Vect3_overload_1(L)) return _bind_Vect3_overload_1(L);
		if (_lg_typecheck_Vect3_overload_2(L)) return _bind_Vect3_overload_2(L);

		luaL_error(L, "error in function Vect3, cannot match any of the overloads for function Vect3:\n  Vect3(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, double, const char *)\n  Vect3(const mglDataA &, const mglDataA &, const mglDataA &, const char *, double, const char *)\n");
		return 0;
	}

	// void mglGraph::Flow(const mglDataA & x, const mglDataA & y, const mglDataA & ax, const mglDataA & ay, const char * sch = "", const char * opt = "")
	static int _bind_Flow_overload_1(lua_State *L) {
		if (!_lg_typecheck_Flow_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Flow(const mglDataA & x, const mglDataA & y, const mglDataA & ax, const mglDataA & ay, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Flow(const mglDataA & x, const mglDataA & y, const mglDataA & ax, const mglDataA & ay, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Flow function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Flow function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* ax_ptr=(Luna< mglDataA >::check(L,4));
		if( !ax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ax in mglGraph::Flow function");
		}
		const mglDataA & ax=*ax_ptr;
		const mglDataA* ay_ptr=(Luna< mglDataA >::check(L,5));
		if( !ay_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ay in mglGraph::Flow function");
		}
		const mglDataA & ay=*ay_ptr;
		const char * sch=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Flow(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Flow(x, y, ax, ay, sch, opt);

		return 0;
	}

	// void mglGraph::Flow(const mglDataA & ax, const mglDataA & ay, const char * sch = "", const char * opt = "")
	static int _bind_Flow_overload_2(lua_State *L) {
		if (!_lg_typecheck_Flow_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Flow(const mglDataA & ax, const mglDataA & ay, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Flow(const mglDataA & ax, const mglDataA & ay, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* ax_ptr=(Luna< mglDataA >::check(L,2));
		if( !ax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ax in mglGraph::Flow function");
		}
		const mglDataA & ax=*ax_ptr;
		const mglDataA* ay_ptr=(Luna< mglDataA >::check(L,3));
		if( !ay_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ay in mglGraph::Flow function");
		}
		const mglDataA & ay=*ay_ptr;
		const char * sch=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Flow(const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Flow(ax, ay, sch, opt);

		return 0;
	}

	// void mglGraph::Flow(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * sch = "", const char * opt = "")
	static int _bind_Flow_overload_3(lua_State *L) {
		if (!_lg_typecheck_Flow_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Flow(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Flow(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\narg 5 ID = 45413231\narg 6 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Flow function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Flow function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Flow function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* ax_ptr=(Luna< mglDataA >::check(L,5));
		if( !ax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ax in mglGraph::Flow function");
		}
		const mglDataA & ax=*ax_ptr;
		const mglDataA* ay_ptr=(Luna< mglDataA >::check(L,6));
		if( !ay_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ay in mglGraph::Flow function");
		}
		const mglDataA & ay=*ay_ptr;
		const mglDataA* az_ptr=(Luna< mglDataA >::check(L,7));
		if( !az_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg az in mglGraph::Flow function");
		}
		const mglDataA & az=*az_ptr;
		const char * sch=luatop>7 ? (const char *)lua_tostring(L,8) : "";
		const char * opt=luatop>8 ? (const char *)lua_tostring(L,9) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Flow(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Flow(x, y, z, ax, ay, az, sch, opt);

		return 0;
	}

	// void mglGraph::Flow(const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * sch = "", const char * opt = "")
	static int _bind_Flow_overload_4(lua_State *L) {
		if (!_lg_typecheck_Flow_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Flow(const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Flow(const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* ax_ptr=(Luna< mglDataA >::check(L,2));
		if( !ax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ax in mglGraph::Flow function");
		}
		const mglDataA & ax=*ax_ptr;
		const mglDataA* ay_ptr=(Luna< mglDataA >::check(L,3));
		if( !ay_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ay in mglGraph::Flow function");
		}
		const mglDataA & ay=*ay_ptr;
		const mglDataA* az_ptr=(Luna< mglDataA >::check(L,4));
		if( !az_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg az in mglGraph::Flow function");
		}
		const mglDataA & az=*az_ptr;
		const char * sch=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Flow(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Flow(ax, ay, az, sch, opt);

		return 0;
	}

	// Overload binder for mglGraph::Flow
	static int _bind_Flow(lua_State *L) {
		if (_lg_typecheck_Flow_overload_1(L)) return _bind_Flow_overload_1(L);
		if (_lg_typecheck_Flow_overload_2(L)) return _bind_Flow_overload_2(L);
		if (_lg_typecheck_Flow_overload_3(L)) return _bind_Flow_overload_3(L);
		if (_lg_typecheck_Flow_overload_4(L)) return _bind_Flow_overload_4(L);

		luaL_error(L, "error in function Flow, cannot match any of the overloads for function Flow:\n  Flow(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Flow(const mglDataA &, const mglDataA &, const char *, const char *)\n  Flow(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Flow(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::FlowP(mglPoint p, const mglDataA & x, const mglDataA & y, const mglDataA & ax, const mglDataA & ay, const char * sch = "", const char * opt = "")
	static int _bind_FlowP_overload_1(lua_State *L) {
		if (!_lg_typecheck_FlowP_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::FlowP(mglPoint p, const mglDataA & x, const mglDataA & y, const mglDataA & ax, const mglDataA & ay, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::FlowP(mglPoint p, const mglDataA & x, const mglDataA & y, const mglDataA & ax, const mglDataA & ay, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 56902440\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\narg 5 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		mglPoint* p_ptr=(Luna< mglPoint >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglGraph::FlowP function");
		}
		mglPoint p=*p_ptr;
		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,3));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::FlowP function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,4));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::FlowP function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* ax_ptr=(Luna< mglDataA >::check(L,5));
		if( !ax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ax in mglGraph::FlowP function");
		}
		const mglDataA & ax=*ax_ptr;
		const mglDataA* ay_ptr=(Luna< mglDataA >::check(L,6));
		if( !ay_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ay in mglGraph::FlowP function");
		}
		const mglDataA & ay=*ay_ptr;
		const char * sch=luatop>6 ? (const char *)lua_tostring(L,7) : "";
		const char * opt=luatop>7 ? (const char *)lua_tostring(L,8) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::FlowP(mglPoint, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->FlowP(p, x, y, ax, ay, sch, opt);

		return 0;
	}

	// void mglGraph::FlowP(mglPoint p, const mglDataA & ax, const mglDataA & ay, const char * sch = "", const char * opt = "")
	static int _bind_FlowP_overload_2(lua_State *L) {
		if (!_lg_typecheck_FlowP_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::FlowP(mglPoint p, const mglDataA & ax, const mglDataA & ay, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::FlowP(mglPoint p, const mglDataA & ax, const mglDataA & ay, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 56902440\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		mglPoint* p_ptr=(Luna< mglPoint >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglGraph::FlowP function");
		}
		mglPoint p=*p_ptr;
		const mglDataA* ax_ptr=(Luna< mglDataA >::check(L,3));
		if( !ax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ax in mglGraph::FlowP function");
		}
		const mglDataA & ax=*ax_ptr;
		const mglDataA* ay_ptr=(Luna< mglDataA >::check(L,4));
		if( !ay_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ay in mglGraph::FlowP function");
		}
		const mglDataA & ay=*ay_ptr;
		const char * sch=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::FlowP(mglPoint, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->FlowP(p, ax, ay, sch, opt);

		return 0;
	}

	// void mglGraph::FlowP(mglPoint p, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * sch = "", const char * opt = "")
	static int _bind_FlowP_overload_3(lua_State *L) {
		if (!_lg_typecheck_FlowP_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::FlowP(mglPoint p, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::FlowP(mglPoint p, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 56902440\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\narg 5 ID = 45413231\narg 6 ID = 45413231\narg 7 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		mglPoint* p_ptr=(Luna< mglPoint >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglGraph::FlowP function");
		}
		mglPoint p=*p_ptr;
		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,3));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::FlowP function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,4));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::FlowP function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,5));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::FlowP function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* ax_ptr=(Luna< mglDataA >::check(L,6));
		if( !ax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ax in mglGraph::FlowP function");
		}
		const mglDataA & ax=*ax_ptr;
		const mglDataA* ay_ptr=(Luna< mglDataA >::check(L,7));
		if( !ay_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ay in mglGraph::FlowP function");
		}
		const mglDataA & ay=*ay_ptr;
		const mglDataA* az_ptr=(Luna< mglDataA >::check(L,8));
		if( !az_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg az in mglGraph::FlowP function");
		}
		const mglDataA & az=*az_ptr;
		const char * sch=luatop>8 ? (const char *)lua_tostring(L,9) : "";
		const char * opt=luatop>9 ? (const char *)lua_tostring(L,10) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::FlowP(mglPoint, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->FlowP(p, x, y, z, ax, ay, az, sch, opt);

		return 0;
	}

	// void mglGraph::FlowP(mglPoint p, const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * sch = "", const char * opt = "")
	static int _bind_FlowP_overload_4(lua_State *L) {
		if (!_lg_typecheck_FlowP_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::FlowP(mglPoint p, const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::FlowP(mglPoint p, const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 56902440\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		mglPoint* p_ptr=(Luna< mglPoint >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglGraph::FlowP function");
		}
		mglPoint p=*p_ptr;
		const mglDataA* ax_ptr=(Luna< mglDataA >::check(L,3));
		if( !ax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ax in mglGraph::FlowP function");
		}
		const mglDataA & ax=*ax_ptr;
		const mglDataA* ay_ptr=(Luna< mglDataA >::check(L,4));
		if( !ay_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ay in mglGraph::FlowP function");
		}
		const mglDataA & ay=*ay_ptr;
		const mglDataA* az_ptr=(Luna< mglDataA >::check(L,5));
		if( !az_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg az in mglGraph::FlowP function");
		}
		const mglDataA & az=*az_ptr;
		const char * sch=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::FlowP(mglPoint, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->FlowP(p, ax, ay, az, sch, opt);

		return 0;
	}

	// Overload binder for mglGraph::FlowP
	static int _bind_FlowP(lua_State *L) {
		if (_lg_typecheck_FlowP_overload_1(L)) return _bind_FlowP_overload_1(L);
		if (_lg_typecheck_FlowP_overload_2(L)) return _bind_FlowP_overload_2(L);
		if (_lg_typecheck_FlowP_overload_3(L)) return _bind_FlowP_overload_3(L);
		if (_lg_typecheck_FlowP_overload_4(L)) return _bind_FlowP_overload_4(L);

		luaL_error(L, "error in function FlowP, cannot match any of the overloads for function FlowP:\n  FlowP(mglPoint, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  FlowP(mglPoint, const mglDataA &, const mglDataA &, const char *, const char *)\n  FlowP(mglPoint, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  FlowP(mglPoint, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Grad(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & phi, const char * sch = "", const char * opt = "")
	static int _bind_Grad_overload_1(lua_State *L) {
		if (!_lg_typecheck_Grad_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Grad(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & phi, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Grad(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & phi, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Grad function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Grad function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Grad function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* phi_ptr=(Luna< mglDataA >::check(L,5));
		if( !phi_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg phi in mglGraph::Grad function");
		}
		const mglDataA & phi=*phi_ptr;
		const char * sch=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Grad(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Grad(x, y, z, phi, sch, opt);

		return 0;
	}

	// void mglGraph::Grad(const mglDataA & x, const mglDataA & y, const mglDataA & phi, const char * sch = "", const char * opt = "")
	static int _bind_Grad_overload_2(lua_State *L) {
		if (!_lg_typecheck_Grad_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Grad(const mglDataA & x, const mglDataA & y, const mglDataA & phi, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Grad(const mglDataA & x, const mglDataA & y, const mglDataA & phi, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Grad function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Grad function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* phi_ptr=(Luna< mglDataA >::check(L,4));
		if( !phi_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg phi in mglGraph::Grad function");
		}
		const mglDataA & phi=*phi_ptr;
		const char * sch=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Grad(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Grad(x, y, phi, sch, opt);

		return 0;
	}

	// void mglGraph::Grad(const mglDataA & phi, const char * sch = "", const char * opt = "")
	static int _bind_Grad_overload_3(lua_State *L) {
		if (!_lg_typecheck_Grad_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Grad(const mglDataA & phi, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Grad(const mglDataA & phi, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* phi_ptr=(Luna< mglDataA >::check(L,2));
		if( !phi_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg phi in mglGraph::Grad function");
		}
		const mglDataA & phi=*phi_ptr;
		const char * sch=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Grad(const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Grad(phi, sch, opt);

		return 0;
	}

	// Overload binder for mglGraph::Grad
	static int _bind_Grad(lua_State *L) {
		if (_lg_typecheck_Grad_overload_1(L)) return _bind_Grad_overload_1(L);
		if (_lg_typecheck_Grad_overload_2(L)) return _bind_Grad_overload_2(L);
		if (_lg_typecheck_Grad_overload_3(L)) return _bind_Grad_overload_3(L);

		luaL_error(L, "error in function Grad, cannot match any of the overloads for function Grad:\n  Grad(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Grad(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Grad(const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Pipe(const mglDataA & x, const mglDataA & y, const mglDataA & ax, const mglDataA & ay, const char * sch = "", double r0 = 0.05, const char * opt = "")
	static int _bind_Pipe_overload_1(lua_State *L) {
		if (!_lg_typecheck_Pipe_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Pipe(const mglDataA & x, const mglDataA & y, const mglDataA & ax, const mglDataA & ay, const char * sch = \"\", double r0 = 0.05, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Pipe(const mglDataA & x, const mglDataA & y, const mglDataA & ax, const mglDataA & ay, const char * sch = \"\", double r0 = 0.05, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Pipe function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Pipe function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* ax_ptr=(Luna< mglDataA >::check(L,4));
		if( !ax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ax in mglGraph::Pipe function");
		}
		const mglDataA & ax=*ax_ptr;
		const mglDataA* ay_ptr=(Luna< mglDataA >::check(L,5));
		if( !ay_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ay in mglGraph::Pipe function");
		}
		const mglDataA & ay=*ay_ptr;
		const char * sch=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		double r0=luatop>6 ? (double)lua_tonumber(L,7) : 0.05;
		const char * opt=luatop>7 ? (const char *)lua_tostring(L,8) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Pipe(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Pipe(x, y, ax, ay, sch, r0, opt);

		return 0;
	}

	// void mglGraph::Pipe(const mglDataA & ax, const mglDataA & ay, const char * sch = "", double r0 = 0.05, const char * opt = "")
	static int _bind_Pipe_overload_2(lua_State *L) {
		if (!_lg_typecheck_Pipe_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Pipe(const mglDataA & ax, const mglDataA & ay, const char * sch = \"\", double r0 = 0.05, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Pipe(const mglDataA & ax, const mglDataA & ay, const char * sch = \"\", double r0 = 0.05, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* ax_ptr=(Luna< mglDataA >::check(L,2));
		if( !ax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ax in mglGraph::Pipe function");
		}
		const mglDataA & ax=*ax_ptr;
		const mglDataA* ay_ptr=(Luna< mglDataA >::check(L,3));
		if( !ay_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ay in mglGraph::Pipe function");
		}
		const mglDataA & ay=*ay_ptr;
		const char * sch=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		double r0=luatop>4 ? (double)lua_tonumber(L,5) : 0.05;
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Pipe(const mglDataA &, const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Pipe(ax, ay, sch, r0, opt);

		return 0;
	}

	// void mglGraph::Pipe(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * sch = "", double r0 = 0.05, const char * opt = "")
	static int _bind_Pipe_overload_3(lua_State *L) {
		if (!_lg_typecheck_Pipe_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Pipe(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * sch = \"\", double r0 = 0.05, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Pipe(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * sch = \"\", double r0 = 0.05, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\narg 5 ID = 45413231\narg 6 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Pipe function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Pipe function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Pipe function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* ax_ptr=(Luna< mglDataA >::check(L,5));
		if( !ax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ax in mglGraph::Pipe function");
		}
		const mglDataA & ax=*ax_ptr;
		const mglDataA* ay_ptr=(Luna< mglDataA >::check(L,6));
		if( !ay_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ay in mglGraph::Pipe function");
		}
		const mglDataA & ay=*ay_ptr;
		const mglDataA* az_ptr=(Luna< mglDataA >::check(L,7));
		if( !az_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg az in mglGraph::Pipe function");
		}
		const mglDataA & az=*az_ptr;
		const char * sch=luatop>7 ? (const char *)lua_tostring(L,8) : "";
		double r0=luatop>8 ? (double)lua_tonumber(L,9) : 0.05;
		const char * opt=luatop>9 ? (const char *)lua_tostring(L,10) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Pipe(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Pipe(x, y, z, ax, ay, az, sch, r0, opt);

		return 0;
	}

	// void mglGraph::Pipe(const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * sch = "", double r0 = 0.05, const char * opt = "")
	static int _bind_Pipe_overload_4(lua_State *L) {
		if (!_lg_typecheck_Pipe_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Pipe(const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * sch = \"\", double r0 = 0.05, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Pipe(const mglDataA & ax, const mglDataA & ay, const mglDataA & az, const char * sch = \"\", double r0 = 0.05, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* ax_ptr=(Luna< mglDataA >::check(L,2));
		if( !ax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ax in mglGraph::Pipe function");
		}
		const mglDataA & ax=*ax_ptr;
		const mglDataA* ay_ptr=(Luna< mglDataA >::check(L,3));
		if( !ay_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ay in mglGraph::Pipe function");
		}
		const mglDataA & ay=*ay_ptr;
		const mglDataA* az_ptr=(Luna< mglDataA >::check(L,4));
		if( !az_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg az in mglGraph::Pipe function");
		}
		const mglDataA & az=*az_ptr;
		const char * sch=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		double r0=luatop>5 ? (double)lua_tonumber(L,6) : 0.05;
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Pipe(const mglDataA &, const mglDataA &, const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Pipe(ax, ay, az, sch, r0, opt);

		return 0;
	}

	// Overload binder for mglGraph::Pipe
	static int _bind_Pipe(lua_State *L) {
		if (_lg_typecheck_Pipe_overload_1(L)) return _bind_Pipe_overload_1(L);
		if (_lg_typecheck_Pipe_overload_2(L)) return _bind_Pipe_overload_2(L);
		if (_lg_typecheck_Pipe_overload_3(L)) return _bind_Pipe_overload_3(L);
		if (_lg_typecheck_Pipe_overload_4(L)) return _bind_Pipe_overload_4(L);

		luaL_error(L, "error in function Pipe, cannot match any of the overloads for function Pipe:\n  Pipe(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, double, const char *)\n  Pipe(const mglDataA &, const mglDataA &, const char *, double, const char *)\n  Pipe(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, double, const char *)\n  Pipe(const mglDataA &, const mglDataA &, const mglDataA &, const char *, double, const char *)\n");
		return 0;
	}

	// void mglGraph::DensX(const mglDataA & a, const char * stl = "", double sVal = NaN, const char * opt = "")
	static int _bind_DensX(lua_State *L) {
		if (!_lg_typecheck_DensX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::DensX(const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::DensX(const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::DensX function");
		}
		const mglDataA & a=*a_ptr;
		const char * stl=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		double sVal=luatop>3 ? (double)lua_tonumber(L,4) : NaN;
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::DensX(const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->DensX(a, stl, sVal, opt);

		return 0;
	}

	// void mglGraph::DensY(const mglDataA & a, const char * stl = "", double sVal = NaN, const char * opt = "")
	static int _bind_DensY(lua_State *L) {
		if (!_lg_typecheck_DensY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::DensY(const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::DensY(const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::DensY function");
		}
		const mglDataA & a=*a_ptr;
		const char * stl=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		double sVal=luatop>3 ? (double)lua_tonumber(L,4) : NaN;
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::DensY(const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->DensY(a, stl, sVal, opt);

		return 0;
	}

	// void mglGraph::DensZ(const mglDataA & a, const char * stl = "", double sVal = NaN, const char * opt = "")
	static int _bind_DensZ(lua_State *L) {
		if (!_lg_typecheck_DensZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::DensZ(const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::DensZ(const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::DensZ function");
		}
		const mglDataA & a=*a_ptr;
		const char * stl=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		double sVal=luatop>3 ? (double)lua_tonumber(L,4) : NaN;
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::DensZ(const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->DensZ(a, stl, sVal, opt);

		return 0;
	}

	// void mglGraph::ContX(const mglDataA & a, const char * stl = "", double sVal = NaN, const char * opt = "")
	static int _bind_ContX_overload_1(lua_State *L) {
		if (!_lg_typecheck_ContX_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ContX(const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::ContX(const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::ContX function");
		}
		const mglDataA & a=*a_ptr;
		const char * stl=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		double sVal=luatop>3 ? (double)lua_tonumber(L,4) : NaN;
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ContX(const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ContX(a, stl, sVal, opt);

		return 0;
	}

	// void mglGraph::ContX(const mglDataA & v, const mglDataA & a, const char * stl = "", double sVal = NaN, const char * opt = "")
	static int _bind_ContX_overload_2(lua_State *L) {
		if (!_lg_typecheck_ContX_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ContX(const mglDataA & v, const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::ContX(const mglDataA & v, const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::ContX function");
		}
		const mglDataA & v=*v_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,3));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::ContX function");
		}
		const mglDataA & a=*a_ptr;
		const char * stl=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		double sVal=luatop>4 ? (double)lua_tonumber(L,5) : NaN;
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ContX(const mglDataA &, const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ContX(v, a, stl, sVal, opt);

		return 0;
	}

	// Overload binder for mglGraph::ContX
	static int _bind_ContX(lua_State *L) {
		if (_lg_typecheck_ContX_overload_1(L)) return _bind_ContX_overload_1(L);
		if (_lg_typecheck_ContX_overload_2(L)) return _bind_ContX_overload_2(L);

		luaL_error(L, "error in function ContX, cannot match any of the overloads for function ContX:\n  ContX(const mglDataA &, const char *, double, const char *)\n  ContX(const mglDataA &, const mglDataA &, const char *, double, const char *)\n");
		return 0;
	}

	// void mglGraph::ContY(const mglDataA & a, const char * stl = "", double sVal = NaN, const char * opt = "")
	static int _bind_ContY_overload_1(lua_State *L) {
		if (!_lg_typecheck_ContY_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ContY(const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::ContY(const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::ContY function");
		}
		const mglDataA & a=*a_ptr;
		const char * stl=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		double sVal=luatop>3 ? (double)lua_tonumber(L,4) : NaN;
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ContY(const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ContY(a, stl, sVal, opt);

		return 0;
	}

	// void mglGraph::ContY(const mglDataA & v, const mglDataA & a, const char * stl = "", double sVal = NaN, const char * opt = "")
	static int _bind_ContY_overload_2(lua_State *L) {
		if (!_lg_typecheck_ContY_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ContY(const mglDataA & v, const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::ContY(const mglDataA & v, const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::ContY function");
		}
		const mglDataA & v=*v_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,3));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::ContY function");
		}
		const mglDataA & a=*a_ptr;
		const char * stl=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		double sVal=luatop>4 ? (double)lua_tonumber(L,5) : NaN;
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ContY(const mglDataA &, const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ContY(v, a, stl, sVal, opt);

		return 0;
	}

	// Overload binder for mglGraph::ContY
	static int _bind_ContY(lua_State *L) {
		if (_lg_typecheck_ContY_overload_1(L)) return _bind_ContY_overload_1(L);
		if (_lg_typecheck_ContY_overload_2(L)) return _bind_ContY_overload_2(L);

		luaL_error(L, "error in function ContY, cannot match any of the overloads for function ContY:\n  ContY(const mglDataA &, const char *, double, const char *)\n  ContY(const mglDataA &, const mglDataA &, const char *, double, const char *)\n");
		return 0;
	}

	// void mglGraph::ContZ(const mglDataA & a, const char * stl = "", double sVal = NaN, const char * opt = "")
	static int _bind_ContZ_overload_1(lua_State *L) {
		if (!_lg_typecheck_ContZ_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ContZ(const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::ContZ(const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::ContZ function");
		}
		const mglDataA & a=*a_ptr;
		const char * stl=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		double sVal=luatop>3 ? (double)lua_tonumber(L,4) : NaN;
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ContZ(const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ContZ(a, stl, sVal, opt);

		return 0;
	}

	// void mglGraph::ContZ(const mglDataA & v, const mglDataA & a, const char * stl = "", double sVal = NaN, const char * opt = "")
	static int _bind_ContZ_overload_2(lua_State *L) {
		if (!_lg_typecheck_ContZ_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ContZ(const mglDataA & v, const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::ContZ(const mglDataA & v, const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::ContZ function");
		}
		const mglDataA & v=*v_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,3));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::ContZ function");
		}
		const mglDataA & a=*a_ptr;
		const char * stl=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		double sVal=luatop>4 ? (double)lua_tonumber(L,5) : NaN;
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ContZ(const mglDataA &, const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ContZ(v, a, stl, sVal, opt);

		return 0;
	}

	// Overload binder for mglGraph::ContZ
	static int _bind_ContZ(lua_State *L) {
		if (_lg_typecheck_ContZ_overload_1(L)) return _bind_ContZ_overload_1(L);
		if (_lg_typecheck_ContZ_overload_2(L)) return _bind_ContZ_overload_2(L);

		luaL_error(L, "error in function ContZ, cannot match any of the overloads for function ContZ:\n  ContZ(const mglDataA &, const char *, double, const char *)\n  ContZ(const mglDataA &, const mglDataA &, const char *, double, const char *)\n");
		return 0;
	}

	// void mglGraph::ContFX(const mglDataA & a, const char * stl = "", double sVal = NaN, const char * opt = "")
	static int _bind_ContFX_overload_1(lua_State *L) {
		if (!_lg_typecheck_ContFX_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ContFX(const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::ContFX(const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::ContFX function");
		}
		const mglDataA & a=*a_ptr;
		const char * stl=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		double sVal=luatop>3 ? (double)lua_tonumber(L,4) : NaN;
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ContFX(const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ContFX(a, stl, sVal, opt);

		return 0;
	}

	// void mglGraph::ContFX(const mglDataA & v, const mglDataA & a, const char * stl = "", double sVal = NaN, const char * opt = "")
	static int _bind_ContFX_overload_2(lua_State *L) {
		if (!_lg_typecheck_ContFX_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ContFX(const mglDataA & v, const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::ContFX(const mglDataA & v, const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::ContFX function");
		}
		const mglDataA & v=*v_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,3));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::ContFX function");
		}
		const mglDataA & a=*a_ptr;
		const char * stl=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		double sVal=luatop>4 ? (double)lua_tonumber(L,5) : NaN;
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ContFX(const mglDataA &, const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ContFX(v, a, stl, sVal, opt);

		return 0;
	}

	// Overload binder for mglGraph::ContFX
	static int _bind_ContFX(lua_State *L) {
		if (_lg_typecheck_ContFX_overload_1(L)) return _bind_ContFX_overload_1(L);
		if (_lg_typecheck_ContFX_overload_2(L)) return _bind_ContFX_overload_2(L);

		luaL_error(L, "error in function ContFX, cannot match any of the overloads for function ContFX:\n  ContFX(const mglDataA &, const char *, double, const char *)\n  ContFX(const mglDataA &, const mglDataA &, const char *, double, const char *)\n");
		return 0;
	}

	// void mglGraph::ContFY(const mglDataA & a, const char * stl = "", double sVal = NaN, const char * opt = "")
	static int _bind_ContFY_overload_1(lua_State *L) {
		if (!_lg_typecheck_ContFY_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ContFY(const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::ContFY(const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::ContFY function");
		}
		const mglDataA & a=*a_ptr;
		const char * stl=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		double sVal=luatop>3 ? (double)lua_tonumber(L,4) : NaN;
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ContFY(const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ContFY(a, stl, sVal, opt);

		return 0;
	}

	// void mglGraph::ContFY(const mglDataA & v, const mglDataA & a, const char * stl = "", double sVal = NaN, const char * opt = "")
	static int _bind_ContFY_overload_2(lua_State *L) {
		if (!_lg_typecheck_ContFY_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ContFY(const mglDataA & v, const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::ContFY(const mglDataA & v, const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::ContFY function");
		}
		const mglDataA & v=*v_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,3));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::ContFY function");
		}
		const mglDataA & a=*a_ptr;
		const char * stl=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		double sVal=luatop>4 ? (double)lua_tonumber(L,5) : NaN;
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ContFY(const mglDataA &, const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ContFY(v, a, stl, sVal, opt);

		return 0;
	}

	// Overload binder for mglGraph::ContFY
	static int _bind_ContFY(lua_State *L) {
		if (_lg_typecheck_ContFY_overload_1(L)) return _bind_ContFY_overload_1(L);
		if (_lg_typecheck_ContFY_overload_2(L)) return _bind_ContFY_overload_2(L);

		luaL_error(L, "error in function ContFY, cannot match any of the overloads for function ContFY:\n  ContFY(const mglDataA &, const char *, double, const char *)\n  ContFY(const mglDataA &, const mglDataA &, const char *, double, const char *)\n");
		return 0;
	}

	// void mglGraph::ContFZ(const mglDataA & a, const char * stl = "", double sVal = NaN, const char * opt = "")
	static int _bind_ContFZ_overload_1(lua_State *L) {
		if (!_lg_typecheck_ContFZ_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ContFZ(const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::ContFZ(const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::ContFZ function");
		}
		const mglDataA & a=*a_ptr;
		const char * stl=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		double sVal=luatop>3 ? (double)lua_tonumber(L,4) : NaN;
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ContFZ(const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ContFZ(a, stl, sVal, opt);

		return 0;
	}

	// void mglGraph::ContFZ(const mglDataA & v, const mglDataA & a, const char * stl = "", double sVal = NaN, const char * opt = "")
	static int _bind_ContFZ_overload_2(lua_State *L) {
		if (!_lg_typecheck_ContFZ_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::ContFZ(const mglDataA & v, const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::ContFZ(const mglDataA & v, const mglDataA & a, const char * stl = \"\", double sVal = NaN, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::ContFZ function");
		}
		const mglDataA & v=*v_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,3));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::ContFZ function");
		}
		const mglDataA & a=*a_ptr;
		const char * stl=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		double sVal=luatop>4 ? (double)lua_tonumber(L,5) : NaN;
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::ContFZ(const mglDataA &, const mglDataA &, const char *, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->ContFZ(v, a, stl, sVal, opt);

		return 0;
	}

	// Overload binder for mglGraph::ContFZ
	static int _bind_ContFZ(lua_State *L) {
		if (_lg_typecheck_ContFZ_overload_1(L)) return _bind_ContFZ_overload_1(L);
		if (_lg_typecheck_ContFZ_overload_2(L)) return _bind_ContFZ_overload_2(L);

		luaL_error(L, "error in function ContFZ, cannot match any of the overloads for function ContFZ:\n  ContFZ(const mglDataA &, const char *, double, const char *)\n  ContFZ(const mglDataA &, const mglDataA &, const char *, double, const char *)\n");
		return 0;
	}

	// void mglGraph::FPlot(const char * fy, const char * stl = "", const char * opt = "")
	static int _bind_FPlot_overload_1(lua_State *L) {
		if (!_lg_typecheck_FPlot_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::FPlot(const char * fy, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::FPlot(const char * fy, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fy=(const char *)lua_tostring(L,2);
		const char * stl=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::FPlot(const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->FPlot(fy, stl, opt);

		return 0;
	}

	// void mglGraph::FPlot(const char * fx, const char * fy, const char * fz, const char * stl, const char * opt = "")
	static int _bind_FPlot_overload_2(lua_State *L) {
		if (!_lg_typecheck_FPlot_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::FPlot(const char * fx, const char * fy, const char * fz, const char * stl, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::FPlot(const char * fx, const char * fy, const char * fz, const char * stl, const char * opt = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fx=(const char *)lua_tostring(L,2);
		const char * fy=(const char *)lua_tostring(L,3);
		const char * fz=(const char *)lua_tostring(L,4);
		const char * stl=(const char *)lua_tostring(L,5);
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::FPlot(const char *, const char *, const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->FPlot(fx, fy, fz, stl, opt);

		return 0;
	}

	// Overload binder for mglGraph::FPlot
	static int _bind_FPlot(lua_State *L) {
		if (_lg_typecheck_FPlot_overload_1(L)) return _bind_FPlot_overload_1(L);
		if (_lg_typecheck_FPlot_overload_2(L)) return _bind_FPlot_overload_2(L);

		luaL_error(L, "error in function FPlot, cannot match any of the overloads for function FPlot:\n  FPlot(const char *, const char *, const char *)\n  FPlot(const char *, const char *, const char *, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::FSurf(const char * fz, const char * stl = "", const char * opt = "")
	static int _bind_FSurf_overload_1(lua_State *L) {
		if (!_lg_typecheck_FSurf_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::FSurf(const char * fz, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::FSurf(const char * fz, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fz=(const char *)lua_tostring(L,2);
		const char * stl=luatop>2 ? (const char *)lua_tostring(L,3) : "";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::FSurf(const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->FSurf(fz, stl, opt);

		return 0;
	}

	// void mglGraph::FSurf(const char * fx, const char * fy, const char * fz, const char * stl, const char * opt = "")
	static int _bind_FSurf_overload_2(lua_State *L) {
		if (!_lg_typecheck_FSurf_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::FSurf(const char * fx, const char * fy, const char * fz, const char * stl, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::FSurf(const char * fx, const char * fy, const char * fz, const char * stl, const char * opt = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fx=(const char *)lua_tostring(L,2);
		const char * fy=(const char *)lua_tostring(L,3);
		const char * fz=(const char *)lua_tostring(L,4);
		const char * stl=(const char *)lua_tostring(L,5);
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::FSurf(const char *, const char *, const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->FSurf(fx, fy, fz, stl, opt);

		return 0;
	}

	// Overload binder for mglGraph::FSurf
	static int _bind_FSurf(lua_State *L) {
		if (_lg_typecheck_FSurf_overload_1(L)) return _bind_FSurf_overload_1(L);
		if (_lg_typecheck_FSurf_overload_2(L)) return _bind_FSurf_overload_2(L);

		luaL_error(L, "error in function FSurf, cannot match any of the overloads for function FSurf:\n  FSurf(const char *, const char *, const char *)\n  FSurf(const char *, const char *, const char *, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::TriPlot(const mglDataA & nums, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & c, const char * sch = "", const char * opt = "")
	static int _bind_TriPlot_overload_1(lua_State *L) {
		if (!_lg_typecheck_TriPlot_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::TriPlot(const mglDataA & nums, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & c, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::TriPlot(const mglDataA & nums, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & c, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\narg 5 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* nums_ptr=(Luna< mglDataA >::check(L,2));
		if( !nums_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nums in mglGraph::TriPlot function");
		}
		const mglDataA & nums=*nums_ptr;
		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,3));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::TriPlot function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,4));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::TriPlot function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,5));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::TriPlot function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* c_ptr=(Luna< mglDataA >::check(L,6));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in mglGraph::TriPlot function");
		}
		const mglDataA & c=*c_ptr;
		const char * sch=luatop>6 ? (const char *)lua_tostring(L,7) : "";
		const char * opt=luatop>7 ? (const char *)lua_tostring(L,8) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::TriPlot(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->TriPlot(nums, x, y, z, c, sch, opt);

		return 0;
	}

	// void mglGraph::TriPlot(const mglDataA & nums, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = "", const char * opt = "")
	static int _bind_TriPlot_overload_2(lua_State *L) {
		if (!_lg_typecheck_TriPlot_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::TriPlot(const mglDataA & nums, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::TriPlot(const mglDataA & nums, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* nums_ptr=(Luna< mglDataA >::check(L,2));
		if( !nums_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nums in mglGraph::TriPlot function");
		}
		const mglDataA & nums=*nums_ptr;
		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,3));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::TriPlot function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,4));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::TriPlot function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,5));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::TriPlot function");
		}
		const mglDataA & z=*z_ptr;
		const char * sch=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::TriPlot(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->TriPlot(nums, x, y, z, sch, opt);

		return 0;
	}

	// void mglGraph::TriPlot(const mglDataA & nums, const mglDataA & x, const mglDataA & y, const char * sch = "", const char * opt = "")
	static int _bind_TriPlot_overload_3(lua_State *L) {
		if (!_lg_typecheck_TriPlot_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::TriPlot(const mglDataA & nums, const mglDataA & x, const mglDataA & y, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::TriPlot(const mglDataA & nums, const mglDataA & x, const mglDataA & y, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* nums_ptr=(Luna< mglDataA >::check(L,2));
		if( !nums_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nums in mglGraph::TriPlot function");
		}
		const mglDataA & nums=*nums_ptr;
		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,3));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::TriPlot function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,4));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::TriPlot function");
		}
		const mglDataA & y=*y_ptr;
		const char * sch=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::TriPlot(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->TriPlot(nums, x, y, sch, opt);

		return 0;
	}

	// Overload binder for mglGraph::TriPlot
	static int _bind_TriPlot(lua_State *L) {
		if (_lg_typecheck_TriPlot_overload_1(L)) return _bind_TriPlot_overload_1(L);
		if (_lg_typecheck_TriPlot_overload_2(L)) return _bind_TriPlot_overload_2(L);
		if (_lg_typecheck_TriPlot_overload_3(L)) return _bind_TriPlot_overload_3(L);

		luaL_error(L, "error in function TriPlot, cannot match any of the overloads for function TriPlot:\n  TriPlot(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  TriPlot(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  TriPlot(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::QuadPlot(const mglDataA & nums, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & c, const char * sch = "", const char * opt = "")
	static int _bind_QuadPlot_overload_1(lua_State *L) {
		if (!_lg_typecheck_QuadPlot_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::QuadPlot(const mglDataA & nums, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & c, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::QuadPlot(const mglDataA & nums, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & c, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\narg 5 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* nums_ptr=(Luna< mglDataA >::check(L,2));
		if( !nums_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nums in mglGraph::QuadPlot function");
		}
		const mglDataA & nums=*nums_ptr;
		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,3));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::QuadPlot function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,4));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::QuadPlot function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,5));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::QuadPlot function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* c_ptr=(Luna< mglDataA >::check(L,6));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in mglGraph::QuadPlot function");
		}
		const mglDataA & c=*c_ptr;
		const char * sch=luatop>6 ? (const char *)lua_tostring(L,7) : "";
		const char * opt=luatop>7 ? (const char *)lua_tostring(L,8) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::QuadPlot(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->QuadPlot(nums, x, y, z, c, sch, opt);

		return 0;
	}

	// void mglGraph::QuadPlot(const mglDataA & nums, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = "", const char * opt = "")
	static int _bind_QuadPlot_overload_2(lua_State *L) {
		if (!_lg_typecheck_QuadPlot_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::QuadPlot(const mglDataA & nums, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::QuadPlot(const mglDataA & nums, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* nums_ptr=(Luna< mglDataA >::check(L,2));
		if( !nums_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nums in mglGraph::QuadPlot function");
		}
		const mglDataA & nums=*nums_ptr;
		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,3));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::QuadPlot function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,4));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::QuadPlot function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,5));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::QuadPlot function");
		}
		const mglDataA & z=*z_ptr;
		const char * sch=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::QuadPlot(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->QuadPlot(nums, x, y, z, sch, opt);

		return 0;
	}

	// void mglGraph::QuadPlot(const mglDataA & nums, const mglDataA & x, const mglDataA & y, const char * sch = "", const char * opt = "")
	static int _bind_QuadPlot_overload_3(lua_State *L) {
		if (!_lg_typecheck_QuadPlot_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::QuadPlot(const mglDataA & nums, const mglDataA & x, const mglDataA & y, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::QuadPlot(const mglDataA & nums, const mglDataA & x, const mglDataA & y, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* nums_ptr=(Luna< mglDataA >::check(L,2));
		if( !nums_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nums in mglGraph::QuadPlot function");
		}
		const mglDataA & nums=*nums_ptr;
		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,3));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::QuadPlot function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,4));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::QuadPlot function");
		}
		const mglDataA & y=*y_ptr;
		const char * sch=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::QuadPlot(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->QuadPlot(nums, x, y, sch, opt);

		return 0;
	}

	// Overload binder for mglGraph::QuadPlot
	static int _bind_QuadPlot(lua_State *L) {
		if (_lg_typecheck_QuadPlot_overload_1(L)) return _bind_QuadPlot_overload_1(L);
		if (_lg_typecheck_QuadPlot_overload_2(L)) return _bind_QuadPlot_overload_2(L);
		if (_lg_typecheck_QuadPlot_overload_3(L)) return _bind_QuadPlot_overload_3(L);

		luaL_error(L, "error in function QuadPlot, cannot match any of the overloads for function QuadPlot:\n  QuadPlot(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  QuadPlot(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  QuadPlot(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::TriCont(const mglDataA & nums, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = "", const char * opt = "")
	static int _bind_TriCont_overload_1(lua_State *L) {
		if (!_lg_typecheck_TriCont_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::TriCont(const mglDataA & nums, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::TriCont(const mglDataA & nums, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* nums_ptr=(Luna< mglDataA >::check(L,2));
		if( !nums_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nums in mglGraph::TriCont function");
		}
		const mglDataA & nums=*nums_ptr;
		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,3));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::TriCont function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,4));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::TriCont function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,5));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::TriCont function");
		}
		const mglDataA & z=*z_ptr;
		const char * sch=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::TriCont(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->TriCont(nums, x, y, z, sch, opt);

		return 0;
	}

	// void mglGraph::TriCont(const mglDataA & nums, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * sch = "", const char * opt = "")
	static int _bind_TriCont_overload_2(lua_State *L) {
		if (!_lg_typecheck_TriCont_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::TriCont(const mglDataA & nums, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::TriCont(const mglDataA & nums, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\narg 5 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* nums_ptr=(Luna< mglDataA >::check(L,2));
		if( !nums_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nums in mglGraph::TriCont function");
		}
		const mglDataA & nums=*nums_ptr;
		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,3));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::TriCont function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,4));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::TriCont function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,5));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::TriCont function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,6));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::TriCont function");
		}
		const mglDataA & a=*a_ptr;
		const char * sch=luatop>6 ? (const char *)lua_tostring(L,7) : "";
		const char * opt=luatop>7 ? (const char *)lua_tostring(L,8) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::TriCont(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->TriCont(nums, x, y, z, a, sch, opt);

		return 0;
	}

	// Overload binder for mglGraph::TriCont
	static int _bind_TriCont(lua_State *L) {
		if (_lg_typecheck_TriCont_overload_1(L)) return _bind_TriCont_overload_1(L);
		if (_lg_typecheck_TriCont_overload_2(L)) return _bind_TriCont_overload_2(L);

		luaL_error(L, "error in function TriCont, cannot match any of the overloads for function TriCont:\n  TriCont(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  TriCont(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::TriContV(const mglDataA & v, const mglDataA & nums, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = "", const char * opt = "")
	static int _bind_TriContV_overload_1(lua_State *L) {
		if (!_lg_typecheck_TriContV_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::TriContV(const mglDataA & v, const mglDataA & nums, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::TriContV(const mglDataA & v, const mglDataA & nums, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\narg 5 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::TriContV function");
		}
		const mglDataA & v=*v_ptr;
		const mglDataA* nums_ptr=(Luna< mglDataA >::check(L,3));
		if( !nums_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nums in mglGraph::TriContV function");
		}
		const mglDataA & nums=*nums_ptr;
		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,4));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::TriContV function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,5));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::TriContV function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,6));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::TriContV function");
		}
		const mglDataA & z=*z_ptr;
		const char * sch=luatop>6 ? (const char *)lua_tostring(L,7) : "";
		const char * opt=luatop>7 ? (const char *)lua_tostring(L,8) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::TriContV(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->TriContV(v, nums, x, y, z, sch, opt);

		return 0;
	}

	// void mglGraph::TriContV(const mglDataA & v, const mglDataA & nums, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * sch = "", const char * opt = "")
	static int _bind_TriContV_overload_2(lua_State *L) {
		if (!_lg_typecheck_TriContV_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::TriContV(const mglDataA & v, const mglDataA & nums, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::TriContV(const mglDataA & v, const mglDataA & nums, const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\narg 5 ID = 45413231\narg 6 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::TriContV function");
		}
		const mglDataA & v=*v_ptr;
		const mglDataA* nums_ptr=(Luna< mglDataA >::check(L,3));
		if( !nums_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nums in mglGraph::TriContV function");
		}
		const mglDataA & nums=*nums_ptr;
		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,4));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::TriContV function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,5));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::TriContV function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,6));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::TriContV function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,7));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::TriContV function");
		}
		const mglDataA & a=*a_ptr;
		const char * sch=luatop>7 ? (const char *)lua_tostring(L,8) : "";
		const char * opt=luatop>8 ? (const char *)lua_tostring(L,9) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::TriContV(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->TriContV(v, nums, x, y, z, a, sch, opt);

		return 0;
	}

	// Overload binder for mglGraph::TriContV
	static int _bind_TriContV(lua_State *L) {
		if (_lg_typecheck_TriContV_overload_1(L)) return _bind_TriContV_overload_1(L);
		if (_lg_typecheck_TriContV_overload_2(L)) return _bind_TriContV_overload_2(L);

		luaL_error(L, "error in function TriContV, cannot match any of the overloads for function TriContV:\n  TriContV(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  TriContV(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Dots(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = "", const char * opt = "")
	static int _bind_Dots_overload_1(lua_State *L) {
		if (!_lg_typecheck_Dots_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Dots(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Dots(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Dots function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Dots function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Dots function");
		}
		const mglDataA & z=*z_ptr;
		const char * sch=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Dots(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Dots(x, y, z, sch, opt);

		return 0;
	}

	// void mglGraph::Dots(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * sch = "", const char * opt = "")
	static int _bind_Dots_overload_2(lua_State *L) {
		if (!_lg_typecheck_Dots_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Dots(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Dots(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Dots function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Dots function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Dots function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,5));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Dots function");
		}
		const mglDataA & a=*a_ptr;
		const char * sch=luatop>5 ? (const char *)lua_tostring(L,6) : "";
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Dots(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Dots(x, y, z, a, sch, opt);

		return 0;
	}

	// Overload binder for mglGraph::Dots
	static int _bind_Dots(lua_State *L) {
		if (_lg_typecheck_Dots_overload_1(L)) return _bind_Dots_overload_1(L);
		if (_lg_typecheck_Dots_overload_2(L)) return _bind_Dots_overload_2(L);

		luaL_error(L, "error in function Dots, cannot match any of the overloads for function Dots:\n  Dots(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n  Dots(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *)\n");
		return 0;
	}

	// void mglGraph::Crust(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = "", const char * opt = "")
	static int _bind_Crust(lua_State *L) {
		if (!_lg_typecheck_Crust(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Crust(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Crust(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * sch = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Crust function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Crust function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Crust function");
		}
		const mglDataA & z=*z_ptr;
		const char * sch=luatop>4 ? (const char *)lua_tostring(L,5) : "";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Crust(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Crust(x, y, z, sch, opt);

		return 0;
	}

	// mglData mglGraph::Fit(const mglDataA & y, const char * eq, const char * var, const char * opt = "")
	static int _bind_Fit_overload_1(lua_State *L) {
		if (!_lg_typecheck_Fit_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglGraph::Fit(const mglDataA & y, const char * eq, const char * var, const char * opt = \"\") function, expected prototype:\nmglData mglGraph::Fit(const mglDataA & y, const char * eq, const char * var, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,2));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Fit function");
		}
		const mglDataA & y=*y_ptr;
		const char * eq=(const char *)lua_tostring(L,3);
		const char * var=(const char *)lua_tostring(L,4);
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglGraph::Fit(const mglDataA &, const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		mglData stack_lret = self->Fit(y, eq, var, opt);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglGraph::Fit(const mglDataA & y, const char * eq, const char * var, mglData & ini, const char * opt = "")
	static int _bind_Fit_overload_2(lua_State *L) {
		if (!_lg_typecheck_Fit_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglGraph::Fit(const mglDataA & y, const char * eq, const char * var, mglData & ini, const char * opt = \"\") function, expected prototype:\nmglData mglGraph::Fit(const mglDataA & y, const char * eq, const char * var, mglData & ini, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,2));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Fit function");
		}
		const mglDataA & y=*y_ptr;
		const char * eq=(const char *)lua_tostring(L,3);
		const char * var=(const char *)lua_tostring(L,4);
		mglData* ini_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,5));
		if( !ini_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ini in mglGraph::Fit function");
		}
		mglData & ini=*ini_ptr;
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglGraph::Fit(const mglDataA &, const char *, const char *, mglData &, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		mglData stack_lret = self->Fit(y, eq, var, ini, opt);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglGraph::Fit(const mglDataA & x, const mglDataA & y, const char * eq, const char * var, const char * opt = "")
	static int _bind_Fit_overload_3(lua_State *L) {
		if (!_lg_typecheck_Fit_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglGraph::Fit(const mglDataA & x, const mglDataA & y, const char * eq, const char * var, const char * opt = \"\") function, expected prototype:\nmglData mglGraph::Fit(const mglDataA & x, const mglDataA & y, const char * eq, const char * var, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Fit function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Fit function");
		}
		const mglDataA & y=*y_ptr;
		const char * eq=(const char *)lua_tostring(L,4);
		const char * var=(const char *)lua_tostring(L,5);
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglGraph::Fit(const mglDataA &, const mglDataA &, const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		mglData stack_lret = self->Fit(x, y, eq, var, opt);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglGraph::Fit(const mglDataA & x, const mglDataA & y, const char * eq, const char * var, mglData & ini, const char * opt = "")
	static int _bind_Fit_overload_4(lua_State *L) {
		if (!_lg_typecheck_Fit_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglGraph::Fit(const mglDataA & x, const mglDataA & y, const char * eq, const char * var, mglData & ini, const char * opt = \"\") function, expected prototype:\nmglData mglGraph::Fit(const mglDataA & x, const mglDataA & y, const char * eq, const char * var, mglData & ini, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 5 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Fit function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Fit function");
		}
		const mglDataA & y=*y_ptr;
		const char * eq=(const char *)lua_tostring(L,4);
		const char * var=(const char *)lua_tostring(L,5);
		mglData* ini_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,6));
		if( !ini_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ini in mglGraph::Fit function");
		}
		mglData & ini=*ini_ptr;
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglGraph::Fit(const mglDataA &, const mglDataA &, const char *, const char *, mglData &, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		mglData stack_lret = self->Fit(x, y, eq, var, ini, opt);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglGraph::Fit(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * eq, const char * var, const char * opt = "")
	static int _bind_Fit_overload_5(lua_State *L) {
		if (!_lg_typecheck_Fit_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglGraph::Fit(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * eq, const char * var, const char * opt = \"\") function, expected prototype:\nmglData mglGraph::Fit(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * eq, const char * var, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Fit function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Fit function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Fit function");
		}
		const mglDataA & z=*z_ptr;
		const char * eq=(const char *)lua_tostring(L,5);
		const char * var=(const char *)lua_tostring(L,6);
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglGraph::Fit(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		mglData stack_lret = self->Fit(x, y, z, eq, var, opt);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglGraph::Fit(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * eq, const char * var, mglData & ini, const char * opt = "")
	static int _bind_Fit_overload_6(lua_State *L) {
		if (!_lg_typecheck_Fit_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglGraph::Fit(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * eq, const char * var, mglData & ini, const char * opt = \"\") function, expected prototype:\nmglData mglGraph::Fit(const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * eq, const char * var, mglData & ini, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 6 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Fit function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Fit function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Fit function");
		}
		const mglDataA & z=*z_ptr;
		const char * eq=(const char *)lua_tostring(L,5);
		const char * var=(const char *)lua_tostring(L,6);
		mglData* ini_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,7));
		if( !ini_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ini in mglGraph::Fit function");
		}
		mglData & ini=*ini_ptr;
		const char * opt=luatop>7 ? (const char *)lua_tostring(L,8) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglGraph::Fit(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *, mglData &, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		mglData stack_lret = self->Fit(x, y, z, eq, var, ini, opt);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglGraph::Fit(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * eq, const char * var, const char * opt = "")
	static int _bind_Fit_overload_7(lua_State *L) {
		if (!_lg_typecheck_Fit_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglGraph::Fit(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * eq, const char * var, const char * opt = \"\") function, expected prototype:\nmglData mglGraph::Fit(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * eq, const char * var, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Fit function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Fit function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Fit function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,5));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Fit function");
		}
		const mglDataA & a=*a_ptr;
		const char * eq=(const char *)lua_tostring(L,6);
		const char * var=(const char *)lua_tostring(L,7);
		const char * opt=luatop>7 ? (const char *)lua_tostring(L,8) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglGraph::Fit(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		mglData stack_lret = self->Fit(x, y, z, a, eq, var, opt);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglGraph::Fit(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * eq, const char * var, mglData & ini, const char * opt = "")
	static int _bind_Fit_overload_8(lua_State *L) {
		if (!_lg_typecheck_Fit_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglGraph::Fit(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * eq, const char * var, mglData & ini, const char * opt = \"\") function, expected prototype:\nmglData mglGraph::Fit(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * eq, const char * var, mglData & ini, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\narg 7 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Fit function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Fit function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Fit function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,5));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Fit function");
		}
		const mglDataA & a=*a_ptr;
		const char * eq=(const char *)lua_tostring(L,6);
		const char * var=(const char *)lua_tostring(L,7);
		mglData* ini_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,8));
		if( !ini_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ini in mglGraph::Fit function");
		}
		mglData & ini=*ini_ptr;
		const char * opt=luatop>8 ? (const char *)lua_tostring(L,9) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglGraph::Fit(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *, mglData &, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		mglData stack_lret = self->Fit(x, y, z, a, eq, var, ini, opt);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// Overload binder for mglGraph::Fit
	static int _bind_Fit(lua_State *L) {
		if (_lg_typecheck_Fit_overload_1(L)) return _bind_Fit_overload_1(L);
		if (_lg_typecheck_Fit_overload_2(L)) return _bind_Fit_overload_2(L);
		if (_lg_typecheck_Fit_overload_3(L)) return _bind_Fit_overload_3(L);
		if (_lg_typecheck_Fit_overload_4(L)) return _bind_Fit_overload_4(L);
		if (_lg_typecheck_Fit_overload_5(L)) return _bind_Fit_overload_5(L);
		if (_lg_typecheck_Fit_overload_6(L)) return _bind_Fit_overload_6(L);
		if (_lg_typecheck_Fit_overload_7(L)) return _bind_Fit_overload_7(L);
		if (_lg_typecheck_Fit_overload_8(L)) return _bind_Fit_overload_8(L);

		luaL_error(L, "error in function Fit, cannot match any of the overloads for function Fit:\n  Fit(const mglDataA &, const char *, const char *, const char *)\n  Fit(const mglDataA &, const char *, const char *, mglData &, const char *)\n  Fit(const mglDataA &, const mglDataA &, const char *, const char *, const char *)\n  Fit(const mglDataA &, const mglDataA &, const char *, const char *, mglData &, const char *)\n  Fit(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *, const char *)\n  Fit(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *, mglData &, const char *)\n  Fit(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *, const char *)\n  Fit(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *, mglData &, const char *)\n");
		return 0;
	}

	// mglData mglGraph::Fit2(const mglDataA & z, const char * eq, const char * var, const char * opt = "")
	static int _bind_Fit2_overload_1(lua_State *L) {
		if (!_lg_typecheck_Fit2_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglGraph::Fit2(const mglDataA & z, const char * eq, const char * var, const char * opt = \"\") function, expected prototype:\nmglData mglGraph::Fit2(const mglDataA & z, const char * eq, const char * var, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,2));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Fit2 function");
		}
		const mglDataA & z=*z_ptr;
		const char * eq=(const char *)lua_tostring(L,3);
		const char * var=(const char *)lua_tostring(L,4);
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglGraph::Fit2(const mglDataA &, const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		mglData stack_lret = self->Fit2(z, eq, var, opt);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglGraph::Fit2(const mglDataA & z, const char * eq, const char * var, mglData & ini, const char * opt = "")
	static int _bind_Fit2_overload_2(lua_State *L) {
		if (!_lg_typecheck_Fit2_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglGraph::Fit2(const mglDataA & z, const char * eq, const char * var, mglData & ini, const char * opt = \"\") function, expected prototype:\nmglData mglGraph::Fit2(const mglDataA & z, const char * eq, const char * var, mglData & ini, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,2));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Fit2 function");
		}
		const mglDataA & z=*z_ptr;
		const char * eq=(const char *)lua_tostring(L,3);
		const char * var=(const char *)lua_tostring(L,4);
		mglData* ini_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,5));
		if( !ini_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ini in mglGraph::Fit2 function");
		}
		mglData & ini=*ini_ptr;
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglGraph::Fit2(const mglDataA &, const char *, const char *, mglData &, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		mglData stack_lret = self->Fit2(z, eq, var, ini, opt);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// Overload binder for mglGraph::Fit2
	static int _bind_Fit2(lua_State *L) {
		if (_lg_typecheck_Fit2_overload_1(L)) return _bind_Fit2_overload_1(L);
		if (_lg_typecheck_Fit2_overload_2(L)) return _bind_Fit2_overload_2(L);

		luaL_error(L, "error in function Fit2, cannot match any of the overloads for function Fit2:\n  Fit2(const mglDataA &, const char *, const char *, const char *)\n  Fit2(const mglDataA &, const char *, const char *, mglData &, const char *)\n");
		return 0;
	}

	// mglData mglGraph::Fit3(const mglDataA & a, const char * eq, const char * var, const char * opt = "")
	static int _bind_Fit3_overload_1(lua_State *L) {
		if (!_lg_typecheck_Fit3_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglGraph::Fit3(const mglDataA & a, const char * eq, const char * var, const char * opt = \"\") function, expected prototype:\nmglData mglGraph::Fit3(const mglDataA & a, const char * eq, const char * var, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Fit3 function");
		}
		const mglDataA & a=*a_ptr;
		const char * eq=(const char *)lua_tostring(L,3);
		const char * var=(const char *)lua_tostring(L,4);
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglGraph::Fit3(const mglDataA &, const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		mglData stack_lret = self->Fit3(a, eq, var, opt);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglGraph::Fit3(const mglDataA & a, const char * eq, const char * var, mglData & ini, const char * opt = "")
	static int _bind_Fit3_overload_2(lua_State *L) {
		if (!_lg_typecheck_Fit3_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglGraph::Fit3(const mglDataA & a, const char * eq, const char * var, mglData & ini, const char * opt = \"\") function, expected prototype:\nmglData mglGraph::Fit3(const mglDataA & a, const char * eq, const char * var, mglData & ini, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Fit3 function");
		}
		const mglDataA & a=*a_ptr;
		const char * eq=(const char *)lua_tostring(L,3);
		const char * var=(const char *)lua_tostring(L,4);
		mglData* ini_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,5));
		if( !ini_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ini in mglGraph::Fit3 function");
		}
		mglData & ini=*ini_ptr;
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglGraph::Fit3(const mglDataA &, const char *, const char *, mglData &, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		mglData stack_lret = self->Fit3(a, eq, var, ini, opt);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// Overload binder for mglGraph::Fit3
	static int _bind_Fit3(lua_State *L) {
		if (_lg_typecheck_Fit3_overload_1(L)) return _bind_Fit3_overload_1(L);
		if (_lg_typecheck_Fit3_overload_2(L)) return _bind_Fit3_overload_2(L);

		luaL_error(L, "error in function Fit3, cannot match any of the overloads for function Fit3:\n  Fit3(const mglDataA &, const char *, const char *, const char *)\n  Fit3(const mglDataA &, const char *, const char *, mglData &, const char *)\n");
		return 0;
	}

	// mglData mglGraph::FitS(const mglDataA & y, const mglDataA & s, const char * eq, const char * var, const char * opt = "")
	static int _bind_FitS_overload_1(lua_State *L) {
		if (!_lg_typecheck_FitS_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglGraph::FitS(const mglDataA & y, const mglDataA & s, const char * eq, const char * var, const char * opt = \"\") function, expected prototype:\nmglData mglGraph::FitS(const mglDataA & y, const mglDataA & s, const char * eq, const char * var, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,2));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::FitS function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* s_ptr=(Luna< mglDataA >::check(L,3));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in mglGraph::FitS function");
		}
		const mglDataA & s=*s_ptr;
		const char * eq=(const char *)lua_tostring(L,4);
		const char * var=(const char *)lua_tostring(L,5);
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglGraph::FitS(const mglDataA &, const mglDataA &, const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		mglData stack_lret = self->FitS(y, s, eq, var, opt);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglGraph::FitS(const mglDataA & y, const mglDataA & s, const char * eq, const char * var, mglData & ini, const char * opt = "")
	static int _bind_FitS_overload_2(lua_State *L) {
		if (!_lg_typecheck_FitS_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglGraph::FitS(const mglDataA & y, const mglDataA & s, const char * eq, const char * var, mglData & ini, const char * opt = \"\") function, expected prototype:\nmglData mglGraph::FitS(const mglDataA & y, const mglDataA & s, const char * eq, const char * var, mglData & ini, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 5 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,2));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::FitS function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* s_ptr=(Luna< mglDataA >::check(L,3));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in mglGraph::FitS function");
		}
		const mglDataA & s=*s_ptr;
		const char * eq=(const char *)lua_tostring(L,4);
		const char * var=(const char *)lua_tostring(L,5);
		mglData* ini_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,6));
		if( !ini_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ini in mglGraph::FitS function");
		}
		mglData & ini=*ini_ptr;
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglGraph::FitS(const mglDataA &, const mglDataA &, const char *, const char *, mglData &, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		mglData stack_lret = self->FitS(y, s, eq, var, ini, opt);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglGraph::FitS(const mglDataA & x, const mglDataA & y, const mglDataA & s, const char * eq, const char * var, const char * opt = "")
	static int _bind_FitS_overload_3(lua_State *L) {
		if (!_lg_typecheck_FitS_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglGraph::FitS(const mglDataA & x, const mglDataA & y, const mglDataA & s, const char * eq, const char * var, const char * opt = \"\") function, expected prototype:\nmglData mglGraph::FitS(const mglDataA & x, const mglDataA & y, const mglDataA & s, const char * eq, const char * var, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::FitS function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::FitS function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* s_ptr=(Luna< mglDataA >::check(L,4));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in mglGraph::FitS function");
		}
		const mglDataA & s=*s_ptr;
		const char * eq=(const char *)lua_tostring(L,5);
		const char * var=(const char *)lua_tostring(L,6);
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglGraph::FitS(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		mglData stack_lret = self->FitS(x, y, s, eq, var, opt);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglGraph::FitS(const mglDataA & x, const mglDataA & y, const mglDataA & s, const char * eq, const char * var, mglData & ini, const char * opt = "")
	static int _bind_FitS_overload_4(lua_State *L) {
		if (!_lg_typecheck_FitS_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglGraph::FitS(const mglDataA & x, const mglDataA & y, const mglDataA & s, const char * eq, const char * var, mglData & ini, const char * opt = \"\") function, expected prototype:\nmglData mglGraph::FitS(const mglDataA & x, const mglDataA & y, const mglDataA & s, const char * eq, const char * var, mglData & ini, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 6 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::FitS function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::FitS function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* s_ptr=(Luna< mglDataA >::check(L,4));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in mglGraph::FitS function");
		}
		const mglDataA & s=*s_ptr;
		const char * eq=(const char *)lua_tostring(L,5);
		const char * var=(const char *)lua_tostring(L,6);
		mglData* ini_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,7));
		if( !ini_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ini in mglGraph::FitS function");
		}
		mglData & ini=*ini_ptr;
		const char * opt=luatop>7 ? (const char *)lua_tostring(L,8) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglGraph::FitS(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *, mglData &, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		mglData stack_lret = self->FitS(x, y, s, eq, var, ini, opt);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglGraph::FitS(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & s, const char * eq, const char * var, const char * opt = "")
	static int _bind_FitS_overload_5(lua_State *L) {
		if (!_lg_typecheck_FitS_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglGraph::FitS(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & s, const char * eq, const char * var, const char * opt = \"\") function, expected prototype:\nmglData mglGraph::FitS(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & s, const char * eq, const char * var, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::FitS function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::FitS function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::FitS function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* s_ptr=(Luna< mglDataA >::check(L,5));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in mglGraph::FitS function");
		}
		const mglDataA & s=*s_ptr;
		const char * eq=(const char *)lua_tostring(L,6);
		const char * var=(const char *)lua_tostring(L,7);
		const char * opt=luatop>7 ? (const char *)lua_tostring(L,8) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglGraph::FitS(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		mglData stack_lret = self->FitS(x, y, z, s, eq, var, opt);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglGraph::FitS(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & s, const char * eq, const char * var, mglData & ini, const char * opt = "")
	static int _bind_FitS_overload_6(lua_State *L) {
		if (!_lg_typecheck_FitS_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglGraph::FitS(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & s, const char * eq, const char * var, mglData & ini, const char * opt = \"\") function, expected prototype:\nmglData mglGraph::FitS(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & s, const char * eq, const char * var, mglData & ini, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\narg 7 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::FitS function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::FitS function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::FitS function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* s_ptr=(Luna< mglDataA >::check(L,5));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in mglGraph::FitS function");
		}
		const mglDataA & s=*s_ptr;
		const char * eq=(const char *)lua_tostring(L,6);
		const char * var=(const char *)lua_tostring(L,7);
		mglData* ini_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,8));
		if( !ini_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ini in mglGraph::FitS function");
		}
		mglData & ini=*ini_ptr;
		const char * opt=luatop>8 ? (const char *)lua_tostring(L,9) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglGraph::FitS(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *, mglData &, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		mglData stack_lret = self->FitS(x, y, z, s, eq, var, ini, opt);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglGraph::FitS(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const mglDataA & s, const char * eq, const char * var, const char * opt = "")
	static int _bind_FitS_overload_7(lua_State *L) {
		if (!_lg_typecheck_FitS_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglGraph::FitS(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const mglDataA & s, const char * eq, const char * var, const char * opt = \"\") function, expected prototype:\nmglData mglGraph::FitS(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const mglDataA & s, const char * eq, const char * var, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\narg 5 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::FitS function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::FitS function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::FitS function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,5));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::FitS function");
		}
		const mglDataA & a=*a_ptr;
		const mglDataA* s_ptr=(Luna< mglDataA >::check(L,6));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in mglGraph::FitS function");
		}
		const mglDataA & s=*s_ptr;
		const char * eq=(const char *)lua_tostring(L,7);
		const char * var=(const char *)lua_tostring(L,8);
		const char * opt=luatop>8 ? (const char *)lua_tostring(L,9) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglGraph::FitS(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		mglData stack_lret = self->FitS(x, y, z, a, s, eq, var, opt);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglGraph::FitS(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const mglDataA & s, const char * eq, const char * var, mglData & ini, const char * opt = "")
	static int _bind_FitS_overload_8(lua_State *L) {
		if (!_lg_typecheck_FitS_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglGraph::FitS(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const mglDataA & s, const char * eq, const char * var, mglData & ini, const char * opt = \"\") function, expected prototype:\nmglData mglGraph::FitS(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const mglDataA & s, const char * eq, const char * var, mglData & ini, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\narg 5 ID = 45413231\narg 8 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::FitS function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::FitS function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::FitS function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,5));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::FitS function");
		}
		const mglDataA & a=*a_ptr;
		const mglDataA* s_ptr=(Luna< mglDataA >::check(L,6));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in mglGraph::FitS function");
		}
		const mglDataA & s=*s_ptr;
		const char * eq=(const char *)lua_tostring(L,7);
		const char * var=(const char *)lua_tostring(L,8);
		mglData* ini_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,9));
		if( !ini_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ini in mglGraph::FitS function");
		}
		mglData & ini=*ini_ptr;
		const char * opt=luatop>9 ? (const char *)lua_tostring(L,10) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglGraph::FitS(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *, mglData &, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		mglData stack_lret = self->FitS(x, y, z, a, s, eq, var, ini, opt);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// Overload binder for mglGraph::FitS
	static int _bind_FitS(lua_State *L) {
		if (_lg_typecheck_FitS_overload_1(L)) return _bind_FitS_overload_1(L);
		if (_lg_typecheck_FitS_overload_2(L)) return _bind_FitS_overload_2(L);
		if (_lg_typecheck_FitS_overload_3(L)) return _bind_FitS_overload_3(L);
		if (_lg_typecheck_FitS_overload_4(L)) return _bind_FitS_overload_4(L);
		if (_lg_typecheck_FitS_overload_5(L)) return _bind_FitS_overload_5(L);
		if (_lg_typecheck_FitS_overload_6(L)) return _bind_FitS_overload_6(L);
		if (_lg_typecheck_FitS_overload_7(L)) return _bind_FitS_overload_7(L);
		if (_lg_typecheck_FitS_overload_8(L)) return _bind_FitS_overload_8(L);

		luaL_error(L, "error in function FitS, cannot match any of the overloads for function FitS:\n  FitS(const mglDataA &, const mglDataA &, const char *, const char *, const char *)\n  FitS(const mglDataA &, const mglDataA &, const char *, const char *, mglData &, const char *)\n  FitS(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *, const char *)\n  FitS(const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *, mglData &, const char *)\n  FitS(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *, const char *)\n  FitS(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *, mglData &, const char *)\n  FitS(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *, const char *)\n  FitS(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *, const char *, mglData &, const char *)\n");
		return 0;
	}

	// void mglGraph::PutsFit(mglPoint p, const char * prefix = 0, const char * font = "", double size = -1)
	static int _bind_PutsFit(lua_State *L) {
		if (!_lg_typecheck_PutsFit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::PutsFit(mglPoint p, const char * prefix = 0, const char * font = \"\", double size = -1) function, expected prototype:\nvoid mglGraph::PutsFit(mglPoint p, const char * prefix = 0, const char * font = \"\", double size = -1)\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		mglPoint* p_ptr=(Luna< mglPoint >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglGraph::PutsFit function");
		}
		mglPoint p=*p_ptr;
		const char * prefix=luatop>2 ? (const char *)lua_tostring(L,3) : 0;
		const char * font=luatop>3 ? (const char *)lua_tostring(L,4) : "";
		double size=luatop>4 ? (double)lua_tonumber(L,5) : -1;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::PutsFit(mglPoint, const char *, const char *, double). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->PutsFit(p, prefix, font, size);

		return 0;
	}

	// const char * mglGraph::GetFit()
	static int _bind_GetFit(lua_State *L) {
		if (!_lg_typecheck_GetFit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * mglGraph::GetFit() function, expected prototype:\nconst char * mglGraph::GetFit()\nClass arguments details:\n");
		}


		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * mglGraph::GetFit(). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		const char * lret = self->GetFit();
		lua_pushstring(L,lret);

		return 1;
	}

	// mglData mglGraph::PDE(const char * ham, const mglDataA & ini_re, const mglDataA & ini_im, double dz = 0.1, double k0 = 100, const char * opt = "")
	static int _bind_PDE(lua_State *L) {
		if (!_lg_typecheck_PDE(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglGraph::PDE(const char * ham, const mglDataA & ini_re, const mglDataA & ini_im, double dz = 0.1, double k0 = 100, const char * opt = \"\") function, expected prototype:\nmglData mglGraph::PDE(const char * ham, const mglDataA & ini_re, const mglDataA & ini_im, double dz = 0.1, double k0 = 100, const char * opt = \"\")\nClass arguments details:\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const char * ham=(const char *)lua_tostring(L,2);
		const mglDataA* ini_re_ptr=(Luna< mglDataA >::check(L,3));
		if( !ini_re_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ini_re in mglGraph::PDE function");
		}
		const mglDataA & ini_re=*ini_re_ptr;
		const mglDataA* ini_im_ptr=(Luna< mglDataA >::check(L,4));
		if( !ini_im_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ini_im in mglGraph::PDE function");
		}
		const mglDataA & ini_im=*ini_im_ptr;
		double dz=luatop>4 ? (double)lua_tonumber(L,5) : 0.1;
		double k0=luatop>5 ? (double)lua_tonumber(L,6) : 100;
		const char * opt=luatop>6 ? (const char *)lua_tostring(L,7) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglGraph::PDE(const char *, const mglDataA &, const mglDataA &, double, double, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		mglData stack_lret = self->PDE(ham, ini_re, ini_im, dz, k0, opt);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// void mglGraph::Fill(mglData & u, const char * eq, const char * opt = "")
	static int _bind_Fill_overload_1(lua_State *L) {
		if (!_lg_typecheck_Fill_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Fill(mglData & u, const char * eq, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Fill(mglData & u, const char * eq, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		mglData* u_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,2));
		if( !u_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg u in mglGraph::Fill function");
		}
		mglData & u=*u_ptr;
		const char * eq=(const char *)lua_tostring(L,3);
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Fill(mglData &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Fill(u, eq, opt);

		return 0;
	}

	// void mglGraph::Fill(mglData & u, const char * eq, const mglDataA & v, const char * opt = "")
	static int _bind_Fill_overload_2(lua_State *L) {
		if (!_lg_typecheck_Fill_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Fill(mglData & u, const char * eq, const mglDataA & v, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Fill(mglData & u, const char * eq, const mglDataA & v, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		mglData* u_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,2));
		if( !u_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg u in mglGraph::Fill function");
		}
		mglData & u=*u_ptr;
		const char * eq=(const char *)lua_tostring(L,3);
		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,4));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::Fill function");
		}
		const mglDataA & v=*v_ptr;
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Fill(mglData &, const char *, const mglDataA &, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Fill(u, eq, v, opt);

		return 0;
	}

	// void mglGraph::Fill(mglData & u, const char * eq, const mglDataA & v, const mglDataA & w, const char * opt = "")
	static int _bind_Fill_overload_3(lua_State *L) {
		if (!_lg_typecheck_Fill_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Fill(mglData & u, const char * eq, const mglDataA & v, const mglDataA & w, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Fill(mglData & u, const char * eq, const mglDataA & v, const mglDataA & w, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		mglData* u_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,2));
		if( !u_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg u in mglGraph::Fill function");
		}
		mglData & u=*u_ptr;
		const char * eq=(const char *)lua_tostring(L,3);
		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,4));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::Fill function");
		}
		const mglDataA & v=*v_ptr;
		const mglDataA* w_ptr=(Luna< mglDataA >::check(L,5));
		if( !w_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg w in mglGraph::Fill function");
		}
		const mglDataA & w=*w_ptr;
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Fill(mglData &, const char *, const mglDataA &, const mglDataA &, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Fill(u, eq, v, w, opt);

		return 0;
	}

	// void mglGraph::Fill(mglDataC & u, const char * eq, const char * opt = "")
	static int _bind_Fill_overload_4(lua_State *L) {
		if (!_lg_typecheck_Fill_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Fill(mglDataC & u, const char * eq, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Fill(mglDataC & u, const char * eq, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		mglDataC* u_ptr=(Luna< mglDataA >::checkSubType< mglDataC >(L,2));
		if( !u_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg u in mglGraph::Fill function");
		}
		mglDataC & u=*u_ptr;
		const char * eq=(const char *)lua_tostring(L,3);
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Fill(mglDataC &, const char *, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Fill(u, eq, opt);

		return 0;
	}

	// void mglGraph::Fill(mglDataC & u, const char * eq, const mglDataA & v, const char * opt = "")
	static int _bind_Fill_overload_5(lua_State *L) {
		if (!_lg_typecheck_Fill_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Fill(mglDataC & u, const char * eq, const mglDataA & v, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Fill(mglDataC & u, const char * eq, const mglDataA & v, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		mglDataC* u_ptr=(Luna< mglDataA >::checkSubType< mglDataC >(L,2));
		if( !u_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg u in mglGraph::Fill function");
		}
		mglDataC & u=*u_ptr;
		const char * eq=(const char *)lua_tostring(L,3);
		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,4));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::Fill function");
		}
		const mglDataA & v=*v_ptr;
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Fill(mglDataC &, const char *, const mglDataA &, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Fill(u, eq, v, opt);

		return 0;
	}

	// void mglGraph::Fill(mglDataC & u, const char * eq, const mglDataA & v, const mglDataA & w, const char * opt = "")
	static int _bind_Fill_overload_6(lua_State *L) {
		if (!_lg_typecheck_Fill_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Fill(mglDataC & u, const char * eq, const mglDataA & v, const mglDataA & w, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::Fill(mglDataC & u, const char * eq, const mglDataA & v, const mglDataA & w, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		mglDataC* u_ptr=(Luna< mglDataA >::checkSubType< mglDataC >(L,2));
		if( !u_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg u in mglGraph::Fill function");
		}
		mglDataC & u=*u_ptr;
		const char * eq=(const char *)lua_tostring(L,3);
		const mglDataA* v_ptr=(Luna< mglDataA >::check(L,4));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglGraph::Fill function");
		}
		const mglDataA & v=*v_ptr;
		const mglDataA* w_ptr=(Luna< mglDataA >::check(L,5));
		if( !w_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg w in mglGraph::Fill function");
		}
		const mglDataA & w=*w_ptr;
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Fill(mglDataC &, const char *, const mglDataA &, const mglDataA &, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Fill(u, eq, v, w, opt);

		return 0;
	}

	// Overload binder for mglGraph::Fill
	static int _bind_Fill(lua_State *L) {
		if (_lg_typecheck_Fill_overload_1(L)) return _bind_Fill_overload_1(L);
		if (_lg_typecheck_Fill_overload_2(L)) return _bind_Fill_overload_2(L);
		if (_lg_typecheck_Fill_overload_3(L)) return _bind_Fill_overload_3(L);
		if (_lg_typecheck_Fill_overload_4(L)) return _bind_Fill_overload_4(L);
		if (_lg_typecheck_Fill_overload_5(L)) return _bind_Fill_overload_5(L);
		if (_lg_typecheck_Fill_overload_6(L)) return _bind_Fill_overload_6(L);

		luaL_error(L, "error in function Fill, cannot match any of the overloads for function Fill:\n  Fill(mglData &, const char *, const char *)\n  Fill(mglData &, const char *, const mglDataA &, const char *)\n  Fill(mglData &, const char *, const mglDataA &, const mglDataA &, const char *)\n  Fill(mglDataC &, const char *, const char *)\n  Fill(mglDataC &, const char *, const mglDataA &, const char *)\n  Fill(mglDataC &, const char *, const mglDataA &, const mglDataA &, const char *)\n");
		return 0;
	}

	// void mglGraph::DataGrid(mglData & d, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * opt = "")
	static int _bind_DataGrid(lua_State *L) {
		if (!_lg_typecheck_DataGrid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::DataGrid(mglData & d, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * opt = \"\") function, expected prototype:\nvoid mglGraph::DataGrid(mglData & d, const mglDataA & x, const mglDataA & y, const mglDataA & z, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		mglData* d_ptr=(Luna< mglDataA >::checkSubType< mglData >(L,2));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglGraph::DataGrid function");
		}
		mglData & d=*d_ptr;
		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,3));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::DataGrid function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,4));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::DataGrid function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,5));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::DataGrid function");
		}
		const mglDataA & z=*z_ptr;
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::DataGrid(mglData &, const mglDataA &, const mglDataA &, const mglDataA &, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->DataGrid(d, x, y, z, opt);

		return 0;
	}

	// mglData mglGraph::Hist(const mglDataA & x, const mglDataA & a, const char * opt = "")
	static int _bind_Hist_overload_1(lua_State *L) {
		if (!_lg_typecheck_Hist_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglGraph::Hist(const mglDataA & x, const mglDataA & a, const char * opt = \"\") function, expected prototype:\nmglData mglGraph::Hist(const mglDataA & x, const mglDataA & a, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Hist function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,3));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Hist function");
		}
		const mglDataA & a=*a_ptr;
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglGraph::Hist(const mglDataA &, const mglDataA &, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		mglData stack_lret = self->Hist(x, a, opt);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglGraph::Hist(const mglDataA & x, const mglDataA & y, const mglDataA & a, const char * opt = "")
	static int _bind_Hist_overload_2(lua_State *L) {
		if (!_lg_typecheck_Hist_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglGraph::Hist(const mglDataA & x, const mglDataA & y, const mglDataA & a, const char * opt = \"\") function, expected prototype:\nmglData mglGraph::Hist(const mglDataA & x, const mglDataA & y, const mglDataA & a, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Hist function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Hist function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,4));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Hist function");
		}
		const mglDataA & a=*a_ptr;
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglGraph::Hist(const mglDataA &, const mglDataA &, const mglDataA &, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		mglData stack_lret = self->Hist(x, y, a, opt);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglData mglGraph::Hist(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * opt = "")
	static int _bind_Hist_overload_3(lua_State *L) {
		if (!_lg_typecheck_Hist_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglGraph::Hist(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * opt = \"\") function, expected prototype:\nmglData mglGraph::Hist(const mglDataA & x, const mglDataA & y, const mglDataA & z, const mglDataA & a, const char * opt = \"\")\nClass arguments details:\narg 1 ID = 45413231\narg 2 ID = 45413231\narg 3 ID = 45413231\narg 4 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* x_ptr=(Luna< mglDataA >::check(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglGraph::Hist function");
		}
		const mglDataA & x=*x_ptr;
		const mglDataA* y_ptr=(Luna< mglDataA >::check(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglGraph::Hist function");
		}
		const mglDataA & y=*y_ptr;
		const mglDataA* z_ptr=(Luna< mglDataA >::check(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglGraph::Hist function");
		}
		const mglDataA & z=*z_ptr;
		const mglDataA* a_ptr=(Luna< mglDataA >::check(L,5));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGraph::Hist function");
		}
		const mglDataA & a=*a_ptr;
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : "";

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglGraph::Hist(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		mglData stack_lret = self->Hist(x, y, z, a, opt);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// Overload binder for mglGraph::Hist
	static int _bind_Hist(lua_State *L) {
		if (_lg_typecheck_Hist_overload_1(L)) return _bind_Hist_overload_1(L);
		if (_lg_typecheck_Hist_overload_2(L)) return _bind_Hist_overload_2(L);
		if (_lg_typecheck_Hist_overload_3(L)) return _bind_Hist_overload_3(L);

		luaL_error(L, "error in function Hist, cannot match any of the overloads for function Hist:\n  Hist(const mglDataA &, const mglDataA &, const char *)\n  Hist(const mglDataA &, const mglDataA &, const mglDataA &, const char *)\n  Hist(const mglDataA &, const mglDataA &, const mglDataA &, const mglDataA &, const char *)\n");
		return 0;
	}

	// void mglGraph::Compression(bool arg1)
	static int _bind_Compression(lua_State *L) {
		if (!_lg_typecheck_Compression(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::Compression(bool arg1) function, expected prototype:\nvoid mglGraph::Compression(bool arg1)\nClass arguments details:\n");
		}

		bool _arg1=(bool)(lua_toboolean(L,2)==1);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::Compression(bool). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->Compression(_arg1);

		return 0;
	}

	// void mglGraph::VertexColor(bool enable)
	static int _bind_VertexColor(lua_State *L) {
		if (!_lg_typecheck_VertexColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::VertexColor(bool enable) function, expected prototype:\nvoid mglGraph::VertexColor(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::VertexColor(bool). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->VertexColor(enable);

		return 0;
	}

	// void mglGraph::DoubleSided(bool enable)
	static int _bind_DoubleSided(lua_State *L) {
		if (!_lg_typecheck_DoubleSided(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::DoubleSided(bool enable) function, expected prototype:\nvoid mglGraph::DoubleSided(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::DoubleSided(bool). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->DoubleSided(enable);

		return 0;
	}

	// void mglGraph::TextureColor(bool arg1)
	static int _bind_TextureColor(lua_State *L) {
		if (!_lg_typecheck_TextureColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::TextureColor(bool arg1) function, expected prototype:\nvoid mglGraph::TextureColor(bool arg1)\nClass arguments details:\n");
		}

		bool _arg1=(bool)(lua_toboolean(L,2)==1);

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::TextureColor(bool). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->TextureColor(_arg1);

		return 0;
	}

	// osg::Image * mglGraph::asImage(mglGraph * gr)
	static int _bind_asImage(lua_State *L) {
		if (!_lg_typecheck_asImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Image * mglGraph::asImage(mglGraph * gr) function, expected prototype:\nosg::Image * mglGraph::asImage(mglGraph * gr)\nClass arguments details:\narg 1 ID = 48672486\n");
		}

		mglGraph* gr=(Luna< mglGraph >::check(L,1));

		osg::Image * lret = asImage(gr);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// void mglGraph::base_SetFontSizePT(double pt, int dpi = 72)
	static int _bind_base_SetFontSizePT(lua_State *L) {
		if (!_lg_typecheck_base_SetFontSizePT(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGraph::base_SetFontSizePT(double pt, int dpi = 72) function, expected prototype:\nvoid mglGraph::base_SetFontSizePT(double pt, int dpi = 72)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double pt=(double)lua_tonumber(L,2);
		int dpi=luatop>2 ? (int)lua_tointeger(L,3) : 72;

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGraph::base_SetFontSizePT(double, int). Got : '%s'",typeid(Luna< mglGraph >::check(L,1)).name());
		}
		self->mglGraph::SetFontSizePT(pt, dpi);

		return 0;
	}


	// Operator binds:

};

mglGraph* LunaTraits< mglGraph >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglGraph::_bind_ctor(L);
}

void LunaTraits< mglGraph >::_bind_dtor(mglGraph* obj) {
	delete obj;
}

const char LunaTraits< mglGraph >::className[] = "mglGraph";
const char LunaTraits< mglGraph >::fullName[] = "mglGraph";
const char LunaTraits< mglGraph >::moduleName[] = "mathgl";
const char* LunaTraits< mglGraph >::parents[] = {0};
const int LunaTraits< mglGraph >::hash = 48672486;
const int LunaTraits< mglGraph >::uniqueIDs[] = {48672486,0};

luna_RegType LunaTraits< mglGraph >::methods[] = {
	{"Self", &luna_wrapper_mglGraph::_bind_Self},
	{"DefaultPlotParam", &luna_wrapper_mglGraph::_bind_DefaultPlotParam},
	{"SetPlotId", &luna_wrapper_mglGraph::_bind_SetPlotId},
	{"Alpha", &luna_wrapper_mglGraph::_bind_Alpha},
	{"SetAlphaDef", &luna_wrapper_mglGraph::_bind_SetAlphaDef},
	{"SetTranspType", &luna_wrapper_mglGraph::_bind_SetTranspType},
	{"Light", &luna_wrapper_mglGraph::_bind_Light},
	{"SetDifLight", &luna_wrapper_mglGraph::_bind_SetDifLight},
	{"AddLight", &luna_wrapper_mglGraph::_bind_AddLight},
	{"SetAmbient", &luna_wrapper_mglGraph::_bind_SetAmbient},
	{"Fog", &luna_wrapper_mglGraph::_bind_Fog},
	{"SetBarWidth", &luna_wrapper_mglGraph::_bind_SetBarWidth},
	{"SetMarkSize", &luna_wrapper_mglGraph::_bind_SetMarkSize},
	{"SetArrowSize", &luna_wrapper_mglGraph::_bind_SetArrowSize},
	{"SetMeshNum", &luna_wrapper_mglGraph::_bind_SetMeshNum},
	{"SetFaceNum", &luna_wrapper_mglGraph::_bind_SetFaceNum},
	{"SetCut", &luna_wrapper_mglGraph::_bind_SetCut},
	{"SetCutBox", &luna_wrapper_mglGraph::_bind_SetCutBox},
	{"CutOff", &luna_wrapper_mglGraph::_bind_CutOff},
	{"SetFontSize", &luna_wrapper_mglGraph::_bind_SetFontSize},
	{"SetFontDef", &luna_wrapper_mglGraph::_bind_SetFontDef},
	{"SetFontSizePT", &luna_wrapper_mglGraph::_bind_SetFontSizePT},
	{"SetFontSizeCM", &luna_wrapper_mglGraph::_bind_SetFontSizeCM},
	{"SetFontSizeIN", &luna_wrapper_mglGraph::_bind_SetFontSizeIN},
	{"LoadFont", &luna_wrapper_mglGraph::_bind_LoadFont},
	{"CopyFont", &luna_wrapper_mglGraph::_bind_CopyFont},
	{"RestoreFont", &luna_wrapper_mglGraph::_bind_RestoreFont},
	{"SetRotatedText", &luna_wrapper_mglGraph::_bind_SetRotatedText},
	{"SetPalette", &luna_wrapper_mglGraph::_bind_SetPalette},
	{"SetDefScheme", &luna_wrapper_mglGraph::_bind_SetDefScheme},
	{"GetWarn", &luna_wrapper_mglGraph::_bind_GetWarn},
	{"SetWarn", &luna_wrapper_mglGraph::_bind_SetWarn},
	{"Message", &luna_wrapper_mglGraph::_bind_Message},
	{"ZoomAxis", &luna_wrapper_mglGraph::_bind_ZoomAxis},
	{"SetRange", &luna_wrapper_mglGraph::_bind_SetRange},
	{"SetRanges", &luna_wrapper_mglGraph::_bind_SetRanges},
	{"SetOrigin", &luna_wrapper_mglGraph::_bind_SetOrigin},
	{"SetFunc", &luna_wrapper_mglGraph::_bind_SetFunc},
	{"SetCoor", &luna_wrapper_mglGraph::_bind_SetCoor},
	{"Ternary", &luna_wrapper_mglGraph::_bind_Ternary},
	{"SetTickRotate", &luna_wrapper_mglGraph::_bind_SetTickRotate},
	{"SetTickSkip", &luna_wrapper_mglGraph::_bind_SetTickSkip},
	{"SetTickLen", &luna_wrapper_mglGraph::_bind_SetTickLen},
	{"SetAxisStl", &luna_wrapper_mglGraph::_bind_SetAxisStl},
	{"SetTicksTime", &luna_wrapper_mglGraph::_bind_SetTicksTime},
	{"SetTicksVal", &luna_wrapper_mglGraph::_bind_SetTicksVal},
	{"SetTicks", &luna_wrapper_mglGraph::_bind_SetTicks},
	{"Adjust", &luna_wrapper_mglGraph::_bind_Adjust},
	{"SetTickTempl", &luna_wrapper_mglGraph::_bind_SetTickTempl},
	{"SetTuneTicks", &luna_wrapper_mglGraph::_bind_SetTuneTicks},
	{"SetTickShift", &luna_wrapper_mglGraph::_bind_SetTickShift},
	{"SetTimeUTC", &luna_wrapper_mglGraph::_bind_SetTimeUTC},
	{"SubPlot", &luna_wrapper_mglGraph::_bind_SubPlot},
	{"MultiPlot", &luna_wrapper_mglGraph::_bind_MultiPlot},
	{"InPlot", &luna_wrapper_mglGraph::_bind_InPlot},
	{"ColumnPlot", &luna_wrapper_mglGraph::_bind_ColumnPlot},
	{"GridPlot", &luna_wrapper_mglGraph::_bind_GridPlot},
	{"StickPlot", &luna_wrapper_mglGraph::_bind_StickPlot},
	{"SetPlotFactor", &luna_wrapper_mglGraph::_bind_SetPlotFactor},
	{"Push", &luna_wrapper_mglGraph::_bind_Push},
	{"Pop", &luna_wrapper_mglGraph::_bind_Pop},
	{"Title", &luna_wrapper_mglGraph::_bind_Title},
	{"Aspect", &luna_wrapper_mglGraph::_bind_Aspect},
	{"Rotate", &luna_wrapper_mglGraph::_bind_Rotate},
	{"RotateN", &luna_wrapper_mglGraph::_bind_RotateN},
	{"Perspective", &luna_wrapper_mglGraph::_bind_Perspective},
	{"View", &luna_wrapper_mglGraph::_bind_View},
	{"Zoom", &luna_wrapper_mglGraph::_bind_Zoom},
	{"SetSize", &luna_wrapper_mglGraph::_bind_SetSize},
	{"SetQuality", &luna_wrapper_mglGraph::_bind_SetQuality},
	{"StartGroup", &luna_wrapper_mglGraph::_bind_StartGroup},
	{"EndGroup", &luna_wrapper_mglGraph::_bind_EndGroup},
	{"Highlight", &luna_wrapper_mglGraph::_bind_Highlight},
	{"ShowImage", &luna_wrapper_mglGraph::_bind_ShowImage},
	{"WriteFrame", &luna_wrapper_mglGraph::_bind_WriteFrame},
	{"WriteJPEG", &luna_wrapper_mglGraph::_bind_WriteJPEG},
	{"WritePNG", &luna_wrapper_mglGraph::_bind_WritePNG},
	{"WriteBMP", &luna_wrapper_mglGraph::_bind_WriteBMP},
	{"WriteTGA", &luna_wrapper_mglGraph::_bind_WriteTGA},
	{"WriteEPS", &luna_wrapper_mglGraph::_bind_WriteEPS},
	{"WriteTEX", &luna_wrapper_mglGraph::_bind_WriteTEX},
	{"WriteBPS", &luna_wrapper_mglGraph::_bind_WriteBPS},
	{"WriteSVG", &luna_wrapper_mglGraph::_bind_WriteSVG},
	{"WriteGIF", &luna_wrapper_mglGraph::_bind_WriteGIF},
	{"WriteOBJ", &luna_wrapper_mglGraph::_bind_WriteOBJ},
	{"WriteXYZ", &luna_wrapper_mglGraph::_bind_WriteXYZ},
	{"WriteSTL", &luna_wrapper_mglGraph::_bind_WriteSTL},
	{"WriteOFF", &luna_wrapper_mglGraph::_bind_WriteOFF},
	{"WritePRC", &luna_wrapper_mglGraph::_bind_WritePRC},
	{"WriteJSON", &luna_wrapper_mglGraph::_bind_WriteJSON},
	{"Finish", &luna_wrapper_mglGraph::_bind_Finish},
	{"NewFrame", &luna_wrapper_mglGraph::_bind_NewFrame},
	{"EndFrame", &luna_wrapper_mglGraph::_bind_EndFrame},
	{"GetNumFrame", &luna_wrapper_mglGraph::_bind_GetNumFrame},
	{"ResetFrames", &luna_wrapper_mglGraph::_bind_ResetFrames},
	{"DelFrame", &luna_wrapper_mglGraph::_bind_DelFrame},
	{"GetFrame", &luna_wrapper_mglGraph::_bind_GetFrame},
	{"SetFrame", &luna_wrapper_mglGraph::_bind_SetFrame},
	{"ShowFrame", &luna_wrapper_mglGraph::_bind_ShowFrame},
	{"StartGIF", &luna_wrapper_mglGraph::_bind_StartGIF},
	{"CloseGIF", &luna_wrapper_mglGraph::_bind_CloseGIF},
	{"ExportMGLD", &luna_wrapper_mglGraph::_bind_ExportMGLD},
	{"ImportMGLD", &luna_wrapper_mglGraph::_bind_ImportMGLD},
	{"GetRGB", &luna_wrapper_mglGraph::_bind_GetRGB},
	{"GetRGBA", &luna_wrapper_mglGraph::_bind_GetRGBA},
	{"GetBGRN", &luna_wrapper_mglGraph::_bind_GetBGRN},
	{"GetWidth", &luna_wrapper_mglGraph::_bind_GetWidth},
	{"GetHeight", &luna_wrapper_mglGraph::_bind_GetHeight},
	{"CalcXYZ", &luna_wrapper_mglGraph::_bind_CalcXYZ},
	{"CalcScr", &luna_wrapper_mglGraph::_bind_CalcScr},
	{"SetObjId", &luna_wrapper_mglGraph::_bind_SetObjId},
	{"GetObjId", &luna_wrapper_mglGraph::_bind_GetObjId},
	{"GetSplId", &luna_wrapper_mglGraph::_bind_GetSplId},
	{"IsActive", &luna_wrapper_mglGraph::_bind_IsActive},
	{"Combine", &luna_wrapper_mglGraph::_bind_Combine},
	{"MPI_Send", &luna_wrapper_mglGraph::_bind_MPI_Send},
	{"MPI_Recv", &luna_wrapper_mglGraph::_bind_MPI_Recv},
	{"Clf", &luna_wrapper_mglGraph::_bind_Clf},
	{"ClearUnused", &luna_wrapper_mglGraph::_bind_ClearUnused},
	{"Ball", &luna_wrapper_mglGraph::_bind_Ball},
	{"Mark", &luna_wrapper_mglGraph::_bind_Mark},
	{"Line", &luna_wrapper_mglGraph::_bind_Line},
	{"Curve", &luna_wrapper_mglGraph::_bind_Curve},
	{"Error", &luna_wrapper_mglGraph::_bind_Error},
	{"Face", &luna_wrapper_mglGraph::_bind_Face},
	{"FaceX", &luna_wrapper_mglGraph::_bind_FaceX},
	{"FaceY", &luna_wrapper_mglGraph::_bind_FaceY},
	{"FaceZ", &luna_wrapper_mglGraph::_bind_FaceZ},
	{"Drop", &luna_wrapper_mglGraph::_bind_Drop},
	{"Sphere", &luna_wrapper_mglGraph::_bind_Sphere},
	{"Ellipse", &luna_wrapper_mglGraph::_bind_Ellipse},
	{"Circle", &luna_wrapper_mglGraph::_bind_Circle},
	{"Rhomb", &luna_wrapper_mglGraph::_bind_Rhomb},
	{"Puts", &luna_wrapper_mglGraph::_bind_Puts},
	{"Text", &luna_wrapper_mglGraph::_bind_Text},
	{"Box", &luna_wrapper_mglGraph::_bind_Box},
	{"Axis", &luna_wrapper_mglGraph::_bind_Axis},
	{"Grid", &luna_wrapper_mglGraph::_bind_Grid},
	{"Label", &luna_wrapper_mglGraph::_bind_Label},
	{"Colorbar", &luna_wrapper_mglGraph::_bind_Colorbar},
	{"AddLegend", &luna_wrapper_mglGraph::_bind_AddLegend},
	{"ClearLegend", &luna_wrapper_mglGraph::_bind_ClearLegend},
	{"Legend", &luna_wrapper_mglGraph::_bind_Legend},
	{"SetLegendMarks", &luna_wrapper_mglGraph::_bind_SetLegendMarks},
	{"Plot", &luna_wrapper_mglGraph::_bind_Plot},
	{"Tape", &luna_wrapper_mglGraph::_bind_Tape},
	{"Radar", &luna_wrapper_mglGraph::_bind_Radar},
	{"Step", &luna_wrapper_mglGraph::_bind_Step},
	{"Tens", &luna_wrapper_mglGraph::_bind_Tens},
	{"Area", &luna_wrapper_mglGraph::_bind_Area},
	{"Region", &luna_wrapper_mglGraph::_bind_Region},
	{"Stem", &luna_wrapper_mglGraph::_bind_Stem},
	{"Bars", &luna_wrapper_mglGraph::_bind_Bars},
	{"Barh", &luna_wrapper_mglGraph::_bind_Barh},
	{"Chart", &luna_wrapper_mglGraph::_bind_Chart},
	{"BoxPlot", &luna_wrapper_mglGraph::_bind_BoxPlot},
	{"Candle", &luna_wrapper_mglGraph::_bind_Candle},
	{"TextMark", &luna_wrapper_mglGraph::_bind_TextMark},
	{"Table", &luna_wrapper_mglGraph::_bind_Table},
	{"Tube", &luna_wrapper_mglGraph::_bind_Tube},
	{"Torus", &luna_wrapper_mglGraph::_bind_Torus},
	{"Mesh", &luna_wrapper_mglGraph::_bind_Mesh},
	{"Fall", &luna_wrapper_mglGraph::_bind_Fall},
	{"Belt", &luna_wrapper_mglGraph::_bind_Belt},
	{"Surf", &luna_wrapper_mglGraph::_bind_Surf},
	{"Tile", &luna_wrapper_mglGraph::_bind_Tile},
	{"Dens", &luna_wrapper_mglGraph::_bind_Dens},
	{"Boxs", &luna_wrapper_mglGraph::_bind_Boxs},
	{"Cont", &luna_wrapper_mglGraph::_bind_Cont},
	{"ContF", &luna_wrapper_mglGraph::_bind_ContF},
	{"ContD", &luna_wrapper_mglGraph::_bind_ContD},
	{"ContV", &luna_wrapper_mglGraph::_bind_ContV},
	{"Axial", &luna_wrapper_mglGraph::_bind_Axial},
	{"Grid3", &luna_wrapper_mglGraph::_bind_Grid3},
	{"Dens3", &luna_wrapper_mglGraph::_bind_Dens3},
	{"Surf3", &luna_wrapper_mglGraph::_bind_Surf3},
	{"Cloud", &luna_wrapper_mglGraph::_bind_Cloud},
	{"Cont3", &luna_wrapper_mglGraph::_bind_Cont3},
	{"ContF3", &luna_wrapper_mglGraph::_bind_ContF3},
	{"Beam", &luna_wrapper_mglGraph::_bind_Beam},
	{"TileS", &luna_wrapper_mglGraph::_bind_TileS},
	{"SurfC", &luna_wrapper_mglGraph::_bind_SurfC},
	{"SurfA", &luna_wrapper_mglGraph::_bind_SurfA},
	{"Map", &luna_wrapper_mglGraph::_bind_Map},
	{"STFA", &luna_wrapper_mglGraph::_bind_STFA},
	{"Surf3A", &luna_wrapper_mglGraph::_bind_Surf3A},
	{"Surf3C", &luna_wrapper_mglGraph::_bind_Surf3C},
	{"Dew", &luna_wrapper_mglGraph::_bind_Dew},
	{"Traj", &luna_wrapper_mglGraph::_bind_Traj},
	{"Vect", &luna_wrapper_mglGraph::_bind_Vect},
	{"Vect3", &luna_wrapper_mglGraph::_bind_Vect3},
	{"Flow", &luna_wrapper_mglGraph::_bind_Flow},
	{"FlowP", &luna_wrapper_mglGraph::_bind_FlowP},
	{"Grad", &luna_wrapper_mglGraph::_bind_Grad},
	{"Pipe", &luna_wrapper_mglGraph::_bind_Pipe},
	{"DensX", &luna_wrapper_mglGraph::_bind_DensX},
	{"DensY", &luna_wrapper_mglGraph::_bind_DensY},
	{"DensZ", &luna_wrapper_mglGraph::_bind_DensZ},
	{"ContX", &luna_wrapper_mglGraph::_bind_ContX},
	{"ContY", &luna_wrapper_mglGraph::_bind_ContY},
	{"ContZ", &luna_wrapper_mglGraph::_bind_ContZ},
	{"ContFX", &luna_wrapper_mglGraph::_bind_ContFX},
	{"ContFY", &luna_wrapper_mglGraph::_bind_ContFY},
	{"ContFZ", &luna_wrapper_mglGraph::_bind_ContFZ},
	{"FPlot", &luna_wrapper_mglGraph::_bind_FPlot},
	{"FSurf", &luna_wrapper_mglGraph::_bind_FSurf},
	{"TriPlot", &luna_wrapper_mglGraph::_bind_TriPlot},
	{"QuadPlot", &luna_wrapper_mglGraph::_bind_QuadPlot},
	{"TriCont", &luna_wrapper_mglGraph::_bind_TriCont},
	{"TriContV", &luna_wrapper_mglGraph::_bind_TriContV},
	{"Dots", &luna_wrapper_mglGraph::_bind_Dots},
	{"Crust", &luna_wrapper_mglGraph::_bind_Crust},
	{"Fit", &luna_wrapper_mglGraph::_bind_Fit},
	{"Fit2", &luna_wrapper_mglGraph::_bind_Fit2},
	{"Fit3", &luna_wrapper_mglGraph::_bind_Fit3},
	{"FitS", &luna_wrapper_mglGraph::_bind_FitS},
	{"PutsFit", &luna_wrapper_mglGraph::_bind_PutsFit},
	{"GetFit", &luna_wrapper_mglGraph::_bind_GetFit},
	{"PDE", &luna_wrapper_mglGraph::_bind_PDE},
	{"Fill", &luna_wrapper_mglGraph::_bind_Fill},
	{"DataGrid", &luna_wrapper_mglGraph::_bind_DataGrid},
	{"Hist", &luna_wrapper_mglGraph::_bind_Hist},
	{"Compression", &luna_wrapper_mglGraph::_bind_Compression},
	{"VertexColor", &luna_wrapper_mglGraph::_bind_VertexColor},
	{"DoubleSided", &luna_wrapper_mglGraph::_bind_DoubleSided},
	{"TextureColor", &luna_wrapper_mglGraph::_bind_TextureColor},
	{"asImage", &luna_wrapper_mglGraph::_bind_asImage},
	{"base_SetFontSizePT", &luna_wrapper_mglGraph::_bind_base_SetFontSizePT},
	{"dynCast", &luna_wrapper_mglGraph::_bind_dynCast},
	{"__eq", &luna_wrapper_mglGraph::_bind___eq},
	{"fromVoid", &luna_wrapper_mglGraph::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglGraph::_bind_asVoid},
	{"getTable", &luna_wrapper_mglGraph::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< mglGraph >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglGraph >::enumValues[] = {
	{0,0}
};


