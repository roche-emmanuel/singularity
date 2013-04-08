#include <plug_common.h>

class luna_wrapper_b2Profile {
public:
	typedef Luna< b2Profile > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,16927334) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2Profile*)");
		}

		b2Profile* rhs =(Luna< b2Profile >::check(L,2));
		b2Profile* self=(Luna< b2Profile >::check(L,1));
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

		b2Profile* self= (b2Profile*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2Profile >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,16927334) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2Profile >::check(L,1));
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

		b2Profile* self=(Luna< b2Profile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2Profile");
		
		return luna_dynamicCast(L,converters,"b2Profile",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getStep(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCollide(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSolve(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSolveInit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSolveVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSolvePosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBroadphase(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSolveTOI(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStep(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCollide(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSolve(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSolveInit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSolveVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSolvePosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBroadphase(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSolveTOI(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// float b2Profile::step()
	static int _bind_getStep(lua_State *L) {
		if (!_lg_typecheck_getStep(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Profile::step() function, expected prototype:\nfloat b2Profile::step()\nClass arguments details:\n");
		}


		b2Profile* self=(Luna< b2Profile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Profile::step(). Got : '%s'",typeid(Luna< b2Profile >::check(L,1)).name());
		}
		float lret = self->step;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2Profile::collide()
	static int _bind_getCollide(lua_State *L) {
		if (!_lg_typecheck_getCollide(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Profile::collide() function, expected prototype:\nfloat b2Profile::collide()\nClass arguments details:\n");
		}


		b2Profile* self=(Luna< b2Profile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Profile::collide(). Got : '%s'",typeid(Luna< b2Profile >::check(L,1)).name());
		}
		float lret = self->collide;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2Profile::solve()
	static int _bind_getSolve(lua_State *L) {
		if (!_lg_typecheck_getSolve(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Profile::solve() function, expected prototype:\nfloat b2Profile::solve()\nClass arguments details:\n");
		}


		b2Profile* self=(Luna< b2Profile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Profile::solve(). Got : '%s'",typeid(Luna< b2Profile >::check(L,1)).name());
		}
		float lret = self->solve;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2Profile::solveInit()
	static int _bind_getSolveInit(lua_State *L) {
		if (!_lg_typecheck_getSolveInit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Profile::solveInit() function, expected prototype:\nfloat b2Profile::solveInit()\nClass arguments details:\n");
		}


		b2Profile* self=(Luna< b2Profile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Profile::solveInit(). Got : '%s'",typeid(Luna< b2Profile >::check(L,1)).name());
		}
		float lret = self->solveInit;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2Profile::solveVelocity()
	static int _bind_getSolveVelocity(lua_State *L) {
		if (!_lg_typecheck_getSolveVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Profile::solveVelocity() function, expected prototype:\nfloat b2Profile::solveVelocity()\nClass arguments details:\n");
		}


		b2Profile* self=(Luna< b2Profile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Profile::solveVelocity(). Got : '%s'",typeid(Luna< b2Profile >::check(L,1)).name());
		}
		float lret = self->solveVelocity;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2Profile::solvePosition()
	static int _bind_getSolvePosition(lua_State *L) {
		if (!_lg_typecheck_getSolvePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Profile::solvePosition() function, expected prototype:\nfloat b2Profile::solvePosition()\nClass arguments details:\n");
		}


		b2Profile* self=(Luna< b2Profile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Profile::solvePosition(). Got : '%s'",typeid(Luna< b2Profile >::check(L,1)).name());
		}
		float lret = self->solvePosition;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2Profile::broadphase()
	static int _bind_getBroadphase(lua_State *L) {
		if (!_lg_typecheck_getBroadphase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Profile::broadphase() function, expected prototype:\nfloat b2Profile::broadphase()\nClass arguments details:\n");
		}


		b2Profile* self=(Luna< b2Profile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Profile::broadphase(). Got : '%s'",typeid(Luna< b2Profile >::check(L,1)).name());
		}
		float lret = self->broadphase;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2Profile::solveTOI()
	static int _bind_getSolveTOI(lua_State *L) {
		if (!_lg_typecheck_getSolveTOI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Profile::solveTOI() function, expected prototype:\nfloat b2Profile::solveTOI()\nClass arguments details:\n");
		}


		b2Profile* self=(Luna< b2Profile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Profile::solveTOI(). Got : '%s'",typeid(Luna< b2Profile >::check(L,1)).name());
		}
		float lret = self->solveTOI;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2Profile::step(float value)
	static int _bind_setStep(lua_State *L) {
		if (!_lg_typecheck_setStep(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Profile::step(float value) function, expected prototype:\nvoid b2Profile::step(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2Profile* self=(Luna< b2Profile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Profile::step(float). Got : '%s'",typeid(Luna< b2Profile >::check(L,1)).name());
		}
		self->step = value;

		return 0;
	}

	// void b2Profile::collide(float value)
	static int _bind_setCollide(lua_State *L) {
		if (!_lg_typecheck_setCollide(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Profile::collide(float value) function, expected prototype:\nvoid b2Profile::collide(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2Profile* self=(Luna< b2Profile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Profile::collide(float). Got : '%s'",typeid(Luna< b2Profile >::check(L,1)).name());
		}
		self->collide = value;

		return 0;
	}

	// void b2Profile::solve(float value)
	static int _bind_setSolve(lua_State *L) {
		if (!_lg_typecheck_setSolve(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Profile::solve(float value) function, expected prototype:\nvoid b2Profile::solve(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2Profile* self=(Luna< b2Profile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Profile::solve(float). Got : '%s'",typeid(Luna< b2Profile >::check(L,1)).name());
		}
		self->solve = value;

		return 0;
	}

	// void b2Profile::solveInit(float value)
	static int _bind_setSolveInit(lua_State *L) {
		if (!_lg_typecheck_setSolveInit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Profile::solveInit(float value) function, expected prototype:\nvoid b2Profile::solveInit(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2Profile* self=(Luna< b2Profile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Profile::solveInit(float). Got : '%s'",typeid(Luna< b2Profile >::check(L,1)).name());
		}
		self->solveInit = value;

		return 0;
	}

	// void b2Profile::solveVelocity(float value)
	static int _bind_setSolveVelocity(lua_State *L) {
		if (!_lg_typecheck_setSolveVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Profile::solveVelocity(float value) function, expected prototype:\nvoid b2Profile::solveVelocity(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2Profile* self=(Luna< b2Profile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Profile::solveVelocity(float). Got : '%s'",typeid(Luna< b2Profile >::check(L,1)).name());
		}
		self->solveVelocity = value;

		return 0;
	}

	// void b2Profile::solvePosition(float value)
	static int _bind_setSolvePosition(lua_State *L) {
		if (!_lg_typecheck_setSolvePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Profile::solvePosition(float value) function, expected prototype:\nvoid b2Profile::solvePosition(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2Profile* self=(Luna< b2Profile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Profile::solvePosition(float). Got : '%s'",typeid(Luna< b2Profile >::check(L,1)).name());
		}
		self->solvePosition = value;

		return 0;
	}

	// void b2Profile::broadphase(float value)
	static int _bind_setBroadphase(lua_State *L) {
		if (!_lg_typecheck_setBroadphase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Profile::broadphase(float value) function, expected prototype:\nvoid b2Profile::broadphase(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2Profile* self=(Luna< b2Profile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Profile::broadphase(float). Got : '%s'",typeid(Luna< b2Profile >::check(L,1)).name());
		}
		self->broadphase = value;

		return 0;
	}

	// void b2Profile::solveTOI(float value)
	static int _bind_setSolveTOI(lua_State *L) {
		if (!_lg_typecheck_setSolveTOI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Profile::solveTOI(float value) function, expected prototype:\nvoid b2Profile::solveTOI(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2Profile* self=(Luna< b2Profile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Profile::solveTOI(float). Got : '%s'",typeid(Luna< b2Profile >::check(L,1)).name());
		}
		self->solveTOI = value;

		return 0;
	}


	// Operator binds:

};

b2Profile* LunaTraits< b2Profile >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2Profile >::_bind_dtor(b2Profile* obj) {
	delete obj;
}

const char LunaTraits< b2Profile >::className[] = "b2Profile";
const char LunaTraits< b2Profile >::fullName[] = "b2Profile";
const char LunaTraits< b2Profile >::moduleName[] = "box2d";
const char* LunaTraits< b2Profile >::parents[] = {0};
const int LunaTraits< b2Profile >::hash = 16927334;
const int LunaTraits< b2Profile >::uniqueIDs[] = {16927334,0};

luna_RegType LunaTraits< b2Profile >::methods[] = {
	{"getStep", &luna_wrapper_b2Profile::_bind_getStep},
	{"getCollide", &luna_wrapper_b2Profile::_bind_getCollide},
	{"getSolve", &luna_wrapper_b2Profile::_bind_getSolve},
	{"getSolveInit", &luna_wrapper_b2Profile::_bind_getSolveInit},
	{"getSolveVelocity", &luna_wrapper_b2Profile::_bind_getSolveVelocity},
	{"getSolvePosition", &luna_wrapper_b2Profile::_bind_getSolvePosition},
	{"getBroadphase", &luna_wrapper_b2Profile::_bind_getBroadphase},
	{"getSolveTOI", &luna_wrapper_b2Profile::_bind_getSolveTOI},
	{"setStep", &luna_wrapper_b2Profile::_bind_setStep},
	{"setCollide", &luna_wrapper_b2Profile::_bind_setCollide},
	{"setSolve", &luna_wrapper_b2Profile::_bind_setSolve},
	{"setSolveInit", &luna_wrapper_b2Profile::_bind_setSolveInit},
	{"setSolveVelocity", &luna_wrapper_b2Profile::_bind_setSolveVelocity},
	{"setSolvePosition", &luna_wrapper_b2Profile::_bind_setSolvePosition},
	{"setBroadphase", &luna_wrapper_b2Profile::_bind_setBroadphase},
	{"setSolveTOI", &luna_wrapper_b2Profile::_bind_setSolveTOI},
	{"dynCast", &luna_wrapper_b2Profile::_bind_dynCast},
	{"__eq", &luna_wrapper_b2Profile::_bind___eq},
	{"fromVoid", &luna_wrapper_b2Profile::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2Profile::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2Profile >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2Profile >::enumValues[] = {
	{0,0}
};


