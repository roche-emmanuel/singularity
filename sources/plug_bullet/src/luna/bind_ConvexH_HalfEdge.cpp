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
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ConvexH::HalfEdge*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ConvexH::HalfEdge* rhs =(Luna< ConvexH::HalfEdge >::check(L,2));
		ConvexH::HalfEdge* self=(Luna< ConvexH::HalfEdge >::check(L,1));
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
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ConvexH::HalfEdge* self= (ConvexH::HalfEdge*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ConvexH::HalfEdge >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71871586) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ConvexH::HalfEdge >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
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

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setV(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setP(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ConvexH::HalfEdge::HalfEdge()
	static ConvexH::HalfEdge* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ConvexH::HalfEdge::HalfEdge() function, expected prototype:\nConvexH::HalfEdge::HalfEdge()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ConvexH::HalfEdge();
	}

	// ConvexH::HalfEdge::HalfEdge(short _ea, unsigned char _v, unsigned char _p)
	static ConvexH::HalfEdge* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ConvexH::HalfEdge::HalfEdge(short _ea, unsigned char _v, unsigned char _p) function, expected prototype:\nConvexH::HalfEdge::HalfEdge(short _ea, unsigned char _v, unsigned char _p)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
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
			luaL_error(L, "luna typecheck failed in short ConvexH::HalfEdge::ea() function, expected prototype:\nshort ConvexH::HalfEdge::ea()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ConvexH::HalfEdge* self=(Luna< ConvexH::HalfEdge >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short ConvexH::HalfEdge::ea(). Got : '%s'\n%s",typeid(Luna< ConvexH::HalfEdge >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short lret = self->ea;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned char ConvexH::HalfEdge::v()
	static int _bind_getV(lua_State *L) {
		if (!_lg_typecheck_getV(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char ConvexH::HalfEdge::v() function, expected prototype:\nunsigned char ConvexH::HalfEdge::v()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ConvexH::HalfEdge* self=(Luna< ConvexH::HalfEdge >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char ConvexH::HalfEdge::v(). Got : '%s'\n%s",typeid(Luna< ConvexH::HalfEdge >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->v;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char ConvexH::HalfEdge::p()
	static int _bind_getP(lua_State *L) {
		if (!_lg_typecheck_getP(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char ConvexH::HalfEdge::p() function, expected prototype:\nunsigned char ConvexH::HalfEdge::p()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ConvexH::HalfEdge* self=(Luna< ConvexH::HalfEdge >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char ConvexH::HalfEdge::p(). Got : '%s'\n%s",typeid(Luna< ConvexH::HalfEdge >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->p;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// void ConvexH::HalfEdge::ea(short value)
	static int _bind_setEa(lua_State *L) {
		if (!_lg_typecheck_setEa(L)) {
			luaL_error(L, "luna typecheck failed in void ConvexH::HalfEdge::ea(short value) function, expected prototype:\nvoid ConvexH::HalfEdge::ea(short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		short value=(short)lua_tointeger(L,2);

		ConvexH::HalfEdge* self=(Luna< ConvexH::HalfEdge >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ConvexH::HalfEdge::ea(short). Got : '%s'\n%s",typeid(Luna< ConvexH::HalfEdge >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ea = value;

		return 0;
	}

	// void ConvexH::HalfEdge::v(unsigned char value)
	static int _bind_setV(lua_State *L) {
		if (!_lg_typecheck_setV(L)) {
			luaL_error(L, "luna typecheck failed in void ConvexH::HalfEdge::v(unsigned char value) function, expected prototype:\nvoid ConvexH::HalfEdge::v(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		ConvexH::HalfEdge* self=(Luna< ConvexH::HalfEdge >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ConvexH::HalfEdge::v(unsigned char). Got : '%s'\n%s",typeid(Luna< ConvexH::HalfEdge >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->v = value;

		return 0;
	}

	// void ConvexH::HalfEdge::p(unsigned char value)
	static int _bind_setP(lua_State *L) {
		if (!_lg_typecheck_setP(L)) {
			luaL_error(L, "luna typecheck failed in void ConvexH::HalfEdge::p(unsigned char value) function, expected prototype:\nvoid ConvexH::HalfEdge::p(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		ConvexH::HalfEdge* self=(Luna< ConvexH::HalfEdge >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ConvexH::HalfEdge::p(unsigned char). Got : '%s'\n%s",typeid(Luna< ConvexH::HalfEdge >::check(L,1)).name(),luna_dumpStack(L).c_str());
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
const char LunaTraits< ConvexH::HalfEdge >::moduleName[] = "bullet";
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
	{"fromVoid", &luna_wrapper_ConvexH_HalfEdge::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ConvexH_HalfEdge::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ConvexH::HalfEdge >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ConvexH::HalfEdge >::enumValues[] = {
	{0,0}
};


