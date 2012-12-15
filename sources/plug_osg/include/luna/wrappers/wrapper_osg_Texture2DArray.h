#ifndef _WRAPPERS_WRAPPER_OSG_TEXTURE_DARRAY_H_
#define _WRAPPERS_WRAPPER_OSG_TEXTURE_DARRAY_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Texture2DArray>

class wrapper_osg_Texture2DArray : public osg::Texture2DArray {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_Texture2DArray(lua_State* L, lua_Table* dum) : osg::Texture2DArray(), _obj(L,-1) {};
	wrapper_osg_Texture2DArray(lua_State* L, lua_Table* dum, const osg::Texture2DArray & cm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::Texture2DArray(cm, copyop), _obj(L,-1) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Texture2DArray::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return Texture2DArray::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Texture2DArray::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Texture2DArray::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Texture2DArray::getUserData();
	};

	// unsigned int osg::StateAttribute::getMember() const
	unsigned int getMember() const {
		if(_obj.pushFunction("getMember")) {
			return (_obj.callFunction<unsigned int>());
		}

		return Texture2DArray::getMember();
	};

	// bool osg::StateAttribute::checkValidityOfAssociatedModes(osg::State & arg1) const
	bool checkValidityOfAssociatedModes(osg::State & arg1) const {
		if(_obj.pushFunction("checkValidityOfAssociatedModes")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return Texture2DArray::checkValidityOfAssociatedModes(arg1);
	};

	// osg::Texture * osg::Texture::asTexture()
	osg::Texture * asTexture() {
		if(_obj.pushFunction("asTexture")) {
			return (_obj.callFunction<osg::Texture*>());
		}

		return Texture2DArray::asTexture();
	};

	// const osg::Texture * osg::Texture::asTexture() const
	const osg::Texture * asTexture() const {
		if(_obj.pushFunction("asTexture")) {
			return (_obj.callFunction<osg::Texture*>());
		}

		return Texture2DArray::asTexture();
	};

	// bool osg::Texture::isTextureAttribute() const
	bool isTextureAttribute() const {
		if(_obj.pushFunction("isTextureAttribute")) {
			return (_obj.callFunction<bool>());
		}

		return Texture2DArray::isTextureAttribute();
	};

	// bool osg::Texture::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	bool getModeUsage(osg::StateAttribute::ModeUsage & arg1) const {
		if(_obj.pushFunction("getModeUsage")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return Texture2DArray::getModeUsage(arg1);
	};

	// void osg::Texture::compileGLObjects(osg::State & state) const
	void compileGLObjects(osg::State & state) const {
		if(_obj.pushFunction("compileGLObjects")) {
			_obj.pushArg(&state);
			return (_obj.callFunction<void>());
		}

		return Texture2DArray::compileGLObjects(state);
	};

	// void osg::Texture::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return Texture2DArray::releaseGLObjects(state);
	};

	// osg::Object * osg::Texture2DArray::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return Texture2DArray::cloneType();
	};

	// osg::Object * osg::Texture2DArray::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return Texture2DArray::clone(arg1);
	};

	// bool osg::Texture2DArray::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Texture2DArray::isSameKindAs(obj);
	};

	// const char * osg::Texture2DArray::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return Texture2DArray::libraryName();
	};

	// const char * osg::Texture2DArray::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return Texture2DArray::className();
	};

	// osg::StateAttribute::Type osg::Texture2DArray::getType() const
	osg::StateAttribute::Type getType() const {
		if(_obj.pushFunction("getType")) {
			return (osg::StateAttribute::Type)(_obj.callFunction<int>());
		}

		return Texture2DArray::getType();
	};

	// int osg::Texture2DArray::compare(const osg::StateAttribute & rhs) const
	int compare(const osg::StateAttribute & rhs) const {
		if(_obj.pushFunction("compare")) {
			_obj.pushArg(&rhs);
			return (_obj.callFunction<int>());
		}

		return Texture2DArray::compare(rhs);
	};

	// unsigned int osg::Texture2DArray::getTextureTarget() const
	unsigned int getTextureTarget() const {
		if(_obj.pushFunction("getTextureTarget")) {
			return (_obj.callFunction<unsigned int>());
		}

		return Texture2DArray::getTextureTarget();
	};

	// void osg::Texture2DArray::setImage(unsigned int layer, osg::Image * image)
	void setImage(unsigned int layer, osg::Image * image) {
		if(_obj.pushFunction("setImage")) {
			_obj.pushArg(layer);
			_obj.pushArg(image);
			return (_obj.callFunction<void>());
		}

		return Texture2DArray::setImage(layer, image);
	};

	// osg::Image * osg::Texture2DArray::getImage(unsigned int layer)
	osg::Image * getImage(unsigned int layer) {
		if(_obj.pushFunction("getImage")) {
			_obj.pushArg(layer);
			return (_obj.callFunction<osg::Image*>());
		}

		return Texture2DArray::getImage(layer);
	};

	// const osg::Image * osg::Texture2DArray::getImage(unsigned int layer) const
	const osg::Image * getImage(unsigned int layer) const {
		if(_obj.pushFunction("getImage")) {
			_obj.pushArg(layer);
			return (_obj.callFunction<osg::Image*>());
		}

		return Texture2DArray::getImage(layer);
	};

	// unsigned int osg::Texture2DArray::getNumImages() const
	unsigned int getNumImages() const {
		if(_obj.pushFunction("getNumImages")) {
			return (_obj.callFunction<unsigned int>());
		}

		return Texture2DArray::getNumImages();
	};

	// int osg::Texture2DArray::getTextureWidth() const
	int getTextureWidth() const {
		if(_obj.pushFunction("getTextureWidth")) {
			return (_obj.callFunction<int>());
		}

		return Texture2DArray::getTextureWidth();
	};

	// int osg::Texture2DArray::getTextureHeight() const
	int getTextureHeight() const {
		if(_obj.pushFunction("getTextureHeight")) {
			return (_obj.callFunction<int>());
		}

		return Texture2DArray::getTextureHeight();
	};

	// int osg::Texture2DArray::getTextureDepth() const
	int getTextureDepth() const {
		if(_obj.pushFunction("getTextureDepth")) {
			return (_obj.callFunction<int>());
		}

		return Texture2DArray::getTextureDepth();
	};

	// void osg::Texture2DArray::apply(osg::State & state) const
	void apply(osg::State & state) const {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&state);
			return (_obj.callFunction<void>());
		}

		return Texture2DArray::apply(state);
	};


protected:
	// void osg::Texture2DArray::computeInternalFormat() const
	void computeInternalFormat() const {
		if(_obj.pushFunction("computeInternalFormat")) {
			return (_obj.callFunction<void>());
		}

		return Texture2DArray::computeInternalFormat();
	};

	// void osg::Texture2DArray::allocateMipmap(osg::State & state) const
	void allocateMipmap(osg::State & state) const {
		if(_obj.pushFunction("allocateMipmap")) {
			_obj.pushArg(&state);
			return (_obj.callFunction<void>());
		}

		return Texture2DArray::allocateMipmap(state);
	};


};




#endif

