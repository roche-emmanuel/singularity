#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_RADIALSHOOTER_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_RADIALSHOOTER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgParticle/RadialShooter>

class wrapper_osgParticle_RadialShooter : public osgParticle::RadialShooter, public luna_wrapper_base {

public:
		

	~wrapper_osgParticle_RadialShooter() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgParticle_RadialShooter(lua_State* L, lua_Table* dum) : osgParticle::RadialShooter(), luna_wrapper_base(L) {};
	wrapper_osgParticle_RadialShooter(lua_State* L, lua_Table* dum, const osgParticle::RadialShooter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgParticle::RadialShooter(copy, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return RadialShooter::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return RadialShooter::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return RadialShooter::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return RadialShooter::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return RadialShooter::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return RadialShooter::releaseGLObjects(arg1);
	};

	// osg::Object * osgParticle::RadialShooter::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return RadialShooter::cloneType();
	};

	// osg::Object * osgParticle::RadialShooter::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return RadialShooter::clone(arg1);
	};

	// bool osgParticle::RadialShooter::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return RadialShooter::isSameKindAs(obj);
	};

	// const char * osgParticle::RadialShooter::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return RadialShooter::libraryName();
	};

	// const char * osgParticle::RadialShooter::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return RadialShooter::className();
	};

	// void osgParticle::RadialShooter::shoot(osgParticle::Particle * P) const
	void shoot(osgParticle::Particle * P) const {
		if(_obj.pushFunction("shoot")) {
			_obj.pushArg(P);
			return (_obj.callFunction<void>());
		}

		return RadialShooter::shoot(P);
	};




// osgParticle::RadialShooter & osgParticle::RadialShooter::operator=(const osgParticle::RadialShooter & arg1)
// osgParticle::Shooter & osgParticle::Shooter::operator=(const osgParticle::Shooter & arg1)
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

