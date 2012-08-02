#include <plug_common.h>

class luna_wrapper_wxBusyInfo {
public:
	typedef Luna< wxBusyInfo > luna_t;

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

		wxBusyInfo* self=(Luna< wxBusyInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxBusyInfo");
		
		return luna_dynamicCast(L,converters,"wxBusyInfo",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxBusyInfo::wxBusyInfo(const wxString & msg, wxWindow * parent = NULL)
	static wxBusyInfo* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBusyInfo::wxBusyInfo(const wxString & msg, wxWindow * parent = NULL) function, expected prototype:\nwxBusyInfo::wxBusyInfo(const wxString & msg, wxWindow * parent = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxString msg(lua_tostring(L,1),lua_objlen(L,1));
		wxWindow* parent=luatop>1 ? dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) : (wxWindow*)NULL;

		return new wxBusyInfo(msg, parent);
	}


	// Function binds:

	// Operator binds:

};

wxBusyInfo* LunaTraits< wxBusyInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxBusyInfo::_bind_ctor(L);
}

void LunaTraits< wxBusyInfo >::_bind_dtor(wxBusyInfo* obj) {
	delete obj;
}

const char LunaTraits< wxBusyInfo >::className[] = "wxBusyInfo";
const char LunaTraits< wxBusyInfo >::fullName[] = "wxBusyInfo";
const char LunaTraits< wxBusyInfo >::moduleName[] = "wx";
const char* LunaTraits< wxBusyInfo >::parents[] = {0};
const int LunaTraits< wxBusyInfo >::hash = 71864441;
const int LunaTraits< wxBusyInfo >::uniqueIDs[] = {71864441,0};

luna_RegType LunaTraits< wxBusyInfo >::methods[] = {
	{"dynCast", &luna_wrapper_wxBusyInfo::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxBusyInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxBusyInfo >::enumValues[] = {
	{0,0}
};


