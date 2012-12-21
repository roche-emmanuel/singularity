#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_FLUIDPROGRAM_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_FLUIDPROGRAM_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgParticle/FluidProgram>

class wrapper_osgParticle_FluidProgram : public osgParticle::FluidProgram, public luna_wrapper_base {

public:
		

	~wrapper_osgParticle_FluidProgram() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgParticle_FluidProgram(lua_State* L, lua_Table* dum) : osgParticle::FluidProgram(), luna_wrapper_base(L) {};
	wrapper_osgParticle_FluidProgram(lua_State* L, lua_Table* dum, const osgParticle::FluidProgram & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgParticle::FluidProgram(copy, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return FluidProgram::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return FluidProgram::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return FluidProgram::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return FluidProgram::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return FluidProgram::getUserData();
	};

	// osg::Group * osg::Node::asGroup()
	osg::Group * asGroup() {
		if(_obj.pushFunction("asGroup")) {
			return (_obj.callFunction<osg::Group*>());
		}

		return FluidProgram::asGroup();
	};

	// const osg::Group * osg::Node::asGroup() const
	const osg::Group * asGroup() const {
		if(_obj.pushFunction("asGroup")) {
			return (_obj.callFunction<osg::Group*>());
		}

		return FluidProgram::asGroup();
	};

	// osg::Transform * osg::Node::asTransform()
	osg::Transform * asTransform() {
		if(_obj.pushFunction("asTransform")) {
			return (_obj.callFunction<osg::Transform*>());
		}

		return FluidProgram::asTransform();
	};

	// const osg::Transform * osg::Node::asTransform() const
	const osg::Transform * asTransform() const {
		if(_obj.pushFunction("asTransform")) {
			return (_obj.callFunction<osg::Transform*>());
		}

		return FluidProgram::asTransform();
	};

	// osg::Switch * osg::Node::asSwitch()
	osg::Switch * asSwitch() {
		if(_obj.pushFunction("asSwitch")) {
			return (_obj.callFunction<osg::Switch*>());
		}

		return FluidProgram::asSwitch();
	};

	// const osg::Switch * osg::Node::asSwitch() const
	const osg::Switch * asSwitch() const {
		if(_obj.pushFunction("asSwitch")) {
			return (_obj.callFunction<osg::Switch*>());
		}

		return FluidProgram::asSwitch();
	};

	// osg::Geode * osg::Node::asGeode()
	osg::Geode * asGeode() {
		if(_obj.pushFunction("asGeode")) {
			return (_obj.callFunction<osg::Geode*>());
		}

		return FluidProgram::asGeode();
	};

	// const osg::Geode * osg::Node::asGeode() const
	const osg::Geode * asGeode() const {
		if(_obj.pushFunction("asGeode")) {
			return (_obj.callFunction<osg::Geode*>());
		}

		return FluidProgram::asGeode();
	};

	// void osg::Node::ascend(osg::NodeVisitor & nv)
	void ascend(osg::NodeVisitor & nv) {
		if(_obj.pushFunction("ascend")) {
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return FluidProgram::ascend(nv);
	};

	// void osg::Node::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return FluidProgram::releaseGLObjects(arg1);
	};

	// void osgParticle::ParticleProcessor::traverse(osg::NodeVisitor & arg1)
	void traverse(osg::NodeVisitor & arg1) {
		if(_obj.pushFunction("traverse")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return FluidProgram::traverse(arg1);
	};

	// osg::BoundingSphered osgParticle::ParticleProcessor::computeBound() const
	osg::BoundingSphered computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			return *(_obj.callFunction<osg::BoundingSphered*>());
		}

		return FluidProgram::computeBound();
	};

	// osg::Object * osgParticle::FluidProgram::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return FluidProgram::cloneType();
	};

	// osg::Object * osgParticle::FluidProgram::clone(const osg::CopyOp & copyop) const
	osg::Object * clone(const osg::CopyOp & copyop) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&copyop);
			return (_obj.callFunction<osg::Object*>());
		}

		return FluidProgram::clone(copyop);
	};

	// bool osgParticle::FluidProgram::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return FluidProgram::isSameKindAs(obj);
	};

	// const char * osgParticle::FluidProgram::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return FluidProgram::className();
	};

	// const char * osgParticle::FluidProgram::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return FluidProgram::libraryName();
	};

	// void osgParticle::FluidProgram::accept(osg::NodeVisitor & nv)
	void accept(osg::NodeVisitor & nv) {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return FluidProgram::accept(nv);
	};


protected:
	// void osgParticle::Program::process(double dt)
	void process(double dt) {
		if(_obj.pushFunction("process")) {
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return FluidProgram::process(dt);
	};

	// void osgParticle::FluidProgram::execute(double dt)
	void execute(double dt) {
		if(_obj.pushFunction("execute")) {
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return FluidProgram::execute(dt);
	};


};




#endif

