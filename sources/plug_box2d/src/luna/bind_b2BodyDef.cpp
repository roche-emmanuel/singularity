#include <plug_common.h>

class luna_wrapper_b2BodyDef {
public:
	typedef Luna< b2BodyDef > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,96360882) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2BodyDef*)");
		}

		b2BodyDef* rhs =(Luna< b2BodyDef >::check(L,2));
		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
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

		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2BodyDef");
		
		return luna_dynamicCast(L,converters,"b2BodyDef",name);
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

	inline static bool _lg_typecheck_getPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAngle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLinearVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAngularVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLinearDamping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAngularDamping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAllowSleep(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAwake(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFixedRotation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBullet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getActive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUserData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGravityScale(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLinearVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngularVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLinearDamping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngularDamping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAllowSleep(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAwake(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFixedRotation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBullet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setActive(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGravityScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2BodyDef::b2BodyDef()
	static b2BodyDef* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2BodyDef::b2BodyDef() function, expected prototype:\nb2BodyDef::b2BodyDef()\nClass arguments details:\n");
		}


		return new b2BodyDef();
	}


	// Function binds:
	// b2BodyType b2BodyDef::type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2BodyType b2BodyDef::type() function, expected prototype:\nb2BodyType b2BodyDef::type()\nClass arguments details:\n");
		}


		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2BodyType b2BodyDef::type(). Got : '%s'",typeid(Luna< b2BodyDef >::check(L,1)).name());
		}
		b2BodyType lret = self->type;
		lua_pushnumber(L,lret);

		return 1;
	}

	// b2Vec2 b2BodyDef::position()
	static int _bind_getPosition(lua_State *L) {
		if (!_lg_typecheck_getPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2BodyDef::position() function, expected prototype:\nb2Vec2 b2BodyDef::position()\nClass arguments details:\n");
		}


		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2BodyDef::position(). Got : '%s'",typeid(Luna< b2BodyDef >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->position;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// float b2BodyDef::angle()
	static int _bind_getAngle(lua_State *L) {
		if (!_lg_typecheck_getAngle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2BodyDef::angle() function, expected prototype:\nfloat b2BodyDef::angle()\nClass arguments details:\n");
		}


		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2BodyDef::angle(). Got : '%s'",typeid(Luna< b2BodyDef >::check(L,1)).name());
		}
		float lret = self->angle;
		lua_pushnumber(L,lret);

		return 1;
	}

	// b2Vec2 b2BodyDef::linearVelocity()
	static int _bind_getLinearVelocity(lua_State *L) {
		if (!_lg_typecheck_getLinearVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2BodyDef::linearVelocity() function, expected prototype:\nb2Vec2 b2BodyDef::linearVelocity()\nClass arguments details:\n");
		}


		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2BodyDef::linearVelocity(). Got : '%s'",typeid(Luna< b2BodyDef >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->linearVelocity;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// float b2BodyDef::angularVelocity()
	static int _bind_getAngularVelocity(lua_State *L) {
		if (!_lg_typecheck_getAngularVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2BodyDef::angularVelocity() function, expected prototype:\nfloat b2BodyDef::angularVelocity()\nClass arguments details:\n");
		}


		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2BodyDef::angularVelocity(). Got : '%s'",typeid(Luna< b2BodyDef >::check(L,1)).name());
		}
		float lret = self->angularVelocity;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2BodyDef::linearDamping()
	static int _bind_getLinearDamping(lua_State *L) {
		if (!_lg_typecheck_getLinearDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2BodyDef::linearDamping() function, expected prototype:\nfloat b2BodyDef::linearDamping()\nClass arguments details:\n");
		}


		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2BodyDef::linearDamping(). Got : '%s'",typeid(Luna< b2BodyDef >::check(L,1)).name());
		}
		float lret = self->linearDamping;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2BodyDef::angularDamping()
	static int _bind_getAngularDamping(lua_State *L) {
		if (!_lg_typecheck_getAngularDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2BodyDef::angularDamping() function, expected prototype:\nfloat b2BodyDef::angularDamping()\nClass arguments details:\n");
		}


		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2BodyDef::angularDamping(). Got : '%s'",typeid(Luna< b2BodyDef >::check(L,1)).name());
		}
		float lret = self->angularDamping;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool b2BodyDef::allowSleep()
	static int _bind_getAllowSleep(lua_State *L) {
		if (!_lg_typecheck_getAllowSleep(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2BodyDef::allowSleep() function, expected prototype:\nbool b2BodyDef::allowSleep()\nClass arguments details:\n");
		}


		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2BodyDef::allowSleep(). Got : '%s'",typeid(Luna< b2BodyDef >::check(L,1)).name());
		}
		bool lret = self->allowSleep;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool b2BodyDef::awake()
	static int _bind_getAwake(lua_State *L) {
		if (!_lg_typecheck_getAwake(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2BodyDef::awake() function, expected prototype:\nbool b2BodyDef::awake()\nClass arguments details:\n");
		}


		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2BodyDef::awake(). Got : '%s'",typeid(Luna< b2BodyDef >::check(L,1)).name());
		}
		bool lret = self->awake;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool b2BodyDef::fixedRotation()
	static int _bind_getFixedRotation(lua_State *L) {
		if (!_lg_typecheck_getFixedRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2BodyDef::fixedRotation() function, expected prototype:\nbool b2BodyDef::fixedRotation()\nClass arguments details:\n");
		}


		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2BodyDef::fixedRotation(). Got : '%s'",typeid(Luna< b2BodyDef >::check(L,1)).name());
		}
		bool lret = self->fixedRotation;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool b2BodyDef::bullet()
	static int _bind_getBullet(lua_State *L) {
		if (!_lg_typecheck_getBullet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2BodyDef::bullet() function, expected prototype:\nbool b2BodyDef::bullet()\nClass arguments details:\n");
		}


		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2BodyDef::bullet(). Got : '%s'",typeid(Luna< b2BodyDef >::check(L,1)).name());
		}
		bool lret = self->bullet;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool b2BodyDef::active()
	static int _bind_getActive(lua_State *L) {
		if (!_lg_typecheck_getActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2BodyDef::active() function, expected prototype:\nbool b2BodyDef::active()\nClass arguments details:\n");
		}


		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2BodyDef::active(). Got : '%s'",typeid(Luna< b2BodyDef >::check(L,1)).name());
		}
		bool lret = self->active;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void * b2BodyDef::userData()
	static int _bind_getUserData(lua_State *L) {
		if (!_lg_typecheck_getUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * b2BodyDef::userData() function, expected prototype:\nvoid * b2BodyDef::userData()\nClass arguments details:\n");
		}


		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * b2BodyDef::userData(). Got : '%s'",typeid(Luna< b2BodyDef >::check(L,1)).name());
		}
		void * lret = self->userData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// float b2BodyDef::gravityScale()
	static int _bind_getGravityScale(lua_State *L) {
		if (!_lg_typecheck_getGravityScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2BodyDef::gravityScale() function, expected prototype:\nfloat b2BodyDef::gravityScale()\nClass arguments details:\n");
		}


		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2BodyDef::gravityScale(). Got : '%s'",typeid(Luna< b2BodyDef >::check(L,1)).name());
		}
		float lret = self->gravityScale;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2BodyDef::type(b2BodyType value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2BodyDef::type(b2BodyType value) function, expected prototype:\nvoid b2BodyDef::type(b2BodyType value)\nClass arguments details:\n");
		}

		b2BodyType value=(b2BodyType)lua_tointeger(L,2);

		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2BodyDef::type(b2BodyType). Got : '%s'",typeid(Luna< b2BodyDef >::check(L,1)).name());
		}
		self->type = value;

		return 0;
	}

	// void b2BodyDef::position(b2Vec2 value)
	static int _bind_setPosition(lua_State *L) {
		if (!_lg_typecheck_setPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2BodyDef::position(b2Vec2 value) function, expected prototype:\nvoid b2BodyDef::position(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2BodyDef::position function");
		}
		b2Vec2 value=*value_ptr;

		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2BodyDef::position(b2Vec2). Got : '%s'",typeid(Luna< b2BodyDef >::check(L,1)).name());
		}
		self->position = value;

		return 0;
	}

	// void b2BodyDef::angle(float value)
	static int _bind_setAngle(lua_State *L) {
		if (!_lg_typecheck_setAngle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2BodyDef::angle(float value) function, expected prototype:\nvoid b2BodyDef::angle(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2BodyDef::angle(float). Got : '%s'",typeid(Luna< b2BodyDef >::check(L,1)).name());
		}
		self->angle = value;

		return 0;
	}

	// void b2BodyDef::linearVelocity(b2Vec2 value)
	static int _bind_setLinearVelocity(lua_State *L) {
		if (!_lg_typecheck_setLinearVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2BodyDef::linearVelocity(b2Vec2 value) function, expected prototype:\nvoid b2BodyDef::linearVelocity(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2BodyDef::linearVelocity function");
		}
		b2Vec2 value=*value_ptr;

		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2BodyDef::linearVelocity(b2Vec2). Got : '%s'",typeid(Luna< b2BodyDef >::check(L,1)).name());
		}
		self->linearVelocity = value;

		return 0;
	}

	// void b2BodyDef::angularVelocity(float value)
	static int _bind_setAngularVelocity(lua_State *L) {
		if (!_lg_typecheck_setAngularVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2BodyDef::angularVelocity(float value) function, expected prototype:\nvoid b2BodyDef::angularVelocity(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2BodyDef::angularVelocity(float). Got : '%s'",typeid(Luna< b2BodyDef >::check(L,1)).name());
		}
		self->angularVelocity = value;

		return 0;
	}

	// void b2BodyDef::linearDamping(float value)
	static int _bind_setLinearDamping(lua_State *L) {
		if (!_lg_typecheck_setLinearDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2BodyDef::linearDamping(float value) function, expected prototype:\nvoid b2BodyDef::linearDamping(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2BodyDef::linearDamping(float). Got : '%s'",typeid(Luna< b2BodyDef >::check(L,1)).name());
		}
		self->linearDamping = value;

		return 0;
	}

	// void b2BodyDef::angularDamping(float value)
	static int _bind_setAngularDamping(lua_State *L) {
		if (!_lg_typecheck_setAngularDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2BodyDef::angularDamping(float value) function, expected prototype:\nvoid b2BodyDef::angularDamping(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2BodyDef::angularDamping(float). Got : '%s'",typeid(Luna< b2BodyDef >::check(L,1)).name());
		}
		self->angularDamping = value;

		return 0;
	}

	// void b2BodyDef::allowSleep(bool value)
	static int _bind_setAllowSleep(lua_State *L) {
		if (!_lg_typecheck_setAllowSleep(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2BodyDef::allowSleep(bool value) function, expected prototype:\nvoid b2BodyDef::allowSleep(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2BodyDef::allowSleep(bool). Got : '%s'",typeid(Luna< b2BodyDef >::check(L,1)).name());
		}
		self->allowSleep = value;

		return 0;
	}

	// void b2BodyDef::awake(bool value)
	static int _bind_setAwake(lua_State *L) {
		if (!_lg_typecheck_setAwake(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2BodyDef::awake(bool value) function, expected prototype:\nvoid b2BodyDef::awake(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2BodyDef::awake(bool). Got : '%s'",typeid(Luna< b2BodyDef >::check(L,1)).name());
		}
		self->awake = value;

		return 0;
	}

	// void b2BodyDef::fixedRotation(bool value)
	static int _bind_setFixedRotation(lua_State *L) {
		if (!_lg_typecheck_setFixedRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2BodyDef::fixedRotation(bool value) function, expected prototype:\nvoid b2BodyDef::fixedRotation(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2BodyDef::fixedRotation(bool). Got : '%s'",typeid(Luna< b2BodyDef >::check(L,1)).name());
		}
		self->fixedRotation = value;

		return 0;
	}

	// void b2BodyDef::bullet(bool value)
	static int _bind_setBullet(lua_State *L) {
		if (!_lg_typecheck_setBullet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2BodyDef::bullet(bool value) function, expected prototype:\nvoid b2BodyDef::bullet(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2BodyDef::bullet(bool). Got : '%s'",typeid(Luna< b2BodyDef >::check(L,1)).name());
		}
		self->bullet = value;

		return 0;
	}

	// void b2BodyDef::active(bool value)
	static int _bind_setActive(lua_State *L) {
		if (!_lg_typecheck_setActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2BodyDef::active(bool value) function, expected prototype:\nvoid b2BodyDef::active(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2BodyDef::active(bool). Got : '%s'",typeid(Luna< b2BodyDef >::check(L,1)).name());
		}
		self->active = value;

		return 0;
	}

	// void b2BodyDef::userData(void * value)
	static int _bind_setUserData(lua_State *L) {
		if (!_lg_typecheck_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2BodyDef::userData(void * value) function, expected prototype:\nvoid b2BodyDef::userData(void * value)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,2));

		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2BodyDef::userData(void *). Got : '%s'",typeid(Luna< b2BodyDef >::check(L,1)).name());
		}
		self->userData = value;

		return 0;
	}

	// void b2BodyDef::gravityScale(float value)
	static int _bind_setGravityScale(lua_State *L) {
		if (!_lg_typecheck_setGravityScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2BodyDef::gravityScale(float value) function, expected prototype:\nvoid b2BodyDef::gravityScale(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2BodyDef* self=(Luna< b2BodyDef >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2BodyDef::gravityScale(float). Got : '%s'",typeid(Luna< b2BodyDef >::check(L,1)).name());
		}
		self->gravityScale = value;

		return 0;
	}


	// Operator binds:

};

b2BodyDef* LunaTraits< b2BodyDef >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2BodyDef::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< b2BodyDef >::_bind_dtor(b2BodyDef* obj) {
	delete obj;
}

const char LunaTraits< b2BodyDef >::className[] = "b2BodyDef";
const char LunaTraits< b2BodyDef >::fullName[] = "b2BodyDef";
const char LunaTraits< b2BodyDef >::moduleName[] = "box2d";
const char* LunaTraits< b2BodyDef >::parents[] = {0};
const int LunaTraits< b2BodyDef >::hash = 96360882;
const int LunaTraits< b2BodyDef >::uniqueIDs[] = {96360882,0};

luna_RegType LunaTraits< b2BodyDef >::methods[] = {
	{"getType", &luna_wrapper_b2BodyDef::_bind_getType},
	{"getPosition", &luna_wrapper_b2BodyDef::_bind_getPosition},
	{"getAngle", &luna_wrapper_b2BodyDef::_bind_getAngle},
	{"getLinearVelocity", &luna_wrapper_b2BodyDef::_bind_getLinearVelocity},
	{"getAngularVelocity", &luna_wrapper_b2BodyDef::_bind_getAngularVelocity},
	{"getLinearDamping", &luna_wrapper_b2BodyDef::_bind_getLinearDamping},
	{"getAngularDamping", &luna_wrapper_b2BodyDef::_bind_getAngularDamping},
	{"getAllowSleep", &luna_wrapper_b2BodyDef::_bind_getAllowSleep},
	{"getAwake", &luna_wrapper_b2BodyDef::_bind_getAwake},
	{"getFixedRotation", &luna_wrapper_b2BodyDef::_bind_getFixedRotation},
	{"getBullet", &luna_wrapper_b2BodyDef::_bind_getBullet},
	{"getActive", &luna_wrapper_b2BodyDef::_bind_getActive},
	{"getUserData", &luna_wrapper_b2BodyDef::_bind_getUserData},
	{"getGravityScale", &luna_wrapper_b2BodyDef::_bind_getGravityScale},
	{"setType", &luna_wrapper_b2BodyDef::_bind_setType},
	{"setPosition", &luna_wrapper_b2BodyDef::_bind_setPosition},
	{"setAngle", &luna_wrapper_b2BodyDef::_bind_setAngle},
	{"setLinearVelocity", &luna_wrapper_b2BodyDef::_bind_setLinearVelocity},
	{"setAngularVelocity", &luna_wrapper_b2BodyDef::_bind_setAngularVelocity},
	{"setLinearDamping", &luna_wrapper_b2BodyDef::_bind_setLinearDamping},
	{"setAngularDamping", &luna_wrapper_b2BodyDef::_bind_setAngularDamping},
	{"setAllowSleep", &luna_wrapper_b2BodyDef::_bind_setAllowSleep},
	{"setAwake", &luna_wrapper_b2BodyDef::_bind_setAwake},
	{"setFixedRotation", &luna_wrapper_b2BodyDef::_bind_setFixedRotation},
	{"setBullet", &luna_wrapper_b2BodyDef::_bind_setBullet},
	{"setActive", &luna_wrapper_b2BodyDef::_bind_setActive},
	{"setUserData", &luna_wrapper_b2BodyDef::_bind_setUserData},
	{"setGravityScale", &luna_wrapper_b2BodyDef::_bind_setGravityScale},
	{"dynCast", &luna_wrapper_b2BodyDef::_bind_dynCast},
	{"__eq", &luna_wrapper_b2BodyDef::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< b2BodyDef >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2BodyDef >::enumValues[] = {
	{0,0}
};


