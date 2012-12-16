#ifndef _WRAPPERS_WRAPPER_OSG_DRAWABLE_COMPUTEBOUNDINGBOXCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSG_DRAWABLE_COMPUTEBOUNDINGBOXCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Drawable>

class wrapper_osg_Drawable_ComputeBoundingBoxCallback : public osg::Drawable::ComputeBoundingBoxCallback, public luna_wrapper_base {

public:
	

	wrapper_osg_Drawable_ComputeBoundingBoxCallback(lua_State* L, lua_Table* dum) : osg::Drawable::ComputeBoundingBoxCallback(), luna_wrapper_base(L) {};
	wrapper_osg_Drawable_ComputeBoundingBoxCallback(lua_State* L, lua_Table* dum, const osg::Drawable::ComputeBoundingBoxCallback & arg1, const osg::CopyOp & arg2) : osg::Drawable::ComputeBoundingBoxCallback(arg1, arg2), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return ComputeBoundingBoxCallback::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return ComputeBoundingBoxCallback::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return ComputeBoundingBoxCallback::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ComputeBoundingBoxCallback::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ComputeBoundingBoxCallback::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ComputeBoundingBoxCallback::releaseGLObjects(arg1);
	};

	// osg::Object * osg::Drawable::ComputeBoundingBoxCallback::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return ComputeBoundingBoxCallback::cloneType();
	};

	// osg::Object * osg::Drawable::ComputeBoundingBoxCallback::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return ComputeBoundingBoxCallback::clone(arg1);
	};

	// bool osg::Drawable::ComputeBoundingBoxCallback::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return ComputeBoundingBoxCallback::isSameKindAs(obj);
	};

	// const char * osg::Drawable::ComputeBoundingBoxCallback::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return ComputeBoundingBoxCallback::libraryName();
	};

	// const char * osg::Drawable::ComputeBoundingBoxCallback::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return ComputeBoundingBoxCallback::className();
	};

	// osg::BoundingBoxd osg::Drawable::ComputeBoundingBoxCallback::computeBound(const osg::Drawable & arg1) const
	osg::BoundingBoxd computeBound(const osg::Drawable & arg1) const {
		if(_obj.pushFunction("computeBound")) {
			_obj.pushArg(&arg1);
			return *(_obj.callFunction<osg::BoundingBoxd*>());
		}

		return ComputeBoundingBoxCallback::computeBound(arg1);
	};




};




#endif

