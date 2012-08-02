#include <plug_common.h>

class luna_wrapper_wxImageHistogram {
public:
	typedef Luna< wxImageHistogram > luna_t;

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

		wxImageHistogram* self=(Luna< wxImageHistogram >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxImageHistogram");
		
		return luna_dynamicCast(L,converters,"wxImageHistogram",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxImageHistogram::wxImageHistogram()
	static wxImageHistogram* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImageHistogram::wxImageHistogram() function, expected prototype:\nwxImageHistogram::wxImageHistogram()\nClass arguments details:\n");
		}


		return new wxImageHistogram();
	}


	// Function binds:

	// Operator binds:

};

wxImageHistogram* LunaTraits< wxImageHistogram >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxImageHistogram::_bind_ctor(L);
}

void LunaTraits< wxImageHistogram >::_bind_dtor(wxImageHistogram* obj) {
	delete obj;
}

const char LunaTraits< wxImageHistogram >::className[] = "wxImageHistogram";
const char LunaTraits< wxImageHistogram >::fullName[] = "wxImageHistogram";
const char LunaTraits< wxImageHistogram >::moduleName[] = "wx";
const char* LunaTraits< wxImageHistogram >::parents[] = {0};
const int LunaTraits< wxImageHistogram >::hash = 75442299;
const int LunaTraits< wxImageHistogram >::uniqueIDs[] = {75442299,0};

luna_RegType LunaTraits< wxImageHistogram >::methods[] = {
	{"dynCast", &luna_wrapper_wxImageHistogram::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxImageHistogram >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxImageHistogram >::enumValues[] = {
	{0,0}
};


