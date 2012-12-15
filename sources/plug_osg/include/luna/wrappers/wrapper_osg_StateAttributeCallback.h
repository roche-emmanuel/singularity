#ifndef _WRAPPERS_WRAPPER_OSG_STATEATTRIBUTECALLBACK_H_
#define _WRAPPERS_WRAPPER_OSG_STATEATTRIBUTECALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/StateAttributeCallback>

class wrapper_osg_StateAttributeCallback : public osg::StateAttributeCallback {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_StateAttributeCallback(lua_State* L, lua_Table* dum) : osg::StateAttributeCallback(), _obj(L,-1) {};
	wrapper_osg_StateAttributeCallback(lua_State* L, lua_Table* dum, const osg::StateAttributeCallback & arg1, const osg::CopyOp & arg2) : osg::StateAttributeCallback(arg1, arg2), _obj(L,-1) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return StateAttributeCallback::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return StateAttributeCallback::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return StateAttributeCallback::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return StateAttributeCallback::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return StateAttributeCallback::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return StateAttributeCallback::releaseGLObjects(arg1);
	};

	// osg::Object * osg::StateAttributeCallback::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return StateAttributeCallback::cloneType();
	};

	// osg::Object * osg::StateAttributeCallback::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return StateAttributeCallback::clone(arg1);
	};

	// bool osg::StateAttributeCallback::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return StateAttributeCallback::isSameKindAs(obj);
	};

	// const char * osg::StateAttributeCallback::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return StateAttributeCallback::libraryName();
	};

	// const char * osg::StateAttributeCallback::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return StateAttributeCallback::className();
	};

	// void osg::StateAttributeCallback::operator()(osg::StateAttribute * arg1, osg::NodeVisitor * arg2)
	void operator()(osg::StateAttribute * arg1, osg::NodeVisitor * arg2) {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<void>());
		}

		return StateAttributeCallback::operator()(arg1, arg2);
	};




};




#endif

