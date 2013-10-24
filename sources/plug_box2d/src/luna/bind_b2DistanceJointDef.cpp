#include <plug_common.h>

class luna_wrapper_b2DistanceJointDef {
public:
	typedef Luna< b2DistanceJointDef > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2DistanceJointDef* self= (b2DistanceJointDef*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2DistanceJointDef >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,22467414) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
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
		//b2DistanceJointDef* ptr= dynamic_cast< b2DistanceJointDef* >(Luna< b2JointDef >::check(L,1));
		b2DistanceJointDef* ptr= luna_caster< b2JointDef, b2DistanceJointDef >::cast(Luna< b2JointDef >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< b2DistanceJointDef >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Initialize(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,53908778)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,53908778)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,54494886) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,54494886) ) return false;
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

	inline static bool _lg_typecheck_getLength(lua_State *L) {
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

	inline static bool _lg_typecheck_setLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFrequencyHz(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDampingRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2DistanceJointDef::b2DistanceJointDef()
	static b2DistanceJointDef* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in b2DistanceJointDef::b2DistanceJointDef() function, expected prototype:\nb2DistanceJointDef::b2DistanceJointDef()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new b2DistanceJointDef();
	}


	// Function binds:
	// void b2DistanceJointDef::Initialize(b2Body * bodyA, b2Body * bodyB, const b2Vec2 & anchorA, const b2Vec2 & anchorB)
	static int _bind_Initialize(lua_State *L) {
		if (!_lg_typecheck_Initialize(L)) {
			luaL_error(L, "luna typecheck failed in void b2DistanceJointDef::Initialize(b2Body * bodyA, b2Body * bodyB, const b2Vec2 & anchorA, const b2Vec2 & anchorB) function, expected prototype:\nvoid b2DistanceJointDef::Initialize(b2Body * bodyA, b2Body * bodyB, const b2Vec2 & anchorA, const b2Vec2 & anchorB)\nClass arguments details:\narg 1 ID = 53908778\narg 2 ID = 53908778\narg 3 ID = 54494886\narg 4 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Body* bodyA=(Luna< b2Body >::check(L,2));
		b2Body* bodyB=(Luna< b2Body >::check(L,3));
		const b2Vec2* anchorA_ptr=(Luna< b2Vec2 >::check(L,4));
		if( !anchorA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg anchorA in b2DistanceJointDef::Initialize function");
		}
		const b2Vec2 & anchorA=*anchorA_ptr;
		const b2Vec2* anchorB_ptr=(Luna< b2Vec2 >::check(L,5));
		if( !anchorB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg anchorB in b2DistanceJointDef::Initialize function");
		}
		const b2Vec2 & anchorB=*anchorB_ptr;

		b2DistanceJointDef* self=Luna< b2JointDef >::checkSubType< b2DistanceJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2DistanceJointDef::Initialize(b2Body *, b2Body *, const b2Vec2 &, const b2Vec2 &). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Initialize(bodyA, bodyB, anchorA, anchorB);

		return 0;
	}

	// b2Vec2 b2DistanceJointDef::localAnchorA()
	static int _bind_getLocalAnchorA(lua_State *L) {
		if (!_lg_typecheck_getLocalAnchorA(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec2 b2DistanceJointDef::localAnchorA() function, expected prototype:\nb2Vec2 b2DistanceJointDef::localAnchorA()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2DistanceJointDef* self=Luna< b2JointDef >::checkSubType< b2DistanceJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec2 b2DistanceJointDef::localAnchorA(). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Vec2* lret = &self->localAnchorA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// b2Vec2 b2DistanceJointDef::localAnchorB()
	static int _bind_getLocalAnchorB(lua_State *L) {
		if (!_lg_typecheck_getLocalAnchorB(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec2 b2DistanceJointDef::localAnchorB() function, expected prototype:\nb2Vec2 b2DistanceJointDef::localAnchorB()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2DistanceJointDef* self=Luna< b2JointDef >::checkSubType< b2DistanceJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec2 b2DistanceJointDef::localAnchorB(). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Vec2* lret = &self->localAnchorB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// float b2DistanceJointDef::length()
	static int _bind_getLength(lua_State *L) {
		if (!_lg_typecheck_getLength(L)) {
			luaL_error(L, "luna typecheck failed in float b2DistanceJointDef::length() function, expected prototype:\nfloat b2DistanceJointDef::length()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2DistanceJointDef* self=Luna< b2JointDef >::checkSubType< b2DistanceJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2DistanceJointDef::length(). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->length;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2DistanceJointDef::frequencyHz()
	static int _bind_getFrequencyHz(lua_State *L) {
		if (!_lg_typecheck_getFrequencyHz(L)) {
			luaL_error(L, "luna typecheck failed in float b2DistanceJointDef::frequencyHz() function, expected prototype:\nfloat b2DistanceJointDef::frequencyHz()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2DistanceJointDef* self=Luna< b2JointDef >::checkSubType< b2DistanceJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2DistanceJointDef::frequencyHz(). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->frequencyHz;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2DistanceJointDef::dampingRatio()
	static int _bind_getDampingRatio(lua_State *L) {
		if (!_lg_typecheck_getDampingRatio(L)) {
			luaL_error(L, "luna typecheck failed in float b2DistanceJointDef::dampingRatio() function, expected prototype:\nfloat b2DistanceJointDef::dampingRatio()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2DistanceJointDef* self=Luna< b2JointDef >::checkSubType< b2DistanceJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2DistanceJointDef::dampingRatio(). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->dampingRatio;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2DistanceJointDef::localAnchorA(b2Vec2 value)
	static int _bind_setLocalAnchorA(lua_State *L) {
		if (!_lg_typecheck_setLocalAnchorA(L)) {
			luaL_error(L, "luna typecheck failed in void b2DistanceJointDef::localAnchorA(b2Vec2 value) function, expected prototype:\nvoid b2DistanceJointDef::localAnchorA(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2DistanceJointDef::localAnchorA function");
		}
		b2Vec2 value=*value_ptr;

		b2DistanceJointDef* self=Luna< b2JointDef >::checkSubType< b2DistanceJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2DistanceJointDef::localAnchorA(b2Vec2). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->localAnchorA = value;

		return 0;
	}

	// void b2DistanceJointDef::localAnchorB(b2Vec2 value)
	static int _bind_setLocalAnchorB(lua_State *L) {
		if (!_lg_typecheck_setLocalAnchorB(L)) {
			luaL_error(L, "luna typecheck failed in void b2DistanceJointDef::localAnchorB(b2Vec2 value) function, expected prototype:\nvoid b2DistanceJointDef::localAnchorB(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2DistanceJointDef::localAnchorB function");
		}
		b2Vec2 value=*value_ptr;

		b2DistanceJointDef* self=Luna< b2JointDef >::checkSubType< b2DistanceJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2DistanceJointDef::localAnchorB(b2Vec2). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->localAnchorB = value;

		return 0;
	}

	// void b2DistanceJointDef::length(float value)
	static int _bind_setLength(lua_State *L) {
		if (!_lg_typecheck_setLength(L)) {
			luaL_error(L, "luna typecheck failed in void b2DistanceJointDef::length(float value) function, expected prototype:\nvoid b2DistanceJointDef::length(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2DistanceJointDef* self=Luna< b2JointDef >::checkSubType< b2DistanceJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2DistanceJointDef::length(float). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->length = value;

		return 0;
	}

	// void b2DistanceJointDef::frequencyHz(float value)
	static int _bind_setFrequencyHz(lua_State *L) {
		if (!_lg_typecheck_setFrequencyHz(L)) {
			luaL_error(L, "luna typecheck failed in void b2DistanceJointDef::frequencyHz(float value) function, expected prototype:\nvoid b2DistanceJointDef::frequencyHz(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2DistanceJointDef* self=Luna< b2JointDef >::checkSubType< b2DistanceJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2DistanceJointDef::frequencyHz(float). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->frequencyHz = value;

		return 0;
	}

	// void b2DistanceJointDef::dampingRatio(float value)
	static int _bind_setDampingRatio(lua_State *L) {
		if (!_lg_typecheck_setDampingRatio(L)) {
			luaL_error(L, "luna typecheck failed in void b2DistanceJointDef::dampingRatio(float value) function, expected prototype:\nvoid b2DistanceJointDef::dampingRatio(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2DistanceJointDef* self=Luna< b2JointDef >::checkSubType< b2DistanceJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2DistanceJointDef::dampingRatio(float). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dampingRatio = value;

		return 0;
	}


	// Operator binds:

};

b2DistanceJointDef* LunaTraits< b2DistanceJointDef >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2DistanceJointDef::_bind_ctor(L);
}

void LunaTraits< b2DistanceJointDef >::_bind_dtor(b2DistanceJointDef* obj) {
	delete obj;
}

const char LunaTraits< b2DistanceJointDef >::className[] = "b2DistanceJointDef";
const char LunaTraits< b2DistanceJointDef >::fullName[] = "b2DistanceJointDef";
const char LunaTraits< b2DistanceJointDef >::moduleName[] = "box2d";
const char* LunaTraits< b2DistanceJointDef >::parents[] = {"box2d.b2JointDef", 0};
const int LunaTraits< b2DistanceJointDef >::hash = 61922831;
const int LunaTraits< b2DistanceJointDef >::uniqueIDs[] = {22467414,0};

luna_RegType LunaTraits< b2DistanceJointDef >::methods[] = {
	{"Initialize", &luna_wrapper_b2DistanceJointDef::_bind_Initialize},
	{"getLocalAnchorA", &luna_wrapper_b2DistanceJointDef::_bind_getLocalAnchorA},
	{"getLocalAnchorB", &luna_wrapper_b2DistanceJointDef::_bind_getLocalAnchorB},
	{"getLength", &luna_wrapper_b2DistanceJointDef::_bind_getLength},
	{"getFrequencyHz", &luna_wrapper_b2DistanceJointDef::_bind_getFrequencyHz},
	{"getDampingRatio", &luna_wrapper_b2DistanceJointDef::_bind_getDampingRatio},
	{"setLocalAnchorA", &luna_wrapper_b2DistanceJointDef::_bind_setLocalAnchorA},
	{"setLocalAnchorB", &luna_wrapper_b2DistanceJointDef::_bind_setLocalAnchorB},
	{"setLength", &luna_wrapper_b2DistanceJointDef::_bind_setLength},
	{"setFrequencyHz", &luna_wrapper_b2DistanceJointDef::_bind_setFrequencyHz},
	{"setDampingRatio", &luna_wrapper_b2DistanceJointDef::_bind_setDampingRatio},
	{"fromVoid", &luna_wrapper_b2DistanceJointDef::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2DistanceJointDef::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2DistanceJointDef >::converters[] = {
	{"b2JointDef", &luna_wrapper_b2DistanceJointDef::_cast_from_b2JointDef},
	{0,0}
};

luna_RegEnumType LunaTraits< b2DistanceJointDef >::enumValues[] = {
	{0,0}
};


