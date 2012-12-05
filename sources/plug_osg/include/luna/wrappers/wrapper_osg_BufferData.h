#ifndef _WRAPPERS_WRAPPER_OSG_BUFFERDATA_H_
#define _WRAPPERS_WRAPPER_OSG_BUFFERDATA_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/BufferObject>

class wrapper_osg_BufferData : public osg::BufferData {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_BufferData(lua_State* L, lua_Table* dum) : osg::BufferData(), _obj(L,-1) {};
	wrapper_osg_BufferData(lua_State* L, lua_Table* dum, const osg::BufferData & bd, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::BufferData(bd, copyop), _obj(L,-1) {};

	// osg::Object * osg::Object::cloneType() const
	osg::Object * cloneType() const {
		THROW_IF(!_obj.pushFunction("cloneType"),"No implementation for abstract function osg::Object::cloneType");
		return (_obj.callFunction<osg::Object*>());
	};

	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		THROW_IF(!_obj.pushFunction("clone"),"No implementation for abstract function osg::Object::clone");
		_obj.pushArg(&arg1);
		return (_obj.callFunction<osg::Object*>());
	};

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

	// bool osg::BufferData::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osg::BufferData::isSameKindAs(obj);
	};

	// const char * osg::BufferData::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::BufferData::libraryName();
	};

	// const char * osg::BufferData::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::BufferData::className();
	};

	// const void * osg::BufferData::getDataPointer() const
	const void * getDataPointer() const {
		THROW_IF(!_obj.pushFunction("getDataPointer"),"No implementation for abstract function osg::BufferData::getDataPointer");
		return (_obj.callFunction<void*>());
	};

	// unsigned int osg::BufferData::getTotalDataSize() const
	unsigned int getTotalDataSize() const {
		THROW_IF(!_obj.pushFunction("getTotalDataSize"),"No implementation for abstract function osg::BufferData::getTotalDataSize");
		return (_obj.callFunction<unsigned int>());
	};

	// void osg::BufferData::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return osg::BufferData::releaseGLObjects(state);
	};




};




#endif

