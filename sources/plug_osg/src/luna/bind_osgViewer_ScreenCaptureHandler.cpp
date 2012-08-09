#include <plug_common.h>

class luna_wrapper_osgViewer_ScreenCaptureHandler {
public:
	typedef Luna< osgViewer::ScreenCaptureHandler > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgViewer::ScreenCaptureHandler* ptr= dynamic_cast< osgViewer::ScreenCaptureHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::ScreenCaptureHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setKeyEventTakeScreenShot(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventTakeScreenShot(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKeyEventToggleContinuousCapture(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventToggleContinuousCapture(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCaptureOperation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCaptureOperation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_handle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_captureNextFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFramesToCapture(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFramesToCapture(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_startCapture(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_stopCapture(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// osgViewer::ScreenCaptureHandler::ScreenCaptureHandler(osgViewer::ScreenCaptureHandler::CaptureOperation * defaultOperation = 0, int numFrames = 1)
	static osgViewer::ScreenCaptureHandler* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::ScreenCaptureHandler::ScreenCaptureHandler(osgViewer::ScreenCaptureHandler::CaptureOperation * defaultOperation = 0, int numFrames = 1) function, expected prototype:\nosgViewer::ScreenCaptureHandler::ScreenCaptureHandler(osgViewer::ScreenCaptureHandler::CaptureOperation * defaultOperation = 0, int numFrames = 1)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osgViewer::ScreenCaptureHandler::CaptureOperation* defaultOperation=luatop>0 ? dynamic_cast< osgViewer::ScreenCaptureHandler::CaptureOperation* >(Luna< osg::Referenced >::check(L,1)) : (osgViewer::ScreenCaptureHandler::CaptureOperation*)0;
		int numFrames=luatop>1 ? (int)lua_tointeger(L,2) : 1;

		return new osgViewer::ScreenCaptureHandler(defaultOperation, numFrames);
	}


	// Function binds:
	// void osgViewer::ScreenCaptureHandler::setKeyEventTakeScreenShot(int key)
	static int _bind_setKeyEventTakeScreenShot(lua_State *L) {
		if (!_lg_typecheck_setKeyEventTakeScreenShot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::setKeyEventTakeScreenShot(int key) function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::setKeyEventTakeScreenShot(int key)\nClass arguments details:\n");
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::ScreenCaptureHandler* self=dynamic_cast< osgViewer::ScreenCaptureHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::setKeyEventTakeScreenShot(int)");
		}
		self->setKeyEventTakeScreenShot(key);

		return 0;
	}

	// int osgViewer::ScreenCaptureHandler::getKeyEventTakeScreenShot() const
	static int _bind_getKeyEventTakeScreenShot(lua_State *L) {
		if (!_lg_typecheck_getKeyEventTakeScreenShot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgViewer::ScreenCaptureHandler::getKeyEventTakeScreenShot() const function, expected prototype:\nint osgViewer::ScreenCaptureHandler::getKeyEventTakeScreenShot() const\nClass arguments details:\n");
		}


		osgViewer::ScreenCaptureHandler* self=dynamic_cast< osgViewer::ScreenCaptureHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgViewer::ScreenCaptureHandler::getKeyEventTakeScreenShot() const");
		}
		int lret = self->getKeyEventTakeScreenShot();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::ScreenCaptureHandler::setKeyEventToggleContinuousCapture(int key)
	static int _bind_setKeyEventToggleContinuousCapture(lua_State *L) {
		if (!_lg_typecheck_setKeyEventToggleContinuousCapture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::setKeyEventToggleContinuousCapture(int key) function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::setKeyEventToggleContinuousCapture(int key)\nClass arguments details:\n");
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::ScreenCaptureHandler* self=dynamic_cast< osgViewer::ScreenCaptureHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::setKeyEventToggleContinuousCapture(int)");
		}
		self->setKeyEventToggleContinuousCapture(key);

		return 0;
	}

	// int osgViewer::ScreenCaptureHandler::getKeyEventToggleContinuousCapture() const
	static int _bind_getKeyEventToggleContinuousCapture(lua_State *L) {
		if (!_lg_typecheck_getKeyEventToggleContinuousCapture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgViewer::ScreenCaptureHandler::getKeyEventToggleContinuousCapture() const function, expected prototype:\nint osgViewer::ScreenCaptureHandler::getKeyEventToggleContinuousCapture() const\nClass arguments details:\n");
		}


		osgViewer::ScreenCaptureHandler* self=dynamic_cast< osgViewer::ScreenCaptureHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgViewer::ScreenCaptureHandler::getKeyEventToggleContinuousCapture() const");
		}
		int lret = self->getKeyEventToggleContinuousCapture();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::ScreenCaptureHandler::setCaptureOperation(osgViewer::ScreenCaptureHandler::CaptureOperation * operation)
	static int _bind_setCaptureOperation(lua_State *L) {
		if (!_lg_typecheck_setCaptureOperation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::setCaptureOperation(osgViewer::ScreenCaptureHandler::CaptureOperation * operation) function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::setCaptureOperation(osgViewer::ScreenCaptureHandler::CaptureOperation * operation)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgViewer::ScreenCaptureHandler::CaptureOperation* operation=dynamic_cast< osgViewer::ScreenCaptureHandler::CaptureOperation* >(Luna< osg::Referenced >::check(L,2));

		osgViewer::ScreenCaptureHandler* self=dynamic_cast< osgViewer::ScreenCaptureHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::setCaptureOperation(osgViewer::ScreenCaptureHandler::CaptureOperation *)");
		}
		self->setCaptureOperation(operation);

		return 0;
	}

	// osgViewer::ScreenCaptureHandler::CaptureOperation * osgViewer::ScreenCaptureHandler::getCaptureOperation() const
	static int _bind_getCaptureOperation(lua_State *L) {
		if (!_lg_typecheck_getCaptureOperation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::ScreenCaptureHandler::CaptureOperation * osgViewer::ScreenCaptureHandler::getCaptureOperation() const function, expected prototype:\nosgViewer::ScreenCaptureHandler::CaptureOperation * osgViewer::ScreenCaptureHandler::getCaptureOperation() const\nClass arguments details:\n");
		}


		osgViewer::ScreenCaptureHandler* self=dynamic_cast< osgViewer::ScreenCaptureHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgViewer::ScreenCaptureHandler::CaptureOperation * osgViewer::ScreenCaptureHandler::getCaptureOperation() const");
		}
		osgViewer::ScreenCaptureHandler::CaptureOperation * lret = self->getCaptureOperation();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgViewer::ScreenCaptureHandler::CaptureOperation >::push(L,lret,false);

		return 1;
	}

	// bool osgViewer::ScreenCaptureHandler::handle(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::ScreenCaptureHandler::handle(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & ) function, expected prototype:\nbool osgViewer::ScreenCaptureHandler::handle(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::ScreenCaptureHandler::handle function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgViewer::ScreenCaptureHandler::handle function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgViewer::ScreenCaptureHandler* self=dynamic_cast< osgViewer::ScreenCaptureHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::ScreenCaptureHandler::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		bool lret = self->handle(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::ScreenCaptureHandler::captureNextFrame(osgViewer::ViewerBase & viewer)
	static int _bind_captureNextFrame(lua_State *L) {
		if (!_lg_typecheck_captureNextFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::captureNextFrame(osgViewer::ViewerBase & viewer) function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::captureNextFrame(osgViewer::ViewerBase & viewer)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgViewer::ViewerBase* viewer_ptr=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,2));
		if( !viewer_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg viewer in osgViewer::ScreenCaptureHandler::captureNextFrame function");
		}
		osgViewer::ViewerBase & viewer=*viewer_ptr;

		osgViewer::ScreenCaptureHandler* self=dynamic_cast< osgViewer::ScreenCaptureHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::captureNextFrame(osgViewer::ViewerBase &)");
		}
		self->captureNextFrame(viewer);

		return 0;
	}

	// void osgViewer::ScreenCaptureHandler::setFramesToCapture(int numFrames)
	static int _bind_setFramesToCapture(lua_State *L) {
		if (!_lg_typecheck_setFramesToCapture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::setFramesToCapture(int numFrames) function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::setFramesToCapture(int numFrames)\nClass arguments details:\n");
		}

		int numFrames=(int)lua_tointeger(L,2);

		osgViewer::ScreenCaptureHandler* self=dynamic_cast< osgViewer::ScreenCaptureHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::setFramesToCapture(int)");
		}
		self->setFramesToCapture(numFrames);

		return 0;
	}

	// int osgViewer::ScreenCaptureHandler::getFramesToCapture() const
	static int _bind_getFramesToCapture(lua_State *L) {
		if (!_lg_typecheck_getFramesToCapture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgViewer::ScreenCaptureHandler::getFramesToCapture() const function, expected prototype:\nint osgViewer::ScreenCaptureHandler::getFramesToCapture() const\nClass arguments details:\n");
		}


		osgViewer::ScreenCaptureHandler* self=dynamic_cast< osgViewer::ScreenCaptureHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgViewer::ScreenCaptureHandler::getFramesToCapture() const");
		}
		int lret = self->getFramesToCapture();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::ScreenCaptureHandler::startCapture()
	static int _bind_startCapture(lua_State *L) {
		if (!_lg_typecheck_startCapture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::startCapture() function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::startCapture()\nClass arguments details:\n");
		}


		osgViewer::ScreenCaptureHandler* self=dynamic_cast< osgViewer::ScreenCaptureHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::startCapture()");
		}
		self->startCapture();

		return 0;
	}

	// void osgViewer::ScreenCaptureHandler::stopCapture()
	static int _bind_stopCapture(lua_State *L) {
		if (!_lg_typecheck_stopCapture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::stopCapture() function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::stopCapture()\nClass arguments details:\n");
		}


		osgViewer::ScreenCaptureHandler* self=dynamic_cast< osgViewer::ScreenCaptureHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::stopCapture()");
		}
		self->stopCapture();

		return 0;
	}

	// void osgViewer::ScreenCaptureHandler::getUsage(osg::ApplicationUsage & usage) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ApplicationUsage* usage_ptr=dynamic_cast< osg::ApplicationUsage* >(Luna< osg::Referenced >::check(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgViewer::ScreenCaptureHandler::getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgViewer::ScreenCaptureHandler* self=dynamic_cast< osgViewer::ScreenCaptureHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::getUsage(osg::ApplicationUsage &) const");
		}
		self->getUsage(usage);

