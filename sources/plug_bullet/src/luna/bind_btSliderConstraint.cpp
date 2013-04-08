#include <plug_common.h>

#include <luna/wrappers/wrapper_btSliderConstraint.h>

class luna_wrapper_btSliderConstraint {
public:
	typedef Luna< btSliderConstraint > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btTypedObject* self=(Luna< btTypedObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btTypedObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		btSliderConstraint* self= (btSliderConstraint*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btSliderConstraint >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,66271199) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btTypedObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btTypedObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btSliderConstraint* ptr= dynamic_cast< btSliderConstraint* >(Luna< btTypedObject >::check(L,1));
		btSliderConstraint* ptr= luna_caster< btTypedObject, btSliderConstraint >::cast(Luna< btTypedObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btSliderConstraint >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,4))) ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,2))) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,5))) ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,3))) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getInfo1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243935)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInfo1NonVirtual(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243935)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInfo2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243936)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInfo2NonVirtual(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243936)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		if( lua_isnumber(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRigidBodyA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRigidBodyB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCalculatedTransformA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCalculatedTransformB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrameOffsetA_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrameOffsetA_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrameOffsetB_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrameOffsetB_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLowerLinLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLowerLinLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUpperLinLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUpperLinLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLowerAngLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLowerAngLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUpperAngLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUpperAngLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUseLinearReferenceFrameA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSoftnessDirLin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRestitutionDirLin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDampingDirLin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSoftnessDirAng(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRestitutionDirAng(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDampingDirAng(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSoftnessLimLin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRestitutionLimLin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDampingLimLin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSoftnessLimAng(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRestitutionLimAng(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDampingLimAng(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSoftnessOrthoLin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRestitutionOrthoLin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDampingOrthoLin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSoftnessOrthoAng(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRestitutionOrthoAng(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDampingOrthoAng(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSoftnessDirLin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRestitutionDirLin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDampingDirLin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSoftnessDirAng(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRestitutionDirAng(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDampingDirAng(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSoftnessLimLin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRestitutionLimLin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDampingLimLin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSoftnessLimAng(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRestitutionLimAng(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDampingLimAng(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSoftnessOrthoLin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRestitutionOrthoLin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDampingOrthoLin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSoftnessOrthoAng(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRestitutionOrthoAng(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDampingOrthoAng(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPoweredLinMotor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPoweredLinMotor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTargetLinMotorVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTargetLinMotorVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaxLinMotorForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaxLinMotorForce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPoweredAngMotor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPoweredAngMotor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTargetAngMotorVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTargetAngMotorVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaxAngMotorForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaxAngMotorForce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLinearPos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAngularPos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSolveLinLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLinDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSolveAngLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAngDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_calculateTransforms(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_testLinLimits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_testAngLimits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAncorInA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAncorInB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUseFrameOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUseFrameOffset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFrames(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setParam(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParam(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_buildJacobian(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setupSolverConstraint(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36629303) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_solveConstraintObsolete(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65712094) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,65712094) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getInfo1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243935)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getInfo2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243936)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setParam(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getParam(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btSliderConstraint::btSliderConstraint(btRigidBody & rbA, btRigidBody & rbB, const btTransform & frameInA, const btTransform & frameInB, bool useLinearReferenceFrameA)
	static btSliderConstraint* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btSliderConstraint::btSliderConstraint(btRigidBody & rbA, btRigidBody & rbB, const btTransform & frameInA, const btTransform & frameInB, bool useLinearReferenceFrameA) function, expected prototype:\nbtSliderConstraint::btSliderConstraint(btRigidBody & rbA, btRigidBody & rbB, const btTransform & frameInA, const btTransform & frameInB, bool useLinearReferenceFrameA)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 13247377\narg 4 ID = 13247377\n");
		}

		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btSliderConstraint::btSliderConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		btRigidBody* rbB_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		if( !rbB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbB in btSliderConstraint::btSliderConstraint function");
		}
		btRigidBody & rbB=*rbB_ptr;
		const btTransform* frameInA_ptr=(Luna< btTransform >::check(L,3));
		if( !frameInA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameInA in btSliderConstraint::btSliderConstraint function");
		}
		const btTransform & frameInA=*frameInA_ptr;
		const btTransform* frameInB_ptr=(Luna< btTransform >::check(L,4));
		if( !frameInB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameInB in btSliderConstraint::btSliderConstraint function");
		}
		const btTransform & frameInB=*frameInB_ptr;
		bool useLinearReferenceFrameA=(bool)(lua_toboolean(L,5)==1);

		return new btSliderConstraint(rbA, rbB, frameInA, frameInB, useLinearReferenceFrameA);
	}

	// btSliderConstraint::btSliderConstraint(btRigidBody & rbB, const btTransform & frameInB, bool useLinearReferenceFrameA)
	static btSliderConstraint* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btSliderConstraint::btSliderConstraint(btRigidBody & rbB, const btTransform & frameInB, bool useLinearReferenceFrameA) function, expected prototype:\nbtSliderConstraint::btSliderConstraint(btRigidBody & rbB, const btTransform & frameInB, bool useLinearReferenceFrameA)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 13247377\n");
		}

		btRigidBody* rbB_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1));
		if( !rbB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbB in btSliderConstraint::btSliderConstraint function");
		}
		btRigidBody & rbB=*rbB_ptr;
		const btTransform* frameInB_ptr=(Luna< btTransform >::check(L,2));
		if( !frameInB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameInB in btSliderConstraint::btSliderConstraint function");
		}
		const btTransform & frameInB=*frameInB_ptr;
		bool useLinearReferenceFrameA=(bool)(lua_toboolean(L,3)==1);

		return new btSliderConstraint(rbB, frameInB, useLinearReferenceFrameA);
	}

	// btSliderConstraint::btSliderConstraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, const btTransform & frameInA, const btTransform & frameInB, bool useLinearReferenceFrameA)
	static btSliderConstraint* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btSliderConstraint::btSliderConstraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, const btTransform & frameInA, const btTransform & frameInB, bool useLinearReferenceFrameA) function, expected prototype:\nbtSliderConstraint::btSliderConstraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, const btTransform & frameInA, const btTransform & frameInB, bool useLinearReferenceFrameA)\nClass arguments details:\narg 2 ID = 85758361\narg 3 ID = 85758361\narg 4 ID = 13247377\narg 5 ID = 13247377\n");
		}

		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btSliderConstraint::btSliderConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		btRigidBody* rbB_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3));
		if( !rbB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbB in btSliderConstraint::btSliderConstraint function");
		}
		btRigidBody & rbB=*rbB_ptr;
		const btTransform* frameInA_ptr=(Luna< btTransform >::check(L,4));
		if( !frameInA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameInA in btSliderConstraint::btSliderConstraint function");
		}
		const btTransform & frameInA=*frameInA_ptr;
		const btTransform* frameInB_ptr=(Luna< btTransform >::check(L,5));
		if( !frameInB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameInB in btSliderConstraint::btSliderConstraint function");
		}
		const btTransform & frameInB=*frameInB_ptr;
		bool useLinearReferenceFrameA=(bool)(lua_toboolean(L,6)==1);

		return new wrapper_btSliderConstraint(L,NULL, rbA, rbB, frameInA, frameInB, useLinearReferenceFrameA);
	}

	// btSliderConstraint::btSliderConstraint(lua_Table * data, btRigidBody & rbB, const btTransform & frameInB, bool useLinearReferenceFrameA)
	static btSliderConstraint* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btSliderConstraint::btSliderConstraint(lua_Table * data, btRigidBody & rbB, const btTransform & frameInB, bool useLinearReferenceFrameA) function, expected prototype:\nbtSliderConstraint::btSliderConstraint(lua_Table * data, btRigidBody & rbB, const btTransform & frameInB, bool useLinearReferenceFrameA)\nClass arguments details:\narg 2 ID = 85758361\narg 3 ID = 13247377\n");
		}

		btRigidBody* rbB_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		if( !rbB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbB in btSliderConstraint::btSliderConstraint function");
		}
		btRigidBody & rbB=*rbB_ptr;
		const btTransform* frameInB_ptr=(Luna< btTransform >::check(L,3));
		if( !frameInB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameInB in btSliderConstraint::btSliderConstraint function");
		}
		const btTransform & frameInB=*frameInB_ptr;
		bool useLinearReferenceFrameA=(bool)(lua_toboolean(L,4)==1);

		return new wrapper_btSliderConstraint(L,NULL, rbB, frameInB, useLinearReferenceFrameA);
	}

	// Overload binder for btSliderConstraint::btSliderConstraint
	static btSliderConstraint* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function btSliderConstraint, cannot match any of the overloads for function btSliderConstraint:\n  btSliderConstraint(btRigidBody &, btRigidBody &, const btTransform &, const btTransform &, bool)\n  btSliderConstraint(btRigidBody &, const btTransform &, bool)\n  btSliderConstraint(lua_Table *, btRigidBody &, btRigidBody &, const btTransform &, const btTransform &, bool)\n  btSliderConstraint(lua_Table *, btRigidBody &, const btTransform &, bool)\n");
		return NULL;
	}


	// Function binds:
	// void btSliderConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info)
	static int _bind_getInfo1(lua_State *L) {
		if (!_lg_typecheck_getInfo1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info) function, expected prototype:\nvoid btSliderConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info)\nClass arguments details:\narg 1 ID = 17243935\n");
		}

		btTypedConstraint::btConstraintInfo1* info=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,2));

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo1(info);

		return 0;
	}

	// void btSliderConstraint::getInfo1NonVirtual(btTypedConstraint::btConstraintInfo1 * info)
	static int _bind_getInfo1NonVirtual(lua_State *L) {
		if (!_lg_typecheck_getInfo1NonVirtual(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::getInfo1NonVirtual(btTypedConstraint::btConstraintInfo1 * info) function, expected prototype:\nvoid btSliderConstraint::getInfo1NonVirtual(btTypedConstraint::btConstraintInfo1 * info)\nClass arguments details:\narg 1 ID = 17243935\n");
		}

		btTypedConstraint::btConstraintInfo1* info=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,2));

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::getInfo1NonVirtual(btTypedConstraint::btConstraintInfo1 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo1NonVirtual(info);

		return 0;
	}

	// void btSliderConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info)
	static int _bind_getInfo2(lua_State *L) {
		if (!_lg_typecheck_getInfo2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info) function, expected prototype:\nvoid btSliderConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info)\nClass arguments details:\narg 1 ID = 17243936\n");
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo2(info);

		return 0;
	}

	// void btSliderConstraint::getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2 * info, const btTransform & transA, const btTransform & transB, const btVector3 & linVelA, const btVector3 & linVelB, float rbAinvMass, float rbBinvMass)
	static int _bind_getInfo2NonVirtual(lua_State *L) {
		if (!_lg_typecheck_getInfo2NonVirtual(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2 * info, const btTransform & transA, const btTransform & transB, const btVector3 & linVelA, const btVector3 & linVelB, float rbAinvMass, float rbBinvMass) function, expected prototype:\nvoid btSliderConstraint::getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2 * info, const btTransform & transA, const btTransform & transB, const btVector3 & linVelA, const btVector3 & linVelB, float rbAinvMass, float rbBinvMass)\nClass arguments details:\narg 1 ID = 17243936\narg 2 ID = 13247377\narg 3 ID = 13247377\narg 4 ID = 91544891\narg 5 ID = 91544891\n");
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));
		const btTransform* transA_ptr=(Luna< btTransform >::check(L,3));
		if( !transA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transA in btSliderConstraint::getInfo2NonVirtual function");
		}
		const btTransform & transA=*transA_ptr;
		const btTransform* transB_ptr=(Luna< btTransform >::check(L,4));
		if( !transB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transB in btSliderConstraint::getInfo2NonVirtual function");
		}
		const btTransform & transB=*transB_ptr;
		const btVector3* linVelA_ptr=(Luna< btVector3 >::check(L,5));
		if( !linVelA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linVelA in btSliderConstraint::getInfo2NonVirtual function");
		}
		const btVector3 & linVelA=*linVelA_ptr;
		const btVector3* linVelB_ptr=(Luna< btVector3 >::check(L,6));
		if( !linVelB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linVelB in btSliderConstraint::getInfo2NonVirtual function");
		}
		const btVector3 & linVelB=*linVelB_ptr;
		float rbAinvMass=(float)lua_tonumber(L,7);
		float rbBinvMass=(float)lua_tonumber(L,8);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2 *, const btTransform &, const btTransform &, const btVector3 &, const btVector3 &, float, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo2NonVirtual(info, transA, transB, linVelA, linVelB, rbAinvMass, rbBinvMass);

		return 0;
	}

	// const btRigidBody & btSliderConstraint::getRigidBodyA() const
	static int _bind_getRigidBodyA(lua_State *L) {
		if (!_lg_typecheck_getRigidBodyA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btRigidBody & btSliderConstraint::getRigidBodyA() const function, expected prototype:\nconst btRigidBody & btSliderConstraint::getRigidBodyA() const\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btRigidBody & btSliderConstraint::getRigidBodyA() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btRigidBody* lret = &self->getRigidBodyA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btRigidBody >::push(L,lret,false);

		return 1;
	}

	// const btRigidBody & btSliderConstraint::getRigidBodyB() const
	static int _bind_getRigidBodyB(lua_State *L) {
		if (!_lg_typecheck_getRigidBodyB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btRigidBody & btSliderConstraint::getRigidBodyB() const function, expected prototype:\nconst btRigidBody & btSliderConstraint::getRigidBodyB() const\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btRigidBody & btSliderConstraint::getRigidBodyB() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btRigidBody* lret = &self->getRigidBodyB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btRigidBody >::push(L,lret,false);

		return 1;
	}

	// const btTransform & btSliderConstraint::getCalculatedTransformA() const
	static int _bind_getCalculatedTransformA(lua_State *L) {
		if (!_lg_typecheck_getCalculatedTransformA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTransform & btSliderConstraint::getCalculatedTransformA() const function, expected prototype:\nconst btTransform & btSliderConstraint::getCalculatedTransformA() const\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTransform & btSliderConstraint::getCalculatedTransformA() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btTransform* lret = &self->getCalculatedTransformA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// const btTransform & btSliderConstraint::getCalculatedTransformB() const
	static int _bind_getCalculatedTransformB(lua_State *L) {
		if (!_lg_typecheck_getCalculatedTransformB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTransform & btSliderConstraint::getCalculatedTransformB() const function, expected prototype:\nconst btTransform & btSliderConstraint::getCalculatedTransformB() const\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTransform & btSliderConstraint::getCalculatedTransformB() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btTransform* lret = &self->getCalculatedTransformB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// const btTransform & btSliderConstraint::getFrameOffsetA() const
	static int _bind_getFrameOffsetA_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFrameOffsetA_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTransform & btSliderConstraint::getFrameOffsetA() const function, expected prototype:\nconst btTransform & btSliderConstraint::getFrameOffsetA() const\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTransform & btSliderConstraint::getFrameOffsetA() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btTransform* lret = &self->getFrameOffsetA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// btTransform & btSliderConstraint::getFrameOffsetA()
	static int _bind_getFrameOffsetA_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFrameOffsetA_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform & btSliderConstraint::getFrameOffsetA() function, expected prototype:\nbtTransform & btSliderConstraint::getFrameOffsetA()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform & btSliderConstraint::getFrameOffsetA(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btTransform* lret = &self->getFrameOffsetA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btSliderConstraint::getFrameOffsetA
	static int _bind_getFrameOffsetA(lua_State *L) {
		if (_lg_typecheck_getFrameOffsetA_overload_1(L)) return _bind_getFrameOffsetA_overload_1(L);
		if (_lg_typecheck_getFrameOffsetA_overload_2(L)) return _bind_getFrameOffsetA_overload_2(L);

		luaL_error(L, "error in function getFrameOffsetA, cannot match any of the overloads for function getFrameOffsetA:\n  getFrameOffsetA()\n  getFrameOffsetA()\n");
		return 0;
	}

	// const btTransform & btSliderConstraint::getFrameOffsetB() const
	static int _bind_getFrameOffsetB_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFrameOffsetB_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTransform & btSliderConstraint::getFrameOffsetB() const function, expected prototype:\nconst btTransform & btSliderConstraint::getFrameOffsetB() const\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTransform & btSliderConstraint::getFrameOffsetB() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btTransform* lret = &self->getFrameOffsetB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// btTransform & btSliderConstraint::getFrameOffsetB()
	static int _bind_getFrameOffsetB_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFrameOffsetB_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform & btSliderConstraint::getFrameOffsetB() function, expected prototype:\nbtTransform & btSliderConstraint::getFrameOffsetB()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform & btSliderConstraint::getFrameOffsetB(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btTransform* lret = &self->getFrameOffsetB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btSliderConstraint::getFrameOffsetB
	static int _bind_getFrameOffsetB(lua_State *L) {
		if (_lg_typecheck_getFrameOffsetB_overload_1(L)) return _bind_getFrameOffsetB_overload_1(L);
		if (_lg_typecheck_getFrameOffsetB_overload_2(L)) return _bind_getFrameOffsetB_overload_2(L);

		luaL_error(L, "error in function getFrameOffsetB, cannot match any of the overloads for function getFrameOffsetB:\n  getFrameOffsetB()\n  getFrameOffsetB()\n");
		return 0;
	}

	// float btSliderConstraint::getLowerLinLimit()
	static int _bind_getLowerLinLimit(lua_State *L) {
		if (!_lg_typecheck_getLowerLinLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getLowerLinLimit() function, expected prototype:\nfloat btSliderConstraint::getLowerLinLimit()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getLowerLinLimit(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getLowerLinLimit();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSliderConstraint::setLowerLinLimit(float lowerLimit)
	static int _bind_setLowerLinLimit(lua_State *L) {
		if (!_lg_typecheck_setLowerLinLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setLowerLinLimit(float lowerLimit) function, expected prototype:\nvoid btSliderConstraint::setLowerLinLimit(float lowerLimit)\nClass arguments details:\n");
		}

		float lowerLimit=(float)lua_tonumber(L,2);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setLowerLinLimit(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setLowerLinLimit(lowerLimit);

		return 0;
	}

	// float btSliderConstraint::getUpperLinLimit()
	static int _bind_getUpperLinLimit(lua_State *L) {
		if (!_lg_typecheck_getUpperLinLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getUpperLinLimit() function, expected prototype:\nfloat btSliderConstraint::getUpperLinLimit()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getUpperLinLimit(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getUpperLinLimit();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSliderConstraint::setUpperLinLimit(float upperLimit)
	static int _bind_setUpperLinLimit(lua_State *L) {
		if (!_lg_typecheck_setUpperLinLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setUpperLinLimit(float upperLimit) function, expected prototype:\nvoid btSliderConstraint::setUpperLinLimit(float upperLimit)\nClass arguments details:\n");
		}

		float upperLimit=(float)lua_tonumber(L,2);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setUpperLinLimit(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setUpperLinLimit(upperLimit);

		return 0;
	}

	// float btSliderConstraint::getLowerAngLimit()
	static int _bind_getLowerAngLimit(lua_State *L) {
		if (!_lg_typecheck_getLowerAngLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getLowerAngLimit() function, expected prototype:\nfloat btSliderConstraint::getLowerAngLimit()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getLowerAngLimit(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getLowerAngLimit();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSliderConstraint::setLowerAngLimit(float lowerLimit)
	static int _bind_setLowerAngLimit(lua_State *L) {
		if (!_lg_typecheck_setLowerAngLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setLowerAngLimit(float lowerLimit) function, expected prototype:\nvoid btSliderConstraint::setLowerAngLimit(float lowerLimit)\nClass arguments details:\n");
		}

		float lowerLimit=(float)lua_tonumber(L,2);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setLowerAngLimit(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setLowerAngLimit(lowerLimit);

		return 0;
	}

	// float btSliderConstraint::getUpperAngLimit()
	static int _bind_getUpperAngLimit(lua_State *L) {
		if (!_lg_typecheck_getUpperAngLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getUpperAngLimit() function, expected prototype:\nfloat btSliderConstraint::getUpperAngLimit()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getUpperAngLimit(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getUpperAngLimit();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSliderConstraint::setUpperAngLimit(float upperLimit)
	static int _bind_setUpperAngLimit(lua_State *L) {
		if (!_lg_typecheck_setUpperAngLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setUpperAngLimit(float upperLimit) function, expected prototype:\nvoid btSliderConstraint::setUpperAngLimit(float upperLimit)\nClass arguments details:\n");
		}

		float upperLimit=(float)lua_tonumber(L,2);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setUpperAngLimit(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setUpperAngLimit(upperLimit);

		return 0;
	}

	// bool btSliderConstraint::getUseLinearReferenceFrameA()
	static int _bind_getUseLinearReferenceFrameA(lua_State *L) {
		if (!_lg_typecheck_getUseLinearReferenceFrameA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btSliderConstraint::getUseLinearReferenceFrameA() function, expected prototype:\nbool btSliderConstraint::getUseLinearReferenceFrameA()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btSliderConstraint::getUseLinearReferenceFrameA(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		bool lret = self->getUseLinearReferenceFrameA();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float btSliderConstraint::getSoftnessDirLin()
	static int _bind_getSoftnessDirLin(lua_State *L) {
		if (!_lg_typecheck_getSoftnessDirLin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getSoftnessDirLin() function, expected prototype:\nfloat btSliderConstraint::getSoftnessDirLin()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getSoftnessDirLin(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getSoftnessDirLin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSliderConstraint::getRestitutionDirLin()
	static int _bind_getRestitutionDirLin(lua_State *L) {
		if (!_lg_typecheck_getRestitutionDirLin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getRestitutionDirLin() function, expected prototype:\nfloat btSliderConstraint::getRestitutionDirLin()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getRestitutionDirLin(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getRestitutionDirLin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSliderConstraint::getDampingDirLin()
	static int _bind_getDampingDirLin(lua_State *L) {
		if (!_lg_typecheck_getDampingDirLin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getDampingDirLin() function, expected prototype:\nfloat btSliderConstraint::getDampingDirLin()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getDampingDirLin(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getDampingDirLin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSliderConstraint::getSoftnessDirAng()
	static int _bind_getSoftnessDirAng(lua_State *L) {
		if (!_lg_typecheck_getSoftnessDirAng(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getSoftnessDirAng() function, expected prototype:\nfloat btSliderConstraint::getSoftnessDirAng()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getSoftnessDirAng(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getSoftnessDirAng();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSliderConstraint::getRestitutionDirAng()
	static int _bind_getRestitutionDirAng(lua_State *L) {
		if (!_lg_typecheck_getRestitutionDirAng(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getRestitutionDirAng() function, expected prototype:\nfloat btSliderConstraint::getRestitutionDirAng()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getRestitutionDirAng(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getRestitutionDirAng();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSliderConstraint::getDampingDirAng()
	static int _bind_getDampingDirAng(lua_State *L) {
		if (!_lg_typecheck_getDampingDirAng(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getDampingDirAng() function, expected prototype:\nfloat btSliderConstraint::getDampingDirAng()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getDampingDirAng(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getDampingDirAng();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSliderConstraint::getSoftnessLimLin()
	static int _bind_getSoftnessLimLin(lua_State *L) {
		if (!_lg_typecheck_getSoftnessLimLin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getSoftnessLimLin() function, expected prototype:\nfloat btSliderConstraint::getSoftnessLimLin()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getSoftnessLimLin(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getSoftnessLimLin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSliderConstraint::getRestitutionLimLin()
	static int _bind_getRestitutionLimLin(lua_State *L) {
		if (!_lg_typecheck_getRestitutionLimLin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getRestitutionLimLin() function, expected prototype:\nfloat btSliderConstraint::getRestitutionLimLin()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getRestitutionLimLin(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getRestitutionLimLin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSliderConstraint::getDampingLimLin()
	static int _bind_getDampingLimLin(lua_State *L) {
		if (!_lg_typecheck_getDampingLimLin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getDampingLimLin() function, expected prototype:\nfloat btSliderConstraint::getDampingLimLin()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getDampingLimLin(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getDampingLimLin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSliderConstraint::getSoftnessLimAng()
	static int _bind_getSoftnessLimAng(lua_State *L) {
		if (!_lg_typecheck_getSoftnessLimAng(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getSoftnessLimAng() function, expected prototype:\nfloat btSliderConstraint::getSoftnessLimAng()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getSoftnessLimAng(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getSoftnessLimAng();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSliderConstraint::getRestitutionLimAng()
	static int _bind_getRestitutionLimAng(lua_State *L) {
		if (!_lg_typecheck_getRestitutionLimAng(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getRestitutionLimAng() function, expected prototype:\nfloat btSliderConstraint::getRestitutionLimAng()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getRestitutionLimAng(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getRestitutionLimAng();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSliderConstraint::getDampingLimAng()
	static int _bind_getDampingLimAng(lua_State *L) {
		if (!_lg_typecheck_getDampingLimAng(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getDampingLimAng() function, expected prototype:\nfloat btSliderConstraint::getDampingLimAng()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getDampingLimAng(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getDampingLimAng();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSliderConstraint::getSoftnessOrthoLin()
	static int _bind_getSoftnessOrthoLin(lua_State *L) {
		if (!_lg_typecheck_getSoftnessOrthoLin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getSoftnessOrthoLin() function, expected prototype:\nfloat btSliderConstraint::getSoftnessOrthoLin()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getSoftnessOrthoLin(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getSoftnessOrthoLin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSliderConstraint::getRestitutionOrthoLin()
	static int _bind_getRestitutionOrthoLin(lua_State *L) {
		if (!_lg_typecheck_getRestitutionOrthoLin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getRestitutionOrthoLin() function, expected prototype:\nfloat btSliderConstraint::getRestitutionOrthoLin()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getRestitutionOrthoLin(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getRestitutionOrthoLin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSliderConstraint::getDampingOrthoLin()
	static int _bind_getDampingOrthoLin(lua_State *L) {
		if (!_lg_typecheck_getDampingOrthoLin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getDampingOrthoLin() function, expected prototype:\nfloat btSliderConstraint::getDampingOrthoLin()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getDampingOrthoLin(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getDampingOrthoLin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSliderConstraint::getSoftnessOrthoAng()
	static int _bind_getSoftnessOrthoAng(lua_State *L) {
		if (!_lg_typecheck_getSoftnessOrthoAng(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getSoftnessOrthoAng() function, expected prototype:\nfloat btSliderConstraint::getSoftnessOrthoAng()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getSoftnessOrthoAng(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getSoftnessOrthoAng();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSliderConstraint::getRestitutionOrthoAng()
	static int _bind_getRestitutionOrthoAng(lua_State *L) {
		if (!_lg_typecheck_getRestitutionOrthoAng(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getRestitutionOrthoAng() function, expected prototype:\nfloat btSliderConstraint::getRestitutionOrthoAng()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getRestitutionOrthoAng(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getRestitutionOrthoAng();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSliderConstraint::getDampingOrthoAng()
	static int _bind_getDampingOrthoAng(lua_State *L) {
		if (!_lg_typecheck_getDampingOrthoAng(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getDampingOrthoAng() function, expected prototype:\nfloat btSliderConstraint::getDampingOrthoAng()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getDampingOrthoAng(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getDampingOrthoAng();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSliderConstraint::setSoftnessDirLin(float softnessDirLin)
	static int _bind_setSoftnessDirLin(lua_State *L) {
		if (!_lg_typecheck_setSoftnessDirLin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setSoftnessDirLin(float softnessDirLin) function, expected prototype:\nvoid btSliderConstraint::setSoftnessDirLin(float softnessDirLin)\nClass arguments details:\n");
		}

		float softnessDirLin=(float)lua_tonumber(L,2);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setSoftnessDirLin(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setSoftnessDirLin(softnessDirLin);

		return 0;
	}

	// void btSliderConstraint::setRestitutionDirLin(float restitutionDirLin)
	static int _bind_setRestitutionDirLin(lua_State *L) {
		if (!_lg_typecheck_setRestitutionDirLin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setRestitutionDirLin(float restitutionDirLin) function, expected prototype:\nvoid btSliderConstraint::setRestitutionDirLin(float restitutionDirLin)\nClass arguments details:\n");
		}

		float restitutionDirLin=(float)lua_tonumber(L,2);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setRestitutionDirLin(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setRestitutionDirLin(restitutionDirLin);

		return 0;
	}

	// void btSliderConstraint::setDampingDirLin(float dampingDirLin)
	static int _bind_setDampingDirLin(lua_State *L) {
		if (!_lg_typecheck_setDampingDirLin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setDampingDirLin(float dampingDirLin) function, expected prototype:\nvoid btSliderConstraint::setDampingDirLin(float dampingDirLin)\nClass arguments details:\n");
		}

		float dampingDirLin=(float)lua_tonumber(L,2);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setDampingDirLin(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setDampingDirLin(dampingDirLin);

		return 0;
	}

	// void btSliderConstraint::setSoftnessDirAng(float softnessDirAng)
	static int _bind_setSoftnessDirAng(lua_State *L) {
		if (!_lg_typecheck_setSoftnessDirAng(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setSoftnessDirAng(float softnessDirAng) function, expected prototype:\nvoid btSliderConstraint::setSoftnessDirAng(float softnessDirAng)\nClass arguments details:\n");
		}

		float softnessDirAng=(float)lua_tonumber(L,2);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setSoftnessDirAng(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setSoftnessDirAng(softnessDirAng);

		return 0;
	}

	// void btSliderConstraint::setRestitutionDirAng(float restitutionDirAng)
	static int _bind_setRestitutionDirAng(lua_State *L) {
		if (!_lg_typecheck_setRestitutionDirAng(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setRestitutionDirAng(float restitutionDirAng) function, expected prototype:\nvoid btSliderConstraint::setRestitutionDirAng(float restitutionDirAng)\nClass arguments details:\n");
		}

		float restitutionDirAng=(float)lua_tonumber(L,2);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setRestitutionDirAng(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setRestitutionDirAng(restitutionDirAng);

		return 0;
	}

	// void btSliderConstraint::setDampingDirAng(float dampingDirAng)
	static int _bind_setDampingDirAng(lua_State *L) {
		if (!_lg_typecheck_setDampingDirAng(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setDampingDirAng(float dampingDirAng) function, expected prototype:\nvoid btSliderConstraint::setDampingDirAng(float dampingDirAng)\nClass arguments details:\n");
		}

		float dampingDirAng=(float)lua_tonumber(L,2);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setDampingDirAng(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setDampingDirAng(dampingDirAng);

		return 0;
	}

	// void btSliderConstraint::setSoftnessLimLin(float softnessLimLin)
	static int _bind_setSoftnessLimLin(lua_State *L) {
		if (!_lg_typecheck_setSoftnessLimLin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setSoftnessLimLin(float softnessLimLin) function, expected prototype:\nvoid btSliderConstraint::setSoftnessLimLin(float softnessLimLin)\nClass arguments details:\n");
		}

		float softnessLimLin=(float)lua_tonumber(L,2);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setSoftnessLimLin(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setSoftnessLimLin(softnessLimLin);

		return 0;
	}

	// void btSliderConstraint::setRestitutionLimLin(float restitutionLimLin)
	static int _bind_setRestitutionLimLin(lua_State *L) {
		if (!_lg_typecheck_setRestitutionLimLin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setRestitutionLimLin(float restitutionLimLin) function, expected prototype:\nvoid btSliderConstraint::setRestitutionLimLin(float restitutionLimLin)\nClass arguments details:\n");
		}

		float restitutionLimLin=(float)lua_tonumber(L,2);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setRestitutionLimLin(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setRestitutionLimLin(restitutionLimLin);

		return 0;
	}

	// void btSliderConstraint::setDampingLimLin(float dampingLimLin)
	static int _bind_setDampingLimLin(lua_State *L) {
		if (!_lg_typecheck_setDampingLimLin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setDampingLimLin(float dampingLimLin) function, expected prototype:\nvoid btSliderConstraint::setDampingLimLin(float dampingLimLin)\nClass arguments details:\n");
		}

		float dampingLimLin=(float)lua_tonumber(L,2);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setDampingLimLin(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setDampingLimLin(dampingLimLin);

		return 0;
	}

	// void btSliderConstraint::setSoftnessLimAng(float softnessLimAng)
	static int _bind_setSoftnessLimAng(lua_State *L) {
		if (!_lg_typecheck_setSoftnessLimAng(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setSoftnessLimAng(float softnessLimAng) function, expected prototype:\nvoid btSliderConstraint::setSoftnessLimAng(float softnessLimAng)\nClass arguments details:\n");
		}

		float softnessLimAng=(float)lua_tonumber(L,2);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setSoftnessLimAng(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setSoftnessLimAng(softnessLimAng);

		return 0;
	}

	// void btSliderConstraint::setRestitutionLimAng(float restitutionLimAng)
	static int _bind_setRestitutionLimAng(lua_State *L) {
		if (!_lg_typecheck_setRestitutionLimAng(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setRestitutionLimAng(float restitutionLimAng) function, expected prototype:\nvoid btSliderConstraint::setRestitutionLimAng(float restitutionLimAng)\nClass arguments details:\n");
		}

		float restitutionLimAng=(float)lua_tonumber(L,2);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setRestitutionLimAng(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setRestitutionLimAng(restitutionLimAng);

		return 0;
	}

	// void btSliderConstraint::setDampingLimAng(float dampingLimAng)
	static int _bind_setDampingLimAng(lua_State *L) {
		if (!_lg_typecheck_setDampingLimAng(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setDampingLimAng(float dampingLimAng) function, expected prototype:\nvoid btSliderConstraint::setDampingLimAng(float dampingLimAng)\nClass arguments details:\n");
		}

		float dampingLimAng=(float)lua_tonumber(L,2);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setDampingLimAng(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setDampingLimAng(dampingLimAng);

		return 0;
	}

	// void btSliderConstraint::setSoftnessOrthoLin(float softnessOrthoLin)
	static int _bind_setSoftnessOrthoLin(lua_State *L) {
		if (!_lg_typecheck_setSoftnessOrthoLin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setSoftnessOrthoLin(float softnessOrthoLin) function, expected prototype:\nvoid btSliderConstraint::setSoftnessOrthoLin(float softnessOrthoLin)\nClass arguments details:\n");
		}

		float softnessOrthoLin=(float)lua_tonumber(L,2);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setSoftnessOrthoLin(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setSoftnessOrthoLin(softnessOrthoLin);

		return 0;
	}

	// void btSliderConstraint::setRestitutionOrthoLin(float restitutionOrthoLin)
	static int _bind_setRestitutionOrthoLin(lua_State *L) {
		if (!_lg_typecheck_setRestitutionOrthoLin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setRestitutionOrthoLin(float restitutionOrthoLin) function, expected prototype:\nvoid btSliderConstraint::setRestitutionOrthoLin(float restitutionOrthoLin)\nClass arguments details:\n");
		}

		float restitutionOrthoLin=(float)lua_tonumber(L,2);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setRestitutionOrthoLin(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setRestitutionOrthoLin(restitutionOrthoLin);

		return 0;
	}

	// void btSliderConstraint::setDampingOrthoLin(float dampingOrthoLin)
	static int _bind_setDampingOrthoLin(lua_State *L) {
		if (!_lg_typecheck_setDampingOrthoLin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setDampingOrthoLin(float dampingOrthoLin) function, expected prototype:\nvoid btSliderConstraint::setDampingOrthoLin(float dampingOrthoLin)\nClass arguments details:\n");
		}

		float dampingOrthoLin=(float)lua_tonumber(L,2);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setDampingOrthoLin(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setDampingOrthoLin(dampingOrthoLin);

		return 0;
	}

	// void btSliderConstraint::setSoftnessOrthoAng(float softnessOrthoAng)
	static int _bind_setSoftnessOrthoAng(lua_State *L) {
		if (!_lg_typecheck_setSoftnessOrthoAng(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setSoftnessOrthoAng(float softnessOrthoAng) function, expected prototype:\nvoid btSliderConstraint::setSoftnessOrthoAng(float softnessOrthoAng)\nClass arguments details:\n");
		}

		float softnessOrthoAng=(float)lua_tonumber(L,2);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setSoftnessOrthoAng(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setSoftnessOrthoAng(softnessOrthoAng);

		return 0;
	}

	// void btSliderConstraint::setRestitutionOrthoAng(float restitutionOrthoAng)
	static int _bind_setRestitutionOrthoAng(lua_State *L) {
		if (!_lg_typecheck_setRestitutionOrthoAng(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setRestitutionOrthoAng(float restitutionOrthoAng) function, expected prototype:\nvoid btSliderConstraint::setRestitutionOrthoAng(float restitutionOrthoAng)\nClass arguments details:\n");
		}

		float restitutionOrthoAng=(float)lua_tonumber(L,2);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setRestitutionOrthoAng(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setRestitutionOrthoAng(restitutionOrthoAng);

		return 0;
	}

	// void btSliderConstraint::setDampingOrthoAng(float dampingOrthoAng)
	static int _bind_setDampingOrthoAng(lua_State *L) {
		if (!_lg_typecheck_setDampingOrthoAng(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setDampingOrthoAng(float dampingOrthoAng) function, expected prototype:\nvoid btSliderConstraint::setDampingOrthoAng(float dampingOrthoAng)\nClass arguments details:\n");
		}

		float dampingOrthoAng=(float)lua_tonumber(L,2);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setDampingOrthoAng(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setDampingOrthoAng(dampingOrthoAng);

		return 0;
	}

	// void btSliderConstraint::setPoweredLinMotor(bool onOff)
	static int _bind_setPoweredLinMotor(lua_State *L) {
		if (!_lg_typecheck_setPoweredLinMotor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setPoweredLinMotor(bool onOff) function, expected prototype:\nvoid btSliderConstraint::setPoweredLinMotor(bool onOff)\nClass arguments details:\n");
		}

		bool onOff=(bool)(lua_toboolean(L,2)==1);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setPoweredLinMotor(bool). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setPoweredLinMotor(onOff);

		return 0;
	}

	// bool btSliderConstraint::getPoweredLinMotor()
	static int _bind_getPoweredLinMotor(lua_State *L) {
		if (!_lg_typecheck_getPoweredLinMotor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btSliderConstraint::getPoweredLinMotor() function, expected prototype:\nbool btSliderConstraint::getPoweredLinMotor()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btSliderConstraint::getPoweredLinMotor(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		bool lret = self->getPoweredLinMotor();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btSliderConstraint::setTargetLinMotorVelocity(float targetLinMotorVelocity)
	static int _bind_setTargetLinMotorVelocity(lua_State *L) {
		if (!_lg_typecheck_setTargetLinMotorVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setTargetLinMotorVelocity(float targetLinMotorVelocity) function, expected prototype:\nvoid btSliderConstraint::setTargetLinMotorVelocity(float targetLinMotorVelocity)\nClass arguments details:\n");
		}

		float targetLinMotorVelocity=(float)lua_tonumber(L,2);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setTargetLinMotorVelocity(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setTargetLinMotorVelocity(targetLinMotorVelocity);

		return 0;
	}

	// float btSliderConstraint::getTargetLinMotorVelocity()
	static int _bind_getTargetLinMotorVelocity(lua_State *L) {
		if (!_lg_typecheck_getTargetLinMotorVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getTargetLinMotorVelocity() function, expected prototype:\nfloat btSliderConstraint::getTargetLinMotorVelocity()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getTargetLinMotorVelocity(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getTargetLinMotorVelocity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSliderConstraint::setMaxLinMotorForce(float maxLinMotorForce)
	static int _bind_setMaxLinMotorForce(lua_State *L) {
		if (!_lg_typecheck_setMaxLinMotorForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setMaxLinMotorForce(float maxLinMotorForce) function, expected prototype:\nvoid btSliderConstraint::setMaxLinMotorForce(float maxLinMotorForce)\nClass arguments details:\n");
		}

		float maxLinMotorForce=(float)lua_tonumber(L,2);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setMaxLinMotorForce(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setMaxLinMotorForce(maxLinMotorForce);

		return 0;
	}

	// float btSliderConstraint::getMaxLinMotorForce()
	static int _bind_getMaxLinMotorForce(lua_State *L) {
		if (!_lg_typecheck_getMaxLinMotorForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getMaxLinMotorForce() function, expected prototype:\nfloat btSliderConstraint::getMaxLinMotorForce()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getMaxLinMotorForce(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getMaxLinMotorForce();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSliderConstraint::setPoweredAngMotor(bool onOff)
	static int _bind_setPoweredAngMotor(lua_State *L) {
		if (!_lg_typecheck_setPoweredAngMotor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setPoweredAngMotor(bool onOff) function, expected prototype:\nvoid btSliderConstraint::setPoweredAngMotor(bool onOff)\nClass arguments details:\n");
		}

		bool onOff=(bool)(lua_toboolean(L,2)==1);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setPoweredAngMotor(bool). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setPoweredAngMotor(onOff);

		return 0;
	}

	// bool btSliderConstraint::getPoweredAngMotor()
	static int _bind_getPoweredAngMotor(lua_State *L) {
		if (!_lg_typecheck_getPoweredAngMotor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btSliderConstraint::getPoweredAngMotor() function, expected prototype:\nbool btSliderConstraint::getPoweredAngMotor()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btSliderConstraint::getPoweredAngMotor(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		bool lret = self->getPoweredAngMotor();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btSliderConstraint::setTargetAngMotorVelocity(float targetAngMotorVelocity)
	static int _bind_setTargetAngMotorVelocity(lua_State *L) {
		if (!_lg_typecheck_setTargetAngMotorVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setTargetAngMotorVelocity(float targetAngMotorVelocity) function, expected prototype:\nvoid btSliderConstraint::setTargetAngMotorVelocity(float targetAngMotorVelocity)\nClass arguments details:\n");
		}

		float targetAngMotorVelocity=(float)lua_tonumber(L,2);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setTargetAngMotorVelocity(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setTargetAngMotorVelocity(targetAngMotorVelocity);

		return 0;
	}

	// float btSliderConstraint::getTargetAngMotorVelocity()
	static int _bind_getTargetAngMotorVelocity(lua_State *L) {
		if (!_lg_typecheck_getTargetAngMotorVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getTargetAngMotorVelocity() function, expected prototype:\nfloat btSliderConstraint::getTargetAngMotorVelocity()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getTargetAngMotorVelocity(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getTargetAngMotorVelocity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSliderConstraint::setMaxAngMotorForce(float maxAngMotorForce)
	static int _bind_setMaxAngMotorForce(lua_State *L) {
		if (!_lg_typecheck_setMaxAngMotorForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setMaxAngMotorForce(float maxAngMotorForce) function, expected prototype:\nvoid btSliderConstraint::setMaxAngMotorForce(float maxAngMotorForce)\nClass arguments details:\n");
		}

		float maxAngMotorForce=(float)lua_tonumber(L,2);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setMaxAngMotorForce(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setMaxAngMotorForce(maxAngMotorForce);

		return 0;
	}

	// float btSliderConstraint::getMaxAngMotorForce()
	static int _bind_getMaxAngMotorForce(lua_State *L) {
		if (!_lg_typecheck_getMaxAngMotorForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getMaxAngMotorForce() function, expected prototype:\nfloat btSliderConstraint::getMaxAngMotorForce()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getMaxAngMotorForce(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getMaxAngMotorForce();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSliderConstraint::getLinearPos() const
	static int _bind_getLinearPos(lua_State *L) {
		if (!_lg_typecheck_getLinearPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getLinearPos() const function, expected prototype:\nfloat btSliderConstraint::getLinearPos() const\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getLinearPos() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getLinearPos();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btSliderConstraint::getAngularPos() const
	static int _bind_getAngularPos(lua_State *L) {
		if (!_lg_typecheck_getAngularPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getAngularPos() const function, expected prototype:\nfloat btSliderConstraint::getAngularPos() const\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getAngularPos() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getAngularPos();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btSliderConstraint::getSolveLinLimit()
	static int _bind_getSolveLinLimit(lua_State *L) {
		if (!_lg_typecheck_getSolveLinLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btSliderConstraint::getSolveLinLimit() function, expected prototype:\nbool btSliderConstraint::getSolveLinLimit()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btSliderConstraint::getSolveLinLimit(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		bool lret = self->getSolveLinLimit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float btSliderConstraint::getLinDepth()
	static int _bind_getLinDepth(lua_State *L) {
		if (!_lg_typecheck_getLinDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getLinDepth() function, expected prototype:\nfloat btSliderConstraint::getLinDepth()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getLinDepth(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getLinDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btSliderConstraint::getSolveAngLimit()
	static int _bind_getSolveAngLimit(lua_State *L) {
		if (!_lg_typecheck_getSolveAngLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btSliderConstraint::getSolveAngLimit() function, expected prototype:\nbool btSliderConstraint::getSolveAngLimit()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btSliderConstraint::getSolveAngLimit(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		bool lret = self->getSolveAngLimit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float btSliderConstraint::getAngDepth()
	static int _bind_getAngDepth(lua_State *L) {
		if (!_lg_typecheck_getAngDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getAngDepth() function, expected prototype:\nfloat btSliderConstraint::getAngDepth()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getAngDepth(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getAngDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSliderConstraint::calculateTransforms(const btTransform & transA, const btTransform & transB)
	static int _bind_calculateTransforms(lua_State *L) {
		if (!_lg_typecheck_calculateTransforms(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::calculateTransforms(const btTransform & transA, const btTransform & transB) function, expected prototype:\nvoid btSliderConstraint::calculateTransforms(const btTransform & transA, const btTransform & transB)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 13247377\n");
		}

		const btTransform* transA_ptr=(Luna< btTransform >::check(L,2));
		if( !transA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transA in btSliderConstraint::calculateTransforms function");
		}
		const btTransform & transA=*transA_ptr;
		const btTransform* transB_ptr=(Luna< btTransform >::check(L,3));
		if( !transB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transB in btSliderConstraint::calculateTransforms function");
		}
		const btTransform & transB=*transB_ptr;

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::calculateTransforms(const btTransform &, const btTransform &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->calculateTransforms(transA, transB);

		return 0;
	}

	// void btSliderConstraint::testLinLimits()
	static int _bind_testLinLimits(lua_State *L) {
		if (!_lg_typecheck_testLinLimits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::testLinLimits() function, expected prototype:\nvoid btSliderConstraint::testLinLimits()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::testLinLimits(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->testLinLimits();

		return 0;
	}

	// void btSliderConstraint::testAngLimits()
	static int _bind_testAngLimits(lua_State *L) {
		if (!_lg_typecheck_testAngLimits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::testAngLimits() function, expected prototype:\nvoid btSliderConstraint::testAngLimits()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::testAngLimits(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->testAngLimits();

		return 0;
	}

	// btVector3 btSliderConstraint::getAncorInA()
	static int _bind_getAncorInA(lua_State *L) {
		if (!_lg_typecheck_getAncorInA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btSliderConstraint::getAncorInA() function, expected prototype:\nbtVector3 btSliderConstraint::getAncorInA()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btSliderConstraint::getAncorInA(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		btVector3 stack_lret = self->getAncorInA();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btVector3 btSliderConstraint::getAncorInB()
	static int _bind_getAncorInB(lua_State *L) {
		if (!_lg_typecheck_getAncorInB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btSliderConstraint::getAncorInB() function, expected prototype:\nbtVector3 btSliderConstraint::getAncorInB()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btSliderConstraint::getAncorInB(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		btVector3 stack_lret = self->getAncorInB();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// bool btSliderConstraint::getUseFrameOffset()
	static int _bind_getUseFrameOffset(lua_State *L) {
		if (!_lg_typecheck_getUseFrameOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btSliderConstraint::getUseFrameOffset() function, expected prototype:\nbool btSliderConstraint::getUseFrameOffset()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btSliderConstraint::getUseFrameOffset(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		bool lret = self->getUseFrameOffset();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btSliderConstraint::setUseFrameOffset(bool frameOffsetOnOff)
	static int _bind_setUseFrameOffset(lua_State *L) {
		if (!_lg_typecheck_setUseFrameOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setUseFrameOffset(bool frameOffsetOnOff) function, expected prototype:\nvoid btSliderConstraint::setUseFrameOffset(bool frameOffsetOnOff)\nClass arguments details:\n");
		}

		bool frameOffsetOnOff=(bool)(lua_toboolean(L,2)==1);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setUseFrameOffset(bool). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setUseFrameOffset(frameOffsetOnOff);

		return 0;
	}

	// void btSliderConstraint::setFrames(const btTransform & frameA, const btTransform & frameB)
	static int _bind_setFrames(lua_State *L) {
		if (!_lg_typecheck_setFrames(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setFrames(const btTransform & frameA, const btTransform & frameB) function, expected prototype:\nvoid btSliderConstraint::setFrames(const btTransform & frameA, const btTransform & frameB)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 13247377\n");
		}

		const btTransform* frameA_ptr=(Luna< btTransform >::check(L,2));
		if( !frameA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameA in btSliderConstraint::setFrames function");
		}
		const btTransform & frameA=*frameA_ptr;
		const btTransform* frameB_ptr=(Luna< btTransform >::check(L,3));
		if( !frameB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameB in btSliderConstraint::setFrames function");
		}
		const btTransform & frameB=*frameB_ptr;

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setFrames(const btTransform &, const btTransform &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setFrames(frameA, frameB);

		return 0;
	}

	// void btSliderConstraint::setParam(int num, float value, int axis = -1)
	static int _bind_setParam(lua_State *L) {
		if (!_lg_typecheck_setParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::setParam(int num, float value, int axis = -1) function, expected prototype:\nvoid btSliderConstraint::setParam(int num, float value, int axis = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		float value=(float)lua_tonumber(L,3);
		int axis=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::setParam(int, float, int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setParam(num, value, axis);

		return 0;
	}

	// float btSliderConstraint::getParam(int num, int axis = -1) const
	static int _bind_getParam(lua_State *L) {
		if (!_lg_typecheck_getParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::getParam(int num, int axis = -1) const function, expected prototype:\nfloat btSliderConstraint::getParam(int num, int axis = -1) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		int axis=luatop>2 ? (int)lua_tointeger(L,3) : (int)-1;

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::getParam(int, int) const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getParam(num, axis);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btSliderConstraint::calculateSerializeBufferSize() const
	static int _bind_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btSliderConstraint::calculateSerializeBufferSize() const function, expected prototype:\nint btSliderConstraint::calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btSliderConstraint::calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSliderConstraint::base_buildJacobian()
	static int _bind_base_buildJacobian(lua_State *L) {
		if (!_lg_typecheck_base_buildJacobian(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::base_buildJacobian() function, expected prototype:\nvoid btSliderConstraint::base_buildJacobian()\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::base_buildJacobian(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btSliderConstraint::buildJacobian();

		return 0;
	}

	// void btSliderConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)
	static int _bind_base_setupSolverConstraint(lua_State *L) {
		if (!_lg_typecheck_base_setupSolverConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep) function, expected prototype:\nvoid btSliderConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)\nClass arguments details:\narg 1 ID = 1318117\n");
		}

		btConstraintArray* ca_ptr=(Luna< btAlignedObjectArray< btSolverConstraint > >::checkSubType< btConstraintArray >(L,2));
		if( !ca_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ca in btSliderConstraint::base_setupSolverConstraint function");
		}
		btConstraintArray & ca=*ca_ptr;
		int solverBodyA=(int)lua_tointeger(L,3);
		int solverBodyB=(int)lua_tointeger(L,4);
		float timeStep=(float)lua_tonumber(L,5);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::base_setupSolverConstraint(btConstraintArray &, int, int, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btSliderConstraint::setupSolverConstraint(ca, solverBodyA, solverBodyB, timeStep);

		return 0;
	}

	// void btSliderConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)
	static int _bind_base_solveConstraintObsolete(lua_State *L) {
		if (!_lg_typecheck_base_solveConstraintObsolete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3) function, expected prototype:\nvoid btSliderConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)\nClass arguments details:\narg 1 ID = 65712094\narg 2 ID = 65712094\n");
		}

		btSolverBody* _arg1_ptr=(Luna< btSolverBody >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in btSliderConstraint::base_solveConstraintObsolete function");
		}
		btSolverBody & _arg1=*_arg1_ptr;
		btSolverBody* _arg2_ptr=(Luna< btSolverBody >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in btSliderConstraint::base_solveConstraintObsolete function");
		}
		btSolverBody & _arg2=*_arg2_ptr;
		float _arg3=(float)lua_tonumber(L,4);

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::base_solveConstraintObsolete(btSolverBody &, btSolverBody &, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btSliderConstraint::solveConstraintObsolete(_arg1, _arg2, _arg3);

		return 0;
	}

	// void btSliderConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info)
	static int _bind_base_getInfo1(lua_State *L) {
		if (!_lg_typecheck_base_getInfo1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info) function, expected prototype:\nvoid btSliderConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info)\nClass arguments details:\narg 1 ID = 17243935\n");
		}

		btTypedConstraint::btConstraintInfo1* info=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,2));

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btSliderConstraint::getInfo1(info);

		return 0;
	}

	// void btSliderConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info)
	static int _bind_base_getInfo2(lua_State *L) {
		if (!_lg_typecheck_base_getInfo2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info) function, expected prototype:\nvoid btSliderConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info)\nClass arguments details:\narg 1 ID = 17243936\n");
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btSliderConstraint::getInfo2(info);

		return 0;
	}

	// void btSliderConstraint::base_setParam(int num, float value, int axis = -1)
	static int _bind_base_setParam(lua_State *L) {
		if (!_lg_typecheck_base_setParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::base_setParam(int num, float value, int axis = -1) function, expected prototype:\nvoid btSliderConstraint::base_setParam(int num, float value, int axis = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		float value=(float)lua_tonumber(L,3);
		int axis=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::base_setParam(int, float, int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btSliderConstraint::setParam(num, value, axis);

		return 0;
	}

	// float btSliderConstraint::base_getParam(int num, int axis = -1) const
	static int _bind_base_getParam(lua_State *L) {
		if (!_lg_typecheck_base_getParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btSliderConstraint::base_getParam(int num, int axis = -1) const function, expected prototype:\nfloat btSliderConstraint::base_getParam(int num, int axis = -1) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		int axis=luatop>2 ? (int)lua_tointeger(L,3) : (int)-1;

		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btSliderConstraint::base_getParam(int, int) const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->btSliderConstraint::getParam(num, axis);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btSliderConstraint::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btSliderConstraint::base_calculateSerializeBufferSize() const function, expected prototype:\nint btSliderConstraint::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btSliderConstraint* self=Luna< btTypedObject >::checkSubType< btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btSliderConstraint::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->btSliderConstraint::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btSliderConstraint* LunaTraits< btSliderConstraint >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btSliderConstraint::_bind_ctor(L);
}

void LunaTraits< btSliderConstraint >::_bind_dtor(btSliderConstraint* obj) {
	delete obj;
}

const char LunaTraits< btSliderConstraint >::className[] = "btSliderConstraint";
const char LunaTraits< btSliderConstraint >::fullName[] = "btSliderConstraint";
const char LunaTraits< btSliderConstraint >::moduleName[] = "bullet";
const char* LunaTraits< btSliderConstraint >::parents[] = {"bullet.btTypedConstraint", 0};
const int LunaTraits< btSliderConstraint >::hash = 90039616;
const int LunaTraits< btSliderConstraint >::uniqueIDs[] = {66271199,0};

luna_RegType LunaTraits< btSliderConstraint >::methods[] = {
	{"getInfo1", &luna_wrapper_btSliderConstraint::_bind_getInfo1},
	{"getInfo1NonVirtual", &luna_wrapper_btSliderConstraint::_bind_getInfo1NonVirtual},
	{"getInfo2", &luna_wrapper_btSliderConstraint::_bind_getInfo2},
	{"getInfo2NonVirtual", &luna_wrapper_btSliderConstraint::_bind_getInfo2NonVirtual},
	{"getRigidBodyA", &luna_wrapper_btSliderConstraint::_bind_getRigidBodyA},
	{"getRigidBodyB", &luna_wrapper_btSliderConstraint::_bind_getRigidBodyB},
	{"getCalculatedTransformA", &luna_wrapper_btSliderConstraint::_bind_getCalculatedTransformA},
	{"getCalculatedTransformB", &luna_wrapper_btSliderConstraint::_bind_getCalculatedTransformB},
	{"getFrameOffsetA", &luna_wrapper_btSliderConstraint::_bind_getFrameOffsetA},
	{"getFrameOffsetB", &luna_wrapper_btSliderConstraint::_bind_getFrameOffsetB},
	{"getLowerLinLimit", &luna_wrapper_btSliderConstraint::_bind_getLowerLinLimit},
	{"setLowerLinLimit", &luna_wrapper_btSliderConstraint::_bind_setLowerLinLimit},
	{"getUpperLinLimit", &luna_wrapper_btSliderConstraint::_bind_getUpperLinLimit},
	{"setUpperLinLimit", &luna_wrapper_btSliderConstraint::_bind_setUpperLinLimit},
	{"getLowerAngLimit", &luna_wrapper_btSliderConstraint::_bind_getLowerAngLimit},
	{"setLowerAngLimit", &luna_wrapper_btSliderConstraint::_bind_setLowerAngLimit},
	{"getUpperAngLimit", &luna_wrapper_btSliderConstraint::_bind_getUpperAngLimit},
	{"setUpperAngLimit", &luna_wrapper_btSliderConstraint::_bind_setUpperAngLimit},
	{"getUseLinearReferenceFrameA", &luna_wrapper_btSliderConstraint::_bind_getUseLinearReferenceFrameA},
	{"getSoftnessDirLin", &luna_wrapper_btSliderConstraint::_bind_getSoftnessDirLin},
	{"getRestitutionDirLin", &luna_wrapper_btSliderConstraint::_bind_getRestitutionDirLin},
	{"getDampingDirLin", &luna_wrapper_btSliderConstraint::_bind_getDampingDirLin},
	{"getSoftnessDirAng", &luna_wrapper_btSliderConstraint::_bind_getSoftnessDirAng},
	{"getRestitutionDirAng", &luna_wrapper_btSliderConstraint::_bind_getRestitutionDirAng},
	{"getDampingDirAng", &luna_wrapper_btSliderConstraint::_bind_getDampingDirAng},
	{"getSoftnessLimLin", &luna_wrapper_btSliderConstraint::_bind_getSoftnessLimLin},
	{"getRestitutionLimLin", &luna_wrapper_btSliderConstraint::_bind_getRestitutionLimLin},
	{"getDampingLimLin", &luna_wrapper_btSliderConstraint::_bind_getDampingLimLin},
	{"getSoftnessLimAng", &luna_wrapper_btSliderConstraint::_bind_getSoftnessLimAng},
	{"getRestitutionLimAng", &luna_wrapper_btSliderConstraint::_bind_getRestitutionLimAng},
	{"getDampingLimAng", &luna_wrapper_btSliderConstraint::_bind_getDampingLimAng},
	{"getSoftnessOrthoLin", &luna_wrapper_btSliderConstraint::_bind_getSoftnessOrthoLin},
	{"getRestitutionOrthoLin", &luna_wrapper_btSliderConstraint::_bind_getRestitutionOrthoLin},
	{"getDampingOrthoLin", &luna_wrapper_btSliderConstraint::_bind_getDampingOrthoLin},
	{"getSoftnessOrthoAng", &luna_wrapper_btSliderConstraint::_bind_getSoftnessOrthoAng},
	{"getRestitutionOrthoAng", &luna_wrapper_btSliderConstraint::_bind_getRestitutionOrthoAng},
	{"getDampingOrthoAng", &luna_wrapper_btSliderConstraint::_bind_getDampingOrthoAng},
	{"setSoftnessDirLin", &luna_wrapper_btSliderConstraint::_bind_setSoftnessDirLin},
	{"setRestitutionDirLin", &luna_wrapper_btSliderConstraint::_bind_setRestitutionDirLin},
	{"setDampingDirLin", &luna_wrapper_btSliderConstraint::_bind_setDampingDirLin},
	{"setSoftnessDirAng", &luna_wrapper_btSliderConstraint::_bind_setSoftnessDirAng},
	{"setRestitutionDirAng", &luna_wrapper_btSliderConstraint::_bind_setRestitutionDirAng},
	{"setDampingDirAng", &luna_wrapper_btSliderConstraint::_bind_setDampingDirAng},
	{"setSoftnessLimLin", &luna_wrapper_btSliderConstraint::_bind_setSoftnessLimLin},
	{"setRestitutionLimLin", &luna_wrapper_btSliderConstraint::_bind_setRestitutionLimLin},
	{"setDampingLimLin", &luna_wrapper_btSliderConstraint::_bind_setDampingLimLin},
	{"setSoftnessLimAng", &luna_wrapper_btSliderConstraint::_bind_setSoftnessLimAng},
	{"setRestitutionLimAng", &luna_wrapper_btSliderConstraint::_bind_setRestitutionLimAng},
	{"setDampingLimAng", &luna_wrapper_btSliderConstraint::_bind_setDampingLimAng},
	{"setSoftnessOrthoLin", &luna_wrapper_btSliderConstraint::_bind_setSoftnessOrthoLin},
	{"setRestitutionOrthoLin", &luna_wrapper_btSliderConstraint::_bind_setRestitutionOrthoLin},
	{"setDampingOrthoLin", &luna_wrapper_btSliderConstraint::_bind_setDampingOrthoLin},
	{"setSoftnessOrthoAng", &luna_wrapper_btSliderConstraint::_bind_setSoftnessOrthoAng},
	{"setRestitutionOrthoAng", &luna_wrapper_btSliderConstraint::_bind_setRestitutionOrthoAng},
	{"setDampingOrthoAng", &luna_wrapper_btSliderConstraint::_bind_setDampingOrthoAng},
	{"setPoweredLinMotor", &luna_wrapper_btSliderConstraint::_bind_setPoweredLinMotor},
	{"getPoweredLinMotor", &luna_wrapper_btSliderConstraint::_bind_getPoweredLinMotor},
	{"setTargetLinMotorVelocity", &luna_wrapper_btSliderConstraint::_bind_setTargetLinMotorVelocity},
	{"getTargetLinMotorVelocity", &luna_wrapper_btSliderConstraint::_bind_getTargetLinMotorVelocity},
	{"setMaxLinMotorForce", &luna_wrapper_btSliderConstraint::_bind_setMaxLinMotorForce},
	{"getMaxLinMotorForce", &luna_wrapper_btSliderConstraint::_bind_getMaxLinMotorForce},
	{"setPoweredAngMotor", &luna_wrapper_btSliderConstraint::_bind_setPoweredAngMotor},
	{"getPoweredAngMotor", &luna_wrapper_btSliderConstraint::_bind_getPoweredAngMotor},
	{"setTargetAngMotorVelocity", &luna_wrapper_btSliderConstraint::_bind_setTargetAngMotorVelocity},
	{"getTargetAngMotorVelocity", &luna_wrapper_btSliderConstraint::_bind_getTargetAngMotorVelocity},
	{"setMaxAngMotorForce", &luna_wrapper_btSliderConstraint::_bind_setMaxAngMotorForce},
	{"getMaxAngMotorForce", &luna_wrapper_btSliderConstraint::_bind_getMaxAngMotorForce},
	{"getLinearPos", &luna_wrapper_btSliderConstraint::_bind_getLinearPos},
	{"getAngularPos", &luna_wrapper_btSliderConstraint::_bind_getAngularPos},
	{"getSolveLinLimit", &luna_wrapper_btSliderConstraint::_bind_getSolveLinLimit},
	{"getLinDepth", &luna_wrapper_btSliderConstraint::_bind_getLinDepth},
	{"getSolveAngLimit", &luna_wrapper_btSliderConstraint::_bind_getSolveAngLimit},
	{"getAngDepth", &luna_wrapper_btSliderConstraint::_bind_getAngDepth},
	{"calculateTransforms", &luna_wrapper_btSliderConstraint::_bind_calculateTransforms},
	{"testLinLimits", &luna_wrapper_btSliderConstraint::_bind_testLinLimits},
	{"testAngLimits", &luna_wrapper_btSliderConstraint::_bind_testAngLimits},
	{"getAncorInA", &luna_wrapper_btSliderConstraint::_bind_getAncorInA},
	{"getAncorInB", &luna_wrapper_btSliderConstraint::_bind_getAncorInB},
	{"getUseFrameOffset", &luna_wrapper_btSliderConstraint::_bind_getUseFrameOffset},
	{"setUseFrameOffset", &luna_wrapper_btSliderConstraint::_bind_setUseFrameOffset},
	{"setFrames", &luna_wrapper_btSliderConstraint::_bind_setFrames},
	{"setParam", &luna_wrapper_btSliderConstraint::_bind_setParam},
	{"getParam", &luna_wrapper_btSliderConstraint::_bind_getParam},
	{"calculateSerializeBufferSize", &luna_wrapper_btSliderConstraint::_bind_calculateSerializeBufferSize},
	{"base_buildJacobian", &luna_wrapper_btSliderConstraint::_bind_base_buildJacobian},
	{"base_setupSolverConstraint", &luna_wrapper_btSliderConstraint::_bind_base_setupSolverConstraint},
	{"base_solveConstraintObsolete", &luna_wrapper_btSliderConstraint::_bind_base_solveConstraintObsolete},
	{"base_getInfo1", &luna_wrapper_btSliderConstraint::_bind_base_getInfo1},
	{"base_getInfo2", &luna_wrapper_btSliderConstraint::_bind_base_getInfo2},
	{"base_setParam", &luna_wrapper_btSliderConstraint::_bind_base_setParam},
	{"base_getParam", &luna_wrapper_btSliderConstraint::_bind_base_getParam},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btSliderConstraint::_bind_base_calculateSerializeBufferSize},
	{"fromVoid", &luna_wrapper_btSliderConstraint::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btSliderConstraint::_bind_asVoid},
	{"getTable", &luna_wrapper_btSliderConstraint::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btSliderConstraint >::converters[] = {
	{"btTypedObject", &luna_wrapper_btSliderConstraint::_cast_from_btTypedObject},
	{0,0}
};

luna_RegEnumType LunaTraits< btSliderConstraint >::enumValues[] = {
	{0,0}
};


