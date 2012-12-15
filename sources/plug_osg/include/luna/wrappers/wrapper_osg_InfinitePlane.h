#ifndef _WRAPPERS_WRAPPER_OSG_INFINITEPLANE_H_
#define _WRAPPERS_WRAPPER_OSG_INFINITEPLANE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Shape>

class wrapper_osg_InfinitePlane : public osg::InfinitePlane {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_InfinitePlane(lua_State* L, lua_Table* dum) : osg::InfinitePlane(), _obj(L,-1) {};
	wrapper_osg_InfinitePlane(lua_State* L, lua_Table* dum, const osg::InfinitePlane & plane, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::InfinitePlane(plane, copyop), _obj(L,-1) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return InfinitePlane::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return InfinitePlane::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return InfinitePlane::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return InfinitePlane::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return InfinitePlane::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return InfinitePlane::releaseGLObjects(arg1);
	};

	// osg::Object * osg::InfinitePlane::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return InfinitePlane::cloneType();
	};

	// osg::Object * osg::InfinitePlane::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return InfinitePlane::clone(arg1);
	};

	// bool osg::InfinitePlane::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return InfinitePlane::isSameKindAs(obj);
	};

	// const char * osg::InfinitePlane::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return InfinitePlane::libraryName();
	};

	// const char * osg::InfinitePlane::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return InfinitePlane::className();
	};

	// void osg::InfinitePlane::accept(osg::ShapeVisitor & arg1)
	void accept(osg::ShapeVisitor & arg1) {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return InfinitePlane::accept(arg1);
	};

	// void osg::InfinitePlane::accept(osg::ConstShapeVisitor & arg1) const
	void accept(osg::ConstShapeVisitor & arg1) const {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return InfinitePlane::accept(arg1);
	};




};




#endif

