#include <plug_common.h>

#include <luna/wrappers/wrapper_b2WeldJoint.h>

class luna_wrapper_b2WeldJoint {
public:
	typedef Luna< b2WeldJoint > luna_t;

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

		b2WeldJoint* self= (b2WeldJoint*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2WeldJoint >::push(L,self,false);
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
		//b2WeldJoint* ptr= dynamic_cast< b2WeldJoint* >(Luna< b2Joint >::check(L,1));
		b2WeldJoint* ptr= luna_caster< b2Joint, b2WeldJoint >::cast(Luna< b2Joint >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< b2WeldJoint >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_GetReferenceAngle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFrequency(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFrequency(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDampingRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDampingRatio(lua_State *L) {
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
	// b2Vec2 b2WeldJoint::GetAnchorA() const
	static int _bind_GetAnchorA(lua_State *L) {
		if (!_lg_typecheck_GetAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2WeldJoint::GetAnchorA() const function, expected prototype:\nb2Vec2 b2WeldJoint::GetAnchorA() const\nClass arguments details:\n");
		}


		b2WeldJoint* self=Luna< b2Joint >::checkSubType< b2WeldJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2WeldJoint::GetAnchorA() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetAnchorA();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2WeldJoint::GetAnchorB() const
	static int _bind_GetAnchorB(lua_State *L) {
		if (!_lg_typecheck_GetAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2WeldJoint::GetAnchorB() const function, expected prototype:\nb2Vec2 b2WeldJoint::GetAnchorB() const\nClass arguments details:\n");
		}


		b2WeldJoint* self=Luna< b2Joint >::checkSubType< b2WeldJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2WeldJoint::GetAnchorB() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetAnchorB();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2WeldJoint::GetReactionForce(float inv_dt) const
	static int _bind_GetReactionForce(lua_State *L) {
		if (!_lg_typecheck_GetReactionForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2WeldJoint::GetReactionForce(float inv_dt) const function, expected prototype:\nb2Vec2 b2WeldJoint::GetReactionForce(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2WeldJoint* self=Luna< b2Joint >::checkSubType< b2WeldJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2WeldJoint::GetReactionForce(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetReactionForce(inv_dt);
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// float b2WeldJoint::GetReactionTorque(float inv_dt) const
	static int _bind_GetReactionTorque(lua_State *L) {
		if (!_lg_typecheck_GetReactionTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2WeldJoint::GetReactionTorque(float inv_dt) const function, expected prototype:\nfloat b2WeldJoint::GetReactionTorque(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2WeldJoint* self=Luna< b2Joint >::checkSubType< b2WeldJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2WeldJoint::GetReactionTorque(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetReactionTorque(inv_dt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const b2Vec2 & b2WeldJoint::GetLocalAnchorA() const
	static int _bind_GetLocalAnchorA(lua_State *L) {
		if (!_lg_typecheck_GetLocalAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Vec2 & b2WeldJoint::GetLocalAnchorA() const function, expected prototype:\nconst b2Vec2 & b2WeldJoint::GetLocalAnchorA() const\nClass arguments details:\n");
		}


		b2WeldJoint* self=Luna< b2Joint >::checkSubType< b2WeldJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Vec2 & b2WeldJoint::GetLocalAnchorA() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->GetLocalAnchorA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// const b2Vec2 & b2WeldJoint::GetLocalAnchorB() const
	static int _bind_GetLocalAnchorB(lua_State *L) {
		if (!_lg_typecheck_GetLocalAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Vec2 & b2WeldJoint::GetLocalAnchorB() const function, expected prototype:\nconst b2Vec2 & b2WeldJoint::GetLocalAnchorB() const\nClass arguments details:\n");
		}


		b2WeldJoint* self=Luna< b2Joint >::checkSubType< b2WeldJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Vec2 & b2WeldJoint::GetLocalAnchorB() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->GetLocalAnchorB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// float b2WeldJoint::GetReferenceAngle() const
	static int _bind_GetReferenceAngle(lua_State *L) {
		if (!_lg_typecheck_GetReferenceAngle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2WeldJoint::GetReferenceAngle() const function, expected prototype:\nfloat b2WeldJoint::GetReferenceAngle() const\nClass arguments details:\n");
		}


		b2WeldJoint* self=Luna< b2Joint >::checkSubType< b2WeldJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2WeldJoint::GetReferenceAngle() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetReferenceAngle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2WeldJoint::SetFrequency(float hz)
	static int _bind_SetFrequency(lua_State *L) {
		if (!_lg_typecheck_SetFrequency(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2WeldJoint::SetFrequency(float hz) function, expected prototype:\nvoid b2WeldJoint::SetFrequency(float hz)\nClass arguments details:\n");
		}

		float hz=(float)lua_tonumber(L,2);

		b2WeldJoint* self=Luna< b2Joint >::checkSubType< b2WeldJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2WeldJoint::SetFrequency(float). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->SetFrequency(hz);

		return 0;
	}

	// float b2WeldJoint::GetFrequency() const
	static int _bind_GetFrequency(lua_State *L) {
		if (!_lg_typecheck_GetFrequency(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2WeldJoint::GetFrequency() const function, expected prototype:\nfloat b2WeldJoint::GetFrequency() const\nClass arguments details:\n");
		}


		b2WeldJoint* self=Luna< b2Joint >::checkSubType< b2WeldJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2WeldJoint::GetFrequency() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetFrequency();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2WeldJoint::SetDampingRatio(float ratio)
	static int _bind_SetDampingRatio(lua_State *L) {
		if (!_lg_typecheck_SetDampingRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2WeldJoint::SetDampingRatio(float ratio) function, expected prototype:\nvoid b2WeldJoint::SetDampingRatio(float ratio)\nClass arguments details:\n");
		}

		float ratio=(float)lua_tonumber(L,2);

		b2WeldJoint* self=Luna< b2Joint >::checkSubType< b2WeldJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2WeldJoint::SetDampingRatio(float). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->SetDampingRatio(ratio);

		return 0;
	}

	// float b2WeldJoint::GetDampingRatio() const
	static int _bind_GetDampingRatio(lua_State *L) {
		if (!_lg_typecheck_GetDampingRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2WeldJoint::GetDampingRatio() const function, expected prototype:\nfloat b2WeldJoint::GetDampingRatio() const\nClass arguments details:\n");
		}


		b2WeldJoint* self=Luna< b2Joint >::checkSubType< b2WeldJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2WeldJoint::GetDampingRatio() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetDampingRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2WeldJoint::Dump()
	static int _bind_Dump(lua_State *L) {
		if (!_lg_typecheck_Dump(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2WeldJoint::Dump() function, expected prototype:\nvoid b2WeldJoint::Dump()\nClass arguments details:\n");
		}


		b2WeldJoint* self=Luna< b2Joint >::checkSubType< b2WeldJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2WeldJoint::Dump(). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->Dump();

		return 0;
	}

	// b2Vec2 b2WeldJoint::base_GetAnchorA() const
	static int _bind_base_GetAnchorA(lua_State *L) {
		if (!_lg_typecheck_base_GetAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2WeldJoint::base_GetAnchorA() const function, expected prototype:\nb2Vec2 b2WeldJoint::base_GetAnchorA() const\nClass arguments details:\n");
		}


		b2WeldJoint* self=Luna< b2Joint >::checkSubType< b2WeldJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2WeldJoint::base_GetAnchorA() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->b2WeldJoint::GetAnchorA();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2WeldJoint::base_GetAnchorB() const
	static int _bind_base_GetAnchorB(lua_State *L) {
		if (!_lg_typecheck_base_GetAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2WeldJoint::base_GetAnchorB() const function, expected prototype:\nb2Vec2 b2WeldJoint::base_GetAnchorB() const\nClass arguments details:\n");
		}


		b2WeldJoint* self=Luna< b2Joint >::checkSubType< b2WeldJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2WeldJoint::base_GetAnchorB() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->b2WeldJoint::GetAnchorB();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2WeldJoint::base_GetReactionForce(float inv_dt) const
	static int _bind_base_GetReactionForce(lua_State *L) {
		if (!_lg_typecheck_base_GetReactionForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2WeldJoint::base_GetReactionForce(float inv_dt) const function, expected prototype:\nb2Vec2 b2WeldJoint::base_GetReactionForce(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2WeldJoint* self=Luna< b2Joint >::checkSubType< b2WeldJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2WeldJoint::base_GetReactionForce(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->b2WeldJoint::GetReactionForce(inv_dt);
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// float b2WeldJoint::base_GetReactionTorque(float inv_dt) const
	static int _bind_base_GetReactionTorque(lua_State *L) {
		if (!_lg_typecheck_base_GetReactionTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2WeldJoint::base_GetReactionTorque(float inv_dt) const function, expected prototype:\nfloat b2WeldJoint::base_GetReactionTorque(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2WeldJoint* self=Luna< b2Joint >::checkSubType< b2WeldJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2WeldJoint::base_GetReactionTorque(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->b2WeldJoint::GetReactionTorque(inv_dt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2WeldJoint::base_Dump()
	static int _bind_base_Dump(lua_State *L) {
		if (!_lg_typecheck_base_Dump(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2WeldJoint::base_Dump() function, expected prototype:\nvoid b2WeldJoint::base_Dump()\nClass arguments details:\n");
		}


		b2WeldJoint* self=Luna< b2Joint >::checkSubType< b2WeldJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2WeldJoint::base_Dump(). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->b2WeldJoint::Dump();

		return 0;
	}


	// Operator binds:

};

b2WeldJoint* LunaTraits< b2WeldJoint >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2WeldJoint >::_bind_dtor(b2WeldJoint* obj) {
	delete obj;
}

const char LunaTraits< b2WeldJoint >::className[] = "b2WeldJoint";
const char LunaTraits< b2WeldJoint >::fullName[] = "b2WeldJoint";
const char LunaTraits< b2WeldJoint >::moduleName[] = "box2d";
const char* LunaTraits< b2WeldJoint >::parents[] = {"box2d.b2Joint", 0};
const int LunaTraits< b2WeldJoint >::hash = 91667768;
const int LunaTraits< b2WeldJoint >::uniqueIDs[] = {78564754,0};

luna_RegType LunaTraits< b2WeldJoint >::methods[] = {
	{"GetAnchorA", &luna_wrapper_b2WeldJoint::_bind_GetAnchorA},
	{"GetAnchorB", &luna_wrapper_b2WeldJoint::_bind_GetAnchorB},
	{"GetReactionForce", &luna_wrapper_b2WeldJoint::_bind_GetReactionForce},
	{"GetReactionTorque", &luna_wrapper_b2WeldJoint::_bind_GetReactionTorque},
	{"GetLocalAnchorA", &luna_wrapper_b2WeldJoint::_bind_GetLocalAnchorA},
	{"GetLocalAnchorB", &luna_wrapper_b2WeldJoint::_bind_GetLocalAnchorB},
	{"GetReferenceAngle", &luna_wrapper_b2WeldJoint::_bind_GetReferenceAngle},
	{"SetFrequency", &luna_wrapper_b2WeldJoint::_bind_SetFrequency},
	{"GetFrequency", &luna_wrapper_b2WeldJoint::_bind_GetFrequency},
	{"SetDampingRatio", &luna_wrapper_b2WeldJoint::_bind_SetDampingRatio},
	{"GetDampingRatio", &luna_wrapper_b2WeldJoint::_bind_GetDampingRatio},
	{"Dump", &luna_wrapper_b2WeldJoint::_bind_Dump},
	{"base_GetAnchorA", &luna_wrapper_b2WeldJoint::_bind_base_GetAnchorA},
	{"base_GetAnchorB", &luna_wrapper_b2WeldJoint::_bind_base_GetAnchorB},
	{"base_GetReactionForce", &luna_wrapper_b2WeldJoint::_bind_base_GetReactionForce},
	{"base_GetReactionTorque", &luna_wrapper_b2WeldJoint::_bind_base_GetReactionTorque},
	{"base_Dump", &luna_wrapper_b2WeldJoint::_bind_base_Dump},
	{"__eq", &luna_wrapper_b2WeldJoint::_bind___eq},
	{"fromVoid", &luna_wrapper_b2WeldJoint::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2WeldJoint::_bind_asVoid},
	{"getTable", &luna_wrapper_b2WeldJoint::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< b2WeldJoint >::converters[] = {
	{"b2Joint", &luna_wrapper_b2WeldJoint::_cast_from_b2Joint},
	{0,0}
};

luna_RegEnumType LunaTraits< b2WeldJoint >::enumValues[] = {
	{0,0}
};


