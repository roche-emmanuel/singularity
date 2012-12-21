#ifndef _WRAPPERS_WRAPPER_SGT_TIMEPROVIDER_H_
#define _WRAPPERS_WRAPPER_SGT_TIMEPROVIDER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <base/TimeProvider.h>

class wrapper_sgt_TimeProvider : public sgt::TimeProvider, public luna_wrapper_base {

public:
		

	~wrapper_sgt_TimeProvider() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_sgt_TimeProvider(lua_State* L, lua_Table* dum) : sgt::TimeProvider(), luna_wrapper_base(L) {};
	wrapper_sgt_TimeProvider(lua_State* L, lua_Table* dum, const sgt::TimeProvider & tm, const osg::CopyOp & co = sgtCopyOp::SHALLOW_COPY) : sgt::TimeProvider(tm, co), luna_wrapper_base(L) {};

	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return TimeProvider::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return TimeProvider::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return TimeProvider::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return TimeProvider::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return TimeProvider::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return TimeProvider::getUserData();
	};

	// void osg::Object::resizeGLObjectBuffers(unsigned int arg1)
	void resizeGLObjectBuffers(unsigned int arg1) {
		if(_obj.pushFunction("resizeGLObjectBuffers")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return TimeProvider::resizeGLObjectBuffers(arg1);
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return TimeProvider::releaseGLObjects(arg1);
	};

	// osg::Object * sgt::TimeProvider::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return TimeProvider::cloneType();
	};

	// osg::Object * sgt::TimeProvider::clone() const
	osg::Object * clone() const {
		if(_obj.pushFunction("clone")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return TimeProvider::clone();
	};

	// osg::Object * sgt::TimeProvider::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return TimeProvider::clone(arg1);
	};

	// bool sgt::TimeProvider::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return TimeProvider::isSameKindAs(obj);
	};

	// const char * sgt::TimeProvider::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return TimeProvider::libraryName();
	};

	// const char * sgt::TimeProvider::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return TimeProvider::className();
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

