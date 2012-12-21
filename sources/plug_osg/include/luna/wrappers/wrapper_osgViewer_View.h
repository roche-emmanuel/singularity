#ifndef _WRAPPERS_WRAPPER_OSGVIEWER_VIEW_H_
#define _WRAPPERS_WRAPPER_OSGVIEWER_VIEW_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgViewer/View>

class wrapper_osgViewer_View : public osgViewer::View, public luna_wrapper_base {

public:
		

	~wrapper_osgViewer_View() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgViewer_View(lua_State* L, lua_Table* dum) : osgViewer::View(), luna_wrapper_base(L) {};
	wrapper_osgViewer_View(lua_State* L, lua_Table* dum, const osgViewer::View & view, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgViewer::View(view, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return View::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return View::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return View::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return View::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return View::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return View::releaseGLObjects(arg1);
	};

	// osg::Object * osgViewer::View::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return View::cloneType();
	};

	// osg::Object * osgViewer::View::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return View::clone(arg1);
	};

	// bool osgViewer::View::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return View::isSameKindAs(obj);
	};

	// const char * osgViewer::View::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return View::libraryName();
	};

	// const char * osgViewer::View::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return View::className();
	};

	// osg::View * osgViewer::View::asView()
	osg::View * asView() {
		if(_obj.pushFunction("asView")) {
			return (_obj.callFunction<osg::View*>());
		}

		return View::asView();
	};

	// void osgViewer::View::take(osg::View & rhs)
	void take(osg::View & rhs) {
		if(_obj.pushFunction("take")) {
			_obj.pushArg(&rhs);
			return (_obj.callFunction<void>());
		}

		return View::take(rhs);
	};

	// void osgViewer::View::setStartTick(__int64 tick)
	void setStartTick(__int64 tick) {
		if(_obj.pushFunction("setStartTick")) {
			_obj.pushArg(tick);
			return (_obj.callFunction<void>());
		}

		return View::setStartTick(tick);
	};

	// void osgViewer::View::setSceneData(osg::Node * node)
	void setSceneData(osg::Node * node) {
		if(_obj.pushFunction("setSceneData")) {
			_obj.pushArg(node);
			return (_obj.callFunction<void>());
		}

		return View::setSceneData(node);
	};

	// void osgViewer::View::requestRedraw()
	void requestRedraw() {
		if(_obj.pushFunction("requestRedraw")) {
			return (_obj.callFunction<void>());
		}

		return View::requestRedraw();
	};

	// void osgViewer::View::requestContinuousUpdate(bool needed = true)
	void requestContinuousUpdate(bool needed = true) {
		if(_obj.pushFunction("requestContinuousUpdate")) {
			_obj.pushArg(needed);
			return (_obj.callFunction<void>());
		}

		return View::requestContinuousUpdate(needed);
	};

	// void osgViewer::View::requestWarpPointer(float x, float y)
	void requestWarpPointer(float x, float y) {
		if(_obj.pushFunction("requestWarpPointer")) {
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return View::requestWarpPointer(x, y);
	};


protected:
	// osg::GraphicsOperation * osgViewer::View::createRenderer(osg::Camera * camera)
	osg::GraphicsOperation * createRenderer(osg::Camera * camera) {
		if(_obj.pushFunction("createRenderer")) {
			_obj.pushArg(camera);
			return (_obj.callFunction<osg::GraphicsOperation*>());
		}

		return View::createRenderer(camera);
	};


};




#endif

