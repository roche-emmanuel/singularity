#include <plug_common.h>

class luna_wrapper_wxRichTextFloatCollector {
public:
	typedef Luna< wxRichTextFloatCollector > luna_t;

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

		wxRichTextFloatCollector* self=(Luna< wxRichTextFloatCollector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRichTextFloatCollector");
		
		return luna_dynamicCast(L,converters,"wxRichTextFloatCollector",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxRichTextFloatCollector* LunaTraits< wxRichTextFloatCollector >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextFloatCollector >::_bind_dtor(wxRichTextFloatCollector* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextFloatCollector >::className[] = "wxRichTextFloatCollector";
const char LunaTraits< wxRichTextFloatCollector >::fullName[] = "wxRichTextFloatCollector";
const char LunaTraits< wxRichTextFloatCollector >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextFloatCollector >::parents[] = {0};
const int LunaTraits< wxRichTextFloatCollector >::hash = 98441097;
const int LunaTraits< wxRichTextFloatCollector >::uniqueIDs[] = {98441097,0};

luna_RegType LunaTraits< wxRichTextFloatCollector >::methods[] = {
	{"dynCast", &luna_wrapper_wxRichTextFloatCollector::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextFloatCollector >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextFloatCollector >::enumValues[] = {
	{0,0}
};


