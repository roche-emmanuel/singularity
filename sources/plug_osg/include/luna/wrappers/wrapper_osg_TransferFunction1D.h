#ifndef _WRAPPERS_WRAPPER_OSG_TRANSFERFUNCTION_D_H_
#define _WRAPPERS_WRAPPER_OSG_TRANSFERFUNCTION_D_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/TransferFunction>

class wrapper_osg_TransferFunction1D : public osg::TransferFunction1D, public luna_wrapper_base {

public:
	

	wrapper_osg_TransferFunction1D(lua_State* L, lua_Table* dum) : osg::TransferFunction1D(), luna_wrapper_base(L) {};
	wrapper_osg_TransferFunction1D(lua_State* L, lua_Table* dum, const osg::TransferFunction1D & tf, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::TransferFunction1D(tf, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return TransferFunction1D::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return TransferFunction1D::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return TransferFunction1D::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return TransferFunction1D::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return TransferFunction1D::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return TransferFunction1D::releaseGLObjects(arg1);
	};

	// osg::Object * osg::TransferFunction1D::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return TransferFunction1D::cloneType();
	};

	// osg::Object * osg::TransferFunction1D::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return TransferFunction1D::clone(arg1);
	};

	// bool osg::TransferFunction1D::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return TransferFunction1D::isSameKindAs(obj);
	};

	// const char * osg::TransferFunction1D::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return TransferFunction1D::libraryName();
	};

	// const char * osg::TransferFunction1D::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return TransferFunction1D::className();
	};




};




#endif

