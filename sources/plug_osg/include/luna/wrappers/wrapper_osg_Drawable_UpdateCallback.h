#ifndef _WRAPPERS_WRAPPER_OSG_DRAWABLE_UPDATECALLBACK_H_
#define _WRAPPERS_WRAPPER_OSG_DRAWABLE_UPDATECALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Drawable>

class wrapper_osg_Drawable_UpdateCallback : public osg::Drawable::UpdateCallback {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_Drawable_UpdateCallback(lua_State* L, lua_Table* dum) : osg::Drawable::UpdateCallback(), _obj(L,-1) {};
	wrapper_osg_Drawable_UpdateCallback(lua_State* L, lua_Table* dum, const osg::Drawable::UpdateCallback & arg1, const osg::CopyOp & arg2) : osg::Drawable::UpdateCallback(arg1, arg2), _obj(L,-1) {};

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

	// osg::Object * osg::Drawable::UpdateCallback::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::Drawable::UpdateCallback::cloneType();
	};

	// osg::Object * osg::Drawable::UpdateCallback::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::Drawable::UpdateCallback::clone(arg1);
	};

	// bool osg::Drawable::UpdateCallback::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osg::Drawable::UpdateCallback::isSameKindAs(obj);
	};

	// const char * osg::Drawable::UpdateCallback::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::Drawable::UpdateCallback::libraryName();
	};

	// const char * osg::Drawable::UpdateCallback::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::Drawable::UpdateCallback::className();
	};

	// void osg::Drawable::UpdateCallback::update(osg::NodeVisitor * arg1, osg::Drawable * arg2)
	void update(osg::NodeVisitor * arg1, osg::Drawable * arg2) {
		if(_obj.pushFunction("update")) {
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<void>());
		}

		return osg::Drawable::UpdateCallback::update(arg1, arg2);
	};




};




#endif

