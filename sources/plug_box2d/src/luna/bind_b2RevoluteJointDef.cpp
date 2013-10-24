#include <plug_common.h>

class luna_wrapper_b2RevoluteJointDef {
public:
	typedef Luna< b2RevoluteJointDef > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2RevoluteJointDef* self= (b2RevoluteJointDef*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2RevoluteJointDef >::push(L,self,false);
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
		//b2RevoluteJointDef* ptr= dynamic_cast< b2RevoluteJointDef* >(Luna< b2JointDef >::check(L,1));
		b2RevoluteJointDef* ptr= luna_caster< b2JointDef, b2RevoluteJointDef >::cast(Luna< b2JointDef >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< b2RevoluteJointDef >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_getEnableLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLowerAngle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUpperAngle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEnableMotor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMotorSpeed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxMotorTorque(lua_State *L) {
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

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEnableLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLowerAngle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUpperAngle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEnableMotor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMotorSpeed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxMotorTorque(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2RevoluteJointDef::b2RevoluteJointDef()
	static b2RevoluteJointDef* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in b2RevoluteJointDef::b2RevoluteJointDef() function, expected prototype:\nb2RevoluteJointDef::b2RevoluteJointDef()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new b2RevoluteJointDef();
	}


	// Function binds:
	// void b2RevoluteJointDef::Initialize(b2Body * bodyA, b2Body * bodyB, const b2Vec2 & anchor)
	static int _bind_Initialize(lua_State *L) {
		if (!_lg_typecheck_Initialize(L)) {
			luaL_error(L, "luna typecheck failed in void b2RevoluteJointDef::Initialize(b2Body * bodyA, b2Body * bodyB, const b2Vec2 & anchor) function, expected prototype:\nvoid b2RevoluteJointDef::Initialize(b2Body * bodyA, b2Body * bodyB, const b2Vec2 & anchor)\nClass arguments details:\narg 1 ID = 53908778\narg 2 ID = 53908778\narg 3 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Body* bodyA=(Luna< b2Body >::check(L,2));
		b2Body* bodyB=(Luna< b2Body >::check(L,3));
		const b2Vec2* anchor_ptr=(Luna< b2Vec2 >::check(L,4));
		if( !anchor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg anchor in b2RevoluteJointDef::Initialize function");
		}
		const b2Vec2 & anchor=*anchor_ptr;

		b2RevoluteJointDef* self=Luna< b2JointDef >::checkSubType< b2RevoluteJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2RevoluteJointDef::Initialize(b2Body *, b2Body *, const b2Vec2 &). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Initialize(bodyA, bodyB, anchor);

		return 0;
	}

	// b2Vec2 b2RevoluteJointDef::localAnchorA()
	static int _bind_getLocalAnchorA(lua_State *L) {
		if (!_lg_typecheck_getLocalAnchorA(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec2 b2RevoluteJointDef::localAnchorA() function, expected prototype:\nb2Vec2 b2RevoluteJointDef::localAnchorA()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2RevoluteJointDef* self=Luna< b2JointDef >::checkSubType< b2RevoluteJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec2 b2RevoluteJointDef::localAnchorA(). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Vec2* lret = &self->localAnchorA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// b2Vec2 b2RevoluteJointDef::localAnchorB()
	static int _bind_getLocalAnchorB(lua_State *L) {
		if (!_lg_typecheck_getLocalAnchorB(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec2 b2RevoluteJointDef::localAnchorB() function, expected prototype:\nb2Vec2 b2RevoluteJointDef::localAnchorB()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2RevoluteJointDef* self=Luna< b2JointDef >::checkSubType< b2RevoluteJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec2 b2RevoluteJointDef::localAnchorB(). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Vec2* lret = &self->localAnchorB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// float b2RevoluteJointDef::referenceAngle()
	static int _bind_getReferenceAngle(lua_State *L) {
		if (!_lg_typecheck_getReferenceAngle(L)) {
			luaL_error(L, "luna typecheck failed in float b2RevoluteJointDef::referenceAngle() function, expected prototype:\nfloat b2RevoluteJointDef::referenceAngle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2RevoluteJointDef* self=Luna< b2JointDef >::checkSubType< b2RevoluteJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2RevoluteJointDef::referenceAngle(). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->referenceAngle;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool b2RevoluteJointDef::enableLimit()
	static int _bind_getEnableLimit(lua_State *L) {
		if (!_lg_typecheck_getEnableLimit(L)) {
			luaL_error(L, "luna typecheck failed in bool b2RevoluteJointDef::enableLimit() function, expected prototype:\nbool b2RevoluteJointDef::enableLimit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2RevoluteJointDef* self=Luna< b2JointDef >::checkSubType< b2RevoluteJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool b2RevoluteJointDef::enableLimit(). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->enableLimit;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float b2RevoluteJointDef::lowerAngle()
	static int _bind_getLowerAngle(lua_State *L) {
		if (!_lg_typecheck_getLowerAngle(L)) {
			luaL_error(L, "luna typecheck failed in float b2RevoluteJointDef::lowerAngle() function, expected prototype:\nfloat b2RevoluteJointDef::lowerAngle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2RevoluteJointDef* self=Luna< b2JointDef >::checkSubType< b2RevoluteJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2RevoluteJointDef::lowerAngle(). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->lowerAngle;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2RevoluteJointDef::upperAngle()
	static int _bind_getUpperAngle(lua_State *L) {
		if (!_lg_typecheck_getUpperAngle(L)) {
			luaL_error(L, "luna typecheck failed in float b2RevoluteJointDef::upperAngle() function, expected prototype:\nfloat b2RevoluteJointDef::upperAngle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2RevoluteJointDef* self=Luna< b2JointDef >::checkSubType< b2RevoluteJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2RevoluteJointDef::upperAngle(). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->upperAngle;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool b2RevoluteJointDef::enableMotor()
	static int _bind_getEnableMotor(lua_State *L) {
		if (!_lg_typecheck_getEnableMotor(L)) {
			luaL_error(L, "luna typecheck failed in bool b2RevoluteJointDef::enableMotor() function, expected prototype:\nbool b2RevoluteJointDef::enableMotor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2RevoluteJointDef* self=Luna< b2JointDef >::checkSubType< b2RevoluteJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool b2RevoluteJointDef::enableMotor(). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->enableMotor;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float b2RevoluteJointDef::motorSpeed()
	static int _bind_getMotorSpeed(lua_State *L) {
		if (!_lg_typecheck_getMotorSpeed(L)) {
			luaL_error(L, "luna typecheck failed in float b2RevoluteJointDef::motorSpeed() function, expected prototype:\nfloat b2RevoluteJointDef::motorSpeed()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2RevoluteJointDef* self=Luna< b2JointDef >::checkSubType< b2RevoluteJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2RevoluteJointDef::motorSpeed(). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->motorSpeed;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2RevoluteJointDef::maxMotorTorque()
	static int _bind_getMaxMotorTorque(lua_State *L) {
		if (!_lg_typecheck_getMaxMotorTorque(L)) {
			luaL_error(L, "luna typecheck failed in float b2RevoluteJointDef::maxMotorTorque() function, expected prototype:\nfloat b2RevoluteJointDef::maxMotorTorque()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2RevoluteJointDef* self=Luna< b2JointDef >::checkSubType< b2RevoluteJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2RevoluteJointDef::maxMotorTorque(). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->maxMotorTorque;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2RevoluteJointDef::localAnchorA(b2Vec2 value)
	static int _bind_setLocalAnchorA(lua_State *L) {
		if (!_lg_typecheck_setLocalAnchorA(L)) {
			luaL_error(L, "luna typecheck failed in void b2RevoluteJointDef::localAnchorA(b2Vec2 value) function, expected prototype:\nvoid b2RevoluteJointDef::localAnchorA(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2RevoluteJointDef::localAnchorA function");
		}
		b2Vec2 value=*value_ptr;

		b2RevoluteJointDef* self=Luna< b2JointDef >::checkSubType< b2RevoluteJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2RevoluteJointDef::localAnchorA(b2Vec2). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->localAnchorA = value;

		return 0;
	}

	// void b2RevoluteJointDef::localAnchorB(b2Vec2 value)
	static int _bind_setLocalAnchorB(lua_State *L) {
		if (!_lg_typecheck_setLocalAnchorB(L)) {
			luaL_error(L, "luna typecheck failed in void b2RevoluteJointDef::localAnchorB(b2Vec2 value) function, expected prototype:\nvoid b2RevoluteJointDef::localAnchorB(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2RevoluteJointDef::localAnchorB function");
		}
		b2Vec2 value=*value_ptr;

		b2RevoluteJointDef* self=Luna< b2JointDef >::checkSubType< b2RevoluteJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2RevoluteJointDef::localAnchorB(b2Vec2). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->localAnchorB = value;

		return 0;
	}

	// void b2RevoluteJointDef::referenceAngle(float value)
	static int _bind_setReferenceAngle(lua_State *L) {
		if (!_lg_typecheck_setReferenceAngle(L)) {
			luaL_error(L, "luna typecheck failed in void b2RevoluteJointDef::referenceAngle(float value) function, expected prototype:\nvoid b2RevoluteJointDef::referenceAngle(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2RevoluteJointDef* self=Luna< b2JointDef >::checkSubType< b2RevoluteJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2RevoluteJointDef::referenceAngle(float). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->referenceAngle = value;

		return 0;
	}

	// void b2RevoluteJointDef::enableLimit(bool value)
	static int _bind_setEnableLimit(lua_State *L) {
		if (!_lg_typecheck_setEnableLimit(L)) {
			luaL_error(L, "luna typecheck failed in void b2RevoluteJointDef::enableLimit(bool value) function, expected prototype:\nvoid b2RevoluteJointDef::enableLimit(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		b2RevoluteJointDef* self=Luna< b2JointDef >::checkSubType< b2RevoluteJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2RevoluteJointDef::enableLimit(bool). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->enableLimit = value;

		return 0;
	}

	// void b2RevoluteJointDef::lowerAngle(float value)
	static int _bind_setLowerAngle(lua_State *L) {
		if (!_lg_typecheck_setLowerAngle(L)) {
			luaL_error(L, "luna typecheck failed in void b2RevoluteJointDef::lowerAngle(float value) function, expected prototype:\nvoid b2RevoluteJointDef::lowerAngle(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2RevoluteJointDef* self=Luna< b2JointDef >::checkSubType< b2RevoluteJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2RevoluteJointDef::lowerAngle(float). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->lowerAngle = value;

		return 0;
	}

	// void b2RevoluteJointDef::upperAngle(float value)
	static int _bind_setUpperAngle(lua_State *L) {
		if (!_lg_typecheck_setUpperAngle(L)) {
			luaL_error(L, "luna typecheck failed in void b2RevoluteJointDef::upperAngle(float value) function, expected prototype:\nvoid b2RevoluteJointDef::upperAngle(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2RevoluteJointDef* self=Luna< b2JointDef >::checkSubType< b2RevoluteJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2RevoluteJointDef::upperAngle(float). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->upperAngle = value;

		return 0;
	}

	// void b2RevoluteJointDef::enableMotor(bool value)
	static int _bind_setEnableMotor(lua_State *L) {
		if (!_lg_typecheck_setEnableMotor(L)) {
			luaL_error(L, "luna typecheck failed in void b2RevoluteJointDef::enableMotor(bool value) function, expected prototype:\nvoid b2RevoluteJointDef::enableMotor(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		b2RevoluteJointDef* self=Luna< b2JointDef >::checkSubType< b2RevoluteJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2RevoluteJointDef::enableMotor(bool). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->enableMotor = value;

		return 0;
	}

	// void b2RevoluteJointDef::motorSpeed(float value)
	static int _bind_setMotorSpeed(lua_State *L) {
		if (!_lg_typecheck_setMotorSpeed(L)) {
			luaL_error(L, "luna typecheck failed in void b2RevoluteJointDef::motorSpeed(float value) function, expected prototype:\nvoid b2RevoluteJointDef::motorSpeed(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2RevoluteJointDef* self=Luna< b2JointDef >::checkSubType< b2RevoluteJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2RevoluteJointDef::motorSpeed(float). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->motorSpeed = value;

		return 0;
	}

	// void b2RevoluteJointDef::maxMotorTorque(float value)
	static int _bind_setMaxMotorTorque(lua_State *L) {
		if (!_lg_typecheck_setMaxMotorTorque(L)) {
			luaL_error(L, "luna typecheck failed in void b2RevoluteJointDef::maxMotorTorque(float value) function, expected prototype:\nvoid b2RevoluteJointDef::maxMotorTorque(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2RevoluteJointDef* self=Luna< b2JointDef >::checkSubType< b2RevoluteJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2RevoluteJointDef::maxMotorTorque(float). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->maxMotorTorque = value;

		return 0;
	}


	// Operator binds:

};

b2RevoluteJointDef* LunaTraits< b2RevoluteJointDef >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2RevoluteJointDef::_bind_ctor(L);
}

void LunaTraits< b2RevoluteJointDef >::_bind_dtor(b2RevoluteJointDef* obj) {
	delete obj;
}

const char LunaTraits< b2RevoluteJointDef >::className[] = "b2RevoluteJointDef";
const char LunaTraits< b2RevoluteJointDef >::fullName[] = "b2RevoluteJointDef";
const char LunaTraits< b2RevoluteJointDef >::moduleName[] = "box2d";
const char* LunaTraits< b2RevoluteJointDef >::parents[] = {"box2d.b2JointDef", 0};
const int LunaTraits< b2RevoluteJointDef >::hash = 29682961;
const int LunaTraits< b2RevoluteJointDef >::uniqueIDs[] = {22467414,0};

luna_RegType LunaTraits< b2RevoluteJointDef >::methods[] = {
	{"Initialize", &luna_wrapper_b2RevoluteJointDef::_bind_Initialize},
	{"getLocalAnchorA", &luna_wrapper_b2RevoluteJointDef::_bind_getLocalAnchorA},
	{"getLocalAnchorB", &luna_wrapper_b2RevoluteJointDef::_bind_getLocalAnchorB},
	{"getReferenceAngle", &luna_wrapper_b2RevoluteJointDef::_bind_getReferenceAngle},
	{"getEnableLimit", &luna_wrapper_b2RevoluteJointDef::_bind_getEnableLimit},
	{"getLowerAngle", &luna_wrapper_b2RevoluteJointDef::_bind_getLowerAngle},
	{"getUpperAngle", &luna_wrapper_b2RevoluteJointDef::_bind_getUpperAngle},
	{"getEnableMotor", &luna_wrapper_b2RevoluteJointDef::_bind_getEnableMotor},
	{"getMotorSpeed", &luna_wrapper_b2RevoluteJointDef::_bind_getMotorSpeed},
	{"getMaxMotorTorque", &luna_wrapper_b2RevoluteJointDef::_bind_getMaxMotorTorque},
	{"setLocalAnchorA", &luna_wrapper_b2RevoluteJointDef::_bind_setLocalAnchorA},
	{"setLocalAnchorB", &luna_wrapper_b2RevoluteJointDef::_bind_setLocalAnchorB},
	{"setReferenceAngle", &luna_wrapper_b2RevoluteJointDef::_bind_setReferenceAngle},
	{"setEnableLimit", &luna_wrapper_b2RevoluteJointDef::_bind_setEnableLimit},
	{"setLowerAngle", &luna_wrapper_b2RevoluteJointDef::_bind_setLowerAngle},
	{"setUpperAngle", &luna_wrapper_b2RevoluteJointDef::_bind_setUpperAngle},
	{"setEnableMotor", &luna_wrapper_b2RevoluteJointDef::_bind_setEnableMotor},
	{"setMotorSpeed", &luna_wrapper_b2RevoluteJointDef::_bind_setMotorSpeed},
	{"setMaxMotorTorque", &luna_wrapper_b2RevoluteJointDef::_bind_setMaxMotorTorque},
	{"fromVoid", &luna_wrapper_b2RevoluteJointDef::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2RevoluteJointDef::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2RevoluteJointDef >::converters[] = {
	{"b2JointDef", &luna_wrapper_b2RevoluteJointDef::_cast_from_b2JointDef},
	{0,0}
};

luna_RegEnumType LunaTraits< b2RevoluteJointDef >::enumValues[] = {
	{0,0}
};


