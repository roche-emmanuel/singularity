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

	// Operator binds:

};

osg::GraphicsContext::ScreenSettings* LunaTraits< osg::GraphicsContext::ScreenSettings >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_GraphicsContext_ScreenSettings::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::GraphicsContext::ScreenSettings >::_bind_dtor(osg::GraphicsContext::ScreenSettings* obj) {
	delete obj;
}

const char LunaTraits< osg::GraphicsContext::ScreenSettings >::className[] = "ScreenSettings";
const char LunaTraits< osg::GraphicsContext::ScreenSettings >::fullName[] = "osg::GraphicsContext::ScreenSettings";
const char LunaTraits< osg::GraphicsContext::ScreenSettings >::moduleName[] = "osg";
const char* LunaTraits< osg::GraphicsContext::ScreenSettings >::parents[] = {0};
const int LunaTraits< osg::GraphicsContext::ScreenSettings >::hash = 15827252;
const int LunaTraits< osg::GraphicsContext::ScreenSettings >::uniqueIDs[] = {15827252,0};

luna_RegType LunaTraits< osg::GraphicsContext::ScreenSettings >::methods[] = {
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


