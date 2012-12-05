#ifndef _WRAPPERS_WRAPPER_OSG_PAGEDLOD_H_
#define _WRAPPERS_WRAPPER_OSG_PAGEDLOD_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/PagedLOD>

class wrapper_osg_PagedLOD : public osg::PagedLOD {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_PagedLOD(lua_State* L, lua_Table* dum) : osg::PagedLOD(), _obj(L,-1) {};
	wrapper_osg_PagedLOD(lua_State* L, lua_Table* dum, const osg::PagedLOD & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::PagedLOD(arg1, copyop), _obj(L,-1) {};

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

	// osg::Transform * osg::Node::asTransform()
	osg::Transform * asTransform() {
		if(_obj.pushFunction("asTransform")) {
			return (_obj.callFunction<osg::Transform*>());
		}

		return osg::Node::asTransform();
	};

	// const osg::Transform * osg::Node::asTransform() const
	const osg::Transform * asTransform() const {
		if(_obj.pushFunction("asTransform")) {
			return (_obj.callFunction<osg::Transform*>());
		}

		return osg::Node::asTransform();
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

	// bool osg::Group::insertChild(unsigned int index, osg::Node * child)
	bool insertChild(unsigned int index, osg::Node * child) {
		if(_obj.pushFunction("insertChild")) {
			_obj.pushArg(index);
			_obj.pushArg(child);
			return (_obj.callFunction<bool>());
		}

		return osg::Group::insertChild(index, child);
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

	// osg::BoundingSphered osg::LOD::computeBound() const
	osg::BoundingSphered computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			return *(_obj.callFunction<osg::BoundingSphered*>());
		}

		return osg::LOD::computeBound();
	};

	// osg::Object * osg::PagedLOD::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::PagedLOD::cloneType();
	};

	// osg::Object * osg::PagedLOD::clone(const osg::CopyOp & copyop) const
	osg::Object * clone(const osg::CopyOp & copyop) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&copyop);
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::PagedLOD::clone(copyop);
	};

	// bool osg::PagedLOD::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osg::PagedLOD::isSameKindAs(obj);
	};

	// const char * osg::PagedLOD::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::PagedLOD::className();
	};

	// const char * osg::PagedLOD::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::PagedLOD::libraryName();
	};

	// void osg::PagedLOD::accept(osg::NodeVisitor & nv)
	void accept(osg::NodeVisitor & nv) {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return osg::PagedLOD::accept(nv);
	};

	// void osg::PagedLOD::traverse(osg::NodeVisitor & arg1)
	void traverse(osg::NodeVisitor & arg1) {
		if(_obj.pushFunction("traverse")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::PagedLOD::traverse(arg1);
	};

	// bool osg::PagedLOD::addChild(osg::Node * child)
	bool addChild(osg::Node * child) {
		if(_obj.pushFunction("addChild")) {
			_obj.pushArg(child);
			return (_obj.callFunction<bool>());
		}

		return osg::PagedLOD::addChild(child);
	};

	// bool osg::PagedLOD::addChild(osg::Node * child, float min, float max)
	bool addChild(osg::Node * child, float min, float max) {
		if(_obj.pushFunction("addChild")) {
			_obj.pushArg(child);
			_obj.pushArg(min);
			_obj.pushArg(max);
			return (_obj.callFunction<bool>());
		}

		return osg::PagedLOD::addChild(child, min, max);
	};

	// bool osg::PagedLOD::addChild(osg::Node * child, float min, float max, const std::string & filename, float priorityOffset = 0.0f, float priorityScale = 1.0f)
	bool addChild(osg::Node * child, float min, float max, const std::string & filename, float priorityOffset = 0.0f, float priorityScale = 1.0f) {
		if(_obj.pushFunction("addChild")) {
			_obj.pushArg(child);
			_obj.pushArg(min);
			_obj.pushArg(max);
			_obj.pushArg(filename);
			_obj.pushArg(priorityOffset);
			_obj.pushArg(priorityScale);
			return (_obj.callFunction<bool>());
		}

		return osg::PagedLOD::addChild(child, min, max, filename, priorityOffset, priorityScale);
	};

	// bool osg::PagedLOD::removeChildren(unsigned int pos, unsigned int numChildrenToRemove = 1)
	bool removeChildren(unsigned int pos, unsigned int numChildrenToRemove = 1) {
		if(_obj.pushFunction("removeChildren")) {
			_obj.pushArg(pos);
			_obj.pushArg(numChildrenToRemove);
			return (_obj.callFunction<bool>());
		}

		return osg::PagedLOD::removeChildren(pos, numChildrenToRemove);
	};

	// bool osg::PagedLOD::removeExpiredChildren(double expiryTime, unsigned int expiryFrame, osg::NodeList & removedChildren)
	bool removeExpiredChildren(double expiryTime, unsigned int expiryFrame, osg::NodeList & removedChildren) {
		if(_obj.pushFunction("removeExpiredChildren")) {
			_obj.pushArg(expiryTime);
			_obj.pushArg(expiryFrame);
			_obj.pushArg(&removedChildren);
			return (_obj.callFunction<bool>());
		}

		return osg::PagedLOD::removeExpiredChildren(expiryTime, expiryFrame, removedChildren);
	};


protected:
	// void osg::Group::childRemoved(unsigned int arg1, unsigned int arg2)
	// void osg::Group::childInserted(unsigned int arg1)

};




#endif

