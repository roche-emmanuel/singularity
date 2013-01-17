#include <plug_common.h>

class luna_wrapper_btVoronoiSimplexSolver {
public:
	typedef Luna< btVoronoiSimplexSolver > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95428271) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btVoronoiSimplexSolver*)");
		}

		btVoronoiSimplexSolver* rhs =(Luna< btVoronoiSimplexSolver >::check(L,2));
		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
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

		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btVoronoiSimplexSolver");
		
		return luna_dynamicCast(L,converters,"btVoronoiSimplexSolver",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_removeVertex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reduceVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61938597) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateClosestVectorAndPoints(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_closestPtPointTetrahedron(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,75923500) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_pointOutsideOfPlane(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_closestPtPointTriangle(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,75923500) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addVertex(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEqualVertexThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEqualVertexThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_closest(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_maxVertex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_fullSimplex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSimplex(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91544891)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,91544891)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,91544891)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_inSimplex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_backup_closest(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_emptySimplex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compute_points(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_numVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_numVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_cachedP1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_cachedP2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_cachedV(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_lastW(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_equalVertexThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_cachedValidClosest(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_cachedBC(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_needsUpdate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_numVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_cachedP1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_cachedP2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_cachedV(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_lastW(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_equalVertexThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_cachedValidClosest(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_cachedBC(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75923500) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_needsUpdate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btVoronoiSimplexSolver::btVoronoiSimplexSolver()
	static btVoronoiSimplexSolver* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVoronoiSimplexSolver::btVoronoiSimplexSolver() function, expected prototype:\nbtVoronoiSimplexSolver::btVoronoiSimplexSolver()\nClass arguments details:\n");
		}


		return new btVoronoiSimplexSolver();
	}


	// Function binds:
	// void btVoronoiSimplexSolver::removeVertex(int index)
	static int _bind_removeVertex(lua_State *L) {
		if (!_lg_typecheck_removeVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVoronoiSimplexSolver::removeVertex(int index) function, expected prototype:\nvoid btVoronoiSimplexSolver::removeVertex(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVoronoiSimplexSolver::removeVertex(int). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		self->removeVertex(index);

		return 0;
	}

	// void btVoronoiSimplexSolver::reduceVertices(const btUsageBitfield & usedVerts)
	static int _bind_reduceVertices(lua_State *L) {
		if (!_lg_typecheck_reduceVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVoronoiSimplexSolver::reduceVertices(const btUsageBitfield & usedVerts) function, expected prototype:\nvoid btVoronoiSimplexSolver::reduceVertices(const btUsageBitfield & usedVerts)\nClass arguments details:\narg 1 ID = 61938597\n");
		}

		const btUsageBitfield* usedVerts_ptr=(Luna< btUsageBitfield >::check(L,2));
		if( !usedVerts_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usedVerts in btVoronoiSimplexSolver::reduceVertices function");
		}
		const btUsageBitfield & usedVerts=*usedVerts_ptr;

		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVoronoiSimplexSolver::reduceVertices(const btUsageBitfield &). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		self->reduceVertices(usedVerts);

		return 0;
	}

	// bool btVoronoiSimplexSolver::updateClosestVectorAndPoints()
	static int _bind_updateClosestVectorAndPoints(lua_State *L) {
		if (!_lg_typecheck_updateClosestVectorAndPoints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btVoronoiSimplexSolver::updateClosestVectorAndPoints() function, expected prototype:\nbool btVoronoiSimplexSolver::updateClosestVectorAndPoints()\nClass arguments details:\n");
		}


		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btVoronoiSimplexSolver::updateClosestVectorAndPoints(). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		bool lret = self->updateClosestVectorAndPoints();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btVoronoiSimplexSolver::closestPtPointTetrahedron(const btVector3 & p, const btVector3 & a, const btVector3 & b, const btVector3 & c, const btVector3 & d, btSubSimplexClosestResult & finalResult)
	static int _bind_closestPtPointTetrahedron(lua_State *L) {
		if (!_lg_typecheck_closestPtPointTetrahedron(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btVoronoiSimplexSolver::closestPtPointTetrahedron(const btVector3 & p, const btVector3 & a, const btVector3 & b, const btVector3 & c, const btVector3 & d, btSubSimplexClosestResult & finalResult) function, expected prototype:\nbool btVoronoiSimplexSolver::closestPtPointTetrahedron(const btVector3 & p, const btVector3 & a, const btVector3 & b, const btVector3 & c, const btVector3 & d, btSubSimplexClosestResult & finalResult)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\narg 5 ID = 91544891\narg 6 ID = 75923500\n");
		}

		const btVector3* p_ptr=(Luna< btVector3 >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in btVoronoiSimplexSolver::closestPtPointTetrahedron function");
		}
		const btVector3 & p=*p_ptr;
		const btVector3* a_ptr=(Luna< btVector3 >::check(L,3));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in btVoronoiSimplexSolver::closestPtPointTetrahedron function");
		}
		const btVector3 & a=*a_ptr;
		const btVector3* b_ptr=(Luna< btVector3 >::check(L,4));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in btVoronoiSimplexSolver::closestPtPointTetrahedron function");
		}
		const btVector3 & b=*b_ptr;
		const btVector3* c_ptr=(Luna< btVector3 >::check(L,5));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in btVoronoiSimplexSolver::closestPtPointTetrahedron function");
		}
		const btVector3 & c=*c_ptr;
		const btVector3* d_ptr=(Luna< btVector3 >::check(L,6));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in btVoronoiSimplexSolver::closestPtPointTetrahedron function");
		}
		const btVector3 & d=*d_ptr;
		btSubSimplexClosestResult* finalResult_ptr=(Luna< btSubSimplexClosestResult >::check(L,7));
		if( !finalResult_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg finalResult in btVoronoiSimplexSolver::closestPtPointTetrahedron function");
		}
		btSubSimplexClosestResult & finalResult=*finalResult_ptr;

		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btVoronoiSimplexSolver::closestPtPointTetrahedron(const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, btSubSimplexClosestResult &). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		bool lret = self->closestPtPointTetrahedron(p, a, b, c, d, finalResult);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int btVoronoiSimplexSolver::pointOutsideOfPlane(const btVector3 & p, const btVector3 & a, const btVector3 & b, const btVector3 & c, const btVector3 & d)
	static int _bind_pointOutsideOfPlane(lua_State *L) {
		if (!_lg_typecheck_pointOutsideOfPlane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btVoronoiSimplexSolver::pointOutsideOfPlane(const btVector3 & p, const btVector3 & a, const btVector3 & b, const btVector3 & c, const btVector3 & d) function, expected prototype:\nint btVoronoiSimplexSolver::pointOutsideOfPlane(const btVector3 & p, const btVector3 & a, const btVector3 & b, const btVector3 & c, const btVector3 & d)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\narg 5 ID = 91544891\n");
		}

		const btVector3* p_ptr=(Luna< btVector3 >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in btVoronoiSimplexSolver::pointOutsideOfPlane function");
		}
		const btVector3 & p=*p_ptr;
		const btVector3* a_ptr=(Luna< btVector3 >::check(L,3));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in btVoronoiSimplexSolver::pointOutsideOfPlane function");
		}
		const btVector3 & a=*a_ptr;
		const btVector3* b_ptr=(Luna< btVector3 >::check(L,4));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in btVoronoiSimplexSolver::pointOutsideOfPlane function");
		}
		const btVector3 & b=*b_ptr;
		const btVector3* c_ptr=(Luna< btVector3 >::check(L,5));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in btVoronoiSimplexSolver::pointOutsideOfPlane function");
		}
		const btVector3 & c=*c_ptr;
		const btVector3* d_ptr=(Luna< btVector3 >::check(L,6));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in btVoronoiSimplexSolver::pointOutsideOfPlane function");
		}
		const btVector3 & d=*d_ptr;

		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btVoronoiSimplexSolver::pointOutsideOfPlane(const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		int lret = self->pointOutsideOfPlane(p, a, b, c, d);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btVoronoiSimplexSolver::closestPtPointTriangle(const btVector3 & p, const btVector3 & a, const btVector3 & b, const btVector3 & c, btSubSimplexClosestResult & result)
	static int _bind_closestPtPointTriangle(lua_State *L) {
		if (!_lg_typecheck_closestPtPointTriangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btVoronoiSimplexSolver::closestPtPointTriangle(const btVector3 & p, const btVector3 & a, const btVector3 & b, const btVector3 & c, btSubSimplexClosestResult & result) function, expected prototype:\nbool btVoronoiSimplexSolver::closestPtPointTriangle(const btVector3 & p, const btVector3 & a, const btVector3 & b, const btVector3 & c, btSubSimplexClosestResult & result)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\narg 5 ID = 75923500\n");
		}

		const btVector3* p_ptr=(Luna< btVector3 >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in btVoronoiSimplexSolver::closestPtPointTriangle function");
		}
		const btVector3 & p=*p_ptr;
		const btVector3* a_ptr=(Luna< btVector3 >::check(L,3));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in btVoronoiSimplexSolver::closestPtPointTriangle function");
		}
		const btVector3 & a=*a_ptr;
		const btVector3* b_ptr=(Luna< btVector3 >::check(L,4));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in btVoronoiSimplexSolver::closestPtPointTriangle function");
		}
		const btVector3 & b=*b_ptr;
		const btVector3* c_ptr=(Luna< btVector3 >::check(L,5));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in btVoronoiSimplexSolver::closestPtPointTriangle function");
		}
		const btVector3 & c=*c_ptr;
		btSubSimplexClosestResult* result_ptr=(Luna< btSubSimplexClosestResult >::check(L,6));
		if( !result_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg result in btVoronoiSimplexSolver::closestPtPointTriangle function");
		}
		btSubSimplexClosestResult & result=*result_ptr;

		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btVoronoiSimplexSolver::closestPtPointTriangle(const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, btSubSimplexClosestResult &). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		bool lret = self->closestPtPointTriangle(p, a, b, c, result);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btVoronoiSimplexSolver::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVoronoiSimplexSolver::reset() function, expected prototype:\nvoid btVoronoiSimplexSolver::reset()\nClass arguments details:\n");
		}


		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVoronoiSimplexSolver::reset(). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		self->reset();

		return 0;
	}

	// void btVoronoiSimplexSolver::addVertex(const btVector3 & w, const btVector3 & p, const btVector3 & q)
	static int _bind_addVertex(lua_State *L) {
		if (!_lg_typecheck_addVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVoronoiSimplexSolver::addVertex(const btVector3 & w, const btVector3 & p, const btVector3 & q) function, expected prototype:\nvoid btVoronoiSimplexSolver::addVertex(const btVector3 & w, const btVector3 & p, const btVector3 & q)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btVector3* w_ptr=(Luna< btVector3 >::check(L,2));
		if( !w_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg w in btVoronoiSimplexSolver::addVertex function");
		}
		const btVector3 & w=*w_ptr;
		const btVector3* p_ptr=(Luna< btVector3 >::check(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in btVoronoiSimplexSolver::addVertex function");
		}
		const btVector3 & p=*p_ptr;
		const btVector3* q_ptr=(Luna< btVector3 >::check(L,4));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in btVoronoiSimplexSolver::addVertex function");
		}
		const btVector3 & q=*q_ptr;

		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVoronoiSimplexSolver::addVertex(const btVector3 &, const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		self->addVertex(w, p, q);

		return 0;
	}

	// void btVoronoiSimplexSolver::setEqualVertexThreshold(float threshold)
	static int _bind_setEqualVertexThreshold(lua_State *L) {
		if (!_lg_typecheck_setEqualVertexThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVoronoiSimplexSolver::setEqualVertexThreshold(float threshold) function, expected prototype:\nvoid btVoronoiSimplexSolver::setEqualVertexThreshold(float threshold)\nClass arguments details:\n");
		}

		float threshold=(float)lua_tonumber(L,2);

		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVoronoiSimplexSolver::setEqualVertexThreshold(float). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		self->setEqualVertexThreshold(threshold);

		return 0;
	}

	// float btVoronoiSimplexSolver::getEqualVertexThreshold() const
	static int _bind_getEqualVertexThreshold(lua_State *L) {
		if (!_lg_typecheck_getEqualVertexThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btVoronoiSimplexSolver::getEqualVertexThreshold() const function, expected prototype:\nfloat btVoronoiSimplexSolver::getEqualVertexThreshold() const\nClass arguments details:\n");
		}


		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btVoronoiSimplexSolver::getEqualVertexThreshold() const. Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		float lret = self->getEqualVertexThreshold();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btVoronoiSimplexSolver::closest(btVector3 & v)
	static int _bind_closest(lua_State *L) {
		if (!_lg_typecheck_closest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btVoronoiSimplexSolver::closest(btVector3 & v) function, expected prototype:\nbool btVoronoiSimplexSolver::closest(btVector3 & v)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* v_ptr=(Luna< btVector3 >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in btVoronoiSimplexSolver::closest function");
		}
		btVector3 & v=*v_ptr;

		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btVoronoiSimplexSolver::closest(btVector3 &). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		bool lret = self->closest(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float btVoronoiSimplexSolver::maxVertex()
	static int _bind_maxVertex(lua_State *L) {
		if (!_lg_typecheck_maxVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btVoronoiSimplexSolver::maxVertex() function, expected prototype:\nfloat btVoronoiSimplexSolver::maxVertex()\nClass arguments details:\n");
		}


		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btVoronoiSimplexSolver::maxVertex(). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		float lret = self->maxVertex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btVoronoiSimplexSolver::fullSimplex() const
	static int _bind_fullSimplex(lua_State *L) {
		if (!_lg_typecheck_fullSimplex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btVoronoiSimplexSolver::fullSimplex() const function, expected prototype:\nbool btVoronoiSimplexSolver::fullSimplex() const\nClass arguments details:\n");
		}


		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btVoronoiSimplexSolver::fullSimplex() const. Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		bool lret = self->fullSimplex();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int btVoronoiSimplexSolver::getSimplex(btVector3 * pBuf, btVector3 * qBuf, btVector3 * yBuf) const
	static int _bind_getSimplex(lua_State *L) {
		if (!_lg_typecheck_getSimplex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btVoronoiSimplexSolver::getSimplex(btVector3 * pBuf, btVector3 * qBuf, btVector3 * yBuf) const function, expected prototype:\nint btVoronoiSimplexSolver::getSimplex(btVector3 * pBuf, btVector3 * qBuf, btVector3 * yBuf) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btVector3* pBuf=(Luna< btVector3 >::check(L,2));
		btVector3* qBuf=(Luna< btVector3 >::check(L,3));
		btVector3* yBuf=(Luna< btVector3 >::check(L,4));

		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btVoronoiSimplexSolver::getSimplex(btVector3 *, btVector3 *, btVector3 *) const. Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		int lret = self->getSimplex(pBuf, qBuf, yBuf);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btVoronoiSimplexSolver::inSimplex(const btVector3 & w)
	static int _bind_inSimplex(lua_State *L) {
		if (!_lg_typecheck_inSimplex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btVoronoiSimplexSolver::inSimplex(const btVector3 & w) function, expected prototype:\nbool btVoronoiSimplexSolver::inSimplex(const btVector3 & w)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* w_ptr=(Luna< btVector3 >::check(L,2));
		if( !w_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg w in btVoronoiSimplexSolver::inSimplex function");
		}
		const btVector3 & w=*w_ptr;

		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btVoronoiSimplexSolver::inSimplex(const btVector3 &). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		bool lret = self->inSimplex(w);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btVoronoiSimplexSolver::backup_closest(btVector3 & v)
	static int _bind_backup_closest(lua_State *L) {
		if (!_lg_typecheck_backup_closest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVoronoiSimplexSolver::backup_closest(btVector3 & v) function, expected prototype:\nvoid btVoronoiSimplexSolver::backup_closest(btVector3 & v)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* v_ptr=(Luna< btVector3 >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in btVoronoiSimplexSolver::backup_closest function");
		}
		btVector3 & v=*v_ptr;

		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVoronoiSimplexSolver::backup_closest(btVector3 &). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		self->backup_closest(v);

		return 0;
	}

	// bool btVoronoiSimplexSolver::emptySimplex() const
	static int _bind_emptySimplex(lua_State *L) {
		if (!_lg_typecheck_emptySimplex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btVoronoiSimplexSolver::emptySimplex() const function, expected prototype:\nbool btVoronoiSimplexSolver::emptySimplex() const\nClass arguments details:\n");
		}


		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btVoronoiSimplexSolver::emptySimplex() const. Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		bool lret = self->emptySimplex();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btVoronoiSimplexSolver::compute_points(btVector3 & p1, btVector3 & p2)
	static int _bind_compute_points(lua_State *L) {
		if (!_lg_typecheck_compute_points(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVoronoiSimplexSolver::compute_points(btVector3 & p1, btVector3 & p2) function, expected prototype:\nvoid btVoronoiSimplexSolver::compute_points(btVector3 & p1, btVector3 & p2)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* p1_ptr=(Luna< btVector3 >::check(L,2));
		if( !p1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p1 in btVoronoiSimplexSolver::compute_points function");
		}
		btVector3 & p1=*p1_ptr;
		btVector3* p2_ptr=(Luna< btVector3 >::check(L,3));
		if( !p2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p2 in btVoronoiSimplexSolver::compute_points function");
		}
		btVector3 & p2=*p2_ptr;

		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVoronoiSimplexSolver::compute_points(btVector3 &, btVector3 &). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		self->compute_points(p1, p2);

		return 0;
	}

	// int btVoronoiSimplexSolver::numVertices() const
	static int _bind_numVertices(lua_State *L) {
		if (!_lg_typecheck_numVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btVoronoiSimplexSolver::numVertices() const function, expected prototype:\nint btVoronoiSimplexSolver::numVertices() const\nClass arguments details:\n");
		}


		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btVoronoiSimplexSolver::numVertices() const. Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		int lret = self->numVertices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btVoronoiSimplexSolver::m_numVertices()
	static int _bind_getM_numVertices(lua_State *L) {
		if (!_lg_typecheck_getM_numVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btVoronoiSimplexSolver::m_numVertices() function, expected prototype:\nint btVoronoiSimplexSolver::m_numVertices()\nClass arguments details:\n");
		}


		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btVoronoiSimplexSolver::m_numVertices(). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		int lret = self->m_numVertices;
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btVoronoiSimplexSolver::m_cachedP1()
	static int _bind_getM_cachedP1(lua_State *L) {
		if (!_lg_typecheck_getM_cachedP1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btVoronoiSimplexSolver::m_cachedP1() function, expected prototype:\nbtVector3 btVoronoiSimplexSolver::m_cachedP1()\nClass arguments details:\n");
		}


		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btVoronoiSimplexSolver::m_cachedP1(). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_cachedP1;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btVoronoiSimplexSolver::m_cachedP2()
	static int _bind_getM_cachedP2(lua_State *L) {
		if (!_lg_typecheck_getM_cachedP2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btVoronoiSimplexSolver::m_cachedP2() function, expected prototype:\nbtVector3 btVoronoiSimplexSolver::m_cachedP2()\nClass arguments details:\n");
		}


		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btVoronoiSimplexSolver::m_cachedP2(). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_cachedP2;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btVoronoiSimplexSolver::m_cachedV()
	static int _bind_getM_cachedV(lua_State *L) {
		if (!_lg_typecheck_getM_cachedV(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btVoronoiSimplexSolver::m_cachedV() function, expected prototype:\nbtVector3 btVoronoiSimplexSolver::m_cachedV()\nClass arguments details:\n");
		}


		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btVoronoiSimplexSolver::m_cachedV(). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_cachedV;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btVoronoiSimplexSolver::m_lastW()
	static int _bind_getM_lastW(lua_State *L) {
		if (!_lg_typecheck_getM_lastW(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btVoronoiSimplexSolver::m_lastW() function, expected prototype:\nbtVector3 btVoronoiSimplexSolver::m_lastW()\nClass arguments details:\n");
		}


		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btVoronoiSimplexSolver::m_lastW(). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_lastW;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float btVoronoiSimplexSolver::m_equalVertexThreshold()
	static int _bind_getM_equalVertexThreshold(lua_State *L) {
		if (!_lg_typecheck_getM_equalVertexThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btVoronoiSimplexSolver::m_equalVertexThreshold() function, expected prototype:\nfloat btVoronoiSimplexSolver::m_equalVertexThreshold()\nClass arguments details:\n");
		}


		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btVoronoiSimplexSolver::m_equalVertexThreshold(). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		float lret = self->m_equalVertexThreshold;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btVoronoiSimplexSolver::m_cachedValidClosest()
	static int _bind_getM_cachedValidClosest(lua_State *L) {
		if (!_lg_typecheck_getM_cachedValidClosest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btVoronoiSimplexSolver::m_cachedValidClosest() function, expected prototype:\nbool btVoronoiSimplexSolver::m_cachedValidClosest()\nClass arguments details:\n");
		}


		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btVoronoiSimplexSolver::m_cachedValidClosest(). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		bool lret = self->m_cachedValidClosest;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// btSubSimplexClosestResult btVoronoiSimplexSolver::m_cachedBC()
	static int _bind_getM_cachedBC(lua_State *L) {
		if (!_lg_typecheck_getM_cachedBC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btSubSimplexClosestResult btVoronoiSimplexSolver::m_cachedBC() function, expected prototype:\nbtSubSimplexClosestResult btVoronoiSimplexSolver::m_cachedBC()\nClass arguments details:\n");
		}


		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btSubSimplexClosestResult btVoronoiSimplexSolver::m_cachedBC(). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		const btSubSimplexClosestResult* lret = &self->m_cachedBC;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btSubSimplexClosestResult >::push(L,lret,false);

		return 1;
	}

	// bool btVoronoiSimplexSolver::m_needsUpdate()
	static int _bind_getM_needsUpdate(lua_State *L) {
		if (!_lg_typecheck_getM_needsUpdate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btVoronoiSimplexSolver::m_needsUpdate() function, expected prototype:\nbool btVoronoiSimplexSolver::m_needsUpdate()\nClass arguments details:\n");
		}


		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btVoronoiSimplexSolver::m_needsUpdate(). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		bool lret = self->m_needsUpdate;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btVoronoiSimplexSolver::m_numVertices(int value)
	static int _bind_setM_numVertices(lua_State *L) {
		if (!_lg_typecheck_setM_numVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVoronoiSimplexSolver::m_numVertices(int value) function, expected prototype:\nvoid btVoronoiSimplexSolver::m_numVertices(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVoronoiSimplexSolver::m_numVertices(int). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		self->m_numVertices = value;

		return 0;
	}

	// void btVoronoiSimplexSolver::m_cachedP1(btVector3 value)
	static int _bind_setM_cachedP1(lua_State *L) {
		if (!_lg_typecheck_setM_cachedP1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVoronoiSimplexSolver::m_cachedP1(btVector3 value) function, expected prototype:\nvoid btVoronoiSimplexSolver::m_cachedP1(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btVoronoiSimplexSolver::m_cachedP1 function");
		}
		btVector3 value=*value_ptr;

		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVoronoiSimplexSolver::m_cachedP1(btVector3). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		self->m_cachedP1 = value;

		return 0;
	}

	// void btVoronoiSimplexSolver::m_cachedP2(btVector3 value)
	static int _bind_setM_cachedP2(lua_State *L) {
		if (!_lg_typecheck_setM_cachedP2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVoronoiSimplexSolver::m_cachedP2(btVector3 value) function, expected prototype:\nvoid btVoronoiSimplexSolver::m_cachedP2(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btVoronoiSimplexSolver::m_cachedP2 function");
		}
		btVector3 value=*value_ptr;

		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVoronoiSimplexSolver::m_cachedP2(btVector3). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		self->m_cachedP2 = value;

		return 0;
	}

	// void btVoronoiSimplexSolver::m_cachedV(btVector3 value)
	static int _bind_setM_cachedV(lua_State *L) {
		if (!_lg_typecheck_setM_cachedV(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVoronoiSimplexSolver::m_cachedV(btVector3 value) function, expected prototype:\nvoid btVoronoiSimplexSolver::m_cachedV(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btVoronoiSimplexSolver::m_cachedV function");
		}
		btVector3 value=*value_ptr;

		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVoronoiSimplexSolver::m_cachedV(btVector3). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		self->m_cachedV = value;

		return 0;
	}

	// void btVoronoiSimplexSolver::m_lastW(btVector3 value)
	static int _bind_setM_lastW(lua_State *L) {
		if (!_lg_typecheck_setM_lastW(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVoronoiSimplexSolver::m_lastW(btVector3 value) function, expected prototype:\nvoid btVoronoiSimplexSolver::m_lastW(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btVoronoiSimplexSolver::m_lastW function");
		}
		btVector3 value=*value_ptr;

		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVoronoiSimplexSolver::m_lastW(btVector3). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		self->m_lastW = value;

		return 0;
	}

	// void btVoronoiSimplexSolver::m_equalVertexThreshold(float value)
	static int _bind_setM_equalVertexThreshold(lua_State *L) {
		if (!_lg_typecheck_setM_equalVertexThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVoronoiSimplexSolver::m_equalVertexThreshold(float value) function, expected prototype:\nvoid btVoronoiSimplexSolver::m_equalVertexThreshold(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVoronoiSimplexSolver::m_equalVertexThreshold(float). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		self->m_equalVertexThreshold = value;

		return 0;
	}

	// void btVoronoiSimplexSolver::m_cachedValidClosest(bool value)
	static int _bind_setM_cachedValidClosest(lua_State *L) {
		if (!_lg_typecheck_setM_cachedValidClosest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVoronoiSimplexSolver::m_cachedValidClosest(bool value) function, expected prototype:\nvoid btVoronoiSimplexSolver::m_cachedValidClosest(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVoronoiSimplexSolver::m_cachedValidClosest(bool). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		self->m_cachedValidClosest = value;

		return 0;
	}

	// void btVoronoiSimplexSolver::m_cachedBC(btSubSimplexClosestResult value)
	static int _bind_setM_cachedBC(lua_State *L) {
		if (!_lg_typecheck_setM_cachedBC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVoronoiSimplexSolver::m_cachedBC(btSubSimplexClosestResult value) function, expected prototype:\nvoid btVoronoiSimplexSolver::m_cachedBC(btSubSimplexClosestResult value)\nClass arguments details:\narg 1 ID = 75923500\n");
		}

		btSubSimplexClosestResult* value_ptr=(Luna< btSubSimplexClosestResult >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btVoronoiSimplexSolver::m_cachedBC function");
		}
		btSubSimplexClosestResult value=*value_ptr;

		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVoronoiSimplexSolver::m_cachedBC(btSubSimplexClosestResult). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		self->m_cachedBC = value;

		return 0;
	}

	// void btVoronoiSimplexSolver::m_needsUpdate(bool value)
	static int _bind_setM_needsUpdate(lua_State *L) {
		if (!_lg_typecheck_setM_needsUpdate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVoronoiSimplexSolver::m_needsUpdate(bool value) function, expected prototype:\nvoid btVoronoiSimplexSolver::m_needsUpdate(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		btVoronoiSimplexSolver* self=(Luna< btVoronoiSimplexSolver >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVoronoiSimplexSolver::m_needsUpdate(bool). Got : '%s'",typeid(Luna< btVoronoiSimplexSolver >::check(L,1)).name());
		}
		self->m_needsUpdate = value;

		return 0;
	}


	// Operator binds:

};

btVoronoiSimplexSolver* LunaTraits< btVoronoiSimplexSolver >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btVoronoiSimplexSolver::_bind_ctor(L);
}

void LunaTraits< btVoronoiSimplexSolver >::_bind_dtor(btVoronoiSimplexSolver* obj) {
	delete obj;
}

const char LunaTraits< btVoronoiSimplexSolver >::className[] = "btVoronoiSimplexSolver";
const char LunaTraits< btVoronoiSimplexSolver >::fullName[] = "btVoronoiSimplexSolver";
const char LunaTraits< btVoronoiSimplexSolver >::moduleName[] = "bullet";
const char* LunaTraits< btVoronoiSimplexSolver >::parents[] = {0};
const int LunaTraits< btVoronoiSimplexSolver >::hash = 95428271;
const int LunaTraits< btVoronoiSimplexSolver >::uniqueIDs[] = {95428271,0};

luna_RegType LunaTraits< btVoronoiSimplexSolver >::methods[] = {
	{"removeVertex", &luna_wrapper_btVoronoiSimplexSolver::_bind_removeVertex},
	{"reduceVertices", &luna_wrapper_btVoronoiSimplexSolver::_bind_reduceVertices},
	{"updateClosestVectorAndPoints", &luna_wrapper_btVoronoiSimplexSolver::_bind_updateClosestVectorAndPoints},
	{"closestPtPointTetrahedron", &luna_wrapper_btVoronoiSimplexSolver::_bind_closestPtPointTetrahedron},
	{"pointOutsideOfPlane", &luna_wrapper_btVoronoiSimplexSolver::_bind_pointOutsideOfPlane},
	{"closestPtPointTriangle", &luna_wrapper_btVoronoiSimplexSolver::_bind_closestPtPointTriangle},
	{"reset", &luna_wrapper_btVoronoiSimplexSolver::_bind_reset},
	{"addVertex", &luna_wrapper_btVoronoiSimplexSolver::_bind_addVertex},
	{"setEqualVertexThreshold", &luna_wrapper_btVoronoiSimplexSolver::_bind_setEqualVertexThreshold},
	{"getEqualVertexThreshold", &luna_wrapper_btVoronoiSimplexSolver::_bind_getEqualVertexThreshold},
	{"closest", &luna_wrapper_btVoronoiSimplexSolver::_bind_closest},
	{"maxVertex", &luna_wrapper_btVoronoiSimplexSolver::_bind_maxVertex},
	{"fullSimplex", &luna_wrapper_btVoronoiSimplexSolver::_bind_fullSimplex},
	{"getSimplex", &luna_wrapper_btVoronoiSimplexSolver::_bind_getSimplex},
	{"inSimplex", &luna_wrapper_btVoronoiSimplexSolver::_bind_inSimplex},
	{"backup_closest", &luna_wrapper_btVoronoiSimplexSolver::_bind_backup_closest},
	{"emptySimplex", &luna_wrapper_btVoronoiSimplexSolver::_bind_emptySimplex},
	{"compute_points", &luna_wrapper_btVoronoiSimplexSolver::_bind_compute_points},
	{"numVertices", &luna_wrapper_btVoronoiSimplexSolver::_bind_numVertices},
	{"getM_numVertices", &luna_wrapper_btVoronoiSimplexSolver::_bind_getM_numVertices},
	{"getM_cachedP1", &luna_wrapper_btVoronoiSimplexSolver::_bind_getM_cachedP1},
	{"getM_cachedP2", &luna_wrapper_btVoronoiSimplexSolver::_bind_getM_cachedP2},
	{"getM_cachedV", &luna_wrapper_btVoronoiSimplexSolver::_bind_getM_cachedV},
	{"getM_lastW", &luna_wrapper_btVoronoiSimplexSolver::_bind_getM_lastW},
	{"getM_equalVertexThreshold", &luna_wrapper_btVoronoiSimplexSolver::_bind_getM_equalVertexThreshold},
	{"getM_cachedValidClosest", &luna_wrapper_btVoronoiSimplexSolver::_bind_getM_cachedValidClosest},
	{"getM_cachedBC", &luna_wrapper_btVoronoiSimplexSolver::_bind_getM_cachedBC},
	{"getM_needsUpdate", &luna_wrapper_btVoronoiSimplexSolver::_bind_getM_needsUpdate},
	{"setM_numVertices", &luna_wrapper_btVoronoiSimplexSolver::_bind_setM_numVertices},
	{"setM_cachedP1", &luna_wrapper_btVoronoiSimplexSolver::_bind_setM_cachedP1},
	{"setM_cachedP2", &luna_wrapper_btVoronoiSimplexSolver::_bind_setM_cachedP2},
	{"setM_cachedV", &luna_wrapper_btVoronoiSimplexSolver::_bind_setM_cachedV},
	{"setM_lastW", &luna_wrapper_btVoronoiSimplexSolver::_bind_setM_lastW},
	{"setM_equalVertexThreshold", &luna_wrapper_btVoronoiSimplexSolver::_bind_setM_equalVertexThreshold},
	{"setM_cachedValidClosest", &luna_wrapper_btVoronoiSimplexSolver::_bind_setM_cachedValidClosest},
	{"setM_cachedBC", &luna_wrapper_btVoronoiSimplexSolver::_bind_setM_cachedBC},
	{"setM_needsUpdate", &luna_wrapper_btVoronoiSimplexSolver::_bind_setM_needsUpdate},
	{"dynCast", &luna_wrapper_btVoronoiSimplexSolver::_bind_dynCast},
	{"__eq", &luna_wrapper_btVoronoiSimplexSolver::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btVoronoiSimplexSolver >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btVoronoiSimplexSolver >::enumValues[] = {
	{0,0}
};


