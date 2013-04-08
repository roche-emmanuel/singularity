#include <plug_common.h>

#include <luna/wrappers/wrapper_btGImpactCollisionAlgorithm.h>

class luna_wrapper_btGImpactCollisionAlgorithm {
public:
	typedef Luna< btGImpactCollisionAlgorithm > luna_t;

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

		btGImpactCollisionAlgorithm* self= (btGImpactCollisionAlgorithm*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btGImpactCollisionAlgorithm >::push(L,self,false);
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
		//btGImpactCollisionAlgorithm* ptr= dynamic_cast< btGImpactCollisionAlgorithm* >(Luna< btCollisionAlgorithm >::check(L,1));
		btGImpactCollisionAlgorithm* ptr= luna_caster< btCollisionAlgorithm, btGImpactCollisionAlgorithm >::cast(Luna< btCollisionAlgorithm >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btGImpactCollisionAlgorithm >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61780402) ) return false;
		if( (!(Luna< btCollisionAlgorithmConstructionInfo >::check(L,1))) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,32391296)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionObjectWrapper >::check(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btCollisionObjectWrapper >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,61780402) ) return false;
		if( (!(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2))) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btCollisionObjectWrapper >::check(L,3)) ) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,32391296)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< btCollisionObjectWrapper >::check(L,4)) ) ) return false;
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

	inline static bool _lg_typecheck_gimpact_vs_gimpact(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,58243831)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,58243831)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_gimpact_vs_shape(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,58243831)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,58243831)) ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_gimpact_vs_compoundshape(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,58243831)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,58243831)) ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_gimpact_vs_concave(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,58243831)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,58243831)) ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFace0(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFace0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFace1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFace1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPart0(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPart0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPart1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPart1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_registerAlgorithm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,71097681)) ) return false;
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
	// btGImpactCollisionAlgorithm::btGImpactCollisionAlgorithm(const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	static btGImpactCollisionAlgorithm* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGImpactCollisionAlgorithm::btGImpactCollisionAlgorithm(const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) function, expected prototype:\nbtGImpactCollisionAlgorithm::btGImpactCollisionAlgorithm(const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)\nClass arguments details:\narg 1 ID = 61780402\narg 2 ID = 32391296\narg 3 ID = 32391296\n");
		}

		const btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,1));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btGImpactCollisionAlgorithm::btGImpactCollisionAlgorithm function");
		}
		const btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;
		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));

		return new btGImpactCollisionAlgorithm(ci, body0Wrap, body1Wrap);
	}

	// btGImpactCollisionAlgorithm::btGImpactCollisionAlgorithm(lua_Table * data, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	static btGImpactCollisionAlgorithm* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGImpactCollisionAlgorithm::btGImpactCollisionAlgorithm(lua_Table * data, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) function, expected prototype:\nbtGImpactCollisionAlgorithm::btGImpactCollisionAlgorithm(lua_Table * data, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)\nClass arguments details:\narg 2 ID = 61780402\narg 3 ID = 32391296\narg 4 ID = 32391296\n");
		}

		const btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btGImpactCollisionAlgorithm::btGImpactCollisionAlgorithm function");
		}
		const btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;
		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,4));

		return new wrapper_btGImpactCollisionAlgorithm(L,NULL, ci, body0Wrap, body1Wrap);
	}

	// Overload binder for btGImpactCollisionAlgorithm::btGImpactCollisionAlgorithm
	static btGImpactCollisionAlgorithm* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btGImpactCollisionAlgorithm, cannot match any of the overloads for function btGImpactCollisionAlgorithm:\n  btGImpactCollisionAlgorithm(const btCollisionAlgorithmConstructionInfo &, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *)\n  btGImpactCollisionAlgorithm(lua_Table *, const btCollisionAlgorithmConstructionInfo &, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *)\n");
		return NULL;
	}


	// Function binds:
	// void btGImpactCollisionAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_processCollision(lua_State *L) {
		if (!_lg_typecheck_processCollision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCollisionAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nvoid btGImpactCollisionAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 95201256\narg 4 ID = 25324514\n");
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btGImpactCollisionAlgorithm::processCollision function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCollisionAlgorithm::processCollision(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->processCollision(body0Wrap, body1Wrap, dispatchInfo, resultOut);

		return 0;
	}

	// float btGImpactCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_calculateTimeOfImpact(lua_State *L) {
		if (!_lg_typecheck_calculateTimeOfImpact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btGImpactCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nfloat btGImpactCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 95201256\narg 4 ID = 25324514\n");
		}

		btCollisionObject* body0=(Luna< btCollisionObject >::check(L,2));
		btCollisionObject* body1=(Luna< btCollisionObject >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btGImpactCollisionAlgorithm::calculateTimeOfImpact function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btGImpactCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject *, btCollisionObject *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		float lret = self->calculateTimeOfImpact(body0, body1, dispatchInfo, resultOut);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactCollisionAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray)
	static int _bind_getAllContactManifolds(lua_State *L) {
		if (!_lg_typecheck_getAllContactManifolds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCollisionAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray) function, expected prototype:\nvoid btGImpactCollisionAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray)\nClass arguments details:\narg 1 ID = 41484542\n");
		}

		btManifoldArray* manifoldArray_ptr=(Luna< btAlignedObjectArray< btPersistentManifold * > >::checkSubType< btManifoldArray >(L,2));
		if( !manifoldArray_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg manifoldArray in btGImpactCollisionAlgorithm::getAllContactManifolds function");
		}
		btManifoldArray & manifoldArray=*manifoldArray_ptr;

		btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCollisionAlgorithm::getAllContactManifolds(btManifoldArray &). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->getAllContactManifolds(manifoldArray);

		return 0;
	}

	// void btGImpactCollisionAlgorithm::gimpact_vs_gimpact(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btGImpactShapeInterface * shape0, const btGImpactShapeInterface * shape1)
	static int _bind_gimpact_vs_gimpact(lua_State *L) {
		if (!_lg_typecheck_gimpact_vs_gimpact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCollisionAlgorithm::gimpact_vs_gimpact(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btGImpactShapeInterface * shape0, const btGImpactShapeInterface * shape1) function, expected prototype:\nvoid btGImpactCollisionAlgorithm::gimpact_vs_gimpact(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btGImpactShapeInterface * shape0, const btGImpactShapeInterface * shape1)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 58243831\narg 4 ID = 58243831\n");
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btGImpactShapeInterface* shape0=(Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,4));
		const btGImpactShapeInterface* shape1=(Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,5));

		btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCollisionAlgorithm::gimpact_vs_gimpact(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, const btGImpactShapeInterface *, const btGImpactShapeInterface *). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->gimpact_vs_gimpact(body0Wrap, body1Wrap, shape0, shape1);

		return 0;
	}

	// void btGImpactCollisionAlgorithm::gimpact_vs_shape(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btGImpactShapeInterface * shape0, const btCollisionShape * shape1, bool swapped)
	static int _bind_gimpact_vs_shape(lua_State *L) {
		if (!_lg_typecheck_gimpact_vs_shape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCollisionAlgorithm::gimpact_vs_shape(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btGImpactShapeInterface * shape0, const btCollisionShape * shape1, bool swapped) function, expected prototype:\nvoid btGImpactCollisionAlgorithm::gimpact_vs_shape(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btGImpactShapeInterface * shape0, const btCollisionShape * shape1, bool swapped)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 58243831\narg 4 ID = 58243831\n");
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btGImpactShapeInterface* shape0=(Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,4));
		const btCollisionShape* shape1=(Luna< btCollisionShape >::check(L,5));
		bool swapped=(bool)(lua_toboolean(L,6)==1);

		btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCollisionAlgorithm::gimpact_vs_shape(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, const btGImpactShapeInterface *, const btCollisionShape *, bool). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->gimpact_vs_shape(body0Wrap, body1Wrap, shape0, shape1, swapped);

		return 0;
	}

	// void btGImpactCollisionAlgorithm::gimpact_vs_compoundshape(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btGImpactShapeInterface * shape0, const btCompoundShape * shape1, bool swapped)
	static int _bind_gimpact_vs_compoundshape(lua_State *L) {
		if (!_lg_typecheck_gimpact_vs_compoundshape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCollisionAlgorithm::gimpact_vs_compoundshape(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btGImpactShapeInterface * shape0, const btCompoundShape * shape1, bool swapped) function, expected prototype:\nvoid btGImpactCollisionAlgorithm::gimpact_vs_compoundshape(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btGImpactShapeInterface * shape0, const btCompoundShape * shape1, bool swapped)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 58243831\narg 4 ID = 58243831\n");
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btGImpactShapeInterface* shape0=(Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,4));
		const btCompoundShape* shape1=(Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,5));
		bool swapped=(bool)(lua_toboolean(L,6)==1);

		btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCollisionAlgorithm::gimpact_vs_compoundshape(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, const btGImpactShapeInterface *, const btCompoundShape *, bool). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->gimpact_vs_compoundshape(body0Wrap, body1Wrap, shape0, shape1, swapped);

		return 0;
	}

	// void btGImpactCollisionAlgorithm::gimpact_vs_concave(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btGImpactShapeInterface * shape0, const btConcaveShape * shape1, bool swapped)
	static int _bind_gimpact_vs_concave(lua_State *L) {
		if (!_lg_typecheck_gimpact_vs_concave(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCollisionAlgorithm::gimpact_vs_concave(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btGImpactShapeInterface * shape0, const btConcaveShape * shape1, bool swapped) function, expected prototype:\nvoid btGImpactCollisionAlgorithm::gimpact_vs_concave(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btGImpactShapeInterface * shape0, const btConcaveShape * shape1, bool swapped)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 58243831\narg 4 ID = 58243831\n");
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btGImpactShapeInterface* shape0=(Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,4));
		const btConcaveShape* shape1=(Luna< btCollisionShape >::checkSubType< btConcaveShape >(L,5));
		bool swapped=(bool)(lua_toboolean(L,6)==1);

		btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCollisionAlgorithm::gimpact_vs_concave(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, const btGImpactShapeInterface *, const btConcaveShape *, bool). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->gimpact_vs_concave(body0Wrap, body1Wrap, shape0, shape1, swapped);

		return 0;
	}

	// void btGImpactCollisionAlgorithm::setFace0(int value)
	static int _bind_setFace0(lua_State *L) {
		if (!_lg_typecheck_setFace0(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCollisionAlgorithm::setFace0(int value) function, expected prototype:\nvoid btGImpactCollisionAlgorithm::setFace0(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCollisionAlgorithm::setFace0(int). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->setFace0(value);

		return 0;
	}

	// int btGImpactCollisionAlgorithm::getFace0()
	static int _bind_getFace0(lua_State *L) {
		if (!_lg_typecheck_getFace0(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGImpactCollisionAlgorithm::getFace0() function, expected prototype:\nint btGImpactCollisionAlgorithm::getFace0()\nClass arguments details:\n");
		}


		btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGImpactCollisionAlgorithm::getFace0(). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		int lret = self->getFace0();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactCollisionAlgorithm::setFace1(int value)
	static int _bind_setFace1(lua_State *L) {
		if (!_lg_typecheck_setFace1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCollisionAlgorithm::setFace1(int value) function, expected prototype:\nvoid btGImpactCollisionAlgorithm::setFace1(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCollisionAlgorithm::setFace1(int). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->setFace1(value);

		return 0;
	}

	// int btGImpactCollisionAlgorithm::getFace1()
	static int _bind_getFace1(lua_State *L) {
		if (!_lg_typecheck_getFace1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGImpactCollisionAlgorithm::getFace1() function, expected prototype:\nint btGImpactCollisionAlgorithm::getFace1()\nClass arguments details:\n");
		}


		btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGImpactCollisionAlgorithm::getFace1(). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		int lret = self->getFace1();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactCollisionAlgorithm::setPart0(int value)
	static int _bind_setPart0(lua_State *L) {
		if (!_lg_typecheck_setPart0(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCollisionAlgorithm::setPart0(int value) function, expected prototype:\nvoid btGImpactCollisionAlgorithm::setPart0(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCollisionAlgorithm::setPart0(int). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->setPart0(value);

		return 0;
	}

	// int btGImpactCollisionAlgorithm::getPart0()
	static int _bind_getPart0(lua_State *L) {
		if (!_lg_typecheck_getPart0(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGImpactCollisionAlgorithm::getPart0() function, expected prototype:\nint btGImpactCollisionAlgorithm::getPart0()\nClass arguments details:\n");
		}


		btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGImpactCollisionAlgorithm::getPart0(). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		int lret = self->getPart0();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactCollisionAlgorithm::setPart1(int value)
	static int _bind_setPart1(lua_State *L) {
		if (!_lg_typecheck_setPart1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCollisionAlgorithm::setPart1(int value) function, expected prototype:\nvoid btGImpactCollisionAlgorithm::setPart1(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCollisionAlgorithm::setPart1(int). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->setPart1(value);

		return 0;
	}

	// int btGImpactCollisionAlgorithm::getPart1()
	static int _bind_getPart1(lua_State *L) {
		if (!_lg_typecheck_getPart1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGImpactCollisionAlgorithm::getPart1() function, expected prototype:\nint btGImpactCollisionAlgorithm::getPart1()\nClass arguments details:\n");
		}


		btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGImpactCollisionAlgorithm::getPart1(). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		int lret = self->getPart1();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void btGImpactCollisionAlgorithm::registerAlgorithm(btCollisionDispatcher * dispatcher)
	static int _bind_registerAlgorithm(lua_State *L) {
		if (!_lg_typecheck_registerAlgorithm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void btGImpactCollisionAlgorithm::registerAlgorithm(btCollisionDispatcher * dispatcher) function, expected prototype:\nstatic void btGImpactCollisionAlgorithm::registerAlgorithm(btCollisionDispatcher * dispatcher)\nClass arguments details:\narg 1 ID = 71097681\n");
		}

		btCollisionDispatcher* dispatcher=(Luna< btDispatcher >::checkSubType< btCollisionDispatcher >(L,1));

		btGImpactCollisionAlgorithm::registerAlgorithm(dispatcher);

		return 0;
	}

	// void btGImpactCollisionAlgorithm::base_processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_base_processCollision(lua_State *L) {
		if (!_lg_typecheck_base_processCollision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCollisionAlgorithm::base_processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nvoid btGImpactCollisionAlgorithm::base_processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 95201256\narg 4 ID = 25324514\n");
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btGImpactCollisionAlgorithm::base_processCollision function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCollisionAlgorithm::base_processCollision(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->btGImpactCollisionAlgorithm::processCollision(body0Wrap, body1Wrap, dispatchInfo, resultOut);

		return 0;
	}

	// float btGImpactCollisionAlgorithm::base_calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_base_calculateTimeOfImpact(lua_State *L) {
		if (!_lg_typecheck_base_calculateTimeOfImpact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btGImpactCollisionAlgorithm::base_calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nfloat btGImpactCollisionAlgorithm::base_calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 95201256\narg 4 ID = 25324514\n");
		}

		btCollisionObject* body0=(Luna< btCollisionObject >::check(L,2));
		btCollisionObject* body1=(Luna< btCollisionObject >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btGImpactCollisionAlgorithm::base_calculateTimeOfImpact function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btGImpactCollisionAlgorithm::base_calculateTimeOfImpact(btCollisionObject *, btCollisionObject *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		float lret = self->btGImpactCollisionAlgorithm::calculateTimeOfImpact(body0, body1, dispatchInfo, resultOut);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactCollisionAlgorithm::base_getAllContactManifolds(btManifoldArray & manifoldArray)
	static int _bind_base_getAllContactManifolds(lua_State *L) {
		if (!_lg_typecheck_base_getAllContactManifolds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCollisionAlgorithm::base_getAllContactManifolds(btManifoldArray & manifoldArray) function, expected prototype:\nvoid btGImpactCollisionAlgorithm::base_getAllContactManifolds(btManifoldArray & manifoldArray)\nClass arguments details:\narg 1 ID = 41484542\n");
		}

		btManifoldArray* manifoldArray_ptr=(Luna< btAlignedObjectArray< btPersistentManifold * > >::checkSubType< btManifoldArray >(L,2));
		if( !manifoldArray_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg manifoldArray in btGImpactCollisionAlgorithm::base_getAllContactManifolds function");
		}
		btManifoldArray & manifoldArray=*manifoldArray_ptr;

		btGImpactCollisionAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btGImpactCollisionAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCollisionAlgorithm::base_getAllContactManifolds(btManifoldArray &). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->btGImpactCollisionAlgorithm::getAllContactManifolds(manifoldArray);

		return 0;
	}


	// Operator binds:

};

btGImpactCollisionAlgorithm* LunaTraits< btGImpactCollisionAlgorithm >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btGImpactCollisionAlgorithm::_bind_ctor(L);
}

void LunaTraits< btGImpactCollisionAlgorithm >::_bind_dtor(btGImpactCollisionAlgorithm* obj) {
	delete obj;
}

const char LunaTraits< btGImpactCollisionAlgorithm >::className[] = "btGImpactCollisionAlgorithm";
const char LunaTraits< btGImpactCollisionAlgorithm >::fullName[] = "btGImpactCollisionAlgorithm";
const char LunaTraits< btGImpactCollisionAlgorithm >::moduleName[] = "bullet";
const char* LunaTraits< btGImpactCollisionAlgorithm >::parents[] = {"bullet.btActivatingCollisionAlgorithm", 0};
const int LunaTraits< btGImpactCollisionAlgorithm >::hash = 51625178;
const int LunaTraits< btGImpactCollisionAlgorithm >::uniqueIDs[] = {17890858,0};

luna_RegType LunaTraits< btGImpactCollisionAlgorithm >::methods[] = {
	{"processCollision", &luna_wrapper_btGImpactCollisionAlgorithm::_bind_processCollision},
	{"calculateTimeOfImpact", &luna_wrapper_btGImpactCollisionAlgorithm::_bind_calculateTimeOfImpact},
	{"getAllContactManifolds", &luna_wrapper_btGImpactCollisionAlgorithm::_bind_getAllContactManifolds},
	{"gimpact_vs_gimpact", &luna_wrapper_btGImpactCollisionAlgorithm::_bind_gimpact_vs_gimpact},
	{"gimpact_vs_shape", &luna_wrapper_btGImpactCollisionAlgorithm::_bind_gimpact_vs_shape},
	{"gimpact_vs_compoundshape", &luna_wrapper_btGImpactCollisionAlgorithm::_bind_gimpact_vs_compoundshape},
	{"gimpact_vs_concave", &luna_wrapper_btGImpactCollisionAlgorithm::_bind_gimpact_vs_concave},
	{"setFace0", &luna_wrapper_btGImpactCollisionAlgorithm::_bind_setFace0},
	{"getFace0", &luna_wrapper_btGImpactCollisionAlgorithm::_bind_getFace0},
	{"setFace1", &luna_wrapper_btGImpactCollisionAlgorithm::_bind_setFace1},
	{"getFace1", &luna_wrapper_btGImpactCollisionAlgorithm::_bind_getFace1},
	{"setPart0", &luna_wrapper_btGImpactCollisionAlgorithm::_bind_setPart0},
	{"getPart0", &luna_wrapper_btGImpactCollisionAlgorithm::_bind_getPart0},
	{"setPart1", &luna_wrapper_btGImpactCollisionAlgorithm::_bind_setPart1},
	{"getPart1", &luna_wrapper_btGImpactCollisionAlgorithm::_bind_getPart1},
	{"registerAlgorithm", &luna_wrapper_btGImpactCollisionAlgorithm::_bind_registerAlgorithm},
	{"base_processCollision", &luna_wrapper_btGImpactCollisionAlgorithm::_bind_base_processCollision},
	{"base_calculateTimeOfImpact", &luna_wrapper_btGImpactCollisionAlgorithm::_bind_base_calculateTimeOfImpact},
	{"base_getAllContactManifolds", &luna_wrapper_btGImpactCollisionAlgorithm::_bind_base_getAllContactManifolds},
	{"fromVoid", &luna_wrapper_btGImpactCollisionAlgorithm::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btGImpactCollisionAlgorithm::_bind_asVoid},
	{"getTable", &luna_wrapper_btGImpactCollisionAlgorithm::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btGImpactCollisionAlgorithm >::converters[] = {
	{"btCollisionAlgorithm", &luna_wrapper_btGImpactCollisionAlgorithm::_cast_from_btCollisionAlgorithm},
	{0,0}
};

luna_RegEnumType LunaTraits< btGImpactCollisionAlgorithm >::enumValues[] = {
	{0,0}
};


