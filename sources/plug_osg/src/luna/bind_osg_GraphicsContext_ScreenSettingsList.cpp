#include <plug_common.h>

class luna_wrapper_osg_GraphicsContext_ScreenSettingsList {
public:
	typedef Luna< osg::GraphicsContext::ScreenSettingsList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,96527715) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::GraphicsContext::ScreenSettingsList*)");
		}

		osg::GraphicsContext::ScreenSettingsList* rhs =(Luna< osg::GraphicsContext::ScreenSettingsList >::check(L,2));
		osg::GraphicsContext::ScreenSettingsList* self=(Luna< osg::GraphicsContext::ScreenSettingsList >::check(L,1));
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

		osg::GraphicsContext::ScreenSettingsList* self=(Luna< osg::GraphicsContext::ScreenSettingsList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::GraphicsContext::ScreenSettingsList");
		
		return luna_dynamicCast(L,converters,"osg::GraphicsContext::ScreenSettingsList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::GraphicsContext::ScreenSettingsList* LunaTraits< osg::GraphicsContext::ScreenSettingsList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::GraphicsContext::ScreenSettingsList >::_bind_dtor(osg::GraphicsContext::ScreenSettingsList* obj) {
	delete obj;
}

const char LunaTraits< osg::GraphicsContext::ScreenSettingsList >::className[] = "ScreenSettingsList";
const char LunaTraits< osg::GraphicsContext::ScreenSettingsList >::fullName[] = "osg::GraphicsContext::ScreenSettingsList";
const char LunaTraits< osg::GraphicsContext::ScreenSettingsList >::moduleName[] = "osg";
const char* LunaTraits< osg::GraphicsContext::ScreenSettingsList >::parents[] = {0};
const int LunaTraits< osg::GraphicsContext::ScreenSettingsList >::hash = 96527715;
const int LunaTraits< osg::GraphicsContext::ScreenSettingsList >::uniqueIDs[] = {96527715,0};

luna_RegType LunaTraits< osg::GraphicsContext::ScreenSettingsList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_GraphicsContext_ScreenSettingsList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_GraphicsContext_ScreenSettingsList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GraphicsContext::ScreenSettingsList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GraphicsContext::ScreenSettingsList >::enumValues[] = {
	{0,0}
};


