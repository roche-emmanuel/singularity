#include <plug_common.h>

#include <luna/wrappers/wrapper_btSphereTriangleCollisionAlgorithm.h>

class luna_wrapper_btSphereTriangleCollisionAlgorithm {
public:
	typedef Luna< btSphereTriangleCollisionAlgorithm > luna_t;

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

		btSphereTriangleCollisionAlgorithm* self= (btSphereTriangleCollisionAlgorithm*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btSphereTriangleCollisionAlgorithm >::push(L,self,false);
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
		//btSphereTriangleCollisionAlgorithm* ptr= dynamic_cast< btSphereTriangleCollisionAlgorithm* >(Luna< btCollisionAlgorithm >::check(L,1));
		btSphereTriangleCollisionAlgorithm* ptr= luna_caster< btCollisionAlgorithm, btSphereTriangleCollisionAlgorithm >::cast(Luna< btCollisionAlgorithm >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btSphereTriangleCollisionAlgorithm >::push(L,ptr,false);
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
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61780402) ) return false;
		if( (!(Luna< btCollisionAlgorithmConstructionInfo >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
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

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,61780402) ) return false;
		if( (!(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2))) ) return false;
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
	// btSphereTriangleCollisionAlgorithm::btSphereTriangleCollisionAlgorithm(btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, bool swapped)
	static btSphereTriangleCollisionAlgorithm* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btSphereTriangleCollisionAlgorithm::btSphereTriangleCollisionAlgorithm(btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, bool swapped) function, expected prototype:\nbtSphereTriangleCollisionAlgorithm::btSphereTriangleCollisionAlgorithm(btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, bool swapped)\nClass arguments details:\narg 1 ID = 66271199\narg 2 ID = 61780402\narg 3 ID = 32391296\narg 4 ID = 32391296\n\n%s",luna_dumpStack(L).c_str());
		}

		btPersistentManifold* mf=(Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1));
		const btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btSphereTriangleCollisionAlgorithm::btSphereTriangleCollisionAlgorithm function");
		}
		const btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;
		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,4));
		bool swapped=(bool)(lua_toboolean(L,5)==1);

		return new btSphereTriangleCollisionAlgorithm(mf, ci, body0Wrap, body1Wrap, swapped);
	}

	// btSphereTriangleCollisionAlgorithm::btSphereTriangleCollisionAlgorithm(const btCollisionAlgorithmConstructionInfo & ci)
	static btSphereTriangleCollisionAlgorithm* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in btSphereTriangleCollisionAlgorithm::btSphereTriangleCollisionAlgorithm(const btCollisionAlgorithmConstructionInfo & ci) function, expected prototype:\nbtSphereTriangleCollisionAlgorithm::btSphereTriangleCollisionAlgorithm(const btCollisionAlgorithmConstructionInfo & ci)\nClass arguments details:\narg 1 ID = 61780402\n\n%s",luna_dumpStack(L).c_str());
		}

		const btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,1));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btSphereTriangleCollisionAlgorithm::btSphereTriangleCollisionAlgorithm function");
		}
		const btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;

		return new btSphereTriangleCollisionAlgorithm(ci);
	}

	// btSphereTriangleCollisionAlgorithm::btSphereTriangleCollisionAlgorithm(lua_Table * data, btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, bool swapped)
	static btSphereTriangleCollisionAlgorithm* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in btSphereTriangleCollisionAlgorithm::btSphereTriangleCollisionAlgorithm(lua_Table * data, btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, bool swapped) function, expected prototype:\nbtSphereTriangleCollisionAlgorithm::btSphereTriangleCollisionAlgorithm(lua_Table * data, btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, bool swapped)\nClass arguments details:\narg 2 ID = 66271199\narg 3 ID = 61780402\narg 4 ID = 32391296\narg 5 ID = 32391296\n\n%s",luna_dumpStack(L).c_str());
		}

		btPersistentManifold* mf=(Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,2));
		const btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,3));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btSphereTriangleCollisionAlgorithm::btSphereTriangleCollisionAlgorithm function");
		}
		const btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;
		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,4));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,5));
		bool swapped=(bool)(lua_toboolean(L,6)==1);

		return new wrapper_btSphereTriangleCollisionAlgorithm(L,NULL, mf, ci, body0Wrap, body1Wrap, swapped);
	}

	// btSphereTriangleCollisionAlgorithm::btSphereTriangleCollisionAlgorithm(lua_Table * data, const btCollisionAlgorithmConstructionInfo & ci)
	static btSphereTriangleCollisionAlgorithm* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in btSphereTriangleCollisionAlgorithm::btSphereTriangleCollisionAlgorithm(lua_Table * data, const btCollisionAlgorithmConstructionInfo & ci) function, expected prototype:\nbtSphereTriangleCollisionAlgorithm::btSphereTriangleCollisionAlgorithm(lua_Table * data, const btCollisionAlgorithmConstructionInfo & ci)\nClass arguments details:\narg 2 ID = 61780402\n\n%s",luna_dumpStack(L).c_str());
		}

		const btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btSphereTriangleCollisionAlgorithm::btSphereTriangleCollisionAlgorithm function");
		}
		const btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;

		return new wrapper_btSphereTriangleCollisionAlgorithm(L,NULL, ci);
	}

	// Overload binder for btSphereTriangleCollisionAlgorithm::btSphereTriangleCollisionAlgorithm
	static btSphereTriangleCollisionAlgorithm* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function btSphereTriangleCollisionAlgorithm, cannot match any of the overloads for function btSphereTriangleCollisionAlgorithm:\n  btSphereTriangleCollisionAlgorithm(btPersistentManifold *, const btCollisionAlgorithmConstructionInfo &, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, bool)\n  btSphereTriangleCollisionAlgorithm(const btCollisionAlgorithmConstructionInfo &)\n  btSphereTriangleCollisionAlgorithm(lua_Table *, btPersistentManifold *, const btCollisionAlgorithmConstructionInfo &, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, bool)\n  btSphereTriangleCollisionAlgorithm(lua_Table *, const btCollisionAlgorithmConstructionInfo &)\n");
		return NULL;
	}


	// Function binds:
	// void btSphereTriangleCollisionAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_processCollision(lua_State *L) {
		if (!_lg_typecheck_processCollision(L)) {
			luaL_error(L, "luna typecheck failed in void btSphereTriangleCollisionAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nvoid btSphereTriangleCollisionAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 95201256\narg 4 ID = 25324514\n\n%s",luna_dumpStack(L).c_str());
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btSphereTriangleCollisionAlgorithm::processCollision function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btSphereTriangleCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btSphereTriangleCollisionAlgorithm >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btSphereTriangleCollisionAlgorithm::processCollision(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'\n%s",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->processCollision(body0Wrap, body1Wrap, dispatchInfo, resultOut);

		return 0;
	}

	// float btSphereTriangleCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_calculateTimeOfImpact(lua_State *L) {
		if (!_lg_typecheck_calculateTimeOfImpact(L)) {
			luaL_error(L, "luna typecheck failed in float btSphereTriangleCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nfloat btSphereTriangleCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 95201256\narg 4 ID = 25324514\n\n%s",luna_dumpStack(L).c_str());
		}

		btCollisionObject* body0=(Luna< btCollisionObject >::check(L,2));
		btCollisionObject* body1=(Luna< btCollisionObject >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btSphereTriangleCollisionAlgorithm::calculateTimeOfImpact function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btSphereTriangleCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btSphereTriangleCollisionAlgorithm >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btSphereTriangleCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject *, btCollisionObject *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'\n%s",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->calculateTimeOfImpact(body0, body1, dispatchInfo, resultOut);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSphereTriangleCollisionAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray)
	static int _bind_getAllContactManifolds(lua_State *L) {
		if (!_lg_typecheck_getAllContactManifolds(L)) {
			luaL_error(L, "luna typecheck failed in void btSphereTriangleCollisionAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray) function, expected prototype:\nvoid btSphereTriangleCollisionAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray)\nClass arguments details:\narg 1 ID = 41484542\n\n%s",luna_dumpStack(L).c_str());
		}

		btManifoldArray* manifoldArray_ptr=(Luna< btAlignedObjectArray< btPersistentManifold * > >::checkSubType< btManifoldArray >(L,2));
		if( !manifoldArray_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg manifoldArray in btSphereTriangleCollisionAlgorithm::getAllContactManifolds function");
		}
		btManifoldArray & manifoldArray=*manifoldArray_ptr;

		btSphereTriangleCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btSphereTriangleCollisionAlgorithm >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btSphereTriangleCollisionAlgorithm::getAllContactManifolds(btManifoldArray &). Got : '%s'\n%s",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getAllContactManifolds(manifoldArray);

		return 0;
	}

	// void btSphereTriangleCollisionAlgorithm::base_processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_base_processCollision(lua_State *L) {
		if (!_lg_typecheck_base_processCollision(L)) {
			luaL_error(L, "luna typecheck failed in void btSphereTriangleCollisionAlgorithm::base_processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nvoid btSphereTriangleCollisionAlgorithm::base_processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 95201256\narg 4 ID = 25324514\n\n%s",luna_dumpStack(L).c_str());
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btSphereTriangleCollisionAlgorithm::base_processCollision function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btSphereTriangleCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btSphereTriangleCollisionAlgorithm >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btSphereTriangleCollisionAlgorithm::base_processCollision(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'\n%s",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btSphereTriangleCollisionAlgorithm::processCollision(body0Wrap, body1Wrap, dispatchInfo, resultOut);

		return 0;
	}

	// float btSphereTriangleCollisionAlgorithm::base_calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_base_calculateTimeOfImpact(lua_State *L) {
		if (!_lg_typecheck_base_calculateTimeOfImpact(L)) {
			luaL_error(L, "luna typecheck failed in float btSphereTriangleCollisionAlgorithm::base_calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nfloat btSphereTriangleCollisionAlgorithm::base_calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 95201256\narg 4 ID = 25324514\n\n%s",luna_dumpStack(L).c_str());
		}

		btCollisionObject* body0=(Luna< btCollisionObject >::check(L,2));
		btCollisionObject* body1=(Luna< btCollisionObject >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btSphereTriangleCollisionAlgorithm::base_calculateTimeOfImpact function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btSphereTriangleCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btSphereTriangleCollisionAlgorithm >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btSphereTriangleCollisionAlgorithm::base_calculateTimeOfImpact(btCollisionObject *, btCollisionObject *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'\n%s",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->btSphereTriangleCollisionAlgorithm::calculateTimeOfImpact(body0, body1, dispatchInfo, resultOut);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSphereTriangleCollisionAlgorithm::base_getAllContactManifolds(btManifoldArray & manifoldArray)
	static int _bind_base_getAllContactManifolds(lua_State *L) {
		if (!_lg_typecheck_base_getAllContactManifolds(L)) {
			luaL_error(L, "luna typecheck failed in void btSphereTriangleCollisionAlgorithm::base_getAllContactManifolds(btManifoldArray & manifoldArray) function, expected prototype:\nvoid btSphereTriangleCollisionAlgorithm::base_getAllContactManifolds(btManifoldArray & manifoldArray)\nClass arguments details:\narg 1 ID = 41484542\n\n%s",luna_dumpStack(L).c_str());
		}

		btManifoldArray* manifoldArray_ptr=(Luna< btAlignedObjectArray< btPersistentManifold * > >::checkSubType< btManifoldArray >(L,2));
		if( !manifoldArray_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg manifoldArray in btSphereTriangleCollisionAlgorithm::base_getAllContactManifolds function");
		}
		btManifoldArray & manifoldArray=*manifoldArray_ptr;

		btSphereTriangleCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btSphereTriangleCollisionAlgorithm >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btSphereTriangleCollisionAlgorithm::base_getAllContactManifolds(btManifoldArray &). Got : '%s'\n%s",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btSphereTriangleCollisionAlgorithm::getAllContactManifolds(manifoldArray);

		return 0;
	}


	// Operator binds:

};

btSphereTriangleCollisionAlgorithm* LunaTraits< btSphereTriangleCollisionAlgorithm >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btSphereTriangleCollisionAlgorithm::_bind_ctor(L);
}

void LunaTraits< btSphereTriangleCollisionAlgorithm >::_bind_dtor(btSphereTriangleCollisionAlgorithm* obj) {
	delete obj;
}

const char LunaTraits< btSphereTriangleCollisionAlgorithm >::className[] = "btSphereTriangleCollisionAlgorithm";
const char LunaTraits< btSphereTriangleCollisionAlgorithm >::fullName[] = "btSphereTriangleCollisionAlgorithm";
const char LunaTraits< btSphereTriangleCollisionAlgorithm >::moduleName[] = "bullet";
const char* LunaTraits< btSphereTriangleCollisionAlgorithm >::parents[] = {"bullet.btActivatingCollisionAlgorithm", 0};
const int LunaTraits< btSphereTriangleCollisionAlgorithm >::hash = 22144218;
const int LunaTraits< btSphereTriangleCollisionAlgorithm >::uniqueIDs[] = {17890858,0};

luna_RegType LunaTraits< btSphereTriangleCollisionAlgorithm >::methods[] = {
	{"processCollision", &luna_wrapper_btSphereTriangleCollisionAlgorithm::_bind_processCollision},
	{"calculateTimeOfImpact", &luna_wrapper_btSphereTriangleCollisionAlgorithm::_bind_calculateTimeOfImpact},
	{"getAllContactManifolds", &luna_wrapper_btSphereTriangleCollisionAlgorithm::_bind_getAllContactManifolds},
	{"base_processCollision", &luna_wrapper_btSphereTriangleCollisionAlgorithm::_bind_base_processCollision},
	{"base_calculateTimeOfImpact", &luna_wrapper_btSphereTriangleCollisionAlgorithm::_bind_base_calculateTimeOfImpact},
	{"base_getAllContactManifolds", &luna_wrapper_btSphereTriangleCollisionAlgorithm::_bind_base_getAllContactManifolds},
	{"fromVoid", &luna_wrapper_btSphereTriangleCollisionAlgorithm::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btSphereTriangleCollisionAlgorithm::_bind_asVoid},
	{"getTable", &luna_wrapper_btSphereTriangleCollisionAlgorithm::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btSphereTriangleCollisionAlgorithm >::converters[] = {
	{"btCollisionAlgorithm", &luna_wrapper_btSphereTriangleCollisionAlgorithm::_cast_from_btCollisionAlgorithm},
	{0,0}
};

luna_RegEnumType LunaTraits< btSphereTriangleCollisionAlgorithm >::enumValues[] = {
	{0,0}
};


