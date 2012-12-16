#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_PRECIPITATIONEFFECT_PRECIPITATIONDRAWABLE_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_PRECIPITATIONEFFECT_PRECIPITATIONDRAWABLE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgParticle/PrecipitationEffect>

class wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable : public osgParticle::PrecipitationEffect::PrecipitationDrawable, public luna_wrapper_base {

public:
	

	wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable(lua_State* L, lua_Table* dum) : osgParticle::PrecipitationEffect::PrecipitationDrawable(), luna_wrapper_base(L) {};
	wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable(lua_State* L, lua_Table* dum, const osgParticle::PrecipitationEffect::PrecipitationDrawable & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgParticle::PrecipitationEffect::PrecipitationDrawable(copy, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return PrecipitationDrawable::setName(name);
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return PrecipitationDrawable::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return PrecipitationDrawable::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return PrecipitationDrawable::getUserData();
	};

	// osg::Geometry * osg::Drawable::asGeometry()
	osg::Geometry * asGeometry() {
		if(_obj.pushFunction("asGeometry")) {
			return (_obj.callFunction<osg::Geometry*>());
		}

		return PrecipitationDrawable::asGeometry();
	};

	// const osg::Geometry * osg::Drawable::asGeometry() const
	const osg::Geometry * asGeometry() const {
		if(_obj.pushFunction("asGeometry")) {
			return (_obj.callFunction<osg::Geometry*>());
		}

		return PrecipitationDrawable::asGeometry();
	};

	// void osg::Drawable::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return PrecipitationDrawable::computeDataVariance();
	};

	// osg::BoundingBoxd osg::Drawable::computeBound() const
	osg::BoundingBoxd computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			return *(_obj.callFunction<osg::BoundingBoxd*>());
		}

		return PrecipitationDrawable::computeBound();
	};

	// void osg::Drawable::setUseVertexBufferObjects(bool flag)
	void setUseVertexBufferObjects(bool flag) {
		if(_obj.pushFunction("setUseVertexBufferObjects")) {
			_obj.pushArg(flag);
			return (_obj.callFunction<void>());
		}

		return PrecipitationDrawable::setUseVertexBufferObjects(flag);
	};

	// void osg::Drawable::dirtyDisplayList()
	void dirtyDisplayList() {
		if(_obj.pushFunction("dirtyDisplayList")) {
			return (_obj.callFunction<void>());
		}

		return PrecipitationDrawable::dirtyDisplayList();
	};

	// unsigned int osg::Drawable::getGLObjectSizeHint() const
	unsigned int getGLObjectSizeHint() const {
		if(_obj.pushFunction("getGLObjectSizeHint")) {
			return (_obj.callFunction<unsigned int>());
		}

		return PrecipitationDrawable::getGLObjectSizeHint();
	};

	// void osg::Drawable::compileGLObjects(osg::RenderInfo & renderInfo) const
	void compileGLObjects(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("compileGLObjects")) {
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return PrecipitationDrawable::compileGLObjects(renderInfo);
	};

	// void osg::Drawable::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return PrecipitationDrawable::releaseGLObjects(state);
	};

	// void osg::Drawable::setUpdateCallback(osg::Drawable::UpdateCallback * ac)
	void setUpdateCallback(osg::Drawable::UpdateCallback * ac) {
		if(_obj.pushFunction("setUpdateCallback")) {
			_obj.pushArg(ac);
			return (_obj.callFunction<void>());
		}

		return PrecipitationDrawable::setUpdateCallback(ac);
	};

	// void osg::Drawable::setEventCallback(osg::Drawable::EventCallback * ac)
	void setEventCallback(osg::Drawable::EventCallback * ac) {
		if(_obj.pushFunction("setEventCallback")) {
			_obj.pushArg(ac);
			return (_obj.callFunction<void>());
		}

		return PrecipitationDrawable::setEventCallback(ac);
	};

	// void osg::Drawable::setCullCallback(osg::Drawable::CullCallback * cc)
	void setCullCallback(osg::Drawable::CullCallback * cc) {
		if(_obj.pushFunction("setCullCallback")) {
			_obj.pushArg(cc);
			return (_obj.callFunction<void>());
		}

		return PrecipitationDrawable::setCullCallback(cc);
	};

	// void osg::Drawable::setDrawCallback(osg::Drawable::DrawCallback * dc)
	void setDrawCallback(osg::Drawable::DrawCallback * dc) {
		if(_obj.pushFunction("setDrawCallback")) {
			_obj.pushArg(dc);
			return (_obj.callFunction<void>());
		}

		return PrecipitationDrawable::setDrawCallback(dc);
	};

	// osg::Object * osgParticle::PrecipitationEffect::PrecipitationDrawable::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return PrecipitationDrawable::cloneType();
	};

	// osg::Object * osgParticle::PrecipitationEffect::PrecipitationDrawable::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return PrecipitationDrawable::clone(arg1);
	};

	// bool osgParticle::PrecipitationEffect::PrecipitationDrawable::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return PrecipitationDrawable::isSameKindAs(obj);
	};

	// const char * osgParticle::PrecipitationEffect::PrecipitationDrawable::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return PrecipitationDrawable::libraryName();
	};

	// const char * osgParticle::PrecipitationEffect::PrecipitationDrawable::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return PrecipitationDrawable::className();
	};

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::drawImplementation(osg::RenderInfo & renderInfo) const
	void drawImplementation(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("drawImplementation")) {
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return PrecipitationDrawable::drawImplementation(renderInfo);
	};




};




#endif

