#include <plug_common.h>

#include <luna/wrappers/wrapper_b2WheelJoint.h>

class luna_wrapper_b2WheelJoint {
public:
	typedef Luna< b2WheelJoint > luna_t;

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

		b2WheelJoint* self= (b2WheelJoint*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2WheelJoint >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78564754) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2Joint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_b2Joint(lua_State *L) {
		// all checked are already performed before reaching this point.
		//b2WheelJoint* ptr= dynamic_cast< b2WheelJoint* >(Luna< b2Joint >::check(L,1));
		b2WheelJoint* ptr= luna_caster< b2Joint, b2WheelJoint >::cast(Luna< b2Joint >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< b2WheelJoint >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_GetLocalAnchorA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLocalAnchorB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLocalAxisA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetJointTranslation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetJointSpeed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_GetMotorTorque(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSpringFrequencyHz(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSpringFrequencyHz(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetSpringDampingRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSpringDampingRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// b2Vec2 b2WheelJoint::GetAnchorA() const
	static int _bind_GetAnchorA(lua_State *L) {
		if (!_lg_typecheck_GetAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2WheelJoint::GetAnchorA() const function, expected prototype:\nb2Vec2 b2WheelJoint::GetAnchorA() const\nClass arguments details:\n");
		}


		b2WheelJoint* self=Luna< b2Joint >::checkSubType< b2WheelJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2WheelJoint::GetAnchorA() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetAnchorA();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2WheelJoint::GetAnchorB() const
	static int _bind_GetAnchorB(lua_State *L) {
		if (!_lg_typecheck_GetAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2WheelJoint::GetAnchorB() const function, expected prototype:\nb2Vec2 b2WheelJoint::GetAnchorB() const\nClass arguments details:\n");
		}


		b2WheelJoint* self=Luna< b2Joint >::checkSubType< b2WheelJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2WheelJoint::GetAnchorB() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetAnchorB();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2WheelJoint::GetReactionForce(float inv_dt) const
	static int _bind_GetReactionForce(lua_State *L) {
		if (!_lg_typecheck_GetReactionForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2WheelJoint::GetReactionForce(float inv_dt) const function, expected prototype:\nb2Vec2 b2WheelJoint::GetReactionForce(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2WheelJoint* self=Luna< b2Joint >::checkSubType< b2WheelJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2WheelJoint::GetReactionForce(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetReactionForce(inv_dt);
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// float b2WheelJoint::GetReactionTorque(float inv_dt) const
	static int _bind_GetReactionTorque(lua_State *L) {
		if (!_lg_typecheck_GetReactionTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2WheelJoint::GetReactionTorque(float inv_dt) const function, expected prototype:\nfloat b2WheelJoint::GetReactionTorque(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2WheelJoint* self=Luna< b2Joint >::checkSubType< b2WheelJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2WheelJoint::GetReactionTorque(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetReactionTorque(inv_dt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const b2Vec2 & b2WheelJoint::GetLocalAnchorA() const
	static int _bind_GetLocalAnchorA(lua_State *L) {
		if (!_lg_typecheck_GetLocalAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Vec2 & b2WheelJoint::GetLocalAnchorA() const function, expected prototype:\nconst b2Vec2 & b2WheelJoint::GetLocalAnchorA() const\nClass arguments details:\n");
		}


		b2WheelJoint* self=Luna< b2Joint >::checkSubType< b2WheelJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Vec2 & b2WheelJoint::GetLocalAnchorA() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->GetLocalAnchorA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// const b2Vec2 & b2WheelJoint::GetLocalAnchorB() const
	static int _bind_GetLocalAnchorB(lua_State *L) {
		if (!_lg_typecheck_GetLocalAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Vec2 & b2WheelJoint::GetLocalAnchorB() const function, expected prototype:\nconst b2Vec2 & b2WheelJoint::GetLocalAnchorB() const\nClass arguments details:\n");
		}


		b2WheelJoint* self=Luna< b2Joint >::checkSubType< b2WheelJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Vec2 & b2WheelJoint::GetLocalAnchorB() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->GetLocalAnchorB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// const b2Vec2 & b2WheelJoint::GetLocalAxisA() const
	static int _bind_GetLocalAxisA(lua_State *L) {
		if (!_lg_typecheck_GetLocalAxisA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Vec2 & b2WheelJoint::GetLocalAxisA() const function, expected prototype:\nconst b2Vec2 & b2WheelJoint::GetLocalAxisA() const\nClass arguments details:\n");
		}


		b2WheelJoint* self=Luna< b2Joint >::checkSubType< b2WheelJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Vec2 & b2WheelJoint::GetLocalAxisA() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->GetLocalAxisA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// float b2WheelJoint::GetJointTranslation() const
	static int _bind_GetJointTranslation(lua_State *L) {
		if (!_lg_typecheck_GetJointTranslation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2WheelJoint::GetJointTranslation() const function, expected prototype:\nfloat b2WheelJoint::GetJointTranslation() const\nClass arguments details:\n");
		}


		b2WheelJoint* self=Luna< b2Joint >::checkSubType< b2WheelJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2WheelJoint::GetJointTranslation() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetJointTranslation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2WheelJoint::GetJointSpeed() const
	static int _bind_GetJointSpeed(lua_State *L) {
		if (!_lg_typecheck_GetJointSpeed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2WheelJoint::GetJointSpeed() const function, expected prototype:\nfloat b2WheelJoint::GetJointSpeed() const\nClass arguments details:\n");
		}


		b2WheelJoint* self=Luna< b2Joint >::checkSubType< b2WheelJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2WheelJoint::GetJointSpeed() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetJointSpeed();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool b2WheelJoint::IsMotorEnabled() const
	static int _bind_IsMotorEnabled(lua_State *L) {
		if (!_lg_typecheck_IsMotorEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2WheelJoint::IsMotorEnabled() const function, expected prototype:\nbool b2WheelJoint::IsMotorEnabled() const\nClass arguments details:\n");
		}


		b2WheelJoint* self=Luna< b2Joint >::checkSubType< b2WheelJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2WheelJoint::IsMotorEnabled() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		bool lret = self->IsMotorEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2WheelJoint::EnableMotor(bool flag)
	static int _bind_EnableMotor(lua_State *L) {
		if (!_lg_typecheck_EnableMotor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2WheelJoint::EnableMotor(bool flag) function, expected prototype:\nvoid b2WheelJoint::EnableMotor(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		b2WheelJoint* self=Luna< b2Joint >::checkSubType< b2WheelJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2WheelJoint::EnableMotor(bool). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->EnableMotor(flag);

		return 0;
	}

	// void b2WheelJoint::SetMotorSpeed(float speed)
	static int _bind_SetMotorSpeed(lua_State *L) {
		if (!_lg_typecheck_SetMotorSpeed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2WheelJoint::SetMotorSpeed(float speed) function, expected prototype:\nvoid b2WheelJoint::SetMotorSpeed(float speed)\nClass arguments details:\n");
		}

		float speed=(float)lua_tonumber(L,2);

		b2WheelJoint* self=Luna< b2Joint >::checkSubType< b2WheelJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2WheelJoint::SetMotorSpeed(float). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->SetMotorSpeed(speed);

		return 0;
	}

	// float b2WheelJoint::GetMotorSpeed() const
	static int _bind_GetMotorSpeed(lua_State *L) {
		if (!_lg_typecheck_GetMotorSpeed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2WheelJoint::GetMotorSpeed() const function, expected prototype:\nfloat b2WheelJoint::GetMotorSpeed() const\nClass arguments details:\n");
		}


		b2WheelJoint* self=Luna< b2Joint >::checkSubType< b2WheelJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2WheelJoint::GetMotorSpeed() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetMotorSpeed();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2WheelJoint::SetMaxMotorTorque(float torque)
	static int _bind_SetMaxMotorTorque(lua_State *L) {
		if (!_lg_typecheck_SetMaxMotorTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2WheelJoint::SetMaxMotorTorque(float torque) function, expected prototype:\nvoid b2WheelJoint::SetMaxMotorTorque(float torque)\nClass arguments details:\n");
		}

		float torque=(float)lua_tonumber(L,2);

		b2WheelJoint* self=Luna< b2Joint >::checkSubType< b2WheelJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2WheelJoint::SetMaxMotorTorque(float). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->SetMaxMotorTorque(torque);

		return 0;
	}

	// float b2WheelJoint::GetMaxMotorTorque() const
	static int _bind_GetMaxMotorTorque(lua_State *L) {
		if (!_lg_typecheck_GetMaxMotorTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2WheelJoint::GetMaxMotorTorque() const function, expected prototype:\nfloat b2WheelJoint::GetMaxMotorTorque() const\nClass arguments details:\n");
		}


		b2WheelJoint* self=Luna< b2Joint >::checkSubType< b2WheelJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2WheelJoint::GetMaxMotorTorque() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetMaxMotorTorque();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2WheelJoint::GetMotorTorque(float inv_dt) const
	static int _bind_GetMotorTorque(lua_State *L) {
		if (!_lg_typecheck_GetMotorTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2WheelJoint::GetMotorTorque(float inv_dt) const function, expected prototype:\nfloat b2WheelJoint::GetMotorTorque(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2WheelJoint* self=Luna< b2Joint >::checkSubType< b2WheelJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2WheelJoint::GetMotorTorque(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetMotorTorque(inv_dt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2WheelJoint::SetSpringFrequencyHz(float hz)
	static int _bind_SetSpringFrequencyHz(lua_State *L) {
		if (!_lg_typecheck_SetSpringFrequencyHz(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2WheelJoint::SetSpringFrequencyHz(float hz) function, expected prototype:\nvoid b2WheelJoint::SetSpringFrequencyHz(float hz)\nClass arguments details:\n");
		}

		float hz=(float)lua_tonumber(L,2);

		b2WheelJoint* self=Luna< b2Joint >::checkSubType< b2WheelJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2WheelJoint::SetSpringFrequencyHz(float). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->SetSpringFrequencyHz(hz);

		return 0;
	}

	// float b2WheelJoint::GetSpringFrequencyHz() const
	static int _bind_GetSpringFrequencyHz(lua_State *L) {
		if (!_lg_typecheck_GetSpringFrequencyHz(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2WheelJoint::GetSpringFrequencyHz() const function, expected prototype:\nfloat b2WheelJoint::GetSpringFrequencyHz() const\nClass arguments details:\n");
		}


		b2WheelJoint* self=Luna< b2Joint >::checkSubType< b2WheelJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2WheelJoint::GetSpringFrequencyHz() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetSpringFrequencyHz();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2WheelJoint::SetSpringDampingRatio(float ratio)
	static int _bind_SetSpringDampingRatio(lua_State *L) {
		if (!_lg_typecheck_SetSpringDampingRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2WheelJoint::SetSpringDampingRatio(float ratio) function, expected prototype:\nvoid b2WheelJoint::SetSpringDampingRatio(float ratio)\nClass arguments details:\n");
		}

		float ratio=(float)lua_tonumber(L,2);

		b2WheelJoint* self=Luna< b2Joint >::checkSubType< b2WheelJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2WheelJoint::SetSpringDampingRatio(float). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->SetSpringDampingRatio(ratio);

		return 0;
	}

	// float b2WheelJoint::GetSpringDampingRatio() const
	static int _bind_GetSpringDampingRatio(lua_State *L) {
		if (!_lg_typecheck_GetSpringDampingRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2WheelJoint::GetSpringDampingRatio() const function, expected prototype:\nfloat b2WheelJoint::GetSpringDampingRatio() const\nClass arguments details:\n");
		}


		b2WheelJoint* self=Luna< b2Joint >::checkSubType< b2WheelJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2WheelJoint::GetSpringDampingRatio() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetSpringDampingRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2WheelJoint::Dump()
	static int _bind_Dump(lua_State *L) {
		if (!_lg_typecheck_Dump(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2WheelJoint::Dump() function, expected prototype:\nvoid b2WheelJoint::Dump()\nClass arguments details:\n");
		}


		b2WheelJoint* self=Luna< b2Joint >::checkSubType< b2WheelJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2WheelJoint::Dump(). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->Dump();

		return 0;
	}

	// b2Vec2 b2WheelJoint::base_GetAnchorA() const
	static int _bind_base_GetAnchorA(lua_State *L) {
		if (!_lg_typecheck_base_GetAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2WheelJoint::base_GetAnchorA() const function, expected prototype:\nb2Vec2 b2WheelJoint::base_GetAnchorA() const\nClass arguments details:\n");
		}


		b2WheelJoint* self=Luna< b2Joint >::checkSubType< b2WheelJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2WheelJoint::base_GetAnchorA() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->b2WheelJoint::GetAnchorA();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2WheelJoint::base_GetAnchorB() const
	static int _bind_base_GetAnchorB(lua_State *L) {
		if (!_lg_typecheck_base_GetAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2WheelJoint::base_GetAnchorB() const function, expected prototype:\nb2Vec2 b2WheelJoint::base_GetAnchorB() const\nClass arguments details:\n");
		}


		b2WheelJoint* self=Luna< b2Joint >::checkSubType< b2WheelJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2WheelJoint::base_GetAnchorB() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->b2WheelJoint::GetAnchorB();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2WheelJoint::base_GetReactionForce(float inv_dt) const
	static int _bind_base_GetReactionForce(lua_State *L) {
		if (!_lg_typecheck_base_GetReactionForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2WheelJoint::base_GetReactionForce(float inv_dt) const function, expected prototype:\nb2Vec2 b2WheelJoint::base_GetReactionForce(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2WheelJoint* self=Luna< b2Joint >::checkSubType< b2WheelJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2WheelJoint::base_GetReactionForce(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->b2WheelJoint::GetReactionForce(inv_dt);
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// float b2WheelJoint::base_GetReactionTorque(float inv_dt) const
	static int _bind_base_GetReactionTorque(lua_State *L) {
		if (!_lg_typecheck_base_GetReactionTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2WheelJoint::base_GetReactionTorque(float inv_dt) const function, expected prototype:\nfloat b2WheelJoint::base_GetReactionTorque(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2WheelJoint* self=Luna< b2Joint >::checkSubType< b2WheelJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2WheelJoint::base_GetReactionTorque(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->b2WheelJoint::GetReactionTorque(inv_dt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2WheelJoint::base_Dump()
	static int _bind_base_Dump(lua_State *L) {
		if (!_lg_typecheck_base_Dump(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2WheelJoint::base_Dump() function, expected prototype:\nvoid b2WheelJoint::base_Dump()\nClass arguments details:\n");
		}


		b2WheelJoint* self=Luna< b2Joint >::checkSubType< b2WheelJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2WheelJoint::base_Dump(). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->b2WheelJoint::Dump();

		return 0;
	}


	// Operator binds:

};

b2WheelJoint* LunaTraits< b2WheelJoint >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2WheelJoint >::_bind_dtor(b2WheelJoint* obj) {
	delete obj;
}

const char LunaTraits< b2WheelJoint >::className[] = "b2WheelJoint";
const char LunaTraits< b2WheelJoint >::fullName[] = "b2WheelJoint";
const char LunaTraits< b2WheelJoint >::moduleName[] = "box2d";
const char* LunaTraits< b2WheelJoint >::parents[] = {"box2d.b2Joint", 0};
const int LunaTraits< b2WheelJoint >::hash = 54129300;
const int LunaTraits< b2WheelJoint >::uniqueIDs[] = {78564754,0};

luna_RegType LunaTraits< b2WheelJoint >::methods[] = {
	{"GetAnchorA", &luna_wrapper_b2WheelJoint::_bind_GetAnchorA},
	{"GetAnchorB", &luna_wrapper_b2WheelJoint::_bind_GetAnchorB},
	{"GetReactionForce", &luna_wrapper_b2WheelJoint::_bind_GetReactionForce},
	{"GetReactionTorque", &luna_wrapper_b2WheelJoint::_bind_GetReactionTorque},
	{"GetLocalAnchorA", &luna_wrapper_b2WheelJoint::_bind_GetLocalAnchorA},
	{"GetLocalAnchorB", &luna_wrapper_b2WheelJoint::_bind_GetLocalAnchorB},
	{"GetLocalAxisA", &luna_wrapper_b2WheelJoint::_bind_GetLocalAxisA},
	{"GetJointTranslation", &luna_wrapper_b2WheelJoint::_bind_GetJointTranslation},
	{"GetJointSpeed", &luna_wrapper_b2WheelJoint::_bind_GetJointSpeed},
	{"IsMotorEnabled", &luna_wrapper_b2WheelJoint::_bind_IsMotorEnabled},
	{"EnableMotor", &luna_wrapper_b2WheelJoint::_bind_EnableMotor},
	{"SetMotorSpeed", &luna_wrapper_b2WheelJoint::_bind_SetMotorSpeed},
	{"GetMotorSpeed", &luna_wrapper_b2WheelJoint::_bind_GetMotorSpeed},
	{"SetMaxMotorTorque", &luna_wrapper_b2WheelJoint::_bind_SetMaxMotorTorque},
	{"GetMaxMotorTorque", &luna_wrapper_b2WheelJoint::_bind_GetMaxMotorTorque},
	{"GetMotorTorque", &luna_wrapper_b2WheelJoint::_bind_GetMotorTorque},
	{"SetSpringFrequencyHz", &luna_wrapper_b2WheelJoint::_bind_SetSpringFrequencyHz},
	{"GetSpringFrequencyHz", &luna_wrapper_b2WheelJoint::_bind_GetSpringFrequencyHz},
	{"SetSpringDampingRatio", &luna_wrapper_b2WheelJoint::_bind_SetSpringDampingRatio},
	{"GetSpringDampingRatio", &luna_wrapper_b2WheelJoint::_bind_GetSpringDampingRatio},
	{"Dump", &luna_wrapper_b2WheelJoint::_bind_Dump},
	{"base_GetAnchorA", &luna_wrapper_b2WheelJoint::_bind_base_GetAnchorA},
	{"base_GetAnchorB", &luna_wrapper_b2WheelJoint::_bind_base_GetAnchorB},
	{"base_GetReactionForce", &luna_wrapper_b2WheelJoint::_bind_base_GetReactionForce},
	{"base_GetReactionTorque", &luna_wrapper_b2WheelJoint::_bind_base_GetReactionTorque},
	{"base_Dump", &luna_wrapper_b2WheelJoint::_bind_base_Dump},
	{"fromVoid", &luna_wrapper_b2WheelJoint::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2WheelJoint::_bind_asVoid},
	{"getTable", &luna_wrapper_b2WheelJoint::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< b2WheelJoint >::converters[] = {
	{"b2Joint", &luna_wrapper_b2WheelJoint::_cast_from_b2Joint},
	{0,0}
};

luna_RegEnumType LunaTraits< b2WheelJoint >::enumValues[] = {
	{0,0}
};


