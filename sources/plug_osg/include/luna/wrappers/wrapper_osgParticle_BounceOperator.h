#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_BOUNCEOPERATOR_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_BOUNCEOPERATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgParticle/BounceOperator>

class wrapper_osgParticle_BounceOperator : public osgParticle::BounceOperator, public luna_wrapper_base {

public:
	

	wrapper_osgParticle_BounceOperator(lua_State* L, lua_Table* dum) : osgParticle::BounceOperator(), luna_wrapper_base(L) {};
	wrapper_osgParticle_BounceOperator(lua_State* L, lua_Table* dum, const osgParticle::BounceOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgParticle::BounceOperator(copy, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return BounceOperator::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return BounceOperator::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return BounceOperator::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return BounceOperator::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return BounceOperator::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return BounceOperator::releaseGLObjects(arg1);
	};

	// void osgParticle::Operator::operateParticles(osgParticle::ParticleSystem * ps, double dt)
	void operateParticles(osgParticle::ParticleSystem * ps, double dt) {
		if(_obj.pushFunction("operateParticles")) {
			_obj.pushArg(ps);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return BounceOperator::operateParticles(ps, dt);
	};

	// void osgParticle::DomainOperator::operate(osgParticle::Particle * P, double dt)
	void operate(osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("operate")) {
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return BounceOperator::operate(P, dt);
	};

	// void osgParticle::DomainOperator::beginOperate(osgParticle::Program * prg)
	void beginOperate(osgParticle::Program * prg) {
		if(_obj.pushFunction("beginOperate")) {
			_obj.pushArg(prg);
			return (_obj.callFunction<void>());
		}

		return BounceOperator::beginOperate(prg);
	};

	// void osgParticle::DomainOperator::endOperate()
	void endOperate() {
		if(_obj.pushFunction("endOperate")) {
			return (_obj.callFunction<void>());
		}

		return BounceOperator::endOperate();
	};

	// osg::Object * osgParticle::BounceOperator::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return BounceOperator::cloneType();
	};

	// osg::Object * osgParticle::BounceOperator::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return BounceOperator::clone(arg1);
	};

	// bool osgParticle::BounceOperator::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return BounceOperator::isSameKindAs(obj);
	};

	// const char * osgParticle::BounceOperator::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return BounceOperator::libraryName();
	};

	// const char * osgParticle::BounceOperator::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return BounceOperator::className();
	};


protected:
	// void osgParticle::DomainOperator::handlePoint(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handlePoint(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handlePoint")) {
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return BounceOperator::handlePoint(domain, P, dt);
	};

	// void osgParticle::DomainOperator::handleLineSegment(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handleLineSegment(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handleLineSegment")) {
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return BounceOperator::handleLineSegment(domain, P, dt);
	};

	// void osgParticle::DomainOperator::handleBox(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handleBox(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handleBox")) {
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return BounceOperator::handleBox(domain, P, dt);
	};

	// void osgParticle::BounceOperator::handleTriangle(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handleTriangle(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handleTriangle")) {
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return BounceOperator::handleTriangle(domain, P, dt);
	};

	// void osgParticle::BounceOperator::handleRectangle(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handleRectangle(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handleRectangle")) {
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return BounceOperator::handleRectangle(domain, P, dt);
	};

	// void osgParticle::BounceOperator::handlePlane(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handlePlane(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handlePlane")) {
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return BounceOperator::handlePlane(domain, P, dt);
	};

	// void osgParticle::BounceOperator::handleSphere(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handleSphere(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handleSphere")) {
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return BounceOperator::handleSphere(domain, P, dt);
	};

	// void osgParticle::BounceOperator::handleDisk(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handleDisk(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handleDisk")) {
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return BounceOperator::handleDisk(domain, P, dt);
	};


};




#endif

