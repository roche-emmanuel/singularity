#include <plug_common.h>

class luna_wrapper_wxMsgCatalog {
public:
	typedef Luna< wxMsgCatalog > luna_t;

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

		wxMsgCatalog* self=(Luna< wxMsgCatalog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxMsgCatalog");
		
		return luna_dynamicCast(L,converters,"wxMsgCatalog",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_CreateFromFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static wxMsgCatalog * wxMsgCatalog::CreateFromFile(const wxString & filename, const wxString & domain)
	static int _bind_CreateFromFile(lua_State *L) {
		if (!_lg_typecheck_CreateFromFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxMsgCatalog * wxMsgCatalog::CreateFromFile(const wxString & filename, const wxString & domain) function, expected prototype:\nstatic wxMsgCatalog * wxMsgCatalog::CreateFromFile(const wxString & filename, const wxString & domain)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		wxString filename(lua_tostring(L,1),lua_objlen(L,1));
		wxString domain(lua_tostring(L,2),lua_objlen(L,2));

		wxMsgCatalog * lret = wxMsgCatalog::CreateFromFile(filename, domain);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMsgCatalog >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxMsgCatalog* LunaTraits< wxMsgCatalog >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxMsgCatalog >::_bind_dtor(wxMsgCatalog* obj) {
	delete obj;
}

const char LunaTraits< wxMsgCatalog >::className[] = "wxMsgCatalog";
const char LunaTraits< wxMsgCatalog >::fullName[] = "wxMsgCatalog";
const char LunaTraits< wxMsgCatalog >::moduleName[] = "wx";
const char* LunaTraits< wxMsgCatalog >::parents[] = {0};
const int LunaTraits< wxMsgCatalog >::hash = 16122349;
const int LunaTraits< wxMsgCatalog >::uniqueIDs[] = {16122349,0};

luna_RegType LunaTraits< wxMsgCatalog >::methods[] = {
	{"CreateFromFile", &luna_wrapper_wxMsgCatalog::_bind_CreateFromFile},
	{"dynCast", &luna_wrapper_wxMsgCatalog::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxMsgCatalog >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxMsgCatalog >::enumValues[] = {
	{0,0}
};

