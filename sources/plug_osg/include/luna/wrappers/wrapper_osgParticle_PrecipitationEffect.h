#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_PRECIPITATIONEFFECT_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_PRECIPITATIONEFFECT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgParticle/PrecipitationEffect>

class wrapper_osgParticle_PrecipitationEffect : public osgParticle::PrecipitationEffect, public luna_wrapper_base {

public:
		

	~wrapper_osgParticle_PrecipitationEffect() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgParticle_PrecipitationEffect(lua_State* L, lua_Table* dum) : osgParticle::PrecipitationEffect(), luna_wrapper_base(L) {};
	wrapper_osgParticle_PrecipitationEffect(lua_State* L, lua_Table* dum, const osgParticle::PrecipitationEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgParticle::PrecipitationEffect(copy, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return PrecipitationEffect::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return PrecipitationEffect::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return PrecipitationEffect::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return PrecipitationEffect::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return PrecipitationEffect::getUserData();
	};

	// osg::Object * osg::Node::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return PrecipitationEffect::cloneType();
	};

	// osg::Object * osg::Node::clone(const osg::CopyOp & copyop) const
	osg::Object * clone(const osg::CopyOp & copyop) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&copyop);
			return (_obj.callFunction<osg::Object*>());
		}

		return PrecipitationEffect::clone(copyop);
	};

	// osg::Group * osg::Node::asGroup()
	osg::Group * asGroup() {
		if(_obj.pushFunction("asGroup")) {
			return (_obj.callFunction<osg::Group*>());
		}

		return PrecipitationEffect::asGroup();
	};

	// const osg::Group * osg::Node::asGroup() const
	const osg::Group * asGroup() const {
		if(_obj.pushFunction("asGroup")) {
			return (_obj.callFunction<osg::Group*>());
		}

		return PrecipitationEffect::asGroup();
	};

	// osg::Transform * osg::Node::asTransform()
	osg::Transform * asTransform() {
		if(_obj.pushFunction("asTransform")) {
			return (_obj.callFunction<osg::Transform*>());
		}

		return PrecipitationEffect::asTransform();
	};

	// const osg::Transform * osg::Node::asTransform() const
	const osg::Transform * asTransform() const {
		if(_obj.pushFunction("asTransform")) {
			return (_obj.callFunction<osg::Transform*>());
		}

		return PrecipitationEffect::asTransform();
	};

	// osg::Switch * osg::Node::asSwitch()
	osg::Switch * asSwitch() {
		if(_obj.pushFunction("asSwitch")) {
			return (_obj.callFunction<osg::Switch*>());
		}

		return PrecipitationEffect::asSwitch();
	};

	// const osg::Switch * osg::Node::asSwitch() const
	const osg::Switch * asSwitch() const {
		if(_obj.pushFunction("asSwitch")) {
			return (_obj.callFunction<osg::Switch*>());
		}

		return PrecipitationEffect::asSwitch();
	};

	// osg::Geode * osg::Node::asGeode()
	osg::Geode * asGeode() {
		if(_obj.pushFunction("asGeode")) {
			return (_obj.callFunction<osg::Geode*>());
		}

		return PrecipitationEffect::asGeode();
	};

	// const osg::Geode * osg::Node::asGeode() const
	const osg::Geode * asGeode() const {
		if(_obj.pushFunction("asGeode")) {
			return (_obj.callFunction<osg::Geode*>());
		}

		return PrecipitationEffect::asGeode();
	};

	// void osg::Node::ascend(osg::NodeVisitor & nv)
	void ascend(osg::NodeVisitor & nv) {
		if(_obj.pushFunction("ascend")) {
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return PrecipitationEffect::ascend(nv);
	};

	// osg::BoundingSphered osg::Node::computeBound() const
	osg::BoundingSphered computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			return *(_obj.callFunction<osg::BoundingSphered*>());
		}

		return PrecipitationEffect::computeBound();
	};

	// void osg::Node::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return PrecipitationEffect::releaseGLObjects(arg1);
	};

	// const char * osgParticle::PrecipitationEffect::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return PrecipitationEffect::libraryName();
	};

	// const char * osgParticle::PrecipitationEffect::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return PrecipitationEffect::className();
	};

	// bool osgParticle::PrecipitationEffect::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return PrecipitationEffect::isSameKindAs(obj);
	};

	// void osgParticle::PrecipitationEffect::accept(osg::NodeVisitor & nv)
	void accept(osg::NodeVisitor & nv) {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return PrecipitationEffect::accept(nv);
	};

	// void osgParticle::PrecipitationEffect::traverse(osg::NodeVisitor & arg1)
	void traverse(osg::NodeVisitor & arg1) {
		if(_obj.pushFunction("traverse")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return PrecipitationEffect::traverse(arg1);
	};




// void osgParticle::PrecipitationEffect::compileGLObjects(osg::RenderInfo & renderInfo) const
void public_compileGLObjects(osg::RenderInfo & renderInfo) const {
	return osgParticle::PrecipitationEffect::compileGLObjects(renderInfo);
};

// void osgParticle::PrecipitationEffect::update()
void public_update() {
	return osgParticle::PrecipitationEffect::update();
};

// void osgParticle::PrecipitationEffect::createGeometry(unsigned int numParticles, osg::Geometry * quad_geometry, osg::Geometry * line_geometry, osg::Geometry * point_geometry)
void public_createGeometry(unsigned int numParticles, osg::Geometry * quad_geometry, osg::Geometry * line_geometry, osg::Geometry * point_geometry) {
	return osgParticle::PrecipitationEffect::createGeometry(numParticles, quad_geometry, line_geometry, point_geometry);
};

// void osgParticle::PrecipitationEffect::setUpGeometries(unsigned int numParticles)
void public_setUpGeometries(unsigned int numParticles) {
	return osgParticle::PrecipitationEffect::setUpGeometries(numParticles);
};

// void osgParticle::PrecipitationEffect::cull(osgParticle::PrecipitationEffect::PrecipitationDrawableSet & pds, osgUtil::CullVisitor * cv) const
void public_cull(osgParticle::PrecipitationEffect::PrecipitationDrawableSet & pds, osgUtil::CullVisitor * cv) const {
	return osgParticle::PrecipitationEffect::cull(pds, cv);
};

// bool osgParticle::PrecipitationEffect::build(const osg::Vec3f eyeLocal, int i, int j, int k, float startTime, osgParticle::PrecipitationEffect::PrecipitationDrawableSet & pds, osg::Polytope & frustum, osgUtil::CullVisitor * cv) const
bool public_build(const osg::Vec3f eyeLocal, int i, int j, int k, float startTime, osgParticle::PrecipitationEffect::PrecipitationDrawableSet & pds, osg::Polytope & frustum, osgUtil::CullVisitor * cv) const {
	return osgParticle::PrecipitationEffect::build(eyeLocal, i, j, k, startTime, pds, frustum, cv);
};

// void osg::Node::addParent(osg::Group * node)
void public_addParent(osg::Group * node) {
	return osg::Node::addParent(node);
};

// void osg::Node::removeParent(osg::Group * node)
void public_removeParent(osg::Group * node) {
	return osg::Node::removeParent(node);
};

// void osg::Node::setNumChildrenRequiringUpdateTraversal(unsigned int num)
void public_setNumChildrenRequiringUpdateTraversal(unsigned int num) {
	return osg::Node::setNumChildrenRequiringUpdateTraversal(num);
};

// void osg::Node::setNumChildrenRequiringEventTraversal(unsigned int num)
void public_setNumChildrenRequiringEventTraversal(unsigned int num) {
	return osg::Node::setNumChildrenRequiringEventTraversal(num);
};

// void osg::Node::setNumChildrenWithCullingDisabled(unsigned int num)
void public_setNumChildrenWithCullingDisabled(unsigned int num) {
	return osg::Node::setNumChildrenWithCullingDisabled(num);
};

// void osg::Node::setNumChildrenWithOccluderNodes(unsigned int num)
void public_setNumChildrenWithOccluderNodes(unsigned int num) {
	return osg::Node::setNumChildrenWithOccluderNodes(num);
};

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

