#include <plug_common.h>

class luna_wrapper_b2PrismaticJointDef {
public:
	typedef Luna< b2PrismaticJointDef > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2PrismaticJointDef* self= (b2PrismaticJointDef*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2PrismaticJointDef >::push(L,self,false);
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
		//b2PrismaticJointDef* ptr= dynamic_cast< b2PrismaticJointDef* >(Luna< b2JointDef >::check(L,1));
		b2PrismaticJointDef* ptr= luna_caster< b2JointDef, b2PrismaticJointDef >::cast(Luna< b2JointDef >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< b2PrismaticJointDef >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_getLocalAxisA(lua_State *L) {
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

	inline static bool _lg_typecheck_getLowerTranslation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUpperTranslation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEnableMotor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxMotorForce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMotorSpeed(lua_State *L) {
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

	inline static bool _lg_typecheck_setLocalAxisA(lua_State *L) {
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

	inline static bool _lg_typecheck_setLowerTranslation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUpperTranslation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEnableMotor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxMotorForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMotorSpeed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2PrismaticJointDef::b2PrismaticJointDef()
	static b2PrismaticJointDef* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in b2PrismaticJointDef::b2PrismaticJointDef() function, expected prototype:\nb2PrismaticJointDef::b2PrismaticJointDef()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new b2PrismaticJointDef();
	}


	// Function binds:
	// void b2PrismaticJointDef::Initialize(b2Body * bodyA, b2Body * bodyB, const b2Vec2 & anchor, const b2Vec2 & axis)
	static int _bind_Initialize(lua_State *L) {
		if (!_lg_typecheck_Initialize(L)) {
			luaL_error(L, "luna typecheck failed in void b2PrismaticJointDef::Initialize(b2Body * bodyA, b2Body * bodyB, const b2Vec2 & anchor, const b2Vec2 & axis) function, expected prototype:\nvoid b2PrismaticJointDef::Initialize(b2Body * bodyA, b2Body * bodyB, const b2Vec2 & anchor, const b2Vec2 & axis)\nClass arguments details:\narg 1 ID = 53908778\narg 2 ID = 53908778\narg 3 ID = 54494886\narg 4 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Body* bodyA=(Luna< b2Body >::check(L,2));
		b2Body* bodyB=(Luna< b2Body >::check(L,3));
		const b2Vec2* anchor_ptr=(Luna< b2Vec2 >::check(L,4));
		if( !anchor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg anchor in b2PrismaticJointDef::Initialize function");
		}
		const b2Vec2 & anchor=*anchor_ptr;
		const b2Vec2* axis_ptr=(Luna< b2Vec2 >::check(L,5));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in b2PrismaticJointDef::Initialize function");
		}
		const b2Vec2 & axis=*axis_ptr;

		b2PrismaticJointDef* self=Luna< b2JointDef >::checkSubType< b2PrismaticJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2PrismaticJointDef::Initialize(b2Body *, b2Body *, const b2Vec2 &, const b2Vec2 &). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Initialize(bodyA, bodyB, anchor, axis);

		return 0;
	}

	// b2Vec2 b2PrismaticJointDef::localAnchorA()
	static int _bind_getLocalAnchorA(lua_State *L) {
		if (!_lg_typecheck_getLocalAnchorA(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec2 b2PrismaticJointDef::localAnchorA() function, expected prototype:\nb2Vec2 b2PrismaticJointDef::localAnchorA()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2PrismaticJointDef* self=Luna< b2JointDef >::checkSubType< b2PrismaticJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec2 b2PrismaticJointDef::localAnchorA(). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Vec2* lret = &self->localAnchorA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// b2Vec2 b2PrismaticJointDef::localAnchorB()
	static int _bind_getLocalAnchorB(lua_State *L) {
		if (!_lg_typecheck_getLocalAnchorB(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec2 b2PrismaticJointDef::localAnchorB() function, expected prototype:\nb2Vec2 b2PrismaticJointDef::localAnchorB()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2PrismaticJointDef* self=Luna< b2JointDef >::checkSubType< b2PrismaticJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec2 b2PrismaticJointDef::localAnchorB(). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Vec2* lret = &self->localAnchorB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// b2Vec2 b2PrismaticJointDef::localAxisA()
	static int _bind_getLocalAxisA(lua_State *L) {
		if (!_lg_typecheck_getLocalAxisA(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec2 b2PrismaticJointDef::localAxisA() function, expected prototype:\nb2Vec2 b2PrismaticJointDef::localAxisA()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2PrismaticJointDef* self=Luna< b2JointDef >::checkSubType< b2PrismaticJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec2 b2PrismaticJointDef::localAxisA(). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Vec2* lret = &self->localAxisA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// float b2PrismaticJointDef::referenceAngle()
	static int _bind_getReferenceAngle(lua_State *L) {
		if (!_lg_typecheck_getReferenceAngle(L)) {
			luaL_error(L, "luna typecheck failed in float b2PrismaticJointDef::referenceAngle() function, expected prototype:\nfloat b2PrismaticJointDef::referenceAngle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2PrismaticJointDef* self=Luna< b2JointDef >::checkSubType< b2PrismaticJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2PrismaticJointDef::referenceAngle(). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->referenceAngle;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool b2PrismaticJointDef::enableLimit()
	static int _bind_getEnableLimit(lua_State *L) {
		if (!_lg_typecheck_getEnableLimit(L)) {
			luaL_error(L, "luna typecheck failed in bool b2PrismaticJointDef::enableLimit() function, expected prototype:\nbool b2PrismaticJointDef::enableLimit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2PrismaticJointDef* self=Luna< b2JointDef >::checkSubType< b2PrismaticJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool b2PrismaticJointDef::enableLimit(). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->enableLimit;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float b2PrismaticJointDef::lowerTranslation()
	static int _bind_getLowerTranslation(lua_State *L) {
		if (!_lg_typecheck_getLowerTranslation(L)) {
			luaL_error(L, "luna typecheck failed in float b2PrismaticJointDef::lowerTranslation() function, expected prototype:\nfloat b2PrismaticJointDef::lowerTranslation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2PrismaticJointDef* self=Luna< b2JointDef >::checkSubType< b2PrismaticJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2PrismaticJointDef::lowerTranslation(). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->lowerTranslation;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2PrismaticJointDef::upperTranslation()
	static int _bind_getUpperTranslation(lua_State *L) {
		if (!_lg_typecheck_getUpperTranslation(L)) {
			luaL_error(L, "luna typecheck failed in float b2PrismaticJointDef::upperTranslation() function, expected prototype:\nfloat b2PrismaticJointDef::upperTranslation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2PrismaticJointDef* self=Luna< b2JointDef >::checkSubType< b2PrismaticJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2PrismaticJointDef::upperTranslation(). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->upperTranslation;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool b2PrismaticJointDef::enableMotor()
	static int _bind_getEnableMotor(lua_State *L) {
		if (!_lg_typecheck_getEnableMotor(L)) {
			luaL_error(L, "luna typecheck failed in bool b2PrismaticJointDef::enableMotor() function, expected prototype:\nbool b2PrismaticJointDef::enableMotor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2PrismaticJointDef* self=Luna< b2JointDef >::checkSubType< b2PrismaticJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool b2PrismaticJointDef::enableMotor(). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->enableMotor;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float b2PrismaticJointDef::maxMotorForce()
	static int _bind_getMaxMotorForce(lua_State *L) {
		if (!_lg_typecheck_getMaxMotorForce(L)) {
			luaL_error(L, "luna typecheck failed in float b2PrismaticJointDef::maxMotorForce() function, expected prototype:\nfloat b2PrismaticJointDef::maxMotorForce()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2PrismaticJointDef* self=Luna< b2JointDef >::checkSubType< b2PrismaticJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2PrismaticJointDef::maxMotorForce(). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->maxMotorForce;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2PrismaticJointDef::motorSpeed()
	static int _bind_getMotorSpeed(lua_State *L) {
		if (!_lg_typecheck_getMotorSpeed(L)) {
			luaL_error(L, "luna typecheck failed in float b2PrismaticJointDef::motorSpeed() function, expected prototype:\nfloat b2PrismaticJointDef::motorSpeed()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2PrismaticJointDef* self=Luna< b2JointDef >::checkSubType< b2PrismaticJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2PrismaticJointDef::motorSpeed(). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->motorSpeed;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2PrismaticJointDef::localAnchorA(b2Vec2 value)
	static int _bind_setLocalAnchorA(lua_State *L) {
		if (!_lg_typecheck_setLocalAnchorA(L)) {
			luaL_error(L, "luna typecheck failed in void b2PrismaticJointDef::localAnchorA(b2Vec2 value) function, expected prototype:\nvoid b2PrismaticJointDef::localAnchorA(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2PrismaticJointDef::localAnchorA function");
		}
		b2Vec2 value=*value_ptr;

		b2PrismaticJointDef* self=Luna< b2JointDef >::checkSubType< b2PrismaticJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2PrismaticJointDef::localAnchorA(b2Vec2). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->localAnchorA = value;

		return 0;
	}

	// void b2PrismaticJointDef::localAnchorB(b2Vec2 value)
	static int _bind_setLocalAnchorB(lua_State *L) {
		if (!_lg_typecheck_setLocalAnchorB(L)) {
			luaL_error(L, "luna typecheck failed in void b2PrismaticJointDef::localAnchorB(b2Vec2 value) function, expected prototype:\nvoid b2PrismaticJointDef::localAnchorB(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2PrismaticJointDef::localAnchorB function");
		}
		b2Vec2 value=*value_ptr;

		b2PrismaticJointDef* self=Luna< b2JointDef >::checkSubType< b2PrismaticJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2PrismaticJointDef::localAnchorB(b2Vec2). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->localAnchorB = value;

		return 0;
	}

	// void b2PrismaticJointDef::localAxisA(b2Vec2 value)
	static int _bind_setLocalAxisA(lua_State *L) {
		if (!_lg_typecheck_setLocalAxisA(L)) {
			luaL_error(L, "luna typecheck failed in void b2PrismaticJointDef::localAxisA(b2Vec2 value) function, expected prototype:\nvoid b2PrismaticJointDef::localAxisA(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2PrismaticJointDef::localAxisA function");
		}
		b2Vec2 value=*value_ptr;

		b2PrismaticJointDef* self=Luna< b2JointDef >::checkSubType< b2PrismaticJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2PrismaticJointDef::localAxisA(b2Vec2). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->localAxisA = value;

		return 0;
	}

	// void b2PrismaticJointDef::referenceAngle(float value)
	static int _bind_setReferenceAngle(lua_State *L) {
		if (!_lg_typecheck_setReferenceAngle(L)) {
			luaL_error(L, "luna typecheck failed in void b2PrismaticJointDef::referenceAngle(float value) function, expected prototype:\nvoid b2PrismaticJointDef::referenceAngle(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2PrismaticJointDef* self=Luna< b2JointDef >::checkSubType< b2PrismaticJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2PrismaticJointDef::referenceAngle(float). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->referenceAngle = value;

		return 0;
	}

	// void b2PrismaticJointDef::enableLimit(bool value)
	static int _bind_setEnableLimit(lua_State *L) {
		if (!_lg_typecheck_setEnableLimit(L)) {
			luaL_error(L, "luna typecheck failed in void b2PrismaticJointDef::enableLimit(bool value) function, expected prototype:\nvoid b2PrismaticJointDef::enableLimit(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		b2PrismaticJointDef* self=Luna< b2JointDef >::checkSubType< b2PrismaticJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2PrismaticJointDef::enableLimit(bool). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->enableLimit = value;

		return 0;
	}

	// void b2PrismaticJointDef::lowerTranslation(float value)
	static int _bind_setLowerTranslation(lua_State *L) {
		if (!_lg_typecheck_setLowerTranslation(L)) {
			luaL_error(L, "luna typecheck failed in void b2PrismaticJointDef::lowerTranslation(float value) function, expected prototype:\nvoid b2PrismaticJointDef::lowerTranslation(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2PrismaticJointDef* self=Luna< b2JointDef >::checkSubType< b2PrismaticJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2PrismaticJointDef::lowerTranslation(float). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->lowerTranslation = value;

		return 0;
	}

	// void b2PrismaticJointDef::upperTranslation(float value)
	static int _bind_setUpperTranslation(lua_State *L) {
		if (!_lg_typecheck_setUpperTranslation(L)) {
			luaL_error(L, "luna typecheck failed in void b2PrismaticJointDef::upperTranslation(float value) function, expected prototype:\nvoid b2PrismaticJointDef::upperTranslation(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2PrismaticJointDef* self=Luna< b2JointDef >::checkSubType< b2PrismaticJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2PrismaticJointDef::upperTranslation(float). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->upperTranslation = value;

		return 0;
	}

	// void b2PrismaticJointDef::enableMotor(bool value)
	static int _bind_setEnableMotor(lua_State *L) {
		if (!_lg_typecheck_setEnableMotor(L)) {
			luaL_error(L, "luna typecheck failed in void b2PrismaticJointDef::enableMotor(bool value) function, expected prototype:\nvoid b2PrismaticJointDef::enableMotor(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		b2PrismaticJointDef* self=Luna< b2JointDef >::checkSubType< b2PrismaticJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2PrismaticJointDef::enableMotor(bool). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->enableMotor = value;

		return 0;
	}

	// void b2PrismaticJointDef::maxMotorForce(float value)
	static int _bind_setMaxMotorForce(lua_State *L) {
		if (!_lg_typecheck_setMaxMotorForce(L)) {
			luaL_error(L, "luna typecheck failed in void b2PrismaticJointDef::maxMotorForce(float value) function, expected prototype:\nvoid b2PrismaticJointDef::maxMotorForce(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2PrismaticJointDef* self=Luna< b2JointDef >::checkSubType< b2PrismaticJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2PrismaticJointDef::maxMotorForce(float). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->maxMotorForce = value;

		return 0;
	}

	// void b2PrismaticJointDef::motorSpeed(float value)
	static int _bind_setMotorSpeed(lua_State *L) {
		if (!_lg_typecheck_setMotorSpeed(L)) {
			luaL_error(L, "luna typecheck failed in void b2PrismaticJointDef::motorSpeed(float value) function, expected prototype:\nvoid b2PrismaticJointDef::motorSpeed(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2PrismaticJointDef* self=Luna< b2JointDef >::checkSubType< b2PrismaticJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2PrismaticJointDef::motorSpeed(float). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->motorSpeed = value;

		return 0;
	}


	// Operator binds:

};

b2PrismaticJointDef* LunaTraits< b2PrismaticJointDef >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2PrismaticJointDef::_bind_ctor(L);
}

void LunaTraits< b2PrismaticJointDef >::_bind_dtor(b2PrismaticJointDef* obj) {
	delete obj;
}

const char LunaTraits< b2PrismaticJointDef >::className[] = "b2PrismaticJointDef";
const char LunaTraits< b2PrismaticJointDef >::fullName[] = "b2PrismaticJointDef";
const char LunaTraits< b2PrismaticJointDef >::moduleName[] = "box2d";
const char* LunaTraits< b2PrismaticJointDef >::parents[] = {"box2d.b2JointDef", 0};
const int LunaTraits< b2PrismaticJointDef >::hash = 6612852;
const int LunaTraits< b2PrismaticJointDef >::uniqueIDs[] = {22467414,0};

luna_RegType LunaTraits< b2PrismaticJointDef >::methods[] = {
	{"Initialize", &luna_wrapper_b2PrismaticJointDef::_bind_Initialize},
	{"getLocalAnchorA", &luna_wrapper_b2PrismaticJointDef::_bind_getLocalAnchorA},
	{"getLocalAnchorB", &luna_wrapper_b2PrismaticJointDef::_bind_getLocalAnchorB},
	{"getLocalAxisA", &luna_wrapper_b2PrismaticJointDef::_bind_getLocalAxisA},
	{"getReferenceAngle", &luna_wrapper_b2PrismaticJointDef::_bind_getReferenceAngle},
	{"getEnableLimit", &luna_wrapper_b2PrismaticJointDef::_bind_getEnableLimit},
	{"getLowerTranslation", &luna_wrapper_b2PrismaticJointDef::_bind_getLowerTranslation},
	{"getUpperTranslation", &luna_wrapper_b2PrismaticJointDef::_bind_getUpperTranslation},
	{"getEnableMotor", &luna_wrapper_b2PrismaticJointDef::_bind_getEnableMotor},
	{"getMaxMotorForce", &luna_wrapper_b2PrismaticJointDef::_bind_getMaxMotorForce},
	{"getMotorSpeed", &luna_wrapper_b2PrismaticJointDef::_bind_getMotorSpeed},
	{"setLocalAnchorA", &luna_wrapper_b2PrismaticJointDef::_bind_setLocalAnchorA},
	{"setLocalAnchorB", &luna_wrapper_b2PrismaticJointDef::_bind_setLocalAnchorB},
	{"setLocalAxisA", &luna_wrapper_b2PrismaticJointDef::_bind_setLocalAxisA},
	{"setReferenceAngle", &luna_wrapper_b2PrismaticJointDef::_bind_setReferenceAngle},
	{"setEnableLimit", &luna_wrapper_b2PrismaticJointDef::_bind_setEnableLimit},
	{"setLowerTranslation", &luna_wrapper_b2PrismaticJointDef::_bind_setLowerTranslation},
	{"setUpperTranslation", &luna_wrapper_b2PrismaticJointDef::_bind_setUpperTranslation},
	{"setEnableMotor", &luna_wrapper_b2PrismaticJointDef::_bind_setEnableMotor},
	{"setMaxMotorForce", &luna_wrapper_b2PrismaticJointDef::_bind_setMaxMotorForce},
	{"setMotorSpeed", &luna_wrapper_b2PrismaticJointDef::_bind_setMotorSpeed},
	{"fromVoid", &luna_wrapper_b2PrismaticJointDef::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2PrismaticJointDef::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2PrismaticJointDef >::converters[] = {
	{"b2JointDef", &luna_wrapper_b2PrismaticJointDef::_cast_from_b2JointDef},
	{0,0}
};

luna_RegEnumType LunaTraits< b2PrismaticJointDef >::enumValues[] = {
	{0,0}
};


