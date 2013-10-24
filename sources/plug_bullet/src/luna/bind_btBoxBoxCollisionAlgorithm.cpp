#include <plug_common.h>

#include <luna/wrappers/wrapper_btBoxBoxCollisionAlgorithm.h>

class luna_wrapper_btBoxBoxCollisionAlgorithm {
public:
	typedef Luna< btBoxBoxCollisionAlgorithm > luna_t;

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

		btBoxBoxCollisionAlgorithm* self= (btBoxBoxCollisionAlgorithm*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btBoxBoxCollisionAlgorithm >::push(L,self,false);
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
		//btBoxBoxCollisionAlgorithm* ptr= dynamic_cast< btBoxBoxCollisionAlgorithm* >(Luna< btCollisionAlgorithm >::check(L,1));
		btBoxBoxCollisionAlgorithm* ptr= luna_caster< btCollisionAlgorithm, btBoxBoxCollisionAlgorithm >::cast(Luna< btCollisionAlgorithm >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btBoxBoxCollisionAlgorithm >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61780402) ) return false;
		if( (!(Luna< btCollisionAlgorithmConstructionInfo >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,66271199)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,61780402) ) return false;
		if( (!(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2))) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btCollisionObjectWrapper >::check(L,3)) ) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,32391296)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< btCollisionObjectWrapper >::check(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,61780402) ) return false;
		if( (!(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66271199)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,61780402) ) return false;
		if( (!(Luna< btCollisionAlgorithmConstructionInfo >::check(L,3))) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,32391296)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< btCollisionObjectWrapper >::check(L,4)) ) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,32391296)) ) return false;
		if( (lua_isnil(L,5)==0 && !(Luna< btCollisionObjectWrapper >::check(L,5)) ) ) return false;
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
	// btBoxBoxCollisionAlgorithm::btBoxBoxCollisionAlgorithm(const btCollisionAlgorithmConstructionInfo & ci)
	static btBoxBoxCollisionAlgorithm* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btBoxBoxCollisionAlgorithm::btBoxBoxCollisionAlgorithm(const btCollisionAlgorithmConstructionInfo & ci) function, expected prototype:\nbtBoxBoxCollisionAlgorithm::btBoxBoxCollisionAlgorithm(const btCollisionAlgorithmConstructionInfo & ci)\nClass arguments details:\narg 1 ID = 61780402\n\n%s",luna_dumpStack(L).c_str());
		}

		const btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,1));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btBoxBoxCollisionAlgorithm::btBoxBoxCollisionAlgorithm function");
		}
		const btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;

		return new btBoxBoxCollisionAlgorithm(ci);
	}

	// btBoxBoxCollisionAlgorithm::btBoxBoxCollisionAlgorithm(btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	static btBoxBoxCollisionAlgorithm* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in btBoxBoxCollisionAlgorithm::btBoxBoxCollisionAlgorithm(btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) function, expected prototype:\nbtBoxBoxCollisionAlgorithm::btBoxBoxCollisionAlgorithm(btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)\nClass arguments details:\narg 1 ID = 66271199\narg 2 ID = 61780402\narg 3 ID = 32391296\narg 4 ID = 32391296\n\n%s",luna_dumpStack(L).c_str());
		}

		btPersistentManifold* mf=(Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1));
		const btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btBoxBoxCollisionAlgorithm::btBoxBoxCollisionAlgorithm function");
		}
		const btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;
		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,4));

		return new btBoxBoxCollisionAlgorithm(mf, ci, body0Wrap, body1Wrap);
	}

	// btBoxBoxCollisionAlgorithm::btBoxBoxCollisionAlgorithm(lua_Table * data, const btCollisionAlgorithmConstructionInfo & ci)
	static btBoxBoxCollisionAlgorithm* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in btBoxBoxCollisionAlgorithm::btBoxBoxCollisionAlgorithm(lua_Table * data, const btCollisionAlgorithmConstructionInfo & ci) function, expected prototype:\nbtBoxBoxCollisionAlgorithm::btBoxBoxCollisionAlgorithm(lua_Table * data, const btCollisionAlgorithmConstructionInfo & ci)\nClass arguments details:\narg 2 ID = 61780402\n\n%s",luna_dumpStack(L).c_str());
		}

		const btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btBoxBoxCollisionAlgorithm::btBoxBoxCollisionAlgorithm function");
		}
		const btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;

		return new wrapper_btBoxBoxCollisionAlgorithm(L,NULL, ci);
	}

	// btBoxBoxCollisionAlgorithm::btBoxBoxCollisionAlgorithm(lua_Table * data, btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	static btBoxBoxCollisionAlgorithm* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in btBoxBoxCollisionAlgorithm::btBoxBoxCollisionAlgorithm(lua_Table * data, btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) function, expected prototype:\nbtBoxBoxCollisionAlgorithm::btBoxBoxCollisionAlgorithm(lua_Table * data, btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)\nClass arguments details:\narg 2 ID = 66271199\narg 3 ID = 61780402\narg 4 ID = 32391296\narg 5 ID = 32391296\n\n%s",luna_dumpStack(L).c_str());
		}

		btPersistentManifold* mf=(Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,2));
		const btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,3));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btBoxBoxCollisionAlgorithm::btBoxBoxCollisionAlgorithm function");
		}
		const btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;
		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,4));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,5));

		return new wrapper_btBoxBoxCollisionAlgorithm(L,NULL, mf, ci, body0Wrap, body1Wrap);
	}

	// Overload binder for btBoxBoxCollisionAlgorithm::btBoxBoxCollisionAlgorithm
	static btBoxBoxCollisionAlgorithm* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function btBoxBoxCollisionAlgorithm, cannot match any of the overloads for function btBoxBoxCollisionAlgorithm:\n  btBoxBoxCollisionAlgorithm(const btCollisionAlgorithmConstructionInfo &)\n  btBoxBoxCollisionAlgorithm(btPersistentManifold *, const btCollisionAlgorithmConstructionInfo &, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *)\n  btBoxBoxCollisionAlgorithm(lua_Table *, const btCollisionAlgorithmConstructionInfo &)\n  btBoxBoxCollisionAlgorithm(lua_Table *, btPersistentManifold *, const btCollisionAlgorithmConstructionInfo &, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *)\n");
		return NULL;
	}


	// Function binds:
	// void btBoxBoxCollisionAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_processCollision(lua_State *L) {
		if (!_lg_typecheck_processCollision(L)) {
			luaL_error(L, "luna typecheck failed in void btBoxBoxCollisionAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nvoid btBoxBoxCollisionAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 95201256\narg 4 ID = 25324514\n\n%s",luna_dumpStack(L).c_str());
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btBoxBoxCollisionAlgorithm::processCollision function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btBoxBoxCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btBoxBoxCollisionAlgorithm >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btBoxBoxCollisionAlgorithm::processCollision(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'\n%s",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->processCollision(body0Wrap, body1Wrap, dispatchInfo, resultOut);

		return 0;
	}

	// float btBoxBoxCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_calculateTimeOfImpact(lua_State *L) {
		if (!_lg_typecheck_calculateTimeOfImpact(L)) {
			luaL_error(L, "luna typecheck failed in float btBoxBoxCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nfloat btBoxBoxCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 95201256\narg 4 ID = 25324514\n\n%s",luna_dumpStack(L).c_str());
		}

		btCollisionObject* body0=(Luna< btCollisionObject >::check(L,2));
		btCollisionObject* body1=(Luna< btCollisionObject >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btBoxBoxCollisionAlgorithm::calculateTimeOfImpact function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btBoxBoxCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btBoxBoxCollisionAlgorithm >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btBoxBoxCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject *, btCollisionObject *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'\n%s",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->calculateTimeOfImpact(body0, body1, dispatchInfo, resultOut);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btBoxBoxCollisionAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray)
	static int _bind_getAllContactManifolds(lua_State *L) {
		if (!_lg_typecheck_getAllContactManifolds(L)) {
			luaL_error(L, "luna typecheck failed in void btBoxBoxCollisionAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray) function, expected prototype:\nvoid btBoxBoxCollisionAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray)\nClass arguments details:\narg 1 ID = 41484542\n\n%s",luna_dumpStack(L).c_str());
		}

		btManifoldArray* manifoldArray_ptr=(Luna< btAlignedObjectArray< btPersistentManifold * > >::checkSubType< btManifoldArray >(L,2));
		if( !manifoldArray_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg manifoldArray in btBoxBoxCollisionAlgorithm::getAllContactManifolds function");
		}
		btManifoldArray & manifoldArray=*manifoldArray_ptr;

		btBoxBoxCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btBoxBoxCollisionAlgorithm >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btBoxBoxCollisionAlgorithm::getAllContactManifolds(btManifoldArray &). Got : '%s'\n%s",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getAllContactManifolds(manifoldArray);

		return 0;
	}

	// void btBoxBoxCollisionAlgorithm::base_processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_base_processCollision(lua_State *L) {
		if (!_lg_typecheck_base_processCollision(L)) {
			luaL_error(L, "luna typecheck failed in void btBoxBoxCollisionAlgorithm::base_processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nvoid btBoxBoxCollisionAlgorithm::base_processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 95201256\narg 4 ID = 25324514\n\n%s",luna_dumpStack(L).c_str());
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btBoxBoxCollisionAlgorithm::base_processCollision function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btBoxBoxCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btBoxBoxCollisionAlgorithm >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btBoxBoxCollisionAlgorithm::base_processCollision(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'\n%s",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btBoxBoxCollisionAlgorithm::processCollision(body0Wrap, body1Wrap, dispatchInfo, resultOut);

		return 0;
	}

	// float btBoxBoxCollisionAlgorithm::base_calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_base_calculateTimeOfImpact(lua_State *L) {
		if (!_lg_typecheck_base_calculateTimeOfImpact(L)) {
			luaL_error(L, "luna typecheck failed in float btBoxBoxCollisionAlgorithm::base_calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nfloat btBoxBoxCollisionAlgorithm::base_calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 95201256\narg 4 ID = 25324514\n\n%s",luna_dumpStack(L).c_str());
		}

		btCollisionObject* body0=(Luna< btCollisionObject >::check(L,2));
		btCollisionObject* body1=(Luna< btCollisionObject >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btBoxBoxCollisionAlgorithm::base_calculateTimeOfImpact function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btBoxBoxCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btBoxBoxCollisionAlgorithm >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btBoxBoxCollisionAlgorithm::base_calculateTimeOfImpact(btCollisionObject *, btCollisionObject *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'\n%s",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->btBoxBoxCollisionAlgorithm::calculateTimeOfImpact(body0, body1, dispatchInfo, resultOut);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btBoxBoxCollisionAlgorithm::base_getAllContactManifolds(btManifoldArray & manifoldArray)
	static int _bind_base_getAllContactManifolds(lua_State *L) {
		if (!_lg_typecheck_base_getAllContactManifolds(L)) {
			luaL_error(L, "luna typecheck failed in void btBoxBoxCollisionAlgorithm::base_getAllContactManifolds(btManifoldArray & manifoldArray) function, expected prototype:\nvoid btBoxBoxCollisionAlgorithm::base_getAllContactManifolds(btManifoldArray & manifoldArray)\nClass arguments details:\narg 1 ID = 41484542\n\n%s",luna_dumpStack(L).c_str());
		}

		btManifoldArray* manifoldArray_ptr=(Luna< btAlignedObjectArray< btPersistentManifold * > >::checkSubType< btManifoldArray >(L,2));
		if( !manifoldArray_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg manifoldArray in btBoxBoxCollisionAlgorithm::base_getAllContactManifolds function");
		}
		btManifoldArray & manifoldArray=*manifoldArray_ptr;

		btBoxBoxCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btBoxBoxCollisionAlgorithm >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btBoxBoxCollisionAlgorithm::base_getAllContactManifolds(btManifoldArray &). Got : '%s'\n%s",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btBoxBoxCollisionAlgorithm::getAllContactManifolds(manifoldArray);

		return 0;
	}


	// Operator binds:

};

btBoxBoxCollisionAlgorithm* LunaTraits< btBoxBoxCollisionAlgorithm >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btBoxBoxCollisionAlgorithm::_bind_ctor(L);
}

void LunaTraits< btBoxBoxCollisionAlgorithm >::_bind_dtor(btBoxBoxCollisionAlgorithm* obj) {
	delete obj;
}

const char LunaTraits< btBoxBoxCollisionAlgorithm >::className[] = "btBoxBoxCollisionAlgorithm";
const char LunaTraits< btBoxBoxCollisionAlgorithm >::fullName[] = "btBoxBoxCollisionAlgorithm";
const char LunaTraits< btBoxBoxCollisionAlgorithm >::moduleName[] = "bullet";
const char* LunaTraits< btBoxBoxCollisionAlgorithm >::parents[] = {"bullet.btActivatingCollisionAlgorithm", 0};
const int LunaTraits< btBoxBoxCollisionAlgorithm >::hash = 37759307;
const int LunaTraits< btBoxBoxCollisionAlgorithm >::uniqueIDs[] = {17890858,0};

luna_RegType LunaTraits< btBoxBoxCollisionAlgorithm >::methods[] = {
	{"processCollision", &luna_wrapper_btBoxBoxCollisionAlgorithm::_bind_processCollision},
	{"calculateTimeOfImpact", &luna_wrapper_btBoxBoxCollisionAlgorithm::_bind_calculateTimeOfImpact},
	{"getAllContactManifolds", &luna_wrapper_btBoxBoxCollisionAlgorithm::_bind_getAllContactManifolds},
	{"base_processCollision", &luna_wrapper_btBoxBoxCollisionAlgorithm::_bind_base_processCollision},
	{"base_calculateTimeOfImpact", &luna_wrapper_btBoxBoxCollisionAlgorithm::_bind_base_calculateTimeOfImpact},
	{"base_getAllContactManifolds", &luna_wrapper_btBoxBoxCollisionAlgorithm::_bind_base_getAllContactManifolds},
	{"fromVoid", &luna_wrapper_btBoxBoxCollisionAlgorithm::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btBoxBoxCollisionAlgorithm::_bind_asVoid},
	{"getTable", &luna_wrapper_btBoxBoxCollisionAlgorithm::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btBoxBoxCollisionAlgorithm >::converters[] = {
	{"btCollisionAlgorithm", &luna_wrapper_btBoxBoxCollisionAlgorithm::_cast_from_btCollisionAlgorithm},
	{0,0}
};

luna_RegEnumType LunaTraits< btBoxBoxCollisionAlgorithm >::enumValues[] = {
	{0,0}
};


