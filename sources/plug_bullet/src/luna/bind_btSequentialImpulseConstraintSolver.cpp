#include <plug_common.h>

#include <luna/wrappers/wrapper_btSequentialImpulseConstraintSolver.h>

class luna_wrapper_btSequentialImpulseConstraintSolver {
public:
	typedef Luna< btSequentialImpulseConstraintSolver > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btConstraintSolver* self=(Luna< btConstraintSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btConstraintSolver,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53256621) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btConstraintSolver*)");
		}

		btConstraintSolver* rhs =(Luna< btConstraintSolver >::check(L,2));
		btConstraintSolver* self=(Luna< btConstraintSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_btConstraintSolver(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btSequentialImpulseConstraintSolver* ptr= dynamic_cast< btSequentialImpulseConstraintSolver* >(Luna< btConstraintSolver >::check(L,1));
		btSequentialImpulseConstraintSolver* ptr= luna_caster< btConstraintSolver, btSequentialImpulseConstraintSolver >::cast(Luna< btConstraintSolver >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btSequentialImpulseConstraintSolver >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_btRand2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_btRandInt2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRandSeed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRandSeed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_prepareSolve(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_allSolved(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,5410878) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,63441741)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,46980417)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btSequentialImpulseConstraintSolver::btSequentialImpulseConstraintSolver(lua_Table * data)
	static btSequentialImpulseConstraintSolver* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btSequentialImpulseConstraintSolver::btSequentialImpulseConstraintSolver(lua_Table * data) function, expected prototype:\nbtSequentialImpulseConstraintSolver::btSequentialImpulseConstraintSolver(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btSequentialImpulseConstraintSolver(L,NULL);
	}


	// Function binds:
	// void btSequentialImpulseConstraintSolver::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSequentialImpulseConstraintSolver::reset() function, expected prototype:\nvoid btSequentialImpulseConstraintSolver::reset()\nClass arguments details:\n");
		}


		btSequentialImpulseConstraintSolver* self=Luna< btConstraintSolver >::checkSubType< btSequentialImpulseConstraintSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSequentialImpulseConstraintSolver::reset(). Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		self->reset();

		return 0;
	}

	// unsigned long btSequentialImpulseConstraintSolver::btRand2()
	static int _bind_btRand2(lua_State *L) {
		if (!_lg_typecheck_btRand2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned long btSequentialImpulseConstraintSolver::btRand2() function, expected prototype:\nunsigned long btSequentialImpulseConstraintSolver::btRand2()\nClass arguments details:\n");
		}


		btSequentialImpulseConstraintSolver* self=Luna< btConstraintSolver >::checkSubType< btSequentialImpulseConstraintSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned long btSequentialImpulseConstraintSolver::btRand2(). Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		unsigned long lret = self->btRand2();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btSequentialImpulseConstraintSolver::btRandInt2(int n)
	static int _bind_btRandInt2(lua_State *L) {
		if (!_lg_typecheck_btRandInt2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btSequentialImpulseConstraintSolver::btRandInt2(int n) function, expected prototype:\nint btSequentialImpulseConstraintSolver::btRandInt2(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		btSequentialImpulseConstraintSolver* self=Luna< btConstraintSolver >::checkSubType< btSequentialImpulseConstraintSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btSequentialImpulseConstraintSolver::btRandInt2(int). Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		int lret = self->btRandInt2(n);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSequentialImpulseConstraintSolver::setRandSeed(unsigned long seed)
	static int _bind_setRandSeed(lua_State *L) {
		if (!_lg_typecheck_setRandSeed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSequentialImpulseConstraintSolver::setRandSeed(unsigned long seed) function, expected prototype:\nvoid btSequentialImpulseConstraintSolver::setRandSeed(unsigned long seed)\nClass arguments details:\n");
		}

		unsigned long seed=(unsigned long)lua_tointeger(L,2);

		btSequentialImpulseConstraintSolver* self=Luna< btConstraintSolver >::checkSubType< btSequentialImpulseConstraintSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSequentialImpulseConstraintSolver::setRandSeed(unsigned long). Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		self->setRandSeed(seed);

		return 0;
	}

	// unsigned long btSequentialImpulseConstraintSolver::getRandSeed() const
	static int _bind_getRandSeed(lua_State *L) {
		if (!_lg_typecheck_getRandSeed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned long btSequentialImpulseConstraintSolver::getRandSeed() const function, expected prototype:\nunsigned long btSequentialImpulseConstraintSolver::getRandSeed() const\nClass arguments details:\n");
		}


		btSequentialImpulseConstraintSolver* self=Luna< btConstraintSolver >::checkSubType< btSequentialImpulseConstraintSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned long btSequentialImpulseConstraintSolver::getRandSeed() const. Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		unsigned long lret = self->getRandSeed();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSequentialImpulseConstraintSolver::base_prepareSolve(int arg1, int arg2)
	static int _bind_base_prepareSolve(lua_State *L) {
		if (!_lg_typecheck_base_prepareSolve(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSequentialImpulseConstraintSolver::base_prepareSolve(int arg1, int arg2) function, expected prototype:\nvoid btSequentialImpulseConstraintSolver::base_prepareSolve(int arg1, int arg2)\nClass arguments details:\n");
		}

		int _arg1=(int)lua_tointeger(L,2);
		int _arg2=(int)lua_tointeger(L,3);

		btSequentialImpulseConstraintSolver* self=Luna< btConstraintSolver >::checkSubType< btSequentialImpulseConstraintSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSequentialImpulseConstraintSolver::base_prepareSolve(int, int). Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		self->btSequentialImpulseConstraintSolver::prepareSolve(_arg1, _arg2);

		return 0;
	}

	// void btSequentialImpulseConstraintSolver::base_allSolved(const btContactSolverInfo & arg1, class btIDebugDraw * arg2, btStackAlloc * arg3)
	static int _bind_base_allSolved(lua_State *L) {
		if (!_lg_typecheck_base_allSolved(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSequentialImpulseConstraintSolver::base_allSolved(const btContactSolverInfo & arg1, class btIDebugDraw * arg2, btStackAlloc * arg3) function, expected prototype:\nvoid btSequentialImpulseConstraintSolver::base_allSolved(const btContactSolverInfo & arg1, class btIDebugDraw * arg2, btStackAlloc * arg3)\nClass arguments details:\narg 1 ID = 5410878\narg 2 ID = 63441741\narg 3 ID = 46980417\n");
		}

		const btContactSolverInfo* _arg1_ptr=(Luna< btContactSolverInfoData >::checkSubType< btContactSolverInfo >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in btSequentialImpulseConstraintSolver::base_allSolved function");
		}
		const btContactSolverInfo & _arg1=*_arg1_ptr;
		btIDebugDraw* _arg2=(Luna< btIDebugDraw >::check(L,3));
		btStackAlloc* _arg3=(Luna< btStackAlloc >::check(L,4));

		btSequentialImpulseConstraintSolver* self=Luna< btConstraintSolver >::checkSubType< btSequentialImpulseConstraintSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSequentialImpulseConstraintSolver::base_allSolved(const btContactSolverInfo &, class btIDebugDraw *, btStackAlloc *). Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		self->btSequentialImpulseConstraintSolver::allSolved(_arg1, _arg2, _arg3);

		return 0;
	}

	// void btSequentialImpulseConstraintSolver::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSequentialImpulseConstraintSolver::base_reset() function, expected prototype:\nvoid btSequentialImpulseConstraintSolver::base_reset()\nClass arguments details:\n");
		}


		btSequentialImpulseConstraintSolver* self=Luna< btConstraintSolver >::checkSubType< btSequentialImpulseConstraintSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSequentialImpulseConstraintSolver::base_reset(). Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		self->btSequentialImpulseConstraintSolver::reset();

		return 0;
	}


	// Operator binds:

};

btSequentialImpulseConstraintSolver* LunaTraits< btSequentialImpulseConstraintSolver >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btSequentialImpulseConstraintSolver::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// float btConstraintSolver::solveGroup(btCollisionObject ** bodies, int numBodies, btPersistentManifold ** manifold, int numManifolds, btTypedConstraint ** constraints, int numConstraints, const btContactSolverInfo & info, class btIDebugDraw * debugDrawer, btStackAlloc * stackAlloc, btDispatcher * dispatcher)
}

void LunaTraits< btSequentialImpulseConstraintSolver >::_bind_dtor(btSequentialImpulseConstraintSolver* obj) {
	delete obj;
}

const char LunaTraits< btSequentialImpulseConstraintSolver >::className[] = "btSequentialImpulseConstraintSolver";
const char LunaTraits< btSequentialImpulseConstraintSolver >::fullName[] = "btSequentialImpulseConstraintSolver";
const char LunaTraits< btSequentialImpulseConstraintSolver >::moduleName[] = "bullet";
const char* LunaTraits< btSequentialImpulseConstraintSolver >::parents[] = {"bullet.btConstraintSolver", 0};
const int LunaTraits< btSequentialImpulseConstraintSolver >::hash = 70547831;
const int LunaTraits< btSequentialImpulseConstraintSolver >::uniqueIDs[] = {53256621,0};

luna_RegType LunaTraits< btSequentialImpulseConstraintSolver >::methods[] = {
	{"reset", &luna_wrapper_btSequentialImpulseConstraintSolver::_bind_reset},
	{"btRand2", &luna_wrapper_btSequentialImpulseConstraintSolver::_bind_btRand2},
	{"btRandInt2", &luna_wrapper_btSequentialImpulseConstraintSolver::_bind_btRandInt2},
	{"setRandSeed", &luna_wrapper_btSequentialImpulseConstraintSolver::_bind_setRandSeed},
	{"getRandSeed", &luna_wrapper_btSequentialImpulseConstraintSolver::_bind_getRandSeed},
	{"base_prepareSolve", &luna_wrapper_btSequentialImpulseConstraintSolver::_bind_base_prepareSolve},
	{"base_allSolved", &luna_wrapper_btSequentialImpulseConstraintSolver::_bind_base_allSolved},
	{"base_reset", &luna_wrapper_btSequentialImpulseConstraintSolver::_bind_base_reset},
	{"__eq", &luna_wrapper_btSequentialImpulseConstraintSolver::_bind___eq},
	{"getTable", &luna_wrapper_btSequentialImpulseConstraintSolver::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btSequentialImpulseConstraintSolver >::converters[] = {
	{"btConstraintSolver", &luna_wrapper_btSequentialImpulseConstraintSolver::_cast_from_btConstraintSolver},
	{0,0}
};

luna_RegEnumType LunaTraits< btSequentialImpulseConstraintSolver >::enumValues[] = {
	{0,0}
};


