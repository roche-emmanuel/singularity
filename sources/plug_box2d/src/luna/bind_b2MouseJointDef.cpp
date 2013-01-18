#include <plug_common.h>

class luna_wrapper_b2MouseJointDef {
public:
	typedef Luna< b2MouseJointDef > luna_t;

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

		b2MouseJointDef* self= (b2MouseJointDef*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2MouseJointDef >::push(L,self,false);
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
		//b2MouseJointDef* ptr= dynamic_cast< b2MouseJointDef* >(Luna< b2JointDef >::check(L,1));
		b2MouseJointDef* ptr= luna_caster< b2JointDef, b2MouseJointDef >::cast(Luna< b2JointDef >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< b2MouseJointDef >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxForce(lua_State *L) {
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

	inline static bool _lg_typecheck_setTarget(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxForce(lua_State *L) {
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
	// b2MouseJointDef::b2MouseJointDef()
	static b2MouseJointDef* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2MouseJointDef::b2MouseJointDef() function, expected prototype:\nb2MouseJointDef::b2MouseJointDef()\nClass arguments details:\n");
		}


		return new b2MouseJointDef();
	}


	// Function binds:
	// b2Vec2 b2MouseJointDef::target()
	static int _bind_getTarget(lua_State *L) {
		if (!_lg_typecheck_getTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2MouseJointDef::target() function, expected prototype:\nb2Vec2 b2MouseJointDef::target()\nClass arguments details:\n");
		}


		b2MouseJointDef* self=Luna< b2JointDef >::checkSubType< b2MouseJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2MouseJointDef::target(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->target;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// float b2MouseJointDef::maxForce()
	static int _bind_getMaxForce(lua_State *L) {
		if (!_lg_typecheck_getMaxForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2MouseJointDef::maxForce() function, expected prototype:\nfloat b2MouseJointDef::maxForce()\nClass arguments details:\n");
		}


		b2MouseJointDef* self=Luna< b2JointDef >::checkSubType< b2MouseJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2MouseJointDef::maxForce(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		float lret = self->maxForce;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2MouseJointDef::frequencyHz()
	static int _bind_getFrequencyHz(lua_State *L) {
		if (!_lg_typecheck_getFrequencyHz(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2MouseJointDef::frequencyHz() function, expected prototype:\nfloat b2MouseJointDef::frequencyHz()\nClass arguments details:\n");
		}


		b2MouseJointDef* self=Luna< b2JointDef >::checkSubType< b2MouseJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2MouseJointDef::frequencyHz(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		float lret = self->frequencyHz;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2MouseJointDef::dampingRatio()
	static int _bind_getDampingRatio(lua_State *L) {
		if (!_lg_typecheck_getDampingRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2MouseJointDef::dampingRatio() function, expected prototype:\nfloat b2MouseJointDef::dampingRatio()\nClass arguments details:\n");
		}


		b2MouseJointDef* self=Luna< b2JointDef >::checkSubType< b2MouseJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2MouseJointDef::dampingRatio(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		float lret = self->dampingRatio;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2MouseJointDef::target(b2Vec2 value)
	static int _bind_setTarget(lua_State *L) {
		if (!_lg_typecheck_setTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2MouseJointDef::target(b2Vec2 value) function, expected prototype:\nvoid b2MouseJointDef::target(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2MouseJointDef::target function");
		}
		b2Vec2 value=*value_ptr;

		b2MouseJointDef* self=Luna< b2JointDef >::checkSubType< b2MouseJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2MouseJointDef::target(b2Vec2). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->target = value;

		return 0;
	}

	// void b2MouseJointDef::maxForce(float value)
	static int _bind_setMaxForce(lua_State *L) {
		if (!_lg_typecheck_setMaxForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2MouseJointDef::maxForce(float value) function, expected prototype:\nvoid b2MouseJointDef::maxForce(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2MouseJointDef* self=Luna< b2JointDef >::checkSubType< b2MouseJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2MouseJointDef::maxForce(float). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->maxForce = value;

		return 0;
	}

	// void b2MouseJointDef::frequencyHz(float value)
	static int _bind_setFrequencyHz(lua_State *L) {
		if (!_lg_typecheck_setFrequencyHz(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2MouseJointDef::frequencyHz(float value) function, expected prototype:\nvoid b2MouseJointDef::frequencyHz(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2MouseJointDef* self=Luna< b2JointDef >::checkSubType< b2MouseJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2MouseJointDef::frequencyHz(float). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->frequencyHz = value;

		return 0;
	}

	// void b2MouseJointDef::dampingRatio(float value)
	static int _bind_setDampingRatio(lua_State *L) {
		if (!_lg_typecheck_setDampingRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2MouseJointDef::dampingRatio(float value) function, expected prototype:\nvoid b2MouseJointDef::dampingRatio(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2MouseJointDef* self=Luna< b2JointDef >::checkSubType< b2MouseJointDef >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2MouseJointDef::dampingRatio(float). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->dampingRatio = value;

		return 0;
	}


	// Operator binds:

};

b2MouseJointDef* LunaTraits< b2MouseJointDef >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2MouseJointDef::_bind_ctor(L);
}

void LunaTraits< b2MouseJointDef >::_bind_dtor(b2MouseJointDef* obj) {
	delete obj;
}

const char LunaTraits< b2MouseJointDef >::className[] = "b2MouseJointDef";
const char LunaTraits< b2MouseJointDef >::fullName[] = "b2MouseJointDef";
const char LunaTraits< b2MouseJointDef >::moduleName[] = "box2d";
const char* LunaTraits< b2MouseJointDef >::parents[] = {"box2d.b2JointDef", 0};
const int LunaTraits< b2MouseJointDef >::hash = 10670080;
const int LunaTraits< b2MouseJointDef >::uniqueIDs[] = {22467414,0};

luna_RegType LunaTraits< b2MouseJointDef >::methods[] = {
	{"getTarget", &luna_wrapper_b2MouseJointDef::_bind_getTarget},
	{"getMaxForce", &luna_wrapper_b2MouseJointDef::_bind_getMaxForce},
	{"getFrequencyHz", &luna_wrapper_b2MouseJointDef::_bind_getFrequencyHz},
	{"getDampingRatio", &luna_wrapper_b2MouseJointDef::_bind_getDampingRatio},
	{"setTarget", &luna_wrapper_b2MouseJointDef::_bind_setTarget},
	{"setMaxForce", &luna_wrapper_b2MouseJointDef::_bind_setMaxForce},
	{"setFrequencyHz", &luna_wrapper_b2MouseJointDef::_bind_setFrequencyHz},
	{"setDampingRatio", &luna_wrapper_b2MouseJointDef::_bind_setDampingRatio},
	{"__eq", &luna_wrapper_b2MouseJointDef::_bind___eq},
	{"fromVoid", &luna_wrapper_b2MouseJointDef::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2MouseJointDef::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2MouseJointDef >::converters[] = {
	{"b2JointDef", &luna_wrapper_b2MouseJointDef::_cast_from_b2JointDef},
	{0,0}
};

luna_RegEnumType LunaTraits< b2MouseJointDef >::enumValues[] = {
	{0,0}
};


