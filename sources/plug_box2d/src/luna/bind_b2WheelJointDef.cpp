#include <plug_common.h>

class luna_wrapper_b2WheelJointDef {
public:
	typedef Luna< b2WheelJointDef > luna_t;

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

		b2WheelJointDef* self= (b2WheelJointDef*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2WheelJointDef >::push(L,self,false);
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
		//b2WheelJointDef* ptr= dynamic_cast< b2WheelJointDef* >(Luna< b2JointDef >::check(L,1));
		b2WheelJointDef* ptr= luna_caster< b2JointDef, b2WheelJointDef >::cast(Luna< b2JointDef >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< b2WheelJointDef >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_getEnableMotor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxMotorTorque(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMotorSpeed(lua_State *L) {
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

	inline static bool _lg_typecheck_setLocalAxisA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEnableMotor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxMotorTorque(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMotorSpeed(lua_State *L) {
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
	// b2WheelJointDef::b2WheelJointDef()
	static b2WheelJointDef* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2WheelJointDef::b2WheelJointDef() function, expected prototype:\nb2WheelJointDef::b2WheelJointDef()\nClass arguments details:\n");
		}


		return new b2WheelJointDef();
	}


	// Function binds:
	// void b2WheelJointDef::Initialize(b2Body * bodyA, b2Body * bodyB, const b2Vec2 & anchor, const b2Vec2 & axis)
	static int _bind_Initialize(lua_State *L) {
		if (!_lg_typecheck_Initialize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2WheelJointDef::Initialize(b2Body * bodyA, b2Body * bodyB, const b2Vec2 & anchor, const b2Vec2 & axis) function, expected prototype:\nvoid b2WheelJointDef::Initialize(b2Body * bodyA, b2Body * bodyB, const b2Vec2 & anchor, const b2Vec2 & axis)\nClass arguments details:\narg 1 ID = 53908778\narg 2 ID = 53908778\narg 3 ID = 54494886\narg 4 ID = 54494886\n");
		}

		b2Body* bodyA=(Luna< b2Body >::check(L,2));
		b2Body* bodyB=(Luna< b2Body >::check(L,3));
		const b2Vec2* anchor_ptr=(Luna< b2Vec2 >::check(L,4));
		if( !anchor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg anchor in b2WheelJointDef::Initialize function");
		}
		const b2Vec2 & anchor=*anchor_ptr;
		const b2Vec2* axis_ptr=(Luna< b2Vec2 >::check(L,5));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in b2WheelJointDef::Initialize function");
		}
		const b2Vec2 & axis=*axis_ptr;

		b2WheelJointDef* self=Luna< b2JointDef >::checkSubType< b2WheelJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2WheelJointDef::Initialize(b2Body *, b2Body *, const b2Vec2 &, const b2Vec2 &). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->Initialize(bodyA, bodyB, anchor, axis);

		return 0;
	}

	// b2Vec2 b2WheelJointDef::localAnchorA()
	static int _bind_getLocalAnchorA(lua_State *L) {
		if (!_lg_typecheck_getLocalAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2WheelJointDef::localAnchorA() function, expected prototype:\nb2Vec2 b2WheelJointDef::localAnchorA()\nClass arguments details:\n");
		}


		b2WheelJointDef* self=Luna< b2JointDef >::checkSubType< b2WheelJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2WheelJointDef::localAnchorA(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->localAnchorA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// b2Vec2 b2WheelJointDef::localAnchorB()
	static int _bind_getLocalAnchorB(lua_State *L) {
		if (!_lg_typecheck_getLocalAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2WheelJointDef::localAnchorB() function, expected prototype:\nb2Vec2 b2WheelJointDef::localAnchorB()\nClass arguments details:\n");
		}


		b2WheelJointDef* self=Luna< b2JointDef >::checkSubType< b2WheelJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2WheelJointDef::localAnchorB(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->localAnchorB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// b2Vec2 b2WheelJointDef::localAxisA()
	static int _bind_getLocalAxisA(lua_State *L) {
		if (!_lg_typecheck_getLocalAxisA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2WheelJointDef::localAxisA() function, expected prototype:\nb2Vec2 b2WheelJointDef::localAxisA()\nClass arguments details:\n");
		}


		b2WheelJointDef* self=Luna< b2JointDef >::checkSubType< b2WheelJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2WheelJointDef::localAxisA(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->localAxisA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// bool b2WheelJointDef::enableMotor()
	static int _bind_getEnableMotor(lua_State *L) {
		if (!_lg_typecheck_getEnableMotor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2WheelJointDef::enableMotor() function, expected prototype:\nbool b2WheelJointDef::enableMotor()\nClass arguments details:\n");
		}


		b2WheelJointDef* self=Luna< b2JointDef >::checkSubType< b2WheelJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2WheelJointDef::enableMotor(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		bool lret = self->enableMotor;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float b2WheelJointDef::maxMotorTorque()
	static int _bind_getMaxMotorTorque(lua_State *L) {
		if (!_lg_typecheck_getMaxMotorTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2WheelJointDef::maxMotorTorque() function, expected prototype:\nfloat b2WheelJointDef::maxMotorTorque()\nClass arguments details:\n");
		}


		b2WheelJointDef* self=Luna< b2JointDef >::checkSubType< b2WheelJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2WheelJointDef::maxMotorTorque(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		float lret = self->maxMotorTorque;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2WheelJointDef::motorSpeed()
	static int _bind_getMotorSpeed(lua_State *L) {
		if (!_lg_typecheck_getMotorSpeed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2WheelJointDef::motorSpeed() function, expected prototype:\nfloat b2WheelJointDef::motorSpeed()\nClass arguments details:\n");
		}


		b2WheelJointDef* self=Luna< b2JointDef >::checkSubType< b2WheelJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2WheelJointDef::motorSpeed(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		float lret = self->motorSpeed;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2WheelJointDef::frequencyHz()
	static int _bind_getFrequencyHz(lua_State *L) {
		if (!_lg_typecheck_getFrequencyHz(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2WheelJointDef::frequencyHz() function, expected prototype:\nfloat b2WheelJointDef::frequencyHz()\nClass arguments details:\n");
		}


		b2WheelJointDef* self=Luna< b2JointDef >::checkSubType< b2WheelJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2WheelJointDef::frequencyHz(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		float lret = self->frequencyHz;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2WheelJointDef::dampingRatio()
	static int _bind_getDampingRatio(lua_State *L) {
		if (!_lg_typecheck_getDampingRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2WheelJointDef::dampingRatio() function, expected prototype:\nfloat b2WheelJointDef::dampingRatio()\nClass arguments details:\n");
		}


		b2WheelJointDef* self=Luna< b2JointDef >::checkSubType< b2WheelJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2WheelJointDef::dampingRatio(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		float lret = self->dampingRatio;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2WheelJointDef::localAnchorA(b2Vec2 value)
	static int _bind_setLocalAnchorA(lua_State *L) {
		if (!_lg_typecheck_setLocalAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2WheelJointDef::localAnchorA(b2Vec2 value) function, expected prototype:\nvoid b2WheelJointDef::localAnchorA(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2WheelJointDef::localAnchorA function");
		}
		b2Vec2 value=*value_ptr;

		b2WheelJointDef* self=Luna< b2JointDef >::checkSubType< b2WheelJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2WheelJointDef::localAnchorA(b2Vec2). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->localAnchorA = value;

		return 0;
	}

	// void b2WheelJointDef::localAnchorB(b2Vec2 value)
	static int _bind_setLocalAnchorB(lua_State *L) {
		if (!_lg_typecheck_setLocalAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2WheelJointDef::localAnchorB(b2Vec2 value) function, expected prototype:\nvoid b2WheelJointDef::localAnchorB(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2WheelJointDef::localAnchorB function");
		}
		b2Vec2 value=*value_ptr;

		b2WheelJointDef* self=Luna< b2JointDef >::checkSubType< b2WheelJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2WheelJointDef::localAnchorB(b2Vec2). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->localAnchorB = value;

		return 0;
	}

	// void b2WheelJointDef::localAxisA(b2Vec2 value)
	static int _bind_setLocalAxisA(lua_State *L) {
		if (!_lg_typecheck_setLocalAxisA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2WheelJointDef::localAxisA(b2Vec2 value) function, expected prototype:\nvoid b2WheelJointDef::localAxisA(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2WheelJointDef::localAxisA function");
		}
		b2Vec2 value=*value_ptr;

		b2WheelJointDef* self=Luna< b2JointDef >::checkSubType< b2WheelJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2WheelJointDef::localAxisA(b2Vec2). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->localAxisA = value;

		return 0;
	}

	// void b2WheelJointDef::enableMotor(bool value)
	static int _bind_setEnableMotor(lua_State *L) {
		if (!_lg_typecheck_setEnableMotor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2WheelJointDef::enableMotor(bool value) function, expected prototype:\nvoid b2WheelJointDef::enableMotor(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		b2WheelJointDef* self=Luna< b2JointDef >::checkSubType< b2WheelJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2WheelJointDef::enableMotor(bool). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->enableMotor = value;

		return 0;
	}

	// void b2WheelJointDef::maxMotorTorque(float value)
	static int _bind_setMaxMotorTorque(lua_State *L) {
		if (!_lg_typecheck_setMaxMotorTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2WheelJointDef::maxMotorTorque(float value) function, expected prototype:\nvoid b2WheelJointDef::maxMotorTorque(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2WheelJointDef* self=Luna< b2JointDef >::checkSubType< b2WheelJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2WheelJointDef::maxMotorTorque(float). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->maxMotorTorque = value;

		return 0;
	}

	// void b2WheelJointDef::motorSpeed(float value)
	static int _bind_setMotorSpeed(lua_State *L) {
		if (!_lg_typecheck_setMotorSpeed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2WheelJointDef::motorSpeed(float value) function, expected prototype:\nvoid b2WheelJointDef::motorSpeed(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2WheelJointDef* self=Luna< b2JointDef >::checkSubType< b2WheelJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2WheelJointDef::motorSpeed(float). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->motorSpeed = value;

		return 0;
	}

	// void b2WheelJointDef::frequencyHz(float value)
	static int _bind_setFrequencyHz(lua_State *L) {
		if (!_lg_typecheck_setFrequencyHz(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2WheelJointDef::frequencyHz(float value) function, expected prototype:\nvoid b2WheelJointDef::frequencyHz(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2WheelJointDef* self=Luna< b2JointDef >::checkSubType< b2WheelJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2WheelJointDef::frequencyHz(float). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->frequencyHz = value;

		return 0;
	}

	// void b2WheelJointDef::dampingRatio(float value)
	static int _bind_setDampingRatio(lua_State *L) {
		if (!_lg_typecheck_setDampingRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2WheelJointDef::dampingRatio(float value) function, expected prototype:\nvoid b2WheelJointDef::dampingRatio(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2WheelJointDef* self=Luna< b2JointDef >::checkSubType< b2WheelJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2WheelJointDef::dampingRatio(float). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->dampingRatio = value;

		return 0;
	}


	// Operator binds:

};

b2WheelJointDef* LunaTraits< b2WheelJointDef >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2WheelJointDef::_bind_ctor(L);
}

void LunaTraits< b2WheelJointDef >::_bind_dtor(b2WheelJointDef* obj) {
	delete obj;
}

const char LunaTraits< b2WheelJointDef >::className[] = "b2WheelJointDef";
const char LunaTraits< b2WheelJointDef >::fullName[] = "b2WheelJointDef";
const char LunaTraits< b2WheelJointDef >::moduleName[] = "box2d";
const char* LunaTraits< b2WheelJointDef >::parents[] = {"box2d.b2JointDef", 0};
const int LunaTraits< b2WheelJointDef >::hash = 65834502;
const int LunaTraits< b2WheelJointDef >::uniqueIDs[] = {22467414,0};

luna_RegType LunaTraits< b2WheelJointDef >::methods[] = {
	{"Initialize", &luna_wrapper_b2WheelJointDef::_bind_Initialize},
	{"getLocalAnchorA", &luna_wrapper_b2WheelJointDef::_bind_getLocalAnchorA},
	{"getLocalAnchorB", &luna_wrapper_b2WheelJointDef::_bind_getLocalAnchorB},
	{"getLocalAxisA", &luna_wrapper_b2WheelJointDef::_bind_getLocalAxisA},
	{"getEnableMotor", &luna_wrapper_b2WheelJointDef::_bind_getEnableMotor},
	{"getMaxMotorTorque", &luna_wrapper_b2WheelJointDef::_bind_getMaxMotorTorque},
	{"getMotorSpeed", &luna_wrapper_b2WheelJointDef::_bind_getMotorSpeed},
	{"getFrequencyHz", &luna_wrapper_b2WheelJointDef::_bind_getFrequencyHz},
	{"getDampingRatio", &luna_wrapper_b2WheelJointDef::_bind_getDampingRatio},
	{"setLocalAnchorA", &luna_wrapper_b2WheelJointDef::_bind_setLocalAnchorA},
	{"setLocalAnchorB", &luna_wrapper_b2WheelJointDef::_bind_setLocalAnchorB},
	{"setLocalAxisA", &luna_wrapper_b2WheelJointDef::_bind_setLocalAxisA},
	{"setEnableMotor", &luna_wrapper_b2WheelJointDef::_bind_setEnableMotor},
	{"setMaxMotorTorque", &luna_wrapper_b2WheelJointDef::_bind_setMaxMotorTorque},
	{"setMotorSpeed", &luna_wrapper_b2WheelJointDef::_bind_setMotorSpeed},
	{"setFrequencyHz", &luna_wrapper_b2WheelJointDef::_bind_setFrequencyHz},
	{"setDampingRatio", &luna_wrapper_b2WheelJointDef::_bind_setDampingRatio},
	{"__eq", &luna_wrapper_b2WheelJointDef::_bind___eq},
	{"fromVoid", &luna_wrapper_b2WheelJointDef::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2WheelJointDef::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2WheelJointDef >::converters[] = {
	{"b2JointDef", &luna_wrapper_b2WheelJointDef::_cast_from_b2JointDef},
	{0,0}
};

luna_RegEnumType LunaTraits< b2WheelJointDef >::enumValues[] = {
	{0,0}
};


