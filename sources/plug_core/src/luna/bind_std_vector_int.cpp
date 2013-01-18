#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_int {
public:
	typedef Luna< std::vector< int > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92299338) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< int >*)");
		}

		std::vector< int >* rhs =(Luna< std::vector< int > >::check(L,2));
		std::vector< int >* self=(Luna< std::vector< int > >::check(L,1));
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

		std::vector< int >* self=(Luna< std::vector< int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< int >");
		
		return luna_dynamicCast(L,converters,"std::vector< int >",name);
	}

	inline static bool _lg_typecheck_push_back(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,92299338)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_size(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,92299338)) ) return false;
		return true;
	}


	// void std::vector< int > *::push_back(std::vector< int > * vec, int val)
	static int _bind_push_back(lua_State *L) {
		if (!_lg_typecheck_push_back(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void std::vector< int > *::push_back(std::vector< int > * vec, int val) function, expected prototype:\nvoid std::vector< int > *::push_back(std::vector< int > * vec, int val)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		std::vector< int >* vec=(Luna< std::vector< int > >::check(L,1));
		int val=(int)lua_tointeger(L,2);

		push_back(vec, val);

		return 0;
	}

	// unsigned int std::vector< int > *::size(std::vector< int > * vec)
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int std::vector< int > *::size(std::vector< int > * vec) function, expected prototype:\nunsigned int std::vector< int > *::size(std::vector< int > * vec)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		std::vector< int >* vec=(Luna< std::vector< int > >::check(L,1));

		unsigned int lret = size(vec);
		lua_pushnumber(L,lret);

		return 1;
	}

};

std::vector< int >* LunaTraits< std::vector< int > >::_bind_ctor(lua_State *L) {
	return new std::vector< int >();
}

void LunaTraits< std::vector< int > >::_bind_dtor(std::vector< int >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< int > >::className[] = "std_vector_int";
const char LunaTraits< std::vector< int > >::fullName[] = "std::vector< int >";
const char LunaTraits< std::vector< int > >::moduleName[] = "sgt";
const char* LunaTraits< std::vector< int > >::parents[] = {0};
const int LunaTraits< std::vector< int > >::hash = 92299338;
const int LunaTraits< std::vector< int > >::uniqueIDs[] = {92299338,0};

luna_RegType LunaTraits< std::vector< int > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_int::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_int::_bind___eq},
	
	{"push_back", &luna_wrapper_std_vector_int::_bind_push_back},
	{"size", &luna_wrapper_std_vector_int::_bind_size},
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< int > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< int > >::enumValues[] = {
	{0,0}
};


