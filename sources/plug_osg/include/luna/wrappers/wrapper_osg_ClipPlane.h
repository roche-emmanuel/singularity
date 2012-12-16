#ifndef _WRAPPERS_WRAPPER_OSG_CLIPPLANE_H_
#define _WRAPPERS_WRAPPER_OSG_CLIPPLANE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/ClipPlane>

class wrapper_osg_ClipPlane : public osg::ClipPlane, public luna_wrapper_base {

public:
	

	wrapper_osg_ClipPlane(lua_State* L, lua_Table* dum) : osg::ClipPlane(), luna_wrapper_base(L) {};
	wrapper_osg_ClipPlane(lua_State* L, lua_Table* dum, unsigned int no) : osg::ClipPlane(no), luna_wrapper_base(L) {};
	wrapper_osg_ClipPlane(lua_State* L, lua_Table* dum, unsigned int no, const osg::Vec4d & plane) : osg::ClipPlane(no, plane), luna_wrapper_base(L) {};
	wrapper_osg_ClipPlane(lua_State* L, lua_Table* dum, unsigned int no, const osg::Plane & plane) : osg::ClipPlane(no, plane), luna_wrapper_base(L) {};
	wrapper_osg_ClipPlane(lua_State* L, lua_Table* dum, unsigned int no, double a, double b, double c, double d) : osg::ClipPlane(no, a, b, c, d), luna_wrapper_base(L) {};
	wrapper_osg_ClipPlane(lua_State* L, lua_Table* dum, const osg::ClipPlane & cp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::ClipPlane(cp, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return ClipPlane::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return ClipPlane::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return ClipPlane::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ClipPlane::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ClipPlane::getUserData();
	};

	// osg::Texture * osg::StateAttribute::asTexture()
	osg::Texture * asTexture() {
		if(_obj.pushFunction("asTexture")) {
			return (_obj.callFunction<osg::Texture*>());
		}

		return ClipPlane::asTexture();
	};

	// const osg::Texture * osg::StateAttribute::asTexture() const
	const osg::Texture * asTexture() const {
		if(_obj.pushFunction("asTexture")) {
			return (_obj.callFunction<osg::Texture*>());
		}

		return ClipPlane::asTexture();
	};

	// bool osg::StateAttribute::isTextureAttribute() const
	bool isTextureAttribute() const {
		if(_obj.pushFunction("isTextureAttribute")) {
			return (_obj.callFunction<bool>());
		}

		return ClipPlane::isTextureAttribute();
	};

	// bool osg::StateAttribute::checkValidityOfAssociatedModes(osg::State & arg1) const
	bool checkValidityOfAssociatedModes(osg::State & arg1) const {
		if(_obj.pushFunction("checkValidityOfAssociatedModes")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return ClipPlane::checkValidityOfAssociatedModes(arg1);
	};

	// void osg::StateAttribute::compileGLObjects(osg::State & arg1) const
	void compileGLObjects(osg::State & arg1) const {
		if(_obj.pushFunction("compileGLObjects")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ClipPlane::compileGLObjects(arg1);
	};

	// void osg::StateAttribute::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ClipPlane::releaseGLObjects(arg1);
	};

	// osg::Object * osg::ClipPlane::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return ClipPlane::cloneType();
	};

	// osg::Object * osg::ClipPlane::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return ClipPlane::clone(arg1);
	};

	// bool osg::ClipPlane::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return ClipPlane::isSameKindAs(obj);
	};

	// const char * osg::ClipPlane::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return ClipPlane::libraryName();
	};

	// const char * osg::ClipPlane::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return ClipPlane::className();
	};

	// osg::StateAttribute::Type osg::ClipPlane::getType() const
	osg::StateAttribute::Type getType() const {
		if(_obj.pushFunction("getType")) {
			return (osg::StateAttribute::Type)(_obj.callFunction<int>());
		}

		return ClipPlane::getType();
	};

	// int osg::ClipPlane::compare(const osg::StateAttribute & sa) const
	int compare(const osg::StateAttribute & sa) const {
		if(_obj.pushFunction("compare")) {
			_obj.pushArg(&sa);
			return (_obj.callFunction<int>());
		}

		return ClipPlane::compare(sa);
	};

	// unsigned int osg::ClipPlane::getMember() const
	unsigned int getMember() const {
		if(_obj.pushFunction("getMember")) {
			return (_obj.callFunction<unsigned int>());
		}

		return ClipPlane::getMember();
	};

	// bool osg::ClipPlane::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	bool getModeUsage(osg::StateAttribute::ModeUsage & arg1) const {
		if(_obj.pushFunction("getModeUsage")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return ClipPlane::getModeUsage(arg1);
	};

	// void osg::ClipPlane::apply(osg::State & state) const
	void apply(osg::State & state) const {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&state);
			return (_obj.callFunction<void>());
		}

		return ClipPlane::apply(state);
	};




};




#endif

