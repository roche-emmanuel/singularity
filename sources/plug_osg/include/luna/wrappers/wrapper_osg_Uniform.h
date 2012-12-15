#ifndef _WRAPPERS_WRAPPER_OSG_UNIFORM_H_
#define _WRAPPERS_WRAPPER_OSG_UNIFORM_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Uniform>

class wrapper_osg_Uniform : public osg::Uniform {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_Uniform(lua_State* L, lua_Table* dum) : osg::Uniform(), _obj(L,-1) {};
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, osg::Uniform::Type type, const std::string & name, int numElements = 1) : osg::Uniform(type, name, numElements), _obj(L,-1) {};
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const osg::Uniform & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::Uniform(rhs, copyop), _obj(L,-1) {};
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, float f) : osg::Uniform(name, f), _obj(L,-1) {};
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, int i) : osg::Uniform(name, i), _obj(L,-1) {};
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, unsigned int i) : osg::Uniform(name, i), _obj(L,-1) {};
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, bool b) : osg::Uniform(name, b), _obj(L,-1) {};
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, const osg::Vec2f & v2) : osg::Uniform(name, v2), _obj(L,-1) {};
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, const osg::Vec3f & v3) : osg::Uniform(name, v3), _obj(L,-1) {};
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, const osg::Vec4f & v4) : osg::Uniform(name, v4), _obj(L,-1) {};
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, const osg::Matrix2 & m2) : osg::Uniform(name, m2), _obj(L,-1) {};
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, const osg::Matrix3 & m3) : osg::Uniform(name, m3), _obj(L,-1) {};
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, const osg::Matrixf & m4) : osg::Uniform(name, m4), _obj(L,-1) {};
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, const osg::Matrixd & m4) : osg::Uniform(name, m4), _obj(L,-1) {};
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, int i0, int i1) : osg::Uniform(name, i0, i1), _obj(L,-1) {};
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, int i0, int i1, int i2) : osg::Uniform(name, i0, i1, i2), _obj(L,-1) {};
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, int i0, int i1, int i2, int i3) : osg::Uniform(name, i0, i1, i2, i3), _obj(L,-1) {};
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, unsigned int i0, unsigned int i1) : osg::Uniform(name, i0, i1), _obj(L,-1) {};
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, unsigned int i0, unsigned int i1, unsigned int i2) : osg::Uniform(name, i0, i1, i2), _obj(L,-1) {};
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, unsigned int i0, unsigned int i1, unsigned int i2, unsigned int i3) : osg::Uniform(name, i0, i1, i2, i3), _obj(L,-1) {};
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, bool b0, bool b1) : osg::Uniform(name, b0, b1), _obj(L,-1) {};
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, bool b0, bool b1, bool b2) : osg::Uniform(name, b0, b1, b2), _obj(L,-1) {};
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, bool b0, bool b1, bool b2, bool b3) : osg::Uniform(name, b0, b1, b2, b3), _obj(L,-1) {};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return Uniform::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Uniform::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Uniform::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Uniform::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return Uniform::releaseGLObjects(arg1);
	};

	// osg::Object * osg::Uniform::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return Uniform::cloneType();
	};

	// osg::Object * osg::Uniform::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return Uniform::clone(arg1);
	};

	// bool osg::Uniform::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Uniform::isSameKindAs(obj);
	};

	// const char * osg::Uniform::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return Uniform::libraryName();
	};

	// const char * osg::Uniform::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return Uniform::className();
	};

	// void osg::Uniform::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Uniform::setName(name);
	};

	// int osg::Uniform::compare(const osg::Uniform & rhs) const
	int compare(const osg::Uniform & rhs) const {
		if(_obj.pushFunction("compare")) {
			_obj.pushArg(&rhs);
			return (_obj.callFunction<int>());
		}

		return Uniform::compare(rhs);
	};

	// int osg::Uniform::compareData(const osg::Uniform & rhs) const
	int compareData(const osg::Uniform & rhs) const {
		if(_obj.pushFunction("compareData")) {
			_obj.pushArg(&rhs);
			return (_obj.callFunction<int>());
		}

		return Uniform::compareData(rhs);
	};




};




#endif

