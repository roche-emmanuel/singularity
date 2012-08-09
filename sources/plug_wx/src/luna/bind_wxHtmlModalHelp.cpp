#include <plug_common.h>

class luna_wrapper_wxHtmlModalHelp {
public:
	typedef Luna< wxHtmlModalHelp > luna_t;

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

		wxHtmlModalHelp* self=(Luna< wxHtmlModalHelp >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxHtmlModalHelp");
		
		return luna_dynamicCast(L,converters,"wxHtmlModalHelp",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHtmlModalHelp::wxHtmlModalHelp(wxWindow * parent, const wxString & helpFile, const wxString & topic = wxEmptyString, int style = wxHF_DEFAULT_STYLE|wxHF_DIALOG|wxHF_MODAL)
	static wxHtmlModalHelp* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlModalHelp::wxHtmlModalHelp(wxWindow * parent, const wxString & helpFile, const wxString & topic = wxEmptyString, int style = wxHF_DEFAULT_STYLE|wxHF_DIALOG|wxHF_MODAL) function, expected prototype:\nwxHtmlModalHelp::wxHtmlModalHelp(wxWindow * parent, const wxString & helpFile, const wxString & topic = wxEmptyString, int style = wxHF_DEFAULT_STYLE|wxHF_DIALOG|wxHF_MODAL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		wxString helpFile(lua_tostring(L,2),lua_objlen(L,2));
		wxString topic(lua_tostring(L,3),lua_objlen(L,3));
		int style=luatop>3 ? (int)lua_tointeger(L,4) : wxHF_DEFAULT_STYLE|wxHF_DIALOG|wxHF_MODAL;

		return new wxHtmlModalHelp(parent, helpFile, topic, style);
	}


	// Function binds:

	// Operator binds:

};

wxHtmlModalHelp* LunaTraits< wxHtmlModalHelp >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHtmlModalHelp::_bind_ctor(L);
}

void LunaTraits< wxHtmlModalHelp >::_bind_dtor(wxHtmlModalHelp* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlModalHelp >::className[] = "wxHtmlModalHelp";
const char LunaTraits< wxHtmlModalHelp >::fullName[] = "wxHtmlModalHelp";
const char LunaTraits< wxHtmlModalHelp >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlModalHelp >::parents[] = {0};
const int LunaTraits< wxHtmlModalHelp >::hash = 51847095;
const int LunaTraits< wxHtmlModalHelp >::uniqueIDs[] = {51847095,0};

luna_RegType LunaTraits< wxHtmlModalHelp >::methods[] = {
	{"dynCast", &luna_wrapper_wxHtmlModalHelp::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlModalHelp >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlModalHelp >::enumValues[] = {
	{0,0}
};

