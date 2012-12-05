#ifndef _WRAPPERS_WRAPPER_OSG_CAMERA_H_
#define _WRAPPERS_WRAPPER_OSG_CAMERA_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Camera>

class wrapper_osg_Camera : public osg::Camera {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_Camera(lua_State* L, lua_Table* dum) : osg::Camera(), _obj(L,-1) {};
	wrapper_osg_Camera(lua_State* L, lua_Table* dum, const osg::Camera & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::Camera(arg1, copyop), _obj(L,-1) {};

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

	// osg::Switch * osg::Node::asSwitch()
	osg::Switch * asSwitch() {
		if(_obj.pushFunction("asSwitch")) {
			return (_obj.callFunction<osg::Switch*>());
		}

		return osg::Node::asSwitch();
	};

	// const osg::Switch * osg::Node::asSwitch() const
	const osg::Switch * asSwitch() const {
		if(_obj.pushFunction("asSwitch")) {
			return (_obj.callFunction<osg::Switch*>());
		}

		return osg::Node::asSwitch();
	};

	// osg::Geode * osg::Node::asGeode()
	osg::Geode * asGeode() {
		if(_obj.pushFunction("asGeode")) {
			return (_obj.callFunction<osg::Geode*>());
		}

		return osg::Node::asGeode();
	};

	// const osg::Geode * osg::Node::asGeode() const
	const osg::Geode * asGeode() const {
		if(_obj.pushFunction("asGeode")) {
			return (_obj.callFunction<osg::Geode*>());
		}

		return osg::Node::asGeode();
	};

	// void osg::Node::ascend(osg::NodeVisitor & nv)
	void ascend(osg::NodeVisitor & nv) {
		if(_obj.pushFunction("ascend")) {
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return osg::Node::ascend(nv);
	};

	// osg::Group * osg::Group::asGroup()
	osg::Group * asGroup() {
		if(_obj.pushFunction("asGroup")) {
			return (_obj.callFunction<osg::Group*>());
		}

		return osg::Group::asGroup();
	};

	// const osg::Group * osg::Group::asGroup() const
	const osg::Group * asGroup() const {
		if(_obj.pushFunction("asGroup")) {
			return (_obj.callFunction<osg::Group*>());
		}

		return osg::Group::asGroup();
	};

	// void osg::Group::traverse(osg::NodeVisitor & arg1)
	void traverse(osg::NodeVisitor & arg1) {
		if(_obj.pushFunction("traverse")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::Group::traverse(arg1);
	};

	// bool osg::Group::addChild(osg::Node * child)
	bool addChild(osg::Node * child) {
		if(_obj.pushFunction("addChild")) {
			_obj.pushArg(child);
			return (_obj.callFunction<bool>());
		}

		return osg::Group::addChild(child);
	};

	// bool osg::Group::insertChild(unsigned int index, osg::Node * child)
	bool insertChild(unsigned int index, osg::Node * child) {
		if(_obj.pushFunction("insertChild")) {
			_obj.pushArg(index);
			_obj.pushArg(child);
			return (_obj.callFunction<bool>());
		}

		return osg::Group::insertChild(index, child);
	};

	// bool osg::Group::removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	bool removeChildren(unsigned int pos, unsigned int numChildrenToRemove) {
		if(_obj.pushFunction("removeChildren")) {
			_obj.pushArg(pos);
			_obj.pushArg(numChildrenToRemove);
			return (_obj.callFunction<bool>());
		}

		return osg::Group::removeChildren(pos, numChildrenToRemove);
	};

	// bool osg::Group::replaceChild(osg::Node * origChild, osg::Node * newChild)
	bool replaceChild(osg::Node * origChild, osg::Node * newChild) {
		if(_obj.pushFunction("replaceChild")) {
			_obj.pushArg(origChild);
			_obj.pushArg(newChild);
			return (_obj.callFunction<bool>());
		}

		return osg::Group::replaceChild(origChild, newChild);
	};

	// bool osg::Group::setChild(unsigned int i, osg::Node * node)
	bool setChild(unsigned int i, osg::Node * node) {
		if(_obj.pushFunction("setChild")) {
			_obj.pushArg(i);
			_obj.pushArg(node);
			return (_obj.callFunction<bool>());
		}

		return osg::Group::setChild(i, node);
	};

	// osg::Transform * osg::Transform::asTransform()
	osg::Transform * asTransform() {
		if(_obj.pushFunction("asTransform")) {
			return (_obj.callFunction<osg::Transform*>());
		}

		return osg::Transform::asTransform();
	};

	// const osg::Transform * osg::Transform::asTransform() const
	const osg::Transform * asTransform() const {
		if(_obj.pushFunction("asTransform")) {
			return (_obj.callFunction<osg::Transform*>());
		}

		return osg::Transform::asTransform();
	};

	// osg::MatrixTransform * osg::Transform::asMatrixTransform()
	osg::MatrixTransform * asMatrixTransform() {
		if(_obj.pushFunction("asMatrixTransform")) {
			return (_obj.callFunction<osg::MatrixTransform*>());
		}

		return osg::Transform::asMatrixTransform();
	};

	// const osg::MatrixTransform * osg::Transform::asMatrixTransform() const
	const osg::MatrixTransform * asMatrixTransform() const {
		if(_obj.pushFunction("asMatrixTransform")) {
			return (_obj.callFunction<osg::MatrixTransform*>());
		}

		return osg::Transform::asMatrixTransform();
	};

	// osg::PositionAttitudeTransform * osg::Transform::asPositionAttitudeTransform()
	osg::PositionAttitudeTransform * asPositionAttitudeTransform() {
		if(_obj.pushFunction("asPositionAttitudeTransform")) {
			return (_obj.callFunction<osg::PositionAttitudeTransform*>());
		}

		return osg::Transform::asPositionAttitudeTransform();
	};

	// const osg::PositionAttitudeTransform * osg::Transform::asPositionAttitudeTransform() const
	const osg::PositionAttitudeTransform * asPositionAttitudeTransform() const {
		if(_obj.pushFunction("asPositionAttitudeTransform")) {
			return (_obj.callFunction<osg::PositionAttitudeTransform*>());
		}

		return osg::Transform::asPositionAttitudeTransform();
	};

	// osg::BoundingSphered osg::Transform::computeBound() const
	osg::BoundingSphered computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			return *(_obj.callFunction<osg::BoundingSphered*>());
		}

		return osg::Transform::computeBound();
	};

