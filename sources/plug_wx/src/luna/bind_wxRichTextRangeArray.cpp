#include <plug_common.h>

class luna_wrapper_wxRichTextRangeArray {
public:
	typedef Luna< wxRichTextRangeArray > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,79991100) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxRichTextRangeArray*)");
		}

		wxRichTextRangeArray* rhs =(Luna< wxRichTextRangeArray >::check(L,2));
		wxRichTextRangeArray* self=(Luna< wxRichTextRangeArray >::check(L,1));
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

		wxRichTextRangeArray* self=(Luna< wxRichTextRangeArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRichTextRangeArray");
		
		return luna_dynamicCast(L,converters,"wxRichTextRangeArray",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxRichTextRangeArray* LunaTraits< wxRichTextRangeArray >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxRichTextRangeArray >::_bind_dtor(wxRichTextRangeArray* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextRangeArray >::className[] = "wxRichTextRangeArray";
const char LunaTraits< wxRichTextRangeArray >::fullName[] = "wxRichTextRangeArray";
const char LunaTraits< wxRichTextRangeArray >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextRangeArray >::parents[] = {0};
const int LunaTraits< wxRichTextRangeArray >::hash = 79991100;
const int LunaTraits< wxRichTextRangeArray >::uniqueIDs[] = {79991100,0};

luna_RegType LunaTraits< wxRichTextRangeArray >::methods[] = {
	{"dynCast", &luna_wrapper_wxRichTextRangeArray::_bind_dynCast},
	{"__eq", &luna_wrapper_wxRichTextRangeArray::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextRangeArray >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextRangeArray >::enumValues[] = {
	{0,0}
};


