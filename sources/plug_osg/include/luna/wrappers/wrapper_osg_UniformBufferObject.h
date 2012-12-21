#ifndef _WRAPPERS_WRAPPER_OSG_UNIFORMBUFFEROBJECT_H_
#define _WRAPPERS_WRAPPER_OSG_UNIFORMBUFFEROBJECT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/BufferObject>

class wrapper_osg_UniformBufferObject : public osg::UniformBufferObject, public luna_wrapper_base {

public:
		

	~wrapper_osg_UniformBufferObject() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_UniformBufferObject(lua_State* L, lua_Table* dum) : osg::UniformBufferObject(), luna_wrapper_base(L) {};
	wrapper_osg_UniformBufferObject(lua_State* L, lua_Table* dum, const osg::UniformBufferObject & ubo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::UniformBufferObject(ubo, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return UniformBufferObject::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return UniformBufferObject::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return UniformBufferObject::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return UniformBufferObject::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return UniformBufferObject::getUserData();
	};

	// void osg::BufferObject::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return UniformBufferObject::releaseGLObjects(state);
	};

	// osg::Object * osg::UniformBufferObject::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return UniformBufferObject::cloneType();
	};

	// osg::Object * osg::UniformBufferObject::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return UniformBufferObject::clone(arg1);
	};

	// bool osg::UniformBufferObject::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return UniformBufferObject::isSameKindAs(obj);
	};

	// const char * osg::UniformBufferObject::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return UniformBufferObject::libraryName();
	};

	// const char * osg::UniformBufferObject::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return UniformBufferObject::className();
	};




};




#endif

