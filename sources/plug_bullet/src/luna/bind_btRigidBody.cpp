#include <plug_common.h>

#include <luna/wrappers/wrapper_btRigidBody.h>

class luna_wrapper_btRigidBody {
public:
	typedef Luna< btRigidBody > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btCollisionObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85758361) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionObject*)");
		}

		btCollisionObject* rhs =(Luna< btCollisionObject >::check(L,2));
		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
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

		btRigidBody* self= (btRigidBody*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btRigidBody >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85758361) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btCollisionObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btRigidBody* ptr= dynamic_cast< btRigidBody* >(Luna< btCollisionObject >::check(L,1));
		btRigidBody* ptr= luna_caster< btCollisionObject, btRigidBody >::cast(Luna< btCollisionObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btRigidBody >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13789036) ) return false;
		if( (!(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,40784278)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btMotionState >::check(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,58243831)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btCollisionShape >::check(L,3)) ) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( luatop>3 && (!(Luna< btVector3 >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,13789036) ) return false;
		if( (!(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,40784278)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btMotionState >::check(L,3)) ) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,58243831)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< btCollisionShape >::check(L,4)) ) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( luatop>4 && (!(Luna< btVector3 >::check(L,5))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_proceedToTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_predictIntegratedTransform(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_saveKinematicState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_applyGravity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGravity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGravity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDamping(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLinearDamping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAngularDamping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLinearSleepingThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAngularSleepingThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_applyDamping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCollisionShape_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCollisionShape_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMassProps(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLinearFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLinearFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInvMass(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInvInertiaTensorWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_integrateVelocities(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCenterOfMassTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_applyCentralForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTotalForce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTotalTorque(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInvInertiaDiagLocal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInvInertiaDiagLocal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSleepingThresholds(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_applyTorque(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_applyForce(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_applyCentralImpulse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_applyTorqueImpulse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_applyImpulse(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clearForces(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_updateInertiaTensor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCenterOfMassPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOrientation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCenterOfMassTransform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLinearVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAngularVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLinearVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngularVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVelocityInLocalPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_translate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAabb(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeImpulseDenominator(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeAngularImpulseDenominator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateDeactivation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_wantsSleeping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBroadphaseProxy_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBroadphaseProxy_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNewBroadphaseProxy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMotionState_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMotionState_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMotionState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,40784278)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngularFactor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngularFactor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAngularFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isInWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_checkCollideWithOverride(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addConstraintRef(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66271199)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeConstraintRef(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66271199)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getConstraintRef(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumConstraintRefs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeGyroscopicForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_upcast_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,85758361)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btCollisionObject >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_upcast_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,85758361)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btCollisionObject >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getContactSolverType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrictionSolverType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setContactSolverType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFrictionSolverType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setCollisionShape(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_checkCollideWithOverride(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btRigidBody::btRigidBody(const btRigidBody::btRigidBodyConstructionInfo & constructionInfo)
	static btRigidBody* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btRigidBody::btRigidBody(const btRigidBody::btRigidBodyConstructionInfo & constructionInfo) function, expected prototype:\nbtRigidBody::btRigidBody(const btRigidBody::btRigidBodyConstructionInfo & constructionInfo)\nClass arguments details:\narg 1 ID = 13789036\n");
		}

		const btRigidBody::btRigidBodyConstructionInfo* constructionInfo_ptr=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,1));
		if( !constructionInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg constructionInfo in btRigidBody::btRigidBody function");
		}
		const btRigidBody::btRigidBodyConstructionInfo & constructionInfo=*constructionInfo_ptr;

		return new btRigidBody(constructionInfo);
	}

	// btRigidBody::btRigidBody(float mass, btMotionState * motionState, btCollisionShape * collisionShape, const btVector3 & localInertia = btVector3 (0, 0, 0))
	static btRigidBody* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btRigidBody::btRigidBody(float mass, btMotionState * motionState, btCollisionShape * collisionShape, const btVector3 & localInertia = btVector3 (0, 0, 0)) function, expected prototype:\nbtRigidBody::btRigidBody(float mass, btMotionState * motionState, btCollisionShape * collisionShape, const btVector3 & localInertia = btVector3 (0, 0, 0))\nClass arguments details:\narg 2 ID = 40784278\narg 3 ID = 58243831\narg 4 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		float mass=(float)lua_tonumber(L,1);
		btMotionState* motionState=(Luna< btMotionState >::check(L,2));
		btCollisionShape* collisionShape=(Luna< btCollisionShape >::check(L,3));
		const btVector3* localInertia_ptr=luatop>3 ? (Luna< btVector3 >::check(L,4)) : NULL;
		if( luatop>3 && !localInertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localInertia in btRigidBody::btRigidBody function");
		}
		const btVector3 & localInertia=luatop>3 ? *localInertia_ptr : (const btVector3)btVector3 (0, 0, 0);

		return new btRigidBody(mass, motionState, collisionShape, localInertia);
	}

	// btRigidBody::btRigidBody(lua_Table * data, const btRigidBody::btRigidBodyConstructionInfo & constructionInfo)
	static btRigidBody* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btRigidBody::btRigidBody(lua_Table * data, const btRigidBody::btRigidBodyConstructionInfo & constructionInfo) function, expected prototype:\nbtRigidBody::btRigidBody(lua_Table * data, const btRigidBody::btRigidBodyConstructionInfo & constructionInfo)\nClass arguments details:\narg 2 ID = 13789036\n");
		}

		const btRigidBody::btRigidBodyConstructionInfo* constructionInfo_ptr=(Luna< btRigidBody::btRigidBodyConstructionInfo >::check(L,2));
		if( !constructionInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg constructionInfo in btRigidBody::btRigidBody function");
		}
		const btRigidBody::btRigidBodyConstructionInfo & constructionInfo=*constructionInfo_ptr;

		return new wrapper_btRigidBody(L,NULL, constructionInfo);
	}

	// btRigidBody::btRigidBody(lua_Table * data, float mass, btMotionState * motionState, btCollisionShape * collisionShape, const btVector3 & localInertia = btVector3 (0, 0, 0))
	static btRigidBody* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btRigidBody::btRigidBody(lua_Table * data, float mass, btMotionState * motionState, btCollisionShape * collisionShape, const btVector3 & localInertia = btVector3 (0, 0, 0)) function, expected prototype:\nbtRigidBody::btRigidBody(lua_Table * data, float mass, btMotionState * motionState, btCollisionShape * collisionShape, const btVector3 & localInertia = btVector3 (0, 0, 0))\nClass arguments details:\narg 3 ID = 40784278\narg 4 ID = 58243831\narg 5 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		float mass=(float)lua_tonumber(L,2);
		btMotionState* motionState=(Luna< btMotionState >::check(L,3));
		btCollisionShape* collisionShape=(Luna< btCollisionShape >::check(L,4));
		const btVector3* localInertia_ptr=luatop>4 ? (Luna< btVector3 >::check(L,5)) : NULL;
		if( luatop>4 && !localInertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localInertia in btRigidBody::btRigidBody function");
		}
		const btVector3 & localInertia=luatop>4 ? *localInertia_ptr : (const btVector3)btVector3 (0, 0, 0);

		return new wrapper_btRigidBody(L,NULL, mass, motionState, collisionShape, localInertia);
	}

	// Overload binder for btRigidBody::btRigidBody
	static btRigidBody* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function btRigidBody, cannot match any of the overloads for function btRigidBody:\n  btRigidBody(const btRigidBody::btRigidBodyConstructionInfo &)\n  btRigidBody(float, btMotionState *, btCollisionShape *, const btVector3 &)\n  btRigidBody(lua_Table *, const btRigidBody::btRigidBodyConstructionInfo &)\n  btRigidBody(lua_Table *, float, btMotionState *, btCollisionShape *, const btVector3 &)\n");
		return NULL;
	}


	// Function binds:
	// void btRigidBody::proceedToTransform(const btTransform & newTrans)
	static int _bind_proceedToTransform(lua_State *L) {
		if (!_lg_typecheck_proceedToTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::proceedToTransform(const btTransform & newTrans) function, expected prototype:\nvoid btRigidBody::proceedToTransform(const btTransform & newTrans)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		const btTransform* newTrans_ptr=(Luna< btTransform >::check(L,2));
		if( !newTrans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg newTrans in btRigidBody::proceedToTransform function");
		}
		const btTransform & newTrans=*newTrans_ptr;

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::proceedToTransform(const btTransform &). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->proceedToTransform(newTrans);

		return 0;
	}

	// void btRigidBody::predictIntegratedTransform(float step, btTransform & predictedTransform)
	static int _bind_predictIntegratedTransform(lua_State *L) {
		if (!_lg_typecheck_predictIntegratedTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::predictIntegratedTransform(float step, btTransform & predictedTransform) function, expected prototype:\nvoid btRigidBody::predictIntegratedTransform(float step, btTransform & predictedTransform)\nClass arguments details:\narg 2 ID = 13247377\n");
		}

		float step=(float)lua_tonumber(L,2);
		btTransform* predictedTransform_ptr=(Luna< btTransform >::check(L,3));
		if( !predictedTransform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg predictedTransform in btRigidBody::predictIntegratedTransform function");
		}
		btTransform & predictedTransform=*predictedTransform_ptr;

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::predictIntegratedTransform(float, btTransform &). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->predictIntegratedTransform(step, predictedTransform);

		return 0;
	}

	// void btRigidBody::saveKinematicState(float step)
	static int _bind_saveKinematicState(lua_State *L) {
		if (!_lg_typecheck_saveKinematicState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::saveKinematicState(float step) function, expected prototype:\nvoid btRigidBody::saveKinematicState(float step)\nClass arguments details:\n");
		}

		float step=(float)lua_tonumber(L,2);

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::saveKinematicState(float). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->saveKinematicState(step);

		return 0;
	}

	// void btRigidBody::applyGravity()
	static int _bind_applyGravity(lua_State *L) {
		if (!_lg_typecheck_applyGravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::applyGravity() function, expected prototype:\nvoid btRigidBody::applyGravity()\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::applyGravity(). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->applyGravity();

		return 0;
	}

	// void btRigidBody::setGravity(const btVector3 & acceleration)
	static int _bind_setGravity(lua_State *L) {
		if (!_lg_typecheck_setGravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::setGravity(const btVector3 & acceleration) function, expected prototype:\nvoid btRigidBody::setGravity(const btVector3 & acceleration)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* acceleration_ptr=(Luna< btVector3 >::check(L,2));
		if( !acceleration_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg acceleration in btRigidBody::setGravity function");
		}
		const btVector3 & acceleration=*acceleration_ptr;

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::setGravity(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setGravity(acceleration);

		return 0;
	}

	// const btVector3 & btRigidBody::getGravity() const
	static int _bind_getGravity(lua_State *L) {
		if (!_lg_typecheck_getGravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btRigidBody::getGravity() const function, expected prototype:\nconst btVector3 & btRigidBody::getGravity() const\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btRigidBody::getGravity() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		const btVector3* lret = &self->getGravity();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btRigidBody::setDamping(float lin_damping, float ang_damping)
	static int _bind_setDamping(lua_State *L) {
		if (!_lg_typecheck_setDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::setDamping(float lin_damping, float ang_damping) function, expected prototype:\nvoid btRigidBody::setDamping(float lin_damping, float ang_damping)\nClass arguments details:\n");
		}

		float lin_damping=(float)lua_tonumber(L,2);
		float ang_damping=(float)lua_tonumber(L,3);

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::setDamping(float, float). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setDamping(lin_damping, ang_damping);

		return 0;
	}

	// float btRigidBody::getLinearDamping() const
	static int _bind_getLinearDamping(lua_State *L) {
		if (!_lg_typecheck_getLinearDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRigidBody::getLinearDamping() const function, expected prototype:\nfloat btRigidBody::getLinearDamping() const\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRigidBody::getLinearDamping() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		float lret = self->getLinearDamping();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRigidBody::getAngularDamping() const
	static int _bind_getAngularDamping(lua_State *L) {
		if (!_lg_typecheck_getAngularDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRigidBody::getAngularDamping() const function, expected prototype:\nfloat btRigidBody::getAngularDamping() const\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRigidBody::getAngularDamping() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		float lret = self->getAngularDamping();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRigidBody::getLinearSleepingThreshold() const
	static int _bind_getLinearSleepingThreshold(lua_State *L) {
		if (!_lg_typecheck_getLinearSleepingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRigidBody::getLinearSleepingThreshold() const function, expected prototype:\nfloat btRigidBody::getLinearSleepingThreshold() const\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRigidBody::getLinearSleepingThreshold() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		float lret = self->getLinearSleepingThreshold();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRigidBody::getAngularSleepingThreshold() const
	static int _bind_getAngularSleepingThreshold(lua_State *L) {
		if (!_lg_typecheck_getAngularSleepingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRigidBody::getAngularSleepingThreshold() const function, expected prototype:\nfloat btRigidBody::getAngularSleepingThreshold() const\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRigidBody::getAngularSleepingThreshold() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		float lret = self->getAngularSleepingThreshold();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btRigidBody::applyDamping(float timeStep)
	static int _bind_applyDamping(lua_State *L) {
		if (!_lg_typecheck_applyDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::applyDamping(float timeStep) function, expected prototype:\nvoid btRigidBody::applyDamping(float timeStep)\nClass arguments details:\n");
		}

		float timeStep=(float)lua_tonumber(L,2);

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::applyDamping(float). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->applyDamping(timeStep);

		return 0;
	}

	// const btCollisionShape * btRigidBody::getCollisionShape() const
	static int _bind_getCollisionShape_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCollisionShape_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btCollisionShape * btRigidBody::getCollisionShape() const function, expected prototype:\nconst btCollisionShape * btRigidBody::getCollisionShape() const\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btCollisionShape * btRigidBody::getCollisionShape() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		const btCollisionShape * lret = self->getCollisionShape();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShape >::push(L,lret,false);

		return 1;
	}

	// btCollisionShape * btRigidBody::getCollisionShape()
	static int _bind_getCollisionShape_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCollisionShape_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionShape * btRigidBody::getCollisionShape() function, expected prototype:\nbtCollisionShape * btRigidBody::getCollisionShape()\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionShape * btRigidBody::getCollisionShape(). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		btCollisionShape * lret = self->getCollisionShape();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShape >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btRigidBody::getCollisionShape
	static int _bind_getCollisionShape(lua_State *L) {
		if (_lg_typecheck_getCollisionShape_overload_1(L)) return _bind_getCollisionShape_overload_1(L);
		if (_lg_typecheck_getCollisionShape_overload_2(L)) return _bind_getCollisionShape_overload_2(L);

		luaL_error(L, "error in function getCollisionShape, cannot match any of the overloads for function getCollisionShape:\n  getCollisionShape()\n  getCollisionShape()\n");
		return 0;
	}

	// void btRigidBody::setMassProps(float mass, const btVector3 & inertia)
	static int _bind_setMassProps(lua_State *L) {
		if (!_lg_typecheck_setMassProps(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::setMassProps(float mass, const btVector3 & inertia) function, expected prototype:\nvoid btRigidBody::setMassProps(float mass, const btVector3 & inertia)\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		float mass=(float)lua_tonumber(L,2);
		const btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btRigidBody::setMassProps function");
		}
		const btVector3 & inertia=*inertia_ptr;

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::setMassProps(float, const btVector3 &). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setMassProps(mass, inertia);

		return 0;
	}

	// const btVector3 & btRigidBody::getLinearFactor() const
	static int _bind_getLinearFactor(lua_State *L) {
		if (!_lg_typecheck_getLinearFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btRigidBody::getLinearFactor() const function, expected prototype:\nconst btVector3 & btRigidBody::getLinearFactor() const\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btRigidBody::getLinearFactor() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		const btVector3* lret = &self->getLinearFactor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btRigidBody::setLinearFactor(const btVector3 & linearFactor)
	static int _bind_setLinearFactor(lua_State *L) {
		if (!_lg_typecheck_setLinearFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::setLinearFactor(const btVector3 & linearFactor) function, expected prototype:\nvoid btRigidBody::setLinearFactor(const btVector3 & linearFactor)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* linearFactor_ptr=(Luna< btVector3 >::check(L,2));
		if( !linearFactor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linearFactor in btRigidBody::setLinearFactor function");
		}
		const btVector3 & linearFactor=*linearFactor_ptr;

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::setLinearFactor(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setLinearFactor(linearFactor);

		return 0;
	}

	// float btRigidBody::getInvMass() const
	static int _bind_getInvMass(lua_State *L) {
		if (!_lg_typecheck_getInvMass(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRigidBody::getInvMass() const function, expected prototype:\nfloat btRigidBody::getInvMass() const\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRigidBody::getInvMass() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		float lret = self->getInvMass();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const btMatrix3x3 & btRigidBody::getInvInertiaTensorWorld() const
	static int _bind_getInvInertiaTensorWorld(lua_State *L) {
		if (!_lg_typecheck_getInvInertiaTensorWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btMatrix3x3 & btRigidBody::getInvInertiaTensorWorld() const function, expected prototype:\nconst btMatrix3x3 & btRigidBody::getInvInertiaTensorWorld() const\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btMatrix3x3 & btRigidBody::getInvInertiaTensorWorld() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		const btMatrix3x3* lret = &self->getInvInertiaTensorWorld();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btMatrix3x3 >::push(L,lret,false);

		return 1;
	}

	// void btRigidBody::integrateVelocities(float step)
	static int _bind_integrateVelocities(lua_State *L) {
		if (!_lg_typecheck_integrateVelocities(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::integrateVelocities(float step) function, expected prototype:\nvoid btRigidBody::integrateVelocities(float step)\nClass arguments details:\n");
		}

		float step=(float)lua_tonumber(L,2);

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::integrateVelocities(float). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->integrateVelocities(step);

		return 0;
	}

	// void btRigidBody::setCenterOfMassTransform(const btTransform & xform)
	static int _bind_setCenterOfMassTransform(lua_State *L) {
		if (!_lg_typecheck_setCenterOfMassTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::setCenterOfMassTransform(const btTransform & xform) function, expected prototype:\nvoid btRigidBody::setCenterOfMassTransform(const btTransform & xform)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		const btTransform* xform_ptr=(Luna< btTransform >::check(L,2));
		if( !xform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xform in btRigidBody::setCenterOfMassTransform function");
		}
		const btTransform & xform=*xform_ptr;

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::setCenterOfMassTransform(const btTransform &). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setCenterOfMassTransform(xform);

		return 0;
	}

	// void btRigidBody::applyCentralForce(const btVector3 & force)
	static int _bind_applyCentralForce(lua_State *L) {
		if (!_lg_typecheck_applyCentralForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::applyCentralForce(const btVector3 & force) function, expected prototype:\nvoid btRigidBody::applyCentralForce(const btVector3 & force)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* force_ptr=(Luna< btVector3 >::check(L,2));
		if( !force_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg force in btRigidBody::applyCentralForce function");
		}
		const btVector3 & force=*force_ptr;

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::applyCentralForce(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->applyCentralForce(force);

		return 0;
	}

	// const btVector3 & btRigidBody::getTotalForce() const
	static int _bind_getTotalForce(lua_State *L) {
		if (!_lg_typecheck_getTotalForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btRigidBody::getTotalForce() const function, expected prototype:\nconst btVector3 & btRigidBody::getTotalForce() const\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btRigidBody::getTotalForce() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		const btVector3* lret = &self->getTotalForce();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 & btRigidBody::getTotalTorque() const
	static int _bind_getTotalTorque(lua_State *L) {
		if (!_lg_typecheck_getTotalTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btRigidBody::getTotalTorque() const function, expected prototype:\nconst btVector3 & btRigidBody::getTotalTorque() const\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btRigidBody::getTotalTorque() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		const btVector3* lret = &self->getTotalTorque();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 & btRigidBody::getInvInertiaDiagLocal() const
	static int _bind_getInvInertiaDiagLocal(lua_State *L) {
		if (!_lg_typecheck_getInvInertiaDiagLocal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btRigidBody::getInvInertiaDiagLocal() const function, expected prototype:\nconst btVector3 & btRigidBody::getInvInertiaDiagLocal() const\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btRigidBody::getInvInertiaDiagLocal() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		const btVector3* lret = &self->getInvInertiaDiagLocal();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btRigidBody::setInvInertiaDiagLocal(const btVector3 & diagInvInertia)
	static int _bind_setInvInertiaDiagLocal(lua_State *L) {
		if (!_lg_typecheck_setInvInertiaDiagLocal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::setInvInertiaDiagLocal(const btVector3 & diagInvInertia) function, expected prototype:\nvoid btRigidBody::setInvInertiaDiagLocal(const btVector3 & diagInvInertia)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* diagInvInertia_ptr=(Luna< btVector3 >::check(L,2));
		if( !diagInvInertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg diagInvInertia in btRigidBody::setInvInertiaDiagLocal function");
		}
		const btVector3 & diagInvInertia=*diagInvInertia_ptr;

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::setInvInertiaDiagLocal(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setInvInertiaDiagLocal(diagInvInertia);

		return 0;
	}

	// void btRigidBody::setSleepingThresholds(float linear, float angular)
	static int _bind_setSleepingThresholds(lua_State *L) {
		if (!_lg_typecheck_setSleepingThresholds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::setSleepingThresholds(float linear, float angular) function, expected prototype:\nvoid btRigidBody::setSleepingThresholds(float linear, float angular)\nClass arguments details:\n");
		}

		float linear=(float)lua_tonumber(L,2);
		float angular=(float)lua_tonumber(L,3);

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::setSleepingThresholds(float, float). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setSleepingThresholds(linear, angular);

		return 0;
	}

	// void btRigidBody::applyTorque(const btVector3 & torque)
	static int _bind_applyTorque(lua_State *L) {
		if (!_lg_typecheck_applyTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::applyTorque(const btVector3 & torque) function, expected prototype:\nvoid btRigidBody::applyTorque(const btVector3 & torque)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* torque_ptr=(Luna< btVector3 >::check(L,2));
		if( !torque_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg torque in btRigidBody::applyTorque function");
		}
		const btVector3 & torque=*torque_ptr;

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::applyTorque(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->applyTorque(torque);

		return 0;
	}

	// void btRigidBody::applyForce(const btVector3 & force, const btVector3 & rel_pos)
	static int _bind_applyForce(lua_State *L) {
		if (!_lg_typecheck_applyForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::applyForce(const btVector3 & force, const btVector3 & rel_pos) function, expected prototype:\nvoid btRigidBody::applyForce(const btVector3 & force, const btVector3 & rel_pos)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* force_ptr=(Luna< btVector3 >::check(L,2));
		if( !force_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg force in btRigidBody::applyForce function");
		}
		const btVector3 & force=*force_ptr;
		const btVector3* rel_pos_ptr=(Luna< btVector3 >::check(L,3));
		if( !rel_pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rel_pos in btRigidBody::applyForce function");
		}
		const btVector3 & rel_pos=*rel_pos_ptr;

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::applyForce(const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->applyForce(force, rel_pos);

		return 0;
	}

	// void btRigidBody::applyCentralImpulse(const btVector3 & impulse)
	static int _bind_applyCentralImpulse(lua_State *L) {
		if (!_lg_typecheck_applyCentralImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::applyCentralImpulse(const btVector3 & impulse) function, expected prototype:\nvoid btRigidBody::applyCentralImpulse(const btVector3 & impulse)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* impulse_ptr=(Luna< btVector3 >::check(L,2));
		if( !impulse_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg impulse in btRigidBody::applyCentralImpulse function");
		}
		const btVector3 & impulse=*impulse_ptr;

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::applyCentralImpulse(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->applyCentralImpulse(impulse);

		return 0;
	}

	// void btRigidBody::applyTorqueImpulse(const btVector3 & torque)
	static int _bind_applyTorqueImpulse(lua_State *L) {
		if (!_lg_typecheck_applyTorqueImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::applyTorqueImpulse(const btVector3 & torque) function, expected prototype:\nvoid btRigidBody::applyTorqueImpulse(const btVector3 & torque)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* torque_ptr=(Luna< btVector3 >::check(L,2));
		if( !torque_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg torque in btRigidBody::applyTorqueImpulse function");
		}
		const btVector3 & torque=*torque_ptr;

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::applyTorqueImpulse(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->applyTorqueImpulse(torque);

		return 0;
	}

	// void btRigidBody::applyImpulse(const btVector3 & impulse, const btVector3 & rel_pos)
	static int _bind_applyImpulse(lua_State *L) {
		if (!_lg_typecheck_applyImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::applyImpulse(const btVector3 & impulse, const btVector3 & rel_pos) function, expected prototype:\nvoid btRigidBody::applyImpulse(const btVector3 & impulse, const btVector3 & rel_pos)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* impulse_ptr=(Luna< btVector3 >::check(L,2));
		if( !impulse_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg impulse in btRigidBody::applyImpulse function");
		}
		const btVector3 & impulse=*impulse_ptr;
		const btVector3* rel_pos_ptr=(Luna< btVector3 >::check(L,3));
		if( !rel_pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rel_pos in btRigidBody::applyImpulse function");
		}
		const btVector3 & rel_pos=*rel_pos_ptr;

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::applyImpulse(const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->applyImpulse(impulse, rel_pos);

		return 0;
	}

	// void btRigidBody::clearForces()
	static int _bind_clearForces(lua_State *L) {
		if (!_lg_typecheck_clearForces(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::clearForces() function, expected prototype:\nvoid btRigidBody::clearForces()\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::clearForces(). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->clearForces();

		return 0;
	}

	// void btRigidBody::updateInertiaTensor()
	static int _bind_updateInertiaTensor(lua_State *L) {
		if (!_lg_typecheck_updateInertiaTensor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::updateInertiaTensor() function, expected prototype:\nvoid btRigidBody::updateInertiaTensor()\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::updateInertiaTensor(). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->updateInertiaTensor();

		return 0;
	}

	// const btVector3 & btRigidBody::getCenterOfMassPosition() const
	static int _bind_getCenterOfMassPosition(lua_State *L) {
		if (!_lg_typecheck_getCenterOfMassPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btRigidBody::getCenterOfMassPosition() const function, expected prototype:\nconst btVector3 & btRigidBody::getCenterOfMassPosition() const\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btRigidBody::getCenterOfMassPosition() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		const btVector3* lret = &self->getCenterOfMassPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btQuaternion btRigidBody::getOrientation() const
	static int _bind_getOrientation(lua_State *L) {
		if (!_lg_typecheck_getOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btQuaternion btRigidBody::getOrientation() const function, expected prototype:\nbtQuaternion btRigidBody::getOrientation() const\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btQuaternion btRigidBody::getOrientation() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		btQuaternion stack_lret = self->getOrientation();
		btQuaternion* lret = new btQuaternion(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btQuaternion >::push(L,lret,true);

		return 1;
	}

	// const btTransform & btRigidBody::getCenterOfMassTransform() const
	static int _bind_getCenterOfMassTransform(lua_State *L) {
		if (!_lg_typecheck_getCenterOfMassTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTransform & btRigidBody::getCenterOfMassTransform() const function, expected prototype:\nconst btTransform & btRigidBody::getCenterOfMassTransform() const\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTransform & btRigidBody::getCenterOfMassTransform() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		const btTransform* lret = &self->getCenterOfMassTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// const btVector3 & btRigidBody::getLinearVelocity() const
	static int _bind_getLinearVelocity(lua_State *L) {
		if (!_lg_typecheck_getLinearVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btRigidBody::getLinearVelocity() const function, expected prototype:\nconst btVector3 & btRigidBody::getLinearVelocity() const\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btRigidBody::getLinearVelocity() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		const btVector3* lret = &self->getLinearVelocity();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 & btRigidBody::getAngularVelocity() const
	static int _bind_getAngularVelocity(lua_State *L) {
		if (!_lg_typecheck_getAngularVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btRigidBody::getAngularVelocity() const function, expected prototype:\nconst btVector3 & btRigidBody::getAngularVelocity() const\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btRigidBody::getAngularVelocity() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		const btVector3* lret = &self->getAngularVelocity();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btRigidBody::setLinearVelocity(const btVector3 & lin_vel)
	static int _bind_setLinearVelocity(lua_State *L) {
		if (!_lg_typecheck_setLinearVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::setLinearVelocity(const btVector3 & lin_vel) function, expected prototype:\nvoid btRigidBody::setLinearVelocity(const btVector3 & lin_vel)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* lin_vel_ptr=(Luna< btVector3 >::check(L,2));
		if( !lin_vel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lin_vel in btRigidBody::setLinearVelocity function");
		}
		const btVector3 & lin_vel=*lin_vel_ptr;

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::setLinearVelocity(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setLinearVelocity(lin_vel);

		return 0;
	}

	// void btRigidBody::setAngularVelocity(const btVector3 & ang_vel)
	static int _bind_setAngularVelocity(lua_State *L) {
		if (!_lg_typecheck_setAngularVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::setAngularVelocity(const btVector3 & ang_vel) function, expected prototype:\nvoid btRigidBody::setAngularVelocity(const btVector3 & ang_vel)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* ang_vel_ptr=(Luna< btVector3 >::check(L,2));
		if( !ang_vel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ang_vel in btRigidBody::setAngularVelocity function");
		}
		const btVector3 & ang_vel=*ang_vel_ptr;

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::setAngularVelocity(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setAngularVelocity(ang_vel);

		return 0;
	}

	// btVector3 btRigidBody::getVelocityInLocalPoint(const btVector3 & rel_pos) const
	static int _bind_getVelocityInLocalPoint(lua_State *L) {
		if (!_lg_typecheck_getVelocityInLocalPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btRigidBody::getVelocityInLocalPoint(const btVector3 & rel_pos) const function, expected prototype:\nbtVector3 btRigidBody::getVelocityInLocalPoint(const btVector3 & rel_pos) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* rel_pos_ptr=(Luna< btVector3 >::check(L,2));
		if( !rel_pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rel_pos in btRigidBody::getVelocityInLocalPoint function");
		}
		const btVector3 & rel_pos=*rel_pos_ptr;

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btRigidBody::getVelocityInLocalPoint(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		btVector3 stack_lret = self->getVelocityInLocalPoint(rel_pos);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btRigidBody::translate(const btVector3 & v)
	static int _bind_translate(lua_State *L) {
		if (!_lg_typecheck_translate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::translate(const btVector3 & v) function, expected prototype:\nvoid btRigidBody::translate(const btVector3 & v)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* v_ptr=(Luna< btVector3 >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in btRigidBody::translate function");
		}
		const btVector3 & v=*v_ptr;

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::translate(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->translate(v);

		return 0;
	}

	// void btRigidBody::getAabb(btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getAabb(lua_State *L) {
		if (!_lg_typecheck_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::getAabb(btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btRigidBody::getAabb(btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btRigidBody::getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btRigidBody::getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::getAabb(btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->getAabb(aabbMin, aabbMax);

		return 0;
	}

	// float btRigidBody::computeImpulseDenominator(const btVector3 & pos, const btVector3 & normal) const
	static int _bind_computeImpulseDenominator(lua_State *L) {
		if (!_lg_typecheck_computeImpulseDenominator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRigidBody::computeImpulseDenominator(const btVector3 & pos, const btVector3 & normal) const function, expected prototype:\nfloat btRigidBody::computeImpulseDenominator(const btVector3 & pos, const btVector3 & normal) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* pos_ptr=(Luna< btVector3 >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in btRigidBody::computeImpulseDenominator function");
		}
		const btVector3 & pos=*pos_ptr;
		const btVector3* normal_ptr=(Luna< btVector3 >::check(L,3));
		if( !normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normal in btRigidBody::computeImpulseDenominator function");
		}
		const btVector3 & normal=*normal_ptr;

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRigidBody::computeImpulseDenominator(const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		float lret = self->computeImpulseDenominator(pos, normal);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btRigidBody::computeAngularImpulseDenominator(const btVector3 & axis) const
	static int _bind_computeAngularImpulseDenominator(lua_State *L) {
		if (!_lg_typecheck_computeAngularImpulseDenominator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btRigidBody::computeAngularImpulseDenominator(const btVector3 & axis) const function, expected prototype:\nfloat btRigidBody::computeAngularImpulseDenominator(const btVector3 & axis) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* axis_ptr=(Luna< btVector3 >::check(L,2));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in btRigidBody::computeAngularImpulseDenominator function");
		}
		const btVector3 & axis=*axis_ptr;

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btRigidBody::computeAngularImpulseDenominator(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		float lret = self->computeAngularImpulseDenominator(axis);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btRigidBody::updateDeactivation(float timeStep)
	static int _bind_updateDeactivation(lua_State *L) {
		if (!_lg_typecheck_updateDeactivation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::updateDeactivation(float timeStep) function, expected prototype:\nvoid btRigidBody::updateDeactivation(float timeStep)\nClass arguments details:\n");
		}

		float timeStep=(float)lua_tonumber(L,2);

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::updateDeactivation(float). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->updateDeactivation(timeStep);

		return 0;
	}

	// bool btRigidBody::wantsSleeping()
	static int _bind_wantsSleeping(lua_State *L) {
		if (!_lg_typecheck_wantsSleeping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btRigidBody::wantsSleeping() function, expected prototype:\nbool btRigidBody::wantsSleeping()\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btRigidBody::wantsSleeping(). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		bool lret = self->wantsSleeping();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const btBroadphaseProxy * btRigidBody::getBroadphaseProxy() const
	static int _bind_getBroadphaseProxy_overload_1(lua_State *L) {
		if (!_lg_typecheck_getBroadphaseProxy_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btBroadphaseProxy * btRigidBody::getBroadphaseProxy() const function, expected prototype:\nconst btBroadphaseProxy * btRigidBody::getBroadphaseProxy() const\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btBroadphaseProxy * btRigidBody::getBroadphaseProxy() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		const btBroadphaseProxy * lret = self->getBroadphaseProxy();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphaseProxy >::push(L,lret,false);

		return 1;
	}

	// btBroadphaseProxy * btRigidBody::getBroadphaseProxy()
	static int _bind_getBroadphaseProxy_overload_2(lua_State *L) {
		if (!_lg_typecheck_getBroadphaseProxy_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphaseProxy * btRigidBody::getBroadphaseProxy() function, expected prototype:\nbtBroadphaseProxy * btRigidBody::getBroadphaseProxy()\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphaseProxy * btRigidBody::getBroadphaseProxy(). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		btBroadphaseProxy * lret = self->getBroadphaseProxy();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphaseProxy >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btRigidBody::getBroadphaseProxy
	static int _bind_getBroadphaseProxy(lua_State *L) {
		if (_lg_typecheck_getBroadphaseProxy_overload_1(L)) return _bind_getBroadphaseProxy_overload_1(L);
		if (_lg_typecheck_getBroadphaseProxy_overload_2(L)) return _bind_getBroadphaseProxy_overload_2(L);

		luaL_error(L, "error in function getBroadphaseProxy, cannot match any of the overloads for function getBroadphaseProxy:\n  getBroadphaseProxy()\n  getBroadphaseProxy()\n");
		return 0;
	}

	// void btRigidBody::setNewBroadphaseProxy(btBroadphaseProxy * broadphaseProxy)
	static int _bind_setNewBroadphaseProxy(lua_State *L) {
		if (!_lg_typecheck_setNewBroadphaseProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::setNewBroadphaseProxy(btBroadphaseProxy * broadphaseProxy) function, expected prototype:\nvoid btRigidBody::setNewBroadphaseProxy(btBroadphaseProxy * broadphaseProxy)\nClass arguments details:\narg 1 ID = 44086089\n");
		}

		btBroadphaseProxy* broadphaseProxy=(Luna< btBroadphaseProxy >::check(L,2));

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::setNewBroadphaseProxy(btBroadphaseProxy *). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setNewBroadphaseProxy(broadphaseProxy);

		return 0;
	}

	// btMotionState * btRigidBody::getMotionState()
	static int _bind_getMotionState_overload_1(lua_State *L) {
		if (!_lg_typecheck_getMotionState_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMotionState * btRigidBody::getMotionState() function, expected prototype:\nbtMotionState * btRigidBody::getMotionState()\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btMotionState * btRigidBody::getMotionState(). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		btMotionState * lret = self->getMotionState();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btMotionState >::push(L,lret,false);

		return 1;
	}

	// const btMotionState * btRigidBody::getMotionState() const
	static int _bind_getMotionState_overload_2(lua_State *L) {
		if (!_lg_typecheck_getMotionState_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btMotionState * btRigidBody::getMotionState() const function, expected prototype:\nconst btMotionState * btRigidBody::getMotionState() const\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btMotionState * btRigidBody::getMotionState() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		const btMotionState * lret = self->getMotionState();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btMotionState >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btRigidBody::getMotionState
	static int _bind_getMotionState(lua_State *L) {
		if (_lg_typecheck_getMotionState_overload_1(L)) return _bind_getMotionState_overload_1(L);
		if (_lg_typecheck_getMotionState_overload_2(L)) return _bind_getMotionState_overload_2(L);

		luaL_error(L, "error in function getMotionState, cannot match any of the overloads for function getMotionState:\n  getMotionState()\n  getMotionState()\n");
		return 0;
	}

	// void btRigidBody::setMotionState(btMotionState * motionState)
	static int _bind_setMotionState(lua_State *L) {
		if (!_lg_typecheck_setMotionState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::setMotionState(btMotionState * motionState) function, expected prototype:\nvoid btRigidBody::setMotionState(btMotionState * motionState)\nClass arguments details:\narg 1 ID = 40784278\n");
		}

		btMotionState* motionState=(Luna< btMotionState >::check(L,2));

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::setMotionState(btMotionState *). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setMotionState(motionState);

		return 0;
	}

	// void btRigidBody::setAngularFactor(const btVector3 & angFac)
	static int _bind_setAngularFactor_overload_1(lua_State *L) {
		if (!_lg_typecheck_setAngularFactor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::setAngularFactor(const btVector3 & angFac) function, expected prototype:\nvoid btRigidBody::setAngularFactor(const btVector3 & angFac)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* angFac_ptr=(Luna< btVector3 >::check(L,2));
		if( !angFac_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angFac in btRigidBody::setAngularFactor function");
		}
		const btVector3 & angFac=*angFac_ptr;

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::setAngularFactor(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setAngularFactor(angFac);

		return 0;
	}

	// void btRigidBody::setAngularFactor(float angFac)
	static int _bind_setAngularFactor_overload_2(lua_State *L) {
		if (!_lg_typecheck_setAngularFactor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::setAngularFactor(float angFac) function, expected prototype:\nvoid btRigidBody::setAngularFactor(float angFac)\nClass arguments details:\n");
		}

		float angFac=(float)lua_tonumber(L,2);

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::setAngularFactor(float). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setAngularFactor(angFac);

		return 0;
	}

	// Overload binder for btRigidBody::setAngularFactor
	static int _bind_setAngularFactor(lua_State *L) {
		if (_lg_typecheck_setAngularFactor_overload_1(L)) return _bind_setAngularFactor_overload_1(L);
		if (_lg_typecheck_setAngularFactor_overload_2(L)) return _bind_setAngularFactor_overload_2(L);

		luaL_error(L, "error in function setAngularFactor, cannot match any of the overloads for function setAngularFactor:\n  setAngularFactor(const btVector3 &)\n  setAngularFactor(float)\n");
		return 0;
	}

	// const btVector3 & btRigidBody::getAngularFactor() const
	static int _bind_getAngularFactor(lua_State *L) {
		if (!_lg_typecheck_getAngularFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btRigidBody::getAngularFactor() const function, expected prototype:\nconst btVector3 & btRigidBody::getAngularFactor() const\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btRigidBody::getAngularFactor() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		const btVector3* lret = &self->getAngularFactor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// bool btRigidBody::isInWorld() const
	static int _bind_isInWorld(lua_State *L) {
		if (!_lg_typecheck_isInWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btRigidBody::isInWorld() const function, expected prototype:\nbool btRigidBody::isInWorld() const\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btRigidBody::isInWorld() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		bool lret = self->isInWorld();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btRigidBody::checkCollideWithOverride(const btCollisionObject * co) const
	static int _bind_checkCollideWithOverride(lua_State *L) {
		if (!_lg_typecheck_checkCollideWithOverride(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btRigidBody::checkCollideWithOverride(const btCollisionObject * co) const function, expected prototype:\nbool btRigidBody::checkCollideWithOverride(const btCollisionObject * co) const\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		const btCollisionObject* co=(Luna< btCollisionObject >::check(L,2));

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btRigidBody::checkCollideWithOverride(const btCollisionObject *) const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		bool lret = self->checkCollideWithOverride(co);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btRigidBody::addConstraintRef(btTypedConstraint * c)
	static int _bind_addConstraintRef(lua_State *L) {
		if (!_lg_typecheck_addConstraintRef(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::addConstraintRef(btTypedConstraint * c) function, expected prototype:\nvoid btRigidBody::addConstraintRef(btTypedConstraint * c)\nClass arguments details:\narg 1 ID = 66271199\n");
		}

		btTypedConstraint* c=(Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,2));

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::addConstraintRef(btTypedConstraint *). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->addConstraintRef(c);

		return 0;
	}

	// void btRigidBody::removeConstraintRef(btTypedConstraint * c)
	static int _bind_removeConstraintRef(lua_State *L) {
		if (!_lg_typecheck_removeConstraintRef(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::removeConstraintRef(btTypedConstraint * c) function, expected prototype:\nvoid btRigidBody::removeConstraintRef(btTypedConstraint * c)\nClass arguments details:\narg 1 ID = 66271199\n");
		}

		btTypedConstraint* c=(Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,2));

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::removeConstraintRef(btTypedConstraint *). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->removeConstraintRef(c);

		return 0;
	}

	// btTypedConstraint * btRigidBody::getConstraintRef(int index)
	static int _bind_getConstraintRef(lua_State *L) {
		if (!_lg_typecheck_getConstraintRef(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTypedConstraint * btRigidBody::getConstraintRef(int index) function, expected prototype:\nbtTypedConstraint * btRigidBody::getConstraintRef(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTypedConstraint * btRigidBody::getConstraintRef(int). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		btTypedConstraint * lret = self->getConstraintRef(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTypedConstraint >::push(L,lret,false);

		return 1;
	}

	// int btRigidBody::getNumConstraintRefs() const
	static int _bind_getNumConstraintRefs(lua_State *L) {
		if (!_lg_typecheck_getNumConstraintRefs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btRigidBody::getNumConstraintRefs() const function, expected prototype:\nint btRigidBody::getNumConstraintRefs() const\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btRigidBody::getNumConstraintRefs() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		int lret = self->getNumConstraintRefs();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btRigidBody::setFlags(int flags)
	static int _bind_setFlags(lua_State *L) {
		if (!_lg_typecheck_setFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::setFlags(int flags) function, expected prototype:\nvoid btRigidBody::setFlags(int flags)\nClass arguments details:\n");
		}

		int flags=(int)lua_tointeger(L,2);

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::setFlags(int). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setFlags(flags);

		return 0;
	}

	// int btRigidBody::getFlags() const
	static int _bind_getFlags(lua_State *L) {
		if (!_lg_typecheck_getFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btRigidBody::getFlags() const function, expected prototype:\nint btRigidBody::getFlags() const\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btRigidBody::getFlags() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		int lret = self->getFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btRigidBody::computeGyroscopicForce(float maxGyroscopicForce) const
	static int _bind_computeGyroscopicForce(lua_State *L) {
		if (!_lg_typecheck_computeGyroscopicForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btRigidBody::computeGyroscopicForce(float maxGyroscopicForce) const function, expected prototype:\nbtVector3 btRigidBody::computeGyroscopicForce(float maxGyroscopicForce) const\nClass arguments details:\n");
		}

		float maxGyroscopicForce=(float)lua_tonumber(L,2);

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btRigidBody::computeGyroscopicForce(float) const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		btVector3 stack_lret = self->computeGyroscopicForce(maxGyroscopicForce);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// int btRigidBody::calculateSerializeBufferSize() const
	static int _bind_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btRigidBody::calculateSerializeBufferSize() const function, expected prototype:\nint btRigidBody::calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btRigidBody::calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		int lret = self->calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static const btRigidBody * btRigidBody::upcast(const btCollisionObject * colObj)
	static int _bind_upcast_overload_1(lua_State *L) {
		if (!_lg_typecheck_upcast_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static const btRigidBody * btRigidBody::upcast(const btCollisionObject * colObj) function, expected prototype:\nstatic const btRigidBody * btRigidBody::upcast(const btCollisionObject * colObj)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		const btCollisionObject* colObj=(Luna< btCollisionObject >::check(L,1));

		const btRigidBody * lret = btRigidBody::upcast(colObj);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btRigidBody >::push(L,lret,false);

		return 1;
	}

	// static btRigidBody * btRigidBody::upcast(btCollisionObject * colObj)
	static int _bind_upcast_overload_2(lua_State *L) {
		if (!_lg_typecheck_upcast_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static btRigidBody * btRigidBody::upcast(btCollisionObject * colObj) function, expected prototype:\nstatic btRigidBody * btRigidBody::upcast(btCollisionObject * colObj)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		btCollisionObject* colObj=(Luna< btCollisionObject >::check(L,1));

		btRigidBody * lret = btRigidBody::upcast(colObj);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btRigidBody >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btRigidBody::upcast
	static int _bind_upcast(lua_State *L) {
		if (_lg_typecheck_upcast_overload_1(L)) return _bind_upcast_overload_1(L);
		if (_lg_typecheck_upcast_overload_2(L)) return _bind_upcast_overload_2(L);

		luaL_error(L, "error in function upcast, cannot match any of the overloads for function upcast:\n  upcast(const btCollisionObject *)\n  upcast(btCollisionObject *)\n");
		return 0;
	}

	// int btRigidBody::m_contactSolverType()
	static int _bind_getContactSolverType(lua_State *L) {
		if (!_lg_typecheck_getContactSolverType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btRigidBody::m_contactSolverType() function, expected prototype:\nint btRigidBody::m_contactSolverType()\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btRigidBody::m_contactSolverType(). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		int lret = self->m_contactSolverType;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btRigidBody::m_frictionSolverType()
	static int _bind_getFrictionSolverType(lua_State *L) {
		if (!_lg_typecheck_getFrictionSolverType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btRigidBody::m_frictionSolverType() function, expected prototype:\nint btRigidBody::m_frictionSolverType()\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btRigidBody::m_frictionSolverType(). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		int lret = self->m_frictionSolverType;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btRigidBody::m_contactSolverType(int value)
	static int _bind_setContactSolverType(lua_State *L) {
		if (!_lg_typecheck_setContactSolverType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::m_contactSolverType(int value) function, expected prototype:\nvoid btRigidBody::m_contactSolverType(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::m_contactSolverType(int). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->m_contactSolverType = value;

		return 0;
	}

	// void btRigidBody::m_frictionSolverType(int value)
	static int _bind_setFrictionSolverType(lua_State *L) {
		if (!_lg_typecheck_setFrictionSolverType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::m_frictionSolverType(int value) function, expected prototype:\nvoid btRigidBody::m_frictionSolverType(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::m_frictionSolverType(int). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->m_frictionSolverType = value;

		return 0;
	}

	// void btRigidBody::base_setCollisionShape(btCollisionShape * collisionShape)
	static int _bind_base_setCollisionShape(lua_State *L) {
		if (!_lg_typecheck_base_setCollisionShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btRigidBody::base_setCollisionShape(btCollisionShape * collisionShape) function, expected prototype:\nvoid btRigidBody::base_setCollisionShape(btCollisionShape * collisionShape)\nClass arguments details:\narg 1 ID = 58243831\n");
		}

		btCollisionShape* collisionShape=(Luna< btCollisionShape >::check(L,2));

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btRigidBody::base_setCollisionShape(btCollisionShape *). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->btRigidBody::setCollisionShape(collisionShape);

		return 0;
	}

	// bool btRigidBody::base_checkCollideWithOverride(const btCollisionObject * co) const
	static int _bind_base_checkCollideWithOverride(lua_State *L) {
		if (!_lg_typecheck_base_checkCollideWithOverride(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btRigidBody::base_checkCollideWithOverride(const btCollisionObject * co) const function, expected prototype:\nbool btRigidBody::base_checkCollideWithOverride(const btCollisionObject * co) const\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		const btCollisionObject* co=(Luna< btCollisionObject >::check(L,2));

		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btRigidBody::base_checkCollideWithOverride(const btCollisionObject *) const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		bool lret = self->btRigidBody::checkCollideWithOverride(co);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int btRigidBody::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btRigidBody::base_calculateSerializeBufferSize() const function, expected prototype:\nint btRigidBody::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btRigidBody* self=Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btRigidBody::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		int lret = self->btRigidBody::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btRigidBody* LunaTraits< btRigidBody >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btRigidBody::_bind_ctor(L);
}

void LunaTraits< btRigidBody >::_bind_dtor(btRigidBody* obj) {
	delete obj;
}

const char LunaTraits< btRigidBody >::className[] = "btRigidBody";
const char LunaTraits< btRigidBody >::fullName[] = "btRigidBody";
const char LunaTraits< btRigidBody >::moduleName[] = "bullet";
const char* LunaTraits< btRigidBody >::parents[] = {"bullet.btCollisionObject", 0};
const int LunaTraits< btRigidBody >::hash = 84771739;
const int LunaTraits< btRigidBody >::uniqueIDs[] = {85758361,0};

luna_RegType LunaTraits< btRigidBody >::methods[] = {
	{"proceedToTransform", &luna_wrapper_btRigidBody::_bind_proceedToTransform},
	{"predictIntegratedTransform", &luna_wrapper_btRigidBody::_bind_predictIntegratedTransform},
	{"saveKinematicState", &luna_wrapper_btRigidBody::_bind_saveKinematicState},
	{"applyGravity", &luna_wrapper_btRigidBody::_bind_applyGravity},
	{"setGravity", &luna_wrapper_btRigidBody::_bind_setGravity},
	{"getGravity", &luna_wrapper_btRigidBody::_bind_getGravity},
	{"setDamping", &luna_wrapper_btRigidBody::_bind_setDamping},
	{"getLinearDamping", &luna_wrapper_btRigidBody::_bind_getLinearDamping},
	{"getAngularDamping", &luna_wrapper_btRigidBody::_bind_getAngularDamping},
	{"getLinearSleepingThreshold", &luna_wrapper_btRigidBody::_bind_getLinearSleepingThreshold},
	{"getAngularSleepingThreshold", &luna_wrapper_btRigidBody::_bind_getAngularSleepingThreshold},
	{"applyDamping", &luna_wrapper_btRigidBody::_bind_applyDamping},
	{"getCollisionShape", &luna_wrapper_btRigidBody::_bind_getCollisionShape},
	{"setMassProps", &luna_wrapper_btRigidBody::_bind_setMassProps},
	{"getLinearFactor", &luna_wrapper_btRigidBody::_bind_getLinearFactor},
	{"setLinearFactor", &luna_wrapper_btRigidBody::_bind_setLinearFactor},
	{"getInvMass", &luna_wrapper_btRigidBody::_bind_getInvMass},
	{"getInvInertiaTensorWorld", &luna_wrapper_btRigidBody::_bind_getInvInertiaTensorWorld},
	{"integrateVelocities", &luna_wrapper_btRigidBody::_bind_integrateVelocities},
	{"setCenterOfMassTransform", &luna_wrapper_btRigidBody::_bind_setCenterOfMassTransform},
	{"applyCentralForce", &luna_wrapper_btRigidBody::_bind_applyCentralForce},
	{"getTotalForce", &luna_wrapper_btRigidBody::_bind_getTotalForce},
	{"getTotalTorque", &luna_wrapper_btRigidBody::_bind_getTotalTorque},
	{"getInvInertiaDiagLocal", &luna_wrapper_btRigidBody::_bind_getInvInertiaDiagLocal},
	{"setInvInertiaDiagLocal", &luna_wrapper_btRigidBody::_bind_setInvInertiaDiagLocal},
	{"setSleepingThresholds", &luna_wrapper_btRigidBody::_bind_setSleepingThresholds},
	{"applyTorque", &luna_wrapper_btRigidBody::_bind_applyTorque},
	{"applyForce", &luna_wrapper_btRigidBody::_bind_applyForce},
	{"applyCentralImpulse", &luna_wrapper_btRigidBody::_bind_applyCentralImpulse},
	{"applyTorqueImpulse", &luna_wrapper_btRigidBody::_bind_applyTorqueImpulse},
	{"applyImpulse", &luna_wrapper_btRigidBody::_bind_applyImpulse},
	{"clearForces", &luna_wrapper_btRigidBody::_bind_clearForces},
	{"updateInertiaTensor", &luna_wrapper_btRigidBody::_bind_updateInertiaTensor},
	{"getCenterOfMassPosition", &luna_wrapper_btRigidBody::_bind_getCenterOfMassPosition},
	{"getOrientation", &luna_wrapper_btRigidBody::_bind_getOrientation},
	{"getCenterOfMassTransform", &luna_wrapper_btRigidBody::_bind_getCenterOfMassTransform},
	{"getLinearVelocity", &luna_wrapper_btRigidBody::_bind_getLinearVelocity},
	{"getAngularVelocity", &luna_wrapper_btRigidBody::_bind_getAngularVelocity},
	{"setLinearVelocity", &luna_wrapper_btRigidBody::_bind_setLinearVelocity},
	{"setAngularVelocity", &luna_wrapper_btRigidBody::_bind_setAngularVelocity},
	{"getVelocityInLocalPoint", &luna_wrapper_btRigidBody::_bind_getVelocityInLocalPoint},
	{"translate", &luna_wrapper_btRigidBody::_bind_translate},
	{"getAabb", &luna_wrapper_btRigidBody::_bind_getAabb},
	{"computeImpulseDenominator", &luna_wrapper_btRigidBody::_bind_computeImpulseDenominator},
	{"computeAngularImpulseDenominator", &luna_wrapper_btRigidBody::_bind_computeAngularImpulseDenominator},
	{"updateDeactivation", &luna_wrapper_btRigidBody::_bind_updateDeactivation},
	{"wantsSleeping", &luna_wrapper_btRigidBody::_bind_wantsSleeping},
	{"getBroadphaseProxy", &luna_wrapper_btRigidBody::_bind_getBroadphaseProxy},
	{"setNewBroadphaseProxy", &luna_wrapper_btRigidBody::_bind_setNewBroadphaseProxy},
	{"getMotionState", &luna_wrapper_btRigidBody::_bind_getMotionState},
	{"setMotionState", &luna_wrapper_btRigidBody::_bind_setMotionState},
	{"setAngularFactor", &luna_wrapper_btRigidBody::_bind_setAngularFactor},
	{"getAngularFactor", &luna_wrapper_btRigidBody::_bind_getAngularFactor},
	{"isInWorld", &luna_wrapper_btRigidBody::_bind_isInWorld},
	{"checkCollideWithOverride", &luna_wrapper_btRigidBody::_bind_checkCollideWithOverride},
	{"addConstraintRef", &luna_wrapper_btRigidBody::_bind_addConstraintRef},
	{"removeConstraintRef", &luna_wrapper_btRigidBody::_bind_removeConstraintRef},
	{"getConstraintRef", &luna_wrapper_btRigidBody::_bind_getConstraintRef},
	{"getNumConstraintRefs", &luna_wrapper_btRigidBody::_bind_getNumConstraintRefs},
	{"setFlags", &luna_wrapper_btRigidBody::_bind_setFlags},
	{"getFlags", &luna_wrapper_btRigidBody::_bind_getFlags},
	{"computeGyroscopicForce", &luna_wrapper_btRigidBody::_bind_computeGyroscopicForce},
	{"calculateSerializeBufferSize", &luna_wrapper_btRigidBody::_bind_calculateSerializeBufferSize},
	{"upcast", &luna_wrapper_btRigidBody::_bind_upcast},
	{"getContactSolverType", &luna_wrapper_btRigidBody::_bind_getContactSolverType},
	{"getFrictionSolverType", &luna_wrapper_btRigidBody::_bind_getFrictionSolverType},
	{"setContactSolverType", &luna_wrapper_btRigidBody::_bind_setContactSolverType},
	{"setFrictionSolverType", &luna_wrapper_btRigidBody::_bind_setFrictionSolverType},
	{"base_setCollisionShape", &luna_wrapper_btRigidBody::_bind_base_setCollisionShape},
	{"base_checkCollideWithOverride", &luna_wrapper_btRigidBody::_bind_base_checkCollideWithOverride},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btRigidBody::_bind_base_calculateSerializeBufferSize},
	{"__eq", &luna_wrapper_btRigidBody::_bind___eq},
	{"fromVoid", &luna_wrapper_btRigidBody::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btRigidBody::_bind_asVoid},
	{"getTable", &luna_wrapper_btRigidBody::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btRigidBody >::converters[] = {
	{"btCollisionObject", &luna_wrapper_btRigidBody::_cast_from_btCollisionObject},
	{0,0}
};

luna_RegEnumType LunaTraits< btRigidBody >::enumValues[] = {
	{0,0}
};


