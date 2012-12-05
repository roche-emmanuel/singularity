#ifndef _WRAPPERS_WRAPPER_OSG_TEXTURERECTANGLE_H_
#define _WRAPPERS_WRAPPER_OSG_TEXTURERECTANGLE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/TextureRectangle>

class wrapper_osg_TextureRectangle : public osg::TextureRectangle {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_TextureRectangle(lua_State* L, lua_Table* dum) : osg::TextureRectangle(), _obj(L,-1) {};
	wrapper_osg_TextureRectangle(lua_State* L, lua_Table* dum, osg::Image * image) : osg::TextureRectangle(image), _obj(L,-1) {};
	wrapper_osg_TextureRectangle(lua_State* L, lua_Table* dum, const osg::TextureRectangle & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::TextureRectangle(text, copyop), _obj(L,-1) {};

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

	// unsigned int osg::StateAttribute::getMember() const
	unsigned int getMember() const {
		if(_obj.pushFunction("getMember")) {
			return (_obj.callFunction<unsigned int>());
		}

		return osg::StateAttribute::getMember();
	};

	// bool osg::StateAttribute::checkValidityOfAssociatedModes(osg::State & arg1) const
	bool checkValidityOfAssociatedModes(osg::State & arg1) const {
		if(_obj.pushFunction("checkValidityOfAssociatedModes")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return osg::StateAttribute::checkValidityOfAssociatedModes(arg1);
	};

	// osg::Texture * osg::Texture::asTexture()
	osg::Texture * asTexture() {
		if(_obj.pushFunction("asTexture")) {
			return (_obj.callFunction<osg::Texture*>());
		}

		return osg::Texture::asTexture();
	};

	// const osg::Texture * osg::Texture::asTexture() const
	const osg::Texture * asTexture() const {
		if(_obj.pushFunction("asTexture")) {
			return (_obj.callFunction<osg::Texture*>());
		}

		return osg::Texture::asTexture();
	};

	// bool osg::Texture::isTextureAttribute() const
	bool isTextureAttribute() const {
		if(_obj.pushFunction("isTextureAttribute")) {
			return (_obj.callFunction<bool>());
		}

		return osg::Texture::isTextureAttribute();
	};

	// bool osg::Texture::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	bool getModeUsage(osg::StateAttribute::ModeUsage & arg1) const {
		if(_obj.pushFunction("getModeUsage")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return osg::Texture::getModeUsage(arg1);
	};

	// void osg::Texture::compileGLObjects(osg::State & state) const
	void compileGLObjects(osg::State & state) const {
		if(_obj.pushFunction("compileGLObjects")) {
			_obj.pushArg(&state);
			return (_obj.callFunction<void>());
		}

		return osg::Texture::compileGLObjects(state);
	};

	// void osg::Texture::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return osg::Texture::releaseGLObjects(state);
	};

	// osg::Object * osg::TextureRectangle::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::TextureRectangle::cloneType();
	};

	// osg::Object * osg::TextureRectangle::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::TextureRectangle::clone(arg1);
	};

	// bool osg::TextureRectangle::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osg::TextureRectangle::isSameKindAs(obj);
	};

	// const char * osg::TextureRectangle::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::TextureRectangle::libraryName();
	};

	// const char * osg::TextureRectangle::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::TextureRectangle::className();
	};

	// osg::StateAttribute::Type osg::TextureRectangle::getType() const
	osg::StateAttribute::Type getType() const {
		if(_obj.pushFunction("getType")) {
			return (osg::StateAttribute::Type)(_obj.callFunction<int>());
		}

		return osg::TextureRectangle::getType();
	};

	// int osg::TextureRectangle::compare(const osg::StateAttribute & rhs) const
	int compare(const osg::StateAttribute & rhs) const {
		if(_obj.pushFunction("compare")) {
			_obj.pushArg(&rhs);
			return (_obj.callFunction<int>());
		}

		return osg::TextureRectangle::compare(rhs);
	};

	// unsigned int osg::TextureRectangle::getTextureTarget() const
	unsigned int getTextureTarget() const {
		if(_obj.pushFunction("getTextureTarget")) {
			return (_obj.callFunction<unsigned int>());
		}

		return osg::TextureRectangle::getTextureTarget();
	};

	// void osg::TextureRectangle::setImage(unsigned int arg1, osg::Image * image)
	void setImage(unsigned int arg1, osg::Image * image) {
		if(_obj.pushFunction("setImage")) {
			_obj.pushArg(arg1);
			_obj.pushArg(image);
			return (_obj.callFunction<void>());
		}

		return osg::TextureRectangle::setImage(arg1, image);
	};

	// osg::Image * osg::TextureRectangle::getImage(unsigned int arg1)
	osg::Image * getImage(unsigned int arg1) {
		if(_obj.pushFunction("getImage")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<osg::Image*>());
		}

		return osg::TextureRectangle::getImage(arg1);
	};

	// const osg::Image * osg::TextureRectangle::getImage(unsigned int arg1) const
	const osg::Image * getImage(unsigned int arg1) const {
		if(_obj.pushFunction("getImage")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<osg::Image*>());
		}

		return osg::TextureRectangle::getImage(arg1);
	};

	// unsigned int osg::TextureRectangle::getNumImages() const
	unsigned int getNumImages() const {
		if(_obj.pushFunction("getNumImages")) {
			return (_obj.callFunction<unsigned int>());
		}

		return osg::TextureRectangle::getNumImages();
	};

	// int osg::TextureRectangle::getTextureWidth() const
	int getTextureWidth() const {
		if(_obj.pushFunction("getTextureWidth")) {
			return (_obj.callFunction<int>());
		}

		return osg::TextureRectangle::getTextureWidth();
	};

	// int osg::TextureRectangle::getTextureHeight() const
	int getTextureHeight() const {
		if(_obj.pushFunction("getTextureHeight")) {
			return (_obj.callFunction<int>());
		}

		return osg::TextureRectangle::getTextureHeight();
	};

	// int osg::TextureRectangle::getTextureDepth() const
	int getTextureDepth() const {
		if(_obj.pushFunction("getTextureDepth")) {
			return (_obj.callFunction<int>());
		}

		return osg::TextureRectangle::getTextureDepth();
	};

	// void osg::TextureRectangle::apply(osg::State & state) const
	void apply(osg::State & state) const {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&state);
			return (_obj.callFunction<void>());
		}

		return osg::TextureRectangle::apply(state);
	};


protected:
	// void osg::TextureRectangle::computeInternalFormat() const
	// void osg::TextureRectangle::allocateMipmap(osg::State & state) const

};




#endif
