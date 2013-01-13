#include <plug_common.h>

class luna_wrapper_osgGA_GUIEventAdapter_TouchData_TouchPoint {
public:
	typedef Luna< osgGA::GUIEventAdapter::TouchData::TouchPoint > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88052401) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgGA::GUIEventAdapter::TouchData::TouchPoint*)");
		}

		osgGA::GUIEventAdapter::TouchData::TouchPoint* rhs =(Luna< osgGA::GUIEventAdapter::TouchData::TouchPoint >::check(L,2));
		osgGA::GUIEventAdapter::TouchData::TouchPoint* self=(Luna< osgGA::GUIEventAdapter::TouchData::TouchPoint >::check(L,1));
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

		osgGA::GUIEventAdapter::TouchData::TouchPoint* self=(Luna< osgGA::GUIEventAdapter::TouchData::TouchPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgGA::GUIEventAdapter::TouchData::TouchPoint");
		
		return luna_dynamicCast(L,converters,"osgGA::GUIEventAdapter::TouchData::TouchPoint",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPhase(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTapCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPhase(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTapCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgGA::GUIEventAdapter::TouchData::TouchPoint::TouchPoint()
	static osgGA::GUIEventAdapter::TouchData::TouchPoint* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter::TouchData::TouchPoint::TouchPoint() function, expected prototype:\nosgGA::GUIEventAdapter::TouchData::TouchPoint::TouchPoint()\nClass arguments details:\n");
		}


		return new osgGA::GUIEventAdapter::TouchData::TouchPoint();
	}

	// osgGA::GUIEventAdapter::TouchData::TouchPoint::TouchPoint(unsigned int in_id, osgGA::GUIEventAdapter::TouchPhase in_phase, float in_x, float in_y, unsigned int in_tap_count)
	static osgGA::GUIEventAdapter::TouchData::TouchPoint* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter::TouchData::TouchPoint::TouchPoint(unsigned int in_id, osgGA::GUIEventAdapter::TouchPhase in_phase, float in_x, float in_y, unsigned int in_tap_count) function, expected prototype:\nosgGA::GUIEventAdapter::TouchData::TouchPoint::TouchPoint(unsigned int in_id, osgGA::GUIEventAdapter::TouchPhase in_phase, float in_x, float in_y, unsigned int in_tap_count)\nClass arguments details:\n");
		}

		unsigned int in_id=(unsigned int)lua_tointeger(L,1);
		osgGA::GUIEventAdapter::TouchPhase in_phase=(osgGA::GUIEventAdapter::TouchPhase)lua_tointeger(L,2);
		float in_x=(float)lua_tonumber(L,3);
		float in_y=(float)lua_tonumber(L,4);
		unsigned int in_tap_count=(unsigned int)lua_tointeger(L,5);

		return new osgGA::GUIEventAdapter::TouchData::TouchPoint(in_id, in_phase, in_x, in_y, in_tap_count);
	}

	// Overload binder for osgGA::GUIEventAdapter::TouchData::TouchPoint::TouchPoint
	static osgGA::GUIEventAdapter::TouchData::TouchPoint* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TouchPoint, cannot match any of the overloads for function TouchPoint:\n  TouchPoint()\n  TouchPoint(unsigned int, osgGA::GUIEventAdapter::TouchPhase, float, float, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// unsigned int osgGA::GUIEventAdapter::TouchData::TouchPoint::id()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgGA::GUIEventAdapter::TouchData::TouchPoint::id() function, expected prototype:\nunsigned int osgGA::GUIEventAdapter::TouchData::TouchPoint::id()\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter::TouchData::TouchPoint* self=(Luna< osgGA::GUIEventAdapter::TouchData::TouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgGA::GUIEventAdapter::TouchData::TouchPoint::id(). Got : '%s'",typeid(Luna< osgGA::GUIEventAdapter::TouchData::TouchPoint >::check(L,1)).name());
		}
		unsigned int lret = self->id;
		lua_pushnumber(L,lret);

		return 1;
	}

	// osgGA::GUIEventAdapter::TouchPhase osgGA::GUIEventAdapter::TouchData::TouchPoint::phase()
	static int _bind_getPhase(lua_State *L) {
		if (!_lg_typecheck_getPhase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter::TouchPhase osgGA::GUIEventAdapter::TouchData::TouchPoint::phase() function, expected prototype:\nosgGA::GUIEventAdapter::TouchPhase osgGA::GUIEventAdapter::TouchData::TouchPoint::phase()\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter::TouchData::TouchPoint* self=(Luna< osgGA::GUIEventAdapter::TouchData::TouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgGA::GUIEventAdapter::TouchPhase osgGA::GUIEventAdapter::TouchData::TouchPoint::phase(). Got : '%s'",typeid(Luna< osgGA::GUIEventAdapter::TouchData::TouchPoint >::check(L,1)).name());
		}
		osgGA::GUIEventAdapter::TouchPhase lret = self->phase;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgGA::GUIEventAdapter::TouchData::TouchPoint::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::TouchData::TouchPoint::x() function, expected prototype:\nfloat osgGA::GUIEventAdapter::TouchData::TouchPoint::x()\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter::TouchData::TouchPoint* self=(Luna< osgGA::GUIEventAdapter::TouchData::TouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::TouchData::TouchPoint::x(). Got : '%s'",typeid(Luna< osgGA::GUIEventAdapter::TouchData::TouchPoint >::check(L,1)).name());
		}
		float lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgGA::GUIEventAdapter::TouchData::TouchPoint::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::TouchData::TouchPoint::y() function, expected prototype:\nfloat osgGA::GUIEventAdapter::TouchData::TouchPoint::y()\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter::TouchData::TouchPoint* self=(Luna< osgGA::GUIEventAdapter::TouchData::TouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::TouchData::TouchPoint::y(). Got : '%s'",typeid(Luna< osgGA::GUIEventAdapter::TouchData::TouchPoint >::check(L,1)).name());
		}
		float lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgGA::GUIEventAdapter::TouchData::TouchPoint::tapCount()
	static int _bind_getTapCount(lua_State *L) {
		if (!_lg_typecheck_getTapCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgGA::GUIEventAdapter::TouchData::TouchPoint::tapCount() function, expected prototype:\nunsigned int osgGA::GUIEventAdapter::TouchData::TouchPoint::tapCount()\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter::TouchData::TouchPoint* self=(Luna< osgGA::GUIEventAdapter::TouchData::TouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgGA::GUIEventAdapter::TouchData::TouchPoint::tapCount(). Got : '%s'",typeid(Luna< osgGA::GUIEventAdapter::TouchData::TouchPoint >::check(L,1)).name());
		}
		unsigned int lret = self->tapCount;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::TouchData::TouchPoint::id(unsigned int value)
	static int _bind_setId(lua_State *L) {
		if (!_lg_typecheck_setId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::TouchData::TouchPoint::id(unsigned int value) function, expected prototype:\nvoid osgGA::GUIEventAdapter::TouchData::TouchPoint::id(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgGA::GUIEventAdapter::TouchData::TouchPoint* self=(Luna< osgGA::GUIEventAdapter::TouchData::TouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::TouchData::TouchPoint::id(unsigned int). Got : '%s'",typeid(Luna< osgGA::GUIEventAdapter::TouchData::TouchPoint >::check(L,1)).name());
		}
		self->id = value;

		return 0;
	}

	// void osgGA::GUIEventAdapter::TouchData::TouchPoint::phase(osgGA::GUIEventAdapter::TouchPhase value)
	static int _bind_setPhase(lua_State *L) {
		if (!_lg_typecheck_setPhase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::TouchData::TouchPoint::phase(osgGA::GUIEventAdapter::TouchPhase value) function, expected prototype:\nvoid osgGA::GUIEventAdapter::TouchData::TouchPoint::phase(osgGA::GUIEventAdapter::TouchPhase value)\nClass arguments details:\n");
		}

		osgGA::GUIEventAdapter::TouchPhase value=(osgGA::GUIEventAdapter::TouchPhase)lua_tointeger(L,2);

		osgGA::GUIEventAdapter::TouchData::TouchPoint* self=(Luna< osgGA::GUIEventAdapter::TouchData::TouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::TouchData::TouchPoint::phase(osgGA::GUIEventAdapter::TouchPhase). Got : '%s'",typeid(Luna< osgGA::GUIEventAdapter::TouchData::TouchPoint >::check(L,1)).name());
		}
		self->phase = value;

		return 0;
	}

	// void osgGA::GUIEventAdapter::TouchData::TouchPoint::x(float value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::TouchData::TouchPoint::x(float value) function, expected prototype:\nvoid osgGA::GUIEventAdapter::TouchData::TouchPoint::x(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		osgGA::GUIEventAdapter::TouchData::TouchPoint* self=(Luna< osgGA::GUIEventAdapter::TouchData::TouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::TouchData::TouchPoint::x(float). Got : '%s'",typeid(Luna< osgGA::GUIEventAdapter::TouchData::TouchPoint >::check(L,1)).name());
		}
		self->x = value;

		return 0;
	}

	// void osgGA::GUIEventAdapter::TouchData::TouchPoint::y(float value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::TouchData::TouchPoint::y(float value) function, expected prototype:\nvoid osgGA::GUIEventAdapter::TouchData::TouchPoint::y(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		osgGA::GUIEventAdapter::TouchData::TouchPoint* self=(Luna< osgGA::GUIEventAdapter::TouchData::TouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::TouchData::TouchPoint::y(float). Got : '%s'",typeid(Luna< osgGA::GUIEventAdapter::TouchData::TouchPoint >::check(L,1)).name());
		}
		self->y = value;

		return 0;
	}

	// void osgGA::GUIEventAdapter::TouchData::TouchPoint::tapCount(unsigned int value)
	static int _bind_setTapCount(lua_State *L) {
		if (!_lg_typecheck_setTapCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::TouchData::TouchPoint::tapCount(unsigned int value) function, expected prototype:\nvoid osgGA::GUIEventAdapter::TouchData::TouchPoint::tapCount(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgGA::GUIEventAdapter::TouchData::TouchPoint* self=(Luna< osgGA::GUIEventAdapter::TouchData::TouchPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::TouchData::TouchPoint::tapCount(unsigned int). Got : '%s'",typeid(Luna< osgGA::GUIEventAdapter::TouchData::TouchPoint >::check(L,1)).name());
		}
		self->tapCount = value;

		return 0;
	}


	// Operator binds:

};

osgGA::GUIEventAdapter::TouchData::TouchPoint* LunaTraits< osgGA::GUIEventAdapter::TouchData::TouchPoint >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_GUIEventAdapter_TouchData_TouchPoint::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgGA::GUIEventAdapter::TouchData::TouchPoint >::_bind_dtor(osgGA::GUIEventAdapter::TouchData::TouchPoint* obj) {
	delete obj;
}

const char LunaTraits< osgGA::GUIEventAdapter::TouchData::TouchPoint >::className[] = "GUIEventAdapter_TouchData_TouchPoint";
const char LunaTraits< osgGA::GUIEventAdapter::TouchData::TouchPoint >::fullName[] = "osgGA::GUIEventAdapter::TouchData::TouchPoint";
const char LunaTraits< osgGA::GUIEventAdapter::TouchData::TouchPoint >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::GUIEventAdapter::TouchData::TouchPoint >::parents[] = {0};
const int LunaTraits< osgGA::GUIEventAdapter::TouchData::TouchPoint >::hash = 88052401;
const int LunaTraits< osgGA::GUIEventAdapter::TouchData::TouchPoint >::uniqueIDs[] = {88052401,0};

luna_RegType LunaTraits< osgGA::GUIEventAdapter::TouchData::TouchPoint >::methods[] = {
	{"getId", &luna_wrapper_osgGA_GUIEventAdapter_TouchData_TouchPoint::_bind_getId},
	{"getPhase", &luna_wrapper_osgGA_GUIEventAdapter_TouchData_TouchPoint::_bind_getPhase},
	{"getX", &luna_wrapper_osgGA_GUIEventAdapter_TouchData_TouchPoint::_bind_getX},
	{"getY", &luna_wrapper_osgGA_GUIEventAdapter_TouchData_TouchPoint::_bind_getY},
	{"getTapCount", &luna_wrapper_osgGA_GUIEventAdapter_TouchData_TouchPoint::_bind_getTapCount},
	{"setId", &luna_wrapper_osgGA_GUIEventAdapter_TouchData_TouchPoint::_bind_setId},
	{"setPhase", &luna_wrapper_osgGA_GUIEventAdapter_TouchData_TouchPoint::_bind_setPhase},
	{"setX", &luna_wrapper_osgGA_GUIEventAdapter_TouchData_TouchPoint::_bind_setX},
	{"setY", &luna_wrapper_osgGA_GUIEventAdapter_TouchData_TouchPoint::_bind_setY},
	{"setTapCount", &luna_wrapper_osgGA_GUIEventAdapter_TouchData_TouchPoint::_bind_setTapCount},
	{"dynCast", &luna_wrapper_osgGA_GUIEventAdapter_TouchData_TouchPoint::_bind_dynCast},
	{"__eq", &luna_wrapper_osgGA_GUIEventAdapter_TouchData_TouchPoint::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::GUIEventAdapter::TouchData::TouchPoint >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::GUIEventAdapter::TouchData::TouchPoint >::enumValues[] = {
	{0,0}
};


