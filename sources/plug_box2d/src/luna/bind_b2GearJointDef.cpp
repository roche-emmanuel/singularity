#include <plug_common.h>

class luna_wrapper_b2GearJointDef {
public:
	typedef Luna< b2GearJointDef > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2GearJointDef* self= (b2GearJointDef*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2GearJointDef >::push(L,self,false);
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
		//b2GearJointDef* ptr= dynamic_cast< b2GearJointDef* >(Luna< b2JointDef >::check(L,1));
		b2GearJointDef* ptr= luna_caster< b2JointDef, b2GearJointDef >::cast(Luna< b2JointDef >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< b2GearJointDef >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getJoint1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getJoint2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setJoint1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,78564754)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setJoint2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,78564754)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2GearJointDef::b2GearJointDef()
	static b2GearJointDef* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in b2GearJointDef::b2GearJointDef() function, expected prototype:\nb2GearJointDef::b2GearJointDef()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new b2GearJointDef();
	}


	// Function binds:
	// b2Joint * b2GearJointDef::joint1()
	static int _bind_getJoint1(lua_State *L) {
		if (!_lg_typecheck_getJoint1(L)) {
			luaL_error(L, "luna typecheck failed in b2Joint * b2GearJointDef::joint1() function, expected prototype:\nb2Joint * b2GearJointDef::joint1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2GearJointDef* self=Luna< b2JointDef >::checkSubType< b2GearJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Joint * b2GearJointDef::joint1(). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		b2Joint * lret = self->joint1;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Joint >::push(L,lret,false);

		return 1;
	}

	// b2Joint * b2GearJointDef::joint2()
	static int _bind_getJoint2(lua_State *L) {
		if (!_lg_typecheck_getJoint2(L)) {
			luaL_error(L, "luna typecheck failed in b2Joint * b2GearJointDef::joint2() function, expected prototype:\nb2Joint * b2GearJointDef::joint2()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2GearJointDef* self=Luna< b2JointDef >::checkSubType< b2GearJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Joint * b2GearJointDef::joint2(). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		b2Joint * lret = self->joint2;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Joint >::push(L,lret,false);

		return 1;
	}

	// float b2GearJointDef::ratio()
	static int _bind_getRatio(lua_State *L) {
		if (!_lg_typecheck_getRatio(L)) {
			luaL_error(L, "luna typecheck failed in float b2GearJointDef::ratio() function, expected prototype:\nfloat b2GearJointDef::ratio()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2GearJointDef* self=Luna< b2JointDef >::checkSubType< b2GearJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2GearJointDef::ratio(). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->ratio;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2GearJointDef::joint1(b2Joint * value)
	static int _bind_setJoint1(lua_State *L) {
		if (!_lg_typecheck_setJoint1(L)) {
			luaL_error(L, "luna typecheck failed in void b2GearJointDef::joint1(b2Joint * value) function, expected prototype:\nvoid b2GearJointDef::joint1(b2Joint * value)\nClass arguments details:\narg 1 ID = 78564754\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Joint* value=(Luna< b2Joint >::check(L,2));

		b2GearJointDef* self=Luna< b2JointDef >::checkSubType< b2GearJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2GearJointDef::joint1(b2Joint *). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->joint1 = value;

		return 0;
	}

	// void b2GearJointDef::joint2(b2Joint * value)
	static int _bind_setJoint2(lua_State *L) {
		if (!_lg_typecheck_setJoint2(L)) {
			luaL_error(L, "luna typecheck failed in void b2GearJointDef::joint2(b2Joint * value) function, expected prototype:\nvoid b2GearJointDef::joint2(b2Joint * value)\nClass arguments details:\narg 1 ID = 78564754\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Joint* value=(Luna< b2Joint >::check(L,2));

		b2GearJointDef* self=Luna< b2JointDef >::checkSubType< b2GearJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2GearJointDef::joint2(b2Joint *). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->joint2 = value;

		return 0;
	}

	// void b2GearJointDef::ratio(float value)
	static int _bind_setRatio(lua_State *L) {
		if (!_lg_typecheck_setRatio(L)) {
			luaL_error(L, "luna typecheck failed in void b2GearJointDef::ratio(float value) function, expected prototype:\nvoid b2GearJointDef::ratio(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2GearJointDef* self=Luna< b2JointDef >::checkSubType< b2GearJointDef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2GearJointDef::ratio(float). Got : '%s'\n%s",typeid(Luna< b2JointDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ratio = value;

		return 0;
	}


	// Operator binds:

};

b2GearJointDef* LunaTraits< b2GearJointDef >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2GearJointDef::_bind_ctor(L);
}

void LunaTraits< b2GearJointDef >::_bind_dtor(b2GearJointDef* obj) {
	delete obj;
}

const char LunaTraits< b2GearJointDef >::className[] = "b2GearJointDef";
const char LunaTraits< b2GearJointDef >::fullName[] = "b2GearJointDef";
const char LunaTraits< b2GearJointDef >::moduleName[] = "box2d";
const char* LunaTraits< b2GearJointDef >::parents[] = {"box2d.b2JointDef", 0};
const int LunaTraits< b2GearJointDef >::hash = 28631927;
const int LunaTraits< b2GearJointDef >::uniqueIDs[] = {22467414,0};

luna_RegType LunaTraits< b2GearJointDef >::methods[] = {
	{"getJoint1", &luna_wrapper_b2GearJointDef::_bind_getJoint1},
	{"getJoint2", &luna_wrapper_b2GearJointDef::_bind_getJoint2},
	{"getRatio", &luna_wrapper_b2GearJointDef::_bind_getRatio},
	{"setJoint1", &luna_wrapper_b2GearJointDef::_bind_setJoint1},
	{"setJoint2", &luna_wrapper_b2GearJointDef::_bind_setJoint2},
	{"setRatio", &luna_wrapper_b2GearJointDef::_bind_setRatio},
	{"fromVoid", &luna_wrapper_b2GearJointDef::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2GearJointDef::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2GearJointDef >::converters[] = {
	{"b2JointDef", &luna_wrapper_b2GearJointDef::_cast_from_b2JointDef},
	{0,0}
};

luna_RegEnumType LunaTraits< b2GearJointDef >::enumValues[] = {
	{0,0}
};


