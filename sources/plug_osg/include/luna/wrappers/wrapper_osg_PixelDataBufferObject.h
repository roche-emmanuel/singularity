#ifndef _WRAPPERS_WRAPPER_OSG_PIXELDATABUFFEROBJECT_H_
#define _WRAPPERS_WRAPPER_OSG_PIXELDATABUFFEROBJECT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/BufferObject>

class wrapper_osg_PixelDataBufferObject : public osg::PixelDataBufferObject {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_PixelDataBufferObject(lua_State* L, lua_Table* dum) : osg::PixelDataBufferObject(), _obj(L,-1) {};
	wrapper_osg_PixelDataBufferObject(lua_State* L, lua_Table* dum, const osg::PixelDataBufferObject & pbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::PixelDataBufferObject(pbo, copyop), _obj(L,-1) {};

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

	// void osg::BufferObject::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return osg::BufferObject::releaseGLObjects(state);
	};

	// osg::Object * osg::PixelDataBufferObject::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::PixelDataBufferObject::cloneType();
	};

	// osg::Object * osg::PixelDataBufferObject::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::PixelDataBufferObject::clone(arg1);
	};

	// bool osg::PixelDataBufferObject::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osg::PixelDataBufferObject::isSameKindAs(obj);
	};

	// const char * osg::PixelDataBufferObject::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::PixelDataBufferObject::libraryName();
	};

	// const char * osg::PixelDataBufferObject::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::PixelDataBufferObject::className();
	};

	// void osg::PixelDataBufferObject::compileBuffer(osg::State & state) const
	void compileBuffer(osg::State & state) const {
		if(_obj.pushFunction("compileBuffer")) {
			_obj.pushArg(&state);
			return (_obj.callFunction<void>());
		}

		return osg::PixelDataBufferObject::compileBuffer(state);
	};

	// void osg::PixelDataBufferObject::bindBufferInReadMode(osg::State & state)
	void bindBufferInReadMode(osg::State & state) {
		if(_obj.pushFunction("bindBufferInReadMode")) {
			_obj.pushArg(&state);
			return (_obj.callFunction<void>());
		}

		return osg::PixelDataBufferObject::bindBufferInReadMode(state);
	};

	// void osg::PixelDataBufferObject::bindBufferInWriteMode(osg::State & state)
	void bindBufferInWriteMode(osg::State & state) {
		if(_obj.pushFunction("bindBufferInWriteMode")) {
			_obj.pushArg(&state);
			return (_obj.callFunction<void>());
		}

		return osg::PixelDataBufferObject::bindBufferInWriteMode(state);
	};

	// void osg::PixelDataBufferObject::unbindBuffer(unsigned int contextID) const
	void unbindBuffer(unsigned int contextID) const {
		if(_obj.pushFunction("unbindBuffer")) {
			_obj.pushArg(contextID);
			return (_obj.callFunction<void>());
		}

		return osg::PixelDataBufferObject::unbindBuffer(contextID);
	};




};




#endif

