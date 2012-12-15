#ifndef _WRAPPERS_WRAPPER_OSG_DRAWABLE_EVENTCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSG_DRAWABLE_EVENTCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Drawable>

class wrapper_osg_Drawable_EventCallback : public osg::Drawable::EventCallback {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_Drawable_EventCallback(lua_State* L, lua_Table* dum) : osg::Drawable::EventCallback(), _obj(L,-1) {};
	wrapper_osg_Drawable_EventCallback(lua_State* L, lua_Table* dum, const osg::Drawable::EventCallback & arg1, const osg::CopyOp & arg2) : osg::Drawable::EventCallback(arg1, arg2), _obj(L,-1) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return EventCallback::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return EventCallback::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return EventCallback::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return EventCallback::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return EventCallback::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return EventCallback::releaseGLObjects(arg1);
	};

	// osg::Object * osg::Drawable::EventCallback::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return EventCallback::cloneType();
	};

	// osg::Object * osg::Drawable::EventCallback::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return EventCallback::clone(arg1);
	};

	// bool osg::Drawable::EventCallback::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return EventCallback::isSameKindAs(obj);
	};

	// const char * osg::Drawable::EventCallback::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return EventCallback::libraryName();
	};

	// const char * osg::Drawable::EventCallback::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return EventCallback::className();
	};

	// void osg::Drawable::EventCallback::event(osg::NodeVisitor * arg1, osg::Drawable * arg2)
	void event(osg::NodeVisitor * arg1, osg::Drawable * arg2) {
		if(_obj.pushFunction("event")) {
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<void>());
		}

		return EventCallback::event(arg1, arg2);
	};




};




#endif

