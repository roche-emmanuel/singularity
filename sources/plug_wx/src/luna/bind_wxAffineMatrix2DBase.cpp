#include <plug_common.h>

class luna_wrapper_wxAffineMatrix2DBase {
public:
	typedef Luna< wxAffineMatrix2DBase > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74549152) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxAffineMatrix2DBase*)");
		}

		wxAffineMatrix2DBase* rhs =(Luna< wxAffineMatrix2DBase >::check(L,2));
		wxAffineMatrix2DBase* self=(Luna< wxAffineMatrix2DBase >::check(L,1));
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

		wxAffineMatrix2DBase* self=(Luna< wxAffineMatrix2DBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxAffineMatrix2DBase");
		
		return luna_dynamicCast(L,converters,"wxAffineMatrix2DBase",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxAffineMatrix2DBase* LunaTraits< wxAffineMatrix2DBase >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxAffineMatrix2DBase >::_bind_dtor(wxAffineMatrix2DBase* obj) {
	delete obj;
}

const char LunaTraits< wxAffineMatrix2DBase >::className[] = "wxAffineMatrix2DBase";
const char LunaTraits< wxAffineMatrix2DBase >::fullName[] = "wxAffineMatrix2DBase";
const char LunaTraits< wxAffineMatrix2DBase >::moduleName[] = "wx";
const char* LunaTraits< wxAffineMatrix2DBase >::parents[] = {0};
const int LunaTraits< wxAffineMatrix2DBase >::hash = 74549152;
const int LunaTraits< wxAffineMatrix2DBase >::uniqueIDs[] = {74549152,0};

luna_RegType LunaTraits< wxAffineMatrix2DBase >::methods[] = {
	{"dynCast", &luna_wrapper_wxAffineMatrix2DBase::_bind_dynCast},
	{"__eq", &luna_wrapper_wxAffineMatrix2DBase::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxAffineMatrix2DBase >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxAffineMatrix2DBase >::enumValues[] = {
	{0,0}
};


