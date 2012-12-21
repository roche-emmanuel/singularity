#ifndef _WRAPPERS_WRAPPER_OSG_STATESET_H_
#define _WRAPPERS_WRAPPER_OSG_STATESET_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/StateSet>

class wrapper_osg_StateSet : public osg::StateSet, public luna_wrapper_base {

public:
		

	~wrapper_osg_StateSet() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_StateSet(lua_State* L, lua_Table* dum) : osg::StateSet(), luna_wrapper_base(L) {};
	wrapper_osg_StateSet(lua_State* L, lua_Table* dum, const osg::StateSet & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::StateSet(arg1, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return StateSet::setName(name);
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return StateSet::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return StateSet::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return StateSet::getUserData();
	};

	// osg::Object * osg::StateSet::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return StateSet::cloneType();
	};

	// osg::Object * osg::StateSet::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return StateSet::clone(arg1);
	};

	// bool osg::StateSet::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return StateSet::isSameKindAs(obj);
	};

	// const char * osg::StateSet::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return StateSet::libraryName();
	};

	// const char * osg::StateSet::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return StateSet::className();
	};

	// void osg::StateSet::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return StateSet::computeDataVariance();
	};

	// void osg::StateSet::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return StateSet::releaseGLObjects(state);
	};




};




#endif

