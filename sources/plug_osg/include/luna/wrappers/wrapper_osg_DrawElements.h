#ifndef _WRAPPERS_WRAPPER_OSG_DRAWELEMENTS_H_
#define _WRAPPERS_WRAPPER_OSG_DRAWELEMENTS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/PrimitiveSet>

class wrapper_osg_DrawElements : public osg::DrawElements, public luna_wrapper_base {

public:
	

	wrapper_osg_DrawElements(lua_State* L, lua_Table* dum, osg::PrimitiveSet::Type primType = osg::PrimitiveSet::PrimitiveType, unsigned int mode = 0, int numInstances = 0) : osg::DrawElements(primType, mode, numInstances), luna_wrapper_base(L) {};
	wrapper_osg_DrawElements(lua_State* L, lua_Table* dum, const osg::DrawElements & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::DrawElements(copy, copyop), luna_wrapper_base(L) {};

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

		return DrawElements::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return DrawElements::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return DrawElements::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return DrawElements::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return DrawElements::getUserData();
	};

	// void osg::BufferData::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return DrawElements::releaseGLObjects(state);
	};

	// bool osg::PrimitiveSet::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return DrawElements::isSameKindAs(obj);
	};

	// const char * osg::PrimitiveSet::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return DrawElements::libraryName();
	};

	// const char * osg::PrimitiveSet::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return DrawElements::className();
	};

	// const void * osg::PrimitiveSet::getDataPointer() const
	const void * getDataPointer() const {
		if(_obj.pushFunction("getDataPointer")) {
			return (_obj.callFunction<void*>());
		}

		return DrawElements::getDataPointer();
	};

	// unsigned int osg::PrimitiveSet::getTotalDataSize() const
	unsigned int getTotalDataSize() const {
		if(_obj.pushFunction("getTotalDataSize")) {
			return (_obj.callFunction<unsigned int>());
		}

		return DrawElements::getTotalDataSize();
	};

	// bool osg::PrimitiveSet::supportsBufferObject() const
	bool supportsBufferObject() const {
		if(_obj.pushFunction("supportsBufferObject")) {
			return (_obj.callFunction<bool>());
		}

		return DrawElements::supportsBufferObject();
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

		return DrawElements::getNumPrimitives();
	};

	// void osg::PrimitiveSet::computeRange() const
	void computeRange() const {
		if(_obj.pushFunction("computeRange")) {
			return (_obj.callFunction<void>());
		}

		return DrawElements::computeRange();
	};

	// osg::DrawElements * osg::DrawElements::getDrawElements()
	osg::DrawElements * getDrawElements() {
		if(_obj.pushFunction("getDrawElements")) {
			return (_obj.callFunction<osg::DrawElements*>());
		}

		return DrawElements::getDrawElements();
	};

	// const osg::DrawElements * osg::DrawElements::getDrawElements() const
	const osg::DrawElements * getDrawElements() const {
		if(_obj.pushFunction("getDrawElements")) {
			return (_obj.callFunction<osg::DrawElements*>());
		}

		return DrawElements::getDrawElements();
	};

	// void osg::DrawElements::reserveElements(unsigned int numIndices)
	void reserveElements(unsigned int numIndices) {
		THROW_IF(!_obj.pushFunction("reserveElements"),"No implementation for abstract function osg::DrawElements::reserveElements");
		_obj.pushArg(numIndices);
		return (_obj.callFunction<void>());
	};

	// void osg::DrawElements::setElement(unsigned int arg1, unsigned int arg2)
	void setElement(unsigned int arg1, unsigned int arg2) {
		THROW_IF(!_obj.pushFunction("setElement"),"No implementation for abstract function osg::DrawElements::setElement");
		_obj.pushArg(arg1);
		_obj.pushArg(arg2);
		return (_obj.callFunction<void>());
	};

	// unsigned int osg::DrawElements::getElement(unsigned int arg1)
	unsigned int getElement(unsigned int arg1) {
		THROW_IF(!_obj.pushFunction("getElement"),"No implementation for abstract function osg::DrawElements::getElement");
		_obj.pushArg(arg1);
		return (_obj.callFunction<unsigned int>());
	};

	// void osg::DrawElements::addElement(unsigned int arg1)
	void addElement(unsigned int arg1) {
		THROW_IF(!_obj.pushFunction("addElement"),"No implementation for abstract function osg::DrawElements::addElement");
		_obj.pushArg(arg1);
		return (_obj.callFunction<void>());
	};




};




#endif

