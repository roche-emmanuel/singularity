#ifndef _WRAPPERS_WRAPPER_OSGVIEWER_VIEWER_H_
#define _WRAPPERS_WRAPPER_OSGVIEWER_VIEWER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgViewer/Viewer>

class wrapper_osgViewer_Viewer : public osgViewer::Viewer {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgViewer_Viewer(lua_State* L, lua_Table* dum) : osgViewer::Viewer(), _obj(L,-1) {};
	wrapper_osgViewer_Viewer(lua_State* L, lua_Table* dum, osg::ArgumentParser & arguments) : osgViewer::Viewer(arguments), _obj(L,-1) {};
	wrapper_osgViewer_Viewer(lua_State* L, lua_Table* dum, const osgViewer::Viewer & viewer, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgViewer::Viewer(viewer, copyop), _obj(L,-1) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Viewer::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return Viewer::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Viewer::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Viewer::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Viewer::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return Viewer::releaseGLObjects(arg1);
	};

	// void osgViewer::ViewerBase::frame(double simulationTime = DBL_MAX)
	void frame(double simulationTime = DBL_MAX) {
		if(_obj.pushFunction("frame")) {
			_obj.pushArg(simulationTime);
			return (_obj.callFunction<void>());
		}

		return Viewer::frame(simulationTime);
	};

	// void osgViewer::ViewerBase::renderingTraversals()
	void renderingTraversals() {
		if(_obj.pushFunction("renderingTraversals")) {
			return (_obj.callFunction<void>());
		}

		return Viewer::renderingTraversals();
	};

	// void osgViewer::ViewerBase::getWindows(osgViewer::ViewerBase::Windows & windows, bool onlyValid = true)
	void getWindows(osgViewer::ViewerBase::Windows & windows, bool onlyValid = true) {
		if(_obj.pushFunction("getWindows")) {
			_obj.pushArg(&windows);
			_obj.pushArg(onlyValid);
			return (_obj.callFunction<void>());
		}

		return Viewer::getWindows(windows, onlyValid);
	};

	// osg::View * osgViewer::View::asView()
	osg::View * asView() {
		if(_obj.pushFunction("asView")) {
			return (_obj.callFunction<osg::View*>());
		}

		return Viewer::asView();
	};

	// void osgViewer::View::requestRedraw()
	void requestRedraw() {
		if(_obj.pushFunction("requestRedraw")) {
			return (_obj.callFunction<void>());
		}

		return Viewer::requestRedraw();
	};

	// void osgViewer::View::requestContinuousUpdate(bool needed = true)
	void requestContinuousUpdate(bool needed = true) {
		if(_obj.pushFunction("requestContinuousUpdate")) {
			_obj.pushArg(needed);
			return (_obj.callFunction<void>());
		}

		return Viewer::requestContinuousUpdate(needed);
	};

	// void osgViewer::View::requestWarpPointer(float x, float y)
	void requestWarpPointer(float x, float y) {
		if(_obj.pushFunction("requestWarpPointer")) {
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return Viewer::requestWarpPointer(x, y);
	};

	// osg::Object * osgViewer::Viewer::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return Viewer::cloneType();
	};

