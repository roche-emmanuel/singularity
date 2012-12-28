#ifndef _WRAPPERS_WRAPPER_OSGVIEWER_WINDOWSIZEHANDLER_H_
#define _WRAPPERS_WRAPPER_OSGVIEWER_WINDOWSIZEHANDLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgViewer/ViewerEventHandlers>

class wrapper_osgViewer_WindowSizeHandler : public osgViewer::WindowSizeHandler, public luna_wrapper_base {

public:
		

	~wrapper_osgViewer_WindowSizeHandler() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgViewer_WindowSizeHandler(lua_State* L, lua_Table* dum) : osgViewer::WindowSizeHandler(), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return WindowSizeHandler::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return WindowSizeHandler::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return WindowSizeHandler::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return WindowSizeHandler::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return WindowSizeHandler::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return WindowSizeHandler::releaseGLObjects(arg1);
	};

	// osg::Object * osgGA::GUIEventHandler::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return WindowSizeHandler::cloneType();
	};

	// osg::Object * osgGA::GUIEventHandler::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return WindowSizeHandler::clone(arg1);
	};

	// bool osgGA::GUIEventHandler::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return WindowSizeHandler::isSameKindAs(obj);
	};

	// const char * osgGA::GUIEventHandler::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return WindowSizeHandler::libraryName();
	};

	// const char * osgGA::GUIEventHandler::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return WindowSizeHandler::className();
	};

	// void osgGA::GUIEventHandler::event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	void event(osg::NodeVisitor * nv, osg::Drawable * drawable) {
		if(_obj.pushFunction("event")) {
			_obj.pushArg(nv);
			_obj.pushArg(drawable);
			return (_obj.callFunction<void>());
		}

		return WindowSizeHandler::event(nv, drawable);
	};

	// void osgGA::GUIEventHandler::operator()(osg::Node * node, osg::NodeVisitor * nv)
	void operator()(osg::Node * node, osg::NodeVisitor * nv) {
		if(_obj.pushFunction("op_call")) {
			_obj.pushArg(node);
			_obj.pushArg(nv);
			return (_obj.callFunction<void>());
		}

		return WindowSizeHandler::operator()(node, nv);
	};

	// void osgViewer::WindowSizeHandler::getUsage(osg::ApplicationUsage & usage) const
	void getUsage(osg::ApplicationUsage & usage) const {
		if(_obj.pushFunction("getUsage")) {
			_obj.pushArg(&usage);
			return (_obj.callFunction<void>());
		}

		return WindowSizeHandler::getUsage(usage);
	};

	// bool osgViewer::WindowSizeHandler::handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	bool handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) {
		if(_obj.pushFunction("handle")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(&arg2);
			return (_obj.callFunction<bool>());
		}

		return WindowSizeHandler::handle(arg1, arg2);
	};


	// Protected non-virtual methods:
	// void osgViewer::WindowSizeHandler::toggleFullscreen(osgViewer::GraphicsWindow * window)
	void public_toggleFullscreen(osgViewer::GraphicsWindow * window) {
		return osgViewer::WindowSizeHandler::toggleFullscreen(window);
	};

	// void osgViewer::WindowSizeHandler::changeWindowedResolution(osgViewer::GraphicsWindow * window, bool increase)
	void public_changeWindowedResolution(osgViewer::GraphicsWindow * window, bool increase) {
		return osgViewer::WindowSizeHandler::changeWindowedResolution(window, increase);
	};

	// unsigned int osgViewer::WindowSizeHandler::getNearestResolution(int screenWidth, int screenHeight, int width, int height) const
	unsigned int public_getNearestResolution(int screenWidth, int screenHeight, int width, int height) const {
		return osgViewer::WindowSizeHandler::getNearestResolution(screenWidth, screenHeight, width, height);
	};

	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_toggleFullscreen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_changeWindowedResolution(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getNearestResolution(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_signalObserversAndDelete(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_deleteUsingDeleteHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// void osgViewer::WindowSizeHandler::public_toggleFullscreen(osgViewer::GraphicsWindow * window)
	static int _bind_public_toggleFullscreen(lua_State *L) {
		if (!_lg_typecheck_public_toggleFullscreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::WindowSizeHandler::public_toggleFullscreen(osgViewer::GraphicsWindow * window) function, expected prototype:\nvoid osgViewer::WindowSizeHandler::public_toggleFullscreen(osgViewer::GraphicsWindow * window)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgViewer::GraphicsWindow* window=(Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,2));

		wrapper_osgViewer_WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_WindowSizeHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::WindowSizeHandler::public_toggleFullscreen(osgViewer::GraphicsWindow *)");
		}
		self->public_toggleFullscreen(window);

		return 0;
	}

	// void osgViewer::WindowSizeHandler::public_changeWindowedResolution(osgViewer::GraphicsWindow * window, bool increase)
	static int _bind_public_changeWindowedResolution(lua_State *L) {
		if (!_lg_typecheck_public_changeWindowedResolution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::WindowSizeHandler::public_changeWindowedResolution(osgViewer::GraphicsWindow * window, bool increase) function, expected prototype:\nvoid osgViewer::WindowSizeHandler::public_changeWindowedResolution(osgViewer::GraphicsWindow * window, bool increase)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgViewer::GraphicsWindow* window=(Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,2));
		bool increase=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgViewer_WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_WindowSizeHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::WindowSizeHandler::public_changeWindowedResolution(osgViewer::GraphicsWindow *, bool)");
		}
		self->public_changeWindowedResolution(window, increase);

		return 0;
	}

	// unsigned int osgViewer::WindowSizeHandler::public_getNearestResolution(int screenWidth, int screenHeight, int width, int height) const
	static int _bind_public_getNearestResolution(lua_State *L) {
		if (!_lg_typecheck_public_getNearestResolution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgViewer::WindowSizeHandler::public_getNearestResolution(int screenWidth, int screenHeight, int width, int height) const function, expected prototype:\nunsigned int osgViewer::WindowSizeHandler::public_getNearestResolution(int screenWidth, int screenHeight, int width, int height) const\nClass arguments details:\n");
		}

		int screenWidth=(int)lua_tointeger(L,2);
		int screenHeight=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		wrapper_osgViewer_WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_WindowSizeHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgViewer::WindowSizeHandler::public_getNearestResolution(int, int, int, int) const");
		}
		unsigned int lret = self->public_getNearestResolution(screenWidth, screenHeight, width, height);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n");
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgViewer_WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_WindowSizeHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_signalObserversAndDelete(bool, bool) const");
		}
		self->public_signalObserversAndDelete(signalDelete, doDelete);

		return 0;
	}

	// void osg::Referenced::public_deleteUsingDeleteHandler() const
	static int _bind_public_deleteUsingDeleteHandler(lua_State *L) {
		if (!_lg_typecheck_public_deleteUsingDeleteHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_deleteUsingDeleteHandler() const function, expected prototype:\nvoid osg::Referenced::public_deleteUsingDeleteHandler() const\nClass arguments details:\n");
		}


		wrapper_osgViewer_WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_WindowSizeHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const");
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_toggleFullscreen",_bind_public_toggleFullscreen},
		{"protected_changeWindowedResolution",_bind_public_changeWindowedResolution},
		{"protected_getNearestResolution",_bind_public_getNearestResolution},
		{"protected_signalObserversAndDelete",_bind_public_signalObserversAndDelete},
		{"protected_deleteUsingDeleteHandler",_bind_public_deleteUsingDeleteHandler},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

