#include <plug_common.h>

#include <luna/wrappers/wrapper_btConvexPenetrationDepthSolver.h>

class luna_wrapper_btConvexPenetrationDepthSolver {
public:
	typedef Luna< btConvexPenetrationDepthSolver > luna_t;

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

		btConvexPenetrationDepthSolver* self=(Luna< btConvexPenetrationDepthSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btConvexPenetrationDepthSolver");
		
		return luna_dynamicCast(L,converters,"btConvexPenetrationDepthSolver",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btConvexPenetrationDepthSolver::btConvexPenetrationDepthSolver(lua_Table * data)
	static btConvexPenetrationDepthSolver* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConvexPenetrationDepthSolver::btConvexPenetrationDepthSolver(lua_Table * data) function, expected prototype:\nbtConvexPenetrationDepthSolver::btConvexPenetrationDepthSolver(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btConvexPenetrationDepthSolver(L,NULL);
	}


	// Function binds:
	// bool btConvexPenetrationDepthSolver::calcPenDepth(btVoronoiSimplexSolver & simplexSolver, const btConvexShape * convexA, const btConvexShape * convexB, const btTransform & transA, const btTransform & transB, btVector3 & v, btVector3 & pa, btVector3 & pb, class btIDebugDraw * debugDraw, btStackAlloc * stackAlloc)
	static int _bind_calcPenDepth(lua_State *L) {
		if (!_lg_typecheck_calcPenDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btConvexPenetrationDepthSolver::calcPenDepth(btVoronoiSimplexSolver & simplexSolver, const btConvexShape * convexA, const btConvexShape * convexB, const btTransform & transA, const btTransform & transB, btVector3 & v, btVector3 & pa, btVector3 & pb, class btIDebugDraw * debugDraw, btStackAlloc * stackAlloc) function, expected prototype:\nbool btConvexPenetrationDepthSolver::calcPenDepth(btVoronoiSimplexSolver & simplexSolver, const btConvexShape * convexA, const btConvexShape * convexB, const btTransform & transA, const btTransform & transB, btVector3 & v, btVector3 & pa, btVector3 & pb, class btIDebugDraw * debugDraw, btStackAlloc * stackAlloc)\nClass arguments details:\narg 1 ID = 95428271\narg 2 ID = 58243831\narg 3 ID = 58243831\narg 4 ID = 13247377\narg 5 ID = 13247377\narg 6 ID = 91544891\narg 7 ID = 91544891\narg 8 ID = 91544891\narg 9 ID = 63441741\narg 10 ID = 46980417\n");
		}

		btVoronoiSimplexSolver* simplexSolver_ptr=(Luna< btVoronoiSimplexSolver >::check(L,2));
		if( !simplexSolver_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg simplexSolver in btConvexPenetrationDepthSolver::calcPenDepth function");
		}
		btVoronoiSimplexSolver & simplexSolver=*simplexSolver_ptr;
		const btConvexShape* convexA=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,3));
		const btConvexShape* convexB=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,4));
		const btTransform* transA_ptr=(Luna< btTransform >::check(L,5));
		if( !transA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transA in btConvexPenetrationDepthSolver::calcPenDepth function");
		}
		const btTransform & transA=*transA_ptr;
		const btTransform* transB_ptr=(Luna< btTransform >::check(L,6));
		if( !transB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transB in btConvexPenetrationDepthSolver::calcPenDepth function");
		}
		const btTransform & transB=*transB_ptr;
		btVector3* v_ptr=(Luna< btVector3 >::check(L,7));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in btConvexPenetrationDepthSolver::calcPenDepth function");
		}
		btVector3 & v=*v_ptr;
		btVector3* pa_ptr=(Luna< btVector3 >::check(L,8));
		if( !pa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pa in btConvexPenetrationDepthSolver::calcPenDepth function");
		}
		btVector3 & pa=*pa_ptr;
		btVector3* pb_ptr=(Luna< btVector3 >::check(L,9));
		if( !pb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pb in btConvexPenetrationDepthSolver::calcPenDepth function");
		}
		btVector3 & pb=*pb_ptr;
		btIDebugDraw* debugDraw=(Luna< btIDebugDraw >::check(L,10));
		btStackAlloc* stackAlloc=(Luna< btStackAlloc >::check(L,11));

		btConvexPenetrationDepthSolver* self=(Luna< btConvexPenetrationDepthSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btConvexPenetrationDepthSolver::calcPenDepth(btVoronoiSimplexSolver &, const btConvexShape *, const btConvexShape *, const btTransform &, const btTransform &, btVector3 &, btVector3 &, btVector3 &, class btIDebugDraw *, btStackAlloc *). Got : '%s'",typeid(Luna< btConvexPenetrationDepthSolver >::check(L,1)).name());
		}
		bool lret = self->calcPenDepth(simplexSolver, convexA, convexB, transA, transB, v, pa, pb, debugDraw, stackAlloc);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

btConvexPenetrationDepthSolver* LunaTraits< btConvexPenetrationDepthSolver >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btConvexPenetrationDepthSolver::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool btConvexPenetrationDepthSolver::calcPenDepth(btVoronoiSimplexSolver & simplexSolver, const btConvexShape * convexA, const btConvexShape * convexB, const btTransform & transA, const btTransform & transB, btVector3 & v, btVector3 & pa, btVector3 & pb, class btIDebugDraw * debugDraw, btStackAlloc * stackAlloc)
}

void LunaTraits< btConvexPenetrationDepthSolver >::_bind_dtor(btConvexPenetrationDepthSolver* obj) {
	delete obj;
}

const char LunaTraits< btConvexPenetrationDepthSolver >::className[] = "btConvexPenetrationDepthSolver";
const char LunaTraits< btConvexPenetrationDepthSolver >::fullName[] = "btConvexPenetrationDepthSolver";
const char LunaTraits< btConvexPenetrationDepthSolver >::moduleName[] = "bullet";
const char* LunaTraits< btConvexPenetrationDepthSolver >::parents[] = {0};
const int LunaTraits< btConvexPenetrationDepthSolver >::hash = 62802517;
const int LunaTraits< btConvexPenetrationDepthSolver >::uniqueIDs[] = {62802517,0};

luna_RegType LunaTraits< btConvexPenetrationDepthSolver >::methods[] = {
	{"calcPenDepth", &luna_wrapper_btConvexPenetrationDepthSolver::_bind_calcPenDepth},
	{"dynCast", &luna_wrapper_btConvexPenetrationDepthSolver::_bind_dynCast},
	{"__eq", &luna_wrapper_btConvexPenetrationDepthSolver::_bind___eq},
	{"getTable", &luna_wrapper_btConvexPenetrationDepthSolver::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btConvexPenetrationDepthSolver >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btConvexPenetrationDepthSolver >::enumValues[] = {
	{0,0}
};