	// osg::Object * osgViewer::Viewer::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return Viewer::clone(arg1);
	};

	// bool osgViewer::Viewer::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Viewer::isSameKindAs(obj);
	};

	// const char * osgViewer::Viewer::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return Viewer::libraryName();
	};

	// const char * osgViewer::Viewer::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return Viewer::className();
	};

	// void osgViewer::Viewer::take(osg::View & rhs)
	void take(osg::View & rhs) {
		if(_obj.pushFunction("take")) {
			_obj.pushArg(&rhs);
			return (_obj.callFunction<void>());
		}

		return Viewer::take(rhs);
	};

	// void osgViewer::Viewer::setViewerStats(osg::Stats * stats)
	void setViewerStats(osg::Stats * stats) {
		if(_obj.pushFunction("setViewerStats")) {
			_obj.pushArg(stats);
			return (_obj.callFunction<void>());
		}

		return Viewer::setViewerStats(stats);
	};

	// osg::Stats * osgViewer::Viewer::getViewerStats()
	osg::Stats * getViewerStats() {
		if(_obj.pushFunction("getViewerStats")) {
			return (_obj.callFunction<osg::Stats*>());
		}

		return Viewer::getViewerStats();
	};

	// const osg::Stats * osgViewer::Viewer::getViewerStats() const
	const osg::Stats * getViewerStats() const {
		if(_obj.pushFunction("getViewerStats")) {
			return (_obj.callFunction<osg::Stats*>());
		}

		return Viewer::getViewerStats();
	};

	// bool osgViewer::Viewer::readConfiguration(const std::string & filename)
	bool readConfiguration(const std::string & filename) {
		if(_obj.pushFunction("readConfiguration")) {
			_obj.pushArg(filename);
			return (_obj.callFunction<bool>());
		}

		return Viewer::readConfiguration(filename);
	};

	// bool osgViewer::Viewer::isRealized() const
	bool isRealized() const {
		if(_obj.pushFunction("isRealized")) {
			return (_obj.callFunction<bool>());
		}

		return Viewer::isRealized();
	};

	// void osgViewer::Viewer::realize()
	void realize() {
		if(_obj.pushFunction("realize")) {
			return (_obj.callFunction<void>());
		}

		return Viewer::realize();
	};

	// void osgViewer::Viewer::setStartTick(unsigned long long tick)
	void setStartTick(unsigned long long tick) {
		if(_obj.pushFunction("setStartTick")) {
			_obj.pushArg(tick);
			return (_obj.callFunction<void>());
		}

		return Viewer::setStartTick(tick);
	};

	// void osgViewer::Viewer::setSceneData(osg::Node * node)
	void setSceneData(osg::Node * node) {
		if(_obj.pushFunction("setSceneData")) {
			_obj.pushArg(node);
			return (_obj.callFunction<void>());
		}

		return Viewer::setSceneData(node);
	};

	// osgViewer::GraphicsWindowEmbedded * osgViewer::Viewer::setUpViewerAsEmbeddedInWindow(int x, int y, int width, int height)
	osgViewer::GraphicsWindowEmbedded * setUpViewerAsEmbeddedInWindow(int x, int y, int width, int height) {
		if(_obj.pushFunction("setUpViewerAsEmbeddedInWindow")) {
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(width);
			_obj.pushArg(height);
			return (_obj.callFunction<osgViewer::GraphicsWindowEmbedded*>());
		}

		return Viewer::setUpViewerAsEmbeddedInWindow(x, y, width, height);
	};

	// double osgViewer::Viewer::elapsedTime()
	double elapsedTime() {
		if(_obj.pushFunction("elapsedTime")) {
			return (_obj.callFunction<double>());
		}

		return Viewer::elapsedTime();
	};

	// osg::FrameStamp * osgViewer::Viewer::getViewerFrameStamp()
	osg::FrameStamp * getViewerFrameStamp() {
		if(_obj.pushFunction("getViewerFrameStamp")) {
			return (_obj.callFunction<osg::FrameStamp*>());
		}

		return Viewer::getViewerFrameStamp();
	};

	// int osgViewer::Viewer::run()
	int run() {
		if(_obj.pushFunction("run")) {
			return (_obj.callFunction<int>());
		}

		return Viewer::run();
	};

	// bool osgViewer::Viewer::checkNeedToDoFrame()
	bool checkNeedToDoFrame() {
		if(_obj.pushFunction("checkNeedToDoFrame")) {
			return (_obj.callFunction<bool>());
		}

		return Viewer::checkNeedToDoFrame();
	};

	// void osgViewer::Viewer::advance(double simulationTime = DBL_MAX)
	void advance(double simulationTime = DBL_MAX) {
		if(_obj.pushFunction("advance")) {
			_obj.pushArg(simulationTime);
			return (_obj.callFunction<void>());
		}

		return Viewer::advance(simulationTime);
	};

	// void osgViewer::Viewer::eventTraversal()
	void eventTraversal() {
		if(_obj.pushFunction("eventTraversal")) {
			return (_obj.callFunction<void>());
		}

		return Viewer::eventTraversal();
	};

	// void osgViewer::Viewer::updateTraversal()
	void updateTraversal() {
		if(_obj.pushFunction("updateTraversal")) {
			return (_obj.callFunction<void>());
		}

		return Viewer::updateTraversal();
	};

	// void osgViewer::Viewer::getCameras(osgViewer::ViewerBase::Cameras & cameras, bool onlyActive = true)
	void getCameras(osgViewer::ViewerBase::Cameras & cameras, bool onlyActive = true) {
		if(_obj.pushFunction("getCameras")) {
			_obj.pushArg(&cameras);
			_obj.pushArg(onlyActive);
			return (_obj.callFunction<void>());
		}

		return Viewer::getCameras(cameras, onlyActive);
	};

	// void osgViewer::Viewer::getContexts(osgViewer::ViewerBase::Contexts & contexts, bool onlyValid = true)
	void getContexts(osgViewer::ViewerBase::Contexts & contexts, bool onlyValid = true) {
		if(_obj.pushFunction("getContexts")) {
			_obj.pushArg(&contexts);
			_obj.pushArg(onlyValid);
			return (_obj.callFunction<void>());
		}

		return Viewer::getContexts(contexts, onlyValid);
	};

	// void osgViewer::Viewer::getScenes(osgViewer::ViewerBase::Scenes & scenes, bool onlyValid = true)
	void getScenes(osgViewer::ViewerBase::Scenes & scenes, bool onlyValid = true) {
		if(_obj.pushFunction("getScenes")) {
			_obj.pushArg(&scenes);
			_obj.pushArg(onlyValid);
			return (_obj.callFunction<void>());
		}

		return Viewer::getScenes(scenes, onlyValid);
	};

	// void osgViewer::Viewer::getViews(osgViewer::ViewerBase::Views & views, bool onlyValid = true)
	void getViews(osgViewer::ViewerBase::Views & views, bool onlyValid = true) {
		if(_obj.pushFunction("getViews")) {
			_obj.pushArg(&views);
			_obj.pushArg(onlyValid);
			return (_obj.callFunction<void>());
		}

		return Viewer::getViews(views, onlyValid);
	};

	// void osgViewer::Viewer::getUsage(osg::ApplicationUsage & usage) const
	void getUsage(osg::ApplicationUsage & usage) const {
		if(_obj.pushFunction("getUsage")) {
			_obj.pushArg(&usage);
			return (_obj.callFunction<void>());
		}

		return Viewer::getUsage(usage);
	};


protected:
	// osg::GraphicsOperation * osgViewer::View::createRenderer(osg::Camera * camera)
	osg::GraphicsOperation * createRenderer(osg::Camera * camera) {
		if(_obj.pushFunction("createRenderer")) {
			_obj.pushArg(camera);
			return (_obj.callFunction<osg::GraphicsOperation*>());
		}

		return Viewer::createRenderer(camera);
	};

	// void osgViewer::Viewer::viewerInit()
	void viewerInit() {
		if(_obj.pushFunction("viewerInit")) {
			return (_obj.callFunction<void>());
		}

		return Viewer::viewerInit();
	};


};




#endif

