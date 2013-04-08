#include <plug_common.h>

#include <luna/wrappers/wrapper_btMinkowskiPenetrationDepthSolver.h>

class luna_wrapper_btMinkowskiPenetrationDepthSolver {
public:
	typedef Luna< btMinkowskiPenetrationDepthSolver > luna_t;

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

		btMinkowskiPenetrationDepthSolver* self= (btMinkowskiPenetrationDepthSolver*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btMinkowskiPenetrationDepthSolver >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,62802517) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btConvexPenetrationDepthSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btConvexPenetrationDepthSolver(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btMinkowskiPenetrationDepthSolver* ptr= dynamic_cast< btMinkowskiPenetrationDepthSolver* >(Luna< btConvexPenetrationDepthSolver >::check(L,1));
		btMinkowskiPenetrationDepthSolver* ptr= luna_caster< btConvexPenetrationDepthSolver, btMinkowskiPenetrationDepthSolver >::cast(Luna< btConvexPenetrationDepthSolver >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btMinkowskiPenetrationDepthSolver >::push(L,ptr,false);
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
	// btMinkowskiPenetrationDepthSolver::btMinkowskiPenetrationDepthSolver()
	static btMinkowskiPenetrationDepthSolver* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMinkowskiPenetrationDepthSolver::btMinkowskiPenetrationDepthSolver() function, expected prototype:\nbtMinkowskiPenetrationDepthSolver::btMinkowskiPenetrationDepthSolver()\nClass arguments details:\n");
		}


		return new btMinkowskiPenetrationDepthSolver();
	}

	// btMinkowskiPenetrationDepthSolver::btMinkowskiPenetrationDepthSolver(lua_Table * data)
	static btMinkowskiPenetrationDepthSolver* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMinkowskiPenetrationDepthSolver::btMinkowskiPenetrationDepthSolver(lua_Table * data) function, expected prototype:\nbtMinkowskiPenetrationDepthSolver::btMinkowskiPenetrationDepthSolver(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btMinkowskiPenetrationDepthSolver(L,NULL);
	}

