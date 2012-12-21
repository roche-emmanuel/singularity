#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_CONSTANTRATECOUNTER_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_CONSTANTRATECOUNTER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgParticle/ConstantRateCounter>

class wrapper_osgParticle_ConstantRateCounter : public osgParticle::ConstantRateCounter, public luna_wrapper_base {

public:
		

	~wrapper_osgParticle_ConstantRateCounter() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgParticle_ConstantRateCounter(lua_State* L, lua_Table* dum) : osgParticle::ConstantRateCounter(), luna_wrapper_base(L) {};
	wrapper_osgParticle_ConstantRateCounter(lua_State* L, lua_Table* dum, const osgParticle::ConstantRateCounter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgParticle::ConstantRateCounter(copy, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return ConstantRateCounter::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return ConstantRateCounter::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return ConstantRateCounter::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ConstantRateCounter::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ConstantRateCounter::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ConstantRateCounter::releaseGLObjects(arg1);
	};

	// osg::Object * osgParticle::ConstantRateCounter::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return ConstantRateCounter::cloneType();
	};

	// osg::Object * osgParticle::ConstantRateCounter::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return ConstantRateCounter::clone(arg1);
	};

	// bool osgParticle::ConstantRateCounter::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return ConstantRateCounter::isSameKindAs(obj);
	};

	// const char * osgParticle::ConstantRateCounter::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return ConstantRateCounter::libraryName();
	};

	// const char * osgParticle::ConstantRateCounter::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return ConstantRateCounter::className();
	};

	// int osgParticle::ConstantRateCounter::numParticlesToCreate(double dt) const
	int numParticlesToCreate(double dt) const {
		if(_obj.pushFunction("numParticlesToCreate")) {
			_obj.pushArg(dt);
			return (_obj.callFunction<int>());
		}

		return ConstantRateCounter::numParticlesToCreate(dt);
	};




// osgParticle::Counter & osgParticle::Counter::operator=(const osgParticle::Counter & arg1)
// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
	return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
};

// void osg::Referenced::deleteUsingDeleteHandler() const
void public_deleteUsingDeleteHandler() const {
	return osg::Referenced::deleteUsingDeleteHandler();
};


};




#endif

