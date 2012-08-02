#include <plug_common.h>

class luna_wrapper_wxTextWrapper {
public:
	typedef Luna< wxTextWrapper > luna_t;

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

		wxTextWrapper* self=(Luna< wxTextWrapper >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTextWrapper");
		
		return luna_dynamicCast(L,converters,"wxTextWrapper",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_Wrap(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void wxTextWrapper::Wrap(wxWindow * win, const wxString & text, int widthMax)
	static int _bind_Wrap(lua_State *L) {
		if (!_lg_typecheck_Wrap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextWrapper::Wrap(wxWindow * win, const wxString & text, int widthMax) function, expected prototype:\nvoid wxTextWrapper::Wrap(wxWindow * win, const wxString & text, int widthMax)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n");
		}

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		int widthMax=(int)lua_tointeger(L,4);

		wxTextWrapper* self=(Luna< wxTextWrapper >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextWrapper::Wrap(wxWindow *, const wxString &, int)");
		}
		self->Wrap(win, text, widthMax);

		return 0;
	}


	// Operator binds:

};

wxTextWrapper* LunaTraits< wxTextWrapper >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxTextWrapper::OnOutputLine(const wxString & line)

	// Abstract operators:
}

void LunaTraits< wxTextWrapper >::_bind_dtor(wxTextWrapper* obj) {
	delete obj;
}

const char LunaTraits< wxTextWrapper >::className[] = "wxTextWrapper";
const char LunaTraits< wxTextWrapper >::fullName[] = "wxTextWrapper";
const char LunaTraits< wxTextWrapper >::moduleName[] = "wx";
const char* LunaTraits< wxTextWrapper >::parents[] = {0};
const int LunaTraits< wxTextWrapper >::hash = 4477471;
const int LunaTraits< wxTextWrapper >::uniqueIDs[] = {4477471,0};

luna_RegType LunaTraits< wxTextWrapper >::methods[] = {
	{"Wrap", &luna_wrapper_wxTextWrapper::_bind_Wrap},
	{"dynCast", &luna_wrapper_wxTextWrapper::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxTextWrapper >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTextWrapper >::enumValues[] = {
	{0,0}
};


