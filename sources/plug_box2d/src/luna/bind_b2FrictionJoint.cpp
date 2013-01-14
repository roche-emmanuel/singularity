#include <plug_common.h>

#include <luna/wrappers/wrapper_b2FrictionJoint.h>

class luna_wrapper_b2FrictionJoint {
public:
	typedef Luna< b2FrictionJoint > luna_t;

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
		//b2FrictionJoint* ptr= dynamic_cast< b2FrictionJoint* >(Luna< b2Joint >::check(L,1));
		b2FrictionJoint* ptr= luna_caster< b2Joint, b2FrictionJoint >::cast(Luna< b2Joint >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< b2FrictionJoint >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_SetMaxForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMaxForce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMaxTorque(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMaxTorque(lua_State *L) {
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
	// b2Vec2 b2FrictionJoint::GetAnchorA() const
	static int _bind_GetAnchorA(lua_State *L) {
		if (!_lg_typecheck_GetAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2FrictionJoint::GetAnchorA() const function, expected prototype:\nb2Vec2 b2FrictionJoint::GetAnchorA() const\nClass arguments details:\n");
		}


		b2FrictionJoint* self=Luna< b2Joint >::checkSubType< b2FrictionJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2FrictionJoint::GetAnchorA() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetAnchorA();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2FrictionJoint::GetAnchorB() const
	static int _bind_GetAnchorB(lua_State *L) {
		if (!_lg_typecheck_GetAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2FrictionJoint::GetAnchorB() const function, expected prototype:\nb2Vec2 b2FrictionJoint::GetAnchorB() const\nClass arguments details:\n");
		}


		b2FrictionJoint* self=Luna< b2Joint >::checkSubType< b2FrictionJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2FrictionJoint::GetAnchorB() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetAnchorB();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2FrictionJoint::GetReactionForce(float inv_dt) const
	static int _bind_GetReactionForce(lua_State *L) {
		if (!_lg_typecheck_GetReactionForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2FrictionJoint::GetReactionForce(float inv_dt) const function, expected prototype:\nb2Vec2 b2FrictionJoint::GetReactionForce(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2FrictionJoint* self=Luna< b2Joint >::checkSubType< b2FrictionJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2FrictionJoint::GetReactionForce(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetReactionForce(inv_dt);
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// float b2FrictionJoint::GetReactionTorque(float inv_dt) const
	static int _bind_GetReactionTorque(lua_State *L) {
		if (!_lg_typecheck_GetReactionTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2FrictionJoint::GetReactionTorque(float inv_dt) const function, expected prototype:\nfloat b2FrictionJoint::GetReactionTorque(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2FrictionJoint* self=Luna< b2Joint >::checkSubType< b2FrictionJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2FrictionJoint::GetReactionTorque(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetReactionTorque(inv_dt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const b2Vec2 & b2FrictionJoint::GetLocalAnchorA() const
	static int _bind_GetLocalAnchorA(lua_State *L) {
		if (!_lg_typecheck_GetLocalAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Vec2 & b2FrictionJoint::GetLocalAnchorA() const function, expected prototype:\nconst b2Vec2 & b2FrictionJoint::GetLocalAnchorA() const\nClass arguments details:\n");
		}


		b2FrictionJoint* self=Luna< b2Joint >::checkSubType< b2FrictionJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Vec2 & b2FrictionJoint::GetLocalAnchorA() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->GetLocalAnchorA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// const b2Vec2 & b2FrictionJoint::GetLocalAnchorB() const
	static int _bind_GetLocalAnchorB(lua_State *L) {
		if (!_lg_typecheck_GetLocalAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Vec2 & b2FrictionJoint::GetLocalAnchorB() const function, expected prototype:\nconst b2Vec2 & b2FrictionJoint::GetLocalAnchorB() const\nClass arguments details:\n");
		}


		b2FrictionJoint* self=Luna< b2Joint >::checkSubType< b2FrictionJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Vec2 & b2FrictionJoint::GetLocalAnchorB() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->GetLocalAnchorB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// void b2FrictionJoint::SetMaxForce(float force)
	static int _bind_SetMaxForce(lua_State *L) {
		if (!_lg_typecheck_SetMaxForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2FrictionJoint::SetMaxForce(float force) function, expected prototype:\nvoid b2FrictionJoint::SetMaxForce(float force)\nClass arguments details:\n");
		}

		float force=(float)lua_tonumber(L,2);

		b2FrictionJoint* self=Luna< b2Joint >::checkSubType< b2FrictionJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2FrictionJoint::SetMaxForce(float). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->SetMaxForce(force);

		return 0;
	}

	// float b2FrictionJoint::GetMaxForce() const
	static int _bind_GetMaxForce(lua_State *L) {
		if (!_lg_typecheck_GetMaxForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2FrictionJoint::GetMaxForce() const function, expected prototype:\nfloat b2FrictionJoint::GetMaxForce() const\nClass arguments details:\n");
		}


		b2FrictionJoint* self=Luna< b2Joint >::checkSubType< b2FrictionJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2FrictionJoint::GetMaxForce() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetMaxForce();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2FrictionJoint::SetMaxTorque(float torque)
	static int _bind_SetMaxTorque(lua_State *L) {
		if (!_lg_typecheck_SetMaxTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2FrictionJoint::SetMaxTorque(float torque) function, expected prototype:\nvoid b2FrictionJoint::SetMaxTorque(float torque)\nClass arguments details:\n");
		}

		float torque=(float)lua_tonumber(L,2);

		b2FrictionJoint* self=Luna< b2Joint >::checkSubType< b2FrictionJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2FrictionJoint::SetMaxTorque(float). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->SetMaxTorque(torque);

		return 0;
	}

	// float b2FrictionJoint::GetMaxTorque() const
	static int _bind_GetMaxTorque(lua_State *L) {
		if (!_lg_typecheck_GetMaxTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2FrictionJoint::GetMaxTorque() const function, expected prototype:\nfloat b2FrictionJoint::GetMaxTorque() const\nClass arguments details:\n");
		}


		b2FrictionJoint* self=Luna< b2Joint >::checkSubType< b2FrictionJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2FrictionJoint::GetMaxTorque() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetMaxTorque();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2FrictionJoint::Dump()
	static int _bind_Dump(lua_State *L) {
		if (!_lg_typecheck_Dump(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2FrictionJoint::Dump() function, expected prototype:\nvoid b2FrictionJoint::Dump()\nClass arguments details:\n");
		}


		b2FrictionJoint* self=Luna< b2Joint >::checkSubType< b2FrictionJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2FrictionJoint::Dump(). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->Dump();

		return 0;
	}

	// b2Vec2 b2FrictionJoint::base_GetAnchorA() const
	static int _bind_base_GetAnchorA(lua_State *L) {
		if (!_lg_typecheck_base_GetAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2FrictionJoint::base_GetAnchorA() const function, expected prototype:\nb2Vec2 b2FrictionJoint::base_GetAnchorA() const\nClass arguments details:\n");
		}


		b2FrictionJoint* self=Luna< b2Joint >::checkSubType< b2FrictionJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2FrictionJoint::base_GetAnchorA() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->b2FrictionJoint::GetAnchorA();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2FrictionJoint::base_GetAnchorB() const
	static int _bind_base_GetAnchorB(lua_State *L) {
		if (!_lg_typecheck_base_GetAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2FrictionJoint::base_GetAnchorB() const function, expected prototype:\nb2Vec2 b2FrictionJoint::base_GetAnchorB() const\nClass arguments details:\n");
		}


		b2FrictionJoint* self=Luna< b2Joint >::checkSubType< b2FrictionJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2FrictionJoint::base_GetAnchorB() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->b2FrictionJoint::GetAnchorB();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2FrictionJoint::base_GetReactionForce(float inv_dt) const
	static int _bind_base_GetReactionForce(lua_State *L) {
		if (!_lg_typecheck_base_GetReactionForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2FrictionJoint::base_GetReactionForce(float inv_dt) const function, expected prototype:\nb2Vec2 b2FrictionJoint::base_GetReactionForce(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2FrictionJoint* self=Luna< b2Joint >::checkSubType< b2FrictionJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2FrictionJoint::base_GetReactionForce(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->b2FrictionJoint::GetReactionForce(inv_dt);
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// float b2FrictionJoint::base_GetReactionTorque(float inv_dt) const
	static int _bind_base_GetReactionTorque(lua_State *L) {
		if (!_lg_typecheck_base_GetReactionTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2FrictionJoint::base_GetReactionTorque(float inv_dt) const function, expected prototype:\nfloat b2FrictionJoint::base_GetReactionTorque(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2FrictionJoint* self=Luna< b2Joint >::checkSubType< b2FrictionJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2FrictionJoint::base_GetReactionTorque(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->b2FrictionJoint::GetReactionTorque(inv_dt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2FrictionJoint::base_Dump()
	static int _bind_base_Dump(lua_State *L) {
		if (!_lg_typecheck_base_Dump(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2FrictionJoint::base_Dump() function, expected prototype:\nvoid b2FrictionJoint::base_Dump()\nClass arguments details:\n");
		}


		b2FrictionJoint* self=Luna< b2Joint >::checkSubType< b2FrictionJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2FrictionJoint::base_Dump(). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->b2FrictionJoint::Dump();

		return 0;
	}


	// Operator binds:

};

b2FrictionJoint* LunaTraits< b2FrictionJoint >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< b2FrictionJoint >::_bind_dtor(b2FrictionJoint* obj) {
	delete obj;
}

const char LunaTraits< b2FrictionJoint >::className[] = "b2FrictionJoint";
const char LunaTraits< b2FrictionJoint >::fullName[] = "b2FrictionJoint";
const char LunaTraits< b2FrictionJoint >::moduleName[] = "box2d";
const char* LunaTraits< b2FrictionJoint >::parents[] = {"box2d.b2Joint", 0};
const int LunaTraits< b2FrictionJoint >::hash = 46210800;
const int LunaTraits< b2FrictionJoint >::uniqueIDs[] = {78564754,0};

luna_RegType LunaTraits< b2FrictionJoint >::methods[] = {
	{"GetAnchorA", &luna_wrapper_b2FrictionJoint::_bind_GetAnchorA},
	{"GetAnchorB", &luna_wrapper_b2FrictionJoint::_bind_GetAnchorB},
	{"GetReactionForce", &luna_wrapper_b2FrictionJoint::_bind_GetReactionForce},
	{"GetReactionTorque", &luna_wrapper_b2FrictionJoint::_bind_GetReactionTorque},
	{"GetLocalAnchorA", &luna_wrapper_b2FrictionJoint::_bind_GetLocalAnchorA},
	{"GetLocalAnchorB", &luna_wrapper_b2FrictionJoint::_bind_GetLocalAnchorB},
	{"SetMaxForce", &luna_wrapper_b2FrictionJoint::_bind_SetMaxForce},
	{"GetMaxForce", &luna_wrapper_b2FrictionJoint::_bind_GetMaxForce},
	{"SetMaxTorque", &luna_wrapper_b2FrictionJoint::_bind_SetMaxTorque},
	{"GetMaxTorque", &luna_wrapper_b2FrictionJoint::_bind_GetMaxTorque},
	{"Dump", &luna_wrapper_b2FrictionJoint::_bind_Dump},
	{"base_GetAnchorA", &luna_wrapper_b2FrictionJoint::_bind_base_GetAnchorA},
	{"base_GetAnchorB", &luna_wrapper_b2FrictionJoint::_bind_base_GetAnchorB},
	{"base_GetReactionForce", &luna_wrapper_b2FrictionJoint::_bind_base_GetReactionForce},
	{"base_GetReactionTorque", &luna_wrapper_b2FrictionJoint::_bind_base_GetReactionTorque},
	{"base_Dump", &luna_wrapper_b2FrictionJoint::_bind_base_Dump},
	{"__eq", &luna_wrapper_b2FrictionJoint::_bind___eq},
	{"getTable", &luna_wrapper_b2FrictionJoint::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< b2FrictionJoint >::converters[] = {
	{"b2Joint", &luna_wrapper_b2FrictionJoint::_cast_from_b2Joint},
	{0,0}
};

luna_RegEnumType LunaTraits< b2FrictionJoint >::enumValues[] = {
	{0,0}
};


