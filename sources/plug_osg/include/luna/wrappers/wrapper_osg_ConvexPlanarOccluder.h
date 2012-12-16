#ifndef _WRAPPERS_WRAPPER_OSG_CONVEXPLANAROCCLUDER_H_
#define _WRAPPERS_WRAPPER_OSG_CONVEXPLANAROCCLUDER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/ConvexPlanarOccluder>

class wrapper_osg_ConvexPlanarOccluder : public osg::ConvexPlanarOccluder, public luna_wrapper_base {

public:
	

	wrapper_osg_ConvexPlanarOccluder(lua_State* L, lua_Table* dum) : osg::ConvexPlanarOccluder(), luna_wrapper_base(L) {};
	wrapper_osg_ConvexPlanarOccluder(lua_State* L, lua_Table* dum, const osg::ConvexPlanarOccluder & cpo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::ConvexPlanarOccluder(cpo, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return ConvexPlanarOccluder::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return ConvexPlanarOccluder::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return ConvexPlanarOccluder::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ConvexPlanarOccluder::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ConvexPlanarOccluder::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ConvexPlanarOccluder::releaseGLObjects(arg1);
	};

	// osg::Object * osg::ConvexPlanarOccluder::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return ConvexPlanarOccluder::cloneType();
	};

	// osg::Object * osg::ConvexPlanarOccluder::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return ConvexPlanarOccluder::clone(arg1);
	};

	// bool osg::ConvexPlanarOccluder::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return ConvexPlanarOccluder::isSameKindAs(obj);
	};

	// const char * osg::ConvexPlanarOccluder::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return ConvexPlanarOccluder::libraryName();
	};

	// const char * osg::ConvexPlanarOccluder::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return ConvexPlanarOccluder::className();
	};




};




#endif