		return 0;
	}


	// Operator binds:

};

osgViewer::ScreenCaptureHandler* LunaTraits< osgViewer::ScreenCaptureHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_ctor(L);
}

void LunaTraits< osgViewer::ScreenCaptureHandler >::_bind_dtor(osgViewer::ScreenCaptureHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::ScreenCaptureHandler >::className[] = "ScreenCaptureHandler";
const char LunaTraits< osgViewer::ScreenCaptureHandler >::fullName[] = "osgViewer::ScreenCaptureHandler";
const char LunaTraits< osgViewer::ScreenCaptureHandler >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::ScreenCaptureHandler >::parents[] = {"osgGA.GUIEventHandler", 0};
const int LunaTraits< osgViewer::ScreenCaptureHandler >::hash = 3689079;
const int LunaTraits< osgViewer::ScreenCaptureHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::ScreenCaptureHandler >::methods[] = {
	{"setKeyEventTakeScreenShot", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_setKeyEventTakeScreenShot},
	{"getKeyEventTakeScreenShot", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_getKeyEventTakeScreenShot},
	{"setKeyEventToggleContinuousCapture", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_setKeyEventToggleContinuousCapture},
	{"getKeyEventToggleContinuousCapture", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_getKeyEventToggleContinuousCapture},
	{"setCaptureOperation", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_setCaptureOperation},
	{"getCaptureOperation", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_getCaptureOperation},
	{"handle", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_handle},
	{"captureNextFrame", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_captureNextFrame},
	{"setFramesToCapture", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_setFramesToCapture},
	{"getFramesToCapture", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_getFramesToCapture},
	{"startCapture", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_startCapture},
	{"stopCapture", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_stopCapture},
	{"getUsage", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_getUsage},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::ScreenCaptureHandler >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_ScreenCaptureHandler::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::ScreenCaptureHandler >::enumValues[] = {
	{0,0}
};


