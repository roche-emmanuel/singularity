#include <plug_common.h>

class luna_wrapper_b2JointDef {
public:
	typedef Luna< b2JointDef > luna_t;

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

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		b2JointDef* self=(Luna< b2JointDef >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2JointDef");
		
		return luna_dynamicCast(L,converters,"b2JointDef",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUserData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBodyA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBodyB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCollideConnected(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBodyA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,53908778)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBodyB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,53908778)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCollideConnected(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2JointDef::b2JointDef()
	static b2JointDef* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2JointDef::b2JointDef() function, expected prototype:\nb2JointDef::b2JointDef()\nClass arguments details:\n");
		}


		return new b2JointDef();
	}


	// Function binds:
	// b2JointType b2JointDef::type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2JointType b2JointDef::type() function, expected prototype:\nb2JointType b2JointDef::type()\nClass arguments details:\n");
		}


		b2JointDef* self=(Luna< b2JointDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2JointType b2JointDef::type(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		b2JointType lret = self->type;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void * b2JointDef::userData()
	static int _bind_getUserData(lua_State *L) {
		if (!_lg_typecheck_getUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * b2JointDef::userData() function, expected prototype:\nvoid * b2JointDef::userData()\nClass arguments details:\n");
		}


		b2JointDef* self=(Luna< b2JointDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * b2JointDef::userData(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		void * lret = self->userData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// b2Body * b2JointDef::bodyA()
	static int _bind_getBodyA(lua_State *L) {
		if (!_lg_typecheck_getBodyA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Body * b2JointDef::bodyA() function, expected prototype:\nb2Body * b2JointDef::bodyA()\nClass arguments details:\n");
		}


		b2JointDef* self=(Luna< b2JointDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Body * b2JointDef::bodyA(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		b2Body * lret = self->bodyA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Body >::push(L,lret,false);

		return 1;
	}

	// b2Body * b2JointDef::bodyB()
	static int _bind_getBodyB(lua_State *L) {
		if (!_lg_typecheck_getBodyB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Body * b2JointDef::bodyB() function, expected prototype:\nb2Body * b2JointDef::bodyB()\nClass arguments details:\n");
		}


		b2JointDef* self=(Luna< b2JointDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Body * b2JointDef::bodyB(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		b2Body * lret = self->bodyB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Body >::push(L,lret,false);

		return 1;
	}

	// bool b2JointDef::collideConnected()
	static int _bind_getCollideConnected(lua_State *L) {
		if (!_lg_typecheck_getCollideConnected(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2JointDef::collideConnected() function, expected prototype:\nbool b2JointDef::collideConnected()\nClass arguments details:\n");
		}


		b2JointDef* self=(Luna< b2JointDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2JointDef::collideConnected(). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		bool lret = self->collideConnected;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2JointDef::type(b2JointType value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2JointDef::type(b2JointType value) function, expected prototype:\nvoid b2JointDef::type(b2JointType value)\nClass arguments details:\n");
		}

		b2JointType value=(b2JointType)lua_tointeger(L,2);

		b2JointDef* self=(Luna< b2JointDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2JointDef::type(b2JointType). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->type = value;

		return 0;
	}

	// void b2JointDef::userData(void * value)
	static int _bind_setUserData(lua_State *L) {
		if (!_lg_typecheck_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2JointDef::userData(void * value) function, expected prototype:\nvoid b2JointDef::userData(void * value)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,2));

		b2JointDef* self=(Luna< b2JointDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2JointDef::userData(void *). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->userData = value;

		return 0;
	}

	// void b2JointDef::bodyA(b2Body * value)
	static int _bind_setBodyA(lua_State *L) {
		if (!_lg_typecheck_setBodyA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2JointDef::bodyA(b2Body * value) function, expected prototype:\nvoid b2JointDef::bodyA(b2Body * value)\nClass arguments details:\narg 1 ID = 53908778\n");
		}

		b2Body* value=(Luna< b2Body >::check(L,2));

		b2JointDef* self=(Luna< b2JointDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2JointDef::bodyA(b2Body *). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->bodyA = value;

		return 0;
	}

	// void b2JointDef::bodyB(b2Body * value)
	static int _bind_setBodyB(lua_State *L) {
		if (!_lg_typecheck_setBodyB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2JointDef::bodyB(b2Body * value) function, expected prototype:\nvoid b2JointDef::bodyB(b2Body * value)\nClass arguments details:\narg 1 ID = 53908778\n");
		}

		b2Body* value=(Luna< b2Body >::check(L,2));

		b2JointDef* self=(Luna< b2JointDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2JointDef::bodyB(b2Body *). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->bodyB = value;

		return 0;
	}

	// void b2JointDef::collideConnected(bool value)
	static int _bind_setCollideConnected(lua_State *L) {
		if (!_lg_typecheck_setCollideConnected(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2JointDef::collideConnected(bool value) function, expected prototype:\nvoid b2JointDef::collideConnected(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		b2JointDef* self=(Luna< b2JointDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2JointDef::collideConnected(bool). Got : '%s'",typeid(Luna< b2JointDef >::check(L,1)).name());
		}
		self->collideConnected = value;

		return 0;
	}


	// Operator binds:

};

b2JointDef* LunaTraits< b2JointDef >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2JointDef::_bind_ctor(L);
}

void LunaTraits< b2JointDef >::_bind_dtor(b2JointDef* obj) {
	delete obj;
}

const char LunaTraits< b2JointDef >::className[] = "b2JointDef";
const char LunaTraits< b2JointDef >::fullName[] = "b2JointDef";
const char LunaTraits< b2JointDef >::moduleName[] = "box2d";
const char* LunaTraits< b2JointDef >::parents[] = {0};
const int LunaTraits< b2JointDef >::hash = 22467414;
const int LunaTraits< b2JointDef >::uniqueIDs[] = {22467414,0};

luna_RegType LunaTraits< b2JointDef >::methods[] = {
	{"getType", &luna_wrapper_b2JointDef::_bind_getType},
	{"getUserData", &luna_wrapper_b2JointDef::_bind_getUserData},
	{"getBodyA", &luna_wrapper_b2JointDef::_bind_getBodyA},
	{"getBodyB", &luna_wrapper_b2JointDef::_bind_getBodyB},
	{"getCollideConnected", &luna_wrapper_b2JointDef::_bind_getCollideConnected},
	{"setType", &luna_wrapper_b2JointDef::_bind_setType},
	{"setUserData", &luna_wrapper_b2JointDef::_bind_setUserData},
	{"setBodyA", &luna_wrapper_b2JointDef::_bind_setBodyA},
	{"setBodyB", &luna_wrapper_b2JointDef::_bind_setBodyB},
	{"setCollideConnected", &luna_wrapper_b2JointDef::_bind_setCollideConnected},
	{"dynCast", &luna_wrapper_b2JointDef::_bind_dynCast},
	{"__eq", &luna_wrapper_b2JointDef::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< b2JointDef >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2JointDef >::enumValues[] = {
	{0,0}
};

