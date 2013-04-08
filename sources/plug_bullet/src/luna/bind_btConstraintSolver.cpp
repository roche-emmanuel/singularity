#include <plug_common.h>

#include <luna/wrappers/wrapper_btConstraintSolver.h>

class luna_wrapper_btConstraintSolver {
public:
	typedef Luna< btConstraintSolver > luna_t;

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

		btConstraintSolver* self= (btConstraintSolver*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btConstraintSolver >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53256621) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btConstraintSolver >::check(L,1));
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

		btConstraintSolver* self=(Luna< btConstraintSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btConstraintSolver");
		
		return luna_dynamicCast(L,converters,"btConstraintSolver",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_prepareSolve(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_allSolved(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,5410878) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,63441741)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,46980417)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btConstraintSolver::btConstraintSolver(lua_Table * data)
	static btConstraintSolver* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConstraintSolver::btConstraintSolver(lua_Table * data) function, expected prototype:\nbtConstraintSolver::btConstraintSolver(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btConstraintSolver(L,NULL);
	}


	// Function binds:
	// void btConstraintSolver::prepareSolve(int arg1, int arg2)
	static int _bind_prepareSolve(lua_State *L) {
		if (!_lg_typecheck_prepareSolve(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConstraintSolver::prepareSolve(int arg1, int arg2) function, expected prototype:\nvoid btConstraintSolver::prepareSolve(int arg1, int arg2)\nClass arguments details:\n");
		}

		int _arg1=(int)lua_tointeger(L,2);
		int _arg2=(int)lua_tointeger(L,3);

		btConstraintSolver* self=(Luna< btConstraintSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConstraintSolver::prepareSolve(int, int). Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		self->prepareSolve(_arg1, _arg2);

		return 0;
	}

	// void btConstraintSolver::allSolved(const btContactSolverInfo & arg1, class btIDebugDraw * arg2, btStackAlloc * arg3)
	static int _bind_allSolved(lua_State *L) {
		if (!_lg_typecheck_allSolved(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConstraintSolver::allSolved(const btContactSolverInfo & arg1, class btIDebugDraw * arg2, btStackAlloc * arg3) function, expected prototype:\nvoid btConstraintSolver::allSolved(const btContactSolverInfo & arg1, class btIDebugDraw * arg2, btStackAlloc * arg3)\nClass arguments details:\narg 1 ID = 5410878\narg 2 ID = 63441741\narg 3 ID = 46980417\n");
		}

		const btContactSolverInfo* _arg1_ptr=(Luna< btContactSolverInfoData >::checkSubType< btContactSolverInfo >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in btConstraintSolver::allSolved function");
		}
		const btContactSolverInfo & _arg1=*_arg1_ptr;
		btIDebugDraw* _arg2=(Luna< btIDebugDraw >::check(L,3));
		btStackAlloc* _arg3=(Luna< btStackAlloc >::check(L,4));

		btConstraintSolver* self=(Luna< btConstraintSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConstraintSolver::allSolved(const btContactSolverInfo &, class btIDebugDraw *, btStackAlloc *). Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		self->allSolved(_arg1, _arg2, _arg3);

		return 0;
	}

	// void btConstraintSolver::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConstraintSolver::reset() function, expected prototype:\nvoid btConstraintSolver::reset()\nClass arguments details:\n");
		}


		btConstraintSolver* self=(Luna< btConstraintSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConstraintSolver::reset(). Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		self->reset();

		return 0;
	}

	// void btConstraintSolver::base_prepareSolve(int arg1, int arg2)
	static int _bind_base_prepareSolve(lua_State *L) {
		if (!_lg_typecheck_base_prepareSolve(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConstraintSolver::base_prepareSolve(int arg1, int arg2) function, expected prototype:\nvoid btConstraintSolver::base_prepareSolve(int arg1, int arg2)\nClass arguments details:\n");
		}

		int _arg1=(int)lua_tointeger(L,2);
		int _arg2=(int)lua_tointeger(L,3);

		btConstraintSolver* self=(Luna< btConstraintSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConstraintSolver::base_prepareSolve(int, int). Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		self->btConstraintSolver::prepareSolve(_arg1, _arg2);

		return 0;
	}

	// void btConstraintSolver::base_allSolved(const btContactSolverInfo & arg1, class btIDebugDraw * arg2, btStackAlloc * arg3)
	static int _bind_base_allSolved(lua_State *L) {
		if (!_lg_typecheck_base_allSolved(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConstraintSolver::base_allSolved(const btContactSolverInfo & arg1, class btIDebugDraw * arg2, btStackAlloc * arg3) function, expected prototype:\nvoid btConstraintSolver::base_allSolved(const btContactSolverInfo & arg1, class btIDebugDraw * arg2, btStackAlloc * arg3)\nClass arguments details:\narg 1 ID = 5410878\narg 2 ID = 63441741\narg 3 ID = 46980417\n");
		}

		const btContactSolverInfo* _arg1_ptr=(Luna< btContactSolverInfoData >::checkSubType< btContactSolverInfo >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in btConstraintSolver::base_allSolved function");
		}
		const btContactSolverInfo & _arg1=*_arg1_ptr;
		btIDebugDraw* _arg2=(Luna< btIDebugDraw >::check(L,3));
		btStackAlloc* _arg3=(Luna< btStackAlloc >::check(L,4));

		btConstraintSolver* self=(Luna< btConstraintSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConstraintSolver::base_allSolved(const btContactSolverInfo &, class btIDebugDraw *, btStackAlloc *). Got : '%s'",typeid(Luna< btConstraintSolver >::check(L,1)).name());
		}
		self->btConstraintSolver::allSolved(_arg1, _arg2, _arg3);

		return 0;
	}


	// Operator binds:

};

btConstraintSolver* LunaTraits< btConstraintSolver >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btConstraintSolver::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// float btConstraintSolver::solveGroup(btCollisionObject ** bodies, int numBodies, btPersistentManifold ** manifold, int numManifolds, btTypedConstraint ** constraints, int numConstraints, const btContactSolverInfo & info, class btIDebugDraw * debugDrawer, btStackAlloc * stackAlloc, btDispatcher * dispatcher)
	// void btConstraintSolver::reset()
}

void LunaTraits< btConstraintSolver >::_bind_dtor(btConstraintSolver* obj) {
	delete obj;
}

const char LunaTraits< btConstraintSolver >::className[] = "btConstraintSolver";
const char LunaTraits< btConstraintSolver >::fullName[] = "btConstraintSolver";
const char LunaTraits< btConstraintSolver >::moduleName[] = "bullet";
const char* LunaTraits< btConstraintSolver >::parents[] = {0};
const int LunaTraits< btConstraintSolver >::hash = 53256621;
const int LunaTraits< btConstraintSolver >::uniqueIDs[] = {53256621,0};

luna_RegType LunaTraits< btConstraintSolver >::methods[] = {
	{"prepareSolve", &luna_wrapper_btConstraintSolver::_bind_prepareSolve},
	{"allSolved", &luna_wrapper_btConstraintSolver::_bind_allSolved},
	{"reset", &luna_wrapper_btConstraintSolver::_bind_reset},
	{"base_prepareSolve", &luna_wrapper_btConstraintSolver::_bind_base_prepareSolve},
	{"base_allSolved", &luna_wrapper_btConstraintSolver::_bind_base_allSolved},
	{"dynCast", &luna_wrapper_btConstraintSolver::_bind_dynCast},
	{"__eq", &luna_wrapper_btConstraintSolver::_bind___eq},
	{"fromVoid", &luna_wrapper_btConstraintSolver::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btConstraintSolver::_bind_asVoid},
	{"getTable", &luna_wrapper_btConstraintSolver::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btConstraintSolver >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btConstraintSolver >::enumValues[] = {
	{0,0}
};


