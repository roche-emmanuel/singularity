#ifndef _WRAPPERS_WRAPPER_OSG_PRIMITIVESET_H_
#define _WRAPPERS_WRAPPER_OSG_PRIMITIVESET_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/PrimitiveSet>

class wrapper_osg_PrimitiveSet : public osg::PrimitiveSet {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_PrimitiveSet(lua_State* L, lua_Table* dum, osg::PrimitiveSet::Type primType = osg::PrimitiveSet::PrimitiveType, unsigned int mode = 0, int numInstances = 0) : osg::PrimitiveSet(primType, mode, numInstances), _obj(L,-1) {};
	wrapper_osg_PrimitiveSet(lua_State* L, lua_Table* dum, const osg::PrimitiveSet & prim, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::PrimitiveSet(prim, copyop), _obj(L,-1) {};

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

		return PrimitiveSet::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return PrimitiveSet::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return PrimitiveSet::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return PrimitiveSet::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return PrimitiveSet::getUserData();
	};

	// void osg::BufferData::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return PrimitiveSet::releaseGLObjects(state);
	};

	// bool osg::PrimitiveSet::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return PrimitiveSet::isSameKindAs(obj);
	};

	// const char * osg::PrimitiveSet::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return PrimitiveSet::libraryName();
	};

	// const char * osg::PrimitiveSet::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return PrimitiveSet::className();
	};

	// const void * osg::PrimitiveSet::getDataPointer() const
	const void * getDataPointer() const {
		if(_obj.pushFunction("getDataPointer")) {
			return (_obj.callFunction<void*>());
		}

		return PrimitiveSet::getDataPointer();
	};

	// unsigned int osg::PrimitiveSet::getTotalDataSize() const
	unsigned int getTotalDataSize() const {
		if(_obj.pushFunction("getTotalDataSize")) {
			return (_obj.callFunction<unsigned int>());
		}

		return PrimitiveSet::getTotalDataSize();
	};

	// bool osg::PrimitiveSet::supportsBufferObject() const
	bool supportsBufferObject() const {
		if(_obj.pushFunction("supportsBufferObject")) {
			return (_obj.callFunction<bool>());
		}

		return PrimitiveSet::supportsBufferObject();
	};

	// osg::DrawElements * osg::PrimitiveSet::getDrawElements()
	osg::DrawElements * getDrawElements() {
		if(_obj.pushFunction("getDrawElements")) {
			return (_obj.callFunction<osg::DrawElements*>());
		}

		return PrimitiveSet::getDrawElements();
	};

	// const osg::DrawElements * osg::PrimitiveSet::getDrawElements() const
	const osg::DrawElements * getDrawElements() const {
		if(_obj.pushFunction("getDrawElements")) {
			return (_obj.callFunction<osg::DrawElements*>());
		}

		return PrimitiveSet::getDrawElements();
	};

	// void osg::PrimitiveSet::draw(osg::State & state, bool useVertexBufferObjects) const
	void draw(osg::State & state, bool useVertexBufferObjects) const {
		THROW_IF(!_obj.pushFunction("draw"),"No implementation for abstract function osg::PrimitiveSet::draw");
		_obj.pushArg(&state);
		_obj.pushArg(useVertexBufferObjects);
		return (_obj.callFunction<void>());
	};

	// unsigned int osg::PrimitiveSet::index(unsigned int pos) const
	unsigned int index(unsigned int pos) const {
		THROW_IF(!_obj.pushFunction("index"),"No implementation for abstract function osg::PrimitiveSet::index");
		_obj.pushArg(pos);
		return (_obj.callFunction<unsigned int>());
	};

	// unsigned int osg::PrimitiveSet::getNumIndices() const
	unsigned int getNumIndices() const {
		THROW_IF(!_obj.pushFunction("getNumIndices"),"No implementation for abstract function osg::PrimitiveSet::getNumIndices");
		return (_obj.callFunction<unsigned int>());
	};

	// void osg::PrimitiveSet::offsetIndices(int offset)
	void offsetIndices(int offset) {
		THROW_IF(!_obj.pushFunction("offsetIndices"),"No implementation for abstract function osg::PrimitiveSet::offsetIndices");
		_obj.pushArg(offset);
		return (_obj.callFunction<void>());
	};

	// unsigned int osg::PrimitiveSet::getNumPrimitives() const
	unsigned int getNumPrimitives() const {
		if(_obj.pushFunction("getNumPrimitives")) {
			return (_obj.callFunction<unsigned int>());
		}

		return PrimitiveSet::getNumPrimitives();
	};

	// void osg::PrimitiveSet::computeRange() const
	void computeRange() const {
		if(_obj.pushFunction("computeRange")) {
			return (_obj.callFunction<void>());
		}

		return PrimitiveSet::computeRange();
	};




};




#endif

