#ifndef _WRAPPERS_WRAPPER_OSG_STENCILTWOSIDED_H_
#define _WRAPPERS_WRAPPER_OSG_STENCILTWOSIDED_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/StencilTwoSided>

class wrapper_osg_StencilTwoSided : public osg::StencilTwoSided, public luna_wrapper_base {

public:
		

	~wrapper_osg_StencilTwoSided() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_StencilTwoSided(lua_State* L, lua_Table* dum) : osg::StencilTwoSided(), luna_wrapper_base(L) {};
	wrapper_osg_StencilTwoSided(lua_State* L, lua_Table* dum, const osg::StencilTwoSided & stencil, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::StencilTwoSided(stencil, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return StencilTwoSided::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return StencilTwoSided::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return StencilTwoSided::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return StencilTwoSided::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return StencilTwoSided::getUserData();
	};

	// osg::Texture * osg::StateAttribute::asTexture()
	osg::Texture * asTexture() {
		if(_obj.pushFunction("asTexture")) {
			return (_obj.callFunction<osg::Texture*>());
		}

		return StencilTwoSided::asTexture();
	};

	// const osg::Texture * osg::StateAttribute::asTexture() const
	const osg::Texture * asTexture() const {
		if(_obj.pushFunction("asTexture")) {
			return (_obj.callFunction<osg::Texture*>());
		}

		return StencilTwoSided::asTexture();
	};

	// unsigned int osg::StateAttribute::getMember() const
	unsigned int getMember() const {
		if(_obj.pushFunction("getMember")) {
			return (_obj.callFunction<unsigned int>());
		}

		return StencilTwoSided::getMember();
	};

	// bool osg::StateAttribute::isTextureAttribute() const
	bool isTextureAttribute() const {
		if(_obj.pushFunction("isTextureAttribute")) {
			return (_obj.callFunction<bool>());
		}

		return StencilTwoSided::isTextureAttribute();
	};

	// bool osg::StateAttribute::checkValidityOfAssociatedModes(osg::State & arg1) const
	bool checkValidityOfAssociatedModes(osg::State & arg1) const {
		if(_obj.pushFunction("checkValidityOfAssociatedModes")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return StencilTwoSided::checkValidityOfAssociatedModes(arg1);
	};

	// void osg::StateAttribute::compileGLObjects(osg::State & arg1) const
	void compileGLObjects(osg::State & arg1) const {
		if(_obj.pushFunction("compileGLObjects")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return StencilTwoSided::compileGLObjects(arg1);
	};

	// void osg::StateAttribute::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return StencilTwoSided::releaseGLObjects(arg1);
	};

	// osg::Object * osg::StencilTwoSided::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return StencilTwoSided::cloneType();
	};

	// osg::Object * osg::StencilTwoSided::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return StencilTwoSided::clone(arg1);
	};

	// bool osg::StencilTwoSided::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return StencilTwoSided::isSameKindAs(obj);
	};

	// const char * osg::StencilTwoSided::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return StencilTwoSided::libraryName();
	};

	// const char * osg::StencilTwoSided::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return StencilTwoSided::className();
	};

	// osg::StateAttribute::Type osg::StencilTwoSided::getType() const
	osg::StateAttribute::Type getType() const {
		if(_obj.pushFunction("getType")) {
			return (osg::StateAttribute::Type)(_obj.callFunction<int>());
		}

		return StencilTwoSided::getType();
	};

	// int osg::StencilTwoSided::compare(const osg::StateAttribute & sa) const
	int compare(const osg::StateAttribute & sa) const {
		if(_obj.pushFunction("compare")) {
			_obj.pushArg(&sa);
			return (_obj.callFunction<int>());
		}

		return StencilTwoSided::compare(sa);
	};

	// bool osg::StencilTwoSided::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	bool getModeUsage(osg::StateAttribute::ModeUsage & arg1) const {
		if(_obj.pushFunction("getModeUsage")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return StencilTwoSided::getModeUsage(arg1);
	};

	// void osg::StencilTwoSided::apply(osg::State & arg1) const
	void apply(osg::State & arg1) const {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return StencilTwoSided::apply(arg1);
	};




};




#endif

