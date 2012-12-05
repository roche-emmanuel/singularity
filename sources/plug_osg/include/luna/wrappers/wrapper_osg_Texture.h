#ifndef _WRAPPERS_WRAPPER_OSG_TEXTURE_H_
#define _WRAPPERS_WRAPPER_OSG_TEXTURE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Texture>

class wrapper_osg_Texture : public osg::Texture {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_Texture(lua_State* L, lua_Table* dum) : osg::Texture(), _obj(L,-1) {};
	wrapper_osg_Texture(lua_State* L, lua_Table* dum, const osg::Texture & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::Texture(text, copyop), _obj(L,-1) {};

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

	// int osg::StateAttribute::compare(const osg::StateAttribute & sa) const
	int compare(const osg::StateAttribute & sa) const {
		THROW_IF(!_obj.pushFunction("compare"),"No implementation for abstract function osg::StateAttribute::compare");
		_obj.pushArg(&sa);
		return (_obj.callFunction<int>());
	};

	// bool osg::StateAttribute::checkValidityOfAssociatedModes(osg::State & arg1) const
	bool checkValidityOfAssociatedModes(osg::State & arg1) const {
		if(_obj.pushFunction("checkValidityOfAssociatedModes")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return osg::StateAttribute::checkValidityOfAssociatedModes(arg1);
	};

	// osg::Object * osg::Texture::cloneType() const
	osg::Object * cloneType() const {
		THROW_IF(!_obj.pushFunction("cloneType"),"No implementation for abstract function osg::Texture::cloneType");
		return (_obj.callFunction<osg::Object*>());
	};

	// osg::Object * osg::Texture::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		THROW_IF(!_obj.pushFunction("clone"),"No implementation for abstract function osg::Texture::clone");
		_obj.pushArg(&arg1);
		return (_obj.callFunction<osg::Object*>());
	};

	// bool osg::Texture::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osg::Texture::isSameKindAs(obj);
	};

	// const char * osg::Texture::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::Texture::libraryName();
	};

	// const char * osg::Texture::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::Texture::className();
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

	// osg::StateAttribute::Type osg::Texture::getType() const
	osg::StateAttribute::Type getType() const {
		if(_obj.pushFunction("getType")) {
			return (osg::StateAttribute::Type)(_obj.callFunction<int>());
		}

		return osg::Texture::getType();
	};

	// bool osg::Texture::isTextureAttribute() const
	bool isTextureAttribute() const {
		if(_obj.pushFunction("isTextureAttribute")) {
			return (_obj.callFunction<bool>());
		}

		return osg::Texture::isTextureAttribute();
	};

	// unsigned int osg::Texture::getTextureTarget() const
	unsigned int getTextureTarget() const {
		THROW_IF(!_obj.pushFunction("getTextureTarget"),"No implementation for abstract function osg::Texture::getTextureTarget");
		return (_obj.callFunction<unsigned int>());
	};

	// bool osg::Texture::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	bool getModeUsage(osg::StateAttribute::ModeUsage & arg1) const {
		if(_obj.pushFunction("getModeUsage")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return osg::Texture::getModeUsage(arg1);
	};

	// int osg::Texture::getTextureWidth() const
	int getTextureWidth() const {
		if(_obj.pushFunction("getTextureWidth")) {
			return (_obj.callFunction<int>());
		}

		return osg::Texture::getTextureWidth();
	};

	// int osg::Texture::getTextureHeight() const
	int getTextureHeight() const {
		if(_obj.pushFunction("getTextureHeight")) {
			return (_obj.callFunction<int>());
		}

		return osg::Texture::getTextureHeight();
	};

	// int osg::Texture::getTextureDepth() const
	int getTextureDepth() const {
		if(_obj.pushFunction("getTextureDepth")) {
			return (_obj.callFunction<int>());
		}

		return osg::Texture::getTextureDepth();
	};

	// void osg::Texture::setImage(unsigned int face, osg::Image * image)
	void setImage(unsigned int face, osg::Image * image) {
		THROW_IF(!_obj.pushFunction("setImage"),"No implementation for abstract function osg::Texture::setImage");
		_obj.pushArg(face);
		_obj.pushArg(image);
		return (_obj.callFunction<void>());
	};

	// osg::Image * osg::Texture::getImage(unsigned int face)
	osg::Image * getImage(unsigned int face) {
		THROW_IF(!_obj.pushFunction("getImage"),"No implementation for abstract function osg::Texture::getImage");
		_obj.pushArg(face);
		return (_obj.callFunction<osg::Image*>());
	};

	// const osg::Image * osg::Texture::getImage(unsigned int face) const
	const osg::Image * getImage(unsigned int face) const {
		THROW_IF(!_obj.pushFunction("getImage"),"No implementation for abstract function osg::Texture::getImage");
		_obj.pushArg(face);
		return (_obj.callFunction<osg::Image*>());
	};

	// unsigned int osg::Texture::getNumImages() const
	unsigned int getNumImages() const {
		THROW_IF(!_obj.pushFunction("getNumImages"),"No implementation for abstract function osg::Texture::getNumImages");
		return (_obj.callFunction<unsigned int>());
	};

	// void osg::Texture::apply(osg::State & state) const
	void apply(osg::State & state) const {
		THROW_IF(!_obj.pushFunction("apply"),"No implementation for abstract function osg::Texture::apply");
		_obj.pushArg(&state);
		return (_obj.callFunction<void>());
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


protected:
	// void osg::Texture::computeInternalFormat() const
	// void osg::Texture::allocateMipmap(osg::State & state) const

};




#endif

