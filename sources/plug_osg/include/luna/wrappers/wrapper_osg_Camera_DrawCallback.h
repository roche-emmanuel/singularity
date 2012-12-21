#ifndef _WRAPPERS_WRAPPER_OSG_CAMERA_DRAWCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSG_CAMERA_DRAWCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Camera>

class wrapper_osg_Camera_DrawCallback : public osg::Camera::DrawCallback, public luna_wrapper_base {

public:
		

	~wrapper_osg_Camera_DrawCallback() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_Camera_DrawCallback(lua_State* L, lua_Table* dum) : osg::Camera::DrawCallback(), luna_wrapper_base(L) {};
	wrapper_osg_Camera_DrawCallback(lua_State* L, lua_Table* dum, const osg::Camera::DrawCallback & arg1, const osg::CopyOp & arg2) : osg::Camera::DrawCallback(arg1, arg2), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return DrawCallback::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return DrawCallback::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return DrawCallback::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return DrawCallback::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return DrawCallback::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return DrawCallback::releaseGLObjects(arg1);
	};

	// osg::Object * osg::Camera::DrawCallback::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return DrawCallback::cloneType();
	};

	// osg::Object * osg::Camera::DrawCallback::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return DrawCallback::clone(arg1);
	};

	// bool osg::Camera::DrawCallback::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return DrawCallback::isSameKindAs(obj);
	};

	// const char * osg::Camera::DrawCallback::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return DrawCallback::libraryName();
	};

	// const char * osg::Camera::DrawCallback::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return DrawCallback::className();
	};

	// void osg::Camera::DrawCallback::operator()(osg::RenderInfo & renderInfo) const
	void operator()(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return DrawCallback::operator()(renderInfo);
	};

	// void osg::Camera::DrawCallback::operator()(const osg::Camera & arg1) const
	void operator()(const osg::Camera & arg1) const {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return DrawCallback::operator()(arg1);
	};




};




#endif

