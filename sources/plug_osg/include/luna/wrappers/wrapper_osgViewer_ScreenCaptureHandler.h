#ifndef _WRAPPERS_WRAPPER_OSGVIEWER_SCREENCAPTUREHANDLER_H_
#define _WRAPPERS_WRAPPER_OSGVIEWER_SCREENCAPTUREHANDLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgViewer/ViewerEventHandlers>

class wrapper_osgViewer_ScreenCaptureHandler : public osgViewer::ScreenCaptureHandler, public luna_wrapper_base {

public:
		

	~wrapper_osgViewer_ScreenCaptureHandler() {
		logDEBUG3("Calling delete function for wrapper osgViewer_ScreenCaptureHandler");
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgViewer_ScreenCaptureHandler(lua_State* L, lua_Table* dum, osgViewer::ScreenCaptureHandler::CaptureOperation * defaultOperation = 0, int numFrames = 1) : osgViewer::ScreenCaptureHandler(defaultOperation, numFrames), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return ScreenCaptureHandler::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return ScreenCaptureHandler::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return ScreenCaptureHandler::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return ScreenCaptureHandler::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ScreenCaptureHandler::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ScreenCaptureHandler::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ScreenCaptureHandler::releaseGLObjects(arg1);
	};

	// osg::Object * osgGA::GUIEventHandler::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return ScreenCaptureHandler::cloneType();
	};

	// osg::Object * osgGA::GUIEventHandler::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return ScreenCaptureHandler::clone(arg1);
	};

	// bool osgGA::GUIEventHandler::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return ScreenCaptureHandler::isSameKindAs(obj);
	};

	// const char * osgGA::GUIEventHandler::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return ScreenCaptureHandler::libraryName();
	};

	// const char * osgGA::GUIEventHandler::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return ScreenCaptureHandler::className();
	};

	// void osgGA::GUIEventHandler::event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	void event(osg::NodeVisitor * nv, osg::Drawable * drawable) {
		if(_obj.pushFunction("event")) {
			_obj.pushArg(nv);
			_obj.pushArg(drawable);
			return (_obj.callFunction<void>());
		}

		return ScreenCaptureHandler::event(nv, drawable);
	};

	// void osgGA::GUIEventHandler::operator()(osg::Node * node, osg::NodeVisitor * nv)
	void operator()(osg::Node * node, osg::NodeVisitor * nv) {
		if(_obj.pushFunction("op_call")) {
			_obj.pushArg(node);
			_obj.pushArg(nv);
			return (_obj.callFunction<void>());
		}

		return ScreenCaptureHandler::operator()(node, nv);
	};

	// bool osgViewer::ScreenCaptureHandler::handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	bool handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) {
		if(_obj.pushFunction("handle")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(&arg2);
			return (_obj.callFunction<bool>());
		}

		return ScreenCaptureHandler::handle(arg1, arg2);
	};

	// void osgViewer::ScreenCaptureHandler::captureNextFrame(osgViewer::ViewerBase & viewer)
	void captureNextFrame(osgViewer::ViewerBase & viewer) {
		if(_obj.pushFunction("captureNextFrame")) {
			_obj.pushArg(&viewer);
			return (_obj.callFunction<void>());
		}

		return ScreenCaptureHandler::captureNextFrame(viewer);
	};

	// void osgViewer::ScreenCaptureHandler::getUsage(osg::ApplicationUsage & usage) const
	void getUsage(osg::ApplicationUsage & usage) const {
		if(_obj.pushFunction("getUsage")) {
			_obj.pushArg(&usage);
			return (_obj.callFunction<void>());
		}

		return ScreenCaptureHandler::getUsage(usage);
	};


	// Protected non-virtual methods:
	// void osgViewer::ScreenCaptureHandler::addCallbackToViewer(osgViewer::ViewerBase & viewer)
	void public_addCallbackToViewer(osgViewer::ViewerBase & viewer) {
		return osgViewer::ScreenCaptureHandler::addCallbackToViewer(viewer);
	};

	// void osgViewer::ScreenCaptureHandler::removeCallbackFromViewer(osgViewer::ViewerBase & viewer)
	void public_removeCallbackFromViewer(osgViewer::ViewerBase & viewer) {
		return osgViewer::ScreenCaptureHandler::removeCallbackFromViewer(viewer);
	};

	// osg::Camera * osgViewer::ScreenCaptureHandler::findAppropriateCameraForCallback(osgViewer::ViewerBase & viewer)
	osg::Camera * public_findAppropriateCameraForCallback(osgViewer::ViewerBase & viewer) {
		return osgViewer::ScreenCaptureHandler::findAppropriateCameraForCallback(viewer);
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
	inline static bool _lg_typecheck_public_addCallbackToViewer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_removeCallbackFromViewer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_findAppropriateCameraForCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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
	// void osgViewer::ScreenCaptureHandler::public_addCallbackToViewer(osgViewer::ViewerBase & viewer)
	static int _bind_public_addCallbackToViewer(lua_State *L) {
		if (!_lg_typecheck_public_addCallbackToViewer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::public_addCallbackToViewer(osgViewer::ViewerBase & viewer) function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::public_addCallbackToViewer(osgViewer::ViewerBase & viewer)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgViewer::ViewerBase* viewer_ptr=(Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,2));
		if( !viewer_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg viewer in osgViewer::ScreenCaptureHandler::public_addCallbackToViewer function");
		}
		osgViewer::ViewerBase & viewer=*viewer_ptr;

		wrapper_osgViewer_ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_ScreenCaptureHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::public_addCallbackToViewer(osgViewer::ViewerBase &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_addCallbackToViewer(viewer);

		return 0;
	}

	// void osgViewer::ScreenCaptureHandler::public_removeCallbackFromViewer(osgViewer::ViewerBase & viewer)
	static int _bind_public_removeCallbackFromViewer(lua_State *L) {
		if (!_lg_typecheck_public_removeCallbackFromViewer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::public_removeCallbackFromViewer(osgViewer::ViewerBase & viewer) function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::public_removeCallbackFromViewer(osgViewer::ViewerBase & viewer)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgViewer::ViewerBase* viewer_ptr=(Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,2));
		if( !viewer_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg viewer in osgViewer::ScreenCaptureHandler::public_removeCallbackFromViewer function");
		}
		osgViewer::ViewerBase & viewer=*viewer_ptr;

		wrapper_osgViewer_ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_ScreenCaptureHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::public_removeCallbackFromViewer(osgViewer::ViewerBase &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_removeCallbackFromViewer(viewer);

		return 0;
	}

	// osg::Camera * osgViewer::ScreenCaptureHandler::public_findAppropriateCameraForCallback(osgViewer::ViewerBase & viewer)
	static int _bind_public_findAppropriateCameraForCallback(lua_State *L) {
		if (!_lg_typecheck_public_findAppropriateCameraForCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Camera * osgViewer::ScreenCaptureHandler::public_findAppropriateCameraForCallback(osgViewer::ViewerBase & viewer) function, expected prototype:\nosg::Camera * osgViewer::ScreenCaptureHandler::public_findAppropriateCameraForCallback(osgViewer::ViewerBase & viewer)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgViewer::ViewerBase* viewer_ptr=(Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,2));
		if( !viewer_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg viewer in osgViewer::ScreenCaptureHandler::public_findAppropriateCameraForCallback function");
		}
		osgViewer::ViewerBase & viewer=*viewer_ptr;

		wrapper_osgViewer_ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_ScreenCaptureHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Camera * osgViewer::ScreenCaptureHandler::public_findAppropriateCameraForCallback(osgViewer::ViewerBase &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Camera * lret = self->public_findAppropriateCameraForCallback(viewer);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

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

		wrapper_osgViewer_ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_ScreenCaptureHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_signalObserversAndDelete(bool, bool) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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


		wrapper_osgViewer_ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_ScreenCaptureHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_addCallbackToViewer",_bind_public_addCallbackToViewer},
		{"protected_removeCallbackFromViewer",_bind_public_removeCallbackFromViewer},
		{"protected_findAppropriateCameraForCallback",_bind_public_findAppropriateCameraForCallback},
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

