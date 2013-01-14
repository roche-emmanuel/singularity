#include <plug_common.h>

class luna_wrapper_b2TimeStep {
public:
	typedef Luna< b2TimeStep > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,28832978) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2TimeStep*)");
		}

		b2TimeStep* rhs =(Luna< b2TimeStep >::check(L,2));
		b2TimeStep* self=(Luna< b2TimeStep >::check(L,1));
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

		b2TimeStep* self=(Luna< b2TimeStep >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2TimeStep");
		
		return luna_dynamicCast(L,converters,"b2TimeStep",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getDt(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInv_dt(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDtRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVelocityIterations(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPositionIterations(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWarmStarting(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInv_dt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDtRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVelocityIterations(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPositionIterations(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWarmStarting(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// float b2TimeStep::dt()
	static int _bind_getDt(lua_State *L) {
		if (!_lg_typecheck_getDt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2TimeStep::dt() function, expected prototype:\nfloat b2TimeStep::dt()\nClass arguments details:\n");
		}


		b2TimeStep* self=(Luna< b2TimeStep >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2TimeStep::dt(). Got : '%s'",typeid(Luna< b2TimeStep >::check(L,1)).name());
		}
		float lret = self->dt;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2TimeStep::inv_dt()
	static int _bind_getInv_dt(lua_State *L) {
		if (!_lg_typecheck_getInv_dt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2TimeStep::inv_dt() function, expected prototype:\nfloat b2TimeStep::inv_dt()\nClass arguments details:\n");
		}


		b2TimeStep* self=(Luna< b2TimeStep >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2TimeStep::inv_dt(). Got : '%s'",typeid(Luna< b2TimeStep >::check(L,1)).name());
		}
		float lret = self->inv_dt;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2TimeStep::dtRatio()
	static int _bind_getDtRatio(lua_State *L) {
		if (!_lg_typecheck_getDtRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2TimeStep::dtRatio() function, expected prototype:\nfloat b2TimeStep::dtRatio()\nClass arguments details:\n");
		}


		b2TimeStep* self=(Luna< b2TimeStep >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2TimeStep::dtRatio(). Got : '%s'",typeid(Luna< b2TimeStep >::check(L,1)).name());
		}
		float lret = self->dtRatio;
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2TimeStep::velocityIterations()
	static int _bind_getVelocityIterations(lua_State *L) {
		if (!_lg_typecheck_getVelocityIterations(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2TimeStep::velocityIterations() function, expected prototype:\nsigned int b2TimeStep::velocityIterations()\nClass arguments details:\n");
		}


		b2TimeStep* self=(Luna< b2TimeStep >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2TimeStep::velocityIterations(). Got : '%s'",typeid(Luna< b2TimeStep >::check(L,1)).name());
		}
		signed int lret = self->velocityIterations;
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2TimeStep::positionIterations()
	static int _bind_getPositionIterations(lua_State *L) {
		if (!_lg_typecheck_getPositionIterations(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2TimeStep::positionIterations() function, expected prototype:\nsigned int b2TimeStep::positionIterations()\nClass arguments details:\n");
		}


		b2TimeStep* self=(Luna< b2TimeStep >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2TimeStep::positionIterations(). Got : '%s'",typeid(Luna< b2TimeStep >::check(L,1)).name());
		}
		signed int lret = self->positionIterations;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool b2TimeStep::warmStarting()
	static int _bind_getWarmStarting(lua_State *L) {
		if (!_lg_typecheck_getWarmStarting(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2TimeStep::warmStarting() function, expected prototype:\nbool b2TimeStep::warmStarting()\nClass arguments details:\n");
		}


		b2TimeStep* self=(Luna< b2TimeStep >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2TimeStep::warmStarting(). Got : '%s'",typeid(Luna< b2TimeStep >::check(L,1)).name());
		}
		bool lret = self->warmStarting;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2TimeStep::dt(float value)
	static int _bind_setDt(lua_State *L) {
		if (!_lg_typecheck_setDt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2TimeStep::dt(float value) function, expected prototype:\nvoid b2TimeStep::dt(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2TimeStep* self=(Luna< b2TimeStep >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2TimeStep::dt(float). Got : '%s'",typeid(Luna< b2TimeStep >::check(L,1)).name());
		}
		self->dt = value;

		return 0;
	}

	// void b2TimeStep::inv_dt(float value)
	static int _bind_setInv_dt(lua_State *L) {
		if (!_lg_typecheck_setInv_dt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2TimeStep::inv_dt(float value) function, expected prototype:\nvoid b2TimeStep::inv_dt(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2TimeStep* self=(Luna< b2TimeStep >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2TimeStep::inv_dt(float). Got : '%s'",typeid(Luna< b2TimeStep >::check(L,1)).name());
		}
		self->inv_dt = value;

		return 0;
	}

	// void b2TimeStep::dtRatio(float value)
	static int _bind_setDtRatio(lua_State *L) {
		if (!_lg_typecheck_setDtRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2TimeStep::dtRatio(float value) function, expected prototype:\nvoid b2TimeStep::dtRatio(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2TimeStep* self=(Luna< b2TimeStep >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2TimeStep::dtRatio(float). Got : '%s'",typeid(Luna< b2TimeStep >::check(L,1)).name());
		}
		self->dtRatio = value;

		return 0;
	}

	// void b2TimeStep::velocityIterations(signed int value)
	static int _bind_setVelocityIterations(lua_State *L) {
		if (!_lg_typecheck_setVelocityIterations(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2TimeStep::velocityIterations(signed int value) function, expected prototype:\nvoid b2TimeStep::velocityIterations(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2TimeStep* self=(Luna< b2TimeStep >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2TimeStep::velocityIterations(signed int). Got : '%s'",typeid(Luna< b2TimeStep >::check(L,1)).name());
		}
		self->velocityIterations = value;

		return 0;
	}

	// void b2TimeStep::positionIterations(signed int value)
	static int _bind_setPositionIterations(lua_State *L) {
		if (!_lg_typecheck_setPositionIterations(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2TimeStep::positionIterations(signed int value) function, expected prototype:\nvoid b2TimeStep::positionIterations(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2TimeStep* self=(Luna< b2TimeStep >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2TimeStep::positionIterations(signed int). Got : '%s'",typeid(Luna< b2TimeStep >::check(L,1)).name());
		}
		self->positionIterations = value;

		return 0;
	}

	// void b2TimeStep::warmStarting(bool value)
	static int _bind_setWarmStarting(lua_State *L) {
		if (!_lg_typecheck_setWarmStarting(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2TimeStep::warmStarting(bool value) function, expected prototype:\nvoid b2TimeStep::warmStarting(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		b2TimeStep* self=(Luna< b2TimeStep >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2TimeStep::warmStarting(bool). Got : '%s'",typeid(Luna< b2TimeStep >::check(L,1)).name());
		}
		self->warmStarting = value;

		return 0;
	}


	// Operator binds:

};

b2TimeStep* LunaTraits< b2TimeStep >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< b2TimeStep >::_bind_dtor(b2TimeStep* obj) {
	delete obj;
}

const char LunaTraits< b2TimeStep >::className[] = "b2TimeStep";
const char LunaTraits< b2TimeStep >::fullName[] = "b2TimeStep";
const char LunaTraits< b2TimeStep >::moduleName[] = "box2d";
const char* LunaTraits< b2TimeStep >::parents[] = {0};
const int LunaTraits< b2TimeStep >::hash = 28832978;
const int LunaTraits< b2TimeStep >::uniqueIDs[] = {28832978,0};

luna_RegType LunaTraits< b2TimeStep >::methods[] = {
	{"getDt", &luna_wrapper_b2TimeStep::_bind_getDt},
	{"getInv_dt", &luna_wrapper_b2TimeStep::_bind_getInv_dt},
	{"getDtRatio", &luna_wrapper_b2TimeStep::_bind_getDtRatio},
	{"getVelocityIterations", &luna_wrapper_b2TimeStep::_bind_getVelocityIterations},
	{"getPositionIterations", &luna_wrapper_b2TimeStep::_bind_getPositionIterations},
	{"getWarmStarting", &luna_wrapper_b2TimeStep::_bind_getWarmStarting},
	{"setDt", &luna_wrapper_b2TimeStep::_bind_setDt},
	{"setInv_dt", &luna_wrapper_b2TimeStep::_bind_setInv_dt},
	{"setDtRatio", &luna_wrapper_b2TimeStep::_bind_setDtRatio},
	{"setVelocityIterations", &luna_wrapper_b2TimeStep::_bind_setVelocityIterations},
	{"setPositionIterations", &luna_wrapper_b2TimeStep::_bind_setPositionIterations},
	{"setWarmStarting", &luna_wrapper_b2TimeStep::_bind_setWarmStarting},
	{"dynCast", &luna_wrapper_b2TimeStep::_bind_dynCast},
	{"__eq", &luna_wrapper_b2TimeStep::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< b2TimeStep >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2TimeStep >::enumValues[] = {
	{0,0}
};


