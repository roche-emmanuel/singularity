#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_float {
public:
	typedef Luna< std::vector< float > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,77249888) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< float >*)");
		}

		std::vector< float >* rhs =(Luna< std::vector< float > >::check(L,2));
		std::vector< float >* self=(Luna< std::vector< float > >::check(L,1));
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

		std::vector< float >* self=(Luna< std::vector< float > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< float >");
		
		return luna_dynamicCast(L,converters,"std::vector< float >",name);
	}

	inline static bool _lg_typecheck_push_back(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,77249888)) ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_size(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,77249888)) ) return false;
		return true;
	}


	// void std::vector< float > *::push_back(std::vector< float > * vec, float val)
	static int _bind_push_back(lua_State *L) {
		if (!_lg_typecheck_push_back(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void std::vector< float > *::push_back(std::vector< float > * vec, float val) function, expected prototype:\nvoid std::vector< float > *::push_back(std::vector< float > * vec, float val)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		std::vector< float >* vec=(Luna< std::vector< float > >::check(L,1));
		float val=(float)lua_tonumber(L,2);

		push_back(vec, val);

		return 0;
	}

	// unsigned int std::vector< float > *::size(std::vector< float > * vec)
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int std::vector< float > *::size(std::vector< float > * vec) function, expected prototype:\nunsigned int std::vector< float > *::size(std::vector< float > * vec)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		std::vector< float >* vec=(Luna< std::vector< float > >::check(L,1));

		unsigned int lret = size(vec);
		lua_pushnumber(L,lret);

		return 1;
	}

};

std::vector< float >* LunaTraits< std::vector< float > >::_bind_ctor(lua_State *L) {
	return new std::vector< float >();
}

void LunaTraits< std::vector< float > >::_bind_dtor(std::vector< float >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< float > >::className[] = "std_vector_float";
const char LunaTraits< std::vector< float > >::fullName[] = "std::vector< float >";
const char LunaTraits< std::vector< float > >::moduleName[] = "sgt";
const char* LunaTraits< std::vector< float > >::parents[] = {0};
const int LunaTraits< std::vector< float > >::hash = 77249888;
const int LunaTraits< std::vector< float > >::uniqueIDs[] = {77249888,0};

luna_RegType LunaTraits< std::vector< float > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_float::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_float::_bind___eq},
	
	{"push_back", &luna_wrapper_std_vector_float::_bind_push_back},
	{"size", &luna_wrapper_std_vector_float::_bind_size},
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< float > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< float > >::enumValues[] = {
	{0,0}
};


