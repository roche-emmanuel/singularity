#include <plug_common.h>

class luna_wrapper_b2PulleyJointDef {
public:
	typedef Luna< b2PulleyJointDef > luna_t;

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

		b2PulleyJointDef* self= (b2PulleyJointDef*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2PulleyJointDef >::push(L,self,false);
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
		//b2PulleyJointDef* ptr= dynamic_cast< b2PulleyJointDef* >(Luna< b2JointDef >::check(L,1));
		b2PulleyJointDef* ptr= luna_caster< b2JointDef, b2PulleyJointDef >::cast(Luna< b2JointDef >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< b2PulleyJointDef >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Initialize(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,53908778)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,53908778)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,54494886) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,54494886) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,54494886) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,54494886) ) return false;
		if( lua_isnumber(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGroundAnchorA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGroundAnchorB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_getLengthA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLengthB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGroundAnchorA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGroundAnchorB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
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

	inline static bool _lg_typecheck_setLengthA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLengthB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2PulleyJointDef::b2PulleyJointDef()
	static b2PulleyJointDef* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2PulleyJointDef::b2PulleyJointDef() function, expected prototype:\nb2PulleyJointDef::b2PulleyJointDef()\nClass arguments details:\n");
		}


		return new b2PulleyJointDef();
	}


	// Function binds:
	// void b2PulleyJointDef::Initialize(b2Body * bodyA, b2Body * bodyB, const b2Vec2 & groundAnchorA, const b2Vec2 & groundAnchorB, const b2Vec2 & anchorA, const b2Vec2 & anchorB, float ratio)
	static int _bind_Initialize(lua_State *L) {
		if (!_lg_typecheck_Initialize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2PulleyJointDef::Initialize(b2Body * bodyA, b2Body * bodyB, const b2Vec2 & groundAnchorA, const b2Vec2 & groundAnchorB, const b2Vec2 & anchorA, const b2Vec2 & anchorB, float ratio) function, expected prototype:\nvoid b2PulleyJointDef::Initialize(b2Body * bodyA, b2Body * bodyB, const b2Vec2 & groundAnchorA, const b2Vec2 & groundAnchorB, const b2Vec2 & anchorA, const b2Vec2 & anchorB, float ratio)\nClass arguments details:\narg 1 ID = 53908778\narg 2 ID = 53908778\narg 3 ID = 54494886\narg 4 ID = 54494886\narg 5 ID = 54494886\narg 6 ID = 54494886\n");
		}

		b2Body* bodyA=(Luna< b2Body >::check(L,2));
		b2Body* bodyB=(Luna< b2Body >::check(L,3));
		const b2Vec2* groundAnchorA_ptr=(Luna< b2Vec2 >::check(L,4));
		if( !groundAnchorA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg groundAnchorA in b2PulleyJointDef::Initialize function");
		}
		const b2Vec2 & groundAnchorA=*groundAnchorA_ptr;
		const b2Vec2* groundAnchorB_ptr=(Luna< b2Vec2 >::check(L,5));
		if( !groundAnchorB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg groundAnchorB in b2PulleyJointDef::Initialize function");
		}
		const b2Vec2 & groundAnchorB=*groundAnchorB_ptr;
		const b2Vec2* anchorA_ptr=(Luna< b2Vec2 >::check(L,6));
		if( !anchorA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg anchorA in b2PulleyJointDef::Initialize function");
		}
		const b2Vec2 & anchorA=*anchorA_ptr;
		const b2Vec2* anchorB_ptr=(Luna< b2Vec2 >::check(L,7));
		if( !anchorB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg anchorB in b2PulleyJointDef::Initialize function");
		}
		const b2Vec2 & anchorB=*anchorB_ptr;
		float ratio=(float)lua_tonumber(L,8);

		b2PulleyJointDef* self=Luna< b2JointDef >::checkSubType< b2PulleyJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2PulleyJointDef::Initialize(b2Body *, b2Body *, const b2Vec2 &, const b2Vec2 &, const b2Vec2 &, const b2Vec2 &, float). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->Initialize(bodyA, bodyB, groundAnchorA, groundAnchorB, anchorA, anchorB, ratio);

		return 0;
	}

	// b2Vec2 b2PulleyJointDef::groundAnchorA()
	static int _bind_getGroundAnchorA(lua_State *L) {
		if (!_lg_typecheck_getGroundAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2PulleyJointDef::groundAnchorA() function, expected prototype:\nb2Vec2 b2PulleyJointDef::groundAnchorA()\nClass arguments details:\n");
		}


		b2PulleyJointDef* self=Luna< b2JointDef >::checkSubType< b2PulleyJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2PulleyJointDef::groundAnchorA(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->groundAnchorA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// b2Vec2 b2PulleyJointDef::groundAnchorB()
	static int _bind_getGroundAnchorB(lua_State *L) {
		if (!_lg_typecheck_getGroundAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2PulleyJointDef::groundAnchorB() function, expected prototype:\nb2Vec2 b2PulleyJointDef::groundAnchorB()\nClass arguments details:\n");
		}


		b2PulleyJointDef* self=Luna< b2JointDef >::checkSubType< b2PulleyJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2PulleyJointDef::groundAnchorB(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->groundAnchorB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// b2Vec2 b2PulleyJointDef::localAnchorA()
	static int _bind_getLocalAnchorA(lua_State *L) {
		if (!_lg_typecheck_getLocalAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2PulleyJointDef::localAnchorA() function, expected prototype:\nb2Vec2 b2PulleyJointDef::localAnchorA()\nClass arguments details:\n");
		}


		b2PulleyJointDef* self=Luna< b2JointDef >::checkSubType< b2PulleyJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2PulleyJointDef::localAnchorA(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->localAnchorA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// b2Vec2 b2PulleyJointDef::localAnchorB()
	static int _bind_getLocalAnchorB(lua_State *L) {
		if (!_lg_typecheck_getLocalAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2PulleyJointDef::localAnchorB() function, expected prototype:\nb2Vec2 b2PulleyJointDef::localAnchorB()\nClass arguments details:\n");
		}


		b2PulleyJointDef* self=Luna< b2JointDef >::checkSubType< b2PulleyJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2PulleyJointDef::localAnchorB(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->localAnchorB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// float b2PulleyJointDef::lengthA()
	static int _bind_getLengthA(lua_State *L) {
		if (!_lg_typecheck_getLengthA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2PulleyJointDef::lengthA() function, expected prototype:\nfloat b2PulleyJointDef::lengthA()\nClass arguments details:\n");
		}


		b2PulleyJointDef* self=Luna< b2JointDef >::checkSubType< b2PulleyJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2PulleyJointDef::lengthA(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		float lret = self->lengthA;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2PulleyJointDef::lengthB()
	static int _bind_getLengthB(lua_State *L) {
		if (!_lg_typecheck_getLengthB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2PulleyJointDef::lengthB() function, expected prototype:\nfloat b2PulleyJointDef::lengthB()\nClass arguments details:\n");
		}


		b2PulleyJointDef* self=Luna< b2JointDef >::checkSubType< b2PulleyJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2PulleyJointDef::lengthB(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		float lret = self->lengthB;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2PulleyJointDef::ratio()
	static int _bind_getRatio(lua_State *L) {
		if (!_lg_typecheck_getRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2PulleyJointDef::ratio() function, expected prototype:\nfloat b2PulleyJointDef::ratio()\nClass arguments details:\n");
		}


		b2PulleyJointDef* self=Luna< b2JointDef >::checkSubType< b2PulleyJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2PulleyJointDef::ratio(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		float lret = self->ratio;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2PulleyJointDef::groundAnchorA(b2Vec2 value)
	static int _bind_setGroundAnchorA(lua_State *L) {
		if (!_lg_typecheck_setGroundAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2PulleyJointDef::groundAnchorA(b2Vec2 value) function, expected prototype:\nvoid b2PulleyJointDef::groundAnchorA(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2PulleyJointDef::groundAnchorA function");
		}
		b2Vec2 value=*value_ptr;

		b2PulleyJointDef* self=Luna< b2JointDef >::checkSubType< b2PulleyJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2PulleyJointDef::groundAnchorA(b2Vec2). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->groundAnchorA = value;

		return 0;
	}

	// void b2PulleyJointDef::groundAnchorB(b2Vec2 value)
	static int _bind_setGroundAnchorB(lua_State *L) {
		if (!_lg_typecheck_setGroundAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2PulleyJointDef::groundAnchorB(b2Vec2 value) function, expected prototype:\nvoid b2PulleyJointDef::groundAnchorB(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2PulleyJointDef::groundAnchorB function");
		}
		b2Vec2 value=*value_ptr;

		b2PulleyJointDef* self=Luna< b2JointDef >::checkSubType< b2PulleyJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2PulleyJointDef::groundAnchorB(b2Vec2). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->groundAnchorB = value;

		return 0;
	}

	// void b2PulleyJointDef::localAnchorA(b2Vec2 value)
	static int _bind_setLocalAnchorA(lua_State *L) {
		if (!_lg_typecheck_setLocalAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2PulleyJointDef::localAnchorA(b2Vec2 value) function, expected prototype:\nvoid b2PulleyJointDef::localAnchorA(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2PulleyJointDef::localAnchorA function");
		}
		b2Vec2 value=*value_ptr;

		b2PulleyJointDef* self=Luna< b2JointDef >::checkSubType< b2PulleyJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2PulleyJointDef::localAnchorA(b2Vec2). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->localAnchorA = value;

		return 0;
	}

	// void b2PulleyJointDef::localAnchorB(b2Vec2 value)
	static int _bind_setLocalAnchorB(lua_State *L) {
		if (!_lg_typecheck_setLocalAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2PulleyJointDef::localAnchorB(b2Vec2 value) function, expected prototype:\nvoid b2PulleyJointDef::localAnchorB(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2PulleyJointDef::localAnchorB function");
		}
		b2Vec2 value=*value_ptr;

		b2PulleyJointDef* self=Luna< b2JointDef >::checkSubType< b2PulleyJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2PulleyJointDef::localAnchorB(b2Vec2). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->localAnchorB = value;

		return 0;
	}

	// void b2PulleyJointDef::lengthA(float value)
	static int _bind_setLengthA(lua_State *L) {
		if (!_lg_typecheck_setLengthA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2PulleyJointDef::lengthA(float value) function, expected prototype:\nvoid b2PulleyJointDef::lengthA(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2PulleyJointDef* self=Luna< b2JointDef >::checkSubType< b2PulleyJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2PulleyJointDef::lengthA(float). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->lengthA = value;

		return 0;
	}

	// void b2PulleyJointDef::lengthB(float value)
	static int _bind_setLengthB(lua_State *L) {
		if (!_lg_typecheck_setLengthB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2PulleyJointDef::lengthB(float value) function, expected prototype:\nvoid b2PulleyJointDef::lengthB(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2PulleyJointDef* self=Luna< b2JointDef >::checkSubType< b2PulleyJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2PulleyJointDef::lengthB(float). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->lengthB = value;

		return 0;
	}

	// void b2PulleyJointDef::ratio(float value)
	static int _bind_setRatio(lua_State *L) {
		if (!_lg_typecheck_setRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2PulleyJointDef::ratio(float value) function, expected prototype:\nvoid b2PulleyJointDef::ratio(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2PulleyJointDef* self=Luna< b2JointDef >::checkSubType< b2PulleyJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2PulleyJointDef::ratio(float). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->ratio = value;

		return 0;
	}


	// Operator binds:

};

b2PulleyJointDef* LunaTraits< b2PulleyJointDef >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2PulleyJointDef::_bind_ctor(L);
}

void LunaTraits< b2PulleyJointDef >::_bind_dtor(b2PulleyJointDef* obj) {
	delete obj;
}

const char LunaTraits< b2PulleyJointDef >::className[] = "b2PulleyJointDef";
const char LunaTraits< b2PulleyJointDef >::fullName[] = "b2PulleyJointDef";
const char LunaTraits< b2PulleyJointDef >::moduleName[] = "box2d";
const char* LunaTraits< b2PulleyJointDef >::parents[] = {"box2d.b2JointDef", 0};
const int LunaTraits< b2PulleyJointDef >::hash = 65370515;
const int LunaTraits< b2PulleyJointDef >::uniqueIDs[] = {22467414,0};

luna_RegType LunaTraits< b2PulleyJointDef >::methods[] = {
	{"Initialize", &luna_wrapper_b2PulleyJointDef::_bind_Initialize},
	{"getGroundAnchorA", &luna_wrapper_b2PulleyJointDef::_bind_getGroundAnchorA},
	{"getGroundAnchorB", &luna_wrapper_b2PulleyJointDef::_bind_getGroundAnchorB},
	{"getLocalAnchorA", &luna_wrapper_b2PulleyJointDef::_bind_getLocalAnchorA},
	{"getLocalAnchorB", &luna_wrapper_b2PulleyJointDef::_bind_getLocalAnchorB},
	{"getLengthA", &luna_wrapper_b2PulleyJointDef::_bind_getLengthA},
	{"getLengthB", &luna_wrapper_b2PulleyJointDef::_bind_getLengthB},
	{"getRatio", &luna_wrapper_b2PulleyJointDef::_bind_getRatio},
	{"setGroundAnchorA", &luna_wrapper_b2PulleyJointDef::_bind_setGroundAnchorA},
	{"setGroundAnchorB", &luna_wrapper_b2PulleyJointDef::_bind_setGroundAnchorB},
	{"setLocalAnchorA", &luna_wrapper_b2PulleyJointDef::_bind_setLocalAnchorA},
	{"setLocalAnchorB", &luna_wrapper_b2PulleyJointDef::_bind_setLocalAnchorB},
	{"setLengthA", &luna_wrapper_b2PulleyJointDef::_bind_setLengthA},
	{"setLengthB", &luna_wrapper_b2PulleyJointDef::_bind_setLengthB},
	{"setRatio", &luna_wrapper_b2PulleyJointDef::_bind_setRatio},
	{"fromVoid", &luna_wrapper_b2PulleyJointDef::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2PulleyJointDef::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2PulleyJointDef >::converters[] = {
	{"b2JointDef", &luna_wrapper_b2PulleyJointDef::_cast_from_b2JointDef},
	{0,0}
};

luna_RegEnumType LunaTraits< b2PulleyJointDef >::enumValues[] = {
	{0,0}
};


