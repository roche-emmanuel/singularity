#ifndef _WRAPPERS_WRAPPER_OSG_SHADERCOMPONENT_H_
#define _WRAPPERS_WRAPPER_OSG_SHADERCOMPONENT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Shader>

class wrapper_osg_ShaderComponent : public osg::ShaderComponent, public luna_wrapper_base {

public:
		

	~wrapper_osg_ShaderComponent() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_ShaderComponent(lua_State* L, lua_Table* dum) : osg::ShaderComponent(), luna_wrapper_base(L) {};
	wrapper_osg_ShaderComponent(lua_State* L, lua_Table* dum, const osg::ShaderComponent & sc, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::ShaderComponent(sc, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return ShaderComponent::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return ShaderComponent::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return ShaderComponent::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ShaderComponent::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ShaderComponent::getUserData();
	};

	// osg::Object * osg::ShaderComponent::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return ShaderComponent::cloneType();
	};

	// osg::Object * osg::ShaderComponent::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return ShaderComponent::clone(arg1);
	};

	// bool osg::ShaderComponent::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return ShaderComponent::isSameKindAs(obj);
	};

	// const char * osg::ShaderComponent::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return ShaderComponent::libraryName();
	};

	// const char * osg::ShaderComponent::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return ShaderComponent::className();
	};

	// void osg::ShaderComponent::compileGLObjects(osg::State & state) const
	void compileGLObjects(osg::State & state) const {
		if(_obj.pushFunction("compileGLObjects")) {
			_obj.pushArg(&state);
			return (_obj.callFunction<void>());
		}

		return ShaderComponent::compileGLObjects(state);
	};

	// void osg::ShaderComponent::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ShaderComponent::releaseGLObjects(arg1);
	};




};




#endif

