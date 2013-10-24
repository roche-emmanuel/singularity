#include <plug_common.h>

#include <luna/wrappers/wrapper_btSphereBoxCollisionAlgorithm.h>

class luna_wrapper_btSphereBoxCollisionAlgorithm {
public:
	typedef Luna< btSphereBoxCollisionAlgorithm > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
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

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btSphereBoxCollisionAlgorithm* self= (btSphereBoxCollisionAlgorithm*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btSphereBoxCollisionAlgorithm >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17890858) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
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
		//btSphereBoxCollisionAlgorithm* ptr= dynamic_cast< btSphereBoxCollisionAlgorithm* >(Luna< btCollisionAlgorithm >::check(L,1));
		btSphereBoxCollisionAlgorithm* ptr= luna_caster< btCollisionAlgorithm, btSphereBoxCollisionAlgorithm >::cast(Luna< btCollisionAlgorithm >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btSphereBoxCollisionAlgorithm >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,66271199)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,61780402) ) return false;
		if( (!(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2))) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btCollisionObjectWrapper >::check(L,3)) ) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,32391296)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< btCollisionObjectWrapper >::check(L,4)) ) ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66271199)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,61780402) ) return false;
		if( (!(Luna< btCollisionAlgorithmConstructionInfo >::check(L,3))) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,32391296)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< btCollisionObjectWrapper >::check(L,4)) ) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,32391296)) ) return false;
		if( (lua_isnil(L,5)==0 && !(Luna< btCollisionObjectWrapper >::check(L,5)) ) ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
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

	inline static bool _lg_typecheck_getSphereDistance(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,32391296)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( lua_type(L,8)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSpherePenetration(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
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
	// btSphereBoxCollisionAlgorithm::btSphereBoxCollisionAlgorithm(btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, bool isSwapped)
	static btSphereBoxCollisionAlgorithm* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btSphereBoxCollisionAlgorithm::btSphereBoxCollisionAlgorithm(btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, bool isSwapped) function, expected prototype:\nbtSphereBoxCollisionAlgorithm::btSphereBoxCollisionAlgorithm(btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, bool isSwapped)\nClass arguments details:\narg 1 ID = 66271199\narg 2 ID = 61780402\narg 3 ID = 32391296\narg 4 ID = 32391296\n\n%s",luna_dumpStack(L).c_str());
		}

		btPersistentManifold* mf=(Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1));
		const btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btSphereBoxCollisionAlgorithm::btSphereBoxCollisionAlgorithm function");
		}
		const btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;
		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,4));
		bool isSwapped=(bool)(lua_toboolean(L,5)==1);

		return new btSphereBoxCollisionAlgorithm(mf, ci, body0Wrap, body1Wrap, isSwapped);
	}

	// btSphereBoxCollisionAlgorithm::btSphereBoxCollisionAlgorithm(lua_Table * data, btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, bool isSwapped)
	static btSphereBoxCollisionAlgorithm* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in btSphereBoxCollisionAlgorithm::btSphereBoxCollisionAlgorithm(lua_Table * data, btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, bool isSwapped) function, expected prototype:\nbtSphereBoxCollisionAlgorithm::btSphereBoxCollisionAlgorithm(lua_Table * data, btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, bool isSwapped)\nClass arguments details:\narg 2 ID = 66271199\narg 3 ID = 61780402\narg 4 ID = 32391296\narg 5 ID = 32391296\n\n%s",luna_dumpStack(L).c_str());
		}

		btPersistentManifold* mf=(Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,2));
		const btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,3));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btSphereBoxCollisionAlgorithm::btSphereBoxCollisionAlgorithm function");
		}
		const btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;
		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,4));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,5));
		bool isSwapped=(bool)(lua_toboolean(L,6)==1);

		return new wrapper_btSphereBoxCollisionAlgorithm(L,NULL, mf, ci, body0Wrap, body1Wrap, isSwapped);
	}

	// Overload binder for btSphereBoxCollisionAlgorithm::btSphereBoxCollisionAlgorithm
	static btSphereBoxCollisionAlgorithm* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btSphereBoxCollisionAlgorithm, cannot match any of the overloads for function btSphereBoxCollisionAlgorithm:\n  btSphereBoxCollisionAlgorithm(btPersistentManifold *, const btCollisionAlgorithmConstructionInfo &, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, bool)\n  btSphereBoxCollisionAlgorithm(lua_Table *, btPersistentManifold *, const btCollisionAlgorithmConstructionInfo &, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, bool)\n");
		return NULL;
	}


	// Function binds:
	// void btSphereBoxCollisionAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_processCollision(lua_State *L) {
		if (!_lg_typecheck_processCollision(L)) {
			luaL_error(L, "luna typecheck failed in void btSphereBoxCollisionAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nvoid btSphereBoxCollisionAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 95201256\narg 4 ID = 25324514\n\n%s",luna_dumpStack(L).c_str());
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btSphereBoxCollisionAlgorithm::processCollision function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btSphereBoxCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btSphereBoxCollisionAlgorithm >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btSphereBoxCollisionAlgorithm::processCollision(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'\n%s",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->processCollision(body0Wrap, body1Wrap, dispatchInfo, resultOut);

		return 0;
	}

	// float btSphereBoxCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_calculateTimeOfImpact(lua_State *L) {
		if (!_lg_typecheck_calculateTimeOfImpact(L)) {
			luaL_error(L, "luna typecheck failed in float btSphereBoxCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nfloat btSphereBoxCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 95201256\narg 4 ID = 25324514\n\n%s",luna_dumpStack(L).c_str());
		}

		btCollisionObject* body0=(Luna< btCollisionObject >::check(L,2));
		btCollisionObject* body1=(Luna< btCollisionObject >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btSphereBoxCollisionAlgorithm::calculateTimeOfImpact function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btSphereBoxCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btSphereBoxCollisionAlgorithm >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btSphereBoxCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject *, btCollisionObject *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'\n%s",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->calculateTimeOfImpact(body0, body1, dispatchInfo, resultOut);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSphereBoxCollisionAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray)
	static int _bind_getAllContactManifolds(lua_State *L) {
		if (!_lg_typecheck_getAllContactManifolds(L)) {
			luaL_error(L, "luna typecheck failed in void btSphereBoxCollisionAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray) function, expected prototype:\nvoid btSphereBoxCollisionAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray)\nClass arguments details:\narg 1 ID = 41484542\n\n%s",luna_dumpStack(L).c_str());
		}

		btManifoldArray* manifoldArray_ptr=(Luna< btAlignedObjectArray< btPersistentManifold * > >::checkSubType< btManifoldArray >(L,2));
		if( !manifoldArray_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg manifoldArray in btSphereBoxCollisionAlgorithm::getAllContactManifolds function");
		}
		btManifoldArray & manifoldArray=*manifoldArray_ptr;

		btSphereBoxCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btSphereBoxCollisionAlgorithm >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btSphereBoxCollisionAlgorithm::getAllContactManifolds(btManifoldArray &). Got : '%s'\n%s",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getAllContactManifolds(manifoldArray);

		return 0;
	}

	// bool btSphereBoxCollisionAlgorithm::getSphereDistance(const btCollisionObjectWrapper * boxObjWrap, btVector3 & v3PointOnBox, btVector3 & normal, float & penetrationDepth, const btVector3 & v3SphereCenter, float fRadius, float maxContactDistance)
	static int _bind_getSphereDistance(lua_State *L) {
		if (!_lg_typecheck_getSphereDistance(L)) {
			luaL_error(L, "luna typecheck failed in bool btSphereBoxCollisionAlgorithm::getSphereDistance(const btCollisionObjectWrapper * boxObjWrap, btVector3 & v3PointOnBox, btVector3 & normal, float & penetrationDepth, const btVector3 & v3SphereCenter, float fRadius, float maxContactDistance) function, expected prototype:\nbool btSphereBoxCollisionAlgorithm::getSphereDistance(const btCollisionObjectWrapper * boxObjWrap, btVector3 & v3PointOnBox, btVector3 & normal, float & penetrationDepth, const btVector3 & v3SphereCenter, float fRadius, float maxContactDistance)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 5 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btCollisionObjectWrapper* boxObjWrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		btVector3* v3PointOnBox_ptr=(Luna< btVector3 >::check(L,3));
		if( !v3PointOnBox_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v3PointOnBox in btSphereBoxCollisionAlgorithm::getSphereDistance function");
		}
		btVector3 & v3PointOnBox=*v3PointOnBox_ptr;
		btVector3* normal_ptr=(Luna< btVector3 >::check(L,4));
		if( !normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normal in btSphereBoxCollisionAlgorithm::getSphereDistance function");
		}
		btVector3 & normal=*normal_ptr;
		float penetrationDepth=(float)lua_tonumber(L,5);
		const btVector3* v3SphereCenter_ptr=(Luna< btVector3 >::check(L,6));
		if( !v3SphereCenter_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v3SphereCenter in btSphereBoxCollisionAlgorithm::getSphereDistance function");
		}
		const btVector3 & v3SphereCenter=*v3SphereCenter_ptr;
		float fRadius=(float)lua_tonumber(L,7);
		float maxContactDistance=(float)lua_tonumber(L,8);

		btSphereBoxCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btSphereBoxCollisionAlgorithm >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btSphereBoxCollisionAlgorithm::getSphereDistance(const btCollisionObjectWrapper *, btVector3 &, btVector3 &, float &, const btVector3 &, float, float). Got : '%s'\n%s",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getSphereDistance(boxObjWrap, v3PointOnBox, normal, penetrationDepth, v3SphereCenter, fRadius, maxContactDistance);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,penetrationDepth);
		return 2;
	}

	// float btSphereBoxCollisionAlgorithm::getSpherePenetration(btVector3 const & boxHalfExtent, btVector3 const & sphereRelPos, btVector3 & closestPoint, btVector3 & normal)
	static int _bind_getSpherePenetration(lua_State *L) {
		if (!_lg_typecheck_getSpherePenetration(L)) {
			luaL_error(L, "luna typecheck failed in float btSphereBoxCollisionAlgorithm::getSpherePenetration(btVector3 const & boxHalfExtent, btVector3 const & sphereRelPos, btVector3 & closestPoint, btVector3 & normal) function, expected prototype:\nfloat btSphereBoxCollisionAlgorithm::getSpherePenetration(btVector3 const & boxHalfExtent, btVector3 const & sphereRelPos, btVector3 & closestPoint, btVector3 & normal)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* boxHalfExtent_ptr=(Luna< btVector3 >::check(L,2));
		if( !boxHalfExtent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg boxHalfExtent in btSphereBoxCollisionAlgorithm::getSpherePenetration function");
		}
		btVector3 const & boxHalfExtent=*boxHalfExtent_ptr;
		btVector3* sphereRelPos_ptr=(Luna< btVector3 >::check(L,3));
		if( !sphereRelPos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sphereRelPos in btSphereBoxCollisionAlgorithm::getSpherePenetration function");
		}
		btVector3 const & sphereRelPos=*sphereRelPos_ptr;
		btVector3* closestPoint_ptr=(Luna< btVector3 >::check(L,4));
		if( !closestPoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg closestPoint in btSphereBoxCollisionAlgorithm::getSpherePenetration function");
		}
		btVector3 & closestPoint=*closestPoint_ptr;
		btVector3* normal_ptr=(Luna< btVector3 >::check(L,5));
		if( !normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normal in btSphereBoxCollisionAlgorithm::getSpherePenetration function");
		}
		btVector3 & normal=*normal_ptr;

		btSphereBoxCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btSphereBoxCollisionAlgorithm >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btSphereBoxCollisionAlgorithm::getSpherePenetration(btVector3 const &, btVector3 const &, btVector3 &, btVector3 &). Got : '%s'\n%s",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getSpherePenetration(boxHalfExtent, sphereRelPos, closestPoint, normal);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSphereBoxCollisionAlgorithm::base_processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_base_processCollision(lua_State *L) {
		if (!_lg_typecheck_base_processCollision(L)) {
			luaL_error(L, "luna typecheck failed in void btSphereBoxCollisionAlgorithm::base_processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nvoid btSphereBoxCollisionAlgorithm::base_processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 95201256\narg 4 ID = 25324514\n\n%s",luna_dumpStack(L).c_str());
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btSphereBoxCollisionAlgorithm::base_processCollision function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btSphereBoxCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btSphereBoxCollisionAlgorithm >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btSphereBoxCollisionAlgorithm::base_processCollision(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'\n%s",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btSphereBoxCollisionAlgorithm::processCollision(body0Wrap, body1Wrap, dispatchInfo, resultOut);

		return 0;
	}

	// float btSphereBoxCollisionAlgorithm::base_calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_base_calculateTimeOfImpact(lua_State *L) {
		if (!_lg_typecheck_base_calculateTimeOfImpact(L)) {
			luaL_error(L, "luna typecheck failed in float btSphereBoxCollisionAlgorithm::base_calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nfloat btSphereBoxCollisionAlgorithm::base_calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 95201256\narg 4 ID = 25324514\n\n%s",luna_dumpStack(L).c_str());
		}

		btCollisionObject* body0=(Luna< btCollisionObject >::check(L,2));
		btCollisionObject* body1=(Luna< btCollisionObject >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btSphereBoxCollisionAlgorithm::base_calculateTimeOfImpact function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btSphereBoxCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btSphereBoxCollisionAlgorithm >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btSphereBoxCollisionAlgorithm::base_calculateTimeOfImpact(btCollisionObject *, btCollisionObject *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'\n%s",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->btSphereBoxCollisionAlgorithm::calculateTimeOfImpact(body0, body1, dispatchInfo, resultOut);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSphereBoxCollisionAlgorithm::base_getAllContactManifolds(btManifoldArray & manifoldArray)
	static int _bind_base_getAllContactManifolds(lua_State *L) {
		if (!_lg_typecheck_base_getAllContactManifolds(L)) {
			luaL_error(L, "luna typecheck failed in void btSphereBoxCollisionAlgorithm::base_getAllContactManifolds(btManifoldArray & manifoldArray) function, expected prototype:\nvoid btSphereBoxCollisionAlgorithm::base_getAllContactManifolds(btManifoldArray & manifoldArray)\nClass arguments details:\narg 1 ID = 41484542\n\n%s",luna_dumpStack(L).c_str());
		}

		btManifoldArray* manifoldArray_ptr=(Luna< btAlignedObjectArray< btPersistentManifold * > >::checkSubType< btManifoldArray >(L,2));
		if( !manifoldArray_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg manifoldArray in btSphereBoxCollisionAlgorithm::base_getAllContactManifolds function");
		}
		btManifoldArray & manifoldArray=*manifoldArray_ptr;

		btSphereBoxCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btSphereBoxCollisionAlgorithm >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btSphereBoxCollisionAlgorithm::base_getAllContactManifolds(btManifoldArray &). Got : '%s'\n%s",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btSphereBoxCollisionAlgorithm::getAllContactManifolds(manifoldArray);

		return 0;
	}


	// Operator binds:

};

btSphereBoxCollisionAlgorithm* LunaTraits< btSphereBoxCollisionAlgorithm >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btSphereBoxCollisionAlgorithm::_bind_ctor(L);
}

void LunaTraits< btSphereBoxCollisionAlgorithm >::_bind_dtor(btSphereBoxCollisionAlgorithm* obj) {
	delete obj;
}

const char LunaTraits< btSphereBoxCollisionAlgorithm >::className[] = "btSphereBoxCollisionAlgorithm";
const char LunaTraits< btSphereBoxCollisionAlgorithm >::fullName[] = "btSphereBoxCollisionAlgorithm";
const char LunaTraits< btSphereBoxCollisionAlgorithm >::moduleName[] = "bullet";
const char* LunaTraits< btSphereBoxCollisionAlgorithm >::parents[] = {"bullet.btActivatingCollisionAlgorithm", 0};
const int LunaTraits< btSphereBoxCollisionAlgorithm >::hash = 27755465;
const int LunaTraits< btSphereBoxCollisionAlgorithm >::uniqueIDs[] = {17890858,0};

luna_RegType LunaTraits< btSphereBoxCollisionAlgorithm >::methods[] = {
	{"processCollision", &luna_wrapper_btSphereBoxCollisionAlgorithm::_bind_processCollision},
	{"calculateTimeOfImpact", &luna_wrapper_btSphereBoxCollisionAlgorithm::_bind_calculateTimeOfImpact},
	{"getAllContactManifolds", &luna_wrapper_btSphereBoxCollisionAlgorithm::_bind_getAllContactManifolds},
	{"getSphereDistance", &luna_wrapper_btSphereBoxCollisionAlgorithm::_bind_getSphereDistance},
	{"getSpherePenetration", &luna_wrapper_btSphereBoxCollisionAlgorithm::_bind_getSpherePenetration},
	{"base_processCollision", &luna_wrapper_btSphereBoxCollisionAlgorithm::_bind_base_processCollision},
	{"base_calculateTimeOfImpact", &luna_wrapper_btSphereBoxCollisionAlgorithm::_bind_base_calculateTimeOfImpact},
	{"base_getAllContactManifolds", &luna_wrapper_btSphereBoxCollisionAlgorithm::_bind_base_getAllContactManifolds},
	{"fromVoid", &luna_wrapper_btSphereBoxCollisionAlgorithm::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btSphereBoxCollisionAlgorithm::_bind_asVoid},
	{"getTable", &luna_wrapper_btSphereBoxCollisionAlgorithm::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btSphereBoxCollisionAlgorithm >::converters[] = {
	{"btCollisionAlgorithm", &luna_wrapper_btSphereBoxCollisionAlgorithm::_cast_from_btCollisionAlgorithm},
	{0,0}
};

luna_RegEnumType LunaTraits< btSphereBoxCollisionAlgorithm >::enumValues[] = {
	{0,0}
};


