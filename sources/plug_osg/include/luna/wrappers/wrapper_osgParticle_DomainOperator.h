#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_DOMAINOPERATOR_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_DOMAINOPERATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgParticle/DomainOperator>

class wrapper_osgParticle_DomainOperator : public osgParticle::DomainOperator {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgParticle_DomainOperator(lua_State* L, lua_Table* dum) : osgParticle::DomainOperator(), _obj(L,-1) {};
	wrapper_osgParticle_DomainOperator(lua_State* L, lua_Table* dum, const osgParticle::DomainOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgParticle::DomainOperator(copy, copyop), _obj(L,-1) {};

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

	// void osgParticle::Operator::operateParticles(osgParticle::ParticleSystem * ps, double dt)
	void operateParticles(osgParticle::ParticleSystem * ps, double dt) {
		if(_obj.pushFunction("operateParticles")) {
			_obj.pushArg(ps);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return osgParticle::Operator::operateParticles(ps, dt);
	};

	// osg::Object * osgParticle::DomainOperator::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return osgParticle::DomainOperator::cloneType();
	};

	// osg::Object * osgParticle::DomainOperator::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return osgParticle::DomainOperator::clone(arg1);
	};

	// bool osgParticle::DomainOperator::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osgParticle::DomainOperator::isSameKindAs(obj);
	};

	// const char * osgParticle::DomainOperator::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osgParticle::DomainOperator::libraryName();
	};

	// const char * osgParticle::DomainOperator::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osgParticle::DomainOperator::className();
	};

	// void osgParticle::DomainOperator::operate(osgParticle::Particle * P, double dt)
	void operate(osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("operate")) {
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return osgParticle::DomainOperator::operate(P, dt);
	};

	// void osgParticle::DomainOperator::beginOperate(osgParticle::Program * prg)
	void beginOperate(osgParticle::Program * prg) {
		if(_obj.pushFunction("beginOperate")) {
			_obj.pushArg(prg);
			return (_obj.callFunction<void>());
		}

		return osgParticle::DomainOperator::beginOperate(prg);
	};

	// void osgParticle::DomainOperator::endOperate()
	void endOperate() {
		if(_obj.pushFunction("endOperate")) {
			return (_obj.callFunction<void>());
		}

		return osgParticle::DomainOperator::endOperate();
	};


protected:
	// void osgParticle::DomainOperator::handlePoint(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	// void osgParticle::DomainOperator::handleLineSegment(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	// void osgParticle::DomainOperator::handleTriangle(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	// void osgParticle::DomainOperator::handleRectangle(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	// void osgParticle::DomainOperator::handlePlane(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	// void osgParticle::DomainOperator::handleSphere(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	// void osgParticle::DomainOperator::handleBox(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	// void osgParticle::DomainOperator::handleDisk(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)

};




#endif

