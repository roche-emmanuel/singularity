#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_map_std_string_int {
public:
	typedef Luna< std::map< std::string, int > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,27704170) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::map< std::string, int >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::map< std::string, int >* rhs =(Luna< std::map< std::string, int > >::check(L,2));
		std::map< std::string, int >* self=(Luna< std::map< std::string, int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		std::map< std::string, int >* self=(Luna< std::map< std::string, int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::map< std::string, int >");
		
		return luna_dynamicCast(L,converters,"std::map< std::string, int >",name);
	}

	inline static bool _lg_typecheck_get(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,27704170)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// int std::map< std::string, int > *::map_get(std::map< std::string, int > * data, const std::string & id)
	static int _bind_get(lua_State *L) {
		if (!_lg_typecheck_get(L)) {
			luaL_error(L, "luna typecheck failed in int std::map< std::string, int > *::map_get(std::map< std::string, int > * data, const std::string & id) function, expected prototype:\nint std::map< std::string, int > *::map_get(std::map< std::string, int > * data, const std::string & id)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::map< std::string, int >* data=(Luna< std::map< std::string, int > >::check(L,1));
		std::string id(lua_tostring(L,2),lua_objlen(L,2));

		int lret = map_get(data, id);
		lua_pushnumber(L,lret);

		return 1;
	}

};

std::map< std::string, int >* LunaTraits< std::map< std::string, int > >::_bind_ctor(lua_State *L) {
	return new std::map< std::string, int >();
}

void LunaTraits< std::map< std::string, int > >::_bind_dtor(std::map< std::string, int >* obj) {
	delete obj;
}

const char LunaTraits< std::map< std::string, int > >::className[] = "std_map_std_string_int";
const char LunaTraits< std::map< std::string, int > >::fullName[] = "std::map< std::string, int >";
const char LunaTraits< std::map< std::string, int > >::moduleName[] = "sgt";
const char* LunaTraits< std::map< std::string, int > >::parents[] = {0};
const int LunaTraits< std::map< std::string, int > >::hash = 27704170;
const int LunaTraits< std::map< std::string, int > >::uniqueIDs[] = {27704170,0};

luna_RegType LunaTraits< std::map< std::string, int > >::methods[] = {
	{"dynCast", &luna_wrapper_std_map_std_string_int::_bind_dynCast},
	{"__eq", &luna_wrapper_std_map_std_string_int::_bind___eq},
	
	{"get", &luna_wrapper_std_map_std_string_int::_bind_get},
	{0,0}
};

luna_ConverterType LunaTraits< std::map< std::string, int > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::map< std::string, int > >::enumValues[] = {
	{0,0}
};


