#include <plug_common.h>

class luna_wrapper_wxRichTextVariantArray {
public:
	typedef Luna< wxRichTextVariantArray > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31601295) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxRichTextVariantArray*)");
		}

		wxRichTextVariantArray* rhs =(Luna< wxRichTextVariantArray >::check(L,2));
		wxRichTextVariantArray* self=(Luna< wxRichTextVariantArray >::check(L,1));
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

		wxRichTextVariantArray* self=(Luna< wxRichTextVariantArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRichTextVariantArray");
		
		return luna_dynamicCast(L,converters,"wxRichTextVariantArray",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxRichTextVariantArray* LunaTraits< wxRichTextVariantArray >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextVariantArray >::_bind_dtor(wxRichTextVariantArray* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextVariantArray >::className[] = "wxRichTextVariantArray";
const char LunaTraits< wxRichTextVariantArray >::fullName[] = "wxRichTextVariantArray";
const char LunaTraits< wxRichTextVariantArray >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextVariantArray >::parents[] = {0};
const int LunaTraits< wxRichTextVariantArray >::hash = 31601295;
const int LunaTraits< wxRichTextVariantArray >::uniqueIDs[] = {31601295,0};

luna_RegType LunaTraits< wxRichTextVariantArray >::methods[] = {
	{"dynCast", &luna_wrapper_wxRichTextVariantArray::_bind_dynCast},
	{"__eq", &luna_wrapper_wxRichTextVariantArray::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextVariantArray >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextVariantArray >::enumValues[] = {
	{0,0}
};


