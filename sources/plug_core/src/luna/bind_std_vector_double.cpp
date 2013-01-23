#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_double {
public:
	typedef Luna< std::vector< double > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,4564820) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< double >*)");
		}

		std::vector< double >* rhs =(Luna< std::vector< double > >::check(L,2));
		std::vector< double >* self=(Luna< std::vector< double > >::check(L,1));
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

		std::vector< double >* self=(Luna< std::vector< double > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< double >");
		
		return luna_dynamicCast(L,converters,"std::vector< double >",name);
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

		if( !Luna<void>::has_uniqueid(L,2,4564820) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// void std::vector< double >::assign(unsigned int arg1, double arg2)
	static int _bind_assign(lua_State *L) {
		if (!_lg_typecheck_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void std::vector< double >::assign(unsigned int arg1, double arg2) function, expected prototype:\nvoid std::vector< double >::assign(unsigned int arg1, double arg2)\nClass arguments details:\n");
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);
		double arg2=(double)lua_tonumber(L,3);

		std::vector< double >* self=(Luna< std::vector< double > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void std::vector< double >::assign(unsigned int, double). Got : '%s'",typeid(Luna< std::vector< double > >::check(L,1)).name());
		}
		self->assign(arg1, arg2);

		return 0;
	}

	// double std::vector< double >::at(unsigned int arg1)
	static int _bind_at(lua_State *L) {
		if (!_lg_typecheck_at(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double std::vector< double >::at(unsigned int arg1) function, expected prototype:\ndouble std::vector< double >::at(unsigned int arg1)\nClass arguments details:\n");
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		std::vector< double >* self=(Luna< std::vector< double > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double std::vector< double >::at(unsigned int). Got : '%s'",typeid(Luna< std::vector< double > >::check(L,1)).name());
		}
		double lret = self->at(arg1);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double std::vector< double >::back()
	static int _bind_back(lua_State *L) {
		if (!_lg_typecheck_back(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double std::vector< double >::back() function, expected prototype:\ndouble std::vector< double >::back()\nClass arguments details:\n");
		}


		std::vector< double >* self=(Luna< std::vector< double > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double std::vector< double >::back(). Got : '%s'",typeid(Luna< std::vector< double > >::check(L,1)).name());
		}
		double lret = self->back();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double std::vector< double >::front()
	static int _bind_front(lua_State *L) {
		if (!_lg_typecheck_front(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double std::vector< double >::front() function, expected prototype:\ndouble std::vector< double >::front()\nClass arguments details:\n");
		}


		std::vector< double >* self=(Luna< std::vector< double > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double std::vector< double >::front(). Got : '%s'",typeid(Luna< std::vector< double > >::check(L,1)).name());
		}
		double lret = self->front();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void std::vector< double >::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void std::vector< double >::clear() function, expected prototype:\nvoid std::vector< double >::clear()\nClass arguments details:\n");
		}


		std::vector< double >* self=(Luna< std::vector< double > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void std::vector< double >::clear(). Got : '%s'",typeid(Luna< std::vector< double > >::check(L,1)).name());
		}
		self->clear();

		return 0;
	}

	// bool std::vector< double >::empty()
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool std::vector< double >::empty() function, expected prototype:\nbool std::vector< double >::empty()\nClass arguments details:\n");
		}


		std::vector< double >* self=(Luna< std::vector< double > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool std::vector< double >::empty(). Got : '%s'",typeid(Luna< std::vector< double > >::check(L,1)).name());
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int std::vector< double >::size()
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int std::vector< double >::size() function, expected prototype:\nunsigned int std::vector< double >::size()\nClass arguments details:\n");
		}


		std::vector< double >* self=(Luna< std::vector< double > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int std::vector< double >::size(). Got : '%s'",typeid(Luna< std::vector< double > >::check(L,1)).name());
		}
		unsigned int lret = self->size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void std::vector< double >::resize(unsigned int arg1)
	static int _bind_resize(lua_State *L) {
		if (!_lg_typecheck_resize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void std::vector< double >::resize(unsigned int arg1) function, expected prototype:\nvoid std::vector< double >::resize(unsigned int arg1)\nClass arguments details:\n");
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		std::vector< double >* self=(Luna< std::vector< double > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void std::vector< double >::resize(unsigned int). Got : '%s'",typeid(Luna< std::vector< double > >::check(L,1)).name());
		}
		self->resize(arg1);

		return 0;
	}

	// void std::vector< double >::pop_back()
	static int _bind_pop_back(lua_State *L) {
		if (!_lg_typecheck_pop_back(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void std::vector< double >::pop_back() function, expected prototype:\nvoid std::vector< double >::pop_back()\nClass arguments details:\n");
		}


		std::vector< double >* self=(Luna< std::vector< double > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void std::vector< double >::pop_back(). Got : '%s'",typeid(Luna< std::vector< double > >::check(L,1)).name());
		}
		self->pop_back();

		return 0;
	}

	// void std::vector< double >::push_back(double arg1)
	static int _bind_push_back(lua_State *L) {
		if (!_lg_typecheck_push_back(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void std::vector< double >::push_back(double arg1) function, expected prototype:\nvoid std::vector< double >::push_back(double arg1)\nClass arguments details:\n");
		}

		double arg1=(double)lua_tonumber(L,2);

		std::vector< double >* self=(Luna< std::vector< double > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void std::vector< double >::push_back(double). Got : '%s'",typeid(Luna< std::vector< double > >::check(L,1)).name());
		}
		self->push_back(arg1);

		return 0;
	}

	// void std::vector< double >::swap(std::vector< double > arg1)
	static int _bind_swap(lua_State *L) {
		if (!_lg_typecheck_swap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void std::vector< double >::swap(std::vector< double > arg1) function, expected prototype:\nvoid std::vector< double >::swap(std::vector< double > arg1)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		std::vector< double >* arg1_ptr=(Luna< std::vector< double > >::check(L,2));
		if( !arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg1 in std::vector< double >::swap function");
		}
		std::vector< double > arg1=*arg1_ptr;

		std::vector< double >* self=(Luna< std::vector< double > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void std::vector< double >::swap(std::vector< double >). Got : '%s'",typeid(Luna< std::vector< double > >::check(L,1)).name());
		}
		self->swap(arg1);

		return 0;
	}

	// double std::vector< double >::operator[](unsigned int arg1)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double std::vector< double >::operator[](unsigned int arg1) function, expected prototype:\ndouble std::vector< double >::operator[](unsigned int arg1)\nClass arguments details:\n");
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		std::vector< double >* self=(Luna< std::vector< double > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double std::vector< double >::operator[](unsigned int). Got : '%s'",typeid(Luna< std::vector< double > >::check(L,1)).name());
		}
		double lret = self->operator[](arg1);
		lua_pushnumber(L,lret);

		return 1;
	}

};

std::vector< double >* LunaTraits< std::vector< double > >::_bind_ctor(lua_State *L) {
	return new std::vector< double >();
}

void LunaTraits< std::vector< double > >::_bind_dtor(std::vector< double >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< double > >::className[] = "std_vector_double";
const char LunaTraits< std::vector< double > >::fullName[] = "std::vector< double >";
const char LunaTraits< std::vector< double > >::moduleName[] = "sgt";
const char* LunaTraits< std::vector< double > >::parents[] = {0};
const int LunaTraits< std::vector< double > >::hash = 4564820;
const int LunaTraits< std::vector< double > >::uniqueIDs[] = {4564820,0};

luna_RegType LunaTraits< std::vector< double > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_double::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_double::_bind___eq},
	
	{"assign", &luna_wrapper_std_vector_double::_bind_assign},
	{"at", &luna_wrapper_std_vector_double::_bind_at},
	{"back", &luna_wrapper_std_vector_double::_bind_back},
	{"front", &luna_wrapper_std_vector_double::_bind_front},
	{"clear", &luna_wrapper_std_vector_double::_bind_clear},
	{"empty", &luna_wrapper_std_vector_double::_bind_empty},
	{"size", &luna_wrapper_std_vector_double::_bind_size},
	{"resize", &luna_wrapper_std_vector_double::_bind_resize},
	{"pop_back", &luna_wrapper_std_vector_double::_bind_pop_back},
	{"push_back", &luna_wrapper_std_vector_double::_bind_push_back},
	{"swap", &luna_wrapper_std_vector_double::_bind_swap},
	{"op_index", &luna_wrapper_std_vector_double::_bind_op_index},
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< double > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< double > >::enumValues[] = {
	{0,0}
};


