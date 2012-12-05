#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_PARTICLESYSTEMUPDATER_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_PARTICLESYSTEMUPDATER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgParticle/ParticleSystemUpdater>

class wrapper_osgParticle_ParticleSystemUpdater : public osgParticle::ParticleSystemUpdater {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgParticle_ParticleSystemUpdater(lua_State* L, lua_Table* dum) : osgParticle::ParticleSystemUpdater(), _obj(L,-1) {};
	wrapper_osgParticle_ParticleSystemUpdater(lua_State* L, lua_Table* dum, const osgParticle::ParticleSystemUpdater & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgParticle::ParticleSystemUpdater(copy, copyop), _obj(L,-1) {};

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

	// osg::Group * osg::Node::asGroup()
	osg::Group * asGroup() {
		if(_obj.pushFunction("asGroup")) {
			return (_obj.callFunction<osg::Group*>());
		}

		return osg::Node::asGroup();
	};

	// const osg::Group * osg::Node::asGroup() const
	const osg::Group * asGroup() const {
		if(_obj.pushFunction("asGroup")) {
			return (_obj.callFunction<osg::Group*>());
		}

		return osg::Node::asGroup();
	};

	// osg::Transform * osg::Node::asTransform()
	osg::Transform * asTransform() {
		if(_obj.pushFunction("asTransform")) {
			return (_obj.callFunction<osg::Transform*>());
		}

		return osg::Node::asTransform();
	};

	// const osg::Transform * osg::Node::asTransform() const
	const osg::Transform * asTransform() const {
		if(_obj.pushFunction("asTransform")) {
			return (_obj.callFunction<osg::Transform*>());
		}

		return osg::Node::asTransform();
	};

	// osg::Switch * osg::Node::asSwitch()
	osg::Switch * asSwitch() {
		if(_obj.pushFunction("asSwitch")) {
			return (_obj.callFunction<osg::Switch*>());
		}

		return osg::Node::asSwitch();
	};

	// const osg::Switch * osg::Node::asSwitch() const
	const osg::Switch * asSwitch() const {
		if(_obj.pushFunction("asSwitch")) {
			return (_obj.callFunction<osg::Switch*>());
		}

		return osg::Node::asSwitch();
	};

	// osg::Geode * osg::Node::asGeode()
	osg::Geode * asGeode() {
		if(_obj.pushFunction("asGeode")) {
			return (_obj.callFunction<osg::Geode*>());
		}

		return osg::Node::asGeode();
	};

	// const osg::Geode * osg::Node::asGeode() const
	const osg::Geode * asGeode() const {
		if(_obj.pushFunction("asGeode")) {
			return (_obj.callFunction<osg::Geode*>());
		}

		return osg::Node::asGeode();
	};

	// void osg::Node::ascend(osg::NodeVisitor & nv)
	void ascend(osg::NodeVisitor & nv) {
		if(_obj.pushFunction("ascend")) {
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return osg::Node::ascend(nv);
	};

	// void osg::Node::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osg::Node::releaseGLObjects(arg1);
	};

	// osg::Object * osgParticle::ParticleSystemUpdater::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return osgParticle::ParticleSystemUpdater::cloneType();
	};

	// osg::Object * osgParticle::ParticleSystemUpdater::clone(const osg::CopyOp & copyop) const
	osg::Object * clone(const osg::CopyOp & copyop) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&copyop);
			return (_obj.callFunction<osg::Object*>());
		}

		return osgParticle::ParticleSystemUpdater::clone(copyop);
	};

	// bool osgParticle::ParticleSystemUpdater::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osgParticle::ParticleSystemUpdater::isSameKindAs(obj);
	};

	// const char * osgParticle::ParticleSystemUpdater::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osgParticle::ParticleSystemUpdater::className();
	};

	// const char * osgParticle::ParticleSystemUpdater::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osgParticle::ParticleSystemUpdater::libraryName();
	};

	// void osgParticle::ParticleSystemUpdater::accept(osg::NodeVisitor & nv)
	void accept(osg::NodeVisitor & nv) {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return osgParticle::ParticleSystemUpdater::accept(nv);
	};

	// bool osgParticle::ParticleSystemUpdater::addParticleSystem(osgParticle::ParticleSystem * ps)
	bool addParticleSystem(osgParticle::ParticleSystem * ps) {
		if(_obj.pushFunction("addParticleSystem")) {
			_obj.pushArg(ps);
			return (_obj.callFunction<bool>());
		}

		return osgParticle::ParticleSystemUpdater::addParticleSystem(ps);
	};

	// bool osgParticle::ParticleSystemUpdater::removeParticleSystem(osgParticle::ParticleSystem * ps)
	bool removeParticleSystem(osgParticle::ParticleSystem * ps) {
		if(_obj.pushFunction("removeParticleSystem")) {
			_obj.pushArg(ps);
			return (_obj.callFunction<bool>());
		}

		return osgParticle::ParticleSystemUpdater::removeParticleSystem(ps);
	};

	// bool osgParticle::ParticleSystemUpdater::removeParticleSystem(unsigned int i, unsigned int numParticleSystemsToRemove = 1)
	bool removeParticleSystem(unsigned int i, unsigned int numParticleSystemsToRemove = 1) {
		if(_obj.pushFunction("removeParticleSystem")) {
			_obj.pushArg(i);
			_obj.pushArg(numParticleSystemsToRemove);
			return (_obj.callFunction<bool>());
		}

		return osgParticle::ParticleSystemUpdater::removeParticleSystem(i, numParticleSystemsToRemove);
	};

	// bool osgParticle::ParticleSystemUpdater::replaceParticleSystem(osgParticle::ParticleSystem * origPS, osgParticle::ParticleSystem * newPS)
	bool replaceParticleSystem(osgParticle::ParticleSystem * origPS, osgParticle::ParticleSystem * newPS) {
		if(_obj.pushFunction("replaceParticleSystem")) {
			_obj.pushArg(origPS);
			_obj.pushArg(newPS);
			return (_obj.callFunction<bool>());
		}

		return osgParticle::ParticleSystemUpdater::replaceParticleSystem(origPS, newPS);
	};

	// bool osgParticle::ParticleSystemUpdater::setParticleSystem(unsigned int i, osgParticle::ParticleSystem * ps)
	bool setParticleSystem(unsigned int i, osgParticle::ParticleSystem * ps) {
		if(_obj.pushFunction("setParticleSystem")) {
			_obj.pushArg(i);
			_obj.pushArg(ps);
			return (_obj.callFunction<bool>());
		}

		return osgParticle::ParticleSystemUpdater::setParticleSystem(i, ps);
	};

	// void osgParticle::ParticleSystemUpdater::traverse(osg::NodeVisitor & arg1)
	void traverse(osg::NodeVisitor & arg1) {
		if(_obj.pushFunction("traverse")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osgParticle::ParticleSystemUpdater::traverse(arg1);
	};

	// osg::BoundingSphered osgParticle::ParticleSystemUpdater::computeBound() const
	osg::BoundingSphered computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			return *(_obj.callFunction<osg::BoundingSphered*>());
		}

		return osgParticle::ParticleSystemUpdater::computeBound();
	};




};




#endif

