#ifndef _WRAPPERS_WRAPPER_OSG_STATESET_CALLBACK_H_
#define _WRAPPERS_WRAPPER_OSG_STATESET_CALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/StateSet>

class wrapper_osg_StateSet_Callback : public osg::StateSet::Callback {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_StateSet_Callback(lua_State* L, lua_Table* dum) : osg::StateSet::Callback(), _obj(L,-1) {};
	wrapper_osg_StateSet_Callback(lua_State* L, lua_Table* dum, const osg::StateSet::Callback & arg1, const osg::CopyOp & arg2) : osg::StateSet::Callback(arg1, arg2), _obj(L,-1) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Callback::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return Callback::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Callback::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Callback::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Callback::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return Callback::releaseGLObjects(arg1);
	};

	// osg::Object * osg::StateSet::Callback::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return Callback::cloneType();
	};

	// osg::Object * osg::StateSet::Callback::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return Callback::clone(arg1);
	};

	// bool osg::StateSet::Callback::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Callback::isSameKindAs(obj);
	};

	// const char * osg::StateSet::Callback::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return Callback::libraryName();
	};

	// const char * osg::StateSet::Callback::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return Callback::className();
	};

	// void osg::StateSet::Callback::operator()(osg::StateSet * arg1, osg::NodeVisitor * arg2)
	void operator()(osg::StateSet * arg1, osg::NodeVisitor * arg2) {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<void>());
		}

		return Callback::operator()(arg1, arg2);
	};




};




#endif

