#ifndef _WRAPPERS_WRAPPER_OSG_ANIMATIONPATH_H_
#define _WRAPPERS_WRAPPER_OSG_ANIMATIONPATH_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/AnimationPath>

class wrapper_osg_AnimationPath : public osg::AnimationPath, public luna_wrapper_base {

public:
	

	wrapper_osg_AnimationPath(lua_State* L, lua_Table* dum) : osg::AnimationPath(), luna_wrapper_base(L) {};
	wrapper_osg_AnimationPath(lua_State* L, lua_Table* dum, const osg::AnimationPath & ap, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::AnimationPath(ap, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return AnimationPath::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return AnimationPath::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return AnimationPath::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return AnimationPath::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return AnimationPath::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return AnimationPath::releaseGLObjects(arg1);
	};

	// osg::Object * osg::AnimationPath::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return AnimationPath::cloneType();
	};

	// osg::Object * osg::AnimationPath::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return AnimationPath::clone(arg1);
	};

	// bool osg::AnimationPath::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return AnimationPath::isSameKindAs(obj);
	};

	// const char * osg::AnimationPath::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return AnimationPath::libraryName();
	};

	// const char * osg::AnimationPath::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return AnimationPath::className();
	};

	// bool osg::AnimationPath::getInterpolatedControlPoint(double time, osg::AnimationPath::ControlPoint & controlPoint) const
	bool getInterpolatedControlPoint(double time, osg::AnimationPath::ControlPoint & controlPoint) const {
		if(_obj.pushFunction("getInterpolatedControlPoint")) {
			_obj.pushArg(time);
			_obj.pushArg(&controlPoint);
			return (_obj.callFunction<bool>());
		}

		return AnimationPath::getInterpolatedControlPoint(time, controlPoint);
	};




};




#endif

