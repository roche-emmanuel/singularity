#ifndef _WRAPPERS_WRAPPER_OSG_NODE_COMPUTEBOUNDINGSPHERECALLBACK_H_
#define _WRAPPERS_WRAPPER_OSG_NODE_COMPUTEBOUNDINGSPHERECALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Node>

class wrapper_osg_Node_ComputeBoundingSphereCallback : public osg::Node::ComputeBoundingSphereCallback, public luna_wrapper_base {

public:
	

	wrapper_osg_Node_ComputeBoundingSphereCallback(lua_State* L, lua_Table* dum) : osg::Node::ComputeBoundingSphereCallback(), luna_wrapper_base(L) {};
	wrapper_osg_Node_ComputeBoundingSphereCallback(lua_State* L, lua_Table* dum, const osg::Node::ComputeBoundingSphereCallback & arg1, const osg::CopyOp & arg2) : osg::Node::ComputeBoundingSphereCallback(arg1, arg2), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return ComputeBoundingSphereCallback::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return ComputeBoundingSphereCallback::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return ComputeBoundingSphereCallback::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ComputeBoundingSphereCallback::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ComputeBoundingSphereCallback::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ComputeBoundingSphereCallback::releaseGLObjects(arg1);
	};

	// osg::Object * osg::Node::ComputeBoundingSphereCallback::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return ComputeBoundingSphereCallback::cloneType();
	};

	// osg::Object * osg::Node::ComputeBoundingSphereCallback::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return ComputeBoundingSphereCallback::clone(arg1);
	};

	// bool osg::Node::ComputeBoundingSphereCallback::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return ComputeBoundingSphereCallback::isSameKindAs(obj);
	};

	// const char * osg::Node::ComputeBoundingSphereCallback::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return ComputeBoundingSphereCallback::libraryName();
	};

	// const char * osg::Node::ComputeBoundingSphereCallback::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return ComputeBoundingSphereCallback::className();
	};

	// osg::BoundingSphered osg::Node::ComputeBoundingSphereCallback::computeBound(const osg::Node & arg1) const
	osg::BoundingSphered computeBound(const osg::Node & arg1) const {
		if(_obj.pushFunction("computeBound")) {
			_obj.pushArg(&arg1);
			return *(_obj.callFunction<osg::BoundingSphered*>());
		}

		return ComputeBoundingSphereCallback::computeBound(arg1);
	};




};




#endif

