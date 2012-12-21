#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_PARTICLESYSTEM_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_PARTICLESYSTEM_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgParticle/ParticleSystem>

class wrapper_osgParticle_ParticleSystem : public osgParticle::ParticleSystem, public luna_wrapper_base {

public:
		

	~wrapper_osgParticle_ParticleSystem() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgParticle_ParticleSystem(lua_State* L, lua_Table* dum) : osgParticle::ParticleSystem(), luna_wrapper_base(L) {};
	wrapper_osgParticle_ParticleSystem(lua_State* L, lua_Table* dum, const osgParticle::ParticleSystem & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgParticle::ParticleSystem(copy, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return ParticleSystem::setName(name);
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return ParticleSystem::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ParticleSystem::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ParticleSystem::getUserData();
	};

	// osg::Geometry * osg::Drawable::asGeometry()
	osg::Geometry * asGeometry() {
		if(_obj.pushFunction("asGeometry")) {
			return (_obj.callFunction<osg::Geometry*>());
		}

		return ParticleSystem::asGeometry();
	};

	// const osg::Geometry * osg::Drawable::asGeometry() const
	const osg::Geometry * asGeometry() const {
		if(_obj.pushFunction("asGeometry")) {
			return (_obj.callFunction<osg::Geometry*>());
		}

		return ParticleSystem::asGeometry();
	};

	// void osg::Drawable::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return ParticleSystem::computeDataVariance();
	};

	// void osg::Drawable::setUseVertexBufferObjects(bool flag)
	void setUseVertexBufferObjects(bool flag) {
		if(_obj.pushFunction("setUseVertexBufferObjects")) {
			_obj.pushArg(flag);
			return (_obj.callFunction<void>());
		}

		return ParticleSystem::setUseVertexBufferObjects(flag);
	};

	// void osg::Drawable::dirtyDisplayList()
	void dirtyDisplayList() {
		if(_obj.pushFunction("dirtyDisplayList")) {
			return (_obj.callFunction<void>());
		}

		return ParticleSystem::dirtyDisplayList();
	};

	// unsigned int osg::Drawable::getGLObjectSizeHint() const
	unsigned int getGLObjectSizeHint() const {
		if(_obj.pushFunction("getGLObjectSizeHint")) {
			return (_obj.callFunction<unsigned int>());
		}

		return ParticleSystem::getGLObjectSizeHint();
	};

	// void osg::Drawable::compileGLObjects(osg::RenderInfo & renderInfo) const
	void compileGLObjects(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("compileGLObjects")) {
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return ParticleSystem::compileGLObjects(renderInfo);
	};

