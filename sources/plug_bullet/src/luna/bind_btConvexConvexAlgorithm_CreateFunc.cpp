#include <plug_common.h>

#include <luna/wrappers/wrapper_btConvexConvexAlgorithm_CreateFunc.h>

class luna_wrapper_btConvexConvexAlgorithm_CreateFunc {
public:
	typedef Luna< btConvexConvexAlgorithm::CreateFunc > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btCollisionAlgorithmCreateFunc* self=(Luna< btCollisionAlgorithmCreateFunc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btCollisionAlgorithmCreateFunc,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67911425) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionAlgorithmCreateFunc*)");
		}

		btCollisionAlgorithmCreateFunc* rhs =(Luna< btCollisionAlgorithmCreateFunc >::check(L,2));
		btCollisionAlgorithmCreateFunc* self=(Luna< btCollisionAlgorithmCreateFunc >::check(L,1));
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

		btConvexConvexAlgorithm::CreateFunc* self= (btConvexConvexAlgorithm::CreateFunc*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btConvexConvexAlgorithm::CreateFunc >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67911425) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btCollisionAlgorithmCreateFunc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btCollisionAlgorithmCreateFunc(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btConvexConvexAlgorithm::CreateFunc* ptr= dynamic_cast< btConvexConvexAlgorithm::CreateFunc* >(Luna< btCollisionAlgorithmCreateFunc >::check(L,1));
		btConvexConvexAlgorithm::CreateFunc* ptr= luna_caster< btCollisionAlgorithmCreateFunc, btConvexConvexAlgorithm::CreateFunc >::cast(Luna< btCollisionAlgorithmCreateFunc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btConvexConvexAlgorithm::CreateFunc >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,95428271)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btVoronoiSimplexSolver >::check(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,62802517)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btConvexPenetrationDepthSolver >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,95428271)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btVoronoiSimplexSolver >::check(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,62802517)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btConvexPenetrationDepthSolver >::check(L,3)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_CreateCollisionAlgorithm(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61780402) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,32391296)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPdSolver(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSimplexSolver(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumPerturbationIterations(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMinimumPointsPerturbationThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPdSolver(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,62802517)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSimplexSolver(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,95428271)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumPerturbationIterations(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMinimumPointsPerturbationThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_CreateCollisionAlgorithm(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61780402) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,32391296)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btConvexConvexAlgorithm::CreateFunc::CreateFunc(btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * pdSolver)
	static btConvexConvexAlgorithm::CreateFunc* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConvexConvexAlgorithm::CreateFunc::CreateFunc(btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * pdSolver) function, expected prototype:\nbtConvexConvexAlgorithm::CreateFunc::CreateFunc(btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * pdSolver)\nClass arguments details:\narg 1 ID = 95428271\narg 2 ID = 62802517\n");
		}

		btVoronoiSimplexSolver* simplexSolver=(Luna< btVoronoiSimplexSolver >::check(L,1));
		btConvexPenetrationDepthSolver* pdSolver=(Luna< btConvexPenetrationDepthSolver >::check(L,2));

		return new btConvexConvexAlgorithm::CreateFunc(simplexSolver, pdSolver);
	}

	// btConvexConvexAlgorithm::CreateFunc::CreateFunc(lua_Table * data, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * pdSolver)
	static btConvexConvexAlgorithm::CreateFunc* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConvexConvexAlgorithm::CreateFunc::CreateFunc(lua_Table * data, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * pdSolver) function, expected prototype:\nbtConvexConvexAlgorithm::CreateFunc::CreateFunc(lua_Table * data, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * pdSolver)\nClass arguments details:\narg 2 ID = 95428271\narg 3 ID = 62802517\n");
		}

		btVoronoiSimplexSolver* simplexSolver=(Luna< btVoronoiSimplexSolver >::check(L,2));
		btConvexPenetrationDepthSolver* pdSolver=(Luna< btConvexPenetrationDepthSolver >::check(L,3));

		return new wrapper_btConvexConvexAlgorithm_CreateFunc(L,NULL, simplexSolver, pdSolver);
	}

	// Overload binder for btConvexConvexAlgorithm::CreateFunc::CreateFunc
	static btConvexConvexAlgorithm::CreateFunc* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function CreateFunc, cannot match any of the overloads for function CreateFunc:\n  CreateFunc(btVoronoiSimplexSolver *, btConvexPenetrationDepthSolver *)\n  CreateFunc(lua_Table *, btVoronoiSimplexSolver *, btConvexPenetrationDepthSolver *)\n");
		return NULL;
	}


	// Function binds:
	// btCollisionAlgorithm * btConvexConvexAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	static int _bind_CreateCollisionAlgorithm(lua_State *L) {
		if (!_lg_typecheck_CreateCollisionAlgorithm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionAlgorithm * btConvexConvexAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) function, expected prototype:\nbtCollisionAlgorithm * btConvexConvexAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)\nClass arguments details:\narg 1 ID = 61780402\narg 2 ID = 32391296\narg 3 ID = 32391296\n");
		}

		btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btConvexConvexAlgorithm::CreateFunc::CreateCollisionAlgorithm function");
		}
		btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;
		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,4));

		btConvexConvexAlgorithm::CreateFunc* self=Luna< btCollisionAlgorithmCreateFunc >::checkSubType< btConvexConvexAlgorithm::CreateFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionAlgorithm * btConvexConvexAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo &, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *). Got : '%s'",typeid(Luna< btCollisionAlgorithmCreateFunc >::check(L,1)).name());
		}
		btCollisionAlgorithm * lret = self->CreateCollisionAlgorithm(ci, body0Wrap, body1Wrap);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionAlgorithm >::push(L,lret,false);

		return 1;
	}

	// btConvexPenetrationDepthSolver * btConvexConvexAlgorithm::CreateFunc::m_pdSolver()
	static int _bind_getPdSolver(lua_State *L) {
		if (!_lg_typecheck_getPdSolver(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConvexPenetrationDepthSolver * btConvexConvexAlgorithm::CreateFunc::m_pdSolver() function, expected prototype:\nbtConvexPenetrationDepthSolver * btConvexConvexAlgorithm::CreateFunc::m_pdSolver()\nClass arguments details:\n");
		}


		btConvexConvexAlgorithm::CreateFunc* self=Luna< btCollisionAlgorithmCreateFunc >::checkSubType< btConvexConvexAlgorithm::CreateFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btConvexPenetrationDepthSolver * btConvexConvexAlgorithm::CreateFunc::m_pdSolver(). Got : '%s'",typeid(Luna< btCollisionAlgorithmCreateFunc >::check(L,1)).name());
		}
		btConvexPenetrationDepthSolver * lret = self->m_pdSolver;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btConvexPenetrationDepthSolver >::push(L,lret,false);

		return 1;
	}

	// btVoronoiSimplexSolver * btConvexConvexAlgorithm::CreateFunc::m_simplexSolver()
	static int _bind_getSimplexSolver(lua_State *L) {
		if (!_lg_typecheck_getSimplexSolver(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVoronoiSimplexSolver * btConvexConvexAlgorithm::CreateFunc::m_simplexSolver() function, expected prototype:\nbtVoronoiSimplexSolver * btConvexConvexAlgorithm::CreateFunc::m_simplexSolver()\nClass arguments details:\n");
		}


		btConvexConvexAlgorithm::CreateFunc* self=Luna< btCollisionAlgorithmCreateFunc >::checkSubType< btConvexConvexAlgorithm::CreateFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVoronoiSimplexSolver * btConvexConvexAlgorithm::CreateFunc::m_simplexSolver(). Got : '%s'",typeid(Luna< btCollisionAlgorithmCreateFunc >::check(L,1)).name());
		}
		btVoronoiSimplexSolver * lret = self->m_simplexSolver;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVoronoiSimplexSolver >::push(L,lret,false);

		return 1;
	}

	// int btConvexConvexAlgorithm::CreateFunc::m_numPerturbationIterations()
	static int _bind_getNumPerturbationIterations(lua_State *L) {
		if (!_lg_typecheck_getNumPerturbationIterations(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexConvexAlgorithm::CreateFunc::m_numPerturbationIterations() function, expected prototype:\nint btConvexConvexAlgorithm::CreateFunc::m_numPerturbationIterations()\nClass arguments details:\n");
		}


		btConvexConvexAlgorithm::CreateFunc* self=Luna< btCollisionAlgorithmCreateFunc >::checkSubType< btConvexConvexAlgorithm::CreateFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexConvexAlgorithm::CreateFunc::m_numPerturbationIterations(). Got : '%s'",typeid(Luna< btCollisionAlgorithmCreateFunc >::check(L,1)).name());
		}
		int lret = self->m_numPerturbationIterations;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btConvexConvexAlgorithm::CreateFunc::m_minimumPointsPerturbationThreshold()
	static int _bind_getMinimumPointsPerturbationThreshold(lua_State *L) {
		if (!_lg_typecheck_getMinimumPointsPerturbationThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexConvexAlgorithm::CreateFunc::m_minimumPointsPerturbationThreshold() function, expected prototype:\nint btConvexConvexAlgorithm::CreateFunc::m_minimumPointsPerturbationThreshold()\nClass arguments details:\n");
		}


		btConvexConvexAlgorithm::CreateFunc* self=Luna< btCollisionAlgorithmCreateFunc >::checkSubType< btConvexConvexAlgorithm::CreateFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexConvexAlgorithm::CreateFunc::m_minimumPointsPerturbationThreshold(). Got : '%s'",typeid(Luna< btCollisionAlgorithmCreateFunc >::check(L,1)).name());
		}
		int lret = self->m_minimumPointsPerturbationThreshold;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexConvexAlgorithm::CreateFunc::m_pdSolver(btConvexPenetrationDepthSolver * value)
	static int _bind_setPdSolver(lua_State *L) {
		if (!_lg_typecheck_setPdSolver(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexConvexAlgorithm::CreateFunc::m_pdSolver(btConvexPenetrationDepthSolver * value) function, expected prototype:\nvoid btConvexConvexAlgorithm::CreateFunc::m_pdSolver(btConvexPenetrationDepthSolver * value)\nClass arguments details:\narg 1 ID = 62802517\n");
		}

		btConvexPenetrationDepthSolver* value=(Luna< btConvexPenetrationDepthSolver >::check(L,2));

		btConvexConvexAlgorithm::CreateFunc* self=Luna< btCollisionAlgorithmCreateFunc >::checkSubType< btConvexConvexAlgorithm::CreateFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexConvexAlgorithm::CreateFunc::m_pdSolver(btConvexPenetrationDepthSolver *). Got : '%s'",typeid(Luna< btCollisionAlgorithmCreateFunc >::check(L,1)).name());
		}
		self->m_pdSolver = value;

		return 0;
	}

	// void btConvexConvexAlgorithm::CreateFunc::m_simplexSolver(btVoronoiSimplexSolver * value)
	static int _bind_setSimplexSolver(lua_State *L) {
		if (!_lg_typecheck_setSimplexSolver(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexConvexAlgorithm::CreateFunc::m_simplexSolver(btVoronoiSimplexSolver * value) function, expected prototype:\nvoid btConvexConvexAlgorithm::CreateFunc::m_simplexSolver(btVoronoiSimplexSolver * value)\nClass arguments details:\narg 1 ID = 95428271\n");
		}

		btVoronoiSimplexSolver* value=(Luna< btVoronoiSimplexSolver >::check(L,2));

		btConvexConvexAlgorithm::CreateFunc* self=Luna< btCollisionAlgorithmCreateFunc >::checkSubType< btConvexConvexAlgorithm::CreateFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexConvexAlgorithm::CreateFunc::m_simplexSolver(btVoronoiSimplexSolver *). Got : '%s'",typeid(Luna< btCollisionAlgorithmCreateFunc >::check(L,1)).name());
		}
		self->m_simplexSolver = value;

		return 0;
	}

	// void btConvexConvexAlgorithm::CreateFunc::m_numPerturbationIterations(int value)
	static int _bind_setNumPerturbationIterations(lua_State *L) {
		if (!_lg_typecheck_setNumPerturbationIterations(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexConvexAlgorithm::CreateFunc::m_numPerturbationIterations(int value) function, expected prototype:\nvoid btConvexConvexAlgorithm::CreateFunc::m_numPerturbationIterations(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btConvexConvexAlgorithm::CreateFunc* self=Luna< btCollisionAlgorithmCreateFunc >::checkSubType< btConvexConvexAlgorithm::CreateFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexConvexAlgorithm::CreateFunc::m_numPerturbationIterations(int). Got : '%s'",typeid(Luna< btCollisionAlgorithmCreateFunc >::check(L,1)).name());
		}
		self->m_numPerturbationIterations = value;

		return 0;
	}

	// void btConvexConvexAlgorithm::CreateFunc::m_minimumPointsPerturbationThreshold(int value)
	static int _bind_setMinimumPointsPerturbationThreshold(lua_State *L) {
		if (!_lg_typecheck_setMinimumPointsPerturbationThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexConvexAlgorithm::CreateFunc::m_minimumPointsPerturbationThreshold(int value) function, expected prototype:\nvoid btConvexConvexAlgorithm::CreateFunc::m_minimumPointsPerturbationThreshold(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btConvexConvexAlgorithm::CreateFunc* self=Luna< btCollisionAlgorithmCreateFunc >::checkSubType< btConvexConvexAlgorithm::CreateFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexConvexAlgorithm::CreateFunc::m_minimumPointsPerturbationThreshold(int). Got : '%s'",typeid(Luna< btCollisionAlgorithmCreateFunc >::check(L,1)).name());
		}
		self->m_minimumPointsPerturbationThreshold = value;

		return 0;
	}

	// btCollisionAlgorithm * btConvexConvexAlgorithm::CreateFunc::base_CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	static int _bind_base_CreateCollisionAlgorithm(lua_State *L) {
		if (!_lg_typecheck_base_CreateCollisionAlgorithm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionAlgorithm * btConvexConvexAlgorithm::CreateFunc::base_CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) function, expected prototype:\nbtCollisionAlgorithm * btConvexConvexAlgorithm::CreateFunc::base_CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)\nClass arguments details:\narg 1 ID = 61780402\narg 2 ID = 32391296\narg 3 ID = 32391296\n");
		}

		btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btConvexConvexAlgorithm::CreateFunc::base_CreateCollisionAlgorithm function");
		}
		btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;
		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,4));

		btConvexConvexAlgorithm::CreateFunc* self=Luna< btCollisionAlgorithmCreateFunc >::checkSubType< btConvexConvexAlgorithm::CreateFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionAlgorithm * btConvexConvexAlgorithm::CreateFunc::base_CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo &, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *). Got : '%s'",typeid(Luna< btCollisionAlgorithmCreateFunc >::check(L,1)).name());
		}
		btCollisionAlgorithm * lret = self->CreateFunc::CreateCollisionAlgorithm(ci, body0Wrap, body1Wrap);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionAlgorithm >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

