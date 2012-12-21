#ifndef _WRAPPERS_WRAPPER_OSGUTIL_SCENEVIEW_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_SCENEVIEW_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/SceneView>

class wrapper_osgUtil_SceneView : public osgUtil::SceneView, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_SceneView() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_SceneView(lua_State* L, lua_Table* dum, osg::DisplaySettings * ds = NULL) : osgUtil::SceneView(ds), luna_wrapper_base(L) {};
	wrapper_osgUtil_SceneView(lua_State* L, lua_Table* dum, const osgUtil::SceneView & sceneview, const osg::CopyOp & copyop = osg::CopyOp ()) : osgUtil::SceneView(sceneview, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return SceneView::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return SceneView::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return SceneView::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return SceneView::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return SceneView::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return SceneView::releaseGLObjects(arg1);
	};

	// osg::Object * osgUtil::SceneView::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return SceneView::cloneType();
	};

	// osg::Object * osgUtil::SceneView::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return SceneView::clone(arg1);
	};

	// bool osgUtil::SceneView::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return SceneView::isSameKindAs(obj);
	};

	// const char * osgUtil::SceneView::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return SceneView::libraryName();
	};

	// const char * osgUtil::SceneView::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return SceneView::className();
	};

	// void osgUtil::SceneView::setDefaults()
	void setDefaults() {
		if(_obj.pushFunction("setDefaults")) {
			return (_obj.callFunction<void>());
		}

		return SceneView::setDefaults();
	};

	// void osgUtil::SceneView::setDefaults(unsigned int options)
	void setDefaults(unsigned int options) {
		if(_obj.pushFunction("setDefaults")) {
			_obj.pushArg(options);
			return (_obj.callFunction<void>());
		}

		return SceneView::setDefaults(options);
	};

	// osg::Matrixd osgUtil::SceneView::computeLeftEyeProjectionImplementation(const osg::Matrixd & projection) const
	osg::Matrixd computeLeftEyeProjectionImplementation(const osg::Matrixd & projection) const {
		if(_obj.pushFunction("computeLeftEyeProjectionImplementation")) {
			_obj.pushArg(&projection);
			return *(_obj.callFunction<osg::Matrixd*>());
		}

		return SceneView::computeLeftEyeProjectionImplementation(projection);
	};

	// osg::Matrixd osgUtil::SceneView::computeLeftEyeViewImplementation(const osg::Matrixd & view) const
	osg::Matrixd computeLeftEyeViewImplementation(const osg::Matrixd & view) const {
		if(_obj.pushFunction("computeLeftEyeViewImplementation")) {
			_obj.pushArg(&view);
			return *(_obj.callFunction<osg::Matrixd*>());
		}

		return SceneView::computeLeftEyeViewImplementation(view);
	};

	// osg::Matrixd osgUtil::SceneView::computeRightEyeProjectionImplementation(const osg::Matrixd & projection) const
	osg::Matrixd computeRightEyeProjectionImplementation(const osg::Matrixd & projection) const {
		if(_obj.pushFunction("computeRightEyeProjectionImplementation")) {
			_obj.pushArg(&projection);
			return *(_obj.callFunction<osg::Matrixd*>());
		}

		return SceneView::computeRightEyeProjectionImplementation(projection);
	};

	// osg::Matrixd osgUtil::SceneView::computeRightEyeViewImplementation(const osg::Matrixd & view) const
	osg::Matrixd computeRightEyeViewImplementation(const osg::Matrixd & view) const {
		if(_obj.pushFunction("computeRightEyeViewImplementation")) {
			_obj.pushArg(&view);
			return *(_obj.callFunction<osg::Matrixd*>());
		}

		return SceneView::computeRightEyeViewImplementation(view);
	};

	// void osgUtil::SceneView::inheritCullSettings(const osg::CullSettings & settings)
	void inheritCullSettings(const osg::CullSettings & settings) {
		if(_obj.pushFunction("inheritCullSettings")) {
			_obj.pushArg(&settings);
			return (_obj.callFunction<void>());
		}

		return SceneView::inheritCullSettings(settings);
	};

	// void osgUtil::SceneView::inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask)
	void inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask) {
		if(_obj.pushFunction("inheritCullSettings")) {
			_obj.pushArg(&settings);
			_obj.pushArg(inheritanceMask);
			return (_obj.callFunction<void>());
		}

		return SceneView::inheritCullSettings(settings, inheritanceMask);
	};

	// void osgUtil::SceneView::init()
	void init() {
		if(_obj.pushFunction("init")) {
			return (_obj.callFunction<void>());
		}

		return SceneView::init();
	};

	// void osgUtil::SceneView::update()
	void update() {
		if(_obj.pushFunction("update")) {
			return (_obj.callFunction<void>());
		}

		return SceneView::update();
	};

	// void osgUtil::SceneView::cull()
	void cull() {
		if(_obj.pushFunction("cull")) {
			return (_obj.callFunction<void>());
		}

		return SceneView::cull();
	};

	// void osgUtil::SceneView::draw()
	void draw() {
		if(_obj.pushFunction("draw")) {
			return (_obj.callFunction<void>());
		}

		return SceneView::draw();
	};

	// void osgUtil::SceneView::releaseAllGLObjects()
	void releaseAllGLObjects() {
		if(_obj.pushFunction("releaseAllGLObjects")) {
			return (_obj.callFunction<void>());
		}

		return SceneView::releaseAllGLObjects();
	};

	// void osgUtil::SceneView::flushAllDeletedGLObjects()
	void flushAllDeletedGLObjects() {
		if(_obj.pushFunction("flushAllDeletedGLObjects")) {
			return (_obj.callFunction<void>());
		}

		return SceneView::flushAllDeletedGLObjects();
	};

	// void osgUtil::SceneView::flushDeletedGLObjects(double & availableTime)
	void flushDeletedGLObjects(double & availableTime) {
		if(_obj.pushFunction("flushDeletedGLObjects")) {
			_obj.pushArg(availableTime);
			return (_obj.callFunction<void>());
		}

		return SceneView::flushDeletedGLObjects(availableTime);
	};


protected:
	// bool osgUtil::SceneView::cullStage(const osg::Matrixd & projection, const osg::Matrixd & modelview, osgUtil::CullVisitor * cullVisitor, osgUtil::StateGraph * rendergraph, osgUtil::RenderStage * renderStage, osg::Viewport * viewport)
	bool cullStage(const osg::Matrixd & projection, const osg::Matrixd & modelview, osgUtil::CullVisitor * cullVisitor, osgUtil::StateGraph * rendergraph, osgUtil::RenderStage * renderStage, osg::Viewport * viewport) {
		if(_obj.pushFunction("cullStage")) {
			_obj.pushArg(&projection);
			_obj.pushArg(&modelview);
			_obj.pushArg(cullVisitor);
			_obj.pushArg(rendergraph);
			_obj.pushArg(renderStage);
			_obj.pushArg(viewport);
			return (_obj.callFunction<bool>());
		}

		return SceneView::cullStage(projection, modelview, cullVisitor, rendergraph, renderStage, viewport);
	};


};




#endif

