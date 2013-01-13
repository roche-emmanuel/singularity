#include <plug_common.h>

class luna_wrapper_Awesomium_WebTouchPoint {
public:
	typedef Luna< Awesomium::WebTouchPoint > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3335349) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebTouchPoint*)");
		}

		Awesomium::WebTouchPoint* rhs =(Luna< Awesomium::WebTouchPoint >::check(L,2));
		Awesomium::WebTouchPoint* self=(Luna< Awesomium::WebTouchPoint >::check(L,1));
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

		Awesomium::WebTouchPoint* self=(Luna< Awesomium::WebTouchPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebTouchPoint");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebTouchPoint",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScreen_position_x(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScreen_position_y(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPosition_x(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPosition_y(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRadius_x(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRadius_y(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRotation_angle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getForce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScreen_position_x(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScreen_position_y(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPosition_x(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPosition_y(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRadius_x(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRadius_y(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRotation_angle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setForce(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// Awesomium::WebTouchPoint::WebTouchPoint()
	static Awesomium::WebTouchPoint* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebTouchPoint::WebTouchPoint() function, expected prototype:\nAwesomium::WebTouchPoint::WebTouchPoint()\nClass arguments details:\n");
		}


		return new Awesomium::WebTouchPoint();
	}


	// Function binds:
	// int Awesomium::WebTouchPoint::id()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::WebTouchPoint::id() function, expected prototype:\nint Awesomium::WebTouchPoint::id()\nClass arguments details:\n");
		}


		Awesomium::WebTouchPoint* self=(Luna< Awesomium::WebTouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::WebTouchPoint::id(). Got : '%s'",typeid(Luna< Awesomium::WebTouchPoint >::check(L,1)).name());
		}
		int lret = self->id;
		lua_pushnumber(L,lret);

		return 1;
	}

	// Awesomium::WebTouchPointState Awesomium::WebTouchPoint::state()
	static int _bind_getState(lua_State *L) {
		if (!_lg_typecheck_getState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebTouchPointState Awesomium::WebTouchPoint::state() function, expected prototype:\nAwesomium::WebTouchPointState Awesomium::WebTouchPoint::state()\nClass arguments details:\n");
		}


		Awesomium::WebTouchPoint* self=(Luna< Awesomium::WebTouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebTouchPointState Awesomium::WebTouchPoint::state(). Got : '%s'",typeid(Luna< Awesomium::WebTouchPoint >::check(L,1)).name());
		}
		Awesomium::WebTouchPointState lret = self->state;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int Awesomium::WebTouchPoint::screen_position_x()
	static int _bind_getScreen_position_x(lua_State *L) {
		if (!_lg_typecheck_getScreen_position_x(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::WebTouchPoint::screen_position_x() function, expected prototype:\nint Awesomium::WebTouchPoint::screen_position_x()\nClass arguments details:\n");
		}


		Awesomium::WebTouchPoint* self=(Luna< Awesomium::WebTouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::WebTouchPoint::screen_position_x(). Got : '%s'",typeid(Luna< Awesomium::WebTouchPoint >::check(L,1)).name());
		}
		int lret = self->screen_position_x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int Awesomium::WebTouchPoint::screen_position_y()
	static int _bind_getScreen_position_y(lua_State *L) {
		if (!_lg_typecheck_getScreen_position_y(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::WebTouchPoint::screen_position_y() function, expected prototype:\nint Awesomium::WebTouchPoint::screen_position_y()\nClass arguments details:\n");
		}


		Awesomium::WebTouchPoint* self=(Luna< Awesomium::WebTouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::WebTouchPoint::screen_position_y(). Got : '%s'",typeid(Luna< Awesomium::WebTouchPoint >::check(L,1)).name());
		}
		int lret = self->screen_position_y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int Awesomium::WebTouchPoint::position_x()
	static int _bind_getPosition_x(lua_State *L) {
		if (!_lg_typecheck_getPosition_x(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::WebTouchPoint::position_x() function, expected prototype:\nint Awesomium::WebTouchPoint::position_x()\nClass arguments details:\n");
		}


		Awesomium::WebTouchPoint* self=(Luna< Awesomium::WebTouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::WebTouchPoint::position_x(). Got : '%s'",typeid(Luna< Awesomium::WebTouchPoint >::check(L,1)).name());
		}
		int lret = self->position_x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int Awesomium::WebTouchPoint::position_y()
	static int _bind_getPosition_y(lua_State *L) {
		if (!_lg_typecheck_getPosition_y(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::WebTouchPoint::position_y() function, expected prototype:\nint Awesomium::WebTouchPoint::position_y()\nClass arguments details:\n");
		}


		Awesomium::WebTouchPoint* self=(Luna< Awesomium::WebTouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::WebTouchPoint::position_y(). Got : '%s'",typeid(Luna< Awesomium::WebTouchPoint >::check(L,1)).name());
		}
		int lret = self->position_y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int Awesomium::WebTouchPoint::radius_x()
	static int _bind_getRadius_x(lua_State *L) {
		if (!_lg_typecheck_getRadius_x(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::WebTouchPoint::radius_x() function, expected prototype:\nint Awesomium::WebTouchPoint::radius_x()\nClass arguments details:\n");
		}


		Awesomium::WebTouchPoint* self=(Luna< Awesomium::WebTouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::WebTouchPoint::radius_x(). Got : '%s'",typeid(Luna< Awesomium::WebTouchPoint >::check(L,1)).name());
		}
		int lret = self->radius_x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int Awesomium::WebTouchPoint::radius_y()
	static int _bind_getRadius_y(lua_State *L) {
		if (!_lg_typecheck_getRadius_y(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::WebTouchPoint::radius_y() function, expected prototype:\nint Awesomium::WebTouchPoint::radius_y()\nClass arguments details:\n");
		}


		Awesomium::WebTouchPoint* self=(Luna< Awesomium::WebTouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::WebTouchPoint::radius_y(). Got : '%s'",typeid(Luna< Awesomium::WebTouchPoint >::check(L,1)).name());
		}
		int lret = self->radius_y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float Awesomium::WebTouchPoint::rotation_angle()
	static int _bind_getRotation_angle(lua_State *L) {
		if (!_lg_typecheck_getRotation_angle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float Awesomium::WebTouchPoint::rotation_angle() function, expected prototype:\nfloat Awesomium::WebTouchPoint::rotation_angle()\nClass arguments details:\n");
		}


		Awesomium::WebTouchPoint* self=(Luna< Awesomium::WebTouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float Awesomium::WebTouchPoint::rotation_angle(). Got : '%s'",typeid(Luna< Awesomium::WebTouchPoint >::check(L,1)).name());
		}
		float lret = self->rotation_angle;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float Awesomium::WebTouchPoint::force()
	static int _bind_getForce(lua_State *L) {
		if (!_lg_typecheck_getForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float Awesomium::WebTouchPoint::force() function, expected prototype:\nfloat Awesomium::WebTouchPoint::force()\nClass arguments details:\n");
		}


		Awesomium::WebTouchPoint* self=(Luna< Awesomium::WebTouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float Awesomium::WebTouchPoint::force(). Got : '%s'",typeid(Luna< Awesomium::WebTouchPoint >::check(L,1)).name());
		}
		float lret = self->force;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void Awesomium::WebTouchPoint::id(int value)
	static int _bind_setId(lua_State *L) {
		if (!_lg_typecheck_setId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebTouchPoint::id(int value) function, expected prototype:\nvoid Awesomium::WebTouchPoint::id(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		Awesomium::WebTouchPoint* self=(Luna< Awesomium::WebTouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebTouchPoint::id(int). Got : '%s'",typeid(Luna< Awesomium::WebTouchPoint >::check(L,1)).name());
		}
		self->id = value;

		return 0;
	}

	// void Awesomium::WebTouchPoint::state(Awesomium::WebTouchPointState value)
	static int _bind_setState(lua_State *L) {
		if (!_lg_typecheck_setState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebTouchPoint::state(Awesomium::WebTouchPointState value) function, expected prototype:\nvoid Awesomium::WebTouchPoint::state(Awesomium::WebTouchPointState value)\nClass arguments details:\n");
		}

		Awesomium::WebTouchPointState value=(Awesomium::WebTouchPointState)lua_tointeger(L,2);

		Awesomium::WebTouchPoint* self=(Luna< Awesomium::WebTouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebTouchPoint::state(Awesomium::WebTouchPointState). Got : '%s'",typeid(Luna< Awesomium::WebTouchPoint >::check(L,1)).name());
		}
		self->state = value;

		return 0;
	}

	// void Awesomium::WebTouchPoint::screen_position_x(int value)
	static int _bind_setScreen_position_x(lua_State *L) {
		if (!_lg_typecheck_setScreen_position_x(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebTouchPoint::screen_position_x(int value) function, expected prototype:\nvoid Awesomium::WebTouchPoint::screen_position_x(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		Awesomium::WebTouchPoint* self=(Luna< Awesomium::WebTouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebTouchPoint::screen_position_x(int). Got : '%s'",typeid(Luna< Awesomium::WebTouchPoint >::check(L,1)).name());
		}
		self->screen_position_x = value;

		return 0;
	}

	// void Awesomium::WebTouchPoint::screen_position_y(int value)
	static int _bind_setScreen_position_y(lua_State *L) {
		if (!_lg_typecheck_setScreen_position_y(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebTouchPoint::screen_position_y(int value) function, expected prototype:\nvoid Awesomium::WebTouchPoint::screen_position_y(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		Awesomium::WebTouchPoint* self=(Luna< Awesomium::WebTouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebTouchPoint::screen_position_y(int). Got : '%s'",typeid(Luna< Awesomium::WebTouchPoint >::check(L,1)).name());
		}
		self->screen_position_y = value;

		return 0;
	}

	// void Awesomium::WebTouchPoint::position_x(int value)
	static int _bind_setPosition_x(lua_State *L) {
		if (!_lg_typecheck_setPosition_x(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebTouchPoint::position_x(int value) function, expected prototype:\nvoid Awesomium::WebTouchPoint::position_x(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		Awesomium::WebTouchPoint* self=(Luna< Awesomium::WebTouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebTouchPoint::position_x(int). Got : '%s'",typeid(Luna< Awesomium::WebTouchPoint >::check(L,1)).name());
		}
		self->position_x = value;

		return 0;
	}

	// void Awesomium::WebTouchPoint::position_y(int value)
	static int _bind_setPosition_y(lua_State *L) {
		if (!_lg_typecheck_setPosition_y(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebTouchPoint::position_y(int value) function, expected prototype:\nvoid Awesomium::WebTouchPoint::position_y(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		Awesomium::WebTouchPoint* self=(Luna< Awesomium::WebTouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebTouchPoint::position_y(int). Got : '%s'",typeid(Luna< Awesomium::WebTouchPoint >::check(L,1)).name());
		}
		self->position_y = value;

		return 0;
	}

	// void Awesomium::WebTouchPoint::radius_x(int value)
	static int _bind_setRadius_x(lua_State *L) {
		if (!_lg_typecheck_setRadius_x(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebTouchPoint::radius_x(int value) function, expected prototype:\nvoid Awesomium::WebTouchPoint::radius_x(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		Awesomium::WebTouchPoint* self=(Luna< Awesomium::WebTouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebTouchPoint::radius_x(int). Got : '%s'",typeid(Luna< Awesomium::WebTouchPoint >::check(L,1)).name());
		}
		self->radius_x = value;

		return 0;
	}

	// void Awesomium::WebTouchPoint::radius_y(int value)
	static int _bind_setRadius_y(lua_State *L) {
		if (!_lg_typecheck_setRadius_y(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebTouchPoint::radius_y(int value) function, expected prototype:\nvoid Awesomium::WebTouchPoint::radius_y(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		Awesomium::WebTouchPoint* self=(Luna< Awesomium::WebTouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebTouchPoint::radius_y(int). Got : '%s'",typeid(Luna< Awesomium::WebTouchPoint >::check(L,1)).name());
		}
		self->radius_y = value;

		return 0;
	}

	// void Awesomium::WebTouchPoint::rotation_angle(float value)
	static int _bind_setRotation_angle(lua_State *L) {
		if (!_lg_typecheck_setRotation_angle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebTouchPoint::rotation_angle(float value) function, expected prototype:\nvoid Awesomium::WebTouchPoint::rotation_angle(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		Awesomium::WebTouchPoint* self=(Luna< Awesomium::WebTouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebTouchPoint::rotation_angle(float). Got : '%s'",typeid(Luna< Awesomium::WebTouchPoint >::check(L,1)).name());
		}
		self->rotation_angle = value;

		return 0;
	}

	// void Awesomium::WebTouchPoint::force(float value)
	static int _bind_setForce(lua_State *L) {
		if (!_lg_typecheck_setForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebTouchPoint::force(float value) function, expected prototype:\nvoid Awesomium::WebTouchPoint::force(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		Awesomium::WebTouchPoint* self=(Luna< Awesomium::WebTouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebTouchPoint::force(float). Got : '%s'",typeid(Luna< Awesomium::WebTouchPoint >::check(L,1)).name());
		}
		self->force = value;

		return 0;
	}


	// Operator binds:

};

Awesomium::WebTouchPoint* LunaTraits< Awesomium::WebTouchPoint >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_WebTouchPoint::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< Awesomium::WebTouchPoint >::_bind_dtor(Awesomium::WebTouchPoint* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::WebTouchPoint >::className[] = "WebTouchPoint";
const char LunaTraits< Awesomium::WebTouchPoint >::fullName[] = "Awesomium::WebTouchPoint";
const char LunaTraits< Awesomium::WebTouchPoint >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebTouchPoint >::parents[] = {0};
const int LunaTraits< Awesomium::WebTouchPoint >::hash = 3335349;
const int LunaTraits< Awesomium::WebTouchPoint >::uniqueIDs[] = {3335349,0};

luna_RegType LunaTraits< Awesomium::WebTouchPoint >::methods[] = {
	{"getId", &luna_wrapper_Awesomium_WebTouchPoint::_bind_getId},
	{"getState", &luna_wrapper_Awesomium_WebTouchPoint::_bind_getState},
	{"getScreen_position_x", &luna_wrapper_Awesomium_WebTouchPoint::_bind_getScreen_position_x},
	{"getScreen_position_y", &luna_wrapper_Awesomium_WebTouchPoint::_bind_getScreen_position_y},
	{"getPosition_x", &luna_wrapper_Awesomium_WebTouchPoint::_bind_getPosition_x},
	{"getPosition_y", &luna_wrapper_Awesomium_WebTouchPoint::_bind_getPosition_y},
	{"getRadius_x", &luna_wrapper_Awesomium_WebTouchPoint::_bind_getRadius_x},
	{"getRadius_y", &luna_wrapper_Awesomium_WebTouchPoint::_bind_getRadius_y},
	{"getRotation_angle", &luna_wrapper_Awesomium_WebTouchPoint::_bind_getRotation_angle},
	{"getForce", &luna_wrapper_Awesomium_WebTouchPoint::_bind_getForce},
	{"setId", &luna_wrapper_Awesomium_WebTouchPoint::_bind_setId},
	{"setState", &luna_wrapper_Awesomium_WebTouchPoint::_bind_setState},
	{"setScreen_position_x", &luna_wrapper_Awesomium_WebTouchPoint::_bind_setScreen_position_x},
	{"setScreen_position_y", &luna_wrapper_Awesomium_WebTouchPoint::_bind_setScreen_position_y},
	{"setPosition_x", &luna_wrapper_Awesomium_WebTouchPoint::_bind_setPosition_x},
	{"setPosition_y", &luna_wrapper_Awesomium_WebTouchPoint::_bind_setPosition_y},
	{"setRadius_x", &luna_wrapper_Awesomium_WebTouchPoint::_bind_setRadius_x},
	{"setRadius_y", &luna_wrapper_Awesomium_WebTouchPoint::_bind_setRadius_y},
	{"setRotation_angle", &luna_wrapper_Awesomium_WebTouchPoint::_bind_setRotation_angle},
	{"setForce", &luna_wrapper_Awesomium_WebTouchPoint::_bind_setForce},
	{"dynCast", &luna_wrapper_Awesomium_WebTouchPoint::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebTouchPoint::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebTouchPoint >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebTouchPoint >::enumValues[] = {
	{0,0}
};


