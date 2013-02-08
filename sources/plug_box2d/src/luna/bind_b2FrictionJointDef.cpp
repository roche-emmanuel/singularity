#include <plug_common.h>

class luna_wrapper_b2FrictionJointDef {
public:
	typedef Luna< b2FrictionJointDef > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,22467414) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2JointDef*)");
		}

		b2JointDef* rhs =(Luna< b2JointDef >::check(L,2));
		b2JointDef* self=(Luna< b2JointDef >::check(L,1));
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

		b2FrictionJointDef* self= (b2FrictionJointDef*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2FrictionJointDef >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,22467414) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2JointDef >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_b2JointDef(lua_State *L) {
		// all checked are already performed before reaching this point.
		//b2FrictionJointDef* ptr= dynamic_cast< b2FrictionJointDef* >(Luna< b2JointDef >::check(L,1));
		b2FrictionJointDef* ptr= luna_caster< b2JointDef, b2FrictionJointDef >::cast(Luna< b2JointDef >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< b2FrictionJointDef >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Initialize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,53908778)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,53908778)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLocalAnchorA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalAnchorB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxForce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxTorque(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLocalAnchorA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalAnchorB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxTorque(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2FrictionJointDef::b2FrictionJointDef()
	static b2FrictionJointDef* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2FrictionJointDef::b2FrictionJointDef() function, expected prototype:\nb2FrictionJointDef::b2FrictionJointDef()\nClass arguments details:\n");
		}


		return new b2FrictionJointDef();
	}


	// Function binds:
	// void b2FrictionJointDef::Initialize(b2Body * bodyA, b2Body * bodyB, const b2Vec2 & anchor)
	static int _bind_Initialize(lua_State *L) {
		if (!_lg_typecheck_Initialize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2FrictionJointDef::Initialize(b2Body * bodyA, b2Body * bodyB, const b2Vec2 & anchor) function, expected prototype:\nvoid b2FrictionJointDef::Initialize(b2Body * bodyA, b2Body * bodyB, const b2Vec2 & anchor)\nClass arguments details:\narg 1 ID = 53908778\narg 2 ID = 53908778\narg 3 ID = 54494886\n");
		}

		b2Body* bodyA=(Luna< b2Body >::check(L,2));
		b2Body* bodyB=(Luna< b2Body >::check(L,3));
		const b2Vec2* anchor_ptr=(Luna< b2Vec2 >::check(L,4));
		if( !anchor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg anchor in b2FrictionJointDef::Initialize function");
		}
		const b2Vec2 & anchor=*anchor_ptr;

		b2FrictionJointDef* self=Luna< b2JointDef >::checkSubType< b2FrictionJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2FrictionJointDef::Initialize(b2Body *, b2Body *, const b2Vec2 &). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->Initialize(bodyA, bodyB, anchor);

		return 0;
	}

	// b2Vec2 b2FrictionJointDef::localAnchorA()
	static int _bind_getLocalAnchorA(lua_State *L) {
		if (!_lg_typecheck_getLocalAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2FrictionJointDef::localAnchorA() function, expected prototype:\nb2Vec2 b2FrictionJointDef::localAnchorA()\nClass arguments details:\n");
		}


		b2FrictionJointDef* self=Luna< b2JointDef >::checkSubType< b2FrictionJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2FrictionJointDef::localAnchorA(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->localAnchorA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// b2Vec2 b2FrictionJointDef::localAnchorB()
	static int _bind_getLocalAnchorB(lua_State *L) {
		if (!_lg_typecheck_getLocalAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2FrictionJointDef::localAnchorB() function, expected prototype:\nb2Vec2 b2FrictionJointDef::localAnchorB()\nClass arguments details:\n");
		}


		b2FrictionJointDef* self=Luna< b2JointDef >::checkSubType< b2FrictionJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2FrictionJointDef::localAnchorB(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->localAnchorB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// float b2FrictionJointDef::maxForce()
	static int _bind_getMaxForce(lua_State *L) {
		if (!_lg_typecheck_getMaxForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2FrictionJointDef::maxForce() function, expected prototype:\nfloat b2FrictionJointDef::maxForce()\nClass arguments details:\n");
		}


		b2FrictionJointDef* self=Luna< b2JointDef >::checkSubType< b2FrictionJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2FrictionJointDef::maxForce(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		float lret = self->maxForce;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2FrictionJointDef::maxTorque()
	static int _bind_getMaxTorque(lua_State *L) {
		if (!_lg_typecheck_getMaxTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2FrictionJointDef::maxTorque() function, expected prototype:\nfloat b2FrictionJointDef::maxTorque()\nClass arguments details:\n");
		}


		b2FrictionJointDef* self=Luna< b2JointDef >::checkSubType< b2FrictionJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2FrictionJointDef::maxTorque(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		float lret = self->maxTorque;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2FrictionJointDef::localAnchorA(b2Vec2 value)
	static int _bind_setLocalAnchorA(lua_State *L) {
		if (!_lg_typecheck_setLocalAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2FrictionJointDef::localAnchorA(b2Vec2 value) function, expected prototype:\nvoid b2FrictionJointDef::localAnchorA(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2FrictionJointDef::localAnchorA function");
		}
		b2Vec2 value=*value_ptr;

		b2FrictionJointDef* self=Luna< b2JointDef >::checkSubType< b2FrictionJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2FrictionJointDef::localAnchorA(b2Vec2). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->localAnchorA = value;

		return 0;
	}

	// void b2FrictionJointDef::localAnchorB(b2Vec2 value)
	static int _bind_setLocalAnchorB(lua_State *L) {
		if (!_lg_typecheck_setLocalAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2FrictionJointDef::localAnchorB(b2Vec2 value) function, expected prototype:\nvoid b2FrictionJointDef::localAnchorB(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2FrictionJointDef::localAnchorB function");
		}
		b2Vec2 value=*value_ptr;

		b2FrictionJointDef* self=Luna< b2JointDef >::checkSubType< b2FrictionJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2FrictionJointDef::localAnchorB(b2Vec2). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->localAnchorB = value;

		return 0;
	}

	// void b2FrictionJointDef::maxForce(float value)
	static int _bind_setMaxForce(lua_State *L) {
		if (!_lg_typecheck_setMaxForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2FrictionJointDef::maxForce(float value) function, expected prototype:\nvoid b2FrictionJointDef::maxForce(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2FrictionJointDef* self=Luna< b2JointDef >::checkSubType< b2FrictionJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2FrictionJointDef::maxForce(float). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->maxForce = value;

		return 0;
	}

	// void b2FrictionJointDef::maxTorque(float value)
	static int _bind_setMaxTorque(lua_State *L) {
		if (!_lg_typecheck_setMaxTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2FrictionJointDef::maxTorque(float value) function, expected prototype:\nvoid b2FrictionJointDef::maxTorque(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2FrictionJointDef* self=Luna< b2JointDef >::checkSubType< b2FrictionJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2FrictionJointDef::maxTorque(float). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->maxTorque = value;

		return 0;
	}


	// Operator binds:

};

b2FrictionJointDef* LunaTraits< b2FrictionJointDef >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2FrictionJointDef::_bind_ctor(L);
}

void LunaTraits< b2FrictionJointDef >::_bind_dtor(b2FrictionJointDef* obj) {
	delete obj;
}

const char LunaTraits< b2FrictionJointDef >::className[] = "b2FrictionJointDef";
const char LunaTraits< b2FrictionJointDef >::fullName[] = "b2FrictionJointDef";
const char LunaTraits< b2FrictionJointDef >::moduleName[] = "box2d";
const char* LunaTraits< b2FrictionJointDef >::parents[] = {"box2d.b2JointDef", 0};
const int LunaTraits< b2FrictionJointDef >::hash = 65790811;
const int LunaTraits< b2FrictionJointDef >::uniqueIDs[] = {22467414,0};

luna_RegType LunaTraits< b2FrictionJointDef >::methods[] = {
	{"Initialize", &luna_wrapper_b2FrictionJointDef::_bind_Initialize},
	{"getLocalAnchorA", &luna_wrapper_b2FrictionJointDef::_bind_getLocalAnchorA},
	{"getLocalAnchorB", &luna_wrapper_b2FrictionJointDef::_bind_getLocalAnchorB},
	{"getMaxForce", &luna_wrapper_b2FrictionJointDef::_bind_getMaxForce},
	{"getMaxTorque", &luna_wrapper_b2FrictionJointDef::_bind_getMaxTorque},
	{"setLocalAnchorA", &luna_wrapper_b2FrictionJointDef::_bind_setLocalAnchorA},
	{"setLocalAnchorB", &luna_wrapper_b2FrictionJointDef::_bind_setLocalAnchorB},
	{"setMaxForce", &luna_wrapper_b2FrictionJointDef::_bind_setMaxForce},
	{"setMaxTorque", &luna_wrapper_b2FrictionJointDef::_bind_setMaxTorque},
	{"__eq", &luna_wrapper_b2FrictionJointDef::_bind___eq},
	{"fromVoid", &luna_wrapper_b2FrictionJointDef::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2FrictionJointDef::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2FrictionJointDef >::converters[] = {
	{"b2JointDef", &luna_wrapper_b2FrictionJointDef::_cast_from_b2JointDef},
	{0,0}
};

luna_RegEnumType LunaTraits< b2FrictionJointDef >::enumValues[] = {
	{0,0}
};


