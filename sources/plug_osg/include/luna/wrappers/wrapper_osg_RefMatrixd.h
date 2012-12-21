#ifndef _WRAPPERS_WRAPPER_OSG_REFMATRIXD_H_
#define _WRAPPERS_WRAPPER_OSG_REFMATRIXD_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Matrixd>

class wrapper_osg_RefMatrixd : public osg::RefMatrixd, public luna_wrapper_base {

public:
		

	~wrapper_osg_RefMatrixd() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_RefMatrixd(lua_State* L, lua_Table* dum) : osg::RefMatrixd(), luna_wrapper_base(L) {};
	wrapper_osg_RefMatrixd(lua_State* L, lua_Table* dum, const osg::Matrixd & other) : osg::RefMatrixd(other), luna_wrapper_base(L) {};
	wrapper_osg_RefMatrixd(lua_State* L, lua_Table* dum, const osg::Matrixf & other) : osg::RefMatrixd(other), luna_wrapper_base(L) {};
	wrapper_osg_RefMatrixd(lua_State* L, lua_Table* dum, const osg::RefMatrixd & other) : osg::RefMatrixd(other), luna_wrapper_base(L) {};
	wrapper_osg_RefMatrixd(lua_State* L, lua_Table* dum, double a00, double a01, double a02, double a03, double a10, double a11, double a12, double a13, double a20, double a21, double a22, double a23, double a30, double a31, double a32, double a33) : osg::RefMatrixd(a00, a01, a02, a03, a10, a11, a12, a13, a20, a21, a22, a23, a30, a31, a32, a33), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return RefMatrixd::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return RefMatrixd::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return RefMatrixd::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return RefMatrixd::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return RefMatrixd::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return RefMatrixd::releaseGLObjects(arg1);
	};

	// osg::Object * osg::RefMatrixd::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return RefMatrixd::cloneType();
	};

	// osg::Object * osg::RefMatrixd::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return RefMatrixd::clone(arg1);
	};

	// bool osg::RefMatrixd::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return RefMatrixd::isSameKindAs(obj);
	};

	// const char * osg::RefMatrixd::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return RefMatrixd::libraryName();
	};

	// const char * osg::RefMatrixd::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return RefMatrixd::className();
	};




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

