#ifndef _WRAPPERS_WRAPPER_OSGGA_GUIEVENTADAPTER_H_
#define _WRAPPERS_WRAPPER_OSGGA_GUIEVENTADAPTER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgGA/GUIEventAdapter>

class wrapper_osgGA_GUIEventAdapter : public osgGA::GUIEventAdapter {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgGA_GUIEventAdapter(lua_State* L, lua_Table* dum) : osgGA::GUIEventAdapter(), _obj(L,-1) {};
	wrapper_osgGA_GUIEventAdapter(lua_State* L, lua_Table* dum, const osgGA::GUIEventAdapter & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgGA::GUIEventAdapter(rhs, copyop), _obj(L,-1) {};

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

	// osg::Object * osgGA::GUIEventAdapter::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return osgGA::GUIEventAdapter::cloneType();
	};

	// osg::Object * osgGA::GUIEventAdapter::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return osgGA::GUIEventAdapter::clone(arg1);
	};

	// bool osgGA::GUIEventAdapter::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osgGA::GUIEventAdapter::isSameKindAs(obj);
	};

	// const char * osgGA::GUIEventAdapter::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osgGA::GUIEventAdapter::libraryName();
	};

	// const char * osgGA::GUIEventAdapter::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osgGA::GUIEventAdapter::className();
	};

	// osgGA::GUIEventAdapter::EventType osgGA::GUIEventAdapter::getEventType() const
	osgGA::GUIEventAdapter::EventType getEventType() const {
		if(_obj.pushFunction("getEventType")) {
			return (osgGA::GUIEventAdapter::EventType)(_obj.callFunction<int>());
		}

		return osgGA::GUIEventAdapter::getEventType();
	};

	// int osgGA::GUIEventAdapter::getKey() const
	int getKey() const {
		if(_obj.pushFunction("getKey")) {
			return (_obj.callFunction<int>());
		}

		return osgGA::GUIEventAdapter::getKey();
	};




};




#endif
