#include <plug_common.h>

#include <luna/wrappers/wrapper_btGjkEpaPenetrationDepthSolver.h>

class luna_wrapper_btGjkEpaPenetrationDepthSolver {
public:
	typedef Luna< btGjkEpaPenetrationDepthSolver > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btConvexPenetrationDepthSolver* self=(Luna< btConvexPenetrationDepthSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btConvexPenetrationDepthSolver,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,62802517) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btConvexPenetrationDepthSolver*)");
		}

		btConvexPenetrationDepthSolver* rhs =(Luna< btConvexPenetrationDepthSolver >::check(L,2));
		btConvexPenetrationDepthSolver* self=(Luna< btConvexPenetrationDepthSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_btConvexPenetrationDepthSolver(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btGjkEpaPenetrationDepthSolver* ptr= dynamic_cast< btGjkEpaPenetrationDepthSolver* >(Luna< btConvexPenetrationDepthSolver >::check(L,1));
		btGjkEpaPenetrationDepthSolver* ptr= luna_caster< btConvexPenetrationDepthSolver, btGjkEpaPenetrationDepthSolver >::cast(Luna< btConvexPenetrationDepthSolver >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btGjkEpaPenetrationDepthSolver >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_calcPenDepth(lua_State *L) {
		if( lua_gettop(L)!=11 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,95428271) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,58243831)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,58243831)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,91544891) ) return false;
		if( (lua_isnil(L,10)==0 && !Luna<void>::has_uniqueid(L,10,63441741)) ) return false;
		if( (lua_isnil(L,11)==0 && !Luna<void>::has_uniqueid(L,11,46980417)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_calcPenDepth(lua_State *L) {
		if( lua_gettop(L)!=11 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,95428271) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,58243831)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,58243831)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,91544891) ) return false;
		if( (lua_isnil(L,10)==0 && !Luna<void>::has_uniqueid(L,10,63441741)) ) return false;
		if( (lua_isnil(L,11)==0 && !Luna<void>::has_uniqueid(L,11,46980417)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btGjkEpaPenetrationDepthSolver::btGjkEpaPenetrationDepthSolver()
	static btGjkEpaPenetrationDepthSolver* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGjkEpaPenetrationDepthSolver::btGjkEpaPenetrationDepthSolver() function, expected prototype:\nbtGjkEpaPenetrationDepthSolver::btGjkEpaPenetrationDepthSolver()\nClass arguments details:\n");
		}


		return new btGjkEpaPenetrationDepthSolver();
	}

	// btGjkEpaPenetrationDepthSolver::btGjkEpaPenetrationDepthSolver(lua_Table * data)
	static btGjkEpaPenetrationDepthSolver* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGjkEpaPenetrationDepthSolver::btGjkEpaPenetrationDepthSolver(lua_Table * data) function, expected prototype:\nbtGjkEpaPenetrationDepthSolver::btGjkEpaPenetrationDepthSolver(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btGjkEpaPenetrationDepthSolver(L,NULL);
	}

	// Overload binder for btGjkEpaPenetrationDepthSolver::btGjkEpaPenetrationDepthSolver
	static btGjkEpaPenetrationDepthSolver* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btGjkEpaPenetrationDepthSolver, cannot match any of the overloads for function btGjkEpaPenetrationDepthSolver:\n  btGjkEpaPenetrationDepthSolver()\n  btGjkEpaPenetrationDepthSolver(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// bool btGjkEpaPenetrationDepthSolver::calcPenDepth(btVoronoiSimplexSolver & simplexSolver, const btConvexShape * pConvexA, const btConvexShape * pConvexB, const btTransform & transformA, const btTransform & transformB, btVector3 & v, btVector3 & wWitnessOnA, btVector3 & wWitnessOnB, class btIDebugDraw * debugDraw, btStackAlloc * stackAlloc)
	static int _bind_calcPenDepth(lua_State *L) {
		if (!_lg_typecheck_calcPenDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGjkEpaPenetrationDepthSolver::calcPenDepth(btVoronoiSimplexSolver & simplexSolver, const btConvexShape * pConvexA, const btConvexShape * pConvexB, const btTransform & transformA, const btTransform & transformB, btVector3 & v, btVector3 & wWitnessOnA, btVector3 & wWitnessOnB, class btIDebugDraw * debugDraw, btStackAlloc * stackAlloc) function, expected prototype:\nbool btGjkEpaPenetrationDepthSolver::calcPenDepth(btVoronoiSimplexSolver & simplexSolver, const btConvexShape * pConvexA, const btConvexShape * pConvexB, const btTransform & transformA, const btTransform & transformB, btVector3 & v, btVector3 & wWitnessOnA, btVector3 & wWitnessOnB, class btIDebugDraw * debugDraw, btStackAlloc * stackAlloc)\nClass arguments details:\narg 1 ID = 95428271\narg 2 ID = 58243831\narg 3 ID = 58243831\narg 4 ID = 13247377\narg 5 ID = 13247377\narg 6 ID = 91544891\narg 7 ID = 91544891\narg 8 ID = 91544891\narg 9 ID = 63441741\narg 10 ID = 46980417\n");
		}

		btVoronoiSimplexSolver* simplexSolver_ptr=(Luna< btVoronoiSimplexSolver >::check(L,2));
		if( !simplexSolver_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg simplexSolver in btGjkEpaPenetrationDepthSolver::calcPenDepth function");
		}
		btVoronoiSimplexSolver & simplexSolver=*simplexSolver_ptr;
		const btConvexShape* pConvexA=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,3));
		const btConvexShape* pConvexB=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,4));
		const btTransform* transformA_ptr=(Luna< btTransform >::check(L,5));
		if( !transformA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transformA in btGjkEpaPenetrationDepthSolver::calcPenDepth function");
		}
		const btTransform & transformA=*transformA_ptr;
		const btTransform* transformB_ptr=(Luna< btTransform >::check(L,6));
		if( !transformB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transformB in btGjkEpaPenetrationDepthSolver::calcPenDepth function");
		}
		const btTransform & transformB=*transformB_ptr;
		btVector3* v_ptr=(Luna< btVector3 >::check(L,7));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in btGjkEpaPenetrationDepthSolver::calcPenDepth function");
		}
		btVector3 & v=*v_ptr;
		btVector3* wWitnessOnA_ptr=(Luna< btVector3 >::check(L,8));
		if( !wWitnessOnA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wWitnessOnA in btGjkEpaPenetrationDepthSolver::calcPenDepth function");
		}
		btVector3 & wWitnessOnA=*wWitnessOnA_ptr;
		btVector3* wWitnessOnB_ptr=(Luna< btVector3 >::check(L,9));
		if( !wWitnessOnB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wWitnessOnB in btGjkEpaPenetrationDepthSolver::calcPenDepth function");
		}
		btVector3 & wWitnessOnB=*wWitnessOnB_ptr;
		btIDebugDraw* debugDraw=(Luna< btIDebugDraw >::check(L,10));
		btStackAlloc* stackAlloc=(Luna< btStackAlloc >::check(L,11));

		btGjkEpaPenetrationDepthSolver* self=Luna< btConvexPenetrationDepthSolver >::checkSubType< btGjkEpaPenetrationDepthSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGjkEpaPenetrationDepthSolver::calcPenDepth(btVoronoiSimplexSolver &, const btConvexShape *, const btConvexShape *, const btTransform &, const btTransform &, btVector3 &, btVector3 &, btVector3 &, class btIDebugDraw *, btStackAlloc *). Got : '%s'",typeid(Luna< btConvexPenetrationDepthSolver >::check(L,1)).name());
		}
		bool lret = self->calcPenDepth(simplexSolver, pConvexA, pConvexB, transformA, transformB, v, wWitnessOnA, wWitnessOnB, debugDraw, stackAlloc);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btGjkEpaPenetrationDepthSolver::base_calcPenDepth(btVoronoiSimplexSolver & simplexSolver, const btConvexShape * pConvexA, const btConvexShape * pConvexB, const btTransform & transformA, const btTransform & transformB, btVector3 & v, btVector3 & wWitnessOnA, btVector3 & wWitnessOnB, class btIDebugDraw * debugDraw, btStackAlloc * stackAlloc)
	static int _bind_base_calcPenDepth(lua_State *L) {
		if (!_lg_typecheck_base_calcPenDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGjkEpaPenetrationDepthSolver::base_calcPenDepth(btVoronoiSimplexSolver & simplexSolver, const btConvexShape * pConvexA, const btConvexShape * pConvexB, const btTransform & transformA, const btTransform & transformB, btVector3 & v, btVector3 & wWitnessOnA, btVector3 & wWitnessOnB, class btIDebugDraw * debugDraw, btStackAlloc * stackAlloc) function, expected prototype:\nbool btGjkEpaPenetrationDepthSolver::base_calcPenDepth(btVoronoiSimplexSolver & simplexSolver, const btConvexShape * pConvexA, const btConvexShape * pConvexB, const btTransform & transformA, const btTransform & transformB, btVector3 & v, btVector3 & wWitnessOnA, btVector3 & wWitnessOnB, class btIDebugDraw * debugDraw, btStackAlloc * stackAlloc)\nClass arguments details:\narg 1 ID = 95428271\narg 2 ID = 58243831\narg 3 ID = 58243831\narg 4 ID = 13247377\narg 5 ID = 13247377\narg 6 ID = 91544891\narg 7 ID = 91544891\narg 8 ID = 91544891\narg 9 ID = 63441741\narg 10 ID = 46980417\n");
		}

		btVoronoiSimplexSolver* simplexSolver_ptr=(Luna< btVoronoiSimplexSolver >::check(L,2));
		if( !simplexSolver_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg simplexSolver in btGjkEpaPenetrationDepthSolver::base_calcPenDepth function");
		}
		btVoronoiSimplexSolver & simplexSolver=*simplexSolver_ptr;
		const btConvexShape* pConvexA=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,3));
		const btConvexShape* pConvexB=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,4));
		const btTransform* transformA_ptr=(Luna< btTransform >::check(L,5));
		if( !transformA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transformA in btGjkEpaPenetrationDepthSolver::base_calcPenDepth function");
		}
		const btTransform & transformA=*transformA_ptr;
		const btTransform* transformB_ptr=(Luna< btTransform >::check(L,6));
		if( !transformB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transformB in btGjkEpaPenetrationDepthSolver::base_calcPenDepth function");
		}
		const btTransform & transformB=*transformB_ptr;
		btVector3* v_ptr=(Luna< btVector3 >::check(L,7));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in btGjkEpaPenetrationDepthSolver::base_calcPenDepth function");
		}
		btVector3 & v=*v_ptr;
		btVector3* wWitnessOnA_ptr=(Luna< btVector3 >::check(L,8));
		if( !wWitnessOnA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wWitnessOnA in btGjkEpaPenetrationDepthSolver::base_calcPenDepth function");
		}
		btVector3 & wWitnessOnA=*wWitnessOnA_ptr;
		btVector3* wWitnessOnB_ptr=(Luna< btVector3 >::check(L,9));
		if( !wWitnessOnB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wWitnessOnB in btGjkEpaPenetrationDepthSolver::base_calcPenDepth function");
		}
		btVector3 & wWitnessOnB=*wWitnessOnB_ptr;
		btIDebugDraw* debugDraw=(Luna< btIDebugDraw >::check(L,10));
		btStackAlloc* stackAlloc=(Luna< btStackAlloc >::check(L,11));

		btGjkEpaPenetrationDepthSolver* self=Luna< btConvexPenetrationDepthSolver >::checkSubType< btGjkEpaPenetrationDepthSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGjkEpaPenetrationDepthSolver::base_calcPenDepth(btVoronoiSimplexSolver &, const btConvexShape *, const btConvexShape *, const btTransform &, const btTransform &, btVector3 &, btVector3 &, btVector3 &, class btIDebugDraw *, btStackAlloc *). Got : '%s'",typeid(Luna< btConvexPenetrationDepthSolver >::check(L,1)).name());
		}
		bool lret = self->btGjkEpaPenetrationDepthSolver::calcPenDepth(simplexSolver, pConvexA, pConvexB, transformA, transformB, v, wWitnessOnA, wWitnessOnB, debugDraw, stackAlloc);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

