#ifndef _WRAPPERS_WRAPPER_OSG_TEXTURE_D_H_
#define _WRAPPERS_WRAPPER_OSG_TEXTURE_D_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Texture3D>

class wrapper_osg_Texture3D : public osg::Texture3D, public luna_wrapper_base {

public:
		

	~wrapper_osg_Texture3D() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_Texture3D(lua_State* L, lua_Table* dum) : osg::Texture3D(), luna_wrapper_base(L) {};
	wrapper_osg_Texture3D(lua_State* L, lua_Table* dum, osg::Image * image) : osg::Texture3D(image), luna_wrapper_base(L) {};
	wrapper_osg_Texture3D(lua_State* L, lua_Table* dum, const osg::Texture3D & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::Texture3D(text, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Texture3D::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return Texture3D::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Texture3D::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Texture3D::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Texture3D::getUserData();
	};

	// unsigned int osg::StateAttribute::getMember() const
	unsigned int getMember() const {
		if(_obj.pushFunction("getMember")) {
			return (_obj.callFunction<unsigned int>());
		}

		return Texture3D::getMember();
	};

	// bool osg::StateAttribute::checkValidityOfAssociatedModes(osg::State & arg1) const
	bool checkValidityOfAssociatedModes(osg::State & arg1) const {
		if(_obj.pushFunction("checkValidityOfAssociatedModes")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return Texture3D::checkValidityOfAssociatedModes(arg1);
	};

	// osg::Texture * osg::Texture::asTexture()
	osg::Texture * asTexture() {
		if(_obj.pushFunction("asTexture")) {
			return (_obj.callFunction<osg::Texture*>());
		}

		return Texture3D::asTexture();
	};

	// const osg::Texture * osg::Texture::asTexture() const
	const osg::Texture * asTexture() const {
		if(_obj.pushFunction("asTexture")) {
			return (_obj.callFunction<osg::Texture*>());
		}

		return Texture3D::asTexture();
	};

	// bool osg::Texture::isTextureAttribute() const
	bool isTextureAttribute() const {
		if(_obj.pushFunction("isTextureAttribute")) {
			return (_obj.callFunction<bool>());
		}

		return Texture3D::isTextureAttribute();
	};

	// bool osg::Texture::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	bool getModeUsage(osg::StateAttribute::ModeUsage & arg1) const {
		if(_obj.pushFunction("getModeUsage")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return Texture3D::getModeUsage(arg1);
	};

	// void osg::Texture::compileGLObjects(osg::State & state) const
	void compileGLObjects(osg::State & state) const {
		if(_obj.pushFunction("compileGLObjects")) {
			_obj.pushArg(&state);
			return (_obj.callFunction<void>());
		}

		return Texture3D::compileGLObjects(state);
	};

	// void osg::Texture::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return Texture3D::releaseGLObjects(state);
	};

	// osg::Object * osg::Texture3D::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return Texture3D::cloneType();
	};

