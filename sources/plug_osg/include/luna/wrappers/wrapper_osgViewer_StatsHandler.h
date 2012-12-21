#ifndef _WRAPPERS_WRAPPER_OSGVIEWER_STATSHANDLER_H_
#define _WRAPPERS_WRAPPER_OSGVIEWER_STATSHANDLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgViewer/ViewerEventHandlers>

class wrapper_osgViewer_StatsHandler : public osgViewer::StatsHandler, public luna_wrapper_base {

public:
		

	~wrapper_osgViewer_StatsHandler() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgViewer_StatsHandler(lua_State* L, lua_Table* dum) : osgViewer::StatsHandler(), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return StatsHandler::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return StatsHandler::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return StatsHandler::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return StatsHandler::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return StatsHandler::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return StatsHandler::releaseGLObjects(arg1);
	};

	// osg::Object * osgGA::GUIEventHandler::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return StatsHandler::cloneType();
	};

	// osg::Object * osgGA::GUIEventHandler::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return StatsHandler::clone(arg1);
	};

	// bool osgGA::GUIEventHandler::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return StatsHandler::isSameKindAs(obj);
	};

	// const char * osgGA::GUIEventHandler::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return StatsHandler::libraryName();
	};

	// const char * osgGA::GUIEventHandler::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return StatsHandler::className();
	};

	// void osgGA::GUIEventHandler::event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	void event(osg::NodeVisitor * nv, osg::Drawable * drawable) {
		if(_obj.pushFunction("event")) {
			_obj.pushArg(nv);
			_obj.pushArg(drawable);
			return (_obj.callFunction<void>());
		}

		return StatsHandler::event(nv, drawable);
	};

	// void osgGA::GUIEventHandler::operator()(osg::Node * node, osg::NodeVisitor * nv)
	void operator()(osg::Node * node, osg::NodeVisitor * nv) {
		if(_obj.pushFunction("op_call")) {
			_obj.pushArg(node);
			_obj.pushArg(nv);
			return (_obj.callFunction<void>());
		}

		return StatsHandler::operator()(node, nv);
	};

	// bool osgViewer::StatsHandler::handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	bool handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) {
		if(_obj.pushFunction("handle")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(&arg2);
			return (_obj.callFunction<bool>());
		}

		return StatsHandler::handle(arg1, arg2);
	};

	// void osgViewer::StatsHandler::getUsage(osg::ApplicationUsage & usage) const
	void getUsage(osg::ApplicationUsage & usage) const {
		if(_obj.pushFunction("getUsage")) {
			_obj.pushArg(&usage);
			return (_obj.callFunction<void>());
		}

		return StatsHandler::getUsage(usage);
	};




// void osgViewer::StatsHandler::setUpHUDCamera(osgViewer::ViewerBase * viewer)
void public_setUpHUDCamera(osgViewer::ViewerBase * viewer) {
	return osgViewer::StatsHandler::setUpHUDCamera(viewer);
};

// osg::Geometry * osgViewer::StatsHandler::createBackgroundRectangle(const osg::Vec3f & pos, const float width, const float height, osg::Vec4f & color)
osg::Geometry * public_createBackgroundRectangle(const osg::Vec3f & pos, const float width, const float height, osg::Vec4f & color) {
	return osgViewer::StatsHandler::createBackgroundRectangle(pos, width, height, color);
};

// osg::Geometry * osgViewer::StatsHandler::createGeometry(const osg::Vec3f & pos, float height, const osg::Vec4f & colour, unsigned int numBlocks)
osg::Geometry * public_createGeometry(const osg::Vec3f & pos, float height, const osg::Vec4f & colour, unsigned int numBlocks) {
	return osgViewer::StatsHandler::createGeometry(pos, height, colour, numBlocks);
};

// osg::Geometry * osgViewer::StatsHandler::createFrameMarkers(const osg::Vec3f & pos, float height, const osg::Vec4f & colour, unsigned int numBlocks)
osg::Geometry * public_createFrameMarkers(const osg::Vec3f & pos, float height, const osg::Vec4f & colour, unsigned int numBlocks) {
	return osgViewer::StatsHandler::createFrameMarkers(pos, height, colour, numBlocks);
};

// osg::Geometry * osgViewer::StatsHandler::createTick(const osg::Vec3f & pos, float height, const osg::Vec4f & colour, unsigned int numTicks)
osg::Geometry * public_createTick(const osg::Vec3f & pos, float height, const osg::Vec4f & colour, unsigned int numTicks) {
	return osgViewer::StatsHandler::createTick(pos, height, colour, numTicks);
};

// void osgViewer::StatsHandler::createTimeStatsLine(const std::string & lineLabel, osg::Vec3f pos, const osg::Vec4f & textColor, const osg::Vec4f & barColor, osg::Stats * viewerStats, osg::Stats * stats, const std::string & timeTakenName, float multiplier, bool average, bool averageInInverseSpace, const std::string & beginTimeName, const std::string & endTimeName)
void public_createTimeStatsLine(const std::string & lineLabel, osg::Vec3f pos, const osg::Vec4f & textColor, const osg::Vec4f & barColor, osg::Stats * viewerStats, osg::Stats * stats, const std::string & timeTakenName, float multiplier, bool average, bool averageInInverseSpace, const std::string & beginTimeName, const std::string & endTimeName) {
	return osgViewer::StatsHandler::createTimeStatsLine(lineLabel, pos, textColor, barColor, viewerStats, stats, timeTakenName, multiplier, average, averageInInverseSpace, beginTimeName, endTimeName);
};

// void osgViewer::StatsHandler::createCameraTimeStats(osg::Vec3f & pos, bool acquireGPUStats, osg::Stats * viewerStats, osg::Camera * camera)
void public_createCameraTimeStats(osg::Vec3f & pos, bool acquireGPUStats, osg::Stats * viewerStats, osg::Camera * camera) {
	return osgViewer::StatsHandler::createCameraTimeStats(pos, acquireGPUStats, viewerStats, camera);
};

// void osgViewer::StatsHandler::setUpScene(osgViewer::ViewerBase * viewer)
void public_setUpScene(osgViewer::ViewerBase * viewer) {
	return osgViewer::StatsHandler::setUpScene(viewer);
};

// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
	return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
};

// void osg::Referenced::deleteUsingDeleteHandler() const
void public_deleteUsingDeleteHandler() const {
	return osg::Referenced::deleteUsingDeleteHandler();
};


};




#endif

