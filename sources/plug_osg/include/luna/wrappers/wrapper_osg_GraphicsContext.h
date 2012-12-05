#ifndef _WRAPPERS_WRAPPER_OSG_GRAPHICSCONTEXT_H_
#define _WRAPPERS_WRAPPER_OSG_GRAPHICSCONTEXT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GraphicsContext>

class wrapper_osg_GraphicsContext : public osg::GraphicsContext {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_GraphicsContext(lua_State* L, lua_Table* dum) : osg::GraphicsContext(), _obj(L,-1) {};
	wrapper_osg_GraphicsContext(lua_State* L, lua_Table* dum, const osg::GraphicsContext & arg1, const osg::CopyOp & arg2) : osg::GraphicsContext(arg1, arg2), _obj(L,-1) {};

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

	// bool osg::GraphicsContext::valid() const
	bool valid() const {
		THROW_IF(!_obj.pushFunction("valid"),"No implementation for abstract function osg::GraphicsContext::valid");
		return (_obj.callFunction<bool>());
	};

	// void osg::GraphicsContext::clear()
	void clear() {
		if(_obj.pushFunction("clear")) {
			return (_obj.callFunction<void>());
		}

		return osg::GraphicsContext::clear();
	};

	// bool osg::GraphicsContext::realizeImplementation()
	bool realizeImplementation() {
		THROW_IF(!_obj.pushFunction("realizeImplementation"),"No implementation for abstract function osg::GraphicsContext::realizeImplementation");
		return (_obj.callFunction<bool>());
	};

	// bool osg::GraphicsContext::isRealizedImplementation() const
	bool isRealizedImplementation() const {
		THROW_IF(!_obj.pushFunction("isRealizedImplementation"),"No implementation for abstract function osg::GraphicsContext::isRealizedImplementation");
		return (_obj.callFunction<bool>());
	};

	// void osg::GraphicsContext::closeImplementation()
	void closeImplementation() {
		THROW_IF(!_obj.pushFunction("closeImplementation"),"No implementation for abstract function osg::GraphicsContext::closeImplementation");
		return (_obj.callFunction<void>());
	};

	// bool osg::GraphicsContext::makeCurrentImplementation()
	bool makeCurrentImplementation() {
		THROW_IF(!_obj.pushFunction("makeCurrentImplementation"),"No implementation for abstract function osg::GraphicsContext::makeCurrentImplementation");
		return (_obj.callFunction<bool>());
	};

	// bool osg::GraphicsContext::makeContextCurrentImplementation(osg::GraphicsContext * readContext)
	bool makeContextCurrentImplementation(osg::GraphicsContext * readContext) {
		THROW_IF(!_obj.pushFunction("makeContextCurrentImplementation"),"No implementation for abstract function osg::GraphicsContext::makeContextCurrentImplementation");
		_obj.pushArg(readContext);
		return (_obj.callFunction<bool>());
	};

	// bool osg::GraphicsContext::releaseContextImplementation()
	bool releaseContextImplementation() {
		THROW_IF(!_obj.pushFunction("releaseContextImplementation"),"No implementation for abstract function osg::GraphicsContext::releaseContextImplementation");
		return (_obj.callFunction<bool>());
	};

	// void osg::GraphicsContext::bindPBufferToTextureImplementation(unsigned int buffer)
	void bindPBufferToTextureImplementation(unsigned int buffer) {
		THROW_IF(!_obj.pushFunction("bindPBufferToTextureImplementation"),"No implementation for abstract function osg::GraphicsContext::bindPBufferToTextureImplementation");
		_obj.pushArg(buffer);
		return (_obj.callFunction<void>());
	};

	// void osg::GraphicsContext::swapBuffersImplementation()
	void swapBuffersImplementation() {
		THROW_IF(!_obj.pushFunction("swapBuffersImplementation"),"No implementation for abstract function osg::GraphicsContext::swapBuffersImplementation");
		return (_obj.callFunction<void>());
	};

	// void osg::GraphicsContext::resizedImplementation(int x, int y, int width, int height)
	void resizedImplementation(int x, int y, int width, int height) {
		if(_obj.pushFunction("resizedImplementation")) {
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(width);
			_obj.pushArg(height);
			return (_obj.callFunction<void>());
		}

		return osg::GraphicsContext::resizedImplementation(x, y, width, height);
	};

	// bool osg::GraphicsContext::isSameKindAs(const osg::Object * object) const
	bool isSameKindAs(const osg::Object * object) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(object);
			return (_obj.callFunction<bool>());
		}

		return osg::GraphicsContext::isSameKindAs(object);
	};

	// const char * osg::GraphicsContext::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::GraphicsContext::libraryName();
	};

	// const char * osg::GraphicsContext::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::GraphicsContext::className();
	};


protected:
	// osg::Object * osg::GraphicsContext::cloneType() const
	// osg::Object * osg::GraphicsContext::clone(const osg::CopyOp & arg1) const

};




#endif
