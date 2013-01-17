#include <plug_common.h>

class luna_wrapper_wxRichTextRange {
public:
	typedef Luna< wxRichTextRange > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87365934) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxRichTextRange*)");
		}

		wxRichTextRange* rhs =(Luna< wxRichTextRange >::check(L,2));
		wxRichTextRange* self=(Luna< wxRichTextRange >::check(L,1));
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

		wxRichTextRange* self=(Luna< wxRichTextRange >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRichTextRange");
		
		return luna_dynamicCast(L,converters,"wxRichTextRange",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxRichTextRange* LunaTraits< wxRichTextRange >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextRange >::_bind_dtor(wxRichTextRange* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextRange >::className[] = "wxRichTextRange";
const char LunaTraits< wxRichTextRange >::fullName[] = "wxRichTextRange";
const char LunaTraits< wxRichTextRange >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextRange >::parents[] = {0};
const int LunaTraits< wxRichTextRange >::hash = 87365934;
const int LunaTraits< wxRichTextRange >::uniqueIDs[] = {87365934,0};

luna_RegType LunaTraits< wxRichTextRange >::methods[] = {
	{"dynCast", &luna_wrapper_wxRichTextRange::_bind_dynCast},
	{"__eq", &luna_wrapper_wxRichTextRange::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextRange >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextRange >::enumValues[] = {
	{0,0}
};


