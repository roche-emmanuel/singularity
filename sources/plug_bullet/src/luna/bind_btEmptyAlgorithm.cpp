#include <plug_common.h>

#include <luna/wrappers/wrapper_btEmptyAlgorithm.h>

class luna_wrapper_btEmptyAlgorithm {
public:
	typedef Luna< btEmptyAlgorithm > luna_t;

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
		
		return self==rhs;
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

		btEmptyAlgorithm* self= (btEmptyAlgorithm*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btEmptyAlgorithm >::push(L,self,false);
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
		//btEmptyAlgorithm* ptr= dynamic_cast< btEmptyAlgorithm* >(Luna< btCollisionAlgorithm >::check(L,1));
		btEmptyAlgorithm* ptr= luna_caster< btCollisionAlgorithm, btEmptyAlgorithm >::cast(Luna< btCollisionAlgorithm >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btEmptyAlgorithm >::push(L,ptr,false);
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
	// btEmptyAlgorithm::btEmptyAlgorithm(const btCollisionAlgorithmConstructionInfo & ci)
	static btEmptyAlgorithm* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btEmptyAlgorithm::btEmptyAlgorithm(const btCollisionAlgorithmConstructionInfo & ci) function, expected prototype:\nbtEmptyAlgorithm::btEmptyAlgorithm(const btCollisionAlgorithmConstructionInfo & ci)\nClass arguments details:\narg 1 ID = 61780402\n");
		}

		const btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,1));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btEmptyAlgorithm::btEmptyAlgorithm function");
		}
		const btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;

		return new btEmptyAlgorithm(ci);
	}

	// btEmptyAlgorithm::btEmptyAlgorithm(lua_Table * data, const btCollisionAlgorithmConstructionInfo & ci)
	static btEmptyAlgorithm* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btEmptyAlgorithm::btEmptyAlgorithm(lua_Table * data, const btCollisionAlgorithmConstructionInfo & ci) function, expected prototype:\nbtEmptyAlgorithm::btEmptyAlgorithm(lua_Table * data, const btCollisionAlgorithmConstructionInfo & ci)\nClass arguments details:\narg 2 ID = 61780402\n");
		}

		const btCollisionAlgorithmConstructionInfo* ci_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2));
		if( !ci_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ci in btEmptyAlgorithm::btEmptyAlgorithm function");
		}
		const btCollisionAlgorithmConstructionInfo & ci=*ci_ptr;

		return new wrapper_btEmptyAlgorithm(L,NULL, ci);
	}

	// Overload binder for btEmptyAlgorithm::btEmptyAlgorithm
	static btEmptyAlgorithm* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btEmptyAlgorithm, cannot match any of the overloads for function btEmptyAlgorithm:\n  btEmptyAlgorithm(const btCollisionAlgorithmConstructionInfo &)\n  btEmptyAlgorithm(lua_Table *, const btCollisionAlgorithmConstructionInfo &)\n");
		return NULL;
	}


	// Function binds:
	// void btEmptyAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_processCollision(lua_State *L) {
		if (!_lg_typecheck_processCollision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btEmptyAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nvoid btEmptyAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 95201256\narg 4 ID = 25324514\n");
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btEmptyAlgorithm::processCollision function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btEmptyAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btEmptyAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btEmptyAlgorithm::processCollision(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->processCollision(body0Wrap, body1Wrap, dispatchInfo, resultOut);

		return 0;
	}

	// float btEmptyAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_calculateTimeOfImpact(lua_State *L) {
		if (!_lg_typecheck_calculateTimeOfImpact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btEmptyAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nfloat btEmptyAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 95201256\narg 4 ID = 25324514\n");
		}

		btCollisionObject* body0=(Luna< btCollisionObject >::check(L,2));
		btCollisionObject* body1=(Luna< btCollisionObject >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btEmptyAlgorithm::calculateTimeOfImpact function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btEmptyAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btEmptyAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btEmptyAlgorithm::calculateTimeOfImpact(btCollisionObject *, btCollisionObject *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		float lret = self->calculateTimeOfImpact(body0, body1, dispatchInfo, resultOut);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btEmptyAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray)
	static int _bind_getAllContactManifolds(lua_State *L) {
		if (!_lg_typecheck_getAllContactManifolds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btEmptyAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray) function, expected prototype:\nvoid btEmptyAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray)\nClass arguments details:\narg 1 ID = 41484542\n");
		}

		btManifoldArray* manifoldArray_ptr=(Luna< btAlignedObjectArray< btPersistentManifold * > >::checkSubType< btManifoldArray >(L,2));
		if( !manifoldArray_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg manifoldArray in btEmptyAlgorithm::getAllContactManifolds function");
		}
		btManifoldArray & manifoldArray=*manifoldArray_ptr;

		btEmptyAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btEmptyAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btEmptyAlgorithm::getAllContactManifolds(btManifoldArray &). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->getAllContactManifolds(manifoldArray);

		return 0;
	}

	// void btEmptyAlgorithm::base_processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_base_processCollision(lua_State *L) {
		if (!_lg_typecheck_base_processCollision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btEmptyAlgorithm::base_processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nvoid btEmptyAlgorithm::base_processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\narg 3 ID = 95201256\narg 4 ID = 25324514\n");
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btEmptyAlgorithm::base_processCollision function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btEmptyAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btEmptyAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btEmptyAlgorithm::base_processCollision(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->btEmptyAlgorithm::processCollision(body0Wrap, body1Wrap, dispatchInfo, resultOut);

		return 0;
	}

	// float btEmptyAlgorithm::base_calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	static int _bind_base_calculateTimeOfImpact(lua_State *L) {
		if (!_lg_typecheck_base_calculateTimeOfImpact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btEmptyAlgorithm::base_calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) function, expected prototype:\nfloat btEmptyAlgorithm::base_calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 95201256\narg 4 ID = 25324514\n");
		}

		btCollisionObject* body0=(Luna< btCollisionObject >::check(L,2));
		btCollisionObject* body1=(Luna< btCollisionObject >::check(L,3));
		const btDispatcherInfo* dispatchInfo_ptr=(Luna< btDispatcherInfo >::check(L,4));
		if( !dispatchInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dispatchInfo in btEmptyAlgorithm::base_calculateTimeOfImpact function");
		}
		const btDispatcherInfo & dispatchInfo=*dispatchInfo_ptr;
		btManifoldResult* resultOut=(Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,5));

		btEmptyAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btEmptyAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btEmptyAlgorithm::base_calculateTimeOfImpact(btCollisionObject *, btCollisionObject *, const btDispatcherInfo &, btManifoldResult *). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		float lret = self->btEmptyAlgorithm::calculateTimeOfImpact(body0, body1, dispatchInfo, resultOut);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btEmptyAlgorithm::base_getAllContactManifolds(btManifoldArray & manifoldArray)
	static int _bind_base_getAllContactManifolds(lua_State *L) {
		if (!_lg_typecheck_base_getAllContactManifolds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btEmptyAlgorithm::base_getAllContactManifolds(btManifoldArray & manifoldArray) function, expected prototype:\nvoid btEmptyAlgorithm::base_getAllContactManifolds(btManifoldArray & manifoldArray)\nClass arguments details:\narg 1 ID = 41484542\n");
		}

		btManifoldArray* manifoldArray_ptr=(Luna< btAlignedObjectArray< btPersistentManifold * > >::checkSubType< btManifoldArray >(L,2));
		if( !manifoldArray_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg manifoldArray in btEmptyAlgorithm::base_getAllContactManifolds function");
		}
		btManifoldArray & manifoldArray=*manifoldArray_ptr;

		btEmptyAlgorithm* self=Luna< btCollisionAlgorithm >::checkSubType< btEmptyAlgorithm >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btEmptyAlgorithm::base_getAllContactManifolds(btManifoldArray &). Got : '%s'",typeid(Luna< btCollisionAlgorithm >::check(L,1)).name());
		}
		self->btEmptyAlgorithm::getAllContactManifolds(manifoldArray);

		return 0;
	}


	// Operator binds:

};