	// void osg::CullSettings::setDefaults()
	void setDefaults() {
		if(_obj.pushFunction("setDefaults")) {
			return (_obj.callFunction<void>());
		}

		return osg::CullSettings::setDefaults();
	};

	// osg::Object * osg::Camera::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::Camera::cloneType();
	};

	// osg::Object * osg::Camera::clone(const osg::CopyOp & copyop) const
	osg::Object * clone(const osg::CopyOp & copyop) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&copyop);
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::Camera::clone(copyop);
	};

	// bool osg::Camera::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osg::Camera::isSameKindAs(obj);
	};

	// const char * osg::Camera::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::Camera::className();
	};

	// const char * osg::Camera::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::Camera::libraryName();
	};

	// void osg::Camera::accept(osg::NodeVisitor & nv)
	void accept(osg::NodeVisitor & nv) {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return osg::Camera::accept(nv);
	};

	// void osg::Camera::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osg::Camera::releaseGLObjects(arg1);
	};

	// bool osg::Camera::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const
	bool computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const {
		if(_obj.pushFunction("computeLocalToWorldMatrix")) {
			_obj.pushArg(&matrix);
			_obj.pushArg(arg2);
			return (_obj.callFunction<bool>());
		}

		return osg::Camera::computeLocalToWorldMatrix(matrix, arg2);
	};

	// bool osg::Camera::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const
	bool computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const {
		if(_obj.pushFunction("computeWorldToLocalMatrix")) {
			_obj.pushArg(&matrix);
			_obj.pushArg(arg2);
			return (_obj.callFunction<bool>());
		}

		return osg::Camera::computeWorldToLocalMatrix(matrix, arg2);
	};

	// void osg::Camera::inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask)
	void inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask) {
		if(_obj.pushFunction("inheritCullSettings")) {
			_obj.pushArg(&settings);
			_obj.pushArg(inheritanceMask);
			return (_obj.callFunction<void>());
		}

		return osg::Camera::inheritCullSettings(settings, inheritanceMask);
	};


protected:
	// void osg::Group::childRemoved(unsigned int arg1, unsigned int arg2)
	// void osg::Group::childInserted(unsigned int arg1)

};




#endif
