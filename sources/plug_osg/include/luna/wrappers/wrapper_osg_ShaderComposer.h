#ifndef _WRAPPERS_WRAPPER_OSG_SHADERCOMPOSER_H_
#define _WRAPPERS_WRAPPER_OSG_SHADERCOMPOSER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/ShaderComposer>

class wrapper_osg_ShaderComposer : public osg::ShaderComposer {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_ShaderComposer(lua_State* L, lua_Table* dum) : osg::ShaderComposer(), _obj(L,-1) {};
	wrapper_osg_ShaderComposer(lua_State* L, lua_Table* dum, const osg::ShaderComposer & sa, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::ShaderComposer(sa, copyop), _obj(L,-1) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return ShaderComposer::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return ShaderComposer::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return ShaderComposer::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ShaderComposer::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ShaderComposer::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ShaderComposer::releaseGLObjects(arg1);
	};

	// osg::Object * osg::ShaderComposer::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return ShaderComposer::cloneType();
	};

	// osg::Object * osg::ShaderComposer::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return ShaderComposer::clone(arg1);
	};

	// bool osg::ShaderComposer::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return ShaderComposer::isSameKindAs(obj);
	};

	// const char * osg::ShaderComposer::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return ShaderComposer::libraryName();
	};

	// const char * osg::ShaderComposer::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return ShaderComposer::className();
	};

	// osg::Program * osg::ShaderComposer::getOrCreateProgram(const osg::ShaderComponents & shaderComponents)
	osg::Program * getOrCreateProgram(const osg::ShaderComponents & shaderComponents) {
		if(_obj.pushFunction("getOrCreateProgram")) {
			_obj.pushArg(&shaderComponents);
			return (_obj.callFunction<osg::Program*>());
		}

		return ShaderComposer::getOrCreateProgram(shaderComponents);
	};




};




#endif

