#include <plug_common.h>

#include <luna/wrappers/wrapper_b2MouseJoint.h>

class luna_wrapper_b2MouseJoint {
public:
	typedef Luna< b2MouseJoint > luna_t;

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
		//b2MouseJoint* ptr= dynamic_cast< b2MouseJoint* >(Luna< b2Joint >::check(L,1));
		b2MouseJoint* ptr= luna_caster< b2Joint, b2MouseJoint >::cast(Luna< b2Joint >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< b2MouseJoint >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_SetTarget(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMaxForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMaxForce(lua_State *L) {
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
	// b2Vec2 b2MouseJoint::GetAnchorA() const
	static int _bind_GetAnchorA(lua_State *L) {
		if (!_lg_typecheck_GetAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2MouseJoint::GetAnchorA() const function, expected prototype:\nb2Vec2 b2MouseJoint::GetAnchorA() const\nClass arguments details:\n");
		}


		b2MouseJoint* self=Luna< b2Joint >::checkSubType< b2MouseJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2MouseJoint::GetAnchorA() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetAnchorA();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2MouseJoint::GetAnchorB() const
	static int _bind_GetAnchorB(lua_State *L) {
		if (!_lg_typecheck_GetAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2MouseJoint::GetAnchorB() const function, expected prototype:\nb2Vec2 b2MouseJoint::GetAnchorB() const\nClass arguments details:\n");
		}


		b2MouseJoint* self=Luna< b2Joint >::checkSubType< b2MouseJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2MouseJoint::GetAnchorB() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetAnchorB();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2MouseJoint::GetReactionForce(float inv_dt) const
	static int _bind_GetReactionForce(lua_State *L) {
		if (!_lg_typecheck_GetReactionForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2MouseJoint::GetReactionForce(float inv_dt) const function, expected prototype:\nb2Vec2 b2MouseJoint::GetReactionForce(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2MouseJoint* self=Luna< b2Joint >::checkSubType< b2MouseJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2MouseJoint::GetReactionForce(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetReactionForce(inv_dt);
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// float b2MouseJoint::GetReactionTorque(float inv_dt) const
	static int _bind_GetReactionTorque(lua_State *L) {
		if (!_lg_typecheck_GetReactionTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2MouseJoint::GetReactionTorque(float inv_dt) const function, expected prototype:\nfloat b2MouseJoint::GetReactionTorque(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2MouseJoint* self=Luna< b2Joint >::checkSubType< b2MouseJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2MouseJoint::GetReactionTorque(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetReactionTorque(inv_dt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2MouseJoint::SetTarget(const b2Vec2 & target)
	static int _bind_SetTarget(lua_State *L) {
		if (!_lg_typecheck_SetTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2MouseJoint::SetTarget(const b2Vec2 & target) function, expected prototype:\nvoid b2MouseJoint::SetTarget(const b2Vec2 & target)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		const b2Vec2* target_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !target_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg target in b2MouseJoint::SetTarget function");
		}
		const b2Vec2 & target=*target_ptr;

		b2MouseJoint* self=Luna< b2Joint >::checkSubType< b2MouseJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2MouseJoint::SetTarget(const b2Vec2 &). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->SetTarget(target);

		return 0;
	}

	// const b2Vec2 & b2MouseJoint::GetTarget() const
	static int _bind_GetTarget(lua_State *L) {
		if (!_lg_typecheck_GetTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Vec2 & b2MouseJoint::GetTarget() const function, expected prototype:\nconst b2Vec2 & b2MouseJoint::GetTarget() const\nClass arguments details:\n");
		}


		b2MouseJoint* self=Luna< b2Joint >::checkSubType< b2MouseJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Vec2 & b2MouseJoint::GetTarget() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->GetTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// void b2MouseJoint::SetMaxForce(float force)
	static int _bind_SetMaxForce(lua_State *L) {
		if (!_lg_typecheck_SetMaxForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2MouseJoint::SetMaxForce(float force) function, expected prototype:\nvoid b2MouseJoint::SetMaxForce(float force)\nClass arguments details:\n");
		}

		float force=(float)lua_tonumber(L,2);

		b2MouseJoint* self=Luna< b2Joint >::checkSubType< b2MouseJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2MouseJoint::SetMaxForce(float). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->SetMaxForce(force);

		return 0;
	}

	// float b2MouseJoint::GetMaxForce() const
	static int _bind_GetMaxForce(lua_State *L) {
		if (!_lg_typecheck_GetMaxForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2MouseJoint::GetMaxForce() const function, expected prototype:\nfloat b2MouseJoint::GetMaxForce() const\nClass arguments details:\n");
		}


		b2MouseJoint* self=Luna< b2Joint >::checkSubType< b2MouseJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2MouseJoint::GetMaxForce() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetMaxForce();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2MouseJoint::SetFrequency(float hz)
	static int _bind_SetFrequency(lua_State *L) {
		if (!_lg_typecheck_SetFrequency(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2MouseJoint::SetFrequency(float hz) function, expected prototype:\nvoid b2MouseJoint::SetFrequency(float hz)\nClass arguments details:\n");
		}

		float hz=(float)lua_tonumber(L,2);

		b2MouseJoint* self=Luna< b2Joint >::checkSubType< b2MouseJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2MouseJoint::SetFrequency(float). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->SetFrequency(hz);

		return 0;
	}

	// float b2MouseJoint::GetFrequency() const
	static int _bind_GetFrequency(lua_State *L) {
		if (!_lg_typecheck_GetFrequency(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2MouseJoint::GetFrequency() const function, expected prototype:\nfloat b2MouseJoint::GetFrequency() const\nClass arguments details:\n");
		}


		b2MouseJoint* self=Luna< b2Joint >::checkSubType< b2MouseJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2MouseJoint::GetFrequency() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetFrequency();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2MouseJoint::SetDampingRatio(float ratio)
	static int _bind_SetDampingRatio(lua_State *L) {
		if (!_lg_typecheck_SetDampingRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2MouseJoint::SetDampingRatio(float ratio) function, expected prototype:\nvoid b2MouseJoint::SetDampingRatio(float ratio)\nClass arguments details:\n");
		}

		float ratio=(float)lua_tonumber(L,2);

		b2MouseJoint* self=Luna< b2Joint >::checkSubType< b2MouseJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2MouseJoint::SetDampingRatio(float). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->SetDampingRatio(ratio);

		return 0;
	}

	// float b2MouseJoint::GetDampingRatio() const
	static int _bind_GetDampingRatio(lua_State *L) {
		if (!_lg_typecheck_GetDampingRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2MouseJoint::GetDampingRatio() const function, expected prototype:\nfloat b2MouseJoint::GetDampingRatio() const\nClass arguments details:\n");
		}


		b2MouseJoint* self=Luna< b2Joint >::checkSubType< b2MouseJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2MouseJoint::GetDampingRatio() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetDampingRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2MouseJoint::Dump()
	static int _bind_Dump(lua_State *L) {
		if (!_lg_typecheck_Dump(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2MouseJoint::Dump() function, expected prototype:\nvoid b2MouseJoint::Dump()\nClass arguments details:\n");
		}


		b2MouseJoint* self=Luna< b2Joint >::checkSubType< b2MouseJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2MouseJoint::Dump(). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->Dump();

		return 0;
	}

	// b2Vec2 b2MouseJoint::base_GetAnchorA() const
	static int _bind_base_GetAnchorA(lua_State *L) {
		if (!_lg_typecheck_base_GetAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2MouseJoint::base_GetAnchorA() const function, expected prototype:\nb2Vec2 b2MouseJoint::base_GetAnchorA() const\nClass arguments details:\n");
		}


		b2MouseJoint* self=Luna< b2Joint >::checkSubType< b2MouseJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2MouseJoint::base_GetAnchorA() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->b2MouseJoint::GetAnchorA();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2MouseJoint::base_GetAnchorB() const
	static int _bind_base_GetAnchorB(lua_State *L) {
		if (!_lg_typecheck_base_GetAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2MouseJoint::base_GetAnchorB() const function, expected prototype:\nb2Vec2 b2MouseJoint::base_GetAnchorB() const\nClass arguments details:\n");
		}


		b2MouseJoint* self=Luna< b2Joint >::checkSubType< b2MouseJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2MouseJoint::base_GetAnchorB() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->b2MouseJoint::GetAnchorB();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2MouseJoint::base_GetReactionForce(float inv_dt) const
	static int _bind_base_GetReactionForce(lua_State *L) {
		if (!_lg_typecheck_base_GetReactionForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2MouseJoint::base_GetReactionForce(float inv_dt) const function, expected prototype:\nb2Vec2 b2MouseJoint::base_GetReactionForce(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2MouseJoint* self=Luna< b2Joint >::checkSubType< b2MouseJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2MouseJoint::base_GetReactionForce(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->b2MouseJoint::GetReactionForce(inv_dt);
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// float b2MouseJoint::base_GetReactionTorque(float inv_dt) const
	static int _bind_base_GetReactionTorque(lua_State *L) {
		if (!_lg_typecheck_base_GetReactionTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2MouseJoint::base_GetReactionTorque(float inv_dt) const function, expected prototype:\nfloat b2MouseJoint::base_GetReactionTorque(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2MouseJoint* self=Luna< b2Joint >::checkSubType< b2MouseJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2MouseJoint::base_GetReactionTorque(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->b2MouseJoint::GetReactionTorque(inv_dt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2MouseJoint::base_Dump()
	static int _bind_base_Dump(lua_State *L) {
		if (!_lg_typecheck_base_Dump(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2MouseJoint::base_Dump() function, expected prototype:\nvoid b2MouseJoint::base_Dump()\nClass arguments details:\n");
		}


		b2MouseJoint* self=Luna< b2Joint >::checkSubType< b2MouseJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2MouseJoint::base_Dump(). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->b2MouseJoint::Dump();

		return 0;
	}


	// Operator binds:

};

b2MouseJoint* LunaTraits< b2MouseJoint >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< b2MouseJoint >::_bind_dtor(b2MouseJoint* obj) {
	delete obj;
}

const char LunaTraits< b2MouseJoint >::className[] = "b2MouseJoint";
const char LunaTraits< b2MouseJoint >::fullName[] = "b2MouseJoint";
const char LunaTraits< b2MouseJoint >::moduleName[] = "box2d";
const char* LunaTraits< b2MouseJoint >::parents[] = {"box2d.b2Joint", 0};
const int LunaTraits< b2MouseJoint >::hash = 16693319;
const int LunaTraits< b2MouseJoint >::uniqueIDs[] = {78564754,0};

luna_RegType LunaTraits< b2MouseJoint >::methods[] = {
	{"GetAnchorA", &luna_wrapper_b2MouseJoint::_bind_GetAnchorA},
	{"GetAnchorB", &luna_wrapper_b2MouseJoint::_bind_GetAnchorB},
	{"GetReactionForce", &luna_wrapper_b2MouseJoint::_bind_GetReactionForce},
	{"GetReactionTorque", &luna_wrapper_b2MouseJoint::_bind_GetReactionTorque},
	{"SetTarget", &luna_wrapper_b2MouseJoint::_bind_SetTarget},
	{"GetTarget", &luna_wrapper_b2MouseJoint::_bind_GetTarget},
	{"SetMaxForce", &luna_wrapper_b2MouseJoint::_bind_SetMaxForce},
	{"GetMaxForce", &luna_wrapper_b2MouseJoint::_bind_GetMaxForce},
	{"SetFrequency", &luna_wrapper_b2MouseJoint::_bind_SetFrequency},
	{"GetFrequency", &luna_wrapper_b2MouseJoint::_bind_GetFrequency},
	{"SetDampingRatio", &luna_wrapper_b2MouseJoint::_bind_SetDampingRatio},
	{"GetDampingRatio", &luna_wrapper_b2MouseJoint::_bind_GetDampingRatio},
	{"Dump", &luna_wrapper_b2MouseJoint::_bind_Dump},
	{"base_GetAnchorA", &luna_wrapper_b2MouseJoint::_bind_base_GetAnchorA},
	{"base_GetAnchorB", &luna_wrapper_b2MouseJoint::_bind_base_GetAnchorB},
	{"base_GetReactionForce", &luna_wrapper_b2MouseJoint::_bind_base_GetReactionForce},
	{"base_GetReactionTorque", &luna_wrapper_b2MouseJoint::_bind_base_GetReactionTorque},
	{"base_Dump", &luna_wrapper_b2MouseJoint::_bind_base_Dump},
	{"__eq", &luna_wrapper_b2MouseJoint::_bind___eq},
	{"getTable", &luna_wrapper_b2MouseJoint::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< b2MouseJoint >::converters[] = {
	{"b2Joint", &luna_wrapper_b2MouseJoint::_cast_from_b2Joint},
	{0,0}
};

luna_RegEnumType LunaTraits< b2MouseJoint >::enumValues[] = {
	{0,0}
};


