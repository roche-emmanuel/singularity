#include <plug_common.h>

class luna_wrapper_b2SolverData {
public:
	typedef Luna< b2SolverData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,20956645) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2SolverData*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2SolverData* rhs =(Luna< b2SolverData >::check(L,2));
		b2SolverData* self=(Luna< b2SolverData >::check(L,1));
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

		b2SolverData* self= (b2SolverData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2SolverData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,20956645) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< b2SolverData >::check(L,1));
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

		b2SolverData* self=(Luna< b2SolverData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2SolverData");
		
		return luna_dynamicCast(L,converters,"b2SolverData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getStep(lua_State *L) {
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

	inline static bool _lg_typecheck_setStep(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28832978) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// b2TimeStep b2SolverData::step()
	static int _bind_getStep(lua_State *L) {
		if (!_lg_typecheck_getStep(L)) {
			luaL_error(L, "luna typecheck failed in b2TimeStep b2SolverData::step() function, expected prototype:\nb2TimeStep b2SolverData::step()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2SolverData* self=(Luna< b2SolverData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2TimeStep b2SolverData::step(). Got : '%s'\n%s",typeid(Luna< b2SolverData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2TimeStep* lret = &self->step;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2TimeStep >::push(L,lret,false);

		return 1;
	}

	// b2Position * b2SolverData::positions()
	static int _bind_getPositions(lua_State *L) {
		if (!_lg_typecheck_getPositions(L)) {
			luaL_error(L, "luna typecheck failed in b2Position * b2SolverData::positions() function, expected prototype:\nb2Position * b2SolverData::positions()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2SolverData* self=(Luna< b2SolverData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Position * b2SolverData::positions(). Got : '%s'\n%s",typeid(Luna< b2SolverData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		b2Position * lret = self->positions;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Position >::push(L,lret,false);

		return 1;
	}

	// b2Velocity * b2SolverData::velocities()
	static int _bind_getVelocities(lua_State *L) {
		if (!_lg_typecheck_getVelocities(L)) {
			luaL_error(L, "luna typecheck failed in b2Velocity * b2SolverData::velocities() function, expected prototype:\nb2Velocity * b2SolverData::velocities()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2SolverData* self=(Luna< b2SolverData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Velocity * b2SolverData::velocities(). Got : '%s'\n%s",typeid(Luna< b2SolverData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		b2Velocity * lret = self->velocities;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Velocity >::push(L,lret,false);

		return 1;
	}

	// void b2SolverData::step(b2TimeStep value)
	static int _bind_setStep(lua_State *L) {
		if (!_lg_typecheck_setStep(L)) {
			luaL_error(L, "luna typecheck failed in void b2SolverData::step(b2TimeStep value) function, expected prototype:\nvoid b2SolverData::step(b2TimeStep value)\nClass arguments details:\narg 1 ID = 28832978\n\n%s",luna_dumpStack(L).c_str());
		}

		b2TimeStep* value_ptr=(Luna< b2TimeStep >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2SolverData::step function");
		}
		b2TimeStep value=*value_ptr;

		b2SolverData* self=(Luna< b2SolverData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2SolverData::step(b2TimeStep). Got : '%s'\n%s",typeid(Luna< b2SolverData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->step = value;

		return 0;
	}

	// void b2SolverData::positions(b2Position * value)
	static int _bind_setPositions(lua_State *L) {
		if (!_lg_typecheck_setPositions(L)) {
			luaL_error(L, "luna typecheck failed in void b2SolverData::positions(b2Position * value) function, expected prototype:\nvoid b2SolverData::positions(b2Position * value)\nClass arguments details:\narg 1 ID = 79848895\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Position* value=(Luna< b2Position >::check(L,2));

		b2SolverData* self=(Luna< b2SolverData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2SolverData::positions(b2Position *). Got : '%s'\n%s",typeid(Luna< b2SolverData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->positions = value;

		return 0;
	}

	// void b2SolverData::velocities(b2Velocity * value)
	static int _bind_setVelocities(lua_State *L) {
		if (!_lg_typecheck_setVelocities(L)) {
			luaL_error(L, "luna typecheck failed in void b2SolverData::velocities(b2Velocity * value) function, expected prototype:\nvoid b2SolverData::velocities(b2Velocity * value)\nClass arguments details:\narg 1 ID = 85114450\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Velocity* value=(Luna< b2Velocity >::check(L,2));

		b2SolverData* self=(Luna< b2SolverData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2SolverData::velocities(b2Velocity *). Got : '%s'\n%s",typeid(Luna< b2SolverData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->velocities = value;

		return 0;
	}


	// Operator binds:

};

b2SolverData* LunaTraits< b2SolverData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2SolverData >::_bind_dtor(b2SolverData* obj) {
	delete obj;
}

const char LunaTraits< b2SolverData >::className[] = "b2SolverData";
const char LunaTraits< b2SolverData >::fullName[] = "b2SolverData";
const char LunaTraits< b2SolverData >::moduleName[] = "box2d";
const char* LunaTraits< b2SolverData >::parents[] = {0};
const int LunaTraits< b2SolverData >::hash = 20956645;
const int LunaTraits< b2SolverData >::uniqueIDs[] = {20956645,0};

luna_RegType LunaTraits< b2SolverData >::methods[] = {
	{"getStep", &luna_wrapper_b2SolverData::_bind_getStep},
	{"getPositions", &luna_wrapper_b2SolverData::_bind_getPositions},
	{"getVelocities", &luna_wrapper_b2SolverData::_bind_getVelocities},
	{"setStep", &luna_wrapper_b2SolverData::_bind_setStep},
	{"setPositions", &luna_wrapper_b2SolverData::_bind_setPositions},
	{"setVelocities", &luna_wrapper_b2SolverData::_bind_setVelocities},
	{"dynCast", &luna_wrapper_b2SolverData::_bind_dynCast},
	{"__eq", &luna_wrapper_b2SolverData::_bind___eq},
	{"fromVoid", &luna_wrapper_b2SolverData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2SolverData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2SolverData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2SolverData >::enumValues[] = {
	{0,0}
};


