#ifndef _WRAPPERS_WRAPPER_OSGGA_KEYSWITCHMATRIXMANIPULATOR_H_
#define _WRAPPERS_WRAPPER_OSGGA_KEYSWITCHMATRIXMANIPULATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgGA/KeySwitchMatrixManipulator>

class wrapper_osgGA_KeySwitchMatrixManipulator : public osgGA::KeySwitchMatrixManipulator {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgGA_KeySwitchMatrixManipulator(lua_State* L, lua_Table* dum) : osgGA::KeySwitchMatrixManipulator(), _obj(L,-1) {};

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

	// osg::Object * osgGA::GUIEventHandler::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return osgGA::GUIEventHandler::cloneType();
	};

	// osg::Object * osgGA::GUIEventHandler::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return osgGA::GUIEventHandler::clone(arg1);
	};

	// bool osgGA::GUIEventHandler::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osgGA::GUIEventHandler::isSameKindAs(obj);
	};

	// const char * osgGA::GUIEventHandler::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osgGA::GUIEventHandler::libraryName();
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

	// const char * osgGA::KeySwitchMatrixManipulator::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osgGA::KeySwitchMatrixManipulator::className();
	};

	// void osgGA::KeySwitchMatrixManipulator::setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb)
	void setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb) {
		if(_obj.pushFunction("setCoordinateFrameCallback")) {
			_obj.pushArg(cb);
			return (_obj.callFunction<void>());
		}

		return osgGA::KeySwitchMatrixManipulator::setCoordinateFrameCallback(cb);
	};

	// void osgGA::KeySwitchMatrixManipulator::setByMatrix(const osg::Matrixd & matrix)
	void setByMatrix(const osg::Matrixd & matrix) {
		if(_obj.pushFunction("setByMatrix")) {
			_obj.pushArg(&matrix);
			return (_obj.callFunction<void>());
		}

		return osgGA::KeySwitchMatrixManipulator::setByMatrix(matrix);
	};

	// void osgGA::KeySwitchMatrixManipulator::setByInverseMatrix(const osg::Matrixd & matrix)
	void setByInverseMatrix(const osg::Matrixd & matrix) {
		if(_obj.pushFunction("setByInverseMatrix")) {
			_obj.pushArg(&matrix);
			return (_obj.callFunction<void>());
		}

		return osgGA::KeySwitchMatrixManipulator::setByInverseMatrix(matrix);
	};

	// osg::Matrixd osgGA::KeySwitchMatrixManipulator::getMatrix() const
	osg::Matrixd getMatrix() const {
		if(_obj.pushFunction("getMatrix")) {
			return *(_obj.callFunction<osg::Matrixd*>());
		}

		return osgGA::KeySwitchMatrixManipulator::getMatrix();
	};

	// osg::Matrixd osgGA::KeySwitchMatrixManipulator::getInverseMatrix() const
	osg::Matrixd getInverseMatrix() const {
		if(_obj.pushFunction("getInverseMatrix")) {
			return *(_obj.callFunction<osg::Matrixd*>());
		}

		return osgGA::KeySwitchMatrixManipulator::getInverseMatrix();
	};

	// osgUtil::SceneView::FusionDistanceMode osgGA::KeySwitchMatrixManipulator::getFusionDistanceMode() const
	osgUtil::SceneView::FusionDistanceMode getFusionDistanceMode() const {
		if(_obj.pushFunction("getFusionDistanceMode")) {
			return (osgUtil::SceneView::FusionDistanceMode)(_obj.callFunction<int>());
		}

		return osgGA::KeySwitchMatrixManipulator::getFusionDistanceMode();
	};

	// float osgGA::KeySwitchMatrixManipulator::getFusionDistanceValue() const
	float getFusionDistanceValue() const {
		if(_obj.pushFunction("getFusionDistanceValue")) {
			return (_obj.callFunction<float>());
		}

		return osgGA::KeySwitchMatrixManipulator::getFusionDistanceValue();
	};

	// void osgGA::KeySwitchMatrixManipulator::setNode(osg::Node * arg1)
	void setNode(osg::Node * arg1) {
		if(_obj.pushFunction("setNode")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osgGA::KeySwitchMatrixManipulator::setNode(arg1);
	};

	// const osg::Node * osgGA::KeySwitchMatrixManipulator::getNode() const
	const osg::Node * getNode() const {
		if(_obj.pushFunction("getNode")) {
			return (_obj.callFunction<osg::Node*>());
		}

		return osgGA::KeySwitchMatrixManipulator::getNode();
	};

	// osg::Node * osgGA::KeySwitchMatrixManipulator::getNode()
	osg::Node * getNode() {
		if(_obj.pushFunction("getNode")) {
			return (_obj.callFunction<osg::Node*>());
		}

		return osgGA::KeySwitchMatrixManipulator::getNode();
	};

	// void osgGA::KeySwitchMatrixManipulator::setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false)
	void setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false) {
		if(_obj.pushFunction("setHomePosition")) {
			_obj.pushArg(&eye);
			_obj.pushArg(&center);
			_obj.pushArg(&up);
			_obj.pushArg(autoComputeHomePosition);
			return (_obj.callFunction<void>());
		}

		return osgGA::KeySwitchMatrixManipulator::setHomePosition(eye, center, up, autoComputeHomePosition);
	};

	// void osgGA::KeySwitchMatrixManipulator::setAutoComputeHomePosition(bool flag)
	void setAutoComputeHomePosition(bool flag) {
		if(_obj.pushFunction("setAutoComputeHomePosition")) {
			_obj.pushArg(flag);
			return (_obj.callFunction<void>());
		}

		return osgGA::KeySwitchMatrixManipulator::setAutoComputeHomePosition(flag);
	};

	// void osgGA::KeySwitchMatrixManipulator::computeHomePosition()
	void computeHomePosition() {
		if(_obj.pushFunction("computeHomePosition")) {
			return (_obj.callFunction<void>());
		}

		return osgGA::KeySwitchMatrixManipulator::computeHomePosition();
	};

	// void osgGA::KeySwitchMatrixManipulator::home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	void home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) {
		if(_obj.pushFunction("home")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(&arg2);
			return (_obj.callFunction<void>());
		}

		return osgGA::KeySwitchMatrixManipulator::home(arg1, arg2);
	};

	// void osgGA::KeySwitchMatrixManipulator::init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	void init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) {
		if(_obj.pushFunction("init")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(&arg2);
			return (_obj.callFunction<void>());
		}

		return osgGA::KeySwitchMatrixManipulator::init(arg1, arg2);
	};

	// bool osgGA::KeySwitchMatrixManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("handle")) {
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return osgGA::KeySwitchMatrixManipulator::handle(ea, us);
	};

	// void osgGA::KeySwitchMatrixManipulator::getUsage(osg::ApplicationUsage & usage) const
	void getUsage(osg::ApplicationUsage & usage) const {
		if(_obj.pushFunction("getUsage")) {
			_obj.pushArg(&usage);
			return (_obj.callFunction<void>());
		}

		return osgGA::KeySwitchMatrixManipulator::getUsage(usage);
	};




};




#endif