btGjkEpaPenetrationDepthSolver* LunaTraits< btGjkEpaPenetrationDepthSolver >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btGjkEpaPenetrationDepthSolver::_bind_ctor(L);
}

void LunaTraits< btGjkEpaPenetrationDepthSolver >::_bind_dtor(btGjkEpaPenetrationDepthSolver* obj) {
	delete obj;
}

const char LunaTraits< btGjkEpaPenetrationDepthSolver >::className[] = "btGjkEpaPenetrationDepthSolver";
const char LunaTraits< btGjkEpaPenetrationDepthSolver >::fullName[] = "btGjkEpaPenetrationDepthSolver";
const char LunaTraits< btGjkEpaPenetrationDepthSolver >::moduleName[] = "bullet";
const char* LunaTraits< btGjkEpaPenetrationDepthSolver >::parents[] = {"bullet.btConvexPenetrationDepthSolver", 0};
const int LunaTraits< btGjkEpaPenetrationDepthSolver >::hash = 15705879;
const int LunaTraits< btGjkEpaPenetrationDepthSolver >::uniqueIDs[] = {62802517,0};

luna_RegType LunaTraits< btGjkEpaPenetrationDepthSolver >::methods[] = {
	{"calcPenDepth", &luna_wrapper_btGjkEpaPenetrationDepthSolver::_bind_calcPenDepth},
	{"base_calcPenDepth", &luna_wrapper_btGjkEpaPenetrationDepthSolver::_bind_base_calcPenDepth},
	{"__eq", &luna_wrapper_btGjkEpaPenetrationDepthSolver::_bind___eq},
	{"getTable", &luna_wrapper_btGjkEpaPenetrationDepthSolver::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btGjkEpaPenetrationDepthSolver >::converters[] = {
	{"btConvexPenetrationDepthSolver", &luna_wrapper_btGjkEpaPenetrationDepthSolver::_cast_from_btConvexPenetrationDepthSolver},
	{0,0}
};

luna_RegEnumType LunaTraits< btGjkEpaPenetrationDepthSolver >::enumValues[] = {
	{0,0}
};


