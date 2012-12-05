#ifndef _WRAPPERS_WRAPPER_OSG_TRANSFORMFEEDBACKBUFFERBINDING_H_
#define _WRAPPERS_WRAPPER_OSG_TRANSFORMFEEDBACKBUFFERBINDING_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/BufferIndexBinding>

class wrapper_osg_TransformFeedbackBufferBinding : public osg::TransformFeedbackBufferBinding {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_TransformFeedbackBufferBinding(lua_State* L, lua_Table* dum, unsigned int index = 0) : osg::TransformFeedbackBufferBinding(index), _obj(L,-1) {};
	wrapper_osg_TransformFeedbackBufferBinding(lua_State* L, lua_Table* dum, unsigned int index, osg::BufferObject * bo, int offset, int size) : osg::TransformFeedbackBufferBinding(index, bo, offset, size), _obj(L,-1) {};
	wrapper_osg_TransformFeedbackBufferBinding(lua_State* L, lua_Table* dum, const osg::TransformFeedbackBufferBinding & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::TransformFeedbackBufferBinding(rhs, copyop), _obj(L,-1) {};

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

	// osg::Texture * osg::StateAttribute::asTexture()
	osg::Texture * asTexture() {
		if(_obj.pushFunction("asTexture")) {
			return (_obj.callFunction<osg::Texture*>());
		}

		return osg::StateAttribute::asTexture();
	};

	// const osg::Texture * osg::StateAttribute::asTexture() const
	const osg::Texture * asTexture() const {
		if(_obj.pushFunction("asTexture")) {
			return (_obj.callFunction<osg::Texture*>());
		}

		return osg::StateAttribute::asTexture();
	};

	// bool osg::StateAttribute::isTextureAttribute() const
	bool isTextureAttribute() const {
		if(_obj.pushFunction("isTextureAttribute")) {
			return (_obj.callFunction<bool>());
		}

		return osg::StateAttribute::isTextureAttribute();
	};

	// bool osg::StateAttribute::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	bool getModeUsage(osg::StateAttribute::ModeUsage & arg1) const {
		if(_obj.pushFunction("getModeUsage")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return osg::StateAttribute::getModeUsage(arg1);
	};

	// bool osg::StateAttribute::checkValidityOfAssociatedModes(osg::State & arg1) const
	bool checkValidityOfAssociatedModes(osg::State & arg1) const {
		if(_obj.pushFunction("checkValidityOfAssociatedModes")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return osg::StateAttribute::checkValidityOfAssociatedModes(arg1);
	};

	// void osg::StateAttribute::compileGLObjects(osg::State & arg1) const
	void compileGLObjects(osg::State & arg1) const {
		if(_obj.pushFunction("compileGLObjects")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::StateAttribute::compileGLObjects(arg1);
	};

	// void osg::StateAttribute::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osg::StateAttribute::releaseGLObjects(arg1);
	};

	// unsigned int osg::BufferIndexBinding::getMember() const
	unsigned int getMember() const {
		if(_obj.pushFunction("getMember")) {
			return (_obj.callFunction<unsigned>());
		}

		return osg::BufferIndexBinding::getMember();
	};

	// void osg::BufferIndexBinding::apply(osg::State & arg1) const
	void apply(osg::State & arg1) const {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::BufferIndexBinding::apply(arg1);
	};

	// osg::Object * osg::TransformFeedbackBufferBinding::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::TransformFeedbackBufferBinding::cloneType();
	};

	// osg::Object * osg::TransformFeedbackBufferBinding::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::TransformFeedbackBufferBinding::clone(arg1);
	};

	// bool osg::TransformFeedbackBufferBinding::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osg::TransformFeedbackBufferBinding::isSameKindAs(obj);
	};

	// const char * osg::TransformFeedbackBufferBinding::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::TransformFeedbackBufferBinding::libraryName();
	};

	// const char * osg::TransformFeedbackBufferBinding::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::TransformFeedbackBufferBinding::className();
	};

	// osg::StateAttribute::Type osg::TransformFeedbackBufferBinding::getType() const
	osg::StateAttribute::Type getType() const {
		if(_obj.pushFunction("getType")) {
			return (osg::StateAttribute::Type)(_obj.callFunction<int>());
		}

		return osg::TransformFeedbackBufferBinding::getType();
	};

	// int osg::TransformFeedbackBufferBinding::compare(const osg::StateAttribute & sa) const
	int compare(const osg::StateAttribute & sa) const {
		if(_obj.pushFunction("compare")) {
			_obj.pushArg(&sa);
			return (_obj.callFunction<int>());
		}

		return osg::TransformFeedbackBufferBinding::compare(sa);
	};




};




#endif

