#include <plug_common.h>

class luna_wrapper_wxRichTextObjectAddress {
public:
	typedef Luna< wxRichTextObjectAddress > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,94771900) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxRichTextObjectAddress*)");
		}

		wxRichTextObjectAddress* rhs =(Luna< wxRichTextObjectAddress >::check(L,2));
		wxRichTextObjectAddress* self=(Luna< wxRichTextObjectAddress >::check(L,1));
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

		wxRichTextObjectAddress* self=(Luna< wxRichTextObjectAddress >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRichTextObjectAddress");
		
		return luna_dynamicCast(L,converters,"wxRichTextObjectAddress",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxRichTextObjectAddress* LunaTraits< wxRichTextObjectAddress >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxRichTextObjectAddress >::_bind_dtor(wxRichTextObjectAddress* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextObjectAddress >::className[] = "wxRichTextObjectAddress";
const char LunaTraits< wxRichTextObjectAddress >::fullName[] = "wxRichTextObjectAddress";
const char LunaTraits< wxRichTextObjectAddress >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextObjectAddress >::parents[] = {0};
const int LunaTraits< wxRichTextObjectAddress >::hash = 94771900;
const int LunaTraits< wxRichTextObjectAddress >::uniqueIDs[] = {94771900,0};

luna_RegType LunaTraits< wxRichTextObjectAddress >::methods[] = {
	{"dynCast", &luna_wrapper_wxRichTextObjectAddress::_bind_dynCast},
	{"__eq", &luna_wrapper_wxRichTextObjectAddress::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextObjectAddress >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextObjectAddress >::enumValues[] = {
	{0,0}
};


