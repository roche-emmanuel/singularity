#ifndef _WRAPPERS_WRAPPER_OSG_TEXTURERECTANGLE_H_
#define _WRAPPERS_WRAPPER_OSG_TEXTURERECTANGLE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/TextureRectangle>

class wrapper_osg_TextureRectangle : public osg::TextureRectangle, public luna_wrapper_base {

public:
		

	~wrapper_osg_TextureRectangle() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_TextureRectangle(lua_State* L, lua_Table* dum) : osg::TextureRectangle(), luna_wrapper_base(L) {};
	wrapper_osg_TextureRectangle(lua_State* L, lua_Table* dum, osg::Image * image) : osg::TextureRectangle(image), luna_wrapper_base(L) {};
	wrapper_osg_TextureRectangle(lua_State* L, lua_Table* dum, const osg::TextureRectangle & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::TextureRectangle(text, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return TextureRectangle::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return TextureRectangle::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return TextureRectangle::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return TextureRectangle::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return TextureRectangle::getUserData();
	};

	// unsigned int osg::StateAttribute::getMember() const
	unsigned int getMember() const {
		if(_obj.pushFunction("getMember")) {
			return (_obj.callFunction<unsigned int>());
		}

		return TextureRectangle::getMember();
	};

	// bool osg::StateAttribute::checkValidityOfAssociatedModes(osg::State & arg1) const
	bool checkValidityOfAssociatedModes(osg::State & arg1) const {
		if(_obj.pushFunction("checkValidityOfAssociatedModes")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return TextureRectangle::checkValidityOfAssociatedModes(arg1);
	};

	// osg::Texture * osg::Texture::asTexture()
	osg::Texture * asTexture() {
		if(_obj.pushFunction("asTexture")) {
			return (_obj.callFunction<osg::Texture*>());
		}

		return TextureRectangle::asTexture();
	};

	// const osg::Texture * osg::Texture::asTexture() const
	const osg::Texture * asTexture() const {
		if(_obj.pushFunction("asTexture")) {
			return (_obj.callFunction<osg::Texture*>());
		}

		return TextureRectangle::asTexture();
	};

	// bool osg::Texture::isTextureAttribute() const
	bool isTextureAttribute() const {
		if(_obj.pushFunction("isTextureAttribute")) {
			return (_obj.callFunction<bool>());
		}

		return TextureRectangle::isTextureAttribute();
	};

	// bool osg::Texture::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	bool getModeUsage(osg::StateAttribute::ModeUsage & arg1) const {
		if(_obj.pushFunction("getModeUsage")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return TextureRectangle::getModeUsage(arg1);
	};

	// void osg::Texture::compileGLObjects(osg::State & state) const
	void compileGLObjects(osg::State & state) const {
		if(_obj.pushFunction("compileGLObjects")) {
			_obj.pushArg(&state);
			return (_obj.callFunction<void>());
		}

		return TextureRectangle::compileGLObjects(state);
	};

	// void osg::Texture::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return TextureRectangle::releaseGLObjects(state);
	};

	// osg::Object * osg::TextureRectangle::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return TextureRectangle::cloneType();
	};

	// osg::Object * osg::TextureRectangle::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return TextureRectangle::clone(arg1);
	};

	// bool osg::TextureRectangle::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return TextureRectangle::isSameKindAs(obj);
	};

	// const char * osg::TextureRectangle::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return TextureRectangle::libraryName();
	};

	// const char * osg::TextureRectangle::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return TextureRectangle::className();
	};

	// osg::StateAttribute::Type osg::TextureRectangle::getType() const
	osg::StateAttribute::Type getType() const {
		if(_obj.pushFunction("getType")) {
			return (osg::StateAttribute::Type)(_obj.callFunction<int>());
		}

		return TextureRectangle::getType();
	};

	// int osg::TextureRectangle::compare(const osg::StateAttribute & rhs) const
	int compare(const osg::StateAttribute & rhs) const {
		if(_obj.pushFunction("compare")) {
			_obj.pushArg(&rhs);
			return (_obj.callFunction<int>());
		}

		return TextureRectangle::compare(rhs);
	};

	// unsigned int osg::TextureRectangle::getTextureTarget() const
	unsigned int getTextureTarget() const {
		if(_obj.pushFunction("getTextureTarget")) {
			return (_obj.callFunction<unsigned int>());
		}

		return TextureRectangle::getTextureTarget();
	};

	// void osg::TextureRectangle::setImage(unsigned int arg1, osg::Image * image)
	void setImage(unsigned int arg1, osg::Image * image) {
		if(_obj.pushFunction("setImage")) {
			_obj.pushArg(arg1);
			_obj.pushArg(image);
			return (_obj.callFunction<void>());
		}

		return TextureRectangle::setImage(arg1, image);
	};

	// osg::Image * osg::TextureRectangle::getImage(unsigned int arg1)
	osg::Image * getImage(unsigned int arg1) {
		if(_obj.pushFunction("getImage")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<osg::Image*>());
		}

		return TextureRectangle::getImage(arg1);
	};

	// const osg::Image * osg::TextureRectangle::getImage(unsigned int arg1) const
	const osg::Image * getImage(unsigned int arg1) const {
		if(_obj.pushFunction("getImage")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<osg::Image*>());
		}

		return TextureRectangle::getImage(arg1);
	};

	// unsigned int osg::TextureRectangle::getNumImages() const
	unsigned int getNumImages() const {
		if(_obj.pushFunction("getNumImages")) {
			return (_obj.callFunction<unsigned int>());
		}

		return TextureRectangle::getNumImages();
	};

	// int osg::TextureRectangle::getTextureWidth() const
	int getTextureWidth() const {
		if(_obj.pushFunction("getTextureWidth")) {
			return (_obj.callFunction<int>());
		}

		return TextureRectangle::getTextureWidth();
	};

	// int osg::TextureRectangle::getTextureHeight() const
	int getTextureHeight() const {
		if(_obj.pushFunction("getTextureHeight")) {
			return (_obj.callFunction<int>());
		}

		return TextureRectangle::getTextureHeight();
	};

	// int osg::TextureRectangle::getTextureDepth() const
	int getTextureDepth() const {
		if(_obj.pushFunction("getTextureDepth")) {
			return (_obj.callFunction<int>());
		}

		return TextureRectangle::getTextureDepth();
	};

	// void osg::TextureRectangle::apply(osg::State & state) const
	void apply(osg::State & state) const {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&state);
			return (_obj.callFunction<void>());
		}

		return TextureRectangle::apply(state);
	};


