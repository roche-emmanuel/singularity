#include <plug_common.h>

class luna_wrapper_b2WeldJointDef {
public:
	typedef Luna< b2WeldJointDef > luna_t;

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

	// Derived class converters:
	static int _cast_from_b2JointDef(lua_State *L) {
		// all checked are already performed before reaching this point.
		//b2WeldJointDef* ptr= dynamic_cast< b2WeldJointDef* >(Luna< b2JointDef >::check(L,1));
		b2WeldJointDef* ptr= luna_caster< b2JointDef, b2WeldJointDef >::cast(Luna< b2JointDef >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< b2WeldJointDef >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_getReferenceAngle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrequencyHz(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDampingRatio(lua_State *L) {
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

	inline static bool _lg_typecheck_setReferenceAngle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFrequencyHz(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDampingRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2WeldJointDef::b2WeldJointDef()
	static b2WeldJointDef* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2WeldJointDef::b2WeldJointDef() function, expected prototype:\nb2WeldJointDef::b2WeldJointDef()\nClass arguments details:\n");
		}


		return new b2WeldJointDef();
	}


	// Function binds:
	// void b2WeldJointDef::Initialize(b2Body * bodyA, b2Body * bodyB, const b2Vec2 & anchor)
	static int _bind_Initialize(lua_State *L) {
		if (!_lg_typecheck_Initialize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2WeldJointDef::Initialize(b2Body * bodyA, b2Body * bodyB, const b2Vec2 & anchor) function, expected prototype:\nvoid b2WeldJointDef::Initialize(b2Body * bodyA, b2Body * bodyB, const b2Vec2 & anchor)\nClass arguments details:\narg 1 ID = 53908778\narg 2 ID = 53908778\narg 3 ID = 54494886\n");
		}

		b2Body* bodyA=(Luna< b2Body >::check(L,2));
		b2Body* bodyB=(Luna< b2Body >::check(L,3));
		const b2Vec2* anchor_ptr=(Luna< b2Vec2 >::check(L,4));
		if( !anchor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg anchor in b2WeldJointDef::Initialize function");
		}
		const b2Vec2 & anchor=*anchor_ptr;

		b2WeldJointDef* self=Luna< b2JointDef >::checkSubType< b2WeldJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2WeldJointDef::Initialize(b2Body *, b2Body *, const b2Vec2 &). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->Initialize(bodyA, bodyB, anchor);

		return 0;
	}

	// b2Vec2 b2WeldJointDef::localAnchorA()
	static int _bind_getLocalAnchorA(lua_State *L) {
		if (!_lg_typecheck_getLocalAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2WeldJointDef::localAnchorA() function, expected prototype:\nb2Vec2 b2WeldJointDef::localAnchorA()\nClass arguments details:\n");
		}


		b2WeldJointDef* self=Luna< b2JointDef >::checkSubType< b2WeldJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2WeldJointDef::localAnchorA(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->localAnchorA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// b2Vec2 b2WeldJointDef::localAnchorB()
	static int _bind_getLocalAnchorB(lua_State *L) {
		if (!_lg_typecheck_getLocalAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2WeldJointDef::localAnchorB() function, expected prototype:\nb2Vec2 b2WeldJointDef::localAnchorB()\nClass arguments details:\n");
		}


		b2WeldJointDef* self=Luna< b2JointDef >::checkSubType< b2WeldJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2WeldJointDef::localAnchorB(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->localAnchorB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// float b2WeldJointDef::referenceAngle()
	static int _bind_getReferenceAngle(lua_State *L) {
		if (!_lg_typecheck_getReferenceAngle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2WeldJointDef::referenceAngle() function, expected prototype:\nfloat b2WeldJointDef::referenceAngle()\nClass arguments details:\n");
		}


		b2WeldJointDef* self=Luna< b2JointDef >::checkSubType< b2WeldJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2WeldJointDef::referenceAngle(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		float lret = self->referenceAngle;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2WeldJointDef::frequencyHz()
	static int _bind_getFrequencyHz(lua_State *L) {
		if (!_lg_typecheck_getFrequencyHz(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2WeldJointDef::frequencyHz() function, expected prototype:\nfloat b2WeldJointDef::frequencyHz()\nClass arguments details:\n");
		}


		b2WeldJointDef* self=Luna< b2JointDef >::checkSubType< b2WeldJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2WeldJointDef::frequencyHz(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		float lret = self->frequencyHz;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2WeldJointDef::dampingRatio()
	static int _bind_getDampingRatio(lua_State *L) {
		if (!_lg_typecheck_getDampingRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2WeldJointDef::dampingRatio() function, expected prototype:\nfloat b2WeldJointDef::dampingRatio()\nClass arguments details:\n");
		}


		b2WeldJointDef* self=Luna< b2JointDef >::checkSubType< b2WeldJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2WeldJointDef::dampingRatio(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		float lret = self->dampingRatio;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2WeldJointDef::localAnchorA(b2Vec2 value)
	static int _bind_setLocalAnchorA(lua_State *L) {
		if (!_lg_typecheck_setLocalAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2WeldJointDef::localAnchorA(b2Vec2 value) function, expected prototype:\nvoid b2WeldJointDef::localAnchorA(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2WeldJointDef::localAnchorA function");
		}
		b2Vec2 value=*value_ptr;

		b2WeldJointDef* self=Luna< b2JointDef >::checkSubType< b2WeldJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2WeldJointDef::localAnchorA(b2Vec2). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->localAnchorA = value;

		return 0;
	}

	// void b2WeldJointDef::localAnchorB(b2Vec2 value)
	static int _bind_setLocalAnchorB(lua_State *L) {
		if (!_lg_typecheck_setLocalAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2WeldJointDef::localAnchorB(b2Vec2 value) function, expected prototype:\nvoid b2WeldJointDef::localAnchorB(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2WeldJointDef::localAnchorB function");
		}
		b2Vec2 value=*value_ptr;

		b2WeldJointDef* self=Luna< b2JointDef >::checkSubType< b2WeldJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2WeldJointDef::localAnchorB(b2Vec2). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->localAnchorB = value;

		return 0;
	}

	// void b2WeldJointDef::referenceAngle(float value)
	static int _bind_setReferenceAngle(lua_State *L) {
		if (!_lg_typecheck_setReferenceAngle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2WeldJointDef::referenceAngle(float value) function, expected prototype:\nvoid b2WeldJointDef::referenceAngle(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2WeldJointDef* self=Luna< b2JointDef >::checkSubType< b2WeldJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2WeldJointDef::referenceAngle(float). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->referenceAngle = value;

		return 0;
	}

	// void b2WeldJointDef::frequencyHz(float value)
	static int _bind_setFrequencyHz(lua_State *L) {
		if (!_lg_typecheck_setFrequencyHz(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2WeldJointDef::frequencyHz(float value) function, expected prototype:\nvoid b2WeldJointDef::frequencyHz(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2WeldJointDef* self=Luna< b2JointDef >::checkSubType< b2WeldJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2WeldJointDef::frequencyHz(float). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->frequencyHz = value;

		return 0;
	}

	// void b2WeldJointDef::dampingRatio(float value)
	static int _bind_setDampingRatio(lua_State *L) {
		if (!_lg_typecheck_setDampingRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2WeldJointDef::dampingRatio(float value) function, expected prototype:\nvoid b2WeldJointDef::dampingRatio(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2WeldJointDef* self=Luna< b2JointDef >::checkSubType< b2WeldJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2WeldJointDef::dampingRatio(float). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->dampingRatio = value;

		return 0;
	}


	// Operator binds:

};

b2WeldJointDef* LunaTraits< b2WeldJointDef >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2WeldJointDef::_bind_ctor(L);
}

void LunaTraits< b2WeldJointDef >::_bind_dtor(b2WeldJointDef* obj) {
	delete obj;
}

const char LunaTraits< b2WeldJointDef >::className[] = "b2WeldJointDef";
const char LunaTraits< b2WeldJointDef >::fullName[] = "b2WeldJointDef";
const char LunaTraits< b2WeldJointDef >::moduleName[] = "box2d";
const char* LunaTraits< b2WeldJointDef >::parents[] = {"box2d.b2JointDef", 0};
const int LunaTraits< b2WeldJointDef >::hash = 74216945;
const int LunaTraits< b2WeldJointDef >::uniqueIDs[] = {22467414,0};

luna_RegType LunaTraits< b2WeldJointDef >::methods[] = {
	{"Initialize", &luna_wrapper_b2WeldJointDef::_bind_Initialize},
	{"getLocalAnchorA", &luna_wrapper_b2WeldJointDef::_bind_getLocalAnchorA},
	{"getLocalAnchorB", &luna_wrapper_b2WeldJointDef::_bind_getLocalAnchorB},
	{"getReferenceAngle", &luna_wrapper_b2WeldJointDef::_bind_getReferenceAngle},
	{"getFrequencyHz", &luna_wrapper_b2WeldJointDef::_bind_getFrequencyHz},
	{"getDampingRatio", &luna_wrapper_b2WeldJointDef::_bind_getDampingRatio},
	{"setLocalAnchorA", &luna_wrapper_b2WeldJointDef::_bind_setLocalAnchorA},
	{"setLocalAnchorB", &luna_wrapper_b2WeldJointDef::_bind_setLocalAnchorB},
	{"setReferenceAngle", &luna_wrapper_b2WeldJointDef::_bind_setReferenceAngle},
	{"setFrequencyHz", &luna_wrapper_b2WeldJointDef::_bind_setFrequencyHz},
	{"setDampingRatio", &luna_wrapper_b2WeldJointDef::_bind_setDampingRatio},
	{"__eq", &luna_wrapper_b2WeldJointDef::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< b2WeldJointDef >::converters[] = {
	{"b2JointDef", &luna_wrapper_b2WeldJointDef::_cast_from_b2JointDef},
	{0,0}
};

luna_RegEnumType LunaTraits< b2WeldJointDef >::enumValues[] = {
	{0,0}
};