	// osg::Object * osg::Texture3D::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return Texture3D::clone(arg1);
	};

	// bool osg::Texture3D::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Texture3D::isSameKindAs(obj);
	};

	// const char * osg::Texture3D::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return Texture3D::libraryName();
	};

	// const char * osg::Texture3D::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return Texture3D::className();
	};

	// osg::StateAttribute::Type osg::Texture3D::getType() const
	osg::StateAttribute::Type getType() const {
		if(_obj.pushFunction("getType")) {
			return (osg::StateAttribute::Type)(_obj.callFunction<int>());
		}

		return Texture3D::getType();
	};

	// int osg::Texture3D::compare(const osg::StateAttribute & rhs) const
	int compare(const osg::StateAttribute & rhs) const {
		if(_obj.pushFunction("compare")) {
			_obj.pushArg(&rhs);
			return (_obj.callFunction<int>());
		}

		return Texture3D::compare(rhs);
	};

	// unsigned int osg::Texture3D::getTextureTarget() const
	unsigned int getTextureTarget() const {
		if(_obj.pushFunction("getTextureTarget")) {
			return (_obj.callFunction<unsigned int>());
		}

		return Texture3D::getTextureTarget();
	};

	// void osg::Texture3D::setImage(unsigned int arg1, osg::Image * image)
	void setImage(unsigned int arg1, osg::Image * image) {
		if(_obj.pushFunction("setImage")) {
			_obj.pushArg(arg1);
			_obj.pushArg(image);
			return (_obj.callFunction<void>());
		}

		return Texture3D::setImage(arg1, image);
	};

	// osg::Image * osg::Texture3D::getImage(unsigned int arg1)
	osg::Image * getImage(unsigned int arg1) {
		if(_obj.pushFunction("getImage")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<osg::Image*>());
		}

		return Texture3D::getImage(arg1);
	};

	// const osg::Image * osg::Texture3D::getImage(unsigned int arg1) const
	const osg::Image * getImage(unsigned int arg1) const {
		if(_obj.pushFunction("getImage")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<osg::Image*>());
		}

		return Texture3D::getImage(arg1);
	};

	// unsigned int osg::Texture3D::getNumImages() const
	unsigned int getNumImages() const {
		if(_obj.pushFunction("getNumImages")) {
			return (_obj.callFunction<unsigned int>());
		}

		return Texture3D::getNumImages();
	};

	// int osg::Texture3D::getTextureWidth() const
	int getTextureWidth() const {
		if(_obj.pushFunction("getTextureWidth")) {
			return (_obj.callFunction<int>());
		}

		return Texture3D::getTextureWidth();
	};

	// int osg::Texture3D::getTextureHeight() const
	int getTextureHeight() const {
		if(_obj.pushFunction("getTextureHeight")) {
			return (_obj.callFunction<int>());
		}

		return Texture3D::getTextureHeight();
	};

	// int osg::Texture3D::getTextureDepth() const
	int getTextureDepth() const {
		if(_obj.pushFunction("getTextureDepth")) {
			return (_obj.callFunction<int>());
		}

		return Texture3D::getTextureDepth();
	};

	// void osg::Texture3D::apply(osg::State & state) const
	void apply(osg::State & state) const {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&state);
			return (_obj.callFunction<void>());
		}

		return Texture3D::apply(state);
	};


protected:
	// void osg::Texture3D::computeInternalFormat() const
	void computeInternalFormat() const {
		if(_obj.pushFunction("computeInternalFormat")) {
			return (_obj.callFunction<void>());
		}

		return Texture3D::computeInternalFormat();
	};

	// void osg::Texture3D::allocateMipmap(osg::State & state) const
	void allocateMipmap(osg::State & state) const {
		if(_obj.pushFunction("allocateMipmap")) {
			_obj.pushArg(&state);
			return (_obj.callFunction<void>());
		}

		return Texture3D::allocateMipmap(state);
	};

public:
// void osg::Texture3D::computeRequiredTextureDimensions(osg::State & state, const osg::Image & image, int & width, int & height, int & depth, int & numMipmapLevels) const
void public_computeRequiredTextureDimensions(osg::State & state, const osg::Image & image, int & width, int & height, int & depth, int & numMipmapLevels) const {
	return osg::Texture3D::computeRequiredTextureDimensions(state, image, width, height, depth, numMipmapLevels);
};

// void osg::Texture3D::applyTexImage3D(unsigned int target, osg::Image * image, osg::State & state, int & inwidth, int & inheight, int & indepth, int & numMipmapLevels) const
void public_applyTexImage3D(unsigned int target, osg::Image * image, osg::State & state, int & inwidth, int & inheight, int & indepth, int & numMipmapLevels) const {
	return osg::Texture3D::applyTexImage3D(target, image, state, inwidth, inheight, indepth, numMipmapLevels);
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

