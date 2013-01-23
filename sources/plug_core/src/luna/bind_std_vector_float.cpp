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

	inline static bool _lg_typecheck_assign(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_at(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_back(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_front(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
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

	inline static bool _lg_typecheck_pop_back(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_push_back(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,77249888) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// void std::vector< float >::assign(unsigned int arg1, float arg2)
	static int _bind_assign(lua_State *L) {
		if (!_lg_typecheck_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void std::vector< float >::assign(unsigned int arg1, float arg2) function, expected prototype:\nvoid std::vector< float >::assign(unsigned int arg1, float arg2)\nClass arguments details:\n");
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);
		float arg2=(float)lua_tonumber(L,3);

		std::vector< float >* self=(Luna< std::vector< float > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void std::vector< float >::assign(unsigned int, float). Got : '%s'",typeid(Luna< std::vector< float > >::check(L,1)).name());
		}
		self->assign(arg1, arg2);

		return 0;
	}

	// float std::vector< float >::at(unsigned int arg1)
	static int _bind_at(lua_State *L) {
		if (!_lg_typecheck_at(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float std::vector< float >::at(unsigned int arg1) function, expected prototype:\nfloat std::vector< float >::at(unsigned int arg1)\nClass arguments details:\n");
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		std::vector< float >* self=(Luna< std::vector< float > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float std::vector< float >::at(unsigned int). Got : '%s'",typeid(Luna< std::vector< float > >::check(L,1)).name());
		}
		float lret = self->at(arg1);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float std::vector< float >::back()
	static int _bind_back(lua_State *L) {
		if (!_lg_typecheck_back(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float std::vector< float >::back() function, expected prototype:\nfloat std::vector< float >::back()\nClass arguments details:\n");
		}


		std::vector< float >* self=(Luna< std::vector< float > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float std::vector< float >::back(). Got : '%s'",typeid(Luna< std::vector< float > >::check(L,1)).name());
		}
		float lret = self->back();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float std::vector< float >::front()
	static int _bind_front(lua_State *L) {
		if (!_lg_typecheck_front(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float std::vector< float >::front() function, expected prototype:\nfloat std::vector< float >::front()\nClass arguments details:\n");
		}


		std::vector< float >* self=(Luna< std::vector< float > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float std::vector< float >::front(). Got : '%s'",typeid(Luna< std::vector< float > >::check(L,1)).name());
		}
		float lret = self->front();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void std::vector< float >::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void std::vector< float >::clear() function, expected prototype:\nvoid std::vector< float >::clear()\nClass arguments details:\n");
		}


		std::vector< float >* self=(Luna< std::vector< float > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void std::vector< float >::clear(). Got : '%s'",typeid(Luna< std::vector< float > >::check(L,1)).name());
		}
		self->clear();

		return 0;
	}

	// bool std::vector< float >::empty()
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool std::vector< float >::empty() function, expected prototype:\nbool std::vector< float >::empty()\nClass arguments details:\n");
		}


		std::vector< float >* self=(Luna< std::vector< float > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool std::vector< float >::empty(). Got : '%s'",typeid(Luna< std::vector< float > >::check(L,1)).name());
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int std::vector< float >::size()
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int std::vector< float >::size() function, expected prototype:\nunsigned int std::vector< float >::size()\nClass arguments details:\n");
		}


		std::vector< float >* self=(Luna< std::vector< float > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int std::vector< float >::size(). Got : '%s'",typeid(Luna< std::vector< float > >::check(L,1)).name());
		}
		unsigned int lret = self->size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void std::vector< float >::resize(unsigned int arg1)
	static int _bind_resize(lua_State *L) {
		if (!_lg_typecheck_resize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void std::vector< float >::resize(unsigned int arg1) function, expected prototype:\nvoid std::vector< float >::resize(unsigned int arg1)\nClass arguments details:\n");
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		std::vector< float >* self=(Luna< std::vector< float > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void std::vector< float >::resize(unsigned int). Got : '%s'",typeid(Luna< std::vector< float > >::check(L,1)).name());
		}
		self->resize(arg1);

		return 0;
	}

	// void std::vector< float >::pop_back()
	static int _bind_pop_back(lua_State *L) {
		if (!_lg_typecheck_pop_back(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void std::vector< float >::pop_back() function, expected prototype:\nvoid std::vector< float >::pop_back()\nClass arguments details:\n");
		}


		std::vector< float >* self=(Luna< std::vector< float > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void std::vector< float >::pop_back(). Got : '%s'",typeid(Luna< std::vector< float > >::check(L,1)).name());
		}
		self->pop_back();

		return 0;
	}

	// void std::vector< float >::push_back(float arg1)
	static int _bind_push_back(lua_State *L) {
		if (!_lg_typecheck_push_back(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void std::vector< float >::push_back(float arg1) function, expected prototype:\nvoid std::vector< float >::push_back(float arg1)\nClass arguments details:\n");
		}

		float arg1=(float)lua_tonumber(L,2);

		std::vector< float >* self=(Luna< std::vector< float > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void std::vector< float >::push_back(float). Got : '%s'",typeid(Luna< std::vector< float > >::check(L,1)).name());
		}
		self->push_back(arg1);

		return 0;
	}

	// void std::vector< float >::swap(std::vector< float > arg1)
	static int _bind_swap(lua_State *L) {
		if (!_lg_typecheck_swap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void std::vector< float >::swap(std::vector< float > arg1) function, expected prototype:\nvoid std::vector< float >::swap(std::vector< float > arg1)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		std::vector< float >* arg1_ptr=(Luna< std::vector< float > >::check(L,2));
		if( !arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg1 in std::vector< float >::swap function");
		}
		std::vector< float > arg1=*arg1_ptr;

		std::vector< float >* self=(Luna< std::vector< float > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void std::vector< float >::swap(std::vector< float >). Got : '%s'",typeid(Luna< std::vector< float > >::check(L,1)).name());
		}
		self->swap(arg1);

		return 0;
	}

	// float std::vector< float >::operator[](unsigned int arg1)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float std::vector< float >::operator[](unsigned int arg1) function, expected prototype:\nfloat std::vector< float >::operator[](unsigned int arg1)\nClass arguments details:\n");
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		std::vector< float >* self=(Luna< std::vector< float > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float std::vector< float >::operator[](unsigned int). Got : '%s'",typeid(Luna< std::vector< float > >::check(L,1)).name());
		}
		float lret = self->operator[](arg1);
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
	
	{"assign", &luna_wrapper_std_vector_float::_bind_assign},
	{"at", &luna_wrapper_std_vector_float::_bind_at},
	{"back", &luna_wrapper_std_vector_float::_bind_back},
	{"front", &luna_wrapper_std_vector_float::_bind_front},
	{"clear", &luna_wrapper_std_vector_float::_bind_clear},
	{"empty", &luna_wrapper_std_vector_float::_bind_empty},
	{"size", &luna_wrapper_std_vector_float::_bind_size},
	{"resize", &luna_wrapper_std_vector_float::_bind_resize},
	{"pop_back", &luna_wrapper_std_vector_float::_bind_pop_back},
	{"push_back", &luna_wrapper_std_vector_float::_bind_push_back},
	{"swap", &luna_wrapper_std_vector_float::_bind_swap},
	{"op_index", &luna_wrapper_std_vector_float::_bind_op_index},
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< float > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< float > >::enumValues[] = {
	{0,0}
};


