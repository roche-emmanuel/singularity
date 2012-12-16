#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_RANDOMRATECOUNTER_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_RANDOMRATECOUNTER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgParticle/RandomRateCounter>

class wrapper_osgParticle_RandomRateCounter : public osgParticle::RandomRateCounter, public luna_wrapper_base {

public:
	

	wrapper_osgParticle_RandomRateCounter(lua_State* L, lua_Table* dum) : osgParticle::RandomRateCounter(), luna_wrapper_base(L) {};
	wrapper_osgParticle_RandomRateCounter(lua_State* L, lua_Table* dum, const osgParticle::RandomRateCounter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgParticle::RandomRateCounter(copy, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return RandomRateCounter::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return RandomRateCounter::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return RandomRateCounter::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return RandomRateCounter::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return RandomRateCounter::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return RandomRateCounter::releaseGLObjects(arg1);
	};

	// osg::Object * osgParticle::RandomRateCounter::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return RandomRateCounter::cloneType();
	};

	// osg::Object * osgParticle::RandomRateCounter::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return RandomRateCounter::clone(arg1);
	};

	// bool osgParticle::RandomRateCounter::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return RandomRateCounter::isSameKindAs(obj);
	};

	// const char * osgParticle::RandomRateCounter::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return RandomRateCounter::libraryName();
	};

	// const char * osgParticle::RandomRateCounter::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return RandomRateCounter::className();
	};

	// int osgParticle::RandomRateCounter::numParticlesToCreate(double dt) const
	int numParticlesToCreate(double dt) const {
		if(_obj.pushFunction("numParticlesToCreate")) {
			_obj.pushArg(dt);
			return (_obj.callFunction<int>());
		}

		return RandomRateCounter::numParticlesToCreate(dt);
	};




};




#endif

