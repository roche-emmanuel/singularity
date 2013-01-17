#include <plug_common.h>

class luna_wrapper_wxRibbonPageTabInfoArray {
public:
	typedef Luna< wxRibbonPageTabInfoArray > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76085772) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxRibbonPageTabInfoArray*)");
		}

		wxRibbonPageTabInfoArray* rhs =(Luna< wxRibbonPageTabInfoArray >::check(L,2));
		wxRibbonPageTabInfoArray* self=(Luna< wxRibbonPageTabInfoArray >::check(L,1));
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

		wxRibbonPageTabInfoArray* self=(Luna< wxRibbonPageTabInfoArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRibbonPageTabInfoArray");
		
		return luna_dynamicCast(L,converters,"wxRibbonPageTabInfoArray",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxRibbonPageTabInfoArray* LunaTraits< wxRibbonPageTabInfoArray >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRibbonPageTabInfoArray >::_bind_dtor(wxRibbonPageTabInfoArray* obj) {
	delete obj;
}

const char LunaTraits< wxRibbonPageTabInfoArray >::className[] = "wxRibbonPageTabInfoArray";
const char LunaTraits< wxRibbonPageTabInfoArray >::fullName[] = "wxRibbonPageTabInfoArray";
const char LunaTraits< wxRibbonPageTabInfoArray >::moduleName[] = "wx";
const char* LunaTraits< wxRibbonPageTabInfoArray >::parents[] = {0};
const int LunaTraits< wxRibbonPageTabInfoArray >::hash = 76085772;
const int LunaTraits< wxRibbonPageTabInfoArray >::uniqueIDs[] = {76085772,0};

luna_RegType LunaTraits< wxRibbonPageTabInfoArray >::methods[] = {
	{"dynCast", &luna_wrapper_wxRibbonPageTabInfoArray::_bind_dynCast},
	{"__eq", &luna_wrapper_wxRibbonPageTabInfoArray::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRibbonPageTabInfoArray >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRibbonPageTabInfoArray >::enumValues[] = {
	{0,0}
};


