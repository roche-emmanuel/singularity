#include <plug_common.h>

#include <luna/wrappers/wrapper_btConvexConcaveCollisionAlgorithm.h>

class luna_wrapper_btConvexConcaveCollisionAlgorithm {
public:
	typedef Luna< btConvexConcaveCollisionAlgorithm > luna_t;

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

		btConvexConcaveCollisionAlgorithm* self= (btConvexConcaveCollisionAlgorithm*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btConvexConcaveCollisionAlgorithm >::push(L,self,false);
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
		//btConvexConcaveCollisionAlgorithm* ptr= dynamic_cast< btConvexConcaveCollisionAlgorithm* >(Luna< btCollisionAlgorithm >::check(L,1));
		btConvexConcaveCollisionAlgorithm* ptr= luna_caster< btCollisionAlgorithm, btConvexConcaveCollisionAlgorithm >::cast(Luna< btCollisionAlgorithm >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btConvexConcaveCollisionAlgorithm >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61780402) ) return false;
		if( (!(Luna< btCollisionAlgorithmConstructionInfo >::check(L,1))) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,32391296)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionObjectWrapper >::check(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btCollisionObjectWrapper >::check(L,3)) ) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,61780402) ) return false;
		if( (!(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2))) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btCollisionObjectWrapper >::check(L,3)) ) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,32391296)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< btCollisionObjectWrapper >::check(L,4)) ) ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
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

	inline static bool _lg_typecheck_clearCache(lua_State *L) {
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
	// btConvexConcaveCollisionAlgorithm::btConvexConcaveCollisionAlgorithm(const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, bool isSwapped)
	static btConvexConcaveCollisionAlgorithm* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConvexConcaveCollisionAlgorithm::btConvexConcaveCollisionAlgorithm(const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, bool isSwapped) function, expected prototype:\nbtConvexConcaveCollisionAlgorithm::btConvexConcaveCollisionAlgorithm(const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, bool isSwapped)\nClass arguments details:\narg 1 ID = 61780402\narg 2 ID = 32391296\narg 3 ID = 32391296\n");
		}

		const btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,1));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btConvexConcaveCollisionAlgorithm::btConvexConcaveCollisionAlgorithm function");
		}
		const btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;
		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		bool isSwapped=(bool)(lua_toboolean(L,4)==1);

		return new btConvexConcaveCollisionAlgorithm(ci, body0Wrap, body1Wrap, isSwapped);
	}

	// btConvexConcaveCollisionAlgorithm::btConvexConcaveCollisionAlgorithm(lua_Table * data, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, bool isSwapped)
	static btConvexConcaveCollisionAlgorithm* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConvexConcaveCollisionAlgorithm::btConvexConcaveCollisionAlgorithm(lua_Table * data, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, bool isSwapped) function, expected prototype:\nbtConvexConcaveCollisionAlgorithm::btConvexConcaveCollisionAlgorithm(lua_Table * data, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, bool isSwapped)\nClass arguments details:\narg 2 ID = 61780402\narg 3 ID = 32391296\narg 4 ID = 32391296\n");
		}

		const btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btConvexConcaveCollisionAlgorithm::btConvexConcaveCollisionAlgorithm function");
		}
		const btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;
		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,4));
		bool isSwapped=(bool)(lua_toboolean(L,5)==1);

		return new wrapper_btConvexConcaveCollisionAlgorithm(L,NULL, ci, body0Wrap, body1Wrap, isSwapped);
	}

	// Overload binder for btConvexConcaveCollisionAlgorithm::btConvexConcaveCollisionAlgorithm
	static btConvexConcaveCollisionAlgorithm* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btConvexConcaveCollisionAlgorithm, cannot match any of the overloads for function btConvexConcaveCollisionAlgorithm:\n  btConvexConcaveCollisionAlgorithm(const btCollisionAlgorithmConstructionInfo &, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, bool)\n  btConvexConcaveCollisionAlgorithm(lua_Table *, const btCollisionAlgorithmConstructionInfo &, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, bool)\n");
		return NULL;
	}


	// Function binds:
	// void btConvexConcaveCollisionAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_processCollision(lua_State *L) {
		if (!_lg_typecheck_processCollision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexConcaveCollisionAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nvoid btConvexConcaveCollisionAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 95201256\narg 4 ID = 25324514\n");
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btConvexConcaveCollisionAlgorithm::processCollision function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btConvexConcaveCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btConvexConcaveCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexConcaveCollisionAlgorithm::processCollision(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->processCollision(body0Wrap, body1Wrap, dispatchInfo, resultOut);

		return 0;
	}

	// float btConvexConcaveCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_calculateTimeOfImpact(lua_State *L) {
		if (!_lg_typecheck_calculateTimeOfImpact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConvexConcaveCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nfloat btConvexConcaveCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 95201256\narg 4 ID = 25324514\n");
		}

		btCollisionObject* body0=(Luna< btCollisionObject >::check(L,2));
		btCollisionObject* body1=(Luna< btCollisionObject >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btConvexConcaveCollisionAlgorithm::calculateTimeOfImpact function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btConvexConcaveCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btConvexConcaveCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConvexConcaveCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject *, btCollisionObject *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		float lret = self->calculateTimeOfImpact(body0, body1, dispatchInfo, resultOut);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexConcaveCollisionAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray)
	static int _bind_getAllContactManifolds(lua_State *L) {
		if (!_lg_typecheck_getAllContactManifolds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexConcaveCollisionAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray) function, expected prototype:\nvoid btConvexConcaveCollisionAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray)\nClass arguments details:\narg 1 ID = 41484542\n");
		}

		btManifoldArray* manifoldArray_ptr=(Luna< btAlignedObjectArray< btPersistentManifold * > >::checkSubType< btManifoldArray >(L,2));
		if( !manifoldArray_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg manifoldArray in btConvexConcaveCollisionAlgorithm::getAllContactManifolds function");
		}
		btManifoldArray & manifoldArray=*manifoldArray_ptr;

		btConvexConcaveCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btConvexConcaveCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexConcaveCollisionAlgorithm::getAllContactManifolds(btManifoldArray &). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->getAllContactManifolds(manifoldArray);

		return 0;
	}

	// void btConvexConcaveCollisionAlgorithm::clearCache()
	static int _bind_clearCache(lua_State *L) {
		if (!_lg_typecheck_clearCache(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexConcaveCollisionAlgorithm::clearCache() function, expected prototype:\nvoid btConvexConcaveCollisionAlgorithm::clearCache()\nClass arguments details:\n");
		}


		btConvexConcaveCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btConvexConcaveCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexConcaveCollisionAlgorithm::clearCache(). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->clearCache();

		return 0;
	}

	// void btConvexConcaveCollisionAlgorithm::base_processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_base_processCollision(lua_State *L) {
		if (!_lg_typecheck_base_processCollision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexConcaveCollisionAlgorithm::base_processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nvoid btConvexConcaveCollisionAlgorithm::base_processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 95201256\narg 4 ID = 25324514\n");
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btConvexConcaveCollisionAlgorithm::base_processCollision function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btConvexConcaveCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btConvexConcaveCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexConcaveCollisionAlgorithm::base_processCollision(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->btConvexConcaveCollisionAlgorithm::processCollision(body0Wrap, body1Wrap, dispatchInfo, resultOut);

		return 0;
	}

	// float btConvexConcaveCollisionAlgorithm::base_calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_base_calculateTimeOfImpact(lua_State *L) {
		if (!_lg_typecheck_base_calculateTimeOfImpact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConvexConcaveCollisionAlgorithm::base_calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nfloat btConvexConcaveCollisionAlgorithm::base_calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 95201256\narg 4 ID = 25324514\n");
		}

		btCollisionObject* body0=(Luna< btCollisionObject >::check(L,2));
		btCollisionObject* body1=(Luna< btCollisionObject >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btConvexConcaveCollisionAlgorithm::base_calculateTimeOfImpact function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btConvexConcaveCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btConvexConcaveCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConvexConcaveCollisionAlgorithm::base_calculateTimeOfImpact(btCollisionObject *, btCollisionObject *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		float lret = self->btConvexConcaveCollisionAlgorithm::calculateTimeOfImpact(body0, body1, dispatchInfo, resultOut);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexConcaveCollisionAlgorithm::base_getAllContactManifolds(btManifoldArray & manifoldArray)
	static int _bind_base_getAllContactManifolds(lua_State *L) {
		if (!_lg_typecheck_base_getAllContactManifolds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexConcaveCollisionAlgorithm::base_getAllContactManifolds(btManifoldArray & manifoldArray) function, expected prototype:\nvoid btConvexConcaveCollisionAlgorithm::base_getAllContactManifolds(btManifoldArray & manifoldArray)\nClass arguments details:\narg 1 ID = 41484542\n");
		}

		btManifoldArray* manifoldArray_ptr=(Luna< btAlignedObjectArray< btPersistentManifold * > >::checkSubType< btManifoldArray >(L,2));
		if( !manifoldArray_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg manifoldArray in btConvexConcaveCollisionAlgorithm::base_getAllContactManifolds function");
		}
		btManifoldArray & manifoldArray=*manifoldArray_ptr;

		btConvexConcaveCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btConvexConcaveCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexConcaveCollisionAlgorithm::base_getAllContactManifolds(btManifoldArray &). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->btConvexConcaveCollisionAlgorithm::getAllContactManifolds(manifoldArray);

		return 0;
	}


	// Operator binds:

};

btConvexConcaveCollisionAlgorithm* LunaTraits< btConvexConcaveCollisionAlgorithm >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btConvexConcaveCollisionAlgorithm::_bind_ctor(L);
}

void LunaTraits< btConvexConcaveCollisionAlgorithm >::_bind_dtor(btConvexConcaveCollisionAlgorithm* obj) {
	delete obj;
}

const char LunaTraits< btConvexConcaveCollisionAlgorithm >::className[] = "btConvexConcaveCollisionAlgorithm";
const char LunaTraits< btConvexConcaveCollisionAlgorithm >::fullName[] = "btConvexConcaveCollisionAlgorithm";
const char LunaTraits< btConvexConcaveCollisionAlgorithm >::moduleName[] = "bullet";
const char* LunaTraits< btConvexConcaveCollisionAlgorithm >::parents[] = {"bullet.btActivatingCollisionAlgorithm", 0};
const int LunaTraits< btConvexConcaveCollisionAlgorithm >::hash = 51274698;
const int LunaTraits< btConvexConcaveCollisionAlgorithm >::uniqueIDs[] = {17890858,0};

luna_RegType LunaTraits< btConvexConcaveCollisionAlgorithm >::methods[] = {
	{"processCollision", &luna_wrapper_btConvexConcaveCollisionAlgorithm::_bind_processCollision},
	{"calculateTimeOfImpact", &luna_wrapper_btConvexConcaveCollisionAlgorithm::_bind_calculateTimeOfImpact},
	{"getAllContactManifolds", &luna_wrapper_btConvexConcaveCollisionAlgorithm::_bind_getAllContactManifolds},
	{"clearCache", &luna_wrapper_btConvexConcaveCollisionAlgorithm::_bind_clearCache},
	{"base_processCollision", &luna_wrapper_btConvexConcaveCollisionAlgorithm::_bind_base_processCollision},
	{"base_calculateTimeOfImpact", &luna_wrapper_btConvexConcaveCollisionAlgorithm::_bind_base_calculateTimeOfImpact},
	{"base_getAllContactManifolds", &luna_wrapper_btConvexConcaveCollisionAlgorithm::_bind_base_getAllContactManifolds},
	{"__eq", &luna_wrapper_btConvexConcaveCollisionAlgorithm::_bind___eq},
	{"fromVoid", &luna_wrapper_btConvexConcaveCollisionAlgorithm::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btConvexConcaveCollisionAlgorithm::_bind_asVoid},
	{"getTable", &luna_wrapper_btConvexConcaveCollisionAlgorithm::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btConvexConcaveCollisionAlgorithm >::converters[] = {
	{"btCollisionAlgorithm", &luna_wrapper_btConvexConcaveCollisionAlgorithm::_cast_from_btCollisionAlgorithm},
	{0,0}
};

luna_RegEnumType LunaTraits< btConvexConcaveCollisionAlgorithm >::enumValues[] = {
	{0,0}
};


