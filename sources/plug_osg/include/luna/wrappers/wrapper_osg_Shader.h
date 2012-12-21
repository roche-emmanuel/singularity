#ifndef _WRAPPERS_WRAPPER_OSG_SHADER_H_
#define _WRAPPERS_WRAPPER_OSG_SHADER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Shader>

class wrapper_osg_Shader : public osg::Shader, public luna_wrapper_base {

public:
		

	~wrapper_osg_Shader() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_Shader(lua_State* L, lua_Table* dum, osg::Shader::Type type = osg::Shader::UNDEFINED) : osg::Shader(type), luna_wrapper_base(L) {};
	wrapper_osg_Shader(lua_State* L, lua_Table* dum, osg::Shader::Type type, const std::string & source) : osg::Shader(type, source), luna_wrapper_base(L) {};
	wrapper_osg_Shader(lua_State* L, lua_Table* dum, osg::Shader::Type type, osg::ShaderBinary * shaderBinary) : osg::Shader(type, shaderBinary), luna_wrapper_base(L) {};
	wrapper_osg_Shader(lua_State* L, lua_Table* dum, const osg::Shader & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::Shader(rhs, copyop), luna_wrapper_base(L) {};

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




// bool osg::Shader::addProgramRef(osg::Program * program)
bool public_addProgramRef(osg::Program * program) {
	return osg::Shader::addProgramRef(program);
};

// bool osg::Shader::removeProgramRef(osg::Program * program)
bool public_removeProgramRef(osg::Program * program) {
	return osg::Shader::removeProgramRef(program);
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

