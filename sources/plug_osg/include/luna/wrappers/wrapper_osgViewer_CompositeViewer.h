#ifndef _WRAPPERS_WRAPPER_OSGVIEWER_COMPOSITEVIEWER_H_
#define _WRAPPERS_WRAPPER_OSGVIEWER_COMPOSITEVIEWER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgViewer/CompositeViewer>

class wrapper_osgViewer_CompositeViewer : public osgViewer::CompositeViewer {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgViewer_CompositeViewer(lua_State* L, lua_Table* dum) : osgViewer::CompositeViewer(), _obj(L,-1) {};
	wrapper_osgViewer_CompositeViewer(lua_State* L, lua_Table* dum, const osgViewer::CompositeViewer & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgViewer::CompositeViewer(arg1, copyop), _obj(L,-1) {};
	wrapper_osgViewer_CompositeViewer(lua_State* L, lua_Table* dum, osg::ArgumentParser & arguments) : osgViewer::CompositeViewer(arguments), _obj(L,-1) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return osg::Object::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return osg::Object::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return osg::Object::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return osg::Object::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return osg::Object::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osg::Object::releaseGLObjects(arg1);
	};

	// void osgViewer::ViewerBase::frame(double simulationTime = DBL_MAX)
	void frame(double simulationTime = DBL_MAX) {
		if(_obj.pushFunction("frame")) {
			_obj.pushArg(simulationTime);
			return (_obj.callFunction<void>());
		}

		return osgViewer::ViewerBase::frame(simulationTime);
	};

	// void osgViewer::ViewerBase::renderingTraversals()
	void renderingTraversals() {
		if(_obj.pushFunction("renderingTraversals")) {
			return (_obj.callFunction<void>());
		}

		return osgViewer::ViewerBase::renderingTraversals();
	};

	// void osgViewer::ViewerBase::getWindows(osgViewer::ViewerBase::Windows & windows, bool onlyValid = true)
	void getWindows(osgViewer::ViewerBase::Windows & windows, bool onlyValid = true) {
		if(_obj.pushFunction("getWindows")) {
			_obj.pushArg(&windows);
			_obj.pushArg(onlyValid);
			return (_obj.callFunction<void>());
		}

		return osgViewer::ViewerBase::getWindows(windows, onlyValid);
	};

