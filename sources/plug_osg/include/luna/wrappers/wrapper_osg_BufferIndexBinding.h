#ifndef _WRAPPERS_WRAPPER_OSG_BUFFERINDEXBINDING_H_
#define _WRAPPERS_WRAPPER_OSG_BUFFERINDEXBINDING_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/BufferIndexBinding>

class wrapper_osg_BufferIndexBinding : public osg::BufferIndexBinding, public luna_wrapper_base {

public:
		

	~wrapper_osg_BufferIndexBinding() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_BufferIndexBinding(lua_State* L, lua_Table* dum, unsigned int target, unsigned int index) : osg::BufferIndexBinding(target, index), luna_wrapper_base(L) {};
	wrapper_osg_BufferIndexBinding(lua_State* L, lua_Table* dum, unsigned int target, unsigned int index, osg::BufferObject * bo, int offset, int size) : osg::BufferIndexBinding(target, index, bo, offset, size), luna_wrapper_base(L) {};
	wrapper_osg_BufferIndexBinding(lua_State* L, lua_Table* dum, const osg::BufferIndexBinding & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::BufferIndexBinding(rhs, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return BufferIndexBinding::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return BufferIndexBinding::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return BufferIndexBinding::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return BufferIndexBinding::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return BufferIndexBinding::getUserData();
	};

	// osg::Object * osg::StateAttribute::cloneType() const
	osg::Object * cloneType() const {
		THROW_IF(!_obj.pushFunction("cloneType"),"No implementation for abstract function osg::StateAttribute::cloneType");
		return (_obj.callFunction<osg::Object*>());
	};

	// osg::Object * osg::StateAttribute::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		THROW_IF(!_obj.pushFunction("clone"),"No implementation for abstract function osg::StateAttribute::clone");
		_obj.pushArg(&arg1);
		return (_obj.callFunction<osg::Object*>());
	};

	// bool osg::StateAttribute::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return BufferIndexBinding::isSameKindAs(obj);
	};

	// const char * osg::StateAttribute::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return BufferIndexBinding::libraryName();
	};

	// const char * osg::StateAttribute::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return BufferIndexBinding::className();
	};

	// osg::Texture * osg::StateAttribute::asTexture()
	osg::Texture * asTexture() {
		if(_obj.pushFunction("asTexture")) {
			return (_obj.callFunction<osg::Texture*>());
		}

		return BufferIndexBinding::asTexture();
	};

	// const osg::Texture * osg::StateAttribute::asTexture() const
	const osg::Texture * asTexture() const {
		if(_obj.pushFunction("asTexture")) {
			return (_obj.callFunction<osg::Texture*>());
		}

		return BufferIndexBinding::asTexture();
	};

	// osg::StateAttribute::Type osg::StateAttribute::getType() const
	osg::StateAttribute::Type getType() const {
		THROW_IF(!_obj.pushFunction("getType"),"No implementation for abstract function osg::StateAttribute::getType");
		return (osg::StateAttribute::Type)(_obj.callFunction<int>());
	};

	// bool osg::StateAttribute::isTextureAttribute() const
	bool isTextureAttribute() const {
		if(_obj.pushFunction("isTextureAttribute")) {
			return (_obj.callFunction<bool>());
		}

		return BufferIndexBinding::isTextureAttribute();
	};

	// int osg::StateAttribute::compare(const osg::StateAttribute & sa) const
	int compare(const osg::StateAttribute & sa) const {
		THROW_IF(!_obj.pushFunction("compare"),"No implementation for abstract function osg::StateAttribute::compare");
		_obj.pushArg(&sa);
		return (_obj.callFunction<int>());
	};

	// bool osg::StateAttribute::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	bool getModeUsage(osg::StateAttribute::ModeUsage & arg1) const {
		if(_obj.pushFunction("getModeUsage")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return BufferIndexBinding::getModeUsage(arg1);
	};

	// bool osg::StateAttribute::checkValidityOfAssociatedModes(osg::State & arg1) const
	bool checkValidityOfAssociatedModes(osg::State & arg1) const {
		if(_obj.pushFunction("checkValidityOfAssociatedModes")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return BufferIndexBinding::checkValidityOfAssociatedModes(arg1);
	};

	// void osg::StateAttribute::compileGLObjects(osg::State & arg1) const
	void compileGLObjects(osg::State & arg1) const {
		if(_obj.pushFunction("compileGLObjects")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return BufferIndexBinding::compileGLObjects(arg1);
	};

	// void osg::StateAttribute::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return BufferIndexBinding::releaseGLObjects(arg1);
	};

	// unsigned int osg::BufferIndexBinding::getMember() const
	unsigned int getMember() const {
		if(_obj.pushFunction("getMember")) {
			return (_obj.callFunction<unsigned>());
		}

		return BufferIndexBinding::getMember();
	};

	// void osg::BufferIndexBinding::apply(osg::State & arg1) const
	void apply(osg::State & arg1) const {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return BufferIndexBinding::apply(arg1);
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

