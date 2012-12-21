#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_MULTISEGMENTPLACER_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_MULTISEGMENTPLACER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgParticle/MultiSegmentPlacer>

class wrapper_osgParticle_MultiSegmentPlacer : public osgParticle::MultiSegmentPlacer, public luna_wrapper_base {

public:
		

	~wrapper_osgParticle_MultiSegmentPlacer() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgParticle_MultiSegmentPlacer(lua_State* L, lua_Table* dum) : osgParticle::MultiSegmentPlacer(), luna_wrapper_base(L) {};
	wrapper_osgParticle_MultiSegmentPlacer(lua_State* L, lua_Table* dum, const osgParticle::MultiSegmentPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgParticle::MultiSegmentPlacer(copy, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return MultiSegmentPlacer::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return MultiSegmentPlacer::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return MultiSegmentPlacer::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return MultiSegmentPlacer::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return MultiSegmentPlacer::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return MultiSegmentPlacer::releaseGLObjects(arg1);
	};

	// osg::Object * osgParticle::MultiSegmentPlacer::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return MultiSegmentPlacer::cloneType();
	};

	// osg::Object * osgParticle::MultiSegmentPlacer::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return MultiSegmentPlacer::clone(arg1);
	};

	// bool osgParticle::MultiSegmentPlacer::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return MultiSegmentPlacer::isSameKindAs(obj);
	};

	// const char * osgParticle::MultiSegmentPlacer::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return MultiSegmentPlacer::libraryName();
	};

	// const char * osgParticle::MultiSegmentPlacer::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return MultiSegmentPlacer::className();
	};

	// void osgParticle::MultiSegmentPlacer::place(osgParticle::Particle * P) const
	void place(osgParticle::Particle * P) const {
		if(_obj.pushFunction("place")) {
			_obj.pushArg(P);
			return (_obj.callFunction<void>());
		}

		return MultiSegmentPlacer::place(P);
	};

	// float osgParticle::MultiSegmentPlacer::volume() const
	float volume() const {
		if(_obj.pushFunction("volume")) {
			return (_obj.callFunction<float>());
		}

		return MultiSegmentPlacer::volume();
	};

	// osg::Vec3f osgParticle::MultiSegmentPlacer::getControlPosition() const
	osg::Vec3f getControlPosition() const {
		if(_obj.pushFunction("getControlPosition")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return MultiSegmentPlacer::getControlPosition();
	};




// osgParticle::MultiSegmentPlacer & osgParticle::MultiSegmentPlacer::operator=(const osgParticle::MultiSegmentPlacer & arg1)
// osgParticle::Placer & osgParticle::Placer::operator=(const osgParticle::Placer & arg1)
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

