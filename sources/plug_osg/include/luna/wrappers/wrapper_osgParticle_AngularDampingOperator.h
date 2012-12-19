#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_ANGULARDAMPINGOPERATOR_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_ANGULARDAMPINGOPERATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgParticle/AngularDampingOperator>

class wrapper_osgParticle_AngularDampingOperator : public osgParticle::AngularDampingOperator, public luna_wrapper_base {

public:
	

	wrapper_osgParticle_AngularDampingOperator(lua_State* L, lua_Table* dum) : osgParticle::AngularDampingOperator(), luna_wrapper_base(L) {};
	wrapper_osgParticle_AngularDampingOperator(lua_State* L, lua_Table* dum, const osgParticle::AngularDampingOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgParticle::AngularDampingOperator(copy, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return AngularDampingOperator::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return AngularDampingOperator::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return AngularDampingOperator::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return AngularDampingOperator::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return AngularDampingOperator::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return AngularDampingOperator::releaseGLObjects(arg1);
	};

	// void osgParticle::Operator::operateParticles(osgParticle::ParticleSystem * ps, double dt)
	void operateParticles(osgParticle::ParticleSystem * ps, double dt) {
		if(_obj.pushFunction("operateParticles")) {
			_obj.pushArg(ps);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return AngularDampingOperator::operateParticles(ps, dt);
	};

	// void osgParticle::Operator::beginOperate(osgParticle::Program * arg1)
	void beginOperate(osgParticle::Program * arg1) {
		if(_obj.pushFunction("beginOperate")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return AngularDampingOperator::beginOperate(arg1);
	};

	// void osgParticle::Operator::endOperate()
	void endOperate() {
		if(_obj.pushFunction("endOperate")) {
			return (_obj.callFunction<void>());
		}

		return AngularDampingOperator::endOperate();
	};

	// osg::Object * osgParticle::AngularDampingOperator::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return AngularDampingOperator::cloneType();
	};

	// osg::Object * osgParticle::AngularDampingOperator::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return AngularDampingOperator::clone(arg1);
	};

	// bool osgParticle::AngularDampingOperator::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return AngularDampingOperator::isSameKindAs(obj);
	};

	// const char * osgParticle::AngularDampingOperator::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return AngularDampingOperator::libraryName();
	};

	// const char * osgParticle::AngularDampingOperator::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return AngularDampingOperator::className();
	};

	// void osgParticle::AngularDampingOperator::operate(osgParticle::Particle * P, double dt)
	void operate(osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("operate")) {
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return AngularDampingOperator::operate(P, dt);
	};




};




#endif

