#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_micropather_StateCost {
public:
	typedef Luna< std::vector< micropather::StateCost > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74098665) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< micropather::StateCost >*)");
		}

		std::vector< micropather::StateCost >* rhs =(Luna< std::vector< micropather::StateCost > >::check(L,2));
		std::vector< micropather::StateCost >* self=(Luna< std::vector< micropather::StateCost > >::check(L,1));
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

		std::vector< micropather::StateCost >* self=(Luna< std::vector< micropather::StateCost > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< micropather::StateCost >");
		
		return luna_dynamicCast(L,converters,"std::vector< micropather::StateCost >",name);
	}

	inline static bool _lg_typecheck_assign(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,76995717) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,76995717) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// void std::vector< micropather::StateCost >::assign(unsigned int arg1, micropather::StateCost arg2)
	static int _bind_assign(lua_State *L) {
		if (!_lg_typecheck_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void std::vector< micropather::StateCost >::assign(unsigned int arg1, micropather::StateCost arg2) function, expected prototype:\nvoid std::vector< micropather::StateCost >::assign(unsigned int arg1, micropather::StateCost arg2)\nClass arguments details:\narg 2 ID = 76995717\n");
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);
		micropather::StateCost* arg2_ptr=(Luna< micropather::StateCost >::check(L,3));
		if( !arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg2 in std::vector< micropather::StateCost >::assign function");
		}
		micropather::StateCost arg2=*arg2_ptr;

		std::vector< micropather::StateCost >* self=(Luna< std::vector< micropather::StateCost > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void std::vector< micropather::StateCost >::assign(unsigned int, micropather::StateCost). Got : '%s'",typeid(Luna< std::vector< micropather::StateCost > >::check(L,1)).name());
		}
		self->assign(arg1, arg2);

		return 0;
	}

	// micropather::StateCost std::vector< micropather::StateCost >::at(unsigned int arg1)
	static int _bind_at(lua_State *L) {
		if (!_lg_typecheck_at(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in micropather::StateCost std::vector< micropather::StateCost >::at(unsigned int arg1) function, expected prototype:\nmicropather::StateCost std::vector< micropather::StateCost >::at(unsigned int arg1)\nClass arguments details:\n");
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		std::vector< micropather::StateCost >* self=(Luna< std::vector< micropather::StateCost > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call micropather::StateCost std::vector< micropather::StateCost >::at(unsigned int). Got : '%s'",typeid(Luna< std::vector< micropather::StateCost > >::check(L,1)).name());
		}
		micropather::StateCost stack_lret = self->at(arg1);
		micropather::StateCost* lret = new micropather::StateCost(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< micropather::StateCost >::push(L,lret,true);

		return 1;
	}

	// micropather::StateCost std::vector< micropather::StateCost >::back()
	static int _bind_back(lua_State *L) {
		if (!_lg_typecheck_back(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in micropather::StateCost std::vector< micropather::StateCost >::back() function, expected prototype:\nmicropather::StateCost std::vector< micropather::StateCost >::back()\nClass arguments details:\n");
		}


		std::vector< micropather::StateCost >* self=(Luna< std::vector< micropather::StateCost > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call micropather::StateCost std::vector< micropather::StateCost >::back(). Got : '%s'",typeid(Luna< std::vector< micropather::StateCost > >::check(L,1)).name());
		}
		micropather::StateCost stack_lret = self->back();
		micropather::StateCost* lret = new micropather::StateCost(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< micropather::StateCost >::push(L,lret,true);

		return 1;
	}

	// micropather::StateCost std::vector< micropather::StateCost >::front()
	static int _bind_front(lua_State *L) {
		if (!_lg_typecheck_front(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in micropather::StateCost std::vector< micropather::StateCost >::front() function, expected prototype:\nmicropather::StateCost std::vector< micropather::StateCost >::front()\nClass arguments details:\n");
		}


		std::vector< micropather::StateCost >* self=(Luna< std::vector< micropather::StateCost > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call micropather::StateCost std::vector< micropather::StateCost >::front(). Got : '%s'",typeid(Luna< std::vector< micropather::StateCost > >::check(L,1)).name());
		}
		micropather::StateCost stack_lret = self->front();
		micropather::StateCost* lret = new micropather::StateCost(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< micropather::StateCost >::push(L,lret,true);

		return 1;
	}

	// void std::vector< micropather::StateCost >::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void std::vector< micropather::StateCost >::clear() function, expected prototype:\nvoid std::vector< micropather::StateCost >::clear()\nClass arguments details:\n");
		}


		std::vector< micropather::StateCost >* self=(Luna< std::vector< micropather::StateCost > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void std::vector< micropather::StateCost >::clear(). Got : '%s'",typeid(Luna< std::vector< micropather::StateCost > >::check(L,1)).name());
		}
		self->clear();

		return 0;
	}

	// bool std::vector< micropather::StateCost >::empty()
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool std::vector< micropather::StateCost >::empty() function, expected prototype:\nbool std::vector< micropather::StateCost >::empty()\nClass arguments details:\n");
		}


		std::vector< micropather::StateCost >* self=(Luna< std::vector< micropather::StateCost > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool std::vector< micropather::StateCost >::empty(). Got : '%s'",typeid(Luna< std::vector< micropather::StateCost > >::check(L,1)).name());
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int std::vector< micropather::StateCost >::size()
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int std::vector< micropather::StateCost >::size() function, expected prototype:\nunsigned int std::vector< micropather::StateCost >::size()\nClass arguments details:\n");
		}


		std::vector< micropather::StateCost >* self=(Luna< std::vector< micropather::StateCost > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int std::vector< micropather::StateCost >::size(). Got : '%s'",typeid(Luna< std::vector< micropather::StateCost > >::check(L,1)).name());
		}
		unsigned int lret = self->size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void std::vector< micropather::StateCost >::resize(unsigned int arg1)
	static int _bind_resize(lua_State *L) {
		if (!_lg_typecheck_resize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void std::vector< micropather::StateCost >::resize(unsigned int arg1) function, expected prototype:\nvoid std::vector< micropather::StateCost >::resize(unsigned int arg1)\nClass arguments details:\n");
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		std::vector< micropather::StateCost >* self=(Luna< std::vector< micropather::StateCost > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void std::vector< micropather::StateCost >::resize(unsigned int). Got : '%s'",typeid(Luna< std::vector< micropather::StateCost > >::check(L,1)).name());
		}
		self->resize(arg1);

		return 0;
	}

	// void std::vector< micropather::StateCost >::pop_back()
	static int _bind_pop_back(lua_State *L) {
		if (!_lg_typecheck_pop_back(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void std::vector< micropather::StateCost >::pop_back() function, expected prototype:\nvoid std::vector< micropather::StateCost >::pop_back()\nClass arguments details:\n");
		}


		std::vector< micropather::StateCost >* self=(Luna< std::vector< micropather::StateCost > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void std::vector< micropather::StateCost >::pop_back(). Got : '%s'",typeid(Luna< std::vector< micropather::StateCost > >::check(L,1)).name());
		}
		self->pop_back();

		return 0;
	}

	// void std::vector< micropather::StateCost >::push_back(micropather::StateCost arg1)
	static int _bind_push_back(lua_State *L) {
		if (!_lg_typecheck_push_back(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void std::vector< micropather::StateCost >::push_back(micropather::StateCost arg1) function, expected prototype:\nvoid std::vector< micropather::StateCost >::push_back(micropather::StateCost arg1)\nClass arguments details:\narg 1 ID = 76995717\n");
		}

		micropather::StateCost* arg1_ptr=(Luna< micropather::StateCost >::check(L,2));
		if( !arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg1 in std::vector< micropather::StateCost >::push_back function");
		}
		micropather::StateCost arg1=*arg1_ptr;

		std::vector< micropather::StateCost >* self=(Luna< std::vector< micropather::StateCost > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void std::vector< micropather::StateCost >::push_back(micropather::StateCost). Got : '%s'",typeid(Luna< std::vector< micropather::StateCost > >::check(L,1)).name());
		}
		self->push_back(arg1);

		return 0;
	}

	// micropather::StateCost std::vector< micropather::StateCost >::operator[](unsigned int arg1)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in micropather::StateCost std::vector< micropather::StateCost >::operator[](unsigned int arg1) function, expected prototype:\nmicropather::StateCost std::vector< micropather::StateCost >::operator[](unsigned int arg1)\nClass arguments details:\n");
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		std::vector< micropather::StateCost >* self=(Luna< std::vector< micropather::StateCost > >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call micropather::StateCost std::vector< micropather::StateCost >::operator[](unsigned int). Got : '%s'",typeid(Luna< std::vector< micropather::StateCost > >::check(L,1)).name());
		}
		micropather::StateCost stack_lret = self->operator[](arg1);
		micropather::StateCost* lret = new micropather::StateCost(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< micropather::StateCost >::push(L,lret,true);

		return 1;
	}

};

std::vector< micropather::StateCost >* LunaTraits< std::vector< micropather::StateCost > >::_bind_ctor(lua_State *L) {
	return new std::vector< micropather::StateCost >();
}

void LunaTraits< std::vector< micropather::StateCost > >::_bind_dtor(std::vector< micropather::StateCost >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< micropather::StateCost > >::className[] = "std_vector_micropather_StateCost";
const char LunaTraits< std::vector< micropather::StateCost > >::fullName[] = "std::vector< micropather::StateCost >";
const char LunaTraits< std::vector< micropather::StateCost > >::moduleName[] = "micropather";
const char* LunaTraits< std::vector< micropather::StateCost > >::parents[] = {0};
const int LunaTraits< std::vector< micropather::StateCost > >::hash = 74098665;
const int LunaTraits< std::vector< micropather::StateCost > >::uniqueIDs[] = {74098665,0};

luna_RegType LunaTraits< std::vector< micropather::StateCost > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_micropather_StateCost::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_micropather_StateCost::_bind___eq},
	
	{"assign", &luna_wrapper_std_vector_micropather_StateCost::_bind_assign},
	{"at", &luna_wrapper_std_vector_micropather_StateCost::_bind_at},
	{"back", &luna_wrapper_std_vector_micropather_StateCost::_bind_back},
	{"front", &luna_wrapper_std_vector_micropather_StateCost::_bind_front},
	{"clear", &luna_wrapper_std_vector_micropather_StateCost::_bind_clear},
	{"empty", &luna_wrapper_std_vector_micropather_StateCost::_bind_empty},
	{"size", &luna_wrapper_std_vector_micropather_StateCost::_bind_size},
	{"resize", &luna_wrapper_std_vector_micropather_StateCost::_bind_resize},
	{"pop_back", &luna_wrapper_std_vector_micropather_StateCost::_bind_pop_back},
	{"push_back", &luna_wrapper_std_vector_micropather_StateCost::_bind_push_back},
	{"op_index", &luna_wrapper_std_vector_micropather_StateCost::_bind_op_index},
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< micropather::StateCost > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< micropather::StateCost > >::enumValues[] = {
	{0,0}
};


