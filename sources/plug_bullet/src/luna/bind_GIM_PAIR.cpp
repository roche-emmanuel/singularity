#include <plug_common.h>

class luna_wrapper_GIM_PAIR {
public:
	typedef Luna< GIM_PAIR > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,77876536) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(GIM_PAIR*)");
		}

		GIM_PAIR* rhs =(Luna< GIM_PAIR >::check(L,2));
		GIM_PAIR* self=(Luna< GIM_PAIR >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		GIM_PAIR* self= (GIM_PAIR*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< GIM_PAIR >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,77876536) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< GIM_PAIR >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
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

		GIM_PAIR* self=(Luna< GIM_PAIR >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("GIM_PAIR");
		
		return luna_dynamicCast(L,converters,"GIM_PAIR",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,77876536) ) return false;
		if( (!(Luna< GIM_PAIR >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getIndex1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIndex2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setIndex1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIndex2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// GIM_PAIR::GIM_PAIR()
	static GIM_PAIR* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GIM_PAIR::GIM_PAIR() function, expected prototype:\nGIM_PAIR::GIM_PAIR()\nClass arguments details:\n");
		}


		return new GIM_PAIR();
	}

	// GIM_PAIR::GIM_PAIR(const GIM_PAIR & p)
	static GIM_PAIR* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GIM_PAIR::GIM_PAIR(const GIM_PAIR & p) function, expected prototype:\nGIM_PAIR::GIM_PAIR(const GIM_PAIR & p)\nClass arguments details:\narg 1 ID = 77876536\n");
		}

		const GIM_PAIR* p_ptr=(Luna< GIM_PAIR >::check(L,1));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in GIM_PAIR::GIM_PAIR function");
		}
		const GIM_PAIR & p=*p_ptr;

		return new GIM_PAIR(p);
	}

	// GIM_PAIR::GIM_PAIR(int index1, int index2)
	static GIM_PAIR* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GIM_PAIR::GIM_PAIR(int index1, int index2) function, expected prototype:\nGIM_PAIR::GIM_PAIR(int index1, int index2)\nClass arguments details:\n");
		}

		int index1=(int)lua_tointeger(L,1);
		int index2=(int)lua_tointeger(L,2);

		return new GIM_PAIR(index1, index2);
	}

	// Overload binder for GIM_PAIR::GIM_PAIR
	static GIM_PAIR* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function GIM_PAIR, cannot match any of the overloads for function GIM_PAIR:\n  GIM_PAIR()\n  GIM_PAIR(const GIM_PAIR &)\n  GIM_PAIR(int, int)\n");
		return NULL;
	}


	// Function binds:
	// int GIM_PAIR::m_index1()
	static int _bind_getIndex1(lua_State *L) {
		if (!_lg_typecheck_getIndex1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int GIM_PAIR::m_index1() function, expected prototype:\nint GIM_PAIR::m_index1()\nClass arguments details:\n");
		}


		GIM_PAIR* self=(Luna< GIM_PAIR >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int GIM_PAIR::m_index1(). Got : '%s'",typeid(Luna< GIM_PAIR >::check(L,1)).name());
		}
		int lret = self->m_index1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int GIM_PAIR::m_index2()
	static int _bind_getIndex2(lua_State *L) {
		if (!_lg_typecheck_getIndex2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int GIM_PAIR::m_index2() function, expected prototype:\nint GIM_PAIR::m_index2()\nClass arguments details:\n");
		}


		GIM_PAIR* self=(Luna< GIM_PAIR >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int GIM_PAIR::m_index2(). Got : '%s'",typeid(Luna< GIM_PAIR >::check(L,1)).name());
		}
		int lret = self->m_index2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void GIM_PAIR::m_index1(int value)
	static int _bind_setIndex1(lua_State *L) {
		if (!_lg_typecheck_setIndex1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GIM_PAIR::m_index1(int value) function, expected prototype:\nvoid GIM_PAIR::m_index1(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		GIM_PAIR* self=(Luna< GIM_PAIR >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GIM_PAIR::m_index1(int). Got : '%s'",typeid(Luna< GIM_PAIR >::check(L,1)).name());
		}
		self->m_index1 = value;

		return 0;
	}

	// void GIM_PAIR::m_index2(int value)
	static int _bind_setIndex2(lua_State *L) {
		if (!_lg_typecheck_setIndex2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GIM_PAIR::m_index2(int value) function, expected prototype:\nvoid GIM_PAIR::m_index2(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		GIM_PAIR* self=(Luna< GIM_PAIR >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GIM_PAIR::m_index2(int). Got : '%s'",typeid(Luna< GIM_PAIR >::check(L,1)).name());
		}
		self->m_index2 = value;

		return 0;
	}


	// Operator binds:

};

GIM_PAIR* LunaTraits< GIM_PAIR >::_bind_ctor(lua_State *L) {
	return luna_wrapper_GIM_PAIR::_bind_ctor(L);
}

void LunaTraits< GIM_PAIR >::_bind_dtor(GIM_PAIR* obj) {
	delete obj;
}

const char LunaTraits< GIM_PAIR >::className[] = "GIM_PAIR";
const char LunaTraits< GIM_PAIR >::fullName[] = "GIM_PAIR";
const char LunaTraits< GIM_PAIR >::moduleName[] = "bullet";
const char* LunaTraits< GIM_PAIR >::parents[] = {0};
const int LunaTraits< GIM_PAIR >::hash = 77876536;
const int LunaTraits< GIM_PAIR >::uniqueIDs[] = {77876536,0};

luna_RegType LunaTraits< GIM_PAIR >::methods[] = {
	{"getIndex1", &luna_wrapper_GIM_PAIR::_bind_getIndex1},
	{"getIndex2", &luna_wrapper_GIM_PAIR::_bind_getIndex2},
	{"setIndex1", &luna_wrapper_GIM_PAIR::_bind_setIndex1},
	{"setIndex2", &luna_wrapper_GIM_PAIR::_bind_setIndex2},
	{"dynCast", &luna_wrapper_GIM_PAIR::_bind_dynCast},
	{"__eq", &luna_wrapper_GIM_PAIR::_bind___eq},
	{"fromVoid", &luna_wrapper_GIM_PAIR::_bind_fromVoid},
	{"asVoid", &luna_wrapper_GIM_PAIR::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< GIM_PAIR >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< GIM_PAIR >::enumValues[] = {
	{0,0}
};


