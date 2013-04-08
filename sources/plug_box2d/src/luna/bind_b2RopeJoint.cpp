#include <plug_common.h>

#include <luna/wrappers/wrapper_b2RopeJoint.h>

class luna_wrapper_b2RopeJoint {
public:
	typedef Luna< b2RopeJoint > luna_t;

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

		b2RopeJoint* self= (b2RopeJoint*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2RopeJoint >::push(L,self,false);
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
		//b2RopeJoint* ptr= dynamic_cast< b2RopeJoint* >(Luna< b2Joint >::check(L,1));
		b2RopeJoint* ptr= luna_caster< b2Joint, b2RopeJoint >::cast(Luna< b2Joint >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< b2RopeJoint >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_SetMaxLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMaxLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLimitState(lua_State *L) {
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
	// b2Vec2 b2RopeJoint::GetAnchorA() const
	static int _bind_GetAnchorA(lua_State *L) {
		if (!_lg_typecheck_GetAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2RopeJoint::GetAnchorA() const function, expected prototype:\nb2Vec2 b2RopeJoint::GetAnchorA() const\nClass arguments details:\n");
		}


		b2RopeJoint* self=Luna< b2Joint >::checkSubType< b2RopeJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2RopeJoint::GetAnchorA() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetAnchorA();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2RopeJoint::GetAnchorB() const
	static int _bind_GetAnchorB(lua_State *L) {
		if (!_lg_typecheck_GetAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2RopeJoint::GetAnchorB() const function, expected prototype:\nb2Vec2 b2RopeJoint::GetAnchorB() const\nClass arguments details:\n");
		}


		b2RopeJoint* self=Luna< b2Joint >::checkSubType< b2RopeJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2RopeJoint::GetAnchorB() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetAnchorB();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2RopeJoint::GetReactionForce(float inv_dt) const
	static int _bind_GetReactionForce(lua_State *L) {
		if (!_lg_typecheck_GetReactionForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2RopeJoint::GetReactionForce(float inv_dt) const function, expected prototype:\nb2Vec2 b2RopeJoint::GetReactionForce(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2RopeJoint* self=Luna< b2Joint >::checkSubType< b2RopeJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2RopeJoint::GetReactionForce(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetReactionForce(inv_dt);
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// float b2RopeJoint::GetReactionTorque(float inv_dt) const
	static int _bind_GetReactionTorque(lua_State *L) {
		if (!_lg_typecheck_GetReactionTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2RopeJoint::GetReactionTorque(float inv_dt) const function, expected prototype:\nfloat b2RopeJoint::GetReactionTorque(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2RopeJoint* self=Luna< b2Joint >::checkSubType< b2RopeJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2RopeJoint::GetReactionTorque(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetReactionTorque(inv_dt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const b2Vec2 & b2RopeJoint::GetLocalAnchorA() const
	static int _bind_GetLocalAnchorA(lua_State *L) {
		if (!_lg_typecheck_GetLocalAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Vec2 & b2RopeJoint::GetLocalAnchorA() const function, expected prototype:\nconst b2Vec2 & b2RopeJoint::GetLocalAnchorA() const\nClass arguments details:\n");
		}


		b2RopeJoint* self=Luna< b2Joint >::checkSubType< b2RopeJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Vec2 & b2RopeJoint::GetLocalAnchorA() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->GetLocalAnchorA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// const b2Vec2 & b2RopeJoint::GetLocalAnchorB() const
	static int _bind_GetLocalAnchorB(lua_State *L) {
		if (!_lg_typecheck_GetLocalAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Vec2 & b2RopeJoint::GetLocalAnchorB() const function, expected prototype:\nconst b2Vec2 & b2RopeJoint::GetLocalAnchorB() const\nClass arguments details:\n");
		}


		b2RopeJoint* self=Luna< b2Joint >::checkSubType< b2RopeJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Vec2 & b2RopeJoint::GetLocalAnchorB() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->GetLocalAnchorB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// void b2RopeJoint::SetMaxLength(float length)
	static int _bind_SetMaxLength(lua_State *L) {
		if (!_lg_typecheck_SetMaxLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2RopeJoint::SetMaxLength(float length) function, expected prototype:\nvoid b2RopeJoint::SetMaxLength(float length)\nClass arguments details:\n");
		}

		float length=(float)lua_tonumber(L,2);

		b2RopeJoint* self=Luna< b2Joint >::checkSubType< b2RopeJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2RopeJoint::SetMaxLength(float). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->SetMaxLength(length);

		return 0;
	}

	// float b2RopeJoint::GetMaxLength() const
	static int _bind_GetMaxLength(lua_State *L) {
		if (!_lg_typecheck_GetMaxLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2RopeJoint::GetMaxLength() const function, expected prototype:\nfloat b2RopeJoint::GetMaxLength() const\nClass arguments details:\n");
		}


		b2RopeJoint* self=Luna< b2Joint >::checkSubType< b2RopeJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2RopeJoint::GetMaxLength() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetMaxLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// b2LimitState b2RopeJoint::GetLimitState() const
	static int _bind_GetLimitState(lua_State *L) {
		if (!_lg_typecheck_GetLimitState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2LimitState b2RopeJoint::GetLimitState() const function, expected prototype:\nb2LimitState b2RopeJoint::GetLimitState() const\nClass arguments details:\n");
		}


		b2RopeJoint* self=Luna< b2Joint >::checkSubType< b2RopeJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2LimitState b2RopeJoint::GetLimitState() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2LimitState lret = self->GetLimitState();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2RopeJoint::Dump()
	static int _bind_Dump(lua_State *L) {
		if (!_lg_typecheck_Dump(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2RopeJoint::Dump() function, expected prototype:\nvoid b2RopeJoint::Dump()\nClass arguments details:\n");
		}


		b2RopeJoint* self=Luna< b2Joint >::checkSubType< b2RopeJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2RopeJoint::Dump(). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->Dump();

		return 0;
	}

	// b2Vec2 b2RopeJoint::base_GetAnchorA() const
	static int _bind_base_GetAnchorA(lua_State *L) {
		if (!_lg_typecheck_base_GetAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2RopeJoint::base_GetAnchorA() const function, expected prototype:\nb2Vec2 b2RopeJoint::base_GetAnchorA() const\nClass arguments details:\n");
		}


		b2RopeJoint* self=Luna< b2Joint >::checkSubType< b2RopeJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2RopeJoint::base_GetAnchorA() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->b2RopeJoint::GetAnchorA();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2RopeJoint::base_GetAnchorB() const
	static int _bind_base_GetAnchorB(lua_State *L) {
		if (!_lg_typecheck_base_GetAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2RopeJoint::base_GetAnchorB() const function, expected prototype:\nb2Vec2 b2RopeJoint::base_GetAnchorB() const\nClass arguments details:\n");
		}


		b2RopeJoint* self=Luna< b2Joint >::checkSubType< b2RopeJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2RopeJoint::base_GetAnchorB() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->b2RopeJoint::GetAnchorB();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2RopeJoint::base_GetReactionForce(float inv_dt) const
	static int _bind_base_GetReactionForce(lua_State *L) {
		if (!_lg_typecheck_base_GetReactionForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2RopeJoint::base_GetReactionForce(float inv_dt) const function, expected prototype:\nb2Vec2 b2RopeJoint::base_GetReactionForce(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2RopeJoint* self=Luna< b2Joint >::checkSubType< b2RopeJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2RopeJoint::base_GetReactionForce(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->b2RopeJoint::GetReactionForce(inv_dt);
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// float b2RopeJoint::base_GetReactionTorque(float inv_dt) const
	static int _bind_base_GetReactionTorque(lua_State *L) {
		if (!_lg_typecheck_base_GetReactionTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2RopeJoint::base_GetReactionTorque(float inv_dt) const function, expected prototype:\nfloat b2RopeJoint::base_GetReactionTorque(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2RopeJoint* self=Luna< b2Joint >::checkSubType< b2RopeJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2RopeJoint::base_GetReactionTorque(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->b2RopeJoint::GetReactionTorque(inv_dt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2RopeJoint::base_Dump()
	static int _bind_base_Dump(lua_State *L) {
		if (!_lg_typecheck_base_Dump(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2RopeJoint::base_Dump() function, expected prototype:\nvoid b2RopeJoint::base_Dump()\nClass arguments details:\n");
		}


		b2RopeJoint* self=Luna< b2Joint >::checkSubType< b2RopeJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2RopeJoint::base_Dump(). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->b2RopeJoint::Dump();

		return 0;
	}


	// Operator binds:

};

b2RopeJoint* LunaTraits< b2RopeJoint >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2RopeJoint >::_bind_dtor(b2RopeJoint* obj) {
	delete obj;
}

const char LunaTraits< b2RopeJoint >::className[] = "b2RopeJoint";
const char LunaTraits< b2RopeJoint >::fullName[] = "b2RopeJoint";
const char LunaTraits< b2RopeJoint >::moduleName[] = "box2d";
const char* LunaTraits< b2RopeJoint >::parents[] = {"box2d.b2Joint", 0};
const int LunaTraits< b2RopeJoint >::hash = 41594948;
const int LunaTraits< b2RopeJoint >::uniqueIDs[] = {78564754,0};

luna_RegType LunaTraits< b2RopeJoint >::methods[] = {
	{"GetAnchorA", &luna_wrapper_b2RopeJoint::_bind_GetAnchorA},
	{"GetAnchorB", &luna_wrapper_b2RopeJoint::_bind_GetAnchorB},
	{"GetReactionForce", &luna_wrapper_b2RopeJoint::_bind_GetReactionForce},
	{"GetReactionTorque", &luna_wrapper_b2RopeJoint::_bind_GetReactionTorque},
	{"GetLocalAnchorA", &luna_wrapper_b2RopeJoint::_bind_GetLocalAnchorA},
	{"GetLocalAnchorB", &luna_wrapper_b2RopeJoint::_bind_GetLocalAnchorB},
	{"SetMaxLength", &luna_wrapper_b2RopeJoint::_bind_SetMaxLength},
	{"GetMaxLength", &luna_wrapper_b2RopeJoint::_bind_GetMaxLength},
	{"GetLimitState", &luna_wrapper_b2RopeJoint::_bind_GetLimitState},
	{"Dump", &luna_wrapper_b2RopeJoint::_bind_Dump},
	{"base_GetAnchorA", &luna_wrapper_b2RopeJoint::_bind_base_GetAnchorA},
	{"base_GetAnchorB", &luna_wrapper_b2RopeJoint::_bind_base_GetAnchorB},
	{"base_GetReactionForce", &luna_wrapper_b2RopeJoint::_bind_base_GetReactionForce},
	{"base_GetReactionTorque", &luna_wrapper_b2RopeJoint::_bind_base_GetReactionTorque},
	{"base_Dump", &luna_wrapper_b2RopeJoint::_bind_base_Dump},
	{"fromVoid", &luna_wrapper_b2RopeJoint::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2RopeJoint::_bind_asVoid},
	{"getTable", &luna_wrapper_b2RopeJoint::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< b2RopeJoint >::converters[] = {
	{"b2Joint", &luna_wrapper_b2RopeJoint::_cast_from_b2Joint},
	{0,0}
};

luna_RegEnumType LunaTraits< b2RopeJoint >::enumValues[] = {
	{0,0}
};


