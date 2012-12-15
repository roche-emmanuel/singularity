#ifndef _WRAPPERS_WRAPPER_OSG_ANIMATIONPATHCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSG_ANIMATIONPATHCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/AnimationPath>

class wrapper_osg_AnimationPathCallback : public osg::AnimationPathCallback {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_AnimationPathCallback(lua_State* L, lua_Table* dum) : osg::AnimationPathCallback(), _obj(L,-1) {};
	wrapper_osg_AnimationPathCallback(lua_State* L, lua_Table* dum, const osg::AnimationPathCallback & apc, const osg::CopyOp & copyop) : osg::AnimationPathCallback(apc, copyop), _obj(L,-1) {};
	wrapper_osg_AnimationPathCallback(lua_State* L, lua_Table* dum, osg::AnimationPath * ap, double timeOffset = 0.0, double timeMultiplier = 1.0) : osg::AnimationPathCallback(ap, timeOffset, timeMultiplier), _obj(L,-1) {};
	wrapper_osg_AnimationPathCallback(lua_State* L, lua_Table* dum, const osg::Vec3d & pivot, const osg::Vec3d & axis, float angularVelocity) : osg::AnimationPathCallback(pivot, axis, angularVelocity), _obj(L,-1) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return AnimationPathCallback::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return AnimationPathCallback::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return AnimationPathCallback::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return AnimationPathCallback::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return AnimationPathCallback::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return AnimationPathCallback::releaseGLObjects(arg1);
	};

	// osg::Object * osg::AnimationPathCallback::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return AnimationPathCallback::cloneType();
	};

	// osg::Object * osg::AnimationPathCallback::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return AnimationPathCallback::clone(arg1);
	};

	// bool osg::AnimationPathCallback::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return AnimationPathCallback::isSameKindAs(obj);
	};

	// const char * osg::AnimationPathCallback::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return AnimationPathCallback::libraryName();
	};

	// const char * osg::AnimationPathCallback::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return AnimationPathCallback::className();
	};

	// void osg::AnimationPathCallback::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			return (_obj.callFunction<void>());
		}

		return AnimationPathCallback::reset();
	};

	// double osg::AnimationPathCallback::getAnimationTime() const
	double getAnimationTime() const {
		if(_obj.pushFunction("getAnimationTime")) {
			return (_obj.callFunction<double>());
		}

		return AnimationPathCallback::getAnimationTime();
	};

	// void osg::AnimationPathCallback::operator()(osg::Node * node, osg::NodeVisitor * nv)
	void operator()(osg::Node * node, osg::NodeVisitor * nv) {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(node);
			_obj.pushArg(nv);
			return (_obj.callFunction<void>());
		}

		return AnimationPathCallback::operator()(node, nv);
	};




};




#endif

