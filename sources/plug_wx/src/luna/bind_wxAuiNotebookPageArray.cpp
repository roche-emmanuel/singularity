#include <plug_common.h>

class luna_wrapper_wxAuiNotebookPageArray {
public:
	typedef Luna< wxAuiNotebookPageArray > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,39809356) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxAuiNotebookPageArray*)");
		}

		wxAuiNotebookPageArray* rhs =(Luna< wxAuiNotebookPageArray >::check(L,2));
		wxAuiNotebookPageArray* self=(Luna< wxAuiNotebookPageArray >::check(L,1));
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

		wxAuiNotebookPageArray* self=(Luna< wxAuiNotebookPageArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxAuiNotebookPageArray");
		
		return luna_dynamicCast(L,converters,"wxAuiNotebookPageArray",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxAuiNotebookPageArray* LunaTraits< wxAuiNotebookPageArray >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxAuiNotebookPageArray >::_bind_dtor(wxAuiNotebookPageArray* obj) {
	delete obj;
}

const char LunaTraits< wxAuiNotebookPageArray >::className[] = "wxAuiNotebookPageArray";
const char LunaTraits< wxAuiNotebookPageArray >::fullName[] = "wxAuiNotebookPageArray";
const char LunaTraits< wxAuiNotebookPageArray >::moduleName[] = "wx";
const char* LunaTraits< wxAuiNotebookPageArray >::parents[] = {0};
const int LunaTraits< wxAuiNotebookPageArray >::hash = 39809356;
const int LunaTraits< wxAuiNotebookPageArray >::uniqueIDs[] = {39809356,0};

luna_RegType LunaTraits< wxAuiNotebookPageArray >::methods[] = {
	{"dynCast", &luna_wrapper_wxAuiNotebookPageArray::_bind_dynCast},
	{"__eq", &luna_wrapper_wxAuiNotebookPageArray::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxAuiNotebookPageArray >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxAuiNotebookPageArray >::enumValues[] = {
	{0,0}
};