	// osg::Object * osgViewer::CompositeViewer::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return osgViewer::CompositeViewer::cloneType();
	};

	// osg::Object * osgViewer::CompositeViewer::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return osgViewer::CompositeViewer::clone(arg1);
	};

	// bool osgViewer::CompositeViewer::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osgViewer::CompositeViewer::isSameKindAs(obj);
	};

	// const char * osgViewer::CompositeViewer::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osgViewer::CompositeViewer::libraryName();
	};

	// const char * osgViewer::CompositeViewer::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osgViewer::CompositeViewer::className();
	};

	// bool osgViewer::CompositeViewer::readConfiguration(const std::string & filename)
	bool readConfiguration(const std::string & filename) {
		if(_obj.pushFunction("readConfiguration")) {
			_obj.pushArg(filename);
			return (_obj.callFunction<bool>());
		}

		return osgViewer::CompositeViewer::readConfiguration(filename);
	};

	// void osgViewer::CompositeViewer::setViewerStats(osg::Stats * stats)
	void setViewerStats(osg::Stats * stats) {
		if(_obj.pushFunction("setViewerStats")) {
			_obj.pushArg(stats);
			return (_obj.callFunction<void>());
		}

		return osgViewer::CompositeViewer::setViewerStats(stats);
	};

	// osg::Stats * osgViewer::CompositeViewer::getViewerStats()
	osg::Stats * getViewerStats() {
		if(_obj.pushFunction("getViewerStats")) {
			return (_obj.callFunction<osg::Stats*>());
		}

		return osgViewer::CompositeViewer::getViewerStats();
	};

	// const osg::Stats * osgViewer::CompositeViewer::getViewerStats() const
	const osg::Stats * getViewerStats() const {
		if(_obj.pushFunction("getViewerStats")) {
			return (_obj.callFunction<osg::Stats*>());
		}

		return osgViewer::CompositeViewer::getViewerStats();
	};

	// bool osgViewer::CompositeViewer::isRealized() const
	bool isRealized() const {
		if(_obj.pushFunction("isRealized")) {
			return (_obj.callFunction<bool>());
		}

		return osgViewer::CompositeViewer::isRealized();
	};

	// void osgViewer::CompositeViewer::realize()
	void realize() {
		if(_obj.pushFunction("realize")) {
			return (_obj.callFunction<void>());
		}

		return osgViewer::CompositeViewer::realize();
	};

	// void osgViewer::CompositeViewer::setStartTick(unsigned long long tick)
	void setStartTick(unsigned long long tick) {
		if(_obj.pushFunction("setStartTick")) {
			_obj.pushArg(tick);
			return (_obj.callFunction<void>());
		}

		return osgViewer::CompositeViewer::setStartTick(tick);
	};

	// double osgViewer::CompositeViewer::elapsedTime()
	double elapsedTime() {
		if(_obj.pushFunction("elapsedTime")) {
			return (_obj.callFunction<double>());
		}

		return osgViewer::CompositeViewer::elapsedTime();
	};

	// osg::FrameStamp * osgViewer::CompositeViewer::getViewerFrameStamp()
	osg::FrameStamp * getViewerFrameStamp() {
		if(_obj.pushFunction("getViewerFrameStamp")) {
			return (_obj.callFunction<osg::FrameStamp*>());
		}

		return osgViewer::CompositeViewer::getViewerFrameStamp();
	};

	// int osgViewer::CompositeViewer::run()
	int run() {
		if(_obj.pushFunction("run")) {
			return (_obj.callFunction<int>());
		}

		return osgViewer::CompositeViewer::run();
	};

	// bool osgViewer::CompositeViewer::checkNeedToDoFrame()
	bool checkNeedToDoFrame() {
		if(_obj.pushFunction("checkNeedToDoFrame")) {
			return (_obj.callFunction<bool>());
		}

		return osgViewer::CompositeViewer::checkNeedToDoFrame();
	};

	// void osgViewer::CompositeViewer::advance(double simulationTime = DBL_MAX)
	void advance(double simulationTime = DBL_MAX) {
		if(_obj.pushFunction("advance")) {
			_obj.pushArg(simulationTime);
			return (_obj.callFunction<void>());
		}

		return osgViewer::CompositeViewer::advance(simulationTime);
	};

	// void osgViewer::CompositeViewer::eventTraversal()
	void eventTraversal() {
		if(_obj.pushFunction("eventTraversal")) {
			return (_obj.callFunction<void>());
		}

		return osgViewer::CompositeViewer::eventTraversal();
	};

	// void osgViewer::CompositeViewer::updateTraversal()
	void updateTraversal() {
		if(_obj.pushFunction("updateTraversal")) {
			return (_obj.callFunction<void>());
		}

		return osgViewer::CompositeViewer::updateTraversal();
	};

	// void osgViewer::CompositeViewer::getCameras(osgViewer::ViewerBase::Cameras & cameras, bool onlyActive = true)
	void getCameras(osgViewer::ViewerBase::Cameras & cameras, bool onlyActive = true) {
		if(_obj.pushFunction("getCameras")) {
			_obj.pushArg(&cameras);
			_obj.pushArg(onlyActive);
			return (_obj.callFunction<void>());
		}

		return osgViewer::CompositeViewer::getCameras(cameras, onlyActive);
	};

	// void osgViewer::CompositeViewer::getContexts(osgViewer::ViewerBase::Contexts & contexts, bool onlyValid = true)
	void getContexts(osgViewer::ViewerBase::Contexts & contexts, bool onlyValid = true) {
		if(_obj.pushFunction("getContexts")) {
			_obj.pushArg(&contexts);
			_obj.pushArg(onlyValid);
			return (_obj.callFunction<void>());
		}

		return osgViewer::CompositeViewer::getContexts(contexts, onlyValid);
	};

	// void osgViewer::CompositeViewer::getScenes(osgViewer::ViewerBase::Scenes & scenes, bool onlyValid = true)
	void getScenes(osgViewer::ViewerBase::Scenes & scenes, bool onlyValid = true) {
		if(_obj.pushFunction("getScenes")) {
			_obj.pushArg(&scenes);
			_obj.pushArg(onlyValid);
			return (_obj.callFunction<void>());
		}

		return osgViewer::CompositeViewer::getScenes(scenes, onlyValid);
	};

	// void osgViewer::CompositeViewer::getViews(osgViewer::ViewerBase::Views & views, bool onlyValid = true)
	void getViews(osgViewer::ViewerBase::Views & views, bool onlyValid = true) {
		if(_obj.pushFunction("getViews")) {
			_obj.pushArg(&views);
			_obj.pushArg(onlyValid);
			return (_obj.callFunction<void>());
		}

		return osgViewer::CompositeViewer::getViews(views, onlyValid);
	};

	// void osgViewer::CompositeViewer::getUsage(osg::ApplicationUsage & usage) const
	void getUsage(osg::ApplicationUsage & usage) const {
		if(_obj.pushFunction("getUsage")) {
			_obj.pushArg(&usage);
			return (_obj.callFunction<void>());
		}

		return osgViewer::CompositeViewer::getUsage(usage);
	};


protected:
	// void osgViewer::CompositeViewer::viewerInit()

};




#endif