	// Overload binder for btMinkowskiPenetrationDepthSolver::btMinkowskiPenetrationDepthSolver
	static btMinkowskiPenetrationDepthSolver* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btMinkowskiPenetrationDepthSolver, cannot match any of the overloads for function btMinkowskiPenetrationDepthSolver:\n  btMinkowskiPenetrationDepthSolver()\n  btMinkowskiPenetrationDepthSolver(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// bool btMinkowskiPenetrationDepthSolver::calcPenDepth(btVoronoiSimplexSolver & simplexSolver, const btConvexShape * convexA, const btConvexShape * convexB, const btTransform & transA, const btTransform & transB, btVector3 & v, btVector3 & pa, btVector3 & pb, class btIDebugDraw * debugDraw, btStackAlloc * stackAlloc)
	static int _bind_calcPenDepth(lua_State *L) {
		if (!_lg_typecheck_calcPenDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btMinkowskiPenetrationDepthSolver::calcPenDepth(btVoronoiSimplexSolver & simplexSolver, const btConvexShape * convexA, const btConvexShape * convexB, const btTransform & transA, const btTransform & transB, btVector3 & v, btVector3 & pa, btVector3 & pb, class btIDebugDraw * debugDraw, btStackAlloc * stackAlloc) function, expected prototype:\nbool btMinkowskiPenetrationDepthSolver::calcPenDepth(btVoronoiSimplexSolver & simplexSolver, const btConvexShape * convexA, const btConvexShape * convexB, const btTransform & transA, const btTransform & transB, btVector3 & v, btVector3 & pa, btVector3 & pb, class btIDebugDraw * debugDraw, btStackAlloc * stackAlloc)\nClass arguments details:\narg 1 ID = 95428271\narg 2 ID = 58243831\narg 3 ID = 58243831\narg 4 ID = 13247377\narg 5 ID = 13247377\narg 6 ID = 91544891\narg 7 ID = 91544891\narg 8 ID = 91544891\narg 9 ID = 63441741\narg 10 ID = 46980417\n");
		}

		btVoronoiSimplexSolver* simplexSolver_ptr=(Luna< btVoronoiSimplexSolver >::check(L,2));
		if( !simplexSolver_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg simplexSolver in btMinkowskiPenetrationDepthSolver::calcPenDepth function");
		}
		btVoronoiSimplexSolver & simplexSolver=*simplexSolver_ptr;
		const btConvexShape* convexA=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,3));
		const btConvexShape* convexB=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,4));
		const btTransform* transA_ptr=(Luna< btTransform >::check(L,5));
		if( !transA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transA in btMinkowskiPenetrationDepthSolver::calcPenDepth function");
		}
		const btTransform & transA=*transA_ptr;
		const btTransform* transB_ptr=(Luna< btTransform >::check(L,6));
		if( !transB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transB in btMinkowskiPenetrationDepthSolver::calcPenDepth function");
		}
		const btTransform & transB=*transB_ptr;
		btVector3* v_ptr=(Luna< btVector3 >::check(L,7));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in btMinkowskiPenetrationDepthSolver::calcPenDepth function");
		}
		btVector3 & v=*v_ptr;
		btVector3* pa_ptr=(Luna< btVector3 >::check(L,8));
		if( !pa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pa in btMinkowskiPenetrationDepthSolver::calcPenDepth function");
		}
		btVector3 & pa=*pa_ptr;
		btVector3* pb_ptr=(Luna< btVector3 >::check(L,9));
		if( !pb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pb in btMinkowskiPenetrationDepthSolver::calcPenDepth function");
		}
		btVector3 & pb=*pb_ptr;
		btIDebugDraw* debugDraw=(Luna< btIDebugDraw >::check(L,10));
		btStackAlloc* stackAlloc=(Luna< btStackAlloc >::check(L,11));

		btMinkowskiPenetrationDepthSolver* self=Luna< btConvexPenetrationDepthSolver >::checkSubType< btMinkowskiPenetrationDepthSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btMinkowskiPenetrationDepthSolver::calcPenDepth(btVoronoiSimplexSolver &, const btConvexShape *, const btConvexShape *, const btTransform &, const btTransform &, btVector3 &, btVector3 &, btVector3 &, class btIDebugDraw *, btStackAlloc *). Got : '%s'",typeid(Luna< btConvexPenetrationDepthSolver >::check(L,1)).name());
		}
		bool lret = self->calcPenDepth(simplexSolver, convexA, convexB, transA, transB, v, pa, pb, debugDraw, stackAlloc);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btMinkowskiPenetrationDepthSolver::base_calcPenDepth(btVoronoiSimplexSolver & simplexSolver, const btConvexShape * convexA, const btConvexShape * convexB, const btTransform & transA, const btTransform & transB, btVector3 & v, btVector3 & pa, btVector3 & pb, class btIDebugDraw * debugDraw, btStackAlloc * stackAlloc)
	static int _bind_base_calcPenDepth(lua_State *L) {
		if (!_lg_typecheck_base_calcPenDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btMinkowskiPenetrationDepthSolver::base_calcPenDepth(btVoronoiSimplexSolver & simplexSolver, const btConvexShape * convexA, const btConvexShape * convexB, const btTransform & transA, const btTransform & transB, btVector3 & v, btVector3 & pa, btVector3 & pb, class btIDebugDraw * debugDraw, btStackAlloc * stackAlloc) function, expected prototype:\nbool btMinkowskiPenetrationDepthSolver::base_calcPenDepth(btVoronoiSimplexSolver & simplexSolver, const btConvexShape * convexA, const btConvexShape * convexB, const btTransform & transA, const btTransform & transB, btVector3 & v, btVector3 & pa, btVector3 & pb, class btIDebugDraw * debugDraw, btStackAlloc * stackAlloc)\nClass arguments details:\narg 1 ID = 95428271\narg 2 ID = 58243831\narg 3 ID = 58243831\narg 4 ID = 13247377\narg 5 ID = 13247377\narg 6 ID = 91544891\narg 7 ID = 91544891\narg 8 ID = 91544891\narg 9 ID = 63441741\narg 10 ID = 46980417\n");
		}

		btVoronoiSimplexSolver* simplexSolver_ptr=(Luna< btVoronoiSimplexSolver >::check(L,2));
		if( !simplexSolver_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg simplexSolver in btMinkowskiPenetrationDepthSolver::base_calcPenDepth function");
		}
		btVoronoiSimplexSolver & simplexSolver=*simplexSolver_ptr;
		const btConvexShape* convexA=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,3));
		const btConvexShape* convexB=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,4));
		const btTransform* transA_ptr=(Luna< btTransform >::check(L,5));
		if( !transA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transA in btMinkowskiPenetrationDepthSolver::base_calcPenDepth function");
		}
		const btTransform & transA=*transA_ptr;
		const btTransform* transB_ptr=(Luna< btTransform >::check(L,6));
		if( !transB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transB in btMinkowskiPenetrationDepthSolver::base_calcPenDepth function");
		}
		const btTransform & transB=*transB_ptr;
		btVector3* v_ptr=(Luna< btVector3 >::check(L,7));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in btMinkowskiPenetrationDepthSolver::base_calcPenDepth function");
		}
		btVector3 & v=*v_ptr;
		btVector3* pa_ptr=(Luna< btVector3 >::check(L,8));
		if( !pa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pa in btMinkowskiPenetrationDepthSolver::base_calcPenDepth function");
		}
		btVector3 & pa=*pa_ptr;
		btVector3* pb_ptr=(Luna< btVector3 >::check(L,9));
		if( !pb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pb in btMinkowskiPenetrationDepthSolver::base_calcPenDepth function");
		}
		btVector3 & pb=*pb_ptr;
		btIDebugDraw* debugDraw=(Luna< btIDebugDraw >::check(L,10));
		btStackAlloc* stackAlloc=(Luna< btStackAlloc >::check(L,11));

		btMinkowskiPenetrationDepthSolver* self=Luna< btConvexPenetrationDepthSolver >::checkSubType< btMinkowskiPenetrationDepthSolver >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btMinkowskiPenetrationDepthSolver::base_calcPenDepth(btVoronoiSimplexSolver &, const btConvexShape *, const btConvexShape *, const btTransform &, const btTransform &, btVector3 &, btVector3 &, btVector3 &, class btIDebugDraw *, btStackAlloc *). Got : '%s'",typeid(Luna< btConvexPenetrationDepthSolver >::check(L,1)).name());
		}
		bool lret = self->btMinkowskiPenetrationDepthSolver::calcPenDepth(simplexSolver, convexA, convexB, transA, transB, v, pa, pb, debugDraw, stackAlloc);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

