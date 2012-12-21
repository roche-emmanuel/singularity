#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_LINEARINTERPOLATOR_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_LINEARINTERPOLATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgParticle/LinearInterpolator>

class wrapper_osgParticle_LinearInterpolator : public osgParticle::LinearInterpolator, public luna_wrapper_base {

public:
		

	~wrapper_osgParticle_LinearInterpolator() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgParticle_LinearInterpolator(lua_State* L, lua_Table* dum) : osgParticle::LinearInterpolator(), luna_wrapper_base(L) {};
	wrapper_osgParticle_LinearInterpolator(lua_State* L, lua_Table* dum, const osgParticle::LinearInterpolator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgParticle::LinearInterpolator(copy, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return LinearInterpolator::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return LinearInterpolator::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return LinearInterpolator::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return LinearInterpolator::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return LinearInterpolator::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return LinearInterpolator::releaseGLObjects(arg1);
	};

	// osg::Object * osgParticle::LinearInterpolator::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return LinearInterpolator::cloneType();
	};

	// osg::Object * osgParticle::LinearInterpolator::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return LinearInterpolator::clone(arg1);
	};

	// bool osgParticle::LinearInterpolator::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return LinearInterpolator::isSameKindAs(obj);
	};

	// const char * osgParticle::LinearInterpolator::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return LinearInterpolator::libraryName();
	};

	// const char * osgParticle::LinearInterpolator::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return LinearInterpolator::className();
	};

	// float osgParticle::LinearInterpolator::interpolate(float t, float y1, float y2) const
	float interpolate(float t, float y1, float y2) const {
		if(_obj.pushFunction("interpolate")) {
			_obj.pushArg(t);
			_obj.pushArg(y1);
			_obj.pushArg(y2);
			return (_obj.callFunction<float>());
		}

		return LinearInterpolator::interpolate(t, y1, y2);
	};




};




#endif

