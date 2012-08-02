#include <plug_common.h>

class luna_wrapper_osg_GraphicsContext_ScreenIdentifier {
public:
	typedef Luna< osg::GraphicsContext::ScreenIdentifier > luna_t;

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

		osg::GraphicsContext::ScreenIdentifier* self=(Luna< osg::GraphicsContext::ScreenIdentifier >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::GraphicsContext::ScreenIdentifier");
		
		return luna_dynamicCast(L,converters,"osg::GraphicsContext::ScreenIdentifier",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_displayName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readDISPLAY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setScreenIdentifier(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUndefinedScreenDetailsToDefaultScreen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::GraphicsContext::ScreenIdentifier::ScreenIdentifier()
	static osg::GraphicsContext::ScreenIdentifier* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GraphicsContext::ScreenIdentifier::ScreenIdentifier() function, expected prototype:\nosg::GraphicsContext::ScreenIdentifier::ScreenIdentifier()\nClass arguments details:\n");
		}


		return new osg::GraphicsContext::ScreenIdentifier();
	}

	// osg::GraphicsContext::ScreenIdentifier::ScreenIdentifier(int in_screenNum)
	static osg::GraphicsContext::ScreenIdentifier* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GraphicsContext::ScreenIdentifier::ScreenIdentifier(int in_screenNum) function, expected prototype:\nosg::GraphicsContext::ScreenIdentifier::ScreenIdentifier(int in_screenNum)\nClass arguments details:\n");
		}

		int in_screenNum=(int)lua_tointeger(L,1);

		return new osg::GraphicsContext::ScreenIdentifier(in_screenNum);
	}

	// osg::GraphicsContext::ScreenIdentifier::ScreenIdentifier(const std::string & in_hostName, int in_displayNum, int in_screenNum)
	static osg::GraphicsContext::ScreenIdentifier* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GraphicsContext::ScreenIdentifier::ScreenIdentifier(const std::string & in_hostName, int in_displayNum, int in_screenNum) function, expected prototype:\nosg::GraphicsContext::ScreenIdentifier::ScreenIdentifier(const std::string & in_hostName, int in_displayNum, int in_screenNum)\nClass arguments details:\n");
		}

		std::string in_hostName(lua_tostring(L,1),lua_objlen(L,1));
		int in_displayNum=(int)lua_tointeger(L,2);
		int in_screenNum=(int)lua_tointeger(L,3);

		return new osg::GraphicsContext::ScreenIdentifier(in_hostName, in_displayNum, in_screenNum);
	}

	// Overload binder for osg::GraphicsContext::ScreenIdentifier::ScreenIdentifier
	static osg::GraphicsContext::ScreenIdentifier* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function ScreenIdentifier, cannot match any of the overloads for function ScreenIdentifier:\n  ScreenIdentifier()\n  ScreenIdentifier(int)\n  ScreenIdentifier(const std::string &, int, int)\n");
		return NULL;
	}


	// Function binds:
	// std::string osg::GraphicsContext::ScreenIdentifier::displayName() const
	static int _bind_displayName(lua_State *L) {
		if (!_lg_typecheck_displayName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string osg::GraphicsContext::ScreenIdentifier::displayName() const function, expected prototype:\nstd::string osg::GraphicsContext::ScreenIdentifier::displayName() const\nClass arguments details:\n");
		}


		osg::GraphicsContext::ScreenIdentifier* self=(Luna< osg::GraphicsContext::ScreenIdentifier >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string osg::GraphicsContext::ScreenIdentifier::displayName() const");
		}
		std::string lret = self->displayName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::GraphicsContext::ScreenIdentifier::readDISPLAY()
	static int _bind_readDISPLAY(lua_State *L) {
		if (!_lg_typecheck_readDISPLAY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::ScreenIdentifier::readDISPLAY() function, expected prototype:\nvoid osg::GraphicsContext::ScreenIdentifier::readDISPLAY()\nClass arguments details:\n");
		}


		osg::GraphicsContext::ScreenIdentifier* self=(Luna< osg::GraphicsContext::ScreenIdentifier >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::ScreenIdentifier::readDISPLAY()");
		}
		self->readDISPLAY();

		return 0;
	}

	// void osg::GraphicsContext::ScreenIdentifier::setScreenIdentifier(const std::string & displayName)
	static int _bind_setScreenIdentifier(lua_State *L) {
		if (!_lg_typecheck_setScreenIdentifier(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::ScreenIdentifier::setScreenIdentifier(const std::string & displayName) function, expected prototype:\nvoid osg::GraphicsContext::ScreenIdentifier::setScreenIdentifier(const std::string & displayName)\nClass arguments details:\n");
		}

		std::string displayName(lua_tostring(L,2),lua_objlen(L,2));

		osg::GraphicsContext::ScreenIdentifier* self=(Luna< osg::GraphicsContext::ScreenIdentifier >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::ScreenIdentifier::setScreenIdentifier(const std::string &)");
		}
		self->setScreenIdentifier(displayName);

		return 0;
	}

	// void osg::GraphicsContext::ScreenIdentifier::setUndefinedScreenDetailsToDefaultScreen()
	static int _bind_setUndefinedScreenDetailsToDefaultScreen(lua_State *L) {
		if (!_lg_typecheck_setUndefinedScreenDetailsToDefaultScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::ScreenIdentifier::setUndefinedScreenDetailsToDefaultScreen() function, expected prototype:\nvoid osg::GraphicsContext::ScreenIdentifier::setUndefinedScreenDetailsToDefaultScreen()\nClass arguments details:\n");
		}


		osg::GraphicsContext::ScreenIdentifier* self=(Luna< osg::GraphicsContext::ScreenIdentifier >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::ScreenIdentifier::setUndefinedScreenDetailsToDefaultScreen()");
		}
		self->setUndefinedScreenDetailsToDefaultScreen();

		return 0;
	}


	// Operator binds:

};

osg::GraphicsContext::ScreenIdentifier* LunaTraits< osg::GraphicsContext::ScreenIdentifier >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_GraphicsContext_ScreenIdentifier::_bind_ctor(L);
}

