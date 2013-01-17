#include <plug_common.h>

class luna_wrapper_wxAuiNotebookPage {
public:
	typedef Luna< wxAuiNotebookPage > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,43006525) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxAuiNotebookPage*)");
		}

		wxAuiNotebookPage* rhs =(Luna< wxAuiNotebookPage >::check(L,2));
		wxAuiNotebookPage* self=(Luna< wxAuiNotebookPage >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
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

		wxAuiNotebookPage* self=(Luna< wxAuiNotebookPage >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxAuiNotebookPage");
		
		return luna_dynamicCast(L,converters,"wxAuiNotebookPage",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxAuiNotebookPage* LunaTraits< wxAuiNotebookPage >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxAuiNotebookPage >::_bind_dtor(wxAuiNotebookPage* obj) {
	delete obj;
}

const char LunaTraits< wxAuiNotebookPage >::className[] = "wxAuiNotebookPage";
const char LunaTraits< wxAuiNotebookPage >::fullName[] = "wxAuiNotebookPage";
const char LunaTraits< wxAuiNotebookPage >::moduleName[] = "wx";
const char* LunaTraits< wxAuiNotebookPage >::parents[] = {0};
const int LunaTraits< wxAuiNotebookPage >::hash = 43006525;
const int LunaTraits< wxAuiNotebookPage >::uniqueIDs[] = {43006525,0};

luna_RegType LunaTraits< wxAuiNotebookPage >::methods[] = {
	{"dynCast", &luna_wrapper_wxAuiNotebookPage::_bind_dynCast},
	{"__eq", &luna_wrapper_wxAuiNotebookPage::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxAuiNotebookPage >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxAuiNotebookPage >::enumValues[] = {
	{0,0}
};


