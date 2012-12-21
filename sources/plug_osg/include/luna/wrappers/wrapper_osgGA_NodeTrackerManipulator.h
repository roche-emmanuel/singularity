#ifndef _WRAPPERS_WRAPPER_OSGGA_NODETRACKERMANIPULATOR_H_
#define _WRAPPERS_WRAPPER_OSGGA_NODETRACKERMANIPULATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgGA/NodeTrackerManipulator>

class wrapper_osgGA_NodeTrackerManipulator : public osgGA::NodeTrackerManipulator, public luna_wrapper_base {

public:
		

	~wrapper_osgGA_NodeTrackerManipulator() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgGA_NodeTrackerManipulator(lua_State* L, lua_Table* dum, int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS) : osgGA::NodeTrackerManipulator(flags), luna_wrapper_base(L) {};
	wrapper_osgGA_NodeTrackerManipulator(lua_State* L, lua_Table* dum, const osgGA::NodeTrackerManipulator & om, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY) : osgGA::NodeTrackerManipulator(om, copyOp), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return NodeTrackerManipulator::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return NodeTrackerManipulator::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::releaseGLObjects(arg1);
	};

	// void osgGA::GUIEventHandler::event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	void event(osg::NodeVisitor * nv, osg::Drawable * drawable) {
		if(_obj.pushFunction("event")) {
			_obj.pushArg(nv);
			_obj.pushArg(drawable);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::event(nv, drawable);
	};

	// void osgGA::GUIEventHandler::operator()(osg::Node * node, osg::NodeVisitor * nv)
	void operator()(osg::Node * node, osg::NodeVisitor * nv) {
		if(_obj.pushFunction("op_call")) {
			_obj.pushArg(node);
			_obj.pushArg(nv);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::operator()(node, nv);
	};

	// void osgGA::CameraManipulator::setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb)
	void setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb) {
		if(_obj.pushFunction("setCoordinateFrameCallback")) {
			_obj.pushArg(cb);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::setCoordinateFrameCallback(cb);
	};

	// void osgGA::CameraManipulator::setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false)
	void setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false) {
		if(_obj.pushFunction("setHomePosition")) {
			_obj.pushArg(&eye);
			_obj.pushArg(&center);
			_obj.pushArg(&up);
			_obj.pushArg(autoComputeHomePosition);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::setHomePosition(eye, center, up, autoComputeHomePosition);
	};

	// void osgGA::CameraManipulator::getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const
	void getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const {
		if(_obj.pushFunction("getHomePosition")) {
			_obj.pushArg(&eye);
			_obj.pushArg(&center);
			_obj.pushArg(&up);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::getHomePosition(eye, center, up);
	};

	// void osgGA::CameraManipulator::setAutoComputeHomePosition(bool flag)
	void setAutoComputeHomePosition(bool flag) {
		if(_obj.pushFunction("setAutoComputeHomePosition")) {
			_obj.pushArg(flag);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::setAutoComputeHomePosition(flag);
	};

	// const osg::Node * osgGA::StandardManipulator::getNode() const
	const osg::Node * getNode() const {
		if(_obj.pushFunction("getNode")) {
			return (_obj.callFunction<osg::Node*>());
		}

		return NodeTrackerManipulator::getNode();
	};

	// osg::Node * osgGA::StandardManipulator::getNode()
	osg::Node * getNode() {
		if(_obj.pushFunction("getNode")) {
			return (_obj.callFunction<osg::Node*>());
		}

		return NodeTrackerManipulator::getNode();
	};

	// void osgGA::StandardManipulator::setVerticalAxisFixed(bool value)
	void setVerticalAxisFixed(bool value) {
		if(_obj.pushFunction("setVerticalAxisFixed")) {
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::setVerticalAxisFixed(value);
	};

	// void osgGA::StandardManipulator::setAllowThrow(bool allowThrow)
	void setAllowThrow(bool allowThrow) {
		if(_obj.pushFunction("setAllowThrow")) {
			_obj.pushArg(allowThrow);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::setAllowThrow(allowThrow);
	};

	// void osgGA::StandardManipulator::setAnimationTime(const double t)
	void setAnimationTime(const double t) {
		if(_obj.pushFunction("setAnimationTime")) {
			_obj.pushArg(t);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::setAnimationTime(t);
	};

	// void osgGA::StandardManipulator::finishAnimation()
	void finishAnimation() {
		if(_obj.pushFunction("finishAnimation")) {
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::finishAnimation();
	};

	// void osgGA::StandardManipulator::home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	void home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) {
		if(_obj.pushFunction("home")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(&arg2);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::home(arg1, arg2);
	};

	// void osgGA::StandardManipulator::home(double arg1)
	void home(double arg1) {
		if(_obj.pushFunction("home")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::home(arg1);
	};

	// void osgGA::StandardManipulator::init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	void init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) {
		if(_obj.pushFunction("init")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(&arg2);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::init(arg1, arg2);
	};

	// bool osgGA::StandardManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("handle")) {
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return NodeTrackerManipulator::handle(ea, us);
	};

	// void osgGA::StandardManipulator::getUsage(osg::ApplicationUsage & arg1) const
	void getUsage(osg::ApplicationUsage & arg1) const {
		if(_obj.pushFunction("getUsage")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::getUsage(arg1);
	};

	// void osgGA::OrbitManipulator::setByInverseMatrix(const osg::Matrixd & matrix)
	void setByInverseMatrix(const osg::Matrixd & matrix) {
		if(_obj.pushFunction("setByInverseMatrix")) {
			_obj.pushArg(&matrix);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::setByInverseMatrix(matrix);
	};

	// void osgGA::OrbitManipulator::setTransformation(const osg::Vec3d & eye, const osg::Quat & rotation)
	void setTransformation(const osg::Vec3d & eye, const osg::Quat & rotation) {
		if(_obj.pushFunction("setTransformation")) {
			_obj.pushArg(&eye);
			_obj.pushArg(&rotation);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::setTransformation(eye, rotation);
	};

	// void osgGA::OrbitManipulator::setTransformation(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up)
	void setTransformation(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up) {
		if(_obj.pushFunction("setTransformation")) {
			_obj.pushArg(&eye);
			_obj.pushArg(&center);
			_obj.pushArg(&up);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::setTransformation(eye, center, up);
	};

	// void osgGA::OrbitManipulator::getTransformation(osg::Vec3d & eye, osg::Quat & rotation) const
	void getTransformation(osg::Vec3d & eye, osg::Quat & rotation) const {
		if(_obj.pushFunction("getTransformation")) {
			_obj.pushArg(&eye);
			_obj.pushArg(&rotation);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::getTransformation(eye, rotation);
	};

	// void osgGA::OrbitManipulator::getTransformation(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const
	void getTransformation(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const {
		if(_obj.pushFunction("getTransformation")) {
			_obj.pushArg(&eye);
			_obj.pushArg(&center);
			_obj.pushArg(&up);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::getTransformation(eye, center, up);
	};

	// void osgGA::OrbitManipulator::setCenter(const osg::Vec3d & center)
	void setCenter(const osg::Vec3d & center) {
		if(_obj.pushFunction("setCenter")) {
			_obj.pushArg(&center);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::setCenter(center);
	};

	// void osgGA::OrbitManipulator::setRotation(const osg::Quat & rotation)
	void setRotation(const osg::Quat & rotation) {
		if(_obj.pushFunction("setRotation")) {
			_obj.pushArg(&rotation);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::setRotation(rotation);
	};

	// void osgGA::OrbitManipulator::setDistance(double distance)
	void setDistance(double distance) {
		if(_obj.pushFunction("setDistance")) {
			_obj.pushArg(distance);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::setDistance(distance);
	};

	// void osgGA::OrbitManipulator::setTrackballSize(const double & size)
	void setTrackballSize(const double & size) {
		if(_obj.pushFunction("setTrackballSize")) {
			_obj.pushArg(size);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::setTrackballSize(size);
	};

	// void osgGA::OrbitManipulator::setWheelZoomFactor(double wheelZoomFactor)
	void setWheelZoomFactor(double wheelZoomFactor) {
		if(_obj.pushFunction("setWheelZoomFactor")) {
			_obj.pushArg(wheelZoomFactor);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::setWheelZoomFactor(wheelZoomFactor);
	};

	// void osgGA::OrbitManipulator::setMinimumDistance(const double & minimumDistance, bool relativeToModelSize = NULL)
	void setMinimumDistance(const double & minimumDistance, bool relativeToModelSize = NULL) {
		if(_obj.pushFunction("setMinimumDistance")) {
			_obj.pushArg(minimumDistance);
			_obj.pushArg(relativeToModelSize);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::setMinimumDistance(minimumDistance, relativeToModelSize);
	};

	// osgUtil::SceneView::FusionDistanceMode osgGA::OrbitManipulator::getFusionDistanceMode() const
	osgUtil::SceneView::FusionDistanceMode getFusionDistanceMode() const {
		if(_obj.pushFunction("getFusionDistanceMode")) {
			return (osgUtil::SceneView::FusionDistanceMode)(_obj.callFunction<int>());
		}

		return NodeTrackerManipulator::getFusionDistanceMode();
	};

	// float osgGA::OrbitManipulator::getFusionDistanceValue() const
	float getFusionDistanceValue() const {
		if(_obj.pushFunction("getFusionDistanceValue")) {
			return (_obj.callFunction<float>());
		}

		return NodeTrackerManipulator::getFusionDistanceValue();
	};

	// osg::Object * osgGA::NodeTrackerManipulator::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return NodeTrackerManipulator::cloneType();
	};

	// osg::Object * osgGA::NodeTrackerManipulator::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return NodeTrackerManipulator::clone(arg1);
	};

	// bool osgGA::NodeTrackerManipulator::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return NodeTrackerManipulator::isSameKindAs(obj);
	};

	// const char * osgGA::NodeTrackerManipulator::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return NodeTrackerManipulator::libraryName();
	};

	// const char * osgGA::NodeTrackerManipulator::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return NodeTrackerManipulator::className();
	};

	// void osgGA::NodeTrackerManipulator::setByMatrix(const osg::Matrixd & matrix)
	void setByMatrix(const osg::Matrixd & matrix) {
		if(_obj.pushFunction("setByMatrix")) {
			_obj.pushArg(&matrix);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::setByMatrix(matrix);
	};

	// osg::Matrixd osgGA::NodeTrackerManipulator::getMatrix() const
	osg::Matrixd getMatrix() const {
		if(_obj.pushFunction("getMatrix")) {
			return *(_obj.callFunction<osg::Matrixd*>());
		}

		return NodeTrackerManipulator::getMatrix();
	};

	// osg::Matrixd osgGA::NodeTrackerManipulator::getInverseMatrix() const
	osg::Matrixd getInverseMatrix() const {
		if(_obj.pushFunction("getInverseMatrix")) {
			return *(_obj.callFunction<osg::Matrixd*>());
		}

		return NodeTrackerManipulator::getInverseMatrix();
	};

	// void osgGA::NodeTrackerManipulator::setNode(osg::Node * arg1)
	void setNode(osg::Node * arg1) {
		if(_obj.pushFunction("setNode")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::setNode(arg1);
	};

	// void osgGA::NodeTrackerManipulator::computeHomePosition()
	void computeHomePosition() {
		if(_obj.pushFunction("computeHomePosition")) {
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::computeHomePosition();
	};


protected:
	// bool osgGA::StandardManipulator::handleFrame(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool handleFrame(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("handleFrame")) {
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return NodeTrackerManipulator::handleFrame(ea, us);
	};

	// bool osgGA::StandardManipulator::handleResize(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool handleResize(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("handleResize")) {
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return NodeTrackerManipulator::handleResize(ea, us);
	};

	// bool osgGA::StandardManipulator::handleMouseMove(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool handleMouseMove(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("handleMouseMove")) {
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return NodeTrackerManipulator::handleMouseMove(ea, us);
	};

	// bool osgGA::StandardManipulator::handleMouseDrag(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool handleMouseDrag(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("handleMouseDrag")) {
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return NodeTrackerManipulator::handleMouseDrag(ea, us);
	};

	// bool osgGA::StandardManipulator::handleMousePush(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool handleMousePush(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("handleMousePush")) {
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return NodeTrackerManipulator::handleMousePush(ea, us);
	};

	// bool osgGA::StandardManipulator::handleMouseRelease(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool handleMouseRelease(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("handleMouseRelease")) {
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return NodeTrackerManipulator::handleMouseRelease(ea, us);
	};

	// bool osgGA::StandardManipulator::handleKeyDown(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool handleKeyDown(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("handleKeyDown")) {
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return NodeTrackerManipulator::handleKeyDown(ea, us);
	};

	// bool osgGA::StandardManipulator::handleKeyUp(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool handleKeyUp(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("handleKeyUp")) {
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return NodeTrackerManipulator::handleKeyUp(ea, us);
	};

	// bool osgGA::StandardManipulator::handleMouseDeltaMovement(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool handleMouseDeltaMovement(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("handleMouseDeltaMovement")) {
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return NodeTrackerManipulator::handleMouseDeltaMovement(ea, us);
	};

	// bool osgGA::StandardManipulator::performMovement()
	bool performMovement() {
		if(_obj.pushFunction("performMovement")) {
			return (_obj.callFunction<bool>());
		}

		return NodeTrackerManipulator::performMovement();
	};

	// bool osgGA::StandardManipulator::performAnimationMovement(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool performAnimationMovement(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("performAnimationMovement")) {
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return NodeTrackerManipulator::performAnimationMovement(ea, us);
	};

	// bool osgGA::StandardManipulator::isMouseMoving() const
	bool isMouseMoving() const {
		if(_obj.pushFunction("isMouseMoving")) {
			return (_obj.callFunction<bool>());
		}

		return NodeTrackerManipulator::isMouseMoving();
	};

	// void osgGA::StandardManipulator::centerMousePointer(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	void centerMousePointer(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("centerMousePointer")) {
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::centerMousePointer(ea, us);
	};

	// bool osgGA::StandardManipulator::setCenterByMousePointerIntersection(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool setCenterByMousePointerIntersection(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("setCenterByMousePointerIntersection")) {
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return NodeTrackerManipulator::setCenterByMousePointerIntersection(ea, us);
	};

	// bool osgGA::OrbitManipulator::handleMouseWheel(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool handleMouseWheel(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("handleMouseWheel")) {
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return NodeTrackerManipulator::handleMouseWheel(ea, us);
	};

	// bool osgGA::OrbitManipulator::performMouseDeltaMovement(const float dx, const float dy)
	bool performMouseDeltaMovement(const float dx, const float dy) {
		if(_obj.pushFunction("performMouseDeltaMovement")) {
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			return (_obj.callFunction<bool>());
		}

		return NodeTrackerManipulator::performMouseDeltaMovement(dx, dy);
	};

	// void osgGA::OrbitManipulator::applyAnimationStep(const double currentProgress, const double prevProgress)
	void applyAnimationStep(const double currentProgress, const double prevProgress) {
		if(_obj.pushFunction("applyAnimationStep")) {
			_obj.pushArg(currentProgress);
			_obj.pushArg(prevProgress);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::applyAnimationStep(currentProgress, prevProgress);
	};

	// void osgGA::OrbitManipulator::rotateTrackball(const float px0, const float py0, const float px1, const float py1, const float scale)
	void rotateTrackball(const float px0, const float py0, const float px1, const float py1, const float scale) {
		if(_obj.pushFunction("rotateTrackball")) {
			_obj.pushArg(px0);
			_obj.pushArg(py0);
			_obj.pushArg(px1);
			_obj.pushArg(py1);
			_obj.pushArg(scale);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::rotateTrackball(px0, py0, px1, py1, scale);
	};

	// void osgGA::OrbitManipulator::rotateWithFixedVertical(const float dx, const float dy)
	void rotateWithFixedVertical(const float dx, const float dy) {
		if(_obj.pushFunction("rotateWithFixedVertical")) {
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::rotateWithFixedVertical(dx, dy);
	};

	// void osgGA::OrbitManipulator::rotateWithFixedVertical(const float dx, const float dy, const osg::Vec3f & up)
	void rotateWithFixedVertical(const float dx, const float dy, const osg::Vec3f & up) {
		if(_obj.pushFunction("rotateWithFixedVertical")) {
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			_obj.pushArg(&up);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::rotateWithFixedVertical(dx, dy, up);
	};

	// void osgGA::OrbitManipulator::panModel(const float dx, const float dy, const float dz = 0.f)
	void panModel(const float dx, const float dy, const float dz = 0.f) {
		if(_obj.pushFunction("panModel")) {
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			_obj.pushArg(dz);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::panModel(dx, dy, dz);
	};

	// void osgGA::OrbitManipulator::zoomModel(const float dy, bool pushForwardIfNeeded = true)
	void zoomModel(const float dy, bool pushForwardIfNeeded = true) {
		if(_obj.pushFunction("zoomModel")) {
			_obj.pushArg(dy);
			_obj.pushArg(pushForwardIfNeeded);
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::zoomModel(dy, pushForwardIfNeeded);
	};

	// bool osgGA::OrbitManipulator::startAnimationByMousePointerIntersection(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool startAnimationByMousePointerIntersection(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("startAnimationByMousePointerIntersection")) {
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return NodeTrackerManipulator::startAnimationByMousePointerIntersection(ea, us);
	};

	// void osgGA::OrbitManipulator::allocAnimationData()
	void allocAnimationData() {
		if(_obj.pushFunction("allocAnimationData")) {
			return (_obj.callFunction<void>());
		}

		return NodeTrackerManipulator::allocAnimationData();
	};

	// bool osgGA::NodeTrackerManipulator::performMovementLeftMouseButton(const double eventTimeDelta, const double dx, const double dy)
	bool performMovementLeftMouseButton(const double eventTimeDelta, const double dx, const double dy) {
		if(_obj.pushFunction("performMovementLeftMouseButton")) {
			_obj.pushArg(eventTimeDelta);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			return (_obj.callFunction<bool>());
		}

		return NodeTrackerManipulator::performMovementLeftMouseButton(eventTimeDelta, dx, dy);
	};

	// bool osgGA::NodeTrackerManipulator::performMovementMiddleMouseButton(const double eventTimeDelta, const double dx, const double dy)
	bool performMovementMiddleMouseButton(const double eventTimeDelta, const double dx, const double dy) {
		if(_obj.pushFunction("performMovementMiddleMouseButton")) {
			_obj.pushArg(eventTimeDelta);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			return (_obj.callFunction<bool>());
		}

		return NodeTrackerManipulator::performMovementMiddleMouseButton(eventTimeDelta, dx, dy);
	};

	// bool osgGA::NodeTrackerManipulator::performMovementRightMouseButton(const double eventTimeDelta, const double dx, const double dy)
	bool performMovementRightMouseButton(const double eventTimeDelta, const double dx, const double dy) {
		if(_obj.pushFunction("performMovementRightMouseButton")) {
			_obj.pushArg(eventTimeDelta);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			return (_obj.callFunction<bool>());
		}

		return NodeTrackerManipulator::performMovementRightMouseButton(eventTimeDelta, dx, dy);
	};

public:
// void osgGA::NodeTrackerManipulator::computeNodeWorldToLocal(osg::Matrixd & worldToLocal) const
void public_computeNodeWorldToLocal(osg::Matrixd & worldToLocal) const {
	return osgGA::NodeTrackerManipulator::computeNodeWorldToLocal(worldToLocal);
};

// void osgGA::NodeTrackerManipulator::computeNodeLocalToWorld(osg::Matrixd & localToWorld) const
void public_computeNodeLocalToWorld(osg::Matrixd & localToWorld) const {
	return osgGA::NodeTrackerManipulator::computeNodeLocalToWorld(localToWorld);
};

// void osgGA::NodeTrackerManipulator::computeNodeCenterAndRotation(osg::Vec3d & center, osg::Quat & rotation) const
void public_computeNodeCenterAndRotation(osg::Vec3d & center, osg::Quat & rotation) const {
	return osgGA::NodeTrackerManipulator::computeNodeCenterAndRotation(center, rotation);
};

// void osgGA::NodeTrackerManipulator::computePosition(const osg::Vec3d & eye, const osg::Vec3d & lv, const osg::Vec3d & up)
void public_computePosition(const osg::Vec3d & eye, const osg::Vec3d & lv, const osg::Vec3d & up) {
	return osgGA::NodeTrackerManipulator::computePosition(eye, lv, up);
};

// void osgGA::OrbitManipulator::trackball(osg::Vec3d & axis, float & angle, float p1x, float p1y, float p2x, float p2y)
void public_trackball(osg::Vec3d & axis, float & angle, float p1x, float p1y, float p2x, float p2y) {
	return osgGA::OrbitManipulator::trackball(axis, angle, p1x, p1y, p2x, p2y);
};

// float osgGA::OrbitManipulator::tb_project_to_sphere(float r, float x, float y)
float public_tb_project_to_sphere(float r, float x, float y) {
	return osgGA::OrbitManipulator::tb_project_to_sphere(r, x, y);
};

// void osgGA::StandardManipulator::addMouseEvent(const osgGA::GUIEventAdapter & ea)
void public_addMouseEvent(const osgGA::GUIEventAdapter & ea) {
	return osgGA::StandardManipulator::addMouseEvent(ea);
};

// void osgGA::StandardManipulator::flushMouseEventStack()
void public_flushMouseEventStack() {
	return osgGA::StandardManipulator::flushMouseEventStack();
};

// float osgGA::StandardManipulator::getThrowScale(const double eventTimeDelta) const
float public_getThrowScale(const double eventTimeDelta) const {
	return osgGA::StandardManipulator::getThrowScale(eventTimeDelta);
};

// void osgGA::StandardManipulator::fixVerticalAxis(osg::Vec3d & eye, osg::Quat & rotation, bool disallowFlipOver)
void public_fixVerticalAxis(osg::Vec3d & eye, osg::Quat & rotation, bool disallowFlipOver) {
	return osgGA::StandardManipulator::fixVerticalAxis(eye, rotation, disallowFlipOver);
};

// bool osgGA::StandardManipulator::getRelativeFlag(int index) const
bool public_getRelativeFlag(int index) const {
	return osgGA::StandardManipulator::getRelativeFlag(index);
};

// void osgGA::StandardManipulator::setRelativeFlag(int index, bool value)
void public_setRelativeFlag(int index, bool value) {
	return osgGA::StandardManipulator::setRelativeFlag(index, value);
};

// static void osgGA::StandardManipulator::rotateYawPitch(osg::Quat & rotation, const double yaw, const double pitch, const osg::Vec3d & localUp = osg::Vec3d (0., 0., 0.))
static void public_rotateYawPitch(osg::Quat & rotation, const double yaw, const double pitch, const osg::Vec3d & localUp = osg::Vec3d (0., 0., 0.)) {
	return osgGA::StandardManipulator::rotateYawPitch(rotation, yaw, pitch, localUp);
};

// static void osgGA::StandardManipulator::fixVerticalAxis(osg::Quat & rotation, const osg::Vec3d & localUp, bool disallowFlipOver)
static void public_fixVerticalAxis(osg::Quat & rotation, const osg::Vec3d & localUp, bool disallowFlipOver) {
	return osgGA::StandardManipulator::fixVerticalAxis(rotation, localUp, disallowFlipOver);
};

// static void osgGA::StandardManipulator::fixVerticalAxis(const osg::Vec3d & forward, const osg::Vec3d & up, osg::Vec3d & newUp, const osg::Vec3d & localUp, bool disallowFlipOver)
static void public_fixVerticalAxis(const osg::Vec3d & forward, const osg::Vec3d & up, osg::Vec3d & newUp, const osg::Vec3d & localUp, bool disallowFlipOver) {
	return osgGA::StandardManipulator::fixVerticalAxis(forward, up, newUp, localUp, disallowFlipOver);
};

// static int osgGA::StandardManipulator::allocateRelativeFlag()
static int public_allocateRelativeFlag() {
	return osgGA::StandardManipulator::allocateRelativeFlag();
};

// std::string osgGA::CameraManipulator::getManipulatorName() const
std::string public_getManipulatorName() const {
	return osgGA::CameraManipulator::getManipulatorName();
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