btConvexConvexAlgorithm::CreateFunc* LunaTraits< btConvexConvexAlgorithm::CreateFunc >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btConvexConvexAlgorithm_CreateFunc::_bind_ctor(L);
}

void LunaTraits< btConvexConvexAlgorithm::CreateFunc >::_bind_dtor(btConvexConvexAlgorithm::CreateFunc* obj) {
	delete obj;
}

const char LunaTraits< btConvexConvexAlgorithm::CreateFunc >::className[] = "btConvexConvexAlgorithm_CreateFunc";
const char LunaTraits< btConvexConvexAlgorithm::CreateFunc >::fullName[] = "btConvexConvexAlgorithm::CreateFunc";
const char LunaTraits< btConvexConvexAlgorithm::CreateFunc >::moduleName[] = "bullet";
const char* LunaTraits< btConvexConvexAlgorithm::CreateFunc >::parents[] = {"bullet.btCollisionAlgorithmCreateFunc", 0};
const int LunaTraits< btConvexConvexAlgorithm::CreateFunc >::hash = 5564899;
const int LunaTraits< btConvexConvexAlgorithm::CreateFunc >::uniqueIDs[] = {67911425,0};

luna_RegType LunaTraits< btConvexConvexAlgorithm::CreateFunc >::methods[] = {
	{"CreateCollisionAlgorithm", &luna_wrapper_btConvexConvexAlgorithm_CreateFunc::_bind_CreateCollisionAlgorithm},
	{"getPdSolver", &luna_wrapper_btConvexConvexAlgorithm_CreateFunc::_bind_getPdSolver},
	{"getSimplexSolver", &luna_wrapper_btConvexConvexAlgorithm_CreateFunc::_bind_getSimplexSolver},
	{"getNumPerturbationIterations", &luna_wrapper_btConvexConvexAlgorithm_CreateFunc::_bind_getNumPerturbationIterations},
	{"getMinimumPointsPerturbationThreshold", &luna_wrapper_btConvexConvexAlgorithm_CreateFunc::_bind_getMinimumPointsPerturbationThreshold},
	{"setPdSolver", &luna_wrapper_btConvexConvexAlgorithm_CreateFunc::_bind_setPdSolver},
	{"setSimplexSolver", &luna_wrapper_btConvexConvexAlgorithm_CreateFunc::_bind_setSimplexSolver},
	{"setNumPerturbationIterations", &luna_wrapper_btConvexConvexAlgorithm_CreateFunc::_bind_setNumPerturbationIterations},
	{"setMinimumPointsPerturbationThreshold", &luna_wrapper_btConvexConvexAlgorithm_CreateFunc::_bind_setMinimumPointsPerturbationThreshold},
	{"base_CreateCollisionAlgorithm", &luna_wrapper_btConvexConvexAlgorithm_CreateFunc::_bind_base_CreateCollisionAlgorithm},
	{"__eq", &luna_wrapper_btConvexConvexAlgorithm_CreateFunc::_bind___eq},
	{"fromVoid", &luna_wrapper_btConvexConvexAlgorithm_CreateFunc::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btConvexConvexAlgorithm_CreateFunc::_bind_asVoid},
	{"getTable", &luna_wrapper_btConvexConvexAlgorithm_CreateFunc::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btConvexConvexAlgorithm::CreateFunc >::converters[] = {
	{"btCollisionAlgorithmCreateFunc", &luna_wrapper_btConvexConvexAlgorithm_CreateFunc::_cast_from_btCollisionAlgorithmCreateFunc},
	{0,0}
};

luna_RegEnumType LunaTraits< btConvexConvexAlgorithm::CreateFunc >::enumValues[] = {
	{0,0}
};


