#include <plug_common.h>

#include <luna/wrappers/wrapper_b2PulleyJoint.h>

class luna_wrapper_b2PulleyJoint {
public:
	typedef Luna< b2PulleyJoint > luna_t;

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
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		b2PulleyJoint* self= (b2PulleyJoint*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2PulleyJoint >::push(L,self,false);
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
		//b2PulleyJoint* ptr= dynamic_cast< b2PulleyJoint* >(Luna< b2Joint >::check(L,1));
		b2PulleyJoint* ptr= luna_caster< b2Joint, b2PulleyJoint >::cast(Luna< b2Joint >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< b2PulleyJoint >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_GetGroundAnchorA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetGroundAnchorB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLengthA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLengthB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// b2Vec2 b2PulleyJoint::GetAnchorA() const
	static int _bind_GetAnchorA(lua_State *L) {
		if (!_lg_typecheck_GetAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2PulleyJoint::GetAnchorA() const function, expected prototype:\nb2Vec2 b2PulleyJoint::GetAnchorA() const\nClass arguments details:\n");
		}


		b2PulleyJoint* self=Luna< b2Joint >::checkSubType< b2PulleyJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2PulleyJoint::GetAnchorA() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetAnchorA();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2PulleyJoint::GetAnchorB() const
	static int _bind_GetAnchorB(lua_State *L) {
		if (!_lg_typecheck_GetAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2PulleyJoint::GetAnchorB() const function, expected prototype:\nb2Vec2 b2PulleyJoint::GetAnchorB() const\nClass arguments details:\n");
		}


		b2PulleyJoint* self=Luna< b2Joint >::checkSubType< b2PulleyJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2PulleyJoint::GetAnchorB() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetAnchorB();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2PulleyJoint::GetReactionForce(float inv_dt) const
	static int _bind_GetReactionForce(lua_State *L) {
		if (!_lg_typecheck_GetReactionForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2PulleyJoint::GetReactionForce(float inv_dt) const function, expected prototype:\nb2Vec2 b2PulleyJoint::GetReactionForce(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2PulleyJoint* self=Luna< b2Joint >::checkSubType< b2PulleyJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2PulleyJoint::GetReactionForce(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetReactionForce(inv_dt);
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// float b2PulleyJoint::GetReactionTorque(float inv_dt) const
	static int _bind_GetReactionTorque(lua_State *L) {
		if (!_lg_typecheck_GetReactionTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2PulleyJoint::GetReactionTorque(float inv_dt) const function, expected prototype:\nfloat b2PulleyJoint::GetReactionTorque(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2PulleyJoint* self=Luna< b2Joint >::checkSubType< b2PulleyJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2PulleyJoint::GetReactionTorque(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetReactionTorque(inv_dt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// b2Vec2 b2PulleyJoint::GetGroundAnchorA() const
	static int _bind_GetGroundAnchorA(lua_State *L) {
		if (!_lg_typecheck_GetGroundAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2PulleyJoint::GetGroundAnchorA() const function, expected prototype:\nb2Vec2 b2PulleyJoint::GetGroundAnchorA() const\nClass arguments details:\n");
		}


		b2PulleyJoint* self=Luna< b2Joint >::checkSubType< b2PulleyJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2PulleyJoint::GetGroundAnchorA() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetGroundAnchorA();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2PulleyJoint::GetGroundAnchorB() const
	static int _bind_GetGroundAnchorB(lua_State *L) {
		if (!_lg_typecheck_GetGroundAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2PulleyJoint::GetGroundAnchorB() const function, expected prototype:\nb2Vec2 b2PulleyJoint::GetGroundAnchorB() const\nClass arguments details:\n");
		}


		b2PulleyJoint* self=Luna< b2Joint >::checkSubType< b2PulleyJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2PulleyJoint::GetGroundAnchorB() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetGroundAnchorB();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// float b2PulleyJoint::GetLengthA() const
	static int _bind_GetLengthA(lua_State *L) {
		if (!_lg_typecheck_GetLengthA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2PulleyJoint::GetLengthA() const function, expected prototype:\nfloat b2PulleyJoint::GetLengthA() const\nClass arguments details:\n");
		}


		b2PulleyJoint* self=Luna< b2Joint >::checkSubType< b2PulleyJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2PulleyJoint::GetLengthA() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetLengthA();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2PulleyJoint::GetLengthB() const
	static int _bind_GetLengthB(lua_State *L) {
		if (!_lg_typecheck_GetLengthB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2PulleyJoint::GetLengthB() const function, expected prototype:\nfloat b2PulleyJoint::GetLengthB() const\nClass arguments details:\n");
		}


		b2PulleyJoint* self=Luna< b2Joint >::checkSubType< b2PulleyJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2PulleyJoint::GetLengthB() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetLengthB();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2PulleyJoint::GetRatio() const
	static int _bind_GetRatio(lua_State *L) {
		if (!_lg_typecheck_GetRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2PulleyJoint::GetRatio() const function, expected prototype:\nfloat b2PulleyJoint::GetRatio() const\nClass arguments details:\n");
		}


		b2PulleyJoint* self=Luna< b2Joint >::checkSubType< b2PulleyJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2PulleyJoint::GetRatio() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->GetRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2PulleyJoint::Dump()
	static int _bind_Dump(lua_State *L) {
		if (!_lg_typecheck_Dump(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2PulleyJoint::Dump() function, expected prototype:\nvoid b2PulleyJoint::Dump()\nClass arguments details:\n");
		}


		b2PulleyJoint* self=Luna< b2Joint >::checkSubType< b2PulleyJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2PulleyJoint::Dump(). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->Dump();

		return 0;
	}

	// b2Vec2 b2PulleyJoint::base_GetAnchorA() const
	static int _bind_base_GetAnchorA(lua_State *L) {
		if (!_lg_typecheck_base_GetAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2PulleyJoint::base_GetAnchorA() const function, expected prototype:\nb2Vec2 b2PulleyJoint::base_GetAnchorA() const\nClass arguments details:\n");
		}


		b2PulleyJoint* self=Luna< b2Joint >::checkSubType< b2PulleyJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2PulleyJoint::base_GetAnchorA() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->b2PulleyJoint::GetAnchorA();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2PulleyJoint::base_GetAnchorB() const
	static int _bind_base_GetAnchorB(lua_State *L) {
		if (!_lg_typecheck_base_GetAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2PulleyJoint::base_GetAnchorB() const function, expected prototype:\nb2Vec2 b2PulleyJoint::base_GetAnchorB() const\nClass arguments details:\n");
		}


		b2PulleyJoint* self=Luna< b2Joint >::checkSubType< b2PulleyJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2PulleyJoint::base_GetAnchorB() const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->b2PulleyJoint::GetAnchorB();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2PulleyJoint::base_GetReactionForce(float inv_dt) const
	static int _bind_base_GetReactionForce(lua_State *L) {
		if (!_lg_typecheck_base_GetReactionForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2PulleyJoint::base_GetReactionForce(float inv_dt) const function, expected prototype:\nb2Vec2 b2PulleyJoint::base_GetReactionForce(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2PulleyJoint* self=Luna< b2Joint >::checkSubType< b2PulleyJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2PulleyJoint::base_GetReactionForce(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->b2PulleyJoint::GetReactionForce(inv_dt);
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// float b2PulleyJoint::base_GetReactionTorque(float inv_dt) const
	static int _bind_base_GetReactionTorque(lua_State *L) {
		if (!_lg_typecheck_base_GetReactionTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2PulleyJoint::base_GetReactionTorque(float inv_dt) const function, expected prototype:\nfloat b2PulleyJoint::base_GetReactionTorque(float inv_dt) const\nClass arguments details:\n");
		}

		float inv_dt=(float)lua_tonumber(L,2);

		b2PulleyJoint* self=Luna< b2Joint >::checkSubType< b2PulleyJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2PulleyJoint::base_GetReactionTorque(float) const. Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		float lret = self->b2PulleyJoint::GetReactionTorque(inv_dt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2PulleyJoint::base_Dump()
	static int _bind_base_Dump(lua_State *L) {
		if (!_lg_typecheck_base_Dump(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2PulleyJoint::base_Dump() function, expected prototype:\nvoid b2PulleyJoint::base_Dump()\nClass arguments details:\n");
		}


		b2PulleyJoint* self=Luna< b2Joint >::checkSubType< b2PulleyJoint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2PulleyJoint::base_Dump(). Got : '%s'",typeid(Luna< b2Joint >::check(L,1)).name());
		}
		self->b2PulleyJoint::Dump();

		return 0;
	}


	// Operator binds:

};

b2PulleyJoint* LunaTraits< b2PulleyJoint >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2PulleyJoint >::_bind_dtor(b2PulleyJoint* obj) {
	delete obj;
}

const char LunaTraits< b2PulleyJoint >::className[] = "b2PulleyJoint";
const char LunaTraits< b2PulleyJoint >::fullName[] = "b2PulleyJoint";
const char LunaTraits< b2PulleyJoint >::moduleName[] = "box2d";
const char* LunaTraits< b2PulleyJoint >::parents[] = {"box2d.b2Joint", 0};
const int LunaTraits< b2PulleyJoint >::hash = 9783671;
const int LunaTraits< b2PulleyJoint >::uniqueIDs[] = {78564754,0};

luna_RegType LunaTraits< b2PulleyJoint >::methods[] = {
	{"GetAnchorA", &luna_wrapper_b2PulleyJoint::_bind_GetAnchorA},
	{"GetAnchorB", &luna_wrapper_b2PulleyJoint::_bind_GetAnchorB},
	{"GetReactionForce", &luna_wrapper_b2PulleyJoint::_bind_GetReactionForce},
	{"GetReactionTorque", &luna_wrapper_b2PulleyJoint::_bind_GetReactionTorque},
	{"GetGroundAnchorA", &luna_wrapper_b2PulleyJoint::_bind_GetGroundAnchorA},
	{"GetGroundAnchorB", &luna_wrapper_b2PulleyJoint::_bind_GetGroundAnchorB},
	{"GetLengthA", &luna_wrapper_b2PulleyJoint::_bind_GetLengthA},
	{"GetLengthB", &luna_wrapper_b2PulleyJoint::_bind_GetLengthB},
	{"GetRatio", &luna_wrapper_b2PulleyJoint::_bind_GetRatio},
	{"Dump", &luna_wrapper_b2PulleyJoint::_bind_Dump},
	{"base_GetAnchorA", &luna_wrapper_b2PulleyJoint::_bind_base_GetAnchorA},
	{"base_GetAnchorB", &luna_wrapper_b2PulleyJoint::_bind_base_GetAnchorB},
	{"base_GetReactionForce", &luna_wrapper_b2PulleyJoint::_bind_base_GetReactionForce},
	{"base_GetReactionTorque", &luna_wrapper_b2PulleyJoint::_bind_base_GetReactionTorque},
	{"base_Dump", &luna_wrapper_b2PulleyJoint::_bind_base_Dump},
	{"__eq", &luna_wrapper_b2PulleyJoint::_bind___eq},
	{"fromVoid", &luna_wrapper_b2PulleyJoint::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2PulleyJoint::_bind_asVoid},
	{"getTable", &luna_wrapper_b2PulleyJoint::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< b2PulleyJoint >::converters[] = {
	{"b2Joint", &luna_wrapper_b2PulleyJoint::_cast_from_b2Joint},
	{0,0}
};

luna_RegEnumType LunaTraits< b2PulleyJoint >::enumValues[] = {
	{0,0}
};


