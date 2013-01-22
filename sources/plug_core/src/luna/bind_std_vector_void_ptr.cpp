#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_void_ptr {
public:
	typedef Luna< std::vector< void * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87530881) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< void * >*)");
		}

		std::vector< void * >* rhs =(Luna< std::vector< void * > >::check(L,2));
		std::vector< void * >* self=(Luna< std::vector< void * > >::check(L,1));
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

		std::vector< void * >* self=(Luna< std::vector< void * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< void * >");
		
		return luna_dynamicCast(L,converters,"std::vector< void * >",name);
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

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// bool std::vector< void * >::empty()
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool std::vector< void * >::empty() function, expected prototype:\nbool std::vector< void * >::empty()\nClass arguments details:\n");
		}


		std::vector< void * >* self=(Luna< std::vector< void * > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool std::vector< void * >::empty(). Got : '%s'",typeid(Luna< std::vector< void * > >::check(L,1)).name());
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int std::vector< void * >::size()
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int std::vector< void * >::size() function, expected prototype:\nunsigned int std::vector< void * >::size()\nClass arguments details:\n");
		}


		std::vector< void * >* self=(Luna< std::vector< void * > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int std::vector< void * >::size(). Got : '%s'",typeid(Luna< std::vector< void * > >::check(L,1)).name());
		}
		unsigned int lret = self->size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void std::vector< void * >::resize(unsigned int arg1)
	static int _bind_resize(lua_State *L) {
		if (!_lg_typecheck_resize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void std::vector< void * >::resize(unsigned int arg1) function, expected prototype:\nvoid std::vector< void * >::resize(unsigned int arg1)\nClass arguments details:\n");
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		std::vector< void * >* self=(Luna< std::vector< void * > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void std::vector< void * >::resize(unsigned int). Got : '%s'",typeid(Luna< std::vector< void * > >::check(L,1)).name());
		}
		self->resize(arg1);

		return 0;
	}

	// void std::vector< void * >::push_back(void * arg1)
	static int _bind_push_back(lua_State *L) {
		if (!_lg_typecheck_push_back(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void std::vector< void * >::push_back(void * arg1) function, expected prototype:\nvoid std::vector< void * >::push_back(void * arg1)\nClass arguments details:\narg 1 ID = 3625364\n");
		}

		void* arg1=(Luna< void >::check(L,2));

		std::vector< void * >* self=(Luna< std::vector< void * > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void std::vector< void * >::push_back(void *). Got : '%s'",typeid(Luna< std::vector< void * > >::check(L,1)).name());
		}
		self->push_back(arg1);

		return 0;
	}

	// void * std::vector< void * >::operator[](unsigned int arg1)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * std::vector< void * >::operator[](unsigned int arg1) function, expected prototype:\nvoid * std::vector< void * >::operator[](unsigned int arg1)\nClass arguments details:\n");
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		std::vector< void * >* self=(Luna< std::vector< void * > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * std::vector< void * >::operator[](unsigned int). Got : '%s'",typeid(Luna< std::vector< void * > >::check(L,1)).name());
		}
		void * lret = self->operator[](arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

};

std::vector< void * >* LunaTraits< std::vector< void * > >::_bind_ctor(lua_State *L) {
	return new std::vector< void * >();
}

void LunaTraits< std::vector< void * > >::_bind_dtor(std::vector< void * >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< void * > >::className[] = "std_vector_void_ptr";
const char LunaTraits< std::vector< void * > >::fullName[] = "std::vector< void * >";
const char LunaTraits< std::vector< void * > >::moduleName[] = "sgt";
const char* LunaTraits< std::vector< void * > >::parents[] = {0};
const int LunaTraits< std::vector< void * > >::hash = 87530881;
const int LunaTraits< std::vector< void * > >::uniqueIDs[] = {87530881,0};

luna_RegType LunaTraits< std::vector< void * > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_void_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_void_ptr::_bind___eq},
	
	{"empty", &luna_wrapper_std_vector_void_ptr::_bind_empty},
	{"size", &luna_wrapper_std_vector_void_ptr::_bind_size},
	{"resize", &luna_wrapper_std_vector_void_ptr::_bind_resize},
	{"push_back", &luna_wrapper_std_vector_void_ptr::_bind_push_back},
	{"op_index", &luna_wrapper_std_vector_void_ptr::_bind_op_index},
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< void * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< void * > >::enumValues[] = {
	{0,0}
};


