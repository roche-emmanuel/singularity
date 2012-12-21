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
	
	wrapper_osgViewer_WindowSizeHandler(lua_State* L, lua_Table* dum) : osgViewer::WindowSizeHandler(), luna_wrapper_base(L) {};

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
		if(_obj.pushFunction("operator()")) {
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




};




#endif

