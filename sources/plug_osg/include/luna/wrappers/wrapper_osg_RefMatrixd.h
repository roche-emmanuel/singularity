#ifndef _WRAPPERS_WRAPPER_OSG_REFMATRIXD_H_
#define _WRAPPERS_WRAPPER_OSG_REFMATRIXD_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Matrixd>

class wrapper_osg_RefMatrixd : public osg::RefMatrixd {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_RefMatrixd(lua_State* L, lua_Table* dum) : osg::RefMatrixd(), _obj(L,-1) {};
	wrapper_osg_RefMatrixd(lua_State* L, lua_Table* dum, const osg::Matrixd & other) : osg::RefMatrixd(other), _obj(L,-1) {};
	wrapper_osg_RefMatrixd(lua_State* L, lua_Table* dum, const osg::Matrixf & other) : osg::RefMatrixd(other), _obj(L,-1) {};
	wrapper_osg_RefMatrixd(lua_State* L, lua_Table* dum, const osg::RefMatrixd & other) : osg::RefMatrixd(other), _obj(L,-1) {};
	wrapper_osg_RefMatrixd(lua_State* L, lua_Table* dum, double a00, double a01, double a02, double a03, double a10, double a11, double a12, double a13, double a20, double a21, double a22, double a23, double a30, double a31, double a32, double a33) : osg::RefMatrixd(a00, a01, a02, a03, a10, a11, a12, a13, a20, a21, a22, a23, a30, a31, a32, a33), _obj(L,-1) {};

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

	// osg::Object * osg::RefMatrixd::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::RefMatrixd::cloneType();
	};

	// osg::Object * osg::RefMatrixd::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::RefMatrixd::clone(arg1);
	};

	// bool osg::RefMatrixd::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osg::RefMatrixd::isSameKindAs(obj);
	};

	// const char * osg::RefMatrixd::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::RefMatrixd::libraryName();
	};

	// const char * osg::RefMatrixd::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::RefMatrixd::className();
	};




};




#endif
