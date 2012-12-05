#ifndef _WRAPPERS_WRAPPER_OSGGA_FIRSTPERSONMANIPULATOR_H_
#define _WRAPPERS_WRAPPER_OSGGA_FIRSTPERSONMANIPULATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgGA/FirstPersonManipulator>

class wrapper_osgGA_FirstPersonManipulator : public osgGA::FirstPersonManipulator {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgGA_FirstPersonManipulator(lua_State* L, lua_Table* dum, int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS) : osgGA::FirstPersonManipulator(flags), _obj(L,-1) {};
	wrapper_osgGA_FirstPersonManipulator(lua_State* L, lua_Table* dum, const osgGA::FirstPersonManipulator & fpm, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY) : osgGA::FirstPersonManipulator(fpm, copyOp), _obj(L,-1) {};

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

	// void osgGA::GUIEventHandler::event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	void event(osg::NodeVisitor * nv, osg::Drawable * drawable) {
		if(_obj.pushFunction("event")) {
			_obj.pushArg(nv);
			_obj.pushArg(drawable);
			return (_obj.callFunction<void>());
		}

		return osgGA::GUIEventHandler::event(nv, drawable);
	};

	// void osgGA::GUIEventHandler::operator()(osg::Node * node, osg::NodeVisitor * nv)
	void operator()(osg::Node * node, osg::NodeVisitor * nv) {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(node);
			_obj.pushArg(nv);
			return (_obj.callFunction<void>());
		}

		return osgGA::GUIEventHandler::operator()(node, nv);
	};

	// void osgGA::CameraManipulator::setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb)
	void setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb) {
		if(_obj.pushFunction("setCoordinateFrameCallback")) {
			_obj.pushArg(cb);
			return (_obj.callFunction<void>());
		}

		return osgGA::CameraManipulator::setCoordinateFrameCallback(cb);
	};

	// osgUtil::SceneView::FusionDistanceMode osgGA::CameraManipulator::getFusionDistanceMode() const
	osgUtil::SceneView::FusionDistanceMode getFusionDistanceMode() const {
		if(_obj.pushFunction("getFusionDistanceMode")) {
			return (osgUtil::SceneView::FusionDistanceMode)(_obj.callFunction<int>());
		}

		return osgGA::CameraManipulator::getFusionDistanceMode();
	};

	// float osgGA::CameraManipulator::getFusionDistanceValue() const
	float getFusionDistanceValue() const {
		if(_obj.pushFunction("getFusionDistanceValue")) {
			return (_obj.callFunction<float>());
		}

		return osgGA::CameraManipulator::getFusionDistanceValue();
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

		return osgGA::CameraManipulator::setHomePosition(eye, center, up, autoComputeHomePosition);
	};

	// void osgGA::CameraManipulator::getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const
	void getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const {
		if(_obj.pushFunction("getHomePosition")) {
			_obj.pushArg(&eye);
			_obj.pushArg(&center);
			_obj.pushArg(&up);
			return (_obj.callFunction<void>());
		}

		return osgGA::CameraManipulator::getHomePosition(eye, center, up);
	};

	// void osgGA::CameraManipulator::setAutoComputeHomePosition(bool flag)
	void setAutoComputeHomePosition(bool flag) {
		if(_obj.pushFunction("setAutoComputeHomePosition")) {
			_obj.pushArg(flag);
			return (_obj.callFunction<void>());
		}

		return osgGA::CameraManipulator::setAutoComputeHomePosition(flag);
	};

	// void osgGA::CameraManipulator::computeHomePosition(const osg::Camera * camera = NULL, bool useBoundingBox = false)
	void computeHomePosition(const osg::Camera * camera = NULL, bool useBoundingBox = false) {
		if(_obj.pushFunction("computeHomePosition")) {
			_obj.pushArg(camera);
			_obj.pushArg(useBoundingBox);
			return (_obj.callFunction<void>());
		}

		return osgGA::CameraManipulator::computeHomePosition(camera, useBoundingBox);
	};

	// void osgGA::StandardManipulator::setNode(osg::Node * arg1)
	void setNode(osg::Node * arg1) {
		if(_obj.pushFunction("setNode")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osgGA::StandardManipulator::setNode(arg1);
	};

	// const osg::Node * osgGA::StandardManipulator::getNode() const
	const osg::Node * getNode() const {
		if(_obj.pushFunction("getNode")) {
			return (_obj.callFunction<osg::Node*>());
		}

		return osgGA::StandardManipulator::getNode();
	};

	// osg::Node * osgGA::StandardManipulator::getNode()
	osg::Node * getNode() {
		if(_obj.pushFunction("getNode")) {
			return (_obj.callFunction<osg::Node*>());
		}

		return osgGA::StandardManipulator::getNode();
	};

	// void osgGA::StandardManipulator::setVerticalAxisFixed(bool value)
	void setVerticalAxisFixed(bool value) {
		if(_obj.pushFunction("setVerticalAxisFixed")) {
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return osgGA::StandardManipulator::setVerticalAxisFixed(value);
	};

	// void osgGA::StandardManipulator::setAllowThrow(bool allowThrow)
	void setAllowThrow(bool allowThrow) {
		if(_obj.pushFunction("setAllowThrow")) {
			_obj.pushArg(allowThrow);
			return (_obj.callFunction<void>());
		}

		return osgGA::StandardManipulator::setAllowThrow(allowThrow);
	};

	// void osgGA::StandardManipulator::setAnimationTime(const double t)
	void setAnimationTime(const double t) {
		if(_obj.pushFunction("setAnimationTime")) {
			_obj.pushArg(t);
			return (_obj.callFunction<void>());
		}

		return osgGA::StandardManipulator::setAnimationTime(t);
	};

	// void osgGA::StandardManipulator::finishAnimation()
	void finishAnimation() {
		if(_obj.pushFunction("finishAnimation")) {
			return (_obj.callFunction<void>());
		}

		return osgGA::StandardManipulator::finishAnimation();
	};

	// bool osgGA::StandardManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("handle")) {
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return osgGA::StandardManipulator::handle(ea, us);
	};

	// void osgGA::StandardManipulator::getUsage(osg::ApplicationUsage & arg1) const
	void getUsage(osg::ApplicationUsage & arg1) const {
		if(_obj.pushFunction("getUsage")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osgGA::StandardManipulator::getUsage(arg1);
	};

	// osg::Object * osgGA::FirstPersonManipulator::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return osgGA::FirstPersonManipulator::cloneType();
	};

	// osg::Object * osgGA::FirstPersonManipulator::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return osgGA::FirstPersonManipulator::clone(arg1);
	};

	// bool osgGA::FirstPersonManipulator::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osgGA::FirstPersonManipulator::isSameKindAs(obj);
	};

	// const char * osgGA::FirstPersonManipulator::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osgGA::FirstPersonManipulator::libraryName();
	};

	// const char * osgGA::FirstPersonManipulator::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osgGA::FirstPersonManipulator::className();
	};

	// void osgGA::FirstPersonManipulator::setByMatrix(const osg::Matrixd & matrix)
	void setByMatrix(const osg::Matrixd & matrix) {
		if(_obj.pushFunction("setByMatrix")) {
			_obj.pushArg(&matrix);
			return (_obj.callFunction<void>());
		}

		return osgGA::FirstPersonManipulator::setByMatrix(matrix);
	};

	// void osgGA::FirstPersonManipulator::setByInverseMatrix(const osg::Matrixd & matrix)
	void setByInverseMatrix(const osg::Matrixd & matrix) {
		if(_obj.pushFunction("setByInverseMatrix")) {
			_obj.pushArg(&matrix);
			return (_obj.callFunction<void>());
		}

		return osgGA::FirstPersonManipulator::setByInverseMatrix(matrix);
	};

	// osg::Matrixd osgGA::FirstPersonManipulator::getMatrix() const
	osg::Matrixd getMatrix() const {
		if(_obj.pushFunction("getMatrix")) {
			return *(_obj.callFunction<osg::Matrixd*>());
		}

		return osgGA::FirstPersonManipulator::getMatrix();
	};

	// osg::Matrixd osgGA::FirstPersonManipulator::getInverseMatrix() const
	osg::Matrixd getInverseMatrix() const {
		if(_obj.pushFunction("getInverseMatrix")) {
			return *(_obj.callFunction<osg::Matrixd*>());
		}

		return osgGA::FirstPersonManipulator::getInverseMatrix();
	};

	// void osgGA::FirstPersonManipulator::setTransformation(const osg::Vec3d & eye, const osg::Quat & rotation)
	void setTransformation(const osg::Vec3d & eye, const osg::Quat & rotation) {
		if(_obj.pushFunction("setTransformation")) {
			_obj.pushArg(&eye);
			_obj.pushArg(&rotation);
			return (_obj.callFunction<void>());
		}

		return osgGA::FirstPersonManipulator::setTransformation(eye, rotation);
	};

	// void osgGA::FirstPersonManipulator::setTransformation(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up)
	void setTransformation(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up) {
		if(_obj.pushFunction("setTransformation")) {
			_obj.pushArg(&eye);
			_obj.pushArg(&center);
			_obj.pushArg(&up);
			return (_obj.callFunction<void>());
		}

		return osgGA::FirstPersonManipulator::setTransformation(eye, center, up);
	};

	// void osgGA::FirstPersonManipulator::getTransformation(osg::Vec3d & eye, osg::Quat & rotation) const
	void getTransformation(osg::Vec3d & eye, osg::Quat & rotation) const {
		if(_obj.pushFunction("getTransformation")) {
			_obj.pushArg(&eye);
			_obj.pushArg(&rotation);
			return (_obj.callFunction<void>());
		}

		return osgGA::FirstPersonManipulator::getTransformation(eye, rotation);
	};

	// void osgGA::FirstPersonManipulator::getTransformation(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const
	void getTransformation(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const {
		if(_obj.pushFunction("getTransformation")) {
			_obj.pushArg(&eye);
			_obj.pushArg(&center);
			_obj.pushArg(&up);
			return (_obj.callFunction<void>());
		}

		return osgGA::FirstPersonManipulator::getTransformation(eye, center, up);
	};

	// void osgGA::FirstPersonManipulator::setVelocity(const double & velocity)
	void setVelocity(const double & velocity) {
		if(_obj.pushFunction("setVelocity")) {
			_obj.pushArg(velocity);
			return (_obj.callFunction<void>());
		}

		return osgGA::FirstPersonManipulator::setVelocity(velocity);
	};

	// void osgGA::FirstPersonManipulator::setAcceleration(const double & acceleration, bool relativeToModelSize = false)
	void setAcceleration(const double & acceleration, bool relativeToModelSize = false) {
		if(_obj.pushFunction("setAcceleration")) {
			_obj.pushArg(acceleration);
			_obj.pushArg(relativeToModelSize);
			return (_obj.callFunction<void>());
		}

		return osgGA::FirstPersonManipulator::setAcceleration(acceleration, relativeToModelSize);
	};

	// void osgGA::FirstPersonManipulator::setMaxVelocity(const double & maxVelocity, bool relativeToModelSize = false)
	void setMaxVelocity(const double & maxVelocity, bool relativeToModelSize = false) {
		if(_obj.pushFunction("setMaxVelocity")) {
			_obj.pushArg(maxVelocity);
			_obj.pushArg(relativeToModelSize);
			return (_obj.callFunction<void>());
		}

		return osgGA::FirstPersonManipulator::setMaxVelocity(maxVelocity, relativeToModelSize);
	};

	// void osgGA::FirstPersonManipulator::setWheelMovement(const double & wheelMovement, bool relativeToModelSize = false)
	void setWheelMovement(const double & wheelMovement, bool relativeToModelSize = false) {
		if(_obj.pushFunction("setWheelMovement")) {
			_obj.pushArg(wheelMovement);
			_obj.pushArg(relativeToModelSize);
			return (_obj.callFunction<void>());
		}

		return osgGA::FirstPersonManipulator::setWheelMovement(wheelMovement, relativeToModelSize);
	};

	// void osgGA::FirstPersonManipulator::home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	void home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) {
		if(_obj.pushFunction("home")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(&arg2);
			return (_obj.callFunction<void>());
		}

		return osgGA::FirstPersonManipulator::home(arg1, arg2);
	};

	// void osgGA::FirstPersonManipulator::home(double arg1)
	void home(double arg1) {
		if(_obj.pushFunction("home")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osgGA::FirstPersonManipulator::home(arg1);
	};

	// void osgGA::FirstPersonManipulator::init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	void init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) {
		if(_obj.pushFunction("init")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(&arg2);
			return (_obj.callFunction<void>());
		}

		return osgGA::FirstPersonManipulator::init(arg1, arg2);
	};