	// void osg::Drawable::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return ParticleSystem::releaseGLObjects(state);
	};

	// void osg::Drawable::setUpdateCallback(osg::Drawable::UpdateCallback * ac)
	void setUpdateCallback(osg::Drawable::UpdateCallback * ac) {
		if(_obj.pushFunction("setUpdateCallback")) {
			_obj.pushArg(ac);
			return (_obj.callFunction<void>());
		}

		return ParticleSystem::setUpdateCallback(ac);
	};

	// void osg::Drawable::setEventCallback(osg::Drawable::EventCallback * ac)
	void setEventCallback(osg::Drawable::EventCallback * ac) {
		if(_obj.pushFunction("setEventCallback")) {
			_obj.pushArg(ac);
			return (_obj.callFunction<void>());
		}

		return ParticleSystem::setEventCallback(ac);
	};

	// void osg::Drawable::setCullCallback(osg::Drawable::CullCallback * cc)
	void setCullCallback(osg::Drawable::CullCallback * cc) {
		if(_obj.pushFunction("setCullCallback")) {
			_obj.pushArg(cc);
			return (_obj.callFunction<void>());
		}

		return ParticleSystem::setCullCallback(cc);
	};

	// void osg::Drawable::setDrawCallback(osg::Drawable::DrawCallback * dc)
	void setDrawCallback(osg::Drawable::DrawCallback * dc) {
		if(_obj.pushFunction("setDrawCallback")) {
			_obj.pushArg(dc);
			return (_obj.callFunction<void>());
		}

		return ParticleSystem::setDrawCallback(dc);
	};

	// osg::Object * osgParticle::ParticleSystem::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return ParticleSystem::cloneType();
	};

	// osg::Object * osgParticle::ParticleSystem::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return ParticleSystem::clone(arg1);
	};

	// bool osgParticle::ParticleSystem::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return ParticleSystem::isSameKindAs(obj);
	};

	// const char * osgParticle::ParticleSystem::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return ParticleSystem::libraryName();
	};

	// const char * osgParticle::ParticleSystem::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return ParticleSystem::className();
	};

	// osgParticle::Particle * osgParticle::ParticleSystem::createParticle(const osgParticle::Particle * ptemplate)
	osgParticle::Particle * createParticle(const osgParticle::Particle * ptemplate) {
		if(_obj.pushFunction("createParticle")) {
			_obj.pushArg(ptemplate);
			return (_obj.callFunction<osgParticle::Particle*>());
		}

		return ParticleSystem::createParticle(ptemplate);
	};

	// void osgParticle::ParticleSystem::destroyParticle(int i)
	void destroyParticle(int i) {
		if(_obj.pushFunction("destroyParticle")) {
			_obj.pushArg(i);
			return (_obj.callFunction<void>());
		}

		return ParticleSystem::destroyParticle(i);
	};

	// void osgParticle::ParticleSystem::reuseParticle(int i)
	void reuseParticle(int i) {
		if(_obj.pushFunction("reuseParticle")) {
			_obj.pushArg(i);
			return (_obj.callFunction<void>());
		}

		return ParticleSystem::reuseParticle(i);
	};

	// void osgParticle::ParticleSystem::update(double dt, osg::NodeVisitor & nv)
	void update(double dt, osg::NodeVisitor & nv) {
		if(_obj.pushFunction("update")) {
			_obj.pushArg(dt);
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return ParticleSystem::update(dt, nv);
	};

	// void osgParticle::ParticleSystem::drawImplementation(osg::RenderInfo & renderInfo) const
	void drawImplementation(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("drawImplementation")) {
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return ParticleSystem::drawImplementation(renderInfo);
	};

	// osg::BoundingBoxd osgParticle::ParticleSystem::computeBound() const
	osg::BoundingBoxd computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			return *(_obj.callFunction<osg::BoundingBoxd*>());
		}

		return ParticleSystem::computeBound();
	};




// void osgParticle::ParticleSystem::update_bounds(const osg::Vec3f & p, float r)
void public_update_bounds(const osg::Vec3f & p, float r) {
	return osgParticle::ParticleSystem::update_bounds(p, r);
};

// void osgParticle::ParticleSystem::single_pass_render(osg::RenderInfo & renderInfo, const osg::Matrixd & modelview) const
void public_single_pass_render(osg::RenderInfo & renderInfo, const osg::Matrixd & modelview) const {
	return osgParticle::ParticleSystem::single_pass_render(renderInfo, modelview);
};

// void osgParticle::ParticleSystem::render_vertex_array(osg::RenderInfo & renderInfo) const
void public_render_vertex_array(osg::RenderInfo & renderInfo) const {
	return osgParticle::ParticleSystem::render_vertex_array(renderInfo);
};

// osgParticle::ParticleSystem & osgParticle::ParticleSystem::operator=(const osgParticle::ParticleSystem & arg1)
// void osg::Drawable::setBound(const osg::BoundingBoxd & bb) const
void public_setBound(const osg::BoundingBoxd & bb) const {
	return osg::Drawable::setBound(bb);
};

// void osg::Drawable::addParent(osg::Node * node)
void public_addParent(osg::Node * node) {
	return osg::Drawable::addParent(node);
};

// void osg::Drawable::removeParent(osg::Node * node)
void public_removeParent(osg::Node * node) {
	return osg::Drawable::removeParent(node);
};

// void osg::Drawable::setNumChildrenRequiringUpdateTraversal(unsigned int num)
void public_setNumChildrenRequiringUpdateTraversal(unsigned int num) {
	return osg::Drawable::setNumChildrenRequiringUpdateTraversal(num);
};

// unsigned int osg::Drawable::getNumChildrenRequiringUpdateTraversal() const
unsigned int public_getNumChildrenRequiringUpdateTraversal() const {
	return osg::Drawable::getNumChildrenRequiringUpdateTraversal();
};

// void osg::Drawable::setNumChildrenRequiringEventTraversal(unsigned int num)
void public_setNumChildrenRequiringEventTraversal(unsigned int num) {
	return osg::Drawable::setNumChildrenRequiringEventTraversal(num);
};

// unsigned int osg::Drawable::getNumChildrenRequiringEventTraversal() const
unsigned int public_getNumChildrenRequiringEventTraversal() const {
	return osg::Drawable::getNumChildrenRequiringEventTraversal();
};

// osg::Drawable & osg::Drawable::operator=(const osg::Drawable & arg1)
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

