#ifndef _WRAPPERS_WRAPPER_OSG_VALUEOBJECT_H_
#define _WRAPPERS_WRAPPER_OSG_VALUEOBJECT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/ValueObject>

class wrapper_osg_ValueObject : public osg::ValueObject {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_ValueObject(lua_State* L, lua_Table* dum) : osg::ValueObject(), _obj(L,-1) {};
	wrapper_osg_ValueObject(lua_State* L, lua_Table* dum, const std::string & name) : osg::ValueObject(name), _obj(L,-1) {};
	wrapper_osg_ValueObject(lua_State* L, lua_Table* dum, const osg::ValueObject & rhs, const osg::CopyOp copyop = osg::CopyOp::SHALLOW_COPY) : osg::ValueObject(rhs, copyop), _obj(L,-1) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return ValueObject::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return ValueObject::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return ValueObject::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ValueObject::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ValueObject::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ValueObject::releaseGLObjects(arg1);
	};

	// osg::Object * osg::ValueObject::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return ValueObject::cloneType();
	};

	// osg::Object * osg::ValueObject::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return ValueObject::clone(arg1);
	};

	// bool osg::ValueObject::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return ValueObject::isSameKindAs(obj);
	};

	// const char * osg::ValueObject::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return ValueObject::libraryName();
	};

	// const char * osg::ValueObject::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return ValueObject::className();
	};

	// bool osg::ValueObject::set(osg::ValueObject::SetValueVisitor & gvv)
	bool set(osg::ValueObject::SetValueVisitor & gvv) {
		if(_obj.pushFunction("set")) {
			_obj.pushArg(&gvv);
			return (_obj.callFunction<bool>());
		}

		return ValueObject::set(gvv);
	};




};




#endif