protected:
	// bool osgGA::StandardManipulator::handleFrame(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	// bool osgGA::StandardManipulator::handleResize(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	// bool osgGA::StandardManipulator::handleMouseMove(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	// bool osgGA::StandardManipulator::handleMouseDrag(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	// bool osgGA::StandardManipulator::handleMousePush(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	// bool osgGA::StandardManipulator::handleMouseRelease(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	// bool osgGA::StandardManipulator::handleKeyDown(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	// bool osgGA::StandardManipulator::handleKeyUp(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	// bool osgGA::StandardManipulator::handleMouseDeltaMovement(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	// bool osgGA::StandardManipulator::performMovement()
	// bool osgGA::StandardManipulator::performMovementMiddleMouseButton(const double eventTimeDelta, const double dx, const double dy)
	// bool osgGA::StandardManipulator::performMovementRightMouseButton(const double eventTimeDelta, const double dx, const double dy)
	// bool osgGA::StandardManipulator::performAnimationMovement(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	// bool osgGA::StandardManipulator::isMouseMoving() const
	// void osgGA::StandardManipulator::centerMousePointer(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	// bool osgGA::StandardManipulator::setCenterByMousePointerIntersection(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	// bool osgGA::FirstPersonManipulator::handleMouseWheel(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	// bool osgGA::FirstPersonManipulator::performMovementLeftMouseButton(const double eventTimeDelta, const double dx, const double dy)
	// bool osgGA::FirstPersonManipulator::performMouseDeltaMovement(const float dx, const float dy)
	// void osgGA::FirstPersonManipulator::applyAnimationStep(const double currentProgress, const double prevProgress)
	// bool osgGA::FirstPersonManipulator::startAnimationByMousePointerIntersection(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	// void osgGA::FirstPersonManipulator::allocAnimationData()

};




#endif

