#include <plug_common.h>

class luna_wrapper_wxStatusBarPane {
public:
	typedef Luna< wxStatusBarPane > luna_t;

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

		wxStatusBarPane* self=(Luna< wxStatusBarPane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxStatusBarPane");
		
		return luna_dynamicCast(L,converters,"wxStatusBarPane",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxStatusBarPane::wxStatusBarPane(int style = 0x0000, size_t width = 0)
	static wxStatusBarPane* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStatusBarPane::wxStatusBarPane(int style = 0x0000, size_t width = 0) function, expected prototype:\nwxStatusBarPane::wxStatusBarPane(int style = 0x0000, size_t width = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int style=luatop>0 ? (int)lua_tointeger(L,1) : 0x0000;
		size_t width=luatop>1 ? (size_t)lua_tointeger(L,2) : 0;

		return new wxStatusBarPane(style, width);
	}


	// Function binds:
	// int wxStatusBarPane::GetWidth() const
	static int _bind_GetWidth(lua_State *L) {
		if (!_lg_typecheck_GetWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStatusBarPane::GetWidth() const function, expected prototype:\nint wxStatusBarPane::GetWidth() const\nClass arguments details:\n");
		}


		wxStatusBarPane* self=(Luna< wxStatusBarPane >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStatusBarPane::GetWidth() const");
		}
		int lret = self->GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStatusBarPane::GetStyle() const
	static int _bind_GetStyle(lua_State *L) {
		if (!_lg_typecheck_GetStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStatusBarPane::GetStyle() const function, expected prototype:\nint wxStatusBarPane::GetStyle() const\nClass arguments details:\n");
		}


		wxStatusBarPane* self=(Luna< wxStatusBarPane >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStatusBarPane::GetStyle() const");
		}
		int lret = self->GetStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxStatusBarPane::GetText() const
	static int _bind_GetText(lua_State *L) {
		if (!_lg_typecheck_GetText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStatusBarPane::GetText() const function, expected prototype:\nwxString wxStatusBarPane::GetText() const\nClass arguments details:\n");
		}


		wxStatusBarPane* self=(Luna< wxStatusBarPane >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStatusBarPane::GetText() const");
		}
		wxString lret = self->GetText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxStatusBarPane* LunaTraits< wxStatusBarPane >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxStatusBarPane::_bind_ctor(L);
}

void LunaTraits< wxStatusBarPane >::_bind_dtor(wxStatusBarPane* obj) {
	delete obj;
}

const char LunaTraits< wxStatusBarPane >::className[] = "wxStatusBarPane";
const char LunaTraits< wxStatusBarPane >::fullName[] = "wxStatusBarPane";
const char LunaTraits< wxStatusBarPane >::moduleName[] = "wx";
const char* LunaTraits< wxStatusBarPane >::parents[] = {0};
const int LunaTraits< wxStatusBarPane >::hash = 24000996;
const int LunaTraits< wxStatusBarPane >::uniqueIDs[] = {24000996,0};

luna_RegType LunaTraits< wxStatusBarPane >::methods[] = {
	{"GetWidth", &luna_wrapper_wxStatusBarPane::_bind_GetWidth},
	{"GetStyle", &luna_wrapper_wxStatusBarPane::_bind_GetStyle},
	{"GetText", &luna_wrapper_wxStatusBarPane::_bind_GetText},
	{"dynCast", &luna_wrapper_wxStatusBarPane::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxStatusBarPane >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxStatusBarPane >::enumValues[] = {
	{0,0}
};

