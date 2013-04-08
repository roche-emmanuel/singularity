#include <plug_common.h>

#include <luna/wrappers/wrapper_btSphereSphereCollisionAlgorithm.h>

class luna_wrapper_btSphereSphereCollisionAlgorithm {
public:
	typedef Luna< btSphereSphereCollisionAlgorithm > luna_t;

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

		btSphereSphereCollisionAlgorithm* self= (btSphereSphereCollisionAlgorithm*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btSphereSphereCollisionAlgorithm >::push(L,self,false);
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
		//btSphereSphereCollisionAlgorithm* ptr= dynamic_cast< btSphereSphereCollisionAlgorithm* >(Luna< btCollisionAlgorithm >::check(L,1));
		btSphereSphereCollisionAlgorithm* ptr= luna_caster< btCollisionAlgorithm, btSphereSphereCollisionAlgorithm >::cast(Luna< btCollisionAlgorithm >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btSphereSphereCollisionAlgorithm >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
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

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61780402) ) return false;
		if( (!(Luna< btCollisionAlgorithmConstructionInfo >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
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
	// btSphereSphereCollisionAlgorithm::btSphereSphereCollisionAlgorithm(btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * col0Wrap, const btCollisionObjectWrapper * col1Wrap)
	static btSphereSphereCollisionAlgorithm* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btSphereSphereCollisionAlgorithm::btSphereSphereCollisionAlgorithm(btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * col0Wrap, const btCollisionObjectWrapper * col1Wrap) function, expected prototype:\nbtSphereSphereCollisionAlgorithm::btSphereSphereCollisionAlgorithm(btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * col0Wrap, const btCollisionObjectWrapper * col1Wrap)\nClass arguments details:\narg 1 ID = 66271199\narg 2 ID = 61780402\narg 3 ID = 32391296\narg 4 ID = 32391296\n");
		}

		btPersistentManifold* mf=(Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1));
		const btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btSphereSphereCollisionAlgorithm::btSphereSphereCollisionAlgorithm function");
		}
		const btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;
		const btCollisionObjectWrapper* col0Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btCollisionObjectWrapper* col1Wrap=(Luna< btCollisionObjectWrapper >::check(L,4));

