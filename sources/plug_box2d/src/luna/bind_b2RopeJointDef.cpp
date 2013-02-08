#include <plug_common.h>

class luna_wrapper_b2RopeJointDef {
public:
	typedef Luna< b2RopeJointDef > luna_t;

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

		b2RopeJointDef* self= (b2RopeJointDef*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2RopeJointDef >::push(L,self,false);
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
		//b2RopeJointDef* ptr= dynamic_cast< b2RopeJointDef* >(Luna< b2JointDef >::check(L,1));
		b2RopeJointDef* ptr= luna_caster< b2JointDef, b2RopeJointDef >::cast(Luna< b2JointDef >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< b2RopeJointDef >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getLocalAnchorA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalAnchorB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxLength(lua_State *L) {
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

	inline static bool _lg_typecheck_setMaxLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2RopeJointDef::b2RopeJointDef()
	static b2RopeJointDef* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2RopeJointDef::b2RopeJointDef() function, expected prototype:\nb2RopeJointDef::b2RopeJointDef()\nClass arguments details:\n");
		}


		return new b2RopeJointDef();
	}


	// Function binds:
	// b2Vec2 b2RopeJointDef::localAnchorA()
	static int _bind_getLocalAnchorA(lua_State *L) {
		if (!_lg_typecheck_getLocalAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2RopeJointDef::localAnchorA() function, expected prototype:\nb2Vec2 b2RopeJointDef::localAnchorA()\nClass arguments details:\n");
		}


		b2RopeJointDef* self=Luna< b2JointDef >::checkSubType< b2RopeJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2RopeJointDef::localAnchorA(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->localAnchorA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// b2Vec2 b2RopeJointDef::localAnchorB()
	static int _bind_getLocalAnchorB(lua_State *L) {
		if (!_lg_typecheck_getLocalAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2RopeJointDef::localAnchorB() function, expected prototype:\nb2Vec2 b2RopeJointDef::localAnchorB()\nClass arguments details:\n");
		}


		b2RopeJointDef* self=Luna< b2JointDef >::checkSubType< b2RopeJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2RopeJointDef::localAnchorB(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->localAnchorB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// float b2RopeJointDef::maxLength()
	static int _bind_getMaxLength(lua_State *L) {
		if (!_lg_typecheck_getMaxLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2RopeJointDef::maxLength() function, expected prototype:\nfloat b2RopeJointDef::maxLength()\nClass arguments details:\n");
		}


		b2RopeJointDef* self=Luna< b2JointDef >::checkSubType< b2RopeJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2RopeJointDef::maxLength(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		float lret = self->maxLength;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2RopeJointDef::localAnchorA(b2Vec2 value)
	static int _bind_setLocalAnchorA(lua_State *L) {
		if (!_lg_typecheck_setLocalAnchorA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2RopeJointDef::localAnchorA(b2Vec2 value) function, expected prototype:\nvoid b2RopeJointDef::localAnchorA(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2RopeJointDef::localAnchorA function");
		}
		b2Vec2 value=*value_ptr;

		b2RopeJointDef* self=Luna< b2JointDef >::checkSubType< b2RopeJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2RopeJointDef::localAnchorA(b2Vec2). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->localAnchorA = value;

		return 0;
	}

	// void b2RopeJointDef::localAnchorB(b2Vec2 value)
	static int _bind_setLocalAnchorB(lua_State *L) {
		if (!_lg_typecheck_setLocalAnchorB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2RopeJointDef::localAnchorB(b2Vec2 value) function, expected prototype:\nvoid b2RopeJointDef::localAnchorB(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2RopeJointDef::localAnchorB function");
		}
		b2Vec2 value=*value_ptr;

		b2RopeJointDef* self=Luna< b2JointDef >::checkSubType< b2RopeJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2RopeJointDef::localAnchorB(b2Vec2). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->localAnchorB = value;

		return 0;
	}

	// void b2RopeJointDef::maxLength(float value)
	static int _bind_setMaxLength(lua_State *L) {
		if (!_lg_typecheck_setMaxLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2RopeJointDef::maxLength(float value) function, expected prototype:\nvoid b2RopeJointDef::maxLength(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2RopeJointDef* self=Luna< b2JointDef >::checkSubType< b2RopeJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2RopeJointDef::maxLength(float). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->maxLength = value;

		return 0;
	}


	// Operator binds:

};

b2RopeJointDef* LunaTraits< b2RopeJointDef >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2RopeJointDef::_bind_ctor(L);
}

void LunaTraits< b2RopeJointDef >::_bind_dtor(b2RopeJointDef* obj) {
	delete obj;
}

const char LunaTraits< b2RopeJointDef >::className[] = "b2RopeJointDef";
const char LunaTraits< b2RopeJointDef >::fullName[] = "b2RopeJointDef";
const char LunaTraits< b2RopeJointDef >::moduleName[] = "box2d";
const char* LunaTraits< b2RopeJointDef >::parents[] = {"box2d.b2JointDef", 0};
const int LunaTraits< b2RopeJointDef >::hash = 55014876;
const int LunaTraits< b2RopeJointDef >::uniqueIDs[] = {22467414,0};

luna_RegType LunaTraits< b2RopeJointDef >::methods[] = {
	{"getLocalAnchorA", &luna_wrapper_b2RopeJointDef::_bind_getLocalAnchorA},
	{"getLocalAnchorB", &luna_wrapper_b2RopeJointDef::_bind_getLocalAnchorB},
	{"getMaxLength", &luna_wrapper_b2RopeJointDef::_bind_getMaxLength},
	{"setLocalAnchorA", &luna_wrapper_b2RopeJointDef::_bind_setLocalAnchorA},
	{"setLocalAnchorB", &luna_wrapper_b2RopeJointDef::_bind_setLocalAnchorB},
	{"setMaxLength", &luna_wrapper_b2RopeJointDef::_bind_setMaxLength},
	{"__eq", &luna_wrapper_b2RopeJointDef::_bind___eq},
	{"fromVoid", &luna_wrapper_b2RopeJointDef::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2RopeJointDef::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2RopeJointDef >::converters[] = {
	{"b2JointDef", &luna_wrapper_b2RopeJointDef::_cast_from_b2JointDef},
	{0,0}
};

luna_RegEnumType LunaTraits< b2RopeJointDef >::enumValues[] = {
	{0,0}
};


