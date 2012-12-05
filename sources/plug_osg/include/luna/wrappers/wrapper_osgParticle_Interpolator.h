#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_INTERPOLATOR_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_INTERPOLATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgParticle/Interpolator>

class wrapper_osgParticle_Interpolator : public osgParticle::Interpolator {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgParticle_Interpolator(lua_State* L, lua_Table* dum) : osgParticle::Interpolator(), _obj(L,-1) {};
	wrapper_osgParticle_Interpolator(lua_State* L, lua_Table* dum, const osgParticle::Interpolator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgParticle::Interpolator(copy, copyop), _obj(L,-1) {};

	// osg::Object * osg::Object::cloneType() const
	osg::Object * cloneType() const {
		THROW_IF(!_obj.pushFunction("cloneType"),"No implementation for abstract function osg::Object::cloneType");
		return (_obj.callFunction<osg::Object*>());
	};

	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		THROW_IF(!_obj.pushFunction("clone"),"No implementation for abstract function osg::Object::clone");
		_obj.pushArg(&arg1);
		return (_obj.callFunction<osg::Object*>());
	};

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

	// const char * osgParticle::Interpolator::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osgParticle::Interpolator::libraryName();
	};

	// const char * osgParticle::Interpolator::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osgParticle::Interpolator::className();
	};

	// bool osgParticle::Interpolator::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osgParticle::Interpolator::isSameKindAs(obj);
	};

	// float osgParticle::Interpolator::interpolate(float t, float y1, float y2) const
	float interpolate(float t, float y1, float y2) const {
		THROW_IF(!_obj.pushFunction("interpolate"),"No implementation for abstract function osgParticle::Interpolator::interpolate");
		_obj.pushArg(t);
		_obj.pushArg(y1);
		_obj.pushArg(y2);
		return (_obj.callFunction<float>());
	};

	// osg::Vec2f osgParticle::Interpolator::interpolate(float t, const osg::Vec2f & y1, const osg::Vec2f & y2) const
	osg::Vec2f interpolate(float t, const osg::Vec2f & y1, const osg::Vec2f & y2) const {
		if(_obj.pushFunction("interpolate")) {
			_obj.pushArg(t);
			_obj.pushArg(&y1);
			_obj.pushArg(&y2);
			return *(_obj.callFunction<osg::Vec2f*>());
		}

		return osgParticle::Interpolator::interpolate(t, y1, y2);
	};

	// osg::Vec3f osgParticle::Interpolator::interpolate(float t, const osg::Vec3f & y1, const osg::Vec3f & y2) const
	osg::Vec3f interpolate(float t, const osg::Vec3f & y1, const osg::Vec3f & y2) const {
		if(_obj.pushFunction("interpolate")) {
			_obj.pushArg(t);
			_obj.pushArg(&y1);
			_obj.pushArg(&y2);
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return osgParticle::Interpolator::interpolate(t, y1, y2);
	};

	// osg::Vec4f osgParticle::Interpolator::interpolate(float t, const osg::Vec4f & y1, const osg::Vec4f & y2) const
	osg::Vec4f interpolate(float t, const osg::Vec4f & y1, const osg::Vec4f & y2) const {
		if(_obj.pushFunction("interpolate")) {
			_obj.pushArg(t);
			_obj.pushArg(&y1);
			_obj.pushArg(&y2);
			return *(_obj.callFunction<osg::Vec4f*>());
		}

		return osgParticle::Interpolator::interpolate(t, y1, y2);
	};




};




#endif