protected:
	// void osg::TextureRectangle::computeInternalFormat() const
	void computeInternalFormat() const {
		if(_obj.pushFunction("computeInternalFormat")) {
			return (_obj.callFunction<void>());
		}

		return TextureRectangle::computeInternalFormat();
	};

	// void osg::TextureRectangle::allocateMipmap(osg::State & state) const
	void allocateMipmap(osg::State & state) const {
		if(_obj.pushFunction("allocateMipmap")) {
			_obj.pushArg(&state);
			return (_obj.callFunction<void>());
		}

		return TextureRectangle::allocateMipmap(state);
	};

public:
// void osg::TextureRectangle::applyTexImage_load(unsigned int target, osg::Image * image, osg::State & state, int & inwidth, int & inheight) const
void public_applyTexImage_load(unsigned int target, osg::Image * image, osg::State & state, int & inwidth, int & inheight) const {
	return osg::TextureRectangle::applyTexImage_load(target, image, state, inwidth, inheight);
};

// void osg::TextureRectangle::applyTexImage_subload(unsigned int target, osg::Image * image, osg::State & state, int & inwidth, int & inheight, int & inInternalFormat) const
void public_applyTexImage_subload(unsigned int target, osg::Image * image, osg::State & state, int & inwidth, int & inheight, int & inInternalFormat) const {
	return osg::TextureRectangle::applyTexImage_subload(target, image, state, inwidth, inheight, inInternalFormat);
};

// void osg::Texture::computeInternalFormatWithImage(const osg::Image & image) const
void public_computeInternalFormatWithImage(const osg::Image & image) const {
	return osg::Texture::computeInternalFormatWithImage(image);
};

// void osg::Texture::computeRequiredTextureDimensions(osg::State & state, const osg::Image & image, int & width, int & height, int & numMipmapLevels) const
void public_computeRequiredTextureDimensions(osg::State & state, const osg::Image & image, int & width, int & height, int & numMipmapLevels) const {
	return osg::Texture::computeRequiredTextureDimensions(state, image, width, height, numMipmapLevels);
};

// void osg::Texture::computeInternalFormatType() const
void public_computeInternalFormatType() const {
	return osg::Texture::computeInternalFormatType();
};

// void osg::Texture::applyTexParameters(unsigned int target, osg::State & state) const
void public_applyTexParameters(unsigned int target, osg::State & state) const {
	return osg::Texture::applyTexParameters(target, state);
};

// bool osg::Texture::isHardwareMipmapGenerationEnabled(const osg::State & state) const
bool public_isHardwareMipmapGenerationEnabled(const osg::State & state) const {
	return osg::Texture::isHardwareMipmapGenerationEnabled(state);
};

// bool osg::Texture::isSafeToUnrefImageData(const osg::State & state) const
bool public_isSafeToUnrefImageData(const osg::State & state) const {
	return osg::Texture::isSafeToUnrefImageData(state);
};

// osg::Texture::GenerateMipmapMode osg::Texture::mipmapBeforeTexImage(const osg::State & state, bool hardwareMipmapOn) const
osg::Texture::GenerateMipmapMode public_mipmapBeforeTexImage(const osg::State & state, bool hardwareMipmapOn) const {
	return osg::Texture::mipmapBeforeTexImage(state, hardwareMipmapOn);
};

// void osg::Texture::mipmapAfterTexImage(osg::State & state, osg::Texture::GenerateMipmapMode beforeResult) const
void public_mipmapAfterTexImage(osg::State & state, osg::Texture::GenerateMipmapMode beforeResult) const {
	return osg::Texture::mipmapAfterTexImage(state, beforeResult);
};

// void osg::Texture::generateMipmap(osg::State & state) const
void public_generateMipmap(osg::State & state) const {
	return osg::Texture::generateMipmap(state);
};

// int osg::Texture::compareTexture(const osg::Texture & rhs) const
int public_compareTexture(const osg::Texture & rhs) const {
	return osg::Texture::compareTexture(rhs);
};

// int osg::Texture::compareTextureObjects(const osg::Texture & rhs) const
int public_compareTextureObjects(const osg::Texture & rhs) const {
	return osg::Texture::compareTextureObjects(rhs);
};

// void osg::StateAttribute::addParent(osg::StateSet * object)
void public_addParent(osg::StateSet * object) {
	return osg::StateAttribute::addParent(object);
};

// void osg::StateAttribute::removeParent(osg::StateSet * object)
void public_removeParent(osg::StateSet * object) {
	return osg::StateAttribute::removeParent(object);
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