		return new btSphereSphereCollisionAlgorithm(mf, ci, col0Wrap, col1Wrap);
	}

	// btSphereSphereCollisionAlgorithm::btSphereSphereCollisionAlgorithm(const btCollisionAlgorithmConstructionInfo & ci)
	static btSphereSphereCollisionAlgorithm* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btSphereSphereCollisionAlgorithm::btSphereSphereCollisionAlgorithm(const btCollisionAlgorithmConstructionInfo & ci) function, expected prototype:\nbtSphereSphereCollisionAlgorithm::btSphereSphereCollisionAlgorithm(const btCollisionAlgorithmConstructionInfo & ci)\nClass arguments details:\narg 1 ID = 61780402\n");
		}

		const btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,1));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btSphereSphereCollisionAlgorithm::btSphereSphereCollisionAlgorithm function");
		}
		const btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;

		return new btSphereSphereCollisionAlgorithm(ci);
	}

	// btSphereSphereCollisionAlgorithm::btSphereSphereCollisionAlgorithm(lua_Table * data, btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * col0Wrap, const btCollisionObjectWrapper * col1Wrap)
	static btSphereSphereCollisionAlgorithm* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btSphereSphereCollisionAlgorithm::btSphereSphereCollisionAlgorithm(lua_Table * data, btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * col0Wrap, const btCollisionObjectWrapper * col1Wrap) function, expected prototype:\nbtSphereSphereCollisionAlgorithm::btSphereSphereCollisionAlgorithm(lua_Table * data, btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * col0Wrap, const btCollisionObjectWrapper * col1Wrap)\nClass arguments details:\narg 2 ID = 66271199\narg 3 ID = 61780402\narg 4 ID = 32391296\narg 5 ID = 32391296\n");
		}

		btPersistentManifold* mf=(Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,2));
		const btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,3));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btSphereSphereCollisionAlgorithm::btSphereSphereCollisionAlgorithm function");
		}
		const btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;
		const btCollisionObjectWrapper* col0Wrap=(Luna< btCollisionObjectWrapper >::check(L,4));
		const btCollisionObjectWrapper* col1Wrap=(Luna< btCollisionObjectWrapper >::check(L,5));

		return new wrapper_btSphereSphereCollisionAlgorithm(L,NULL, mf, ci, col0Wrap, col1Wrap);
	}

	// btSphereSphereCollisionAlgorithm::btSphereSphereCollisionAlgorithm(lua_Table * data, const btCollisionAlgorithmConstructionInfo & ci)
	static btSphereSphereCollisionAlgorithm* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btSphereSphereCollisionAlgorithm::btSphereSphereCollisionAlgorithm(lua_Table * data, const btCollisionAlgorithmConstructionInfo & ci) function, expected prototype:\nbtSphereSphereCollisionAlgorithm::btSphereSphereCollisionAlgorithm(lua_Table * data, const btCollisionAlgorithmConstructionInfo & ci)\nClass arguments details:\narg 2 ID = 61780402\n");
		}

		const btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btSphereSphereCollisionAlgorithm::btSphereSphereCollisionAlgorithm function");
		}
		const btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;

		return new wrapper_btSphereSphereCollisionAlgorithm(L,NULL, ci);
	}

	// Overload binder for btSphereSphereCollisionAlgorithm::btSphereSphereCollisionAlgorithm
	static btSphereSphereCollisionAlgorithm* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function btSphereSphereCollisionAlgorithm, cannot match any of the overloads for function btSphereSphereCollisionAlgorithm:\n  btSphereSphereCollisionAlgorithm(btPersistentManifold *, const btCollisionAlgorithmConstructionInfo &, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *)\n  btSphereSphereCollisionAlgorithm(const btCollisionAlgorithmConstructionInfo &)\n  btSphereSphereCollisionAlgorithm(lua_Table *, btPersistentManifold *, const btCollisionAlgorithmConstructionInfo &, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *)\n  btSphereSphereCollisionAlgorithm(lua_Table *, const btCollisionAlgorithmConstructionInfo &)\n");
		return NULL;
	}


	// Function binds:
	// void btSphereSphereCollisionAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_processCollision(lua_State *L) {
		if (!_lg_typecheck_processCollision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSphereSphereCollisionAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nvoid btSphereSphereCollisionAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 95201256\narg 4 ID = 25324514\n");
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btSphereSphereCollisionAlgorithm::processCollision function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btSphereSphereCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btSphereSphereCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSphereSphereCollisionAlgorithm::processCollision(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->processCollision(body0Wrap, body1Wrap, dispatchInfo, resultOut);

		return 0;
	}

	// float btSphereSphereCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_calculateTimeOfImpact(lua_State *L) {
		if (!_lg_typecheck_calculateTimeOfImpact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSphereSphereCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nfloat btSphereSphereCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 95201256\narg 4 ID = 25324514\n");
		}

		btCollisionObject* body0=(Luna< btCollisionObject >::check(L,2));
		btCollisionObject* body1=(Luna< btCollisionObject >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btSphereSphereCollisionAlgorithm::calculateTimeOfImpact function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btSphereSphereCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btSphereSphereCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSphereSphereCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject *, btCollisionObject *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		float lret = self->calculateTimeOfImpact(body0, body1, dispatchInfo, resultOut);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSphereSphereCollisionAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray)
	static int _bind_getAllContactManifolds(lua_State *L) {
		if (!_lg_typecheck_getAllContactManifolds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSphereSphereCollisionAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray) function, expected prototype:\nvoid btSphereSphereCollisionAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray)\nClass arguments details:\narg 1 ID = 41484542\n");
		}

		btManifoldArray* manifoldArray_ptr=(Luna< btAlignedObjectArray< btPersistentManifold * > >::checkSubType< btManifoldArray >(L,2));
		if( !manifoldArray_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg manifoldArray in btSphereSphereCollisionAlgorithm::getAllContactManifolds function");
		}
		btManifoldArray & manifoldArray=*manifoldArray_ptr;

		btSphereSphereCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btSphereSphereCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSphereSphereCollisionAlgorithm::getAllContactManifolds(btManifoldArray &). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->getAllContactManifolds(manifoldArray);

		return 0;
	}

	// void btSphereSphereCollisionAlgorithm::base_processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_base_processCollision(lua_State *L) {
		if (!_lg_typecheck_base_processCollision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSphereSphereCollisionAlgorithm::base_processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nvoid btSphereSphereCollisionAlgorithm::base_processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 95201256\narg 4 ID = 25324514\n");
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btSphereSphereCollisionAlgorithm::base_processCollision function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btSphereSphereCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btSphereSphereCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSphereSphereCollisionAlgorithm::base_processCollision(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->btSphereSphereCollisionAlgorithm::processCollision(body0Wrap, body1Wrap, dispatchInfo, resultOut);

		return 0;
	}

	// float btSphereSphereCollisionAlgorithm::base_calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_base_calculateTimeOfImpact(lua_State *L) {
		if (!_lg_typecheck_base_calculateTimeOfImpact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSphereSphereCollisionAlgorithm::base_calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nfloat btSphereSphereCollisionAlgorithm::base_calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 95201256\narg 4 ID = 25324514\n");
		}

		btCollisionObject* body0=(Luna< btCollisionObject >::check(L,2));
		btCollisionObject* body1=(Luna< btCollisionObject >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btSphereSphereCollisionAlgorithm::base_calculateTimeOfImpact function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btSphereSphereCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btSphereSphereCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSphereSphereCollisionAlgorithm::base_calculateTimeOfImpact(btCollisionObject *, btCollisionObject *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		float lret = self->btSphereSphereCollisionAlgorithm::calculateTimeOfImpact(body0, body1, dispatchInfo, resultOut);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSphereSphereCollisionAlgorithm::base_getAllContactManifolds(btManifoldArray & manifoldArray)
	static int _bind_base_getAllContactManifolds(lua_State *L) {
		if (!_lg_typecheck_base_getAllContactManifolds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSphereSphereCollisionAlgorithm::base_getAllContactManifolds(btManifoldArray & manifoldArray) function, expected prototype:\nvoid btSphereSphereCollisionAlgorithm::base_getAllContactManifolds(btManifoldArray & manifoldArray)\nClass arguments details:\narg 1 ID = 41484542\n");
		}

		btManifoldArray* manifoldArray_ptr=(Luna< btAlignedObjectArray< btPersistentManifold * > >::checkSubType< btManifoldArray >(L,2));
		if( !manifoldArray_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg manifoldArray in btSphereSphereCollisionAlgorithm::base_getAllContactManifolds function");
		}
		btManifoldArray & manifoldArray=*manifoldArray_ptr;

		btSphereSphereCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btSphereSphereCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSphereSphereCollisionAlgorithm::base_getAllContactManifolds(btManifoldArray &). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->btSphereSphereCollisionAlgorithm::getAllContactManifolds(manifoldArray);

		return 0;
	}


	// Operator binds:

};

btSphereSphereCollisionAlgorithm* LunaTraits< btSphereSphereCollisionAlgorithm >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btSphereSphereCollisionAlgorithm::_bind_ctor(L);
}

void LunaTraits< btSphereSphereCollisionAlgorithm >::_bind_dtor(btSphereSphereCollisionAlgorithm* obj) {
	delete obj;
}

const char LunaTraits< btSphereSphereCollisionAlgorithm >::className[] = "btSphereSphereCollisionAlgorithm";
const char LunaTraits< btSphereSphereCollisionAlgorithm >::fullName[] = "btSphereSphereCollisionAlgorithm";
const char LunaTraits< btSphereSphereCollisionAlgorithm >::moduleName[] = "bullet";
const char* LunaTraits< btSphereSphereCollisionAlgorithm >::parents[] = {"bullet.btActivatingCollisionAlgorithm", 0};
const int LunaTraits< btSphereSphereCollisionAlgorithm >::hash = 59169241;
const int LunaTraits< btSphereSphereCollisionAlgorithm >::uniqueIDs[] = {17890858,0};

luna_RegType LunaTraits< btSphereSphereCollisionAlgorithm >::methods[] = {
	{"processCollision", &luna_wrapper_btSphereSphereCollisionAlgorithm::_bind_processCollision},
	{"calculateTimeOfImpact", &luna_wrapper_btSphereSphereCollisionAlgorithm::_bind_calculateTimeOfImpact},
	{"getAllContactManifolds", &luna_wrapper_btSphereSphereCollisionAlgorithm::_bind_getAllContactManifolds},
	{"base_processCollision", &luna_wrapper_btSphereSphereCollisionAlgorithm::_bind_base_processCollision},
	{"base_calculateTimeOfImpact", &luna_wrapper_btSphereSphereCollisionAlgorithm::_bind_base_calculateTimeOfImpact},
	{"base_getAllContactManifolds", &luna_wrapper_btSphereSphereCollisionAlgorithm::_bind_base_getAllContactManifolds},
	{"__eq", &luna_wrapper_btSphereSphereCollisionAlgorithm::_bind___eq},
	{"fromVoid", &luna_wrapper_btSphereSphereCollisionAlgorithm::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btSphereSphereCollisionAlgorithm::_bind_asVoid},
	{"getTable", &luna_wrapper_btSphereSphereCollisionAlgorithm::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btSphereSphereCollisionAlgorithm >::converters[] = {
	{"btCollisionAlgorithm", &luna_wrapper_btSphereSphereCollisionAlgorithm::_cast_from_btCollisionAlgorithm},
	{0,0}
};

luna_RegEnumType LunaTraits< btSphereSphereCollisionAlgorithm >::enumValues[] = {
	{0,0}
};


