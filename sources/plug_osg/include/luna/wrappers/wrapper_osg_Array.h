#ifndef _WRAPPERS_WRAPPER_OSG_ARRAY_H_
#define _WRAPPERS_WRAPPER_OSG_ARRAY_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Array>

class wrapper_osg_Array : public osg::Array, public luna_wrapper_base {

public:
		

	~wrapper_osg_Array() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_Array(lua_State* L, lua_Table* dum, osg::Array::Type arrayType = osg::Array::ArrayType, int dataSize = 0, unsigned int dataType = 0) : osg::Array(arrayType, dataSize, dataType), luna_wrapper_base(L) {};
	wrapper_osg_Array(lua_State* L, lua_Table* dum, const osg::Array & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::Array(array, copyop), luna_wrapper_base(L) {};

	// osg::Object * osg::Object::cloneType() const
	osg::Object * cloneType() const {
		THROW_IF(!_obj.pushFunction("cloneType"),"No implementation for abstract function osg::Object::cloneType");
		return (_obj.callFunction<osg::Object*>());
	};

	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		THROW_IF(!_obj.pushFunction("clone"),"No implementation for abstract function osg::Object::clone");
		_obj.pushArg(&arg1);
		return (_obj.callFunction<osg::Object*>());
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Array::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return Array::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Array::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Array::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Array::getUserData();
	};

	// void osg::BufferData::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return Array::releaseGLObjects(state);
	};

	// bool osg::Array::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Array::isSameKindAs(obj);
	};

	// const char * osg::Array::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return Array::libraryName();
	};

	// const char * osg::Array::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return Array::className();
	};

	// void osg::Array::accept(osg::ArrayVisitor & arg1)
	void accept(osg::ArrayVisitor & arg1) {
		THROW_IF(!_obj.pushFunction("accept"),"No implementation for abstract function osg::Array::accept");
		_obj.pushArg(&arg1);
		return (_obj.callFunction<void>());
	};

	// void osg::Array::accept(osg::ConstArrayVisitor & arg1) const
	void accept(osg::ConstArrayVisitor & arg1) const {
		THROW_IF(!_obj.pushFunction("accept"),"No implementation for abstract function osg::Array::accept");
		_obj.pushArg(&arg1);
		return (_obj.callFunction<void>());
	};

	// void osg::Array::accept(unsigned int index, osg::ValueVisitor & arg2)
	void accept(unsigned int index, osg::ValueVisitor & arg2) {
		THROW_IF(!_obj.pushFunction("accept"),"No implementation for abstract function osg::Array::accept");
		_obj.pushArg(index);
		_obj.pushArg(&arg2);
		return (_obj.callFunction<void>());
	};

	// void osg::Array::accept(unsigned int index, osg::ConstValueVisitor & arg2) const
	void accept(unsigned int index, osg::ConstValueVisitor & arg2) const {
		THROW_IF(!_obj.pushFunction("accept"),"No implementation for abstract function osg::Array::accept");
		_obj.pushArg(index);
		_obj.pushArg(&arg2);
		return (_obj.callFunction<void>());
	};

	// int osg::Array::compare(unsigned int lhs, unsigned int rhs) const
	int compare(unsigned int lhs, unsigned int rhs) const {
		THROW_IF(!_obj.pushFunction("compare"),"No implementation for abstract function osg::Array::compare");
		_obj.pushArg(lhs);
		_obj.pushArg(rhs);
		return (_obj.callFunction<int>());
	};

	// const void * osg::Array::getDataPointer() const
	const void * getDataPointer() const {
		THROW_IF(!_obj.pushFunction("getDataPointer"),"No implementation for abstract function osg::Array::getDataPointer");
		return (_obj.callFunction<void*>());
	};

	// unsigned int osg::Array::getTotalDataSize() const
	unsigned int getTotalDataSize() const {
		THROW_IF(!_obj.pushFunction("getTotalDataSize"),"No implementation for abstract function osg::Array::getTotalDataSize");
		return (_obj.callFunction<unsigned int>());
	};

	// unsigned int osg::Array::getNumElements() const
	unsigned int getNumElements() const {
		THROW_IF(!_obj.pushFunction("getNumElements"),"No implementation for abstract function osg::Array::getNumElements");
		return (_obj.callFunction<unsigned int>());
	};

	// void osg::Array::trim()
	void trim() {
		if(_obj.pushFunction("trim")) {
			return (_obj.callFunction<void>());
		}

		return Array::trim();
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

