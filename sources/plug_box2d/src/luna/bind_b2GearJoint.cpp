#include <plug_common.h>

#include <luna/wrappers/wrapper_b2GearJoint.h>

class luna_wrapper_b2GearJoint {
public:
	typedef Luna< b2GearJoint > luna_t;

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
		//b2GearJoint* ptr= dynamic_cast< b2GearJoint* >(Luna< b2Joint >::check(L,1));
		b2GearJoint* ptr= luna_caster< b2Joint, b2GearJoint >::cast(Luna< b2Joint >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< b2GearJoint >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_GetJoint1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetJoint2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRatio(lua_State *L) {
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
	// b2Vec2 b2GearJoint::GetAnchorA() const
	static int _bind_GetAnchorA(lua_State *L) {
		if (!_lg_typecheck_GetAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2GearJoint::GetAnchorA() const function, expected prototype:\nb2Vec2 b2GearJoint::GetAnchorA() const\nClass arguments details:\n");
		}


		b2GearJoint* self=Luna< b2Joint >::checkSubType< b2GearJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2GearJoint::GetAnchorA() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetAnchorA();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2GearJoint::GetAnchorB() const
	static int _bind_GetAnchorB(lua_State *L) {
		if (!_lg_typecheck_GetAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2GearJoint::GetAnchorB() const function, expected prototype:\nb2Vec2 b2GearJoint::GetAnchorB() const\nClass arguments details:\n");
		}


		b2GearJoint* self=Luna< b2Joint >::checkSubType< b2GearJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2GearJoint::GetAnchorB() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetAnchorB();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2GearJoint::GetReactionForce(float inv_dt) const
	static int _bind_GetReactionForce(lua_State *L) {
		if (!_lg_typecheck_GetReactionForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2GearJoint::GetReactionForce(float inv_dt) const function, expected prototype:\nb2Vec2 b2GearJoint::GetReactionForce(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2GearJoint* self=Luna< b2Joint >::checkSubType< b2GearJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2GearJoint::GetReactionForce(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetReactionForce(inv_dt);
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// float b2GearJoint::GetReactionTorque(float inv_dt) const
	static int _bind_GetReactionTorque(lua_State *L) {
		if (!_lg_typecheck_GetReactionTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2GearJoint::GetReactionTorque(float inv_dt) const function, expected prototype:\nfloat b2GearJoint::GetReactionTorque(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2GearJoint* self=Luna< b2Joint >::checkSubType< b2GearJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2GearJoint::GetReactionTorque(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetReactionTorque(inv_dt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// b2Joint * b2GearJoint::GetJoint1()
	static int _bind_GetJoint1(lua_State *L) {
		if (!_lg_typecheck_GetJoint1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Joint * b2GearJoint::GetJoint1() function, expected prototype:\nb2Joint * b2GearJoint::GetJoint1()\nClass arguments details:\n");
		}


		b2GearJoint* self=Luna< b2Joint >::checkSubType< b2GearJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Joint * b2GearJoint::GetJoint1(). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Joint * lret = self->GetJoint1();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Joint >::push(L,lret,false);

		return 1;
	}

	// b2Joint * b2GearJoint::GetJoint2()
	static int _bind_GetJoint2(lua_State *L) {
		if (!_lg_typecheck_GetJoint2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Joint * b2GearJoint::GetJoint2() function, expected prototype:\nb2Joint * b2GearJoint::GetJoint2()\nClass arguments details:\n");
		}


		b2GearJoint* self=Luna< b2Joint >::checkSubType< b2GearJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Joint * b2GearJoint::GetJoint2(). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Joint * lret = self->GetJoint2();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Joint >::push(L,lret,false);

		return 1;
	}

	// void b2GearJoint::SetRatio(float ratio)
	static int _bind_SetRatio(lua_State *L) {
		if (!_lg_typecheck_SetRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2GearJoint::SetRatio(float ratio) function, expected prototype:\nvoid b2GearJoint::SetRatio(float ratio)\nClass arguments details:\n");
		}

		float ratio=(float)lua_tonumber(L,2);

		b2GearJoint* self=Luna< b2Joint >::checkSubType< b2GearJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2GearJoint::SetRatio(float). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->SetRatio(ratio);

		return 0;
	}

	// float b2GearJoint::GetRatio() const
	static int _bind_GetRatio(lua_State *L) {
		if (!_lg_typecheck_GetRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2GearJoint::GetRatio() const function, expected prototype:\nfloat b2GearJoint::GetRatio() const\nClass arguments details:\n");
		}


		b2GearJoint* self=Luna< b2Joint >::checkSubType< b2GearJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2GearJoint::GetRatio() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2GearJoint::Dump()
	static int _bind_Dump(lua_State *L) {
		if (!_lg_typecheck_Dump(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2GearJoint::Dump() function, expected prototype:\nvoid b2GearJoint::Dump()\nClass arguments details:\n");
		}


		b2GearJoint* self=Luna< b2Joint >::checkSubType< b2GearJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2GearJoint::Dump(). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->Dump();

		return 0;
	}

	// b2Vec2 b2GearJoint::base_GetAnchorA() const
	static int _bind_base_GetAnchorA(lua_State *L) {
		if (!_lg_typecheck_base_GetAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2GearJoint::base_GetAnchorA() const function, expected prototype:\nb2Vec2 b2GearJoint::base_GetAnchorA() const\nClass arguments details:\n");
		}


		b2GearJoint* self=Luna< b2Joint >::checkSubType< b2GearJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2GearJoint::base_GetAnchorA() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->b2GearJoint::GetAnchorA();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2GearJoint::base_GetAnchorB() const
	static int _bind_base_GetAnchorB(lua_State *L) {
		if (!_lg_typecheck_base_GetAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2GearJoint::base_GetAnchorB() const function, expected prototype:\nb2Vec2 b2GearJoint::base_GetAnchorB() const\nClass arguments details:\n");
		}


		b2GearJoint* self=Luna< b2Joint >::checkSubType< b2GearJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2GearJoint::base_GetAnchorB() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->b2GearJoint::GetAnchorB();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2GearJoint::base_GetReactionForce(float inv_dt) const
	static int _bind_base_GetReactionForce(lua_State *L) {
		if (!_lg_typecheck_base_GetReactionForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2GearJoint::base_GetReactionForce(float inv_dt) const function, expected prototype:\nb2Vec2 b2GearJoint::base_GetReactionForce(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2GearJoint* self=Luna< b2Joint >::checkSubType< b2GearJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2GearJoint::base_GetReactionForce(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->b2GearJoint::GetReactionForce(inv_dt);
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// float b2GearJoint::base_GetReactionTorque(float inv_dt) const
	static int _bind_base_GetReactionTorque(lua_State *L) {
		if (!_lg_typecheck_base_GetReactionTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2GearJoint::base_GetReactionTorque(float inv_dt) const function, expected prototype:\nfloat b2GearJoint::base_GetReactionTorque(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2GearJoint* self=Luna< b2Joint >::checkSubType< b2GearJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2GearJoint::base_GetReactionTorque(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->b2GearJoint::GetReactionTorque(inv_dt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2GearJoint::base_Dump()
	static int _bind_base_Dump(lua_State *L) {
		if (!_lg_typecheck_base_Dump(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2GearJoint::base_Dump() function, expected prototype:\nvoid b2GearJoint::base_Dump()\nClass arguments details:\n");
		}


		b2GearJoint* self=Luna< b2Joint >::checkSubType< b2GearJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2GearJoint::base_Dump(). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->b2GearJoint::Dump();

		return 0;
	}


	// Operator binds:

};

b2GearJoint* LunaTraits< b2GearJoint >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< b2GearJoint >::_bind_dtor(b2GearJoint* obj) {
	delete obj;
}

const char LunaTraits< b2GearJoint >::className[] = "b2GearJoint";
const char LunaTraits< b2GearJoint >::fullName[] = "b2GearJoint";
const char LunaTraits< b2GearJoint >::moduleName[] = "box2d";
const char* LunaTraits< b2GearJoint >::parents[] = {"box2d.b2Joint", 0};
const int LunaTraits< b2GearJoint >::hash = 74446270;
const int LunaTraits< b2GearJoint >::uniqueIDs[] = {78564754,0};

luna_RegType LunaTraits< b2GearJoint >::methods[] = {
	{"GetAnchorA", &luna_wrapper_b2GearJoint::_bind_GetAnchorA},
	{"GetAnchorB", &luna_wrapper_b2GearJoint::_bind_GetAnchorB},
	{"GetReactionForce", &luna_wrapper_b2GearJoint::_bind_GetReactionForce},
	{"GetReactionTorque", &luna_wrapper_b2GearJoint::_bind_GetReactionTorque},
	{"GetJoint1", &luna_wrapper_b2GearJoint::_bind_GetJoint1},
	{"GetJoint2", &luna_wrapper_b2GearJoint::_bind_GetJoint2},
	{"SetRatio", &luna_wrapper_b2GearJoint::_bind_SetRatio},
	{"GetRatio", &luna_wrapper_b2GearJoint::_bind_GetRatio},
	{"Dump", &luna_wrapper_b2GearJoint::_bind_Dump},
	{"base_GetAnchorA", &luna_wrapper_b2GearJoint::_bind_base_GetAnchorA},
	{"base_GetAnchorB", &luna_wrapper_b2GearJoint::_bind_base_GetAnchorB},
	{"base_GetReactionForce", &luna_wrapper_b2GearJoint::_bind_base_GetReactionForce},
	{"base_GetReactionTorque", &luna_wrapper_b2GearJoint::_bind_base_GetReactionTorque},
	{"base_Dump", &luna_wrapper_b2GearJoint::_bind_base_Dump},
	{"__eq", &luna_wrapper_b2GearJoint::_bind___eq},
	{"getTable", &luna_wrapper_b2GearJoint::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< b2GearJoint >::converters[] = {
	{"b2Joint", &luna_wrapper_b2GearJoint::_cast_from_b2Joint},
	{0,0}
};

luna_RegEnumType LunaTraits< b2GearJoint >::enumValues[] = {
	{0,0}
};


