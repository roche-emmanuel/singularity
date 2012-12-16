#ifndef _WRAPPERS_WRAPPER_OSG_CONE_H_
#define _WRAPPERS_WRAPPER_OSG_CONE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Shape>

class wrapper_osg_Cone : public osg::Cone, public luna_wrapper_base {

public:
	

	wrapper_osg_Cone(lua_State* L, lua_Table* dum) : osg::Cone(), luna_wrapper_base(L) {};
	wrapper_osg_Cone(lua_State* L, lua_Table* dum, const osg::Vec3f & center, float radius, float height) : osg::Cone(center, radius, height), luna_wrapper_base(L) {};
	wrapper_osg_Cone(lua_State* L, lua_Table* dum, const osg::Cone & cone, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::Cone(cone, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Cone::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return Cone::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Cone::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Cone::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Cone::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return Cone::releaseGLObjects(arg1);
	};

	// osg::Object * osg::Cone::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return Cone::cloneType();
	};

	// osg::Object * osg::Cone::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return Cone::clone(arg1);
	};

	// bool osg::Cone::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Cone::isSameKindAs(obj);
	};

	// const char * osg::Cone::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return Cone::libraryName();
	};

	// const char * osg::Cone::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return Cone::className();
	};

	// void osg::Cone::accept(osg::ShapeVisitor & arg1)
	void accept(osg::ShapeVisitor & arg1) {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return Cone::accept(arg1);
	};

	// void osg::Cone::accept(osg::ConstShapeVisitor & arg1) const
	void accept(osg::ConstShapeVisitor & arg1) const {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return Cone::accept(arg1);
	};




};




#endif

