#ifndef _WRAPPERS_WRAPPER_OSG_BUFFERDATA_MODIFIEDCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSG_BUFFERDATA_MODIFIEDCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/BufferObject>

class wrapper_osg_BufferData_ModifiedCallback : public osg::BufferData::ModifiedCallback {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_BufferData_ModifiedCallback(lua_State* L, lua_Table* dum) : osg::BufferData::ModifiedCallback(), _obj(L,-1) {};
	wrapper_osg_BufferData_ModifiedCallback(lua_State* L, lua_Table* dum, const osg::BufferData::ModifiedCallback & arg1, const osg::CopyOp & arg2) : osg::BufferData::ModifiedCallback(arg1, arg2), _obj(L,-1) {};

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

	// osg::Object * osg::BufferData::ModifiedCallback::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::BufferData::ModifiedCallback::cloneType();
	};

	// osg::Object * osg::BufferData::ModifiedCallback::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::BufferData::ModifiedCallback::clone(arg1);
	};

	// bool osg::BufferData::ModifiedCallback::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osg::BufferData::ModifiedCallback::isSameKindAs(obj);
	};

	// const char * osg::BufferData::ModifiedCallback::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::BufferData::ModifiedCallback::libraryName();
	};

	// const char * osg::BufferData::ModifiedCallback::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::BufferData::ModifiedCallback::className();
	};

	// void osg::BufferData::ModifiedCallback::modified(osg::BufferData * arg1) const
	void modified(osg::BufferData * arg1) const {
		if(_obj.pushFunction("modified")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osg::BufferData::ModifiedCallback::modified(arg1);
	};




};




#endif
