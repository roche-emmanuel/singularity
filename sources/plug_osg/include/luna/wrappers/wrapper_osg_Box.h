#ifndef _WRAPPERS_WRAPPER_OSG_BOX_H_
#define _WRAPPERS_WRAPPER_OSG_BOX_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Shape>

class wrapper_osg_Box : public osg::Box, public luna_wrapper_base {

public:
	

	wrapper_osg_Box(lua_State* L, lua_Table* dum) : osg::Box(), luna_wrapper_base(L) {};
	wrapper_osg_Box(lua_State* L, lua_Table* dum, const osg::Vec3f & center, float width) : osg::Box(center, width), luna_wrapper_base(L) {};
	wrapper_osg_Box(lua_State* L, lua_Table* dum, const osg::Vec3f & center, float lengthX, float lengthY, float lengthZ) : osg::Box(center, lengthX, lengthY, lengthZ), luna_wrapper_base(L) {};
	wrapper_osg_Box(lua_State* L, lua_Table* dum, const osg::Box & box, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::Box(box, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Box::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return Box::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Box::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Box::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Box::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return Box::releaseGLObjects(arg1);
	};

	// osg::Object * osg::Box::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return Box::cloneType();
	};

	// osg::Object * osg::Box::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return Box::clone(arg1);
	};

	// bool osg::Box::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Box::isSameKindAs(obj);
	};

	// const char * osg::Box::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return Box::libraryName();
	};

	// const char * osg::Box::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return Box::className();
	};

	// void osg::Box::accept(osg::ShapeVisitor & arg1)
	void accept(osg::ShapeVisitor & arg1) {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return Box::accept(arg1);
	};

	// void osg::Box::accept(osg::ConstShapeVisitor & arg1) const
	void accept(osg::ConstShapeVisitor & arg1) const {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return Box::accept(arg1);
	};




};




#endif

