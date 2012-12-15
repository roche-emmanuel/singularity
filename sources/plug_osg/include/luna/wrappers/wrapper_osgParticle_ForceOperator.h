#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_FORCEOPERATOR_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_FORCEOPERATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgParticle/ForceOperator>

class wrapper_osgParticle_ForceOperator : public osgParticle::ForceOperator {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgParticle_ForceOperator(lua_State* L, lua_Table* dum) : osgParticle::ForceOperator(), _obj(L,-1) {};
	wrapper_osgParticle_ForceOperator(lua_State* L, lua_Table* dum, const osgParticle::ForceOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgParticle::ForceOperator(copy, copyop), _obj(L,-1) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return ForceOperator::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return ForceOperator::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return ForceOperator::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ForceOperator::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ForceOperator::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ForceOperator::releaseGLObjects(arg1);
	};

	// void osgParticle::Operator::operateParticles(osgParticle::ParticleSystem * ps, double dt)
	void operateParticles(osgParticle::ParticleSystem * ps, double dt) {
		if(_obj.pushFunction("operateParticles")) {
			_obj.pushArg(ps);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return ForceOperator::operateParticles(ps, dt);
	};

	// void osgParticle::Operator::endOperate()
	void endOperate() {
		if(_obj.pushFunction("endOperate")) {
			return (_obj.callFunction<void>());
		}

		return ForceOperator::endOperate();
	};

	// osg::Object * osgParticle::ForceOperator::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return ForceOperator::cloneType();
	};

	// osg::Object * osgParticle::ForceOperator::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return ForceOperator::clone(arg1);
	};

	// bool osgParticle::ForceOperator::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return ForceOperator::isSameKindAs(obj);
	};

	// const char * osgParticle::ForceOperator::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return ForceOperator::libraryName();
	};

	// const char * osgParticle::ForceOperator::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return ForceOperator::className();
	};

	// void osgParticle::ForceOperator::operate(osgParticle::Particle * P, double dt)
	void operate(osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("operate")) {
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return ForceOperator::operate(P, dt);
	};

	// void osgParticle::ForceOperator::beginOperate(osgParticle::Program * prg)
	void beginOperate(osgParticle::Program * prg) {
		if(_obj.pushFunction("beginOperate")) {
			_obj.pushArg(prg);
			return (_obj.callFunction<void>());
		}

		return ForceOperator::beginOperate(prg);
	};




};




#endif

