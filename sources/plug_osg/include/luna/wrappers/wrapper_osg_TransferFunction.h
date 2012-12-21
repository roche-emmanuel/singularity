#ifndef _WRAPPERS_WRAPPER_OSG_TRANSFERFUNCTION_H_
#define _WRAPPERS_WRAPPER_OSG_TRANSFERFUNCTION_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/TransferFunction>

class wrapper_osg_TransferFunction : public osg::TransferFunction, public luna_wrapper_base {

public:
		

	~wrapper_osg_TransferFunction() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_TransferFunction(lua_State* L, lua_Table* dum) : osg::TransferFunction(), luna_wrapper_base(L) {};
	wrapper_osg_TransferFunction(lua_State* L, lua_Table* dum, const osg::TransferFunction & tf, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::TransferFunction(tf, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return TransferFunction::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return TransferFunction::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return TransferFunction::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return TransferFunction::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return TransferFunction::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return TransferFunction::releaseGLObjects(arg1);
	};

	// osg::Object * osg::TransferFunction::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return TransferFunction::cloneType();
	};

	// osg::Object * osg::TransferFunction::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return TransferFunction::clone(arg1);
	};

	// bool osg::TransferFunction::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return TransferFunction::isSameKindAs(obj);
	};

	// const char * osg::TransferFunction::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return TransferFunction::libraryName();
	};

	// const char * osg::TransferFunction::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return TransferFunction::className();
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