void LunaTraits< osg::GraphicsContext::ScreenIdentifier >::_bind_dtor(osg::GraphicsContext::ScreenIdentifier* obj) {
	delete obj;
}

const char LunaTraits< osg::GraphicsContext::ScreenIdentifier >::className[] = "ScreenIdentifier";
const char LunaTraits< osg::GraphicsContext::ScreenIdentifier >::fullName[] = "osg::GraphicsContext::ScreenIdentifier";
const char LunaTraits< osg::GraphicsContext::ScreenIdentifier >::moduleName[] = "osg";
const char* LunaTraits< osg::GraphicsContext::ScreenIdentifier >::parents[] = {0};
const int LunaTraits< osg::GraphicsContext::ScreenIdentifier >::hash = 83590106;
const int LunaTraits< osg::GraphicsContext::ScreenIdentifier >::uniqueIDs[] = {83590106,0};

luna_RegType LunaTraits< osg::GraphicsContext::ScreenIdentifier >::methods[] = {
	{"displayName", &luna_wrapper_osg_GraphicsContext_ScreenIdentifier::_bind_displayName},
	{"readDISPLAY", &luna_wrapper_osg_GraphicsContext_ScreenIdentifier::_bind_readDISPLAY},
	{"setScreenIdentifier", &luna_wrapper_osg_GraphicsContext_ScreenIdentifier::_bind_setScreenIdentifier},
	{"setUndefinedScreenDetailsToDefaultScreen", &luna_wrapper_osg_GraphicsContext_ScreenIdentifier::_bind_setUndefinedScreenDetailsToDefaultScreen},
	{"dynCast", &luna_wrapper_osg_GraphicsContext_ScreenIdentifier::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GraphicsContext::ScreenIdentifier >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GraphicsContext::ScreenIdentifier >::enumValues[] = {
	{0,0}
};


