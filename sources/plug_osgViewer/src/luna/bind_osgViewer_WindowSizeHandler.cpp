#include <plug_common.h>

class luna_wrapper_osgViewer_WindowSizeHandler {
public:
	typedef Luna< osgViewer::WindowSizeHandler > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgViewer::WindowSizeHandler* ptr= dynamic_cast< osgViewer::WindowSizeHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::WindowSizeHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setKeyEventToggleFullscreen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventToggleFullscreen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setToggleFullscreen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getToggleFullscreen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKeyEventWindowedResolutionUp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventWindowedResolutionUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKeyEventWindowedResolutionDown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventWindowedResolutionDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setChangeWindowedResolution(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getChangeWindowedResolution(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_handle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgViewer::WindowSizeHandler::WindowSizeHandler()
	static osgViewer::WindowSizeHandler* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::WindowSizeHandler::WindowSizeHandler() function, expected prototype:\nosgViewer::WindowSizeHandler::WindowSizeHandler()\nClass arguments details:\n");
		}


		return new osgViewer::WindowSizeHandler();
	}


	// Function binds:
	// void osgViewer::WindowSizeHandler::getUsage(osg::ApplicationUsage & usage) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::WindowSizeHandler::getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgViewer::WindowSizeHandler::getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ApplicationUsage* usage_ptr=dynamic_cast< osg::ApplicationUsage* >(Luna< osg::Referenced >::check(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgViewer::WindowSizeHandler::getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgViewer::WindowSizeHandler* self=dynamic_cast< osgViewer::WindowSizeHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::WindowSizeHandler::getUsage(osg::ApplicationUsage &) const");
		}
		self->getUsage(usage);

		return 0;
	}

	// void osgViewer::WindowSizeHandler::setKeyEventToggleFullscreen(int key)
	static int _bind_setKeyEventToggleFullscreen(lua_State *L) {
		if (!_lg_typecheck_setKeyEventToggleFullscreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::WindowSizeHandler::setKeyEventToggleFullscreen(int key) function, expected prototype:\nvoid osgViewer::WindowSizeHandler::setKeyEventToggleFullscreen(int key)\nClass arguments details:\n");
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::WindowSizeHandler* self=dynamic_cast< osgViewer::WindowSizeHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::WindowSizeHandler::setKeyEventToggleFullscreen(int)");
		}
		self->setKeyEventToggleFullscreen(key);

		return 0;
	}

	// int osgViewer::WindowSizeHandler::getKeyEventToggleFullscreen() const
	static int _bind_getKeyEventToggleFullscreen(lua_State *L) {
		if (!_lg_typecheck_getKeyEventToggleFullscreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgViewer::WindowSizeHandler::getKeyEventToggleFullscreen() const function, expected prototype:\nint osgViewer::WindowSizeHandler::getKeyEventToggleFullscreen() const\nClass arguments details:\n");
		}


		osgViewer::WindowSizeHandler* self=dynamic_cast< osgViewer::WindowSizeHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgViewer::WindowSizeHandler::getKeyEventToggleFullscreen() const");
		}
		int lret = self->getKeyEventToggleFullscreen();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::WindowSizeHandler::setToggleFullscreen(bool flag)
	static int _bind_setToggleFullscreen(lua_State *L) {
		if (!_lg_typecheck_setToggleFullscreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::WindowSizeHandler::setToggleFullscreen(bool flag) function, expected prototype:\nvoid osgViewer::WindowSizeHandler::setToggleFullscreen(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgViewer::WindowSizeHandler* self=dynamic_cast< osgViewer::WindowSizeHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::WindowSizeHandler::setToggleFullscreen(bool)");
		}
		self->setToggleFullscreen(flag);

		return 0;
	}

	// bool osgViewer::WindowSizeHandler::getToggleFullscreen() const
	static int _bind_getToggleFullscreen(lua_State *L) {
		if (!_lg_typecheck_getToggleFullscreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::WindowSizeHandler::getToggleFullscreen() const function, expected prototype:\nbool osgViewer::WindowSizeHandler::getToggleFullscreen() const\nClass arguments details:\n");
		}


		osgViewer::WindowSizeHandler* self=dynamic_cast< osgViewer::WindowSizeHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::WindowSizeHandler::getToggleFullscreen() const");
		}
		bool lret = self->getToggleFullscreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::WindowSizeHandler::setKeyEventWindowedResolutionUp(int key)
	static int _bind_setKeyEventWindowedResolutionUp(lua_State *L) {
		if (!_lg_typecheck_setKeyEventWindowedResolutionUp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::WindowSizeHandler::setKeyEventWindowedResolutionUp(int key) function, expected prototype:\nvoid osgViewer::WindowSizeHandler::setKeyEventWindowedResolutionUp(int key)\nClass arguments details:\n");
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::WindowSizeHandler* self=dynamic_cast< osgViewer::WindowSizeHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::WindowSizeHandler::setKeyEventWindowedResolutionUp(int)");
		}
		self->setKeyEventWindowedResolutionUp(key);

		return 0;
	}

	// int osgViewer::WindowSizeHandler::getKeyEventWindowedResolutionUp() const
	static int _bind_getKeyEventWindowedResolutionUp(lua_State *L) {
		if (!_lg_typecheck_getKeyEventWindowedResolutionUp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgViewer::WindowSizeHandler::getKeyEventWindowedResolutionUp() const function, expected prototype:\nint osgViewer::WindowSizeHandler::getKeyEventWindowedResolutionUp() const\nClass arguments details:\n");
		}


		osgViewer::WindowSizeHandler* self=dynamic_cast< osgViewer::WindowSizeHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgViewer::WindowSizeHandler::getKeyEventWindowedResolutionUp() const");
		}
		int lret = self->getKeyEventWindowedResolutionUp();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::WindowSizeHandler::setKeyEventWindowedResolutionDown(int key)
	static int _bind_setKeyEventWindowedResolutionDown(lua_State *L) {
		if (!_lg_typecheck_setKeyEventWindowedResolutionDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::WindowSizeHandler::setKeyEventWindowedResolutionDown(int key) function, expected prototype:\nvoid osgViewer::WindowSizeHandler::setKeyEventWindowedResolutionDown(int key)\nClass arguments details:\n");
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::WindowSizeHandler* self=dynamic_cast< osgViewer::WindowSizeHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::WindowSizeHandler::setKeyEventWindowedResolutionDown(int)");
		}
		self->setKeyEventWindowedResolutionDown(key);

		return 0;
	}

	// int osgViewer::WindowSizeHandler::getKeyEventWindowedResolutionDown() const
	static int _bind_getKeyEventWindowedResolutionDown(lua_State *L) {
		if (!_lg_typecheck_getKeyEventWindowedResolutionDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgViewer::WindowSizeHandler::getKeyEventWindowedResolutionDown() const function, expected prototype:\nint osgViewer::WindowSizeHandler::getKeyEventWindowedResolutionDown() const\nClass arguments details:\n");
		}


		osgViewer::WindowSizeHandler* self=dynamic_cast< osgViewer::WindowSizeHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgViewer::WindowSizeHandler::getKeyEventWindowedResolutionDown() const");
		}
		int lret = self->getKeyEventWindowedResolutionDown();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::WindowSizeHandler::setChangeWindowedResolution(bool flag)
	static int _bind_setChangeWindowedResolution(lua_State *L) {
		if (!_lg_typecheck_setChangeWindowedResolution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::WindowSizeHandler::setChangeWindowedResolution(bool flag) function, expected prototype:\nvoid osgViewer::WindowSizeHandler::setChangeWindowedResolution(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgViewer::WindowSizeHandler* self=dynamic_cast< osgViewer::WindowSizeHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::WindowSizeHandler::setChangeWindowedResolution(bool)");
		}
		self->setChangeWindowedResolution(flag);

		return 0;
	}

	// bool osgViewer::WindowSizeHandler::getChangeWindowedResolution() const
	static int _bind_getChangeWindowedResolution(lua_State *L) {
		if (!_lg_typecheck_getChangeWindowedResolution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::WindowSizeHandler::getChangeWindowedResolution() const function, expected prototype:\nbool osgViewer::WindowSizeHandler::getChangeWindowedResolution() const\nClass arguments details:\n");
		}


		osgViewer::WindowSizeHandler* self=dynamic_cast< osgViewer::WindowSizeHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::WindowSizeHandler::getChangeWindowedResolution() const");
		}
		bool lret = self->getChangeWindowedResolution();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::WindowSizeHandler::handle(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::WindowSizeHandler::handle(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & ) function, expected prototype:\nbool osgViewer::WindowSizeHandler::handle(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::WindowSizeHandler::handle function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgViewer::WindowSizeHandler::handle function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgViewer::WindowSizeHandler* self=dynamic_cast< osgViewer::WindowSizeHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::WindowSizeHandler::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		bool lret = self->handle(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgViewer::WindowSizeHandler* LunaTraits< osgViewer::WindowSizeHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_WindowSizeHandler::_bind_ctor(L);
}

void LunaTraits< osgViewer::WindowSizeHandler >::_bind_dtor(osgViewer::WindowSizeHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::WindowSizeHandler >::className[] = "WindowSizeHandler";
const char LunaTraits< osgViewer::WindowSizeHandler >::fullName[] = "osgViewer::WindowSizeHandler";
const char LunaTraits< osgViewer::WindowSizeHandler >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::WindowSizeHandler >::parents[] = {"osgGA.GUIEventHandler", 0};
const int LunaTraits< osgViewer::WindowSizeHandler >::hash = 2477444;
const int LunaTraits< osgViewer::WindowSizeHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::WindowSizeHandler >::methods[] = {
	{"getUsage", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_getUsage},
	{"setKeyEventToggleFullscreen", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_setKeyEventToggleFullscreen},
	{"getKeyEventToggleFullscreen", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_getKeyEventToggleFullscreen},
	{"setToggleFullscreen", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_setToggleFullscreen},
	{"getToggleFullscreen", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_getToggleFullscreen},
	{"setKeyEventWindowedResolutionUp", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_setKeyEventWindowedResolutionUp},
	{"getKeyEventWindowedResolutionUp", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_getKeyEventWindowedResolutionUp},
	{"setKeyEventWindowedResolutionDown", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_setKeyEventWindowedResolutionDown},
	{"getKeyEventWindowedResolutionDown", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_getKeyEventWindowedResolutionDown},
	{"setChangeWindowedResolution", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_setChangeWindowedResolution},
	{"getChangeWindowedResolution", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_getChangeWindowedResolution},
	{"handle", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_handle},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::WindowSizeHandler >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_WindowSizeHandler::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::WindowSizeHandler >::enumValues[] = {
	{0,0}
};


