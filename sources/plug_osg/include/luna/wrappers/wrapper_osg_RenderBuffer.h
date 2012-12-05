#ifndef _WRAPPERS_WRAPPER_OSG_RENDERBUFFER_H_
#define _WRAPPERS_WRAPPER_OSG_RENDERBUFFER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/FrameBufferObject>

class wrapper_osg_RenderBuffer : public osg::RenderBuffer {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_RenderBuffer(lua_State* L, lua_Table* dum) : osg::RenderBuffer(), _obj(L,-1) {};
	wrapper_osg_RenderBuffer(lua_State* L, lua_Table* dum, int width, int height, unsigned int internalFormat, int samples = 0, int colorSamples = 0) : osg::RenderBuffer(width, height, internalFormat, samples, colorSamples), _obj(L,-1) {};
	wrapper_osg_RenderBuffer(lua_State* L, lua_Table* dum, const osg::RenderBuffer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::RenderBuffer(copy, copyop), _obj(L,-1) {};

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

	// osg::Object * osg::RenderBuffer::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::RenderBuffer::cloneType();
	};

	// osg::Object * osg::RenderBuffer::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::RenderBuffer::clone(arg1);
	};

	// bool osg::RenderBuffer::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osg::RenderBuffer::isSameKindAs(obj);
	};

	// const char * osg::RenderBuffer::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::RenderBuffer::libraryName();
	};

	// const char * osg::RenderBuffer::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::RenderBuffer::className();
	};

	// void osg::RenderBuffer::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osg::RenderBuffer::releaseGLObjects(arg1);
	};




};




#endif

