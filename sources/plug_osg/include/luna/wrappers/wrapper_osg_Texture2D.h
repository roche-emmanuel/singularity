#ifndef _WRAPPERS_WRAPPER_OSG_TEXTURE_D_H_
#define _WRAPPERS_WRAPPER_OSG_TEXTURE_D_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Texture2D>

class wrapper_osg_Texture2D : public osg::Texture2D {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_Texture2D(lua_State* L, lua_Table* dum) : osg::Texture2D(), _obj(L,-1) {};
	wrapper_osg_Texture2D(lua_State* L, lua_Table* dum, osg::Image * image) : osg::Texture2D(image), _obj(L,-1) {};
	wrapper_osg_Texture2D(lua_State* L, lua_Table* dum, const osg::Texture2D & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::Texture2D(text, copyop), _obj(L,-1) {};

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

	// osg::Object * osg::Texture2D::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::Texture2D::cloneType();
	};

	// osg::Object * osg::Texture2D::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::Texture2D::clone(arg1);
	};

	// bool osg::Texture2D::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osg::Texture2D::isSameKindAs(obj);
	};

	// const char * osg::Texture2D::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::Texture2D::libraryName();
	};

	// const char * osg::Texture2D::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::Texture2D::className();
	};

	// osg::StateAttribute::Type osg::Texture2D::getType() const
	osg::StateAttribute::Type getType() const {
		if(_obj.pushFunction("getType")) {
			return (osg::StateAttribute::Type)(_obj.callFunction<int>());
		}

		return osg::Texture2D::getType();
	};

	// int osg::Texture2D::compare(const osg::StateAttribute & rhs) const
	int compare(const osg::StateAttribute & rhs) const {
		if(_obj.pushFunction("compare")) {
			_obj.pushArg(&rhs);
			return (_obj.callFunction<int>());
		}

		return osg::Texture2D::compare(rhs);
	};

	// unsigned int osg::Texture2D::getTextureTarget() const
	unsigned int getTextureTarget() const {
		if(_obj.pushFunction("getTextureTarget")) {
			return (_obj.callFunction<unsigned int>());
		}

		return osg::Texture2D::getTextureTarget();
	};

	// void osg::Texture2D::setImage(unsigned int arg1, osg::Image * image)
	void setImage(unsigned int arg1, osg::Image * image) {
		if(_obj.pushFunction("setImage")) {
			_obj.pushArg(arg1);
			_obj.pushArg(image);
			return (_obj.callFunction<void>());
		}

		return osg::Texture2D::setImage(arg1, image);
	};

	// osg::Image * osg::Texture2D::getImage(unsigned int arg1)
	osg::Image * getImage(unsigned int arg1) {
		if(_obj.pushFunction("getImage")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<osg::Image*>());
		}

		return osg::Texture2D::getImage(arg1);
	};

	// const osg::Image * osg::Texture2D::getImage(unsigned int arg1) const
	const osg::Image * getImage(unsigned int arg1) const {
		if(_obj.pushFunction("getImage")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<osg::Image*>());
		}

		return osg::Texture2D::getImage(arg1);
	};

	// unsigned int osg::Texture2D::getNumImages() const
	unsigned int getNumImages() const {
		if(_obj.pushFunction("getNumImages")) {
			return (_obj.callFunction<unsigned int>());
		}

		return osg::Texture2D::getNumImages();
	};

	// int osg::Texture2D::getTextureWidth() const
	int getTextureWidth() const {
		if(_obj.pushFunction("getTextureWidth")) {
			return (_obj.callFunction<int>());
		}

		return osg::Texture2D::getTextureWidth();
	};

	// int osg::Texture2D::getTextureHeight() const
	int getTextureHeight() const {
		if(_obj.pushFunction("getTextureHeight")) {
			return (_obj.callFunction<int>());
		}

		return osg::Texture2D::getTextureHeight();
	};

	// int osg::Texture2D::getTextureDepth() const
	int getTextureDepth() const {
		if(_obj.pushFunction("getTextureDepth")) {
			return (_obj.callFunction<int>());
		}

		return osg::Texture2D::getTextureDepth();
	};

	// void osg::Texture2D::apply(osg::State & state) const
	void apply(osg::State & state) const {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&state);
			return (_obj.callFunction<void>());
		}

		return osg::Texture2D::apply(state);
	};


protected:
	// void osg::Texture2D::computeInternalFormat() const
	// void osg::Texture2D::allocateMipmap(osg::State & state) const

};




#endif

