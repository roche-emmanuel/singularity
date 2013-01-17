#include <plug_common.h>

class luna_wrapper_osg_GraphicsContext_ScreenSettings {
public:
	typedef Luna< osg::GraphicsContext::ScreenSettings > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,15827252) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::GraphicsContext::ScreenSettings*)");
		}

		osg::GraphicsContext::ScreenSettings* rhs =(Luna< osg::GraphicsContext::ScreenSettings >::check(L,2));
		osg::GraphicsContext::ScreenSettings* self=(Luna< osg::GraphicsContext::ScreenSettings >::check(L,1));
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

		osg::GraphicsContext::ScreenSettings* self=(Luna< osg::GraphicsContext::ScreenSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::GraphicsContext::ScreenSettings");
		
		return luna_dynamicCast(L,converters,"osg::GraphicsContext::ScreenSettings",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRefreshRate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getColorDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRefreshRate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setColorDepth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::GraphicsContext::ScreenSettings::ScreenSettings()
	static osg::GraphicsContext::ScreenSettings* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GraphicsContext::ScreenSettings::ScreenSettings() function, expected prototype:\nosg::GraphicsContext::ScreenSettings::ScreenSettings()\nClass arguments details:\n");
		}


		return new osg::GraphicsContext::ScreenSettings();
	}

	// osg::GraphicsContext::ScreenSettings::ScreenSettings(int width, int height, double refreshRate = 0, unsigned int colorDepth = 0)
	static osg::GraphicsContext::ScreenSettings* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GraphicsContext::ScreenSettings::ScreenSettings(int width, int height, double refreshRate = 0, unsigned int colorDepth = 0) function, expected prototype:\nosg::GraphicsContext::ScreenSettings::ScreenSettings(int width, int height, double refreshRate = 0, unsigned int colorDepth = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,1);
		int height=(int)lua_tointeger(L,2);
		double refreshRate=luatop>2 ? (double)lua_tonumber(L,3) : 0;
		unsigned int colorDepth=luatop>3 ? (unsigned int)lua_tointeger(L,4) : 0;

		return new osg::GraphicsContext::ScreenSettings(width, height, refreshRate, colorDepth);
	}

	// Overload binder for osg::GraphicsContext::ScreenSettings::ScreenSettings
	static osg::GraphicsContext::ScreenSettings* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ScreenSettings, cannot match any of the overloads for function ScreenSettings:\n  ScreenSettings()\n  ScreenSettings(int, int, double, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// int osg::GraphicsContext::ScreenSettings::width()
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::GraphicsContext::ScreenSettings::width() function, expected prototype:\nint osg::GraphicsContext::ScreenSettings::width()\nClass arguments details:\n");
		}


		osg::GraphicsContext::ScreenSettings* self=(Luna< osg::GraphicsContext::ScreenSettings >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::GraphicsContext::ScreenSettings::width(). Got : '%s'",typeid(Luna< osg::GraphicsContext::ScreenSettings >::check(L,1)).name());
		}
		int lret = self->width;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::GraphicsContext::ScreenSettings::height()
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::GraphicsContext::ScreenSettings::height() function, expected prototype:\nint osg::GraphicsContext::ScreenSettings::height()\nClass arguments details:\n");
		}


		osg::GraphicsContext::ScreenSettings* self=(Luna< osg::GraphicsContext::ScreenSettings >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::GraphicsContext::ScreenSettings::height(). Got : '%s'",typeid(Luna< osg::GraphicsContext::ScreenSettings >::check(L,1)).name());
		}
		int lret = self->height;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::GraphicsContext::ScreenSettings::refreshRate()
	static int _bind_getRefreshRate(lua_State *L) {
		if (!_lg_typecheck_getRefreshRate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::GraphicsContext::ScreenSettings::refreshRate() function, expected prototype:\ndouble osg::GraphicsContext::ScreenSettings::refreshRate()\nClass arguments details:\n");
		}


		osg::GraphicsContext::ScreenSettings* self=(Luna< osg::GraphicsContext::ScreenSettings >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::GraphicsContext::ScreenSettings::refreshRate(). Got : '%s'",typeid(Luna< osg::GraphicsContext::ScreenSettings >::check(L,1)).name());
		}
		double lret = self->refreshRate;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::GraphicsContext::ScreenSettings::colorDepth()
	static int _bind_getColorDepth(lua_State *L) {
		if (!_lg_typecheck_getColorDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::GraphicsContext::ScreenSettings::colorDepth() function, expected prototype:\nunsigned int osg::GraphicsContext::ScreenSettings::colorDepth()\nClass arguments details:\n");
		}


		osg::GraphicsContext::ScreenSettings* self=(Luna< osg::GraphicsContext::ScreenSettings >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::GraphicsContext::ScreenSettings::colorDepth(). Got : '%s'",typeid(Luna< osg::GraphicsContext::ScreenSettings >::check(L,1)).name());
		}
		unsigned int lret = self->colorDepth;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::GraphicsContext::ScreenSettings::width(int value)
	static int _bind_setWidth(lua_State *L) {
		if (!_lg_typecheck_setWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::ScreenSettings::width(int value) function, expected prototype:\nvoid osg::GraphicsContext::ScreenSettings::width(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osg::GraphicsContext::ScreenSettings* self=(Luna< osg::GraphicsContext::ScreenSettings >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::ScreenSettings::width(int). Got : '%s'",typeid(Luna< osg::GraphicsContext::ScreenSettings >::check(L,1)).name());
		}
		self->width = value;

		return 0;
	}

	// void osg::GraphicsContext::ScreenSettings::height(int value)
	static int _bind_setHeight(lua_State *L) {
		if (!_lg_typecheck_setHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::ScreenSettings::height(int value) function, expected prototype:\nvoid osg::GraphicsContext::ScreenSettings::height(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osg::GraphicsContext::ScreenSettings* self=(Luna< osg::GraphicsContext::ScreenSettings >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::ScreenSettings::height(int). Got : '%s'",typeid(Luna< osg::GraphicsContext::ScreenSettings >::check(L,1)).name());
		}
		self->height = value;

		return 0;
	}

	// void osg::GraphicsContext::ScreenSettings::refreshRate(double value)
	static int _bind_setRefreshRate(lua_State *L) {
		if (!_lg_typecheck_setRefreshRate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::ScreenSettings::refreshRate(double value) function, expected prototype:\nvoid osg::GraphicsContext::ScreenSettings::refreshRate(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		osg::GraphicsContext::ScreenSettings* self=(Luna< osg::GraphicsContext::ScreenSettings >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::ScreenSettings::refreshRate(double). Got : '%s'",typeid(Luna< osg::GraphicsContext::ScreenSettings >::check(L,1)).name());
		}
		self->refreshRate = value;

		return 0;
	}

	// void osg::GraphicsContext::ScreenSettings::colorDepth(unsigned int value)
	static int _bind_setColorDepth(lua_State *L) {
		if (!_lg_typecheck_setColorDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::ScreenSettings::colorDepth(unsigned int value) function, expected prototype:\nvoid osg::GraphicsContext::ScreenSettings::colorDepth(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::GraphicsContext::ScreenSettings* self=(Luna< osg::GraphicsContext::ScreenSettings >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::ScreenSettings::colorDepth(unsigned int). Got : '%s'",typeid(Luna< osg::GraphicsContext::ScreenSettings >::check(L,1)).name());
		}
		self->colorDepth = value;

		return 0;
	}


	// Operator binds:

};

osg::GraphicsContext::ScreenSettings* LunaTraits< osg::GraphicsContext::ScreenSettings >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_GraphicsContext_ScreenSettings::_bind_ctor(L);
}

void LunaTraits< osg::GraphicsContext::ScreenSettings >::_bind_dtor(osg::GraphicsContext::ScreenSettings* obj) {
	delete obj;
}

const char LunaTraits< osg::GraphicsContext::ScreenSettings >::className[] = "GraphicsContext_ScreenSettings";
const char LunaTraits< osg::GraphicsContext::ScreenSettings >::fullName[] = "osg::GraphicsContext::ScreenSettings";
const char LunaTraits< osg::GraphicsContext::ScreenSettings >::moduleName[] = "osg";
const char* LunaTraits< osg::GraphicsContext::ScreenSettings >::parents[] = {0};
const int LunaTraits< osg::GraphicsContext::ScreenSettings >::hash = 15827252;
const int LunaTraits< osg::GraphicsContext::ScreenSettings >::uniqueIDs[] = {15827252,0};

luna_RegType LunaTraits< osg::GraphicsContext::ScreenSettings >::methods[] = {
	{"getWidth", &luna_wrapper_osg_GraphicsContext_ScreenSettings::_bind_getWidth},
	{"getHeight", &luna_wrapper_osg_GraphicsContext_ScreenSettings::_bind_getHeight},
	{"getRefreshRate", &luna_wrapper_osg_GraphicsContext_ScreenSettings::_bind_getRefreshRate},
	{"getColorDepth", &luna_wrapper_osg_GraphicsContext_ScreenSettings::_bind_getColorDepth},
	{"setWidth", &luna_wrapper_osg_GraphicsContext_ScreenSettings::_bind_setWidth},
	{"setHeight", &luna_wrapper_osg_GraphicsContext_ScreenSettings::_bind_setHeight},
	{"setRefreshRate", &luna_wrapper_osg_GraphicsContext_ScreenSettings::_bind_setRefreshRate},
	{"setColorDepth", &luna_wrapper_osg_GraphicsContext_ScreenSettings::_bind_setColorDepth},
	{"dynCast", &luna_wrapper_osg_GraphicsContext_ScreenSettings::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_GraphicsContext_ScreenSettings::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GraphicsContext::ScreenSettings >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GraphicsContext::ScreenSettings >::enumValues[] = {
	{0,0}
};


