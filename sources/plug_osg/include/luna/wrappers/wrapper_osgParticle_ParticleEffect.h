#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_PARTICLEEFFECT_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_PARTICLEEFFECT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgParticle/ParticleEffect>

class wrapper_osgParticle_ParticleEffect : public osgParticle::ParticleEffect, public luna_wrapper_base {

public:
		

	~wrapper_osgParticle_ParticleEffect() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgParticle_ParticleEffect(lua_State* L, lua_Table* dum, bool automaticSetup = true) : osgParticle::ParticleEffect(automaticSetup), luna_wrapper_base(L) {};
	wrapper_osgParticle_ParticleEffect(lua_State* L, lua_Table* dum, const osgParticle::ParticleEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgParticle::ParticleEffect(copy, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return ParticleEffect::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return ParticleEffect::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return ParticleEffect::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ParticleEffect::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ParticleEffect::getUserData();
	};

	// osg::Transform * osg::Node::asTransform()
	osg::Transform * asTransform() {
		if(_obj.pushFunction("asTransform")) {
			return (_obj.callFunction<osg::Transform*>());
		}

		return ParticleEffect::asTransform();
	};

	// const osg::Transform * osg::Node::asTransform() const
	const osg::Transform * asTransform() const {
		if(_obj.pushFunction("asTransform")) {
			return (_obj.callFunction<osg::Transform*>());
		}

		return ParticleEffect::asTransform();
	};

	// osg::Switch * osg::Node::asSwitch()
	osg::Switch * asSwitch() {
		if(_obj.pushFunction("asSwitch")) {
			return (_obj.callFunction<osg::Switch*>());
		}

		return ParticleEffect::asSwitch();
	};

	// const osg::Switch * osg::Node::asSwitch() const
	const osg::Switch * asSwitch() const {
		if(_obj.pushFunction("asSwitch")) {
			return (_obj.callFunction<osg::Switch*>());
		}

		return ParticleEffect::asSwitch();
	};

	// osg::Geode * osg::Node::asGeode()
	osg::Geode * asGeode() {
		if(_obj.pushFunction("asGeode")) {
			return (_obj.callFunction<osg::Geode*>());
		}

		return ParticleEffect::asGeode();
	};

	// const osg::Geode * osg::Node::asGeode() const
	const osg::Geode * asGeode() const {
		if(_obj.pushFunction("asGeode")) {
			return (_obj.callFunction<osg::Geode*>());
		}

		return ParticleEffect::asGeode();
	};

	// void osg::Node::ascend(osg::NodeVisitor & nv)
	void ascend(osg::NodeVisitor & nv) {
		if(_obj.pushFunction("ascend")) {
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return ParticleEffect::ascend(nv);
	};

	// osg::Object * osg::Group::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return ParticleEffect::cloneType();
	};

	// osg::Object * osg::Group::clone(const osg::CopyOp & copyop) const
	osg::Object * clone(const osg::CopyOp & copyop) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&copyop);
			return (_obj.callFunction<osg::Object*>());
		}

		return ParticleEffect::clone(copyop);
	};

	// osg::Group * osg::Group::asGroup()
	osg::Group * asGroup() {
		if(_obj.pushFunction("asGroup")) {
			return (_obj.callFunction<osg::Group*>());
		}

		return ParticleEffect::asGroup();
	};

	// const osg::Group * osg::Group::asGroup() const
	const osg::Group * asGroup() const {
		if(_obj.pushFunction("asGroup")) {
			return (_obj.callFunction<osg::Group*>());
		}

		return ParticleEffect::asGroup();
	};

	// void osg::Group::traverse(osg::NodeVisitor & arg1)
	void traverse(osg::NodeVisitor & arg1) {
		if(_obj.pushFunction("traverse")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ParticleEffect::traverse(arg1);
	};

	// bool osg::Group::addChild(osg::Node * child)
	bool addChild(osg::Node * child) {
		if(_obj.pushFunction("addChild")) {
			_obj.pushArg(child);
			return (_obj.callFunction<bool>());
		}

		return ParticleEffect::addChild(child);
	};

	// bool osg::Group::insertChild(unsigned int index, osg::Node * child)
	bool insertChild(unsigned int index, osg::Node * child) {
		if(_obj.pushFunction("insertChild")) {
			_obj.pushArg(index);
			_obj.pushArg(child);
			return (_obj.callFunction<bool>());
		}

		return ParticleEffect::insertChild(index, child);
	};

	// bool osg::Group::removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	bool removeChildren(unsigned int pos, unsigned int numChildrenToRemove) {
		if(_obj.pushFunction("removeChildren")) {
			_obj.pushArg(pos);
			_obj.pushArg(numChildrenToRemove);
			return (_obj.callFunction<bool>());
		}

		return ParticleEffect::removeChildren(pos, numChildrenToRemove);
	};

	// bool osg::Group::replaceChild(osg::Node * origChild, osg::Node * newChild)
	bool replaceChild(osg::Node * origChild, osg::Node * newChild) {
		if(_obj.pushFunction("replaceChild")) {
			_obj.pushArg(origChild);
			_obj.pushArg(newChild);
			return (_obj.callFunction<bool>());
		}

		return ParticleEffect::replaceChild(origChild, newChild);
	};

	// bool osg::Group::setChild(unsigned int i, osg::Node * node)
	bool setChild(unsigned int i, osg::Node * node) {
		if(_obj.pushFunction("setChild")) {
			_obj.pushArg(i);
			_obj.pushArg(node);
			return (_obj.callFunction<bool>());
		}

		return ParticleEffect::setChild(i, node);
	};

	// void osg::Group::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ParticleEffect::releaseGLObjects(arg1);
	};

	// osg::BoundingSphered osg::Group::computeBound() const
	osg::BoundingSphered computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			return *(_obj.callFunction<osg::BoundingSphered*>());
		}

		return ParticleEffect::computeBound();
	};

	// const char * osgParticle::ParticleEffect::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return ParticleEffect::libraryName();
	};

	// const char * osgParticle::ParticleEffect::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return ParticleEffect::className();
	};

	// bool osgParticle::ParticleEffect::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return ParticleEffect::isSameKindAs(obj);
	};

	// void osgParticle::ParticleEffect::accept(osg::NodeVisitor & nv)
	void accept(osg::NodeVisitor & nv) {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return ParticleEffect::accept(nv);
	};

	// osgParticle::Emitter * osgParticle::ParticleEffect::getEmitter()
	osgParticle::Emitter * getEmitter() {
		THROW_IF(!_obj.pushFunction("getEmitter"),"No implementation for abstract function osgParticle::ParticleEffect::getEmitter");
		return (_obj.callFunction<osgParticle::Emitter*>());
	};

	// const osgParticle::Emitter * osgParticle::ParticleEffect::getEmitter() const
	const osgParticle::Emitter * getEmitter() const {
		THROW_IF(!_obj.pushFunction("getEmitter"),"No implementation for abstract function osgParticle::ParticleEffect::getEmitter");
		return (_obj.callFunction<osgParticle::Emitter*>());
	};

	// osgParticle::Program * osgParticle::ParticleEffect::getProgram()
	osgParticle::Program * getProgram() {
		THROW_IF(!_obj.pushFunction("getProgram"),"No implementation for abstract function osgParticle::ParticleEffect::getProgram");
		return (_obj.callFunction<osgParticle::Program*>());
	};

	// const osgParticle::Program * osgParticle::ParticleEffect::getProgram() const
	const osgParticle::Program * getProgram() const {
		THROW_IF(!_obj.pushFunction("getProgram"),"No implementation for abstract function osgParticle::ParticleEffect::getProgram");
		return (_obj.callFunction<osgParticle::Program*>());
	};

	// void osgParticle::ParticleEffect::setDefaults()
	void setDefaults() {
		if(_obj.pushFunction("setDefaults")) {
			return (_obj.callFunction<void>());
		}

		return ParticleEffect::setDefaults();
	};

	// void osgParticle::ParticleEffect::setUpEmitterAndProgram()
	void setUpEmitterAndProgram() {
		THROW_IF(!_obj.pushFunction("setUpEmitterAndProgram"),"No implementation for abstract function osgParticle::ParticleEffect::setUpEmitterAndProgram");
		return (_obj.callFunction<void>());
	};

	// void osgParticle::ParticleEffect::buildEffect()
	void buildEffect() {
		if(_obj.pushFunction("buildEffect")) {
			return (_obj.callFunction<void>());
		}

		return ParticleEffect::buildEffect();
	};


protected:
	// void osg::Group::childRemoved(unsigned int arg1, unsigned int arg2)
	void childRemoved(unsigned int arg1, unsigned int arg2) {
		if(_obj.pushFunction("childRemoved")) {
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<void>());
		}

		return ParticleEffect::childRemoved(arg1, arg2);
	};

	// void osg::Group::childInserted(unsigned int arg1)
	void childInserted(unsigned int arg1) {
		if(_obj.pushFunction("childInserted")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ParticleEffect::childInserted(arg1);
	};


};




#endif

