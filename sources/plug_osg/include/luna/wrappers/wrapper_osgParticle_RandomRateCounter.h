#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_RANDOMRATECOUNTER_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_RANDOMRATECOUNTER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgParticle/RandomRateCounter>

class wrapper_osgParticle_RandomRateCounter : public osgParticle::RandomRateCounter {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgParticle_RandomRateCounter(lua_State* L, lua_Table* dum) : osgParticle::RandomRateCounter(), _obj(L,-1) {};
	wrapper_osgParticle_RandomRateCounter(lua_State* L, lua_Table* dum, const osgParticle::RandomRateCounter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgParticle::RandomRateCounter(copy, copyop), _obj(L,-1) {};

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

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osg::Object::releaseGLObjects(arg1);
	};

	// osg::Object * osgParticle::RandomRateCounter::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return osgParticle::RandomRateCounter::cloneType();
	};

	// osg::Object * osgParticle::RandomRateCounter::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return osgParticle::RandomRateCounter::clone(arg1);
	};

	// bool osgParticle::RandomRateCounter::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osgParticle::RandomRateCounter::isSameKindAs(obj);
	};

	// const char * osgParticle::RandomRateCounter::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osgParticle::RandomRateCounter::libraryName();
	};

	// const char * osgParticle::RandomRateCounter::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osgParticle::RandomRateCounter::className();
	};

	// int osgParticle::RandomRateCounter::numParticlesToCreate(double dt) const
	int numParticlesToCreate(double dt) const {
		if(_obj.pushFunction("numParticlesToCreate")) {
			_obj.pushArg(dt);
			return (_obj.callFunction<int>());
		}

		return osgParticle::RandomRateCounter::numParticlesToCreate(dt);
	};




};




#endif
