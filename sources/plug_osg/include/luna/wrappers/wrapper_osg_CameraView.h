#ifndef _WRAPPERS_WRAPPER_OSG_CAMERAVIEW_H_
#define _WRAPPERS_WRAPPER_OSG_CAMERAVIEW_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/CameraView>

class wrapper_osg_CameraView : public osg::CameraView {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_CameraView(lua_State* L, lua_Table* dum) : osg::CameraView(), _obj(L,-1) {};
	wrapper_osg_CameraView(lua_State* L, lua_Table* dum, const osg::CameraView & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::CameraView(pat, copyop), _obj(L,-1) {};

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

	// void osg::Group::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osg::Group::releaseGLObjects(arg1);
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

	// osg::Object * osg::CameraView::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::CameraView::cloneType();
	};

	// osg::Object * osg::CameraView::clone(const osg::CopyOp & copyop) const
	osg::Object * clone(const osg::CopyOp & copyop) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&copyop);
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::CameraView::clone(copyop);
	};

	// bool osg::CameraView::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osg::CameraView::isSameKindAs(obj);
	};

	// const char * osg::CameraView::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::CameraView::className();
	};

	// const char * osg::CameraView::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::CameraView::libraryName();
	};

	// void osg::CameraView::accept(osg::NodeVisitor & nv)
	void accept(osg::NodeVisitor & nv) {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return osg::CameraView::accept(nv);
	};

	// bool osg::CameraView::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const
	bool computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const {
		if(_obj.pushFunction("computeLocalToWorldMatrix")) {
			_obj.pushArg(&matrix);
			_obj.pushArg(nv);
			return (_obj.callFunction<bool>());
		}

		return osg::CameraView::computeLocalToWorldMatrix(matrix, nv);
	};

	// bool osg::CameraView::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const
	bool computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const {
		if(_obj.pushFunction("computeWorldToLocalMatrix")) {
			_obj.pushArg(&matrix);
			_obj.pushArg(nv);
			return (_obj.callFunction<bool>());
		}

		return osg::CameraView::computeWorldToLocalMatrix(matrix, nv);
	};


protected:
	// void osg::Group::childRemoved(unsigned int arg1, unsigned int arg2)
	// void osg::Group::childInserted(unsigned int arg1)

};




#endif