btMinkowskiPenetrationDepthSolver* LunaTraits< btMinkowskiPenetrationDepthSolver >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btMinkowskiPenetrationDepthSolver::_bind_ctor(L);
}

void LunaTraits< btMinkowskiPenetrationDepthSolver >::_bind_dtor(btMinkowskiPenetrationDepthSolver* obj) {
	delete obj;
}

const char LunaTraits< btMinkowskiPenetrationDepthSolver >::className[] = "btMinkowskiPenetrationDepthSolver";
const char LunaTraits< btMinkowskiPenetrationDepthSolver >::fullName[] = "btMinkowskiPenetrationDepthSolver";
const char LunaTraits< btMinkowskiPenetrationDepthSolver >::moduleName[] = "bullet";
const char* LunaTraits< btMinkowskiPenetrationDepthSolver >::parents[] = {"bullet.btConvexPenetrationDepthSolver", 0};
const int LunaTraits< btMinkowskiPenetrationDepthSolver >::hash = 23608401;
const int LunaTraits< btMinkowskiPenetrationDepthSolver >::uniqueIDs[] = {62802517,0};

luna_RegType LunaTraits< btMinkowskiPenetrationDepthSolver >::methods[] = {
	{"calcPenDepth", &luna_wrapper_btMinkowskiPenetrationDepthSolver::_bind_calcPenDepth},
	{"base_calcPenDepth", &luna_wrapper_btMinkowskiPenetrationDepthSolver::_bind_base_calcPenDepth},
	{"__eq", &luna_wrapper_btMinkowskiPenetrationDepthSolver::_bind___eq},
	{"fromVoid", &luna_wrapper_btMinkowskiPenetrationDepthSolver::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btMinkowskiPenetrationDepthSolver::_bind_asVoid},
	{"getTable", &luna_wrapper_btMinkowskiPenetrationDepthSolver::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btMinkowskiPenetrationDepthSolver >::converters[] = {
	{"btConvexPenetrationDepthSolver", &luna_wrapper_btMinkowskiPenetrationDepthSolver::_cast_from_btConvexPenetrationDepthSolver},
	{0,0}
};

luna_RegEnumType LunaTraits< btMinkowskiPenetrationDepthSolver >::enumValues[] = {
	{0,0}
};


