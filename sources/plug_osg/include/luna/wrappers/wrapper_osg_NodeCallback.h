#ifndef _WRAPPERS_WRAPPER_OSG_NODECALLBACK_H_
#define _WRAPPERS_WRAPPER_OSG_NODECALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/NodeCallback>

class wrapper_osg_NodeCallback : public osg::NodeCallback, public luna_wrapper_base {

public:
	

	wrapper_osg_NodeCallback(lua_State* L, lua_Table* dum) : osg::NodeCallback(), luna_wrapper_base(L) {};
	wrapper_osg_NodeCallback(lua_State* L, lua_Table* dum, const osg::NodeCallback & nc, const osg::CopyOp & arg2) : osg::NodeCallback(nc, arg2), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return NodeCallback::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return NodeCallback::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return NodeCallback::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return NodeCallback::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return NodeCallback::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return NodeCallback::releaseGLObjects(arg1);
	};

	// osg::Object * osg::NodeCallback::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return NodeCallback::cloneType();
	};

	// osg::Object * osg::NodeCallback::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return NodeCallback::clone(arg1);
	};

	// bool osg::NodeCallback::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return NodeCallback::isSameKindAs(obj);
	};

	// const char * osg::NodeCallback::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return NodeCallback::libraryName();
	};

	// const char * osg::NodeCallback::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return NodeCallback::className();
	};

	// void osg::NodeCallback::operator()(osg::Node * node, osg::NodeVisitor * nv)
	void operator()(osg::Node * node, osg::NodeVisitor * nv) {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(node);
			_obj.pushArg(nv);
			return (_obj.callFunction<void>());
		}

		return NodeCallback::operator()(node, nv);
	};




};




#endif

