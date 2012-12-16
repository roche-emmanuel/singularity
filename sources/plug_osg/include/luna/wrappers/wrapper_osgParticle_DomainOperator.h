#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_DOMAINOPERATOR_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_DOMAINOPERATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgParticle/DomainOperator>

class wrapper_osgParticle_DomainOperator : public osgParticle::DomainOperator, public luna_wrapper_base {

public:
	

	wrapper_osgParticle_DomainOperator(lua_State* L, lua_Table* dum) : osgParticle::DomainOperator(), luna_wrapper_base(L) {};
	wrapper_osgParticle_DomainOperator(lua_State* L, lua_Table* dum, const osgParticle::DomainOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgParticle::DomainOperator(copy, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return DomainOperator::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return DomainOperator::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return DomainOperator::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return DomainOperator::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return DomainOperator::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return DomainOperator::releaseGLObjects(arg1);
	};

	// void osgParticle::Operator::operateParticles(osgParticle::ParticleSystem * ps, double dt)
	void operateParticles(osgParticle::ParticleSystem * ps, double dt) {
		if(_obj.pushFunction("operateParticles")) {
			_obj.pushArg(ps);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return DomainOperator::operateParticles(ps, dt);
	};

	// osg::Object * osgParticle::DomainOperator::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return DomainOperator::cloneType();
	};

	// osg::Object * osgParticle::DomainOperator::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return DomainOperator::clone(arg1);
	};

	// bool osgParticle::DomainOperator::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return DomainOperator::isSameKindAs(obj);
	};

	// const char * osgParticle::DomainOperator::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return DomainOperator::libraryName();
	};

	// const char * osgParticle::DomainOperator::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return DomainOperator::className();
	};

	// void osgParticle::DomainOperator::operate(osgParticle::Particle * P, double dt)
	void operate(osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("operate")) {
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return DomainOperator::operate(P, dt);
	};

	// void osgParticle::DomainOperator::beginOperate(osgParticle::Program * prg)
	void beginOperate(osgParticle::Program * prg) {
		if(_obj.pushFunction("beginOperate")) {
			_obj.pushArg(prg);
			return (_obj.callFunction<void>());
		}

		return DomainOperator::beginOperate(prg);
	};

	// void osgParticle::DomainOperator::endOperate()
	void endOperate() {
		if(_obj.pushFunction("endOperate")) {
			return (_obj.callFunction<void>());
		}

		return DomainOperator::endOperate();
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

		return DomainOperator::handlePoint(domain, P, dt);
	};

	// void osgParticle::DomainOperator::handleLineSegment(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handleLineSegment(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handleLineSegment")) {
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return DomainOperator::handleLineSegment(domain, P, dt);
	};

	// void osgParticle::DomainOperator::handleTriangle(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handleTriangle(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handleTriangle")) {
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return DomainOperator::handleTriangle(domain, P, dt);
	};

	// void osgParticle::DomainOperator::handleRectangle(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handleRectangle(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handleRectangle")) {
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return DomainOperator::handleRectangle(domain, P, dt);
	};

	// void osgParticle::DomainOperator::handlePlane(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handlePlane(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handlePlane")) {
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return DomainOperator::handlePlane(domain, P, dt);
	};

	// void osgParticle::DomainOperator::handleSphere(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handleSphere(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handleSphere")) {
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return DomainOperator::handleSphere(domain, P, dt);
	};

	// void osgParticle::DomainOperator::handleBox(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handleBox(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handleBox")) {
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return DomainOperator::handleBox(domain, P, dt);
	};

	// void osgParticle::DomainOperator::handleDisk(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handleDisk(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handleDisk")) {
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return DomainOperator::handleDisk(domain, P, dt);
	};


};




#endif

