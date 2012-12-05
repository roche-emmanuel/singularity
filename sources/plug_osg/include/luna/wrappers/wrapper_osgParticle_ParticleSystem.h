#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_PARTICLESYSTEM_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_PARTICLESYSTEM_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgParticle/ParticleSystem>

class wrapper_osgParticle_ParticleSystem : public osgParticle::ParticleSystem {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgParticle_ParticleSystem(lua_State* L, lua_Table* dum) : osgParticle::ParticleSystem(), _obj(L,-1) {};
	wrapper_osgParticle_ParticleSystem(lua_State* L, lua_Table* dum, const osgParticle::ParticleSystem & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgParticle::ParticleSystem(copy, copyop), _obj(L,-1) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return osg::Object::setName(name);
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

	// osg::Geometry * osg::Drawable::asGeometry()
	osg::Geometry * asGeometry() {
		if(_obj.pushFunction("asGeometry")) {
			return (_obj.callFunction<osg::Geometry*>());
		}

		return osg::Drawable::asGeometry();
	};

	// const osg::Geometry * osg::Drawable::asGeometry() const
	const osg::Geometry * asGeometry() const {
		if(_obj.pushFunction("asGeometry")) {
			return (_obj.callFunction<osg::Geometry*>());
		}

		return osg::Drawable::asGeometry();
	};

	// void osg::Drawable::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return osg::Drawable::computeDataVariance();
	};

	// void osg::Drawable::setUseVertexBufferObjects(bool flag)
	void setUseVertexBufferObjects(bool flag) {
		if(_obj.pushFunction("setUseVertexBufferObjects")) {
			_obj.pushArg(flag);
			return (_obj.callFunction<void>());
		}

		return osg::Drawable::setUseVertexBufferObjects(flag);
	};

	// void osg::Drawable::dirtyDisplayList()
	void dirtyDisplayList() {
		if(_obj.pushFunction("dirtyDisplayList")) {
			return (_obj.callFunction<void>());
		}

		return osg::Drawable::dirtyDisplayList();
	};

	// unsigned int osg::Drawable::getGLObjectSizeHint() const
	unsigned int getGLObjectSizeHint() const {
		if(_obj.pushFunction("getGLObjectSizeHint")) {
			return (_obj.callFunction<unsigned int>());
		}

		return osg::Drawable::getGLObjectSizeHint();
	};

	// void osg::Drawable::compileGLObjects(osg::RenderInfo & renderInfo) const
	void compileGLObjects(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("compileGLObjects")) {
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return osg::Drawable::compileGLObjects(renderInfo);
	};

	// void osg::Drawable::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return osg::Drawable::releaseGLObjects(state);
	};

	// void osg::Drawable::setUpdateCallback(osg::Drawable::UpdateCallback * ac)
	void setUpdateCallback(osg::Drawable::UpdateCallback * ac) {
		if(_obj.pushFunction("setUpdateCallback")) {
			_obj.pushArg(ac);
			return (_obj.callFunction<void>());
		}

		return osg::Drawable::setUpdateCallback(ac);
	};

	// void osg::Drawable::setEventCallback(osg::Drawable::EventCallback * ac)
	void setEventCallback(osg::Drawable::EventCallback * ac) {
		if(_obj.pushFunction("setEventCallback")) {
			_obj.pushArg(ac);
			return (_obj.callFunction<void>());
		}

		return osg::Drawable::setEventCallback(ac);
	};

	// void osg::Drawable::setCullCallback(osg::Drawable::CullCallback * cc)
	void setCullCallback(osg::Drawable::CullCallback * cc) {
		if(_obj.pushFunction("setCullCallback")) {
			_obj.pushArg(cc);
			return (_obj.callFunction<void>());
		}

		return osg::Drawable::setCullCallback(cc);
	};

	// void osg::Drawable::setDrawCallback(osg::Drawable::DrawCallback * dc)
	void setDrawCallback(osg::Drawable::DrawCallback * dc) {
		if(_obj.pushFunction("setDrawCallback")) {
			_obj.pushArg(dc);
			return (_obj.callFunction<void>());
		}

		return osg::Drawable::setDrawCallback(dc);
	};

	// osg::Object * osgParticle::ParticleSystem::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return osgParticle::ParticleSystem::cloneType();
	};

	// osg::Object * osgParticle::ParticleSystem::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return osgParticle::ParticleSystem::clone(arg1);
	};

	// bool osgParticle::ParticleSystem::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osgParticle::ParticleSystem::isSameKindAs(obj);
	};

	// const char * osgParticle::ParticleSystem::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osgParticle::ParticleSystem::libraryName();
	};

	// const char * osgParticle::ParticleSystem::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osgParticle::ParticleSystem::className();
	};

	// osgParticle::Particle * osgParticle::ParticleSystem::createParticle(const osgParticle::Particle * ptemplate)
	osgParticle::Particle * createParticle(const osgParticle::Particle * ptemplate) {
		if(_obj.pushFunction("createParticle")) {
			_obj.pushArg(ptemplate);
			return (_obj.callFunction<osgParticle::Particle*>());
		}

		return osgParticle::ParticleSystem::createParticle(ptemplate);
	};

	// void osgParticle::ParticleSystem::destroyParticle(int i)
	void destroyParticle(int i) {
		if(_obj.pushFunction("destroyParticle")) {
			_obj.pushArg(i);
			return (_obj.callFunction<void>());
		}

		return osgParticle::ParticleSystem::destroyParticle(i);
	};

	// void osgParticle::ParticleSystem::reuseParticle(int i)
	void reuseParticle(int i) {
		if(_obj.pushFunction("reuseParticle")) {
			_obj.pushArg(i);
			return (_obj.callFunction<void>());
		}

		return osgParticle::ParticleSystem::reuseParticle(i);
	};

	// void osgParticle::ParticleSystem::update(double dt, osg::NodeVisitor & nv)
	void update(double dt, osg::NodeVisitor & nv) {
		if(_obj.pushFunction("update")) {
			_obj.pushArg(dt);
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return osgParticle::ParticleSystem::update(dt, nv);
	};

	// void osgParticle::ParticleSystem::drawImplementation(osg::RenderInfo & renderInfo) const
	void drawImplementation(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("drawImplementation")) {
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return osgParticle::ParticleSystem::drawImplementation(renderInfo);
	};

	// osg::BoundingBoxd osgParticle::ParticleSystem::computeBound() const
	osg::BoundingBoxd computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			return *(_obj.callFunction<osg::BoundingBoxd*>());
		}

		return osgParticle::ParticleSystem::computeBound();
	};




};




#endif

