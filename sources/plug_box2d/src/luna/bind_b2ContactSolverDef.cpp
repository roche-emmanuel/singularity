#include <plug_common.h>

class luna_wrapper_b2ContactSolverDef {
public:
	typedef Luna< b2ContactSolverDef > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,69667931) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2ContactSolverDef*)");
		}

		b2ContactSolverDef* rhs =(Luna< b2ContactSolverDef >::check(L,2));
		b2ContactSolverDef* self=(Luna< b2ContactSolverDef >::check(L,1));
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

		b2ContactSolverDef* self=(Luna< b2ContactSolverDef >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2ContactSolverDef");
		
		return luna_dynamicCast(L,converters,"b2ContactSolverDef",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getStep(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPositions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVelocities(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAllocator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStep(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28832978) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPositions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,79848895)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVelocities(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85114450)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAllocator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,83926873)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// b2TimeStep b2ContactSolverDef::step()
	static int _bind_getStep(lua_State *L) {
		if (!_lg_typecheck_getStep(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2TimeStep b2ContactSolverDef::step() function, expected prototype:\nb2TimeStep b2ContactSolverDef::step()\nClass arguments details:\n");
		}


		b2ContactSolverDef* self=(Luna< b2ContactSolverDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2TimeStep b2ContactSolverDef::step(). Got : '%s'",typeid(Luna< b2ContactSolverDef >::check(L,1)).name());
		}
		const b2TimeStep* lret = &self->step;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2TimeStep >::push(L,lret,false);

		return 1;
	}

	// signed int b2ContactSolverDef::count()
	static int _bind_getCount(lua_State *L) {
		if (!_lg_typecheck_getCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2ContactSolverDef::count() function, expected prototype:\nsigned int b2ContactSolverDef::count()\nClass arguments details:\n");
		}


		b2ContactSolverDef* self=(Luna< b2ContactSolverDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2ContactSolverDef::count(). Got : '%s'",typeid(Luna< b2ContactSolverDef >::check(L,1)).name());
		}
		signed int lret = self->count;
		lua_pushnumber(L,lret);

		return 1;
	}

	// b2Position * b2ContactSolverDef::positions()
	static int _bind_getPositions(lua_State *L) {
		if (!_lg_typecheck_getPositions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Position * b2ContactSolverDef::positions() function, expected prototype:\nb2Position * b2ContactSolverDef::positions()\nClass arguments details:\n");
		}


		b2ContactSolverDef* self=(Luna< b2ContactSolverDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Position * b2ContactSolverDef::positions(). Got : '%s'",typeid(Luna< b2ContactSolverDef >::check(L,1)).name());
		}
		b2Position * lret = self->positions;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Position >::push(L,lret,false);

		return 1;
	}

	// b2Velocity * b2ContactSolverDef::velocities()
	static int _bind_getVelocities(lua_State *L) {
		if (!_lg_typecheck_getVelocities(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Velocity * b2ContactSolverDef::velocities() function, expected prototype:\nb2Velocity * b2ContactSolverDef::velocities()\nClass arguments details:\n");
		}


		b2ContactSolverDef* self=(Luna< b2ContactSolverDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Velocity * b2ContactSolverDef::velocities(). Got : '%s'",typeid(Luna< b2ContactSolverDef >::check(L,1)).name());
		}
		b2Velocity * lret = self->velocities;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Velocity >::push(L,lret,false);

		return 1;
	}

	// b2StackAllocator * b2ContactSolverDef::allocator()
	static int _bind_getAllocator(lua_State *L) {
		if (!_lg_typecheck_getAllocator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2StackAllocator * b2ContactSolverDef::allocator() function, expected prototype:\nb2StackAllocator * b2ContactSolverDef::allocator()\nClass arguments details:\n");
		}


		b2ContactSolverDef* self=(Luna< b2ContactSolverDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2StackAllocator * b2ContactSolverDef::allocator(). Got : '%s'",typeid(Luna< b2ContactSolverDef >::check(L,1)).name());
		}
		b2StackAllocator * lret = self->allocator;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2StackAllocator >::push(L,lret,false);

		return 1;
	}

	// void b2ContactSolverDef::step(b2TimeStep value)
	static int _bind_setStep(lua_State *L) {
		if (!_lg_typecheck_setStep(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactSolverDef::step(b2TimeStep value) function, expected prototype:\nvoid b2ContactSolverDef::step(b2TimeStep value)\nClass arguments details:\narg 1 ID = 28832978\n");
		}

		b2TimeStep* value_ptr=(Luna< b2TimeStep >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2ContactSolverDef::step function");
		}
		b2TimeStep value=*value_ptr;

		b2ContactSolverDef* self=(Luna< b2ContactSolverDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactSolverDef::step(b2TimeStep). Got : '%s'",typeid(Luna< b2ContactSolverDef >::check(L,1)).name());
		}
		self->step = value;

		return 0;
	}

	// void b2ContactSolverDef::count(signed int value)
	static int _bind_setCount(lua_State *L) {
		if (!_lg_typecheck_setCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactSolverDef::count(signed int value) function, expected prototype:\nvoid b2ContactSolverDef::count(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2ContactSolverDef* self=(Luna< b2ContactSolverDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactSolverDef::count(signed int). Got : '%s'",typeid(Luna< b2ContactSolverDef >::check(L,1)).name());
		}
		self->count = value;

		return 0;
	}

	// void b2ContactSolverDef::positions(b2Position * value)
	static int _bind_setPositions(lua_State *L) {
		if (!_lg_typecheck_setPositions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactSolverDef::positions(b2Position * value) function, expected prototype:\nvoid b2ContactSolverDef::positions(b2Position * value)\nClass arguments details:\narg 1 ID = 79848895\n");
		}

		b2Position* value=(Luna< b2Position >::check(L,2));

		b2ContactSolverDef* self=(Luna< b2ContactSolverDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactSolverDef::positions(b2Position *). Got : '%s'",typeid(Luna< b2ContactSolverDef >::check(L,1)).name());
		}
		self->positions = value;

		return 0;
	}

	// void b2ContactSolverDef::velocities(b2Velocity * value)
	static int _bind_setVelocities(lua_State *L) {
		if (!_lg_typecheck_setVelocities(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactSolverDef::velocities(b2Velocity * value) function, expected prototype:\nvoid b2ContactSolverDef::velocities(b2Velocity * value)\nClass arguments details:\narg 1 ID = 85114450\n");
		}

		b2Velocity* value=(Luna< b2Velocity >::check(L,2));

		b2ContactSolverDef* self=(Luna< b2ContactSolverDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactSolverDef::velocities(b2Velocity *). Got : '%s'",typeid(Luna< b2ContactSolverDef >::check(L,1)).name());
		}
		self->velocities = value;

		return 0;
	}

	// void b2ContactSolverDef::allocator(b2StackAllocator * value)
	static int _bind_setAllocator(lua_State *L) {
		if (!_lg_typecheck_setAllocator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactSolverDef::allocator(b2StackAllocator * value) function, expected prototype:\nvoid b2ContactSolverDef::allocator(b2StackAllocator * value)\nClass arguments details:\narg 1 ID = 83926873\n");
		}

		b2StackAllocator* value=(Luna< b2StackAllocator >::check(L,2));

		b2ContactSolverDef* self=(Luna< b2ContactSolverDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactSolverDef::allocator(b2StackAllocator *). Got : '%s'",typeid(Luna< b2ContactSolverDef >::check(L,1)).name());
		}
		self->allocator = value;

		return 0;
	}


	// Operator binds:

};

b2ContactSolverDef* LunaTraits< b2ContactSolverDef >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2ContactSolverDef >::_bind_dtor(b2ContactSolverDef* obj) {
	delete obj;
}

const char LunaTraits< b2ContactSolverDef >::className[] = "b2ContactSolverDef";
const char LunaTraits< b2ContactSolverDef >::fullName[] = "b2ContactSolverDef";
const char LunaTraits< b2ContactSolverDef >::moduleName[] = "box2d";
const char* LunaTraits< b2ContactSolverDef >::parents[] = {0};
const int LunaTraits< b2ContactSolverDef >::hash = 69667931;
const int LunaTraits< b2ContactSolverDef >::uniqueIDs[] = {69667931,0};

luna_RegType LunaTraits< b2ContactSolverDef >::methods[] = {
	{"getStep", &luna_wrapper_b2ContactSolverDef::_bind_getStep},
	{"getCount", &luna_wrapper_b2ContactSolverDef::_bind_getCount},
	{"getPositions", &luna_wrapper_b2ContactSolverDef::_bind_getPositions},
	{"getVelocities", &luna_wrapper_b2ContactSolverDef::_bind_getVelocities},
	{"getAllocator", &luna_wrapper_b2ContactSolverDef::_bind_getAllocator},
	{"setStep", &luna_wrapper_b2ContactSolverDef::_bind_setStep},
	{"setCount", &luna_wrapper_b2ContactSolverDef::_bind_setCount},
	{"setPositions", &luna_wrapper_b2ContactSolverDef::_bind_setPositions},
	{"setVelocities", &luna_wrapper_b2ContactSolverDef::_bind_setVelocities},
	{"setAllocator", &luna_wrapper_b2ContactSolverDef::_bind_setAllocator},
	{"dynCast", &luna_wrapper_b2ContactSolverDef::_bind_dynCast},
	{"__eq", &luna_wrapper_b2ContactSolverDef::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< b2ContactSolverDef >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2ContactSolverDef >::enumValues[] = {
	{0,0}
};


