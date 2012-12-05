#ifndef _WRAPPERS_WRAPPER_OSG_DRAWELEMENTSUSHORT_H_
#define _WRAPPERS_WRAPPER_OSG_DRAWELEMENTSUSHORT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/PrimitiveSet>

class wrapper_osg_DrawElementsUShort : public osg::DrawElementsUShort {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_DrawElementsUShort(lua_State* L, lua_Table* dum, unsigned int mode = 0) : osg::DrawElementsUShort(mode), _obj(L,-1) {};
	wrapper_osg_DrawElementsUShort(lua_State* L, lua_Table* dum, const osg::DrawElementsUShort & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::DrawElementsUShort(array, copyop), _obj(L,-1) {};
	wrapper_osg_DrawElementsUShort(lua_State* L, lua_Table* dum, unsigned int mode, unsigned int no, const unsigned short * ptr, int numInstances = 0) : osg::DrawElementsUShort(mode, no, ptr, numInstances), _obj(L,-1) {};
	wrapper_osg_DrawElementsUShort(lua_State* L, lua_Table* dum, unsigned int mode, unsigned int no) : osg::DrawElementsUShort(mode, no), _obj(L,-1) {};

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

	// void osg::BufferData::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return osg::BufferData::releaseGLObjects(state);
	};

	// osg::DrawElements * osg::DrawElements::getDrawElements()
	osg::DrawElements * getDrawElements() {
		if(_obj.pushFunction("getDrawElements")) {
			return (_obj.callFunction<osg::DrawElements*>());
		}

		return osg::DrawElements::getDrawElements();
	};

	// const osg::DrawElements * osg::DrawElements::getDrawElements() const
	const osg::DrawElements * getDrawElements() const {
		if(_obj.pushFunction("getDrawElements")) {
			return (_obj.callFunction<osg::DrawElements*>());
		}

		return osg::DrawElements::getDrawElements();
	};

	// osg::Object * osg::DrawElementsUShort::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::DrawElementsUShort::cloneType();
	};

	// osg::Object * osg::DrawElementsUShort::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::DrawElementsUShort::clone(arg1);
	};

	// bool osg::DrawElementsUShort::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osg::DrawElementsUShort::isSameKindAs(obj);
	};

	// const char * osg::DrawElementsUShort::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::DrawElementsUShort::libraryName();
	};

	// const char * osg::DrawElementsUShort::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::DrawElementsUShort::className();
	};

	// const void * osg::DrawElementsUShort::getDataPointer() const
	const void * getDataPointer() const {
		if(_obj.pushFunction("getDataPointer")) {
			return (_obj.callFunction<void*>());
		}

		return osg::DrawElementsUShort::getDataPointer();
	};

	// unsigned int osg::DrawElementsUShort::getTotalDataSize() const
	unsigned int getTotalDataSize() const {
		if(_obj.pushFunction("getTotalDataSize")) {
			return (_obj.callFunction<unsigned int>());
		}

		return osg::DrawElementsUShort::getTotalDataSize();
	};

	// bool osg::DrawElementsUShort::supportsBufferObject() const
	bool supportsBufferObject() const {
		if(_obj.pushFunction("supportsBufferObject")) {
			return (_obj.callFunction<bool>());
		}

		return osg::DrawElementsUShort::supportsBufferObject();
	};

	// void osg::DrawElementsUShort::draw(osg::State & state, bool useVertexBufferObjects) const
	void draw(osg::State & state, bool useVertexBufferObjects) const {
		if(_obj.pushFunction("draw")) {
			_obj.pushArg(&state);
			_obj.pushArg(useVertexBufferObjects);
			return (_obj.callFunction<void>());
		}

		return osg::DrawElementsUShort::draw(state, useVertexBufferObjects);
	};

	// unsigned int osg::DrawElementsUShort::getNumIndices() const
	unsigned int getNumIndices() const {
		if(_obj.pushFunction("getNumIndices")) {
			return (_obj.callFunction<unsigned int>());
		}

		return osg::DrawElementsUShort::getNumIndices();
	};

	// unsigned int osg::DrawElementsUShort::index(unsigned int pos) const
	unsigned int index(unsigned int pos) const {
		if(_obj.pushFunction("index")) {
			_obj.pushArg(pos);
			return (_obj.callFunction<unsigned int>());
		}

		return osg::DrawElementsUShort::index(pos);
	};

	// void osg::DrawElementsUShort::offsetIndices(int offset)
	void offsetIndices(int offset) {
		if(_obj.pushFunction("offsetIndices")) {
			_obj.pushArg(offset);
			return (_obj.callFunction<void>());
		}

		return osg::DrawElementsUShort::offsetIndices(offset);
	};

	// void osg::DrawElementsUShort::reserveElements(unsigned int numIndices)
	void reserveElements(unsigned int numIndices) {
		if(_obj.pushFunction("reserveElements")) {
			_obj.pushArg(numIndices);
			return (_obj.callFunction<void>());
		}

		return osg::DrawElementsUShort::reserveElements(numIndices);
	};

	// void osg::DrawElementsUShort::setElement(unsigned int i, unsigned int v)
	void setElement(unsigned int i, unsigned int v) {
		if(_obj.pushFunction("setElement")) {
			_obj.pushArg(i);
			_obj.pushArg(v);
			return (_obj.callFunction<void>());
		}

		return osg::DrawElementsUShort::setElement(i, v);
	};

	// unsigned int osg::DrawElementsUShort::getElement(unsigned int i)
	unsigned int getElement(unsigned int i) {
		if(_obj.pushFunction("getElement")) {
			_obj.pushArg(i);
			return (_obj.callFunction<unsigned int>());
		}

		return osg::DrawElementsUShort::getElement(i);
	};

	// void osg::DrawElementsUShort::addElement(unsigned int v)
	void addElement(unsigned int v) {
		if(_obj.pushFunction("addElement")) {
			_obj.pushArg(v);
			return (_obj.callFunction<void>());
		}

		return osg::DrawElementsUShort::addElement(v);
	};




};




#endif

