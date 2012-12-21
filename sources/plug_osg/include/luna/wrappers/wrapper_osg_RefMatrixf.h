#ifndef _WRAPPERS_WRAPPER_OSG_REFMATRIXF_H_
#define _WRAPPERS_WRAPPER_OSG_REFMATRIXF_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Matrixf>

class wrapper_osg_RefMatrixf : public osg::RefMatrixf, public luna_wrapper_base {

public:
		

	~wrapper_osg_RefMatrixf() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_RefMatrixf(lua_State* L, lua_Table* dum) : osg::RefMatrixf(), luna_wrapper_base(L) {};
	wrapper_osg_RefMatrixf(lua_State* L, lua_Table* dum, const osg::Matrixf & other) : osg::RefMatrixf(other), luna_wrapper_base(L) {};
	wrapper_osg_RefMatrixf(lua_State* L, lua_Table* dum, const osg::Matrixd & other) : osg::RefMatrixf(other), luna_wrapper_base(L) {};
	wrapper_osg_RefMatrixf(lua_State* L, lua_Table* dum, const osg::RefMatrixf & other) : osg::RefMatrixf(other), luna_wrapper_base(L) {};
	wrapper_osg_RefMatrixf(lua_State* L, lua_Table* dum, float a00, float a01, float a02, float a03, float a10, float a11, float a12, float a13, float a20, float a21, float a22, float a23, float a30, float a31, float a32, float a33) : osg::RefMatrixf(a00, a01, a02, a03, a10, a11, a12, a13, a20, a21, a22, a23, a30, a31, a32, a33), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return RefMatrixf::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return RefMatrixf::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return RefMatrixf::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return RefMatrixf::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return RefMatrixf::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return RefMatrixf::releaseGLObjects(arg1);
	};

	// osg::Object * osg::RefMatrixf::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return RefMatrixf::cloneType();
	};

	// osg::Object * osg::RefMatrixf::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return RefMatrixf::clone(arg1);
	};

	// bool osg::RefMatrixf::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return RefMatrixf::isSameKindAs(obj);
	};

	// const char * osg::RefMatrixf::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return RefMatrixf::libraryName();
	};

	// const char * osg::RefMatrixf::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return RefMatrixf::className();
	};




};




#endif

