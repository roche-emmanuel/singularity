#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_PLACER_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_PLACER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgParticle/Placer>

class wrapper_osgParticle_Placer : public osgParticle::Placer {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgParticle_Placer(lua_State* L, lua_Table* dum) : osgParticle::Placer(), _obj(L,-1) {};
	wrapper_osgParticle_Placer(lua_State* L, lua_Table* dum, const osgParticle::Placer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgParticle::Placer(copy, copyop), _obj(L,-1) {};

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

		return Placer::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return Placer::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Placer::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Placer::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Placer::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return Placer::releaseGLObjects(arg1);
	};

	// const char * osgParticle::Placer::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return Placer::libraryName();
	};

	// const char * osgParticle::Placer::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return Placer::className();
	};

	// bool osgParticle::Placer::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Placer::isSameKindAs(obj);
	};

	// void osgParticle::Placer::place(osgParticle::Particle * P) const
	void place(osgParticle::Particle * P) const {
		THROW_IF(!_obj.pushFunction("place"),"No implementation for abstract function osgParticle::Placer::place");
		_obj.pushArg(P);
		return (_obj.callFunction<void>());
	};

	// float osgParticle::Placer::volume() const
	float volume() const {
		if(_obj.pushFunction("volume")) {
			return (_obj.callFunction<float>());
		}

		return Placer::volume();
	};

	// osg::Vec3f osgParticle::Placer::getControlPosition() const
	osg::Vec3f getControlPosition() const {
		THROW_IF(!_obj.pushFunction("getControlPosition"),"No implementation for abstract function osgParticle::Placer::getControlPosition");
		return *(_obj.callFunction<osg::Vec3f*>());
	};




};




#endif

