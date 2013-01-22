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

	inline static bool _lg_typecheck_empty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_size(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_resize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_push_back(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// bool std::vector< int >::empty()
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool std::vector< int >::empty() function, expected prototype:\nbool std::vector< int >::empty()\nClass arguments details:\n");
		}


		std::vector< int >* self=(Luna< std::vector< int > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool std::vector< int >::empty(). Got : '%s'",typeid(Luna< std::vector< int > >::check(L,1)).name());
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int std::vector< int >::size()
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int std::vector< int >::size() function, expected prototype:\nunsigned int std::vector< int >::size()\nClass arguments details:\n");
		}


		std::vector< int >* self=(Luna< std::vector< int > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int std::vector< int >::size(). Got : '%s'",typeid(Luna< std::vector< int > >::check(L,1)).name());
		}
		unsigned int lret = self->size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void std::vector< int >::resize(unsigned int arg1)
	static int _bind_resize(lua_State *L) {
		if (!_lg_typecheck_resize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void std::vector< int >::resize(unsigned int arg1) function, expected prototype:\nvoid std::vector< int >::resize(unsigned int arg1)\nClass arguments details:\n");
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		std::vector< int >* self=(Luna< std::vector< int > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void std::vector< int >::resize(unsigned int). Got : '%s'",typeid(Luna< std::vector< int > >::check(L,1)).name());
		}
		self->resize(arg1);

		return 0;
	}

	// void std::vector< int >::push_back(int arg1)
	static int _bind_push_back(lua_State *L) {
		if (!_lg_typecheck_push_back(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void std::vector< int >::push_back(int arg1) function, expected prototype:\nvoid std::vector< int >::push_back(int arg1)\nClass arguments details:\n");
		}

		int arg1=(int)lua_tointeger(L,2);

		std::vector< int >* self=(Luna< std::vector< int > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void std::vector< int >::push_back(int). Got : '%s'",typeid(Luna< std::vector< int > >::check(L,1)).name());
		}
		self->push_back(arg1);

		return 0;
	}

	// int std::vector< int >::operator[](unsigned int arg1)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int std::vector< int >::operator[](unsigned int arg1) function, expected prototype:\nint std::vector< int >::operator[](unsigned int arg1)\nClass arguments details:\n");
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		std::vector< int >* self=(Luna< std::vector< int > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int std::vector< int >::operator[](unsigned int). Got : '%s'",typeid(Luna< std::vector< int > >::check(L,1)).name());
		}
		int lret = self->operator[](arg1);
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
	
	{"empty", &luna_wrapper_std_vector_int::_bind_empty},
	{"size", &luna_wrapper_std_vector_int::_bind_size},
	{"resize", &luna_wrapper_std_vector_int::_bind_resize},
	{"push_back", &luna_wrapper_std_vector_int::_bind_push_back},
	{"op_index", &luna_wrapper_std_vector_int::_bind_op_index},
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< int > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< int > >::enumValues[] = {
	{0,0}
};


