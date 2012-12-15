#ifndef _WRAPPERS_WRAPPER_OSG_SHADER_H_
#define _WRAPPERS_WRAPPER_OSG_SHADER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Shader>

class wrapper_osg_Shader : public osg::Shader {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_Shader(lua_State* L, lua_Table* dum, osg::Shader::Type type = osg::Shader::UNDEFINED) : osg::Shader(type), _obj(L,-1) {};
	wrapper_osg_Shader(lua_State* L, lua_Table* dum, osg::Shader::Type type, const std::string & source) : osg::Shader(type, source), _obj(L,-1) {};
	wrapper_osg_Shader(lua_State* L, lua_Table* dum, osg::Shader::Type type, osg::ShaderBinary * shaderBinary) : osg::Shader(type, shaderBinary), _obj(L,-1) {};
	wrapper_osg_Shader(lua_State* L, lua_Table* dum, const osg::Shader & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::Shader(rhs, copyop), _obj(L,-1) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Shader::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return Shader::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Shader::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Shader::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Shader::getUserData();
	};

	// osg::Object * osg::Shader::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return Shader::cloneType();
	};

	// osg::Object * osg::Shader::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return Shader::clone(arg1);
	};

	// bool osg::Shader::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Shader::isSameKindAs(obj);
	};

	// const char * osg::Shader::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return Shader::libraryName();
	};

	// const char * osg::Shader::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return Shader::className();
	};

	// void osg::Shader::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return Shader::releaseGLObjects(state);
	};




};




#endif

