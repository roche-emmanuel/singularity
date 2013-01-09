#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_wxArrayVideoModes {
public:
	typedef Luna< wxArrayVideoModes > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,4284904) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxArrayVideoModes*)");
		}

		wxArrayVideoModes* rhs =(Luna< wxArrayVideoModes >::check(L,2));
		wxArrayVideoModes* self=(Luna< wxArrayVideoModes >::check(L,1));
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

		wxArrayVideoModes* self=(Luna< wxArrayVideoModes >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxArrayVideoModes");
		
		return luna_dynamicCast(L,converters,"wxArrayVideoModes",name);
	}

};

wxArrayVideoModes* LunaTraits< wxArrayVideoModes >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxArrayVideoModes >::_bind_dtor(wxArrayVideoModes* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< wxArrayVideoModes >::className[] = "wxArrayVideoModes";
const char LunaTraits< wxArrayVideoModes >::fullName[] = "wxArrayVideoModes";
const char LunaTraits< wxArrayVideoModes >::moduleName[] = "wx";
const char* LunaTraits< wxArrayVideoModes >::parents[] = {0};
const int LunaTraits< wxArrayVideoModes >::hash = 4284904;
const int LunaTraits< wxArrayVideoModes >::uniqueIDs[] = {4284904,0};

luna_RegType LunaTraits< wxArrayVideoModes >::methods[] = {
	{"dynCast", &luna_wrapper_wxArrayVideoModes::_bind_dynCast},
	{"__eq", &luna_wrapper_wxArrayVideoModes::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< wxArrayVideoModes >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxArrayVideoModes >::enumValues[] = {
	{0,0}
};

