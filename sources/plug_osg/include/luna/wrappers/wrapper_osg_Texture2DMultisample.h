#ifndef _WRAPPERS_WRAPPER_OSG_TEXTURE_DMULTISAMPLE_H_
#define _WRAPPERS_WRAPPER_OSG_TEXTURE_DMULTISAMPLE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Texture2DMultisample>

class wrapper_osg_Texture2DMultisample : public osg::Texture2DMultisample {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_Texture2DMultisample(lua_State* L, lua_Table* dum) : osg::Texture2DMultisample(), _obj(L,-1) {};
	wrapper_osg_Texture2DMultisample(lua_State* L, lua_Table* dum, int numSamples, unsigned char fixedsamplelocations) : osg::Texture2DMultisample(numSamples, fixedsamplelocations), _obj(L,-1) {};
	wrapper_osg_Texture2DMultisample(lua_State* L, lua_Table* dum, const osg::Texture2DMultisample & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::Texture2DMultisample(text, copyop), _obj(L,-1) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Texture2DMultisample::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return Texture2DMultisample::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Texture2DMultisample::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Texture2DMultisample::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Texture2DMultisample::getUserData();
	};

	// unsigned int osg::StateAttribute::getMember() const
	unsigned int getMember() const {
		if(_obj.pushFunction("getMember")) {
			return (_obj.callFunction<unsigned int>());
		}

		return Texture2DMultisample::getMember();
	};

	// bool osg::StateAttribute::checkValidityOfAssociatedModes(osg::State & arg1) const
	bool checkValidityOfAssociatedModes(osg::State & arg1) const {
		if(_obj.pushFunction("checkValidityOfAssociatedModes")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return Texture2DMultisample::checkValidityOfAssociatedModes(arg1);
	};

	// osg::Texture * osg::Texture::asTexture()
	osg::Texture * asTexture() {
		if(_obj.pushFunction("asTexture")) {
			return (_obj.callFunction<osg::Texture*>());
		}

		return Texture2DMultisample::asTexture();
	};

	// const osg::Texture * osg::Texture::asTexture() const
	const osg::Texture * asTexture() const {
		if(_obj.pushFunction("asTexture")) {
			return (_obj.callFunction<osg::Texture*>());
		}

		return Texture2DMultisample::asTexture();
	};

	// bool osg::Texture::isTextureAttribute() const
	bool isTextureAttribute() const {
		if(_obj.pushFunction("isTextureAttribute")) {
			return (_obj.callFunction<bool>());
		}

		return Texture2DMultisample::isTextureAttribute();
	};

	// bool osg::Texture::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	bool getModeUsage(osg::StateAttribute::ModeUsage & arg1) const {
		if(_obj.pushFunction("getModeUsage")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return Texture2DMultisample::getModeUsage(arg1);
	};

	// void osg::Texture::compileGLObjects(osg::State & state) const
	void compileGLObjects(osg::State & state) const {
		if(_obj.pushFunction("compileGLObjects")) {
			_obj.pushArg(&state);
			return (_obj.callFunction<void>());
		}

		return Texture2DMultisample::compileGLObjects(state);
	};

	// void osg::Texture::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return Texture2DMultisample::releaseGLObjects(state);
	};

	// osg::Object * osg::Texture2DMultisample::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return Texture2DMultisample::cloneType();
	};

	// osg::Object * osg::Texture2DMultisample::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return Texture2DMultisample::clone(arg1);
	};

	// bool osg::Texture2DMultisample::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Texture2DMultisample::isSameKindAs(obj);
	};

	// const char * osg::Texture2DMultisample::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return Texture2DMultisample::libraryName();
	};

	// const char * osg::Texture2DMultisample::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return Texture2DMultisample::className();
	};

	// osg::StateAttribute::Type osg::Texture2DMultisample::getType() const
	osg::StateAttribute::Type getType() const {
		if(_obj.pushFunction("getType")) {
			return (osg::StateAttribute::Type)(_obj.callFunction<int>());
		}

		return Texture2DMultisample::getType();
	};

	// int osg::Texture2DMultisample::compare(const osg::StateAttribute & rhs) const
	int compare(const osg::StateAttribute & rhs) const {
		if(_obj.pushFunction("compare")) {
			_obj.pushArg(&rhs);
			return (_obj.callFunction<int>());
		}

		return Texture2DMultisample::compare(rhs);
	};

	// unsigned int osg::Texture2DMultisample::getTextureTarget() const
	unsigned int getTextureTarget() const {
		if(_obj.pushFunction("getTextureTarget")) {
			return (_obj.callFunction<unsigned int>());
		}

		return Texture2DMultisample::getTextureTarget();
	};

	// void osg::Texture2DMultisample::setImage(unsigned int face, osg::Image * image)
	void setImage(unsigned int face, osg::Image * image) {
		if(_obj.pushFunction("setImage")) {
			_obj.pushArg(face);
			_obj.pushArg(image);
			return (_obj.callFunction<void>());
		}

		return Texture2DMultisample::setImage(face, image);
	};

	// osg::Image * osg::Texture2DMultisample::getImage(unsigned int face)
	osg::Image * getImage(unsigned int face) {
		if(_obj.pushFunction("getImage")) {
			_obj.pushArg(face);
			return (_obj.callFunction<osg::Image*>());
		}

		return Texture2DMultisample::getImage(face);
	};

	// const osg::Image * osg::Texture2DMultisample::getImage(unsigned int face) const
	const osg::Image * getImage(unsigned int face) const {
		if(_obj.pushFunction("getImage")) {
			_obj.pushArg(face);
			return (_obj.callFunction<osg::Image*>());
		}

		return Texture2DMultisample::getImage(face);
	};

	// unsigned int osg::Texture2DMultisample::getNumImages() const
	unsigned int getNumImages() const {
		if(_obj.pushFunction("getNumImages")) {
			return (_obj.callFunction<unsigned int>());
		}

		return Texture2DMultisample::getNumImages();
	};

	// void osg::Texture2DMultisample::allocateMipmap(osg::State & state) const
	void allocateMipmap(osg::State & state) const {
		if(_obj.pushFunction("allocateMipmap")) {
			_obj.pushArg(&state);
			return (_obj.callFunction<void>());
		}

		return Texture2DMultisample::allocateMipmap(state);
	};

	// int osg::Texture2DMultisample::getTextureWidth() const
	int getTextureWidth() const {
		if(_obj.pushFunction("getTextureWidth")) {
			return (_obj.callFunction<int>());
		}

		return Texture2DMultisample::getTextureWidth();
	};

	// int osg::Texture2DMultisample::getTextureHeight() const
	int getTextureHeight() const {
		if(_obj.pushFunction("getTextureHeight")) {
			return (_obj.callFunction<int>());
		}

		return Texture2DMultisample::getTextureHeight();
	};

	// int osg::Texture2DMultisample::getTextureDepth() const
	int getTextureDepth() const {
		if(_obj.pushFunction("getTextureDepth")) {
			return (_obj.callFunction<int>());
		}

		return Texture2DMultisample::getTextureDepth();
	};

	// void osg::Texture2DMultisample::apply(osg::State & state) const
	void apply(osg::State & state) const {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&state);
			return (_obj.callFunction<void>());
		}

		return Texture2DMultisample::apply(state);
	};


protected:
	// void osg::Texture2DMultisample::computeInternalFormat() const
	void computeInternalFormat() const {
		if(_obj.pushFunction("computeInternalFormat")) {
			return (_obj.callFunction<void>());
		}

		return Texture2DMultisample::computeInternalFormat();
	};


};




#endif

