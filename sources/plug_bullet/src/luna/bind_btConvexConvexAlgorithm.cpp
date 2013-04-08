#include <plug_common.h>

#include <luna/wrappers/wrapper_btConvexConvexAlgorithm.h>

class luna_wrapper_btConvexConvexAlgorithm {
public:
	typedef Luna< btConvexConvexAlgorithm > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btCollisionAlgorithm* self=(Luna< btCollisionAlgorithm >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btCollisionAlgorithm,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17890858) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionAlgorithm*)");
		}

		btCollisionAlgorithm* rhs =(Luna< btCollisionAlgorithm >::check(L,2));
		btCollisionAlgorithm* self=(Luna< btCollisionAlgorithm >::check(L,1));
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

		btConvexConvexAlgorithm* self= (btConvexConvexAlgorithm*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btConvexConvexAlgorithm >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17890858) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btCollisionAlgorithm >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btCollisionAlgorithm(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btConvexConvexAlgorithm* ptr= dynamic_cast< btConvexConvexAlgorithm* >(Luna< btCollisionAlgorithm >::check(L,1));
		btConvexConvexAlgorithm* ptr= luna_caster< btCollisionAlgorithm, btConvexConvexAlgorithm >::cast(Luna< btCollisionAlgorithm >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btConvexConvexAlgorithm >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,66271199)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,61780402) ) return false;
		if( (!(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2))) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btCollisionObjectWrapper >::check(L,3)) ) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,32391296)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< btCollisionObjectWrapper >::check(L,4)) ) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,95428271)) ) return false;
		if( (lua_isnil(L,5)==0 && !(Luna< btVoronoiSimplexSolver >::check(L,5)) ) ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,62802517)) ) return false;
		if( (lua_isnil(L,6)==0 && !(Luna< btConvexPenetrationDepthSolver >::check(L,6)) ) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66271199)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,61780402) ) return false;
		if( (!(Luna< btCollisionAlgorithmConstructionInfo >::check(L,3))) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,32391296)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< btCollisionObjectWrapper >::check(L,4)) ) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,32391296)) ) return false;
		if( (lua_isnil(L,5)==0 && !(Luna< btCollisionObjectWrapper >::check(L,5)) ) ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,95428271)) ) return false;
		if( (lua_isnil(L,6)==0 && !(Luna< btVoronoiSimplexSolver >::check(L,6)) ) ) return false;
		if( (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,62802517)) ) return false;
		if( (lua_isnil(L,7)==0 && !(Luna< btConvexPenetrationDepthSolver >::check(L,7)) ) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_processCollision(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,95201256) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,25324514)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_calculateTimeOfImpact(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,85758361)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,95201256) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,25324514)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAllContactManifolds(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9763203) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLowLevelOfDetail(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getManifold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_processCollision(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,95201256) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,25324514)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_calculateTimeOfImpact(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,85758361)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,95201256) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,25324514)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getAllContactManifolds(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9763203) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btConvexConvexAlgorithm::btConvexConvexAlgorithm(btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * pdSolver, int numPerturbationIterations, int minimumPointsPerturbationThreshold)
	static btConvexConvexAlgorithm* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConvexConvexAlgorithm::btConvexConvexAlgorithm(btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * pdSolver, int numPerturbationIterations, int minimumPointsPerturbationThreshold) function, expected prototype:\nbtConvexConvexAlgorithm::btConvexConvexAlgorithm(btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * pdSolver, int numPerturbationIterations, int minimumPointsPerturbationThreshold)\nClass arguments details:\narg 1 ID = 66271199\narg 2 ID = 61780402\narg 3 ID = 32391296\narg 4 ID = 32391296\narg 5 ID = 95428271\narg 6 ID = 62802517\n");
		}

		btPersistentManifold* mf=(Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1));
		const btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btConvexConvexAlgorithm::btConvexConvexAlgorithm function");
		}
		const btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;
		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,4));
		btVoronoiSimplexSolver* simplexSolver=(Luna< btVoronoiSimplexSolver >::check(L,5));
		btConvexPenetrationDepthSolver* pdSolver=(Luna< btConvexPenetrationDepthSolver >::check(L,6));
		int numPerturbationIterations=(int)lua_tointeger(L,7);
		int minimumPointsPerturbationThreshold=(int)lua_tointeger(L,8);

		return new btConvexConvexAlgorithm(mf, ci, body0Wrap, body1Wrap, simplexSolver, pdSolver, numPerturbationIterations, minimumPointsPerturbationThreshold);
	}

	// btConvexConvexAlgorithm::btConvexConvexAlgorithm(lua_Table * data, btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * pdSolver, int numPerturbationIterations, int minimumPointsPerturbationThreshold)
	static btConvexConvexAlgorithm* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConvexConvexAlgorithm::btConvexConvexAlgorithm(lua_Table * data, btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * pdSolver, int numPerturbationIterations, int minimumPointsPerturbationThreshold) function, expected prototype:\nbtConvexConvexAlgorithm::btConvexConvexAlgorithm(lua_Table * data, btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * pdSolver, int numPerturbationIterations, int minimumPointsPerturbationThreshold)\nClass arguments details:\narg 2 ID = 66271199\narg 3 ID = 61780402\narg 4 ID = 32391296\narg 5 ID = 32391296\narg 6 ID = 95428271\narg 7 ID = 62802517\n");
		}

		btPersistentManifold* mf=(Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,2));
		const btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,3));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btConvexConvexAlgorithm::btConvexConvexAlgorithm function");
		}
		const btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;
		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,4));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,5));
		btVoronoiSimplexSolver* simplexSolver=(Luna< btVoronoiSimplexSolver >::check(L,6));
		btConvexPenetrationDepthSolver* pdSolver=(Luna< btConvexPenetrationDepthSolver >::check(L,7));
		int numPerturbationIterations=(int)lua_tointeger(L,8);
		int minimumPointsPerturbationThreshold=(int)lua_tointeger(L,9);

		return new wrapper_btConvexConvexAlgorithm(L,NULL, mf, ci, body0Wrap, body1Wrap, simplexSolver, pdSolver, numPerturbationIterations, minimumPointsPerturbationThreshold);
	}

	// Overload binder for btConvexConvexAlgorithm::btConvexConvexAlgorithm
	static btConvexConvexAlgorithm* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btConvexConvexAlgorithm, cannot match any of the overloads for function btConvexConvexAlgorithm:\n  btConvexConvexAlgorithm(btPersistentManifold *, const btCollisionAlgorithmConstructionInfo &, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, btVoronoiSimplexSolver *, btConvexPenetrationDepthSolver *, int, int)\n  btConvexConvexAlgorithm(lua_Table *, btPersistentManifold *, const btCollisionAlgorithmConstructionInfo &, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, btVoronoiSimplexSolver *, btConvexPenetrationDepthSolver *, int, int)\n");
		return NULL;
	}


	// Function binds:
	// void btConvexConvexAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_processCollision(lua_State *L) {
		if (!_lg_typecheck_processCollision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexConvexAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nvoid btConvexConvexAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 95201256\narg 4 ID = 25324514\n");
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btConvexConvexAlgorithm::processCollision function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btConvexConvexAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btConvexConvexAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexConvexAlgorithm::processCollision(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->processCollision(body0Wrap, body1Wrap, dispatchInfo, resultOut);

		return 0;
	}

	// float btConvexConvexAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_calculateTimeOfImpact(lua_State *L) {
		if (!_lg_typecheck_calculateTimeOfImpact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConvexConvexAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nfloat btConvexConvexAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 95201256\narg 4 ID = 25324514\n");
		}

		btCollisionObject* body0=(Luna< btCollisionObject >::check(L,2));
		btCollisionObject* body1=(Luna< btCollisionObject >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btConvexConvexAlgorithm::calculateTimeOfImpact function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btConvexConvexAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btConvexConvexAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConvexConvexAlgorithm::calculateTimeOfImpact(btCollisionObject *, btCollisionObject *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		float lret = self->calculateTimeOfImpact(body0, body1, dispatchInfo, resultOut);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexConvexAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray)
	static int _bind_getAllContactManifolds(lua_State *L) {
		if (!_lg_typecheck_getAllContactManifolds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexConvexAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray) function, expected prototype:\nvoid btConvexConvexAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray)\nClass arguments details:\narg 1 ID = 41484542\n");
		}

		btManifoldArray* manifoldArray_ptr=(Luna< btAlignedObjectArray< btPersistentManifold * > >::checkSubType< btManifoldArray >(L,2));
		if( !manifoldArray_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg manifoldArray in btConvexConvexAlgorithm::getAllContactManifolds function");
		}
		btManifoldArray & manifoldArray=*manifoldArray_ptr;

		btConvexConvexAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btConvexConvexAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexConvexAlgorithm::getAllContactManifolds(btManifoldArray &). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->getAllContactManifolds(manifoldArray);

		return 0;
	}

	// void btConvexConvexAlgorithm::setLowLevelOfDetail(bool useLowLevel)
	static int _bind_setLowLevelOfDetail(lua_State *L) {
		if (!_lg_typecheck_setLowLevelOfDetail(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexConvexAlgorithm::setLowLevelOfDetail(bool useLowLevel) function, expected prototype:\nvoid btConvexConvexAlgorithm::setLowLevelOfDetail(bool useLowLevel)\nClass arguments details:\n");
		}

		bool useLowLevel=(bool)(lua_toboolean(L,2)==1);

		btConvexConvexAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btConvexConvexAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexConvexAlgorithm::setLowLevelOfDetail(bool). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->setLowLevelOfDetail(useLowLevel);

		return 0;
	}

	// const btPersistentManifold * btConvexConvexAlgorithm::getManifold()
	static int _bind_getManifold(lua_State *L) {
		if (!_lg_typecheck_getManifold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btPersistentManifold * btConvexConvexAlgorithm::getManifold() function, expected prototype:\nconst btPersistentManifold * btConvexConvexAlgorithm::getManifold()\nClass arguments details:\n");
		}


		btConvexConvexAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btConvexConvexAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btPersistentManifold * btConvexConvexAlgorithm::getManifold(). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		const btPersistentManifold * lret = self->getManifold();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPersistentManifold >::push(L,lret,false);

		return 1;
	}

	// void btConvexConvexAlgorithm::base_processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_base_processCollision(lua_State *L) {
		if (!_lg_typecheck_base_processCollision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexConvexAlgorithm::base_processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nvoid btConvexConvexAlgorithm::base_processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 95201256\narg 4 ID = 25324514\n");
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btConvexConvexAlgorithm::base_processCollision function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btConvexConvexAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btConvexConvexAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexConvexAlgorithm::base_processCollision(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->btConvexConvexAlgorithm::processCollision(body0Wrap, body1Wrap, dispatchInfo, resultOut);

		return 0;
	}

	// float btConvexConvexAlgorithm::base_calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_base_calculateTimeOfImpact(lua_State *L) {
		if (!_lg_typecheck_base_calculateTimeOfImpact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConvexConvexAlgorithm::base_calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nfloat btConvexConvexAlgorithm::base_calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 95201256\narg 4 ID = 25324514\n");
		}

		btCollisionObject* body0=(Luna< btCollisionObject >::check(L,2));
		btCollisionObject* body1=(Luna< btCollisionObject >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btConvexConvexAlgorithm::base_calculateTimeOfImpact function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btConvexConvexAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btConvexConvexAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConvexConvexAlgorithm::base_calculateTimeOfImpact(btCollisionObject *, btCollisionObject *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		float lret = self->btConvexConvexAlgorithm::calculateTimeOfImpact(body0, body1, dispatchInfo, resultOut);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexConvexAlgorithm::base_getAllContactManifolds(btManifoldArray & manifoldArray)
	static int _bind_base_getAllContactManifolds(lua_State *L) {
		if (!_lg_typecheck_base_getAllContactManifolds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexConvexAlgorithm::base_getAllContactManifolds(btManifoldArray & manifoldArray) function, expected prototype:\nvoid btConvexConvexAlgorithm::base_getAllContactManifolds(btManifoldArray & manifoldArray)\nClass arguments details:\narg 1 ID = 41484542\n");
		}

		btManifoldArray* manifoldArray_ptr=(Luna< btAlignedObjectArray< btPersistentManifold * > >::checkSubType< btManifoldArray >(L,2));
		if( !manifoldArray_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg manifoldArray in btConvexConvexAlgorithm::base_getAllContactManifolds function");
		}
		btManifoldArray & manifoldArray=*manifoldArray_ptr;

		btConvexConvexAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btConvexConvexAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexConvexAlgorithm::base_getAllContactManifolds(btManifoldArray &). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->btConvexConvexAlgorithm::getAllContactManifolds(manifoldArray);

		return 0;
	}


	// Operator binds:

};

btConvexConvexAlgorithm* LunaTraits< btConvexConvexAlgorithm >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btConvexConvexAlgorithm::_bind_ctor(L);
}

void LunaTraits< btConvexConvexAlgorithm >::_bind_dtor(btConvexConvexAlgorithm* obj) {
	delete obj;
}

const char LunaTraits< btConvexConvexAlgorithm >::className[] = "btConvexConvexAlgorithm";
const char LunaTraits< btConvexConvexAlgorithm >::fullName[] = "btConvexConvexAlgorithm";
const char LunaTraits< btConvexConvexAlgorithm >::moduleName[] = "bullet";
const char* LunaTraits< btConvexConvexAlgorithm >::parents[] = {"bullet.btActivatingCollisionAlgorithm", 0};
const int LunaTraits< btConvexConvexAlgorithm >::hash = 73579346;
const int LunaTraits< btConvexConvexAlgorithm >::uniqueIDs[] = {17890858,0};

luna_RegType LunaTraits< btConvexConvexAlgorithm >::methods[] = {
	{"processCollision", &luna_wrapper_btConvexConvexAlgorithm::_bind_processCollision},
	{"calculateTimeOfImpact", &luna_wrapper_btConvexConvexAlgorithm::_bind_calculateTimeOfImpact},
	{"getAllContactManifolds", &luna_wrapper_btConvexConvexAlgorithm::_bind_getAllContactManifolds},
	{"setLowLevelOfDetail", &luna_wrapper_btConvexConvexAlgorithm::_bind_setLowLevelOfDetail},
	{"getManifold", &luna_wrapper_btConvexConvexAlgorithm::_bind_getManifold},
	{"base_processCollision", &luna_wrapper_btConvexConvexAlgorithm::_bind_base_processCollision},
	{"base_calculateTimeOfImpact", &luna_wrapper_btConvexConvexAlgorithm::_bind_base_calculateTimeOfImpact},
	{"base_getAllContactManifolds", &luna_wrapper_btConvexConvexAlgorithm::_bind_base_getAllContactManifolds},
	{"__eq", &luna_wrapper_btConvexConvexAlgorithm::_bind___eq},
	{"fromVoid", &luna_wrapper_btConvexConvexAlgorithm::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btConvexConvexAlgorithm::_bind_asVoid},
	{"getTable", &luna_wrapper_btConvexConvexAlgorithm::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btConvexConvexAlgorithm >::converters[] = {
	{"btCollisionAlgorithm", &luna_wrapper_btConvexConvexAlgorithm::_cast_from_btCollisionAlgorithm},
	{0,0}
};

luna_RegEnumType LunaTraits< btConvexConvexAlgorithm >::enumValues[] = {
	{0,0}
};


