#include <plug_common.h>

class luna_wrapper_osgViewer_HelpHandler {
public:
	typedef Luna< osgViewer::HelpHandler > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgViewer::HelpHandler* ptr= dynamic_cast< osgViewer::HelpHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::HelpHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setApplicationUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getApplicationUsage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getApplicationUsage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKeyEventTogglesOnScreenHelp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventTogglesOnScreenHelp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCamera_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCamera_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_handle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgViewer::HelpHandler::HelpHandler(osg::ApplicationUsage * au = 0)
	static osgViewer::HelpHandler* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::HelpHandler::HelpHandler(osg::ApplicationUsage * au = 0) function, expected prototype:\nosgViewer::HelpHandler::HelpHandler(osg::ApplicationUsage * au = 0)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::ApplicationUsage* au=luatop>0 ? dynamic_cast< osg::ApplicationUsage* >(Luna< osg::Referenced >::check(L,1)) : (osg::ApplicationUsage*)0;

		return new osgViewer::HelpHandler(au);
	}


	// Function binds:
	// void osgViewer::HelpHandler::setApplicationUsage(osg::ApplicationUsage * au)
	static int _bind_setApplicationUsage(lua_State *L) {
		if (!_lg_typecheck_setApplicationUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::HelpHandler::setApplicationUsage(osg::ApplicationUsage * au) function, expected prototype:\nvoid osgViewer::HelpHandler::setApplicationUsage(osg::ApplicationUsage * au)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ApplicationUsage* au=dynamic_cast< osg::ApplicationUsage* >(Luna< osg::Referenced >::check(L,2));

		osgViewer::HelpHandler* self=dynamic_cast< osgViewer::HelpHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::HelpHandler::setApplicationUsage(osg::ApplicationUsage *)");
		}
		self->setApplicationUsage(au);

		return 0;
	}

	// osg::ApplicationUsage * osgViewer::HelpHandler::getApplicationUsage()
	static int _bind_getApplicationUsage_overload_1(lua_State *L) {
		if (!_lg_typecheck_getApplicationUsage_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ApplicationUsage * osgViewer::HelpHandler::getApplicationUsage() function, expected prototype:\nosg::ApplicationUsage * osgViewer::HelpHandler::getApplicationUsage()\nClass arguments details:\n");
		}


		osgViewer::HelpHandler* self=dynamic_cast< osgViewer::HelpHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ApplicationUsage * osgViewer::HelpHandler::getApplicationUsage()");
		}
		osg::ApplicationUsage * lret = self->getApplicationUsage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ApplicationUsage >::push(L,lret,false);

		return 1;
	}

	// const osg::ApplicationUsage * osgViewer::HelpHandler::getApplicationUsage() const
	static int _bind_getApplicationUsage_overload_2(lua_State *L) {
		if (!_lg_typecheck_getApplicationUsage_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::ApplicationUsage * osgViewer::HelpHandler::getApplicationUsage() const function, expected prototype:\nconst osg::ApplicationUsage * osgViewer::HelpHandler::getApplicationUsage() const\nClass arguments details:\n");
		}


		osgViewer::HelpHandler* self=dynamic_cast< osgViewer::HelpHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::ApplicationUsage * osgViewer::HelpHandler::getApplicationUsage() const");
		}
		const osg::ApplicationUsage * lret = self->getApplicationUsage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ApplicationUsage >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::HelpHandler::getApplicationUsage
	static int _bind_getApplicationUsage(lua_State *L) {
		if (_lg_typecheck_getApplicationUsage_overload_1(L)) return _bind_getApplicationUsage_overload_1(L);
		if (_lg_typecheck_getApplicationUsage_overload_2(L)) return _bind_getApplicationUsage_overload_2(L);

		luaL_error(L, "error in function getApplicationUsage, cannot match any of the overloads for function getApplicationUsage:\n  getApplicationUsage()\n  getApplicationUsage()\n");
		return 0;
	}

	// void osgViewer::HelpHandler::setKeyEventTogglesOnScreenHelp(int key)
	static int _bind_setKeyEventTogglesOnScreenHelp(lua_State *L) {
		if (!_lg_typecheck_setKeyEventTogglesOnScreenHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::HelpHandler::setKeyEventTogglesOnScreenHelp(int key) function, expected prototype:\nvoid osgViewer::HelpHandler::setKeyEventTogglesOnScreenHelp(int key)\nClass arguments details:\n");
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::HelpHandler* self=dynamic_cast< osgViewer::HelpHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::HelpHandler::setKeyEventTogglesOnScreenHelp(int)");
		}
		self->setKeyEventTogglesOnScreenHelp(key);

		return 0;
	}

	// int osgViewer::HelpHandler::getKeyEventTogglesOnScreenHelp() const
	static int _bind_getKeyEventTogglesOnScreenHelp(lua_State *L) {
		if (!_lg_typecheck_getKeyEventTogglesOnScreenHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgViewer::HelpHandler::getKeyEventTogglesOnScreenHelp() const function, expected prototype:\nint osgViewer::HelpHandler::getKeyEventTogglesOnScreenHelp() const\nClass arguments details:\n");
		}


		osgViewer::HelpHandler* self=dynamic_cast< osgViewer::HelpHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgViewer::HelpHandler::getKeyEventTogglesOnScreenHelp() const");
		}
		int lret = self->getKeyEventTogglesOnScreenHelp();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::HelpHandler::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::HelpHandler::reset() function, expected prototype:\nvoid osgViewer::HelpHandler::reset()\nClass arguments details:\n");
		}


		osgViewer::HelpHandler* self=dynamic_cast< osgViewer::HelpHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::HelpHandler::reset()");
		}
		self->reset();

		return 0;
	}

	// osg::Camera * osgViewer::HelpHandler::getCamera()
	static int _bind_getCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCamera_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Camera * osgViewer::HelpHandler::getCamera() function, expected prototype:\nosg::Camera * osgViewer::HelpHandler::getCamera()\nClass arguments details:\n");
		}


		osgViewer::HelpHandler* self=dynamic_cast< osgViewer::HelpHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Camera * osgViewer::HelpHandler::getCamera()");
		}
		osg::Camera * lret = self->getCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osgViewer::HelpHandler::getCamera() const
	static int _bind_getCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCamera_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Camera * osgViewer::HelpHandler::getCamera() const function, expected prototype:\nconst osg::Camera * osgViewer::HelpHandler::getCamera() const\nClass arguments details:\n");
		}


		osgViewer::HelpHandler* self=dynamic_cast< osgViewer::HelpHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Camera * osgViewer::HelpHandler::getCamera() const");
		}
		const osg::Camera * lret = self->getCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::HelpHandler::getCamera
	static int _bind_getCamera(lua_State *L) {
		if (_lg_typecheck_getCamera_overload_1(L)) return _bind_getCamera_overload_1(L);
		if (_lg_typecheck_getCamera_overload_2(L)) return _bind_getCamera_overload_2(L);

		luaL_error(L, "error in function getCamera, cannot match any of the overloads for function getCamera:\n  getCamera()\n  getCamera()\n");
		return 0;
	}

	// bool osgViewer::HelpHandler::handle(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::HelpHandler::handle(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & ) function, expected prototype:\nbool osgViewer::HelpHandler::handle(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::HelpHandler::handle function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgViewer::HelpHandler::handle function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgViewer::HelpHandler* self=dynamic_cast< osgViewer::HelpHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::HelpHandler::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		bool lret = self->handle(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::HelpHandler::getUsage(osg::ApplicationUsage & usage) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::HelpHandler::getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgViewer::HelpHandler::getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ApplicationUsage* usage_ptr=dynamic_cast< osg::ApplicationUsage* >(Luna< osg::Referenced >::check(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgViewer::HelpHandler::getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgViewer::HelpHandler* self=dynamic_cast< osgViewer::HelpHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::HelpHandler::getUsage(osg::ApplicationUsage &) const");
		}
		self->getUsage(usage);

		return 0;
	}


	// Operator binds:

};

