#include <plug_common.h>

#include <luna/wrappers/wrapper_b2RevoluteJoint.h>

class luna_wrapper_b2RevoluteJoint {
public:
	typedef Luna< b2RevoluteJoint > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		b2Joint* self=(Luna< b2Joint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<b2Joint,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78564754) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2Joint*)");
		}

		b2Joint* rhs =(Luna< b2Joint >::check(L,2));
		b2Joint* self=(Luna< b2Joint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_b2Joint(lua_State *L) {
		// all checked are already performed before reaching this point.
		//b2RevoluteJoint* ptr= dynamic_cast< b2RevoluteJoint* >(Luna< b2Joint >::check(L,1));
		b2RevoluteJoint* ptr= luna_caster< b2Joint, b2RevoluteJoint >::cast(Luna< b2Joint >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< b2RevoluteJoint >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetAnchorA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAnchorB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLocalAnchorA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLocalAnchorB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetReferenceAngle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetJointAngle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetJointSpeed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsLimitEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EnableLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLowerLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUpperLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetLimits(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsMotorEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EnableMotor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMotorSpeed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMotorSpeed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMaxMotorTorque(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMaxMotorTorque(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetReactionForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetReactionTorque(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMotorTorque(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Dump(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetAnchorA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetAnchorB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetReactionForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetReactionTorque(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Dump(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// b2Vec2 b2RevoluteJoint::GetAnchorA() const
	static int _bind_GetAnchorA(lua_State *L) {
		if (!_lg_typecheck_GetAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2RevoluteJoint::GetAnchorA() const function, expected prototype:\nb2Vec2 b2RevoluteJoint::GetAnchorA() const\nClass arguments details:\n");
		}


		b2RevoluteJoint* self=Luna< b2Joint >::checkSubType< b2RevoluteJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2RevoluteJoint::GetAnchorA() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetAnchorA();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2RevoluteJoint::GetAnchorB() const
	static int _bind_GetAnchorB(lua_State *L) {
		if (!_lg_typecheck_GetAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2RevoluteJoint::GetAnchorB() const function, expected prototype:\nb2Vec2 b2RevoluteJoint::GetAnchorB() const\nClass arguments details:\n");
		}


		b2RevoluteJoint* self=Luna< b2Joint >::checkSubType< b2RevoluteJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2RevoluteJoint::GetAnchorB() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetAnchorB();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// const b2Vec2 & b2RevoluteJoint::GetLocalAnchorA() const
	static int _bind_GetLocalAnchorA(lua_State *L) {
		if (!_lg_typecheck_GetLocalAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Vec2 & b2RevoluteJoint::GetLocalAnchorA() const function, expected prototype:\nconst b2Vec2 & b2RevoluteJoint::GetLocalAnchorA() const\nClass arguments details:\n");
		}


		b2RevoluteJoint* self=Luna< b2Joint >::checkSubType< b2RevoluteJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Vec2 & b2RevoluteJoint::GetLocalAnchorA() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->GetLocalAnchorA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// const b2Vec2 & b2RevoluteJoint::GetLocalAnchorB() const
	static int _bind_GetLocalAnchorB(lua_State *L) {
		if (!_lg_typecheck_GetLocalAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Vec2 & b2RevoluteJoint::GetLocalAnchorB() const function, expected prototype:\nconst b2Vec2 & b2RevoluteJoint::GetLocalAnchorB() const\nClass arguments details:\n");
		}


		b2RevoluteJoint* self=Luna< b2Joint >::checkSubType< b2RevoluteJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Vec2 & b2RevoluteJoint::GetLocalAnchorB() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->GetLocalAnchorB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// float b2RevoluteJoint::GetReferenceAngle() const
	static int _bind_GetReferenceAngle(lua_State *L) {
		if (!_lg_typecheck_GetReferenceAngle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2RevoluteJoint::GetReferenceAngle() const function, expected prototype:\nfloat b2RevoluteJoint::GetReferenceAngle() const\nClass arguments details:\n");
		}


		b2RevoluteJoint* self=Luna< b2Joint >::checkSubType< b2RevoluteJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2RevoluteJoint::GetReferenceAngle() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetReferenceAngle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2RevoluteJoint::GetJointAngle() const
	static int _bind_GetJointAngle(lua_State *L) {
		if (!_lg_typecheck_GetJointAngle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2RevoluteJoint::GetJointAngle() const function, expected prototype:\nfloat b2RevoluteJoint::GetJointAngle() const\nClass arguments details:\n");
		}


		b2RevoluteJoint* self=Luna< b2Joint >::checkSubType< b2RevoluteJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2RevoluteJoint::GetJointAngle() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetJointAngle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2RevoluteJoint::GetJointSpeed() const
	static int _bind_GetJointSpeed(lua_State *L) {
		if (!_lg_typecheck_GetJointSpeed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2RevoluteJoint::GetJointSpeed() const function, expected prototype:\nfloat b2RevoluteJoint::GetJointSpeed() const\nClass arguments details:\n");
		}


		b2RevoluteJoint* self=Luna< b2Joint >::checkSubType< b2RevoluteJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2RevoluteJoint::GetJointSpeed() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetJointSpeed();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool b2RevoluteJoint::IsLimitEnabled() const
	static int _bind_IsLimitEnabled(lua_State *L) {
		if (!_lg_typecheck_IsLimitEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2RevoluteJoint::IsLimitEnabled() const function, expected prototype:\nbool b2RevoluteJoint::IsLimitEnabled() const\nClass arguments details:\n");
		}


		b2RevoluteJoint* self=Luna< b2Joint >::checkSubType< b2RevoluteJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2RevoluteJoint::IsLimitEnabled() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		bool lret = self->IsLimitEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2RevoluteJoint::EnableLimit(bool flag)
	static int _bind_EnableLimit(lua_State *L) {
		if (!_lg_typecheck_EnableLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2RevoluteJoint::EnableLimit(bool flag) function, expected prototype:\nvoid b2RevoluteJoint::EnableLimit(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		b2RevoluteJoint* self=Luna< b2Joint >::checkSubType< b2RevoluteJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2RevoluteJoint::EnableLimit(bool). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->EnableLimit(flag);

		return 0;
	}

	// float b2RevoluteJoint::GetLowerLimit() const
	static int _bind_GetLowerLimit(lua_State *L) {
		if (!_lg_typecheck_GetLowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2RevoluteJoint::GetLowerLimit() const function, expected prototype:\nfloat b2RevoluteJoint::GetLowerLimit() const\nClass arguments details:\n");
		}


		b2RevoluteJoint* self=Luna< b2Joint >::checkSubType< b2RevoluteJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2RevoluteJoint::GetLowerLimit() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetLowerLimit();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2RevoluteJoint::GetUpperLimit() const
	static int _bind_GetUpperLimit(lua_State *L) {
		if (!_lg_typecheck_GetUpperLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2RevoluteJoint::GetUpperLimit() const function, expected prototype:\nfloat b2RevoluteJoint::GetUpperLimit() const\nClass arguments details:\n");
		}


		b2RevoluteJoint* self=Luna< b2Joint >::checkSubType< b2RevoluteJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2RevoluteJoint::GetUpperLimit() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetUpperLimit();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2RevoluteJoint::SetLimits(float lower, float upper)
	static int _bind_SetLimits(lua_State *L) {
		if (!_lg_typecheck_SetLimits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2RevoluteJoint::SetLimits(float lower, float upper) function, expected prototype:\nvoid b2RevoluteJoint::SetLimits(float lower, float upper)\nClass arguments details:\n");
		}

		float lower=(float)lua_tonumber(L,2);
		float upper=(float)lua_tonumber(L,3);

		b2RevoluteJoint* self=Luna< b2Joint >::checkSubType< b2RevoluteJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2RevoluteJoint::SetLimits(float, float). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->SetLimits(lower, upper);

		return 0;
	}

	// bool b2RevoluteJoint::IsMotorEnabled() const
	static int _bind_IsMotorEnabled(lua_State *L) {
		if (!_lg_typecheck_IsMotorEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2RevoluteJoint::IsMotorEnabled() const function, expected prototype:\nbool b2RevoluteJoint::IsMotorEnabled() const\nClass arguments details:\n");
		}


		b2RevoluteJoint* self=Luna< b2Joint >::checkSubType< b2RevoluteJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2RevoluteJoint::IsMotorEnabled() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		bool lret = self->IsMotorEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2RevoluteJoint::EnableMotor(bool flag)
	static int _bind_EnableMotor(lua_State *L) {
		if (!_lg_typecheck_EnableMotor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2RevoluteJoint::EnableMotor(bool flag) function, expected prototype:\nvoid b2RevoluteJoint::EnableMotor(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		b2RevoluteJoint* self=Luna< b2Joint >::checkSubType< b2RevoluteJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2RevoluteJoint::EnableMotor(bool). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->EnableMotor(flag);

		return 0;
	}

	// void b2RevoluteJoint::SetMotorSpeed(float speed)
	static int _bind_SetMotorSpeed(lua_State *L) {
		if (!_lg_typecheck_SetMotorSpeed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2RevoluteJoint::SetMotorSpeed(float speed) function, expected prototype:\nvoid b2RevoluteJoint::SetMotorSpeed(float speed)\nClass arguments details:\n");
		}

		float speed=(float)lua_tonumber(L,2);

		b2RevoluteJoint* self=Luna< b2Joint >::checkSubType< b2RevoluteJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2RevoluteJoint::SetMotorSpeed(float). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->SetMotorSpeed(speed);

		return 0;
	}

	// float b2RevoluteJoint::GetMotorSpeed() const
	static int _bind_GetMotorSpeed(lua_State *L) {
		if (!_lg_typecheck_GetMotorSpeed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2RevoluteJoint::GetMotorSpeed() const function, expected prototype:\nfloat b2RevoluteJoint::GetMotorSpeed() const\nClass arguments details:\n");
		}


		b2RevoluteJoint* self=Luna< b2Joint >::checkSubType< b2RevoluteJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2RevoluteJoint::GetMotorSpeed() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetMotorSpeed();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2RevoluteJoint::SetMaxMotorTorque(float torque)
	static int _bind_SetMaxMotorTorque(lua_State *L) {
		if (!_lg_typecheck_SetMaxMotorTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2RevoluteJoint::SetMaxMotorTorque(float torque) function, expected prototype:\nvoid b2RevoluteJoint::SetMaxMotorTorque(float torque)\nClass arguments details:\n");
		}

		float torque=(float)lua_tonumber(L,2);

		b2RevoluteJoint* self=Luna< b2Joint >::checkSubType< b2RevoluteJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2RevoluteJoint::SetMaxMotorTorque(float). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->SetMaxMotorTorque(torque);

		return 0;
	}

	// float b2RevoluteJoint::GetMaxMotorTorque() const
	static int _bind_GetMaxMotorTorque(lua_State *L) {
		if (!_lg_typecheck_GetMaxMotorTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2RevoluteJoint::GetMaxMotorTorque() const function, expected prototype:\nfloat b2RevoluteJoint::GetMaxMotorTorque() const\nClass arguments details:\n");
		}


		b2RevoluteJoint* self=Luna< b2Joint >::checkSubType< b2RevoluteJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2RevoluteJoint::GetMaxMotorTorque() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetMaxMotorTorque();
		lua_pushnumber(L,lret);

		return 1;
	}

	// b2Vec2 b2RevoluteJoint::GetReactionForce(float inv_dt) const
	static int _bind_GetReactionForce(lua_State *L) {
		if (!_lg_typecheck_GetReactionForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2RevoluteJoint::GetReactionForce(float inv_dt) const function, expected prototype:\nb2Vec2 b2RevoluteJoint::GetReactionForce(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2RevoluteJoint* self=Luna< b2Joint >::checkSubType< b2RevoluteJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2RevoluteJoint::GetReactionForce(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetReactionForce(inv_dt);
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// float b2RevoluteJoint::GetReactionTorque(float inv_dt) const
	static int _bind_GetReactionTorque(lua_State *L) {
		if (!_lg_typecheck_GetReactionTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2RevoluteJoint::GetReactionTorque(float inv_dt) const function, expected prototype:\nfloat b2RevoluteJoint::GetReactionTorque(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2RevoluteJoint* self=Luna< b2Joint >::checkSubType< b2RevoluteJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2RevoluteJoint::GetReactionTorque(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetReactionTorque(inv_dt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2RevoluteJoint::GetMotorTorque(float inv_dt) const
	static int _bind_GetMotorTorque(lua_State *L) {
		if (!_lg_typecheck_GetMotorTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2RevoluteJoint::GetMotorTorque(float inv_dt) const function, expected prototype:\nfloat b2RevoluteJoint::GetMotorTorque(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2RevoluteJoint* self=Luna< b2Joint >::checkSubType< b2RevoluteJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2RevoluteJoint::GetMotorTorque(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetMotorTorque(inv_dt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2RevoluteJoint::Dump()
	static int _bind_Dump(lua_State *L) {
		if (!_lg_typecheck_Dump(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2RevoluteJoint::Dump() function, expected prototype:\nvoid b2RevoluteJoint::Dump()\nClass arguments details:\n");
		}


		b2RevoluteJoint* self=Luna< b2Joint >::checkSubType< b2RevoluteJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2RevoluteJoint::Dump(). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->Dump();

		return 0;
	}

	// b2Vec2 b2RevoluteJoint::base_GetAnchorA() const
	static int _bind_base_GetAnchorA(lua_State *L) {
		if (!_lg_typecheck_base_GetAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2RevoluteJoint::base_GetAnchorA() const function, expected prototype:\nb2Vec2 b2RevoluteJoint::base_GetAnchorA() const\nClass arguments details:\n");
		}


		b2RevoluteJoint* self=Luna< b2Joint >::checkSubType< b2RevoluteJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2RevoluteJoint::base_GetAnchorA() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->b2RevoluteJoint::GetAnchorA();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2RevoluteJoint::base_GetAnchorB() const
	static int _bind_base_GetAnchorB(lua_State *L) {
		if (!_lg_typecheck_base_GetAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2RevoluteJoint::base_GetAnchorB() const function, expected prototype:\nb2Vec2 b2RevoluteJoint::base_GetAnchorB() const\nClass arguments details:\n");
		}


		b2RevoluteJoint* self=Luna< b2Joint >::checkSubType< b2RevoluteJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2RevoluteJoint::base_GetAnchorB() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->b2RevoluteJoint::GetAnchorB();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2RevoluteJoint::base_GetReactionForce(float inv_dt) const
	static int _bind_base_GetReactionForce(lua_State *L) {
		if (!_lg_typecheck_base_GetReactionForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2RevoluteJoint::base_GetReactionForce(float inv_dt) const function, expected prototype:\nb2Vec2 b2RevoluteJoint::base_GetReactionForce(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2RevoluteJoint* self=Luna< b2Joint >::checkSubType< b2RevoluteJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2RevoluteJoint::base_GetReactionForce(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->b2RevoluteJoint::GetReactionForce(inv_dt);
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// float b2RevoluteJoint::base_GetReactionTorque(float inv_dt) const
	static int _bind_base_GetReactionTorque(lua_State *L) {
		if (!_lg_typecheck_base_GetReactionTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2RevoluteJoint::base_GetReactionTorque(float inv_dt) const function, expected prototype:\nfloat b2RevoluteJoint::base_GetReactionTorque(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2RevoluteJoint* self=Luna< b2Joint >::checkSubType< b2RevoluteJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2RevoluteJoint::base_GetReactionTorque(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->b2RevoluteJoint::GetReactionTorque(inv_dt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2RevoluteJoint::base_Dump()
	static int _bind_base_Dump(lua_State *L) {
		if (!_lg_typecheck_base_Dump(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2RevoluteJoint::base_Dump() function, expected prototype:\nvoid b2RevoluteJoint::base_Dump()\nClass arguments details:\n");
		}


		b2RevoluteJoint* self=Luna< b2Joint >::checkSubType< b2RevoluteJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2RevoluteJoint::base_Dump(). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->b2RevoluteJoint::Dump();

		return 0;
	}


	// Operator binds:

};

b2RevoluteJoint* LunaTraits< b2RevoluteJoint >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< b2RevoluteJoint >::_bind_dtor(b2RevoluteJoint* obj) {
	delete obj;
}

const char LunaTraits< b2RevoluteJoint >::className[] = "b2RevoluteJoint";
const char LunaTraits< b2RevoluteJoint >::fullName[] = "b2RevoluteJoint";
const char LunaTraits< b2RevoluteJoint >::moduleName[] = "box2d";
const char* LunaTraits< b2RevoluteJoint >::parents[] = {"box2d.b2Joint", 0};
const int LunaTraits< b2RevoluteJoint >::hash = 45934337;
const int LunaTraits< b2RevoluteJoint >::uniqueIDs[] = {78564754,0};

luna_RegType LunaTraits< b2RevoluteJoint >::methods[] = {
	{"GetAnchorA", &luna_wrapper_b2RevoluteJoint::_bind_GetAnchorA},
	{"GetAnchorB", &luna_wrapper_b2RevoluteJoint::_bind_GetAnchorB},
	{"GetLocalAnchorA", &luna_wrapper_b2RevoluteJoint::_bind_GetLocalAnchorA},
	{"GetLocalAnchorB", &luna_wrapper_b2RevoluteJoint::_bind_GetLocalAnchorB},
	{"GetReferenceAngle", &luna_wrapper_b2RevoluteJoint::_bind_GetReferenceAngle},
	{"GetJointAngle", &luna_wrapper_b2RevoluteJoint::_bind_GetJointAngle},
	{"GetJointSpeed", &luna_wrapper_b2RevoluteJoint::_bind_GetJointSpeed},
	{"IsLimitEnabled", &luna_wrapper_b2RevoluteJoint::_bind_IsLimitEnabled},
	{"EnableLimit", &luna_wrapper_b2RevoluteJoint::_bind_EnableLimit},
	{"GetLowerLimit", &luna_wrapper_b2RevoluteJoint::_bind_GetLowerLimit},
	{"GetUpperLimit", &luna_wrapper_b2RevoluteJoint::_bind_GetUpperLimit},
	{"SetLimits", &luna_wrapper_b2RevoluteJoint::_bind_SetLimits},
	{"IsMotorEnabled", &luna_wrapper_b2RevoluteJoint::_bind_IsMotorEnabled},
	{"EnableMotor", &luna_wrapper_b2RevoluteJoint::_bind_EnableMotor},
	{"SetMotorSpeed", &luna_wrapper_b2RevoluteJoint::_bind_SetMotorSpeed},
	{"GetMotorSpeed", &luna_wrapper_b2RevoluteJoint::_bind_GetMotorSpeed},
	{"SetMaxMotorTorque", &luna_wrapper_b2RevoluteJoint::_bind_SetMaxMotorTorque},
	{"GetMaxMotorTorque", &luna_wrapper_b2RevoluteJoint::_bind_GetMaxMotorTorque},
	{"GetReactionForce", &luna_wrapper_b2RevoluteJoint::_bind_GetReactionForce},
	{"GetReactionTorque", &luna_wrapper_b2RevoluteJoint::_bind_GetReactionTorque},
	{"GetMotorTorque", &luna_wrapper_b2RevoluteJoint::_bind_GetMotorTorque},
	{"Dump", &luna_wrapper_b2RevoluteJoint::_bind_Dump},
	{"base_GetAnchorA", &luna_wrapper_b2RevoluteJoint::_bind_base_GetAnchorA},
	{"base_GetAnchorB", &luna_wrapper_b2RevoluteJoint::_bind_base_GetAnchorB},
	{"base_GetReactionForce", &luna_wrapper_b2RevoluteJoint::_bind_base_GetReactionForce},
	{"base_GetReactionTorque", &luna_wrapper_b2RevoluteJoint::_bind_base_GetReactionTorque},
	{"base_Dump", &luna_wrapper_b2RevoluteJoint::_bind_base_Dump},
	{"__eq", &luna_wrapper_b2RevoluteJoint::_bind___eq},
	{"getTable", &luna_wrapper_b2RevoluteJoint::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< b2RevoluteJoint >::converters[] = {
	{"b2Joint", &luna_wrapper_b2RevoluteJoint::_cast_from_b2Joint},
	{0,0}
};

luna_RegEnumType LunaTraits< b2RevoluteJoint >::enumValues[] = {
	{0,0}
};


