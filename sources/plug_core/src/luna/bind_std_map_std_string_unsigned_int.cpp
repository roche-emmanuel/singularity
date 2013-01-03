#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_map_std_string_unsigned_int {
public:
	typedef Luna< std::map< std::string, unsigned int > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72783721) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::map< std::string, unsigned int >*)");
		}

		std::map< std::string, unsigned int >* rhs =(Luna< std::map< std::string, unsigned int > >::check(L,2));
		std::map< std::string, unsigned int >* self=(Luna< std::map< std::string, unsigned int > >::check(L,1));
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

		std::map< std::string, unsigned int >* self=(Luna< std::map< std::string, unsigned int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::map< std::string, unsigned int >");
		
		return luna_dynamicCast(L,converters,"std::map< std::string, unsigned int >",name);
	}

	inline static bool _lg_typecheck_get(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,72783721)) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// unsigned int std::map< std::string, unsigned int > *::map_uint_get(std::map< std::string, unsigned int > * data, const std::string & id)
	static int _bind_get(lua_State *L) {
		if (!_lg_typecheck_get(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int std::map< std::string, unsigned int > *::map_uint_get(std::map< std::string, unsigned int > * data, const std::string & id) function, expected prototype:\nunsigned int std::map< std::string, unsigned int > *::map_uint_get(std::map< std::string, unsigned int > * data, const std::string & id)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		std::map< std::string, unsigned int >* data=(Luna< std::map< std::string, unsigned int > >::check(L,1));
		std::string id(lua_tostring(L,2),lua_objlen(L,2));

		unsigned int lret = map_uint_get(data, id);
		lua_pushnumber(L,lret);

		return 1;
	}

};

std::map< std::string, unsigned int >* LunaTraits< std::map< std::string, unsigned int > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< std::map< std::string, unsigned int > >::_bind_dtor(std::map< std::string, unsigned int >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< std::map< std::string, unsigned int > >::className[] = "std_map_std_string_unsigned_int";
const char LunaTraits< std::map< std::string, unsigned int > >::fullName[] = "std::map< std::string, unsigned int >";
const char LunaTraits< std::map< std::string, unsigned int > >::moduleName[] = "sgt";
const char* LunaTraits< std::map< std::string, unsigned int > >::parents[] = {0};
const int LunaTraits< std::map< std::string, unsigned int > >::hash = 72783721;
const int LunaTraits< std::map< std::string, unsigned int > >::uniqueIDs[] = {72783721,0};

luna_RegType LunaTraits< std::map< std::string, unsigned int > >::methods[] = {
	{"dynCast", &luna_wrapper_std_map_std_string_unsigned_int::_bind_dynCast},
	{"__eq", &luna_wrapper_std_map_std_string_unsigned_int::_bind___eq},
	
	{"get", &luna_wrapper_std_map_std_string_unsigned_int::_bind_get},
	{0,0}
};

luna_ConverterType LunaTraits< std::map< std::string, unsigned int > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::map< std::string, unsigned int > >::enumValues[] = {
	{0,0}
};

