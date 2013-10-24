#include <plug_common.h>

#include <luna/wrappers/wrapper_b2PrismaticJoint.h>

class luna_wrapper_b2PrismaticJoint {
public:
	typedef Luna< b2PrismaticJoint > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
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
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2PrismaticJoint* self= (b2PrismaticJoint*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2PrismaticJoint >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78564754) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
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
		//b2PrismaticJoint* ptr= dynamic_cast< b2PrismaticJoint* >(Luna< b2Joint >::check(L,1));
		b2PrismaticJoint* ptr= luna_caster< b2Joint, b2PrismaticJoint >::cast(Luna< b2Joint >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< b2PrismaticJoint >::push(L,ptr,false);
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

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetReactionTorque(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_GetReferenceAngle(lua_State *L) {
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

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
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

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMotorSpeed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMaxMotorForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMaxMotorForce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMotorForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
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

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetReactionTorque(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
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
	// b2Vec2 b2PrismaticJoint::GetAnchorA() const
	static int _bind_GetAnchorA(lua_State *L) {
		if (!_lg_typecheck_GetAnchorA(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec2 b2PrismaticJoint::GetAnchorA() const function, expected prototype:\nb2Vec2 b2PrismaticJoint::GetAnchorA() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2PrismaticJoint* self=Luna< b2Joint >::checkSubType< b2PrismaticJoint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec2 b2PrismaticJoint::GetAnchorA() const. Got : '%s'\n%s",typeid(Luna< b2Joint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		b2Vec2 stack_lret = self->GetAnchorA();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2PrismaticJoint::GetAnchorB() const
	static int _bind_GetAnchorB(lua_State *L) {
		if (!_lg_typecheck_GetAnchorB(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec2 b2PrismaticJoint::GetAnchorB() const function, expected prototype:\nb2Vec2 b2PrismaticJoint::GetAnchorB() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2PrismaticJoint* self=Luna< b2Joint >::checkSubType< b2PrismaticJoint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec2 b2PrismaticJoint::GetAnchorB() const. Got : '%s'\n%s",typeid(Luna< b2Joint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		b2Vec2 stack_lret = self->GetAnchorB();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2PrismaticJoint::GetReactionForce(float inv_dt) const
	static int _bind_GetReactionForce(lua_State *L) {
		if (!_lg_typecheck_GetReactionForce(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec2 b2PrismaticJoint::GetReactionForce(float inv_dt) const function, expected prototype:\nb2Vec2 b2PrismaticJoint::GetReactionForce(float inv_dt) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2PrismaticJoint* self=Luna< b2Joint >::checkSubType< b2PrismaticJoint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec2 b2PrismaticJoint::GetReactionForce(float) const. Got : '%s'\n%s",typeid(Luna< b2Joint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		b2Vec2 stack_lret = self->GetReactionForce(inv_dt);
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// float b2PrismaticJoint::GetReactionTorque(float inv_dt) const
	static int _bind_GetReactionTorque(lua_State *L) {
		if (!_lg_typecheck_GetReactionTorque(L)) {
			luaL_error(L, "luna typecheck failed in float b2PrismaticJoint::GetReactionTorque(float inv_dt) const function, expected prototype:\nfloat b2PrismaticJoint::GetReactionTorque(float inv_dt) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2PrismaticJoint* self=Luna< b2Joint >::checkSubType< b2PrismaticJoint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2PrismaticJoint::GetReactionTorque(float) const. Got : '%s'\n%s",typeid(Luna< b2Joint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->GetReactionTorque(inv_dt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const b2Vec2 & b2PrismaticJoint::GetLocalAnchorA() const
	static int _bind_GetLocalAnchorA(lua_State *L) {
		if (!_lg_typecheck_GetLocalAnchorA(L)) {
			luaL_error(L, "luna typecheck failed in const b2Vec2 & b2PrismaticJoint::GetLocalAnchorA() const function, expected prototype:\nconst b2Vec2 & b2PrismaticJoint::GetLocalAnchorA() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2PrismaticJoint* self=Luna< b2Joint >::checkSubType< b2PrismaticJoint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const b2Vec2 & b2PrismaticJoint::GetLocalAnchorA() const. Got : '%s'\n%s",typeid(Luna< b2Joint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Vec2* lret = &self->GetLocalAnchorA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// const b2Vec2 & b2PrismaticJoint::GetLocalAnchorB() const
	static int _bind_GetLocalAnchorB(lua_State *L) {
		if (!_lg_typecheck_GetLocalAnchorB(L)) {
			luaL_error(L, "luna typecheck failed in const b2Vec2 & b2PrismaticJoint::GetLocalAnchorB() const function, expected prototype:\nconst b2Vec2 & b2PrismaticJoint::GetLocalAnchorB() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2PrismaticJoint* self=Luna< b2Joint >::checkSubType< b2PrismaticJoint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const b2Vec2 & b2PrismaticJoint::GetLocalAnchorB() const. Got : '%s'\n%s",typeid(Luna< b2Joint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Vec2* lret = &self->GetLocalAnchorB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// const b2Vec2 & b2PrismaticJoint::GetLocalAxisA() const
	static int _bind_GetLocalAxisA(lua_State *L) {
		if (!_lg_typecheck_GetLocalAxisA(L)) {
			luaL_error(L, "luna typecheck failed in const b2Vec2 & b2PrismaticJoint::GetLocalAxisA() const function, expected prototype:\nconst b2Vec2 & b2PrismaticJoint::GetLocalAxisA() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2PrismaticJoint* self=Luna< b2Joint >::checkSubType< b2PrismaticJoint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const b2Vec2 & b2PrismaticJoint::GetLocalAxisA() const. Got : '%s'\n%s",typeid(Luna< b2Joint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Vec2* lret = &self->GetLocalAxisA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// float b2PrismaticJoint::GetReferenceAngle() const
	static int _bind_GetReferenceAngle(lua_State *L) {
		if (!_lg_typecheck_GetReferenceAngle(L)) {
			luaL_error(L, "luna typecheck failed in float b2PrismaticJoint::GetReferenceAngle() const function, expected prototype:\nfloat b2PrismaticJoint::GetReferenceAngle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2PrismaticJoint* self=Luna< b2Joint >::checkSubType< b2PrismaticJoint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2PrismaticJoint::GetReferenceAngle() const. Got : '%s'\n%s",typeid(Luna< b2Joint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->GetReferenceAngle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2PrismaticJoint::GetJointTranslation() const
	static int _bind_GetJointTranslation(lua_State *L) {
		if (!_lg_typecheck_GetJointTranslation(L)) {
			luaL_error(L, "luna typecheck failed in float b2PrismaticJoint::GetJointTranslation() const function, expected prototype:\nfloat b2PrismaticJoint::GetJointTranslation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2PrismaticJoint* self=Luna< b2Joint >::checkSubType< b2PrismaticJoint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2PrismaticJoint::GetJointTranslation() const. Got : '%s'\n%s",typeid(Luna< b2Joint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->GetJointTranslation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2PrismaticJoint::GetJointSpeed() const
	static int _bind_GetJointSpeed(lua_State *L) {
		if (!_lg_typecheck_GetJointSpeed(L)) {
			luaL_error(L, "luna typecheck failed in float b2PrismaticJoint::GetJointSpeed() const function, expected prototype:\nfloat b2PrismaticJoint::GetJointSpeed() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2PrismaticJoint* self=Luna< b2Joint >::checkSubType< b2PrismaticJoint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2PrismaticJoint::GetJointSpeed() const. Got : '%s'\n%s",typeid(Luna< b2Joint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->GetJointSpeed();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool b2PrismaticJoint::IsLimitEnabled() const
	static int _bind_IsLimitEnabled(lua_State *L) {
		if (!_lg_typecheck_IsLimitEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool b2PrismaticJoint::IsLimitEnabled() const function, expected prototype:\nbool b2PrismaticJoint::IsLimitEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2PrismaticJoint* self=Luna< b2Joint >::checkSubType< b2PrismaticJoint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool b2PrismaticJoint::IsLimitEnabled() const. Got : '%s'\n%s",typeid(Luna< b2Joint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsLimitEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2PrismaticJoint::EnableLimit(bool flag)
	static int _bind_EnableLimit(lua_State *L) {
		if (!_lg_typecheck_EnableLimit(L)) {
			luaL_error(L, "luna typecheck failed in void b2PrismaticJoint::EnableLimit(bool flag) function, expected prototype:\nvoid b2PrismaticJoint::EnableLimit(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		b2PrismaticJoint* self=Luna< b2Joint >::checkSubType< b2PrismaticJoint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2PrismaticJoint::EnableLimit(bool). Got : '%s'\n%s",typeid(Luna< b2Joint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EnableLimit(flag);

		return 0;
	}

	// float b2PrismaticJoint::GetLowerLimit() const
	static int _bind_GetLowerLimit(lua_State *L) {
		if (!_lg_typecheck_GetLowerLimit(L)) {
			luaL_error(L, "luna typecheck failed in float b2PrismaticJoint::GetLowerLimit() const function, expected prototype:\nfloat b2PrismaticJoint::GetLowerLimit() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2PrismaticJoint* self=Luna< b2Joint >::checkSubType< b2PrismaticJoint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2PrismaticJoint::GetLowerLimit() const. Got : '%s'\n%s",typeid(Luna< b2Joint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->GetLowerLimit();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2PrismaticJoint::GetUpperLimit() const
	static int _bind_GetUpperLimit(lua_State *L) {
		if (!_lg_typecheck_GetUpperLimit(L)) {
			luaL_error(L, "luna typecheck failed in float b2PrismaticJoint::GetUpperLimit() const function, expected prototype:\nfloat b2PrismaticJoint::GetUpperLimit() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2PrismaticJoint* self=Luna< b2Joint >::checkSubType< b2PrismaticJoint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2PrismaticJoint::GetUpperLimit() const. Got : '%s'\n%s",typeid(Luna< b2Joint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->GetUpperLimit();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2PrismaticJoint::SetLimits(float lower, float upper)
	static int _bind_SetLimits(lua_State *L) {
		if (!_lg_typecheck_SetLimits(L)) {
			luaL_error(L, "luna typecheck failed in void b2PrismaticJoint::SetLimits(float lower, float upper) function, expected prototype:\nvoid b2PrismaticJoint::SetLimits(float lower, float upper)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float lower=(float)lua_tonumber(L,2);
		float upper=(float)lua_tonumber(L,3);

		b2PrismaticJoint* self=Luna< b2Joint >::checkSubType< b2PrismaticJoint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2PrismaticJoint::SetLimits(float, float). Got : '%s'\n%s",typeid(Luna< b2Joint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLimits(lower, upper);

		return 0;
	}

	// bool b2PrismaticJoint::IsMotorEnabled() const
	static int _bind_IsMotorEnabled(lua_State *L) {
		if (!_lg_typecheck_IsMotorEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool b2PrismaticJoint::IsMotorEnabled() const function, expected prototype:\nbool b2PrismaticJoint::IsMotorEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2PrismaticJoint* self=Luna< b2Joint >::checkSubType< b2PrismaticJoint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool b2PrismaticJoint::IsMotorEnabled() const. Got : '%s'\n%s",typeid(Luna< b2Joint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsMotorEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2PrismaticJoint::EnableMotor(bool flag)
	static int _bind_EnableMotor(lua_State *L) {
		if (!_lg_typecheck_EnableMotor(L)) {
			luaL_error(L, "luna typecheck failed in void b2PrismaticJoint::EnableMotor(bool flag) function, expected prototype:\nvoid b2PrismaticJoint::EnableMotor(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		b2PrismaticJoint* self=Luna< b2Joint >::checkSubType< b2PrismaticJoint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2PrismaticJoint::EnableMotor(bool). Got : '%s'\n%s",typeid(Luna< b2Joint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EnableMotor(flag);

		return 0;
	}

	// void b2PrismaticJoint::SetMotorSpeed(float speed)
	static int _bind_SetMotorSpeed(lua_State *L) {
		if (!_lg_typecheck_SetMotorSpeed(L)) {
			luaL_error(L, "luna typecheck failed in void b2PrismaticJoint::SetMotorSpeed(float speed) function, expected prototype:\nvoid b2PrismaticJoint::SetMotorSpeed(float speed)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float speed=(float)lua_tonumber(L,2);

		b2PrismaticJoint* self=Luna< b2Joint >::checkSubType< b2PrismaticJoint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2PrismaticJoint::SetMotorSpeed(float). Got : '%s'\n%s",typeid(Luna< b2Joint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMotorSpeed(speed);

		return 0;
	}

	// float b2PrismaticJoint::GetMotorSpeed() const
	static int _bind_GetMotorSpeed(lua_State *L) {
		if (!_lg_typecheck_GetMotorSpeed(L)) {
			luaL_error(L, "luna typecheck failed in float b2PrismaticJoint::GetMotorSpeed() const function, expected prototype:\nfloat b2PrismaticJoint::GetMotorSpeed() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2PrismaticJoint* self=Luna< b2Joint >::checkSubType< b2PrismaticJoint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2PrismaticJoint::GetMotorSpeed() const. Got : '%s'\n%s",typeid(Luna< b2Joint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->GetMotorSpeed();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2PrismaticJoint::SetMaxMotorForce(float force)
	static int _bind_SetMaxMotorForce(lua_State *L) {
		if (!_lg_typecheck_SetMaxMotorForce(L)) {
			luaL_error(L, "luna typecheck failed in void b2PrismaticJoint::SetMaxMotorForce(float force) function, expected prototype:\nvoid b2PrismaticJoint::SetMaxMotorForce(float force)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float force=(float)lua_tonumber(L,2);

		b2PrismaticJoint* self=Luna< b2Joint >::checkSubType< b2PrismaticJoint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2PrismaticJoint::SetMaxMotorForce(float). Got : '%s'\n%s",typeid(Luna< b2Joint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMaxMotorForce(force);

		return 0;
	}

	// float b2PrismaticJoint::GetMaxMotorForce() const
	static int _bind_GetMaxMotorForce(lua_State *L) {
		if (!_lg_typecheck_GetMaxMotorForce(L)) {
			luaL_error(L, "luna typecheck failed in float b2PrismaticJoint::GetMaxMotorForce() const function, expected prototype:\nfloat b2PrismaticJoint::GetMaxMotorForce() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2PrismaticJoint* self=Luna< b2Joint >::checkSubType< b2PrismaticJoint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2PrismaticJoint::GetMaxMotorForce() const. Got : '%s'\n%s",typeid(Luna< b2Joint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->GetMaxMotorForce();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2PrismaticJoint::GetMotorForce(float inv_dt) const
	static int _bind_GetMotorForce(lua_State *L) {
		if (!_lg_typecheck_GetMotorForce(L)) {
			luaL_error(L, "luna typecheck failed in float b2PrismaticJoint::GetMotorForce(float inv_dt) const function, expected prototype:\nfloat b2PrismaticJoint::GetMotorForce(float inv_dt) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2PrismaticJoint* self=Luna< b2Joint >::checkSubType< b2PrismaticJoint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2PrismaticJoint::GetMotorForce(float) const. Got : '%s'\n%s",typeid(Luna< b2Joint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->GetMotorForce(inv_dt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2PrismaticJoint::Dump()
	static int _bind_Dump(lua_State *L) {
		if (!_lg_typecheck_Dump(L)) {
			luaL_error(L, "luna typecheck failed in void b2PrismaticJoint::Dump() function, expected prototype:\nvoid b2PrismaticJoint::Dump()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2PrismaticJoint* self=Luna< b2Joint >::checkSubType< b2PrismaticJoint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2PrismaticJoint::Dump(). Got : '%s'\n%s",typeid(Luna< b2Joint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Dump();

		return 0;
	}

	// b2Vec2 b2PrismaticJoint::base_GetAnchorA() const
	static int _bind_base_GetAnchorA(lua_State *L) {
		if (!_lg_typecheck_base_GetAnchorA(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec2 b2PrismaticJoint::base_GetAnchorA() const function, expected prototype:\nb2Vec2 b2PrismaticJoint::base_GetAnchorA() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2PrismaticJoint* self=Luna< b2Joint >::checkSubType< b2PrismaticJoint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec2 b2PrismaticJoint::base_GetAnchorA() const. Got : '%s'\n%s",typeid(Luna< b2Joint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		b2Vec2 stack_lret = self->b2PrismaticJoint::GetAnchorA();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2PrismaticJoint::base_GetAnchorB() const
	static int _bind_base_GetAnchorB(lua_State *L) {
		if (!_lg_typecheck_base_GetAnchorB(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec2 b2PrismaticJoint::base_GetAnchorB() const function, expected prototype:\nb2Vec2 b2PrismaticJoint::base_GetAnchorB() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2PrismaticJoint* self=Luna< b2Joint >::checkSubType< b2PrismaticJoint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec2 b2PrismaticJoint::base_GetAnchorB() const. Got : '%s'\n%s",typeid(Luna< b2Joint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		b2Vec2 stack_lret = self->b2PrismaticJoint::GetAnchorB();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2PrismaticJoint::base_GetReactionForce(float inv_dt) const
	static int _bind_base_GetReactionForce(lua_State *L) {
		if (!_lg_typecheck_base_GetReactionForce(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec2 b2PrismaticJoint::base_GetReactionForce(float inv_dt) const function, expected prototype:\nb2Vec2 b2PrismaticJoint::base_GetReactionForce(float inv_dt) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2PrismaticJoint* self=Luna< b2Joint >::checkSubType< b2PrismaticJoint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec2 b2PrismaticJoint::base_GetReactionForce(float) const. Got : '%s'\n%s",typeid(Luna< b2Joint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		b2Vec2 stack_lret = self->b2PrismaticJoint::GetReactionForce(inv_dt);
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// float b2PrismaticJoint::base_GetReactionTorque(float inv_dt) const
	static int _bind_base_GetReactionTorque(lua_State *L) {
		if (!_lg_typecheck_base_GetReactionTorque(L)) {
			luaL_error(L, "luna typecheck failed in float b2PrismaticJoint::base_GetReactionTorque(float inv_dt) const function, expected prototype:\nfloat b2PrismaticJoint::base_GetReactionTorque(float inv_dt) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2PrismaticJoint* self=Luna< b2Joint >::checkSubType< b2PrismaticJoint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2PrismaticJoint::base_GetReactionTorque(float) const. Got : '%s'\n%s",typeid(Luna< b2Joint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->b2PrismaticJoint::GetReactionTorque(inv_dt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2PrismaticJoint::base_Dump()
	static int _bind_base_Dump(lua_State *L) {
		if (!_lg_typecheck_base_Dump(L)) {
			luaL_error(L, "luna typecheck failed in void b2PrismaticJoint::base_Dump() function, expected prototype:\nvoid b2PrismaticJoint::base_Dump()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2PrismaticJoint* self=Luna< b2Joint >::checkSubType< b2PrismaticJoint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2PrismaticJoint::base_Dump(). Got : '%s'\n%s",typeid(Luna< b2Joint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->b2PrismaticJoint::Dump();

		return 0;
	}


	// Operator binds:

};

b2PrismaticJoint* LunaTraits< b2PrismaticJoint >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2PrismaticJoint >::_bind_dtor(b2PrismaticJoint* obj) {
	delete obj;
}

const char LunaTraits< b2PrismaticJoint >::className[] = "b2PrismaticJoint";
const char LunaTraits< b2PrismaticJoint >::fullName[] = "b2PrismaticJoint";
const char LunaTraits< b2PrismaticJoint >::moduleName[] = "box2d";
const char* LunaTraits< b2PrismaticJoint >::parents[] = {"box2d.b2Joint", 0};
const int LunaTraits< b2PrismaticJoint >::hash = 7881796;
const int LunaTraits< b2PrismaticJoint >::uniqueIDs[] = {78564754,0};

luna_RegType LunaTraits< b2PrismaticJoint >::methods[] = {
	{"GetAnchorA", &luna_wrapper_b2PrismaticJoint::_bind_GetAnchorA},
	{"GetAnchorB", &luna_wrapper_b2PrismaticJoint::_bind_GetAnchorB},
	{"GetReactionForce", &luna_wrapper_b2PrismaticJoint::_bind_GetReactionForce},
	{"GetReactionTorque", &luna_wrapper_b2PrismaticJoint::_bind_GetReactionTorque},
	{"GetLocalAnchorA", &luna_wrapper_b2PrismaticJoint::_bind_GetLocalAnchorA},
	{"GetLocalAnchorB", &luna_wrapper_b2PrismaticJoint::_bind_GetLocalAnchorB},
	{"GetLocalAxisA", &luna_wrapper_b2PrismaticJoint::_bind_GetLocalAxisA},
	{"GetReferenceAngle", &luna_wrapper_b2PrismaticJoint::_bind_GetReferenceAngle},
	{"GetJointTranslation", &luna_wrapper_b2PrismaticJoint::_bind_GetJointTranslation},
	{"GetJointSpeed", &luna_wrapper_b2PrismaticJoint::_bind_GetJointSpeed},
	{"IsLimitEnabled", &luna_wrapper_b2PrismaticJoint::_bind_IsLimitEnabled},
	{"EnableLimit", &luna_wrapper_b2PrismaticJoint::_bind_EnableLimit},
	{"GetLowerLimit", &luna_wrapper_b2PrismaticJoint::_bind_GetLowerLimit},
	{"GetUpperLimit", &luna_wrapper_b2PrismaticJoint::_bind_GetUpperLimit},
	{"SetLimits", &luna_wrapper_b2PrismaticJoint::_bind_SetLimits},
	{"IsMotorEnabled", &luna_wrapper_b2PrismaticJoint::_bind_IsMotorEnabled},
	{"EnableMotor", &luna_wrapper_b2PrismaticJoint::_bind_EnableMotor},
	{"SetMotorSpeed", &luna_wrapper_b2PrismaticJoint::_bind_SetMotorSpeed},
	{"GetMotorSpeed", &luna_wrapper_b2PrismaticJoint::_bind_GetMotorSpeed},
	{"SetMaxMotorForce", &luna_wrapper_b2PrismaticJoint::_bind_SetMaxMotorForce},
	{"GetMaxMotorForce", &luna_wrapper_b2PrismaticJoint::_bind_GetMaxMotorForce},
	{"GetMotorForce", &luna_wrapper_b2PrismaticJoint::_bind_GetMotorForce},
	{"Dump", &luna_wrapper_b2PrismaticJoint::_bind_Dump},
	{"base_GetAnchorA", &luna_wrapper_b2PrismaticJoint::_bind_base_GetAnchorA},
	{"base_GetAnchorB", &luna_wrapper_b2PrismaticJoint::_bind_base_GetAnchorB},
	{"base_GetReactionForce", &luna_wrapper_b2PrismaticJoint::_bind_base_GetReactionForce},
	{"base_GetReactionTorque", &luna_wrapper_b2PrismaticJoint::_bind_base_GetReactionTorque},
	{"base_Dump", &luna_wrapper_b2PrismaticJoint::_bind_base_Dump},
	{"fromVoid", &luna_wrapper_b2PrismaticJoint::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2PrismaticJoint::_bind_asVoid},
	{"getTable", &luna_wrapper_b2PrismaticJoint::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< b2PrismaticJoint >::converters[] = {
	{"b2Joint", &luna_wrapper_b2PrismaticJoint::_cast_from_b2Joint},
	{0,0}
};

luna_RegEnumType LunaTraits< b2PrismaticJoint >::enumValues[] = {
	{0,0}
};