osgViewer::HelpHandler* LunaTraits< osgViewer::HelpHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_HelpHandler::_bind_ctor(L);
}

void LunaTraits< osgViewer::HelpHandler >::_bind_dtor(osgViewer::HelpHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::HelpHandler >::className[] = "HelpHandler";
const char LunaTraits< osgViewer::HelpHandler >::fullName[] = "osgViewer::HelpHandler";
const char LunaTraits< osgViewer::HelpHandler >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::HelpHandler >::parents[] = {"osgGA.GUIEventHandler", 0};
const int LunaTraits< osgViewer::HelpHandler >::hash = 27239095;
const int LunaTraits< osgViewer::HelpHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::HelpHandler >::methods[] = {
	{"setApplicationUsage", &luna_wrapper_osgViewer_HelpHandler::_bind_setApplicationUsage},
	{"getApplicationUsage", &luna_wrapper_osgViewer_HelpHandler::_bind_getApplicationUsage},
	{"setKeyEventTogglesOnScreenHelp", &luna_wrapper_osgViewer_HelpHandler::_bind_setKeyEventTogglesOnScreenHelp},
	{"getKeyEventTogglesOnScreenHelp", &luna_wrapper_osgViewer_HelpHandler::_bind_getKeyEventTogglesOnScreenHelp},
	{"reset", &luna_wrapper_osgViewer_HelpHandler::_bind_reset},
	{"getCamera", &luna_wrapper_osgViewer_HelpHandler::_bind_getCamera},
	{"handle", &luna_wrapper_osgViewer_HelpHandler::_bind_handle},
	{"getUsage", &luna_wrapper_osgViewer_HelpHandler::_bind_getUsage},
	{"__eq", &luna_wrapper_osgViewer_HelpHandler::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::HelpHandler >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_HelpHandler::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::HelpHandler >::enumValues[] = {
	{0,0}
};