btEmptyAlgorithm* LunaTraits< btEmptyAlgorithm >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btEmptyAlgorithm::_bind_ctor(L);
}

void LunaTraits< btEmptyAlgorithm >::_bind_dtor(btEmptyAlgorithm* obj) {
	delete obj;
}

const char LunaTraits< btEmptyAlgorithm >::className[] = "btEmptyAlgorithm";
const char LunaTraits< btEmptyAlgorithm >::fullName[] = "btEmptyAlgorithm";
const char LunaTraits< btEmptyAlgorithm >::moduleName[] = "bullet";
const char* LunaTraits< btEmptyAlgorithm >::parents[] = {"bullet.btCollisionAlgorithm", 0};
const int LunaTraits< btEmptyAlgorithm >::hash = 74380466;
const int LunaTraits< btEmptyAlgorithm >::uniqueIDs[] = {17890858,0};

luna_RegType LunaTraits< btEmptyAlgorithm >::methods[] = {
	{"processCollision", &luna_wrapper_btEmptyAlgorithm::_bind_processCollision},
	{"calculateTimeOfImpact", &luna_wrapper_btEmptyAlgorithm::_bind_calculateTimeOfImpact},
	{"getAllContactManifolds", &luna_wrapper_btEmptyAlgorithm::_bind_getAllContactManifolds},
	{"base_processCollision", &luna_wrapper_btEmptyAlgorithm::_bind_base_processCollision},
	{"base_calculateTimeOfImpact", &luna_wrapper_btEmptyAlgorithm::_bind_base_calculateTimeOfImpact},
	{"base_getAllContactManifolds", &luna_wrapper_btEmptyAlgorithm::_bind_base_getAllContactManifolds},
	{"__eq", &luna_wrapper_btEmptyAlgorithm::_bind___eq},
	{"fromVoid", &luna_wrapper_btEmptyAlgorithm::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btEmptyAlgorithm::_bind_asVoid},
	{"getTable", &luna_wrapper_btEmptyAlgorithm::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btEmptyAlgorithm >::converters[] = {
	{"btCollisionAlgorithm", &luna_wrapper_btEmptyAlgorithm::_cast_from_btCollisionAlgorithm},
	{0,0}
};

luna_RegEnumType LunaTraits< btEmptyAlgorithm >::enumValues[] = {
	{0,0}
};


