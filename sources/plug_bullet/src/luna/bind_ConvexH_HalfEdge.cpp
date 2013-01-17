#include <plug_common.h>

class luna_wrapper_ConvexH_HalfEdge {
public:
	typedef Luna< ConvexH::HalfEdge > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71871586) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ConvexH::HalfEdge*)");
		}

		ConvexH::HalfEdge* rhs =(Luna< ConvexH::HalfEdge >::check(L,2));
		ConvexH::HalfEdge* self=(Luna< ConvexH::HalfEdge >::check(L,1));
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

		ConvexH::HalfEdge* self=(Luna< ConvexH::HalfEdge >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ConvexH::HalfEdge");
		
		return luna_dynamicCast(L,converters,"ConvexH::HalfEdge",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getEa(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getV(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getP(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEa(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setV(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setP(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ConvexH::HalfEdge::HalfEdge()
	static ConvexH::HalfEdge* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in ConvexH::HalfEdge::HalfEdge() function, expected prototype:\nConvexH::HalfEdge::HalfEdge()\nClass arguments details:\n");
		}


		return new ConvexH::HalfEdge();
	}

	// ConvexH::HalfEdge::HalfEdge(short _ea, unsigned char _v, unsigned char _p)
	static ConvexH::HalfEdge* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in ConvexH::HalfEdge::HalfEdge(short _ea, unsigned char _v, unsigned char _p) function, expected prototype:\nConvexH::HalfEdge::HalfEdge(short _ea, unsigned char _v, unsigned char _p)\nClass arguments details:\n");
		}

		short _ea=(short)lua_tointeger(L,1);
		unsigned char _v = (unsigned char)(lua_tointeger(L,2));
		unsigned char _p = (unsigned char)(lua_tointeger(L,3));

		return new ConvexH::HalfEdge(_ea, _v, _p);
	}

	// Overload binder for ConvexH::HalfEdge::HalfEdge
	static ConvexH::HalfEdge* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function HalfEdge, cannot match any of the overloads for function HalfEdge:\n  HalfEdge()\n  HalfEdge(short, unsigned char, unsigned char)\n");
		return NULL;
	}


	// Function binds:
	// short ConvexH::HalfEdge::ea()
	static int _bind_getEa(lua_State *L) {
		if (!_lg_typecheck_getEa(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in short ConvexH::HalfEdge::ea() function, expected prototype:\nshort ConvexH::HalfEdge::ea()\nClass arguments details:\n");
		}


		ConvexH::HalfEdge* self=(Luna< ConvexH::HalfEdge >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call short ConvexH::HalfEdge::ea(). Got : '%s'",typeid(Luna< ConvexH::HalfEdge >::check(L,1)).name());
		}
		short lret = self->ea;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned char ConvexH::HalfEdge::v()
	static int _bind_getV(lua_State *L) {
		if (!_lg_typecheck_getV(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned char ConvexH::HalfEdge::v() function, expected prototype:\nunsigned char ConvexH::HalfEdge::v()\nClass arguments details:\n");
		}


		ConvexH::HalfEdge* self=(Luna< ConvexH::HalfEdge >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned char ConvexH::HalfEdge::v(). Got : '%s'",typeid(Luna< ConvexH::HalfEdge >::check(L,1)).name());
		}
		unsigned char lret = self->v;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char ConvexH::HalfEdge::p()
	static int _bind_getP(lua_State *L) {
		if (!_lg_typecheck_getP(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned char ConvexH::HalfEdge::p() function, expected prototype:\nunsigned char ConvexH::HalfEdge::p()\nClass arguments details:\n");
		}


		ConvexH::HalfEdge* self=(Luna< ConvexH::HalfEdge >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned char ConvexH::HalfEdge::p(). Got : '%s'",typeid(Luna< ConvexH::HalfEdge >::check(L,1)).name());
		}
		unsigned char lret = self->p;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// void ConvexH::HalfEdge::ea(short value)
	static int _bind_setEa(lua_State *L) {
		if (!_lg_typecheck_setEa(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void ConvexH::HalfEdge::ea(short value) function, expected prototype:\nvoid ConvexH::HalfEdge::ea(short value)\nClass arguments details:\n");
		}

		short value=(short)lua_tointeger(L,2);

		ConvexH::HalfEdge* self=(Luna< ConvexH::HalfEdge >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void ConvexH::HalfEdge::ea(short). Got : '%s'",typeid(Luna< ConvexH::HalfEdge >::check(L,1)).name());
		}
		self->ea = value;

		return 0;
	}

	// void ConvexH::HalfEdge::v(unsigned char value)
	static int _bind_setV(lua_State *L) {
		if (!_lg_typecheck_setV(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void ConvexH::HalfEdge::v(unsigned char value) function, expected prototype:\nvoid ConvexH::HalfEdge::v(unsigned char value)\nClass arguments details:\n");
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		ConvexH::HalfEdge* self=(Luna< ConvexH::HalfEdge >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void ConvexH::HalfEdge::v(unsigned char). Got : '%s'",typeid(Luna< ConvexH::HalfEdge >::check(L,1)).name());
		}
		self->v = value;

		return 0;
	}

	// void ConvexH::HalfEdge::p(unsigned char value)
	static int _bind_setP(lua_State *L) {
		if (!_lg_typecheck_setP(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void ConvexH::HalfEdge::p(unsigned char value) function, expected prototype:\nvoid ConvexH::HalfEdge::p(unsigned char value)\nClass arguments details:\n");
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		ConvexH::HalfEdge* self=(Luna< ConvexH::HalfEdge >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void ConvexH::HalfEdge::p(unsigned char). Got : '%s'",typeid(Luna< ConvexH::HalfEdge >::check(L,1)).name());
		}
		self->p = value;

		return 0;
	}


	// Operator binds:

};

ConvexH::HalfEdge* LunaTraits< ConvexH::HalfEdge >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ConvexH_HalfEdge::_bind_ctor(L);
}

void LunaTraits< ConvexH::HalfEdge >::_bind_dtor(ConvexH::HalfEdge* obj) {
	delete obj;
}

const char LunaTraits< ConvexH::HalfEdge >::className[] = "ConvexH_HalfEdge";
const char LunaTraits< ConvexH::HalfEdge >::fullName[] = "ConvexH::HalfEdge";
const char LunaTraits< ConvexH::HalfEdge >::moduleName[] = "ConvexH";
const char* LunaTraits< ConvexH::HalfEdge >::parents[] = {0};
const int LunaTraits< ConvexH::HalfEdge >::hash = 71871586;
const int LunaTraits< ConvexH::HalfEdge >::uniqueIDs[] = {71871586,0};

luna_RegType LunaTraits< ConvexH::HalfEdge >::methods[] = {
	{"getEa", &luna_wrapper_ConvexH_HalfEdge::_bind_getEa},
	{"getV", &luna_wrapper_ConvexH_HalfEdge::_bind_getV},
	{"getP", &luna_wrapper_ConvexH_HalfEdge::_bind_getP},
	{"setEa", &luna_wrapper_ConvexH_HalfEdge::_bind_setEa},
	{"setV", &luna_wrapper_ConvexH_HalfEdge::_bind_setV},
	{"setP", &luna_wrapper_ConvexH_HalfEdge::_bind_setP},
	{"dynCast", &luna_wrapper_ConvexH_HalfEdge::_bind_dynCast},
	{"__eq", &luna_wrapper_ConvexH_HalfEdge::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< ConvexH::HalfEdge >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ConvexH::HalfEdge >::enumValues[] = {
	{0,0}
};

