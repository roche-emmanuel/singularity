#ifndef _WRAPPERS_WRAPPER_OSG_DRAWELEMENTSUINT_H_
#define _WRAPPERS_WRAPPER_OSG_DRAWELEMENTSUINT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/PrimitiveSet>

class wrapper_osg_DrawElementsUInt : public osg::DrawElementsUInt {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_DrawElementsUInt(lua_State* L, lua_Table* dum, unsigned int mode = 0) : osg::DrawElementsUInt(mode), _obj(L,-1) {};
	wrapper_osg_DrawElementsUInt(lua_State* L, lua_Table* dum, const osg::DrawElementsUInt & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::DrawElementsUInt(array, copyop), _obj(L,-1) {};
	wrapper_osg_DrawElementsUInt(lua_State* L, lua_Table* dum, unsigned int mode, unsigned int no, const unsigned int * ptr, int numInstances = 0) : osg::DrawElementsUInt(mode, no, ptr, numInstances), _obj(L,-1) {};
	wrapper_osg_DrawElementsUInt(lua_State* L, lua_Table* dum, unsigned int mode, unsigned int no) : osg::DrawElementsUInt(mode, no), _obj(L,-1) {};

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

	// osg::Object * osg::DrawElementsUInt::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::DrawElementsUInt::cloneType();
	};

	// osg::Object * osg::DrawElementsUInt::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::DrawElementsUInt::clone(arg1);
	};

	// bool osg::DrawElementsUInt::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osg::DrawElementsUInt::isSameKindAs(obj);
	};

	// const char * osg::DrawElementsUInt::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::DrawElementsUInt::libraryName();
	};

	// const char * osg::DrawElementsUInt::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::DrawElementsUInt::className();
	};

	// const void * osg::DrawElementsUInt::getDataPointer() const
	const void * getDataPointer() const {
		if(_obj.pushFunction("getDataPointer")) {
			return (_obj.callFunction<void*>());
		}

		return osg::DrawElementsUInt::getDataPointer();
	};

	// unsigned int osg::DrawElementsUInt::getTotalDataSize() const
	unsigned int getTotalDataSize() const {
		if(_obj.pushFunction("getTotalDataSize")) {
			return (_obj.callFunction<unsigned int>());
		}

		return osg::DrawElementsUInt::getTotalDataSize();
	};

	// bool osg::DrawElementsUInt::supportsBufferObject() const
	bool supportsBufferObject() const {
		if(_obj.pushFunction("supportsBufferObject")) {
			return (_obj.callFunction<bool>());
		}

		return osg::DrawElementsUInt::supportsBufferObject();
	};

	// void osg::DrawElementsUInt::draw(osg::State & state, bool useVertexBufferObjects) const
	void draw(osg::State & state, bool useVertexBufferObjects) const {
		if(_obj.pushFunction("draw")) {
			_obj.pushArg(&state);
			_obj.pushArg(useVertexBufferObjects);
			return (_obj.callFunction<void>());
		}

		return osg::DrawElementsUInt::draw(state, useVertexBufferObjects);
	};

	// unsigned int osg::DrawElementsUInt::getNumIndices() const
	unsigned int getNumIndices() const {
		if(_obj.pushFunction("getNumIndices")) {
			return (_obj.callFunction<unsigned int>());
		}

		return osg::DrawElementsUInt::getNumIndices();
	};

	// unsigned int osg::DrawElementsUInt::index(unsigned int pos) const
	unsigned int index(unsigned int pos) const {
		if(_obj.pushFunction("index")) {
			_obj.pushArg(pos);
			return (_obj.callFunction<unsigned int>());
		}

		return osg::DrawElementsUInt::index(pos);
	};

	// void osg::DrawElementsUInt::offsetIndices(int offset)
	void offsetIndices(int offset) {
		if(_obj.pushFunction("offsetIndices")) {
			_obj.pushArg(offset);
			return (_obj.callFunction<void>());
		}

		return osg::DrawElementsUInt::offsetIndices(offset);
	};

	// void osg::DrawElementsUInt::reserveElements(unsigned int numIndices)
	void reserveElements(unsigned int numIndices) {
		if(_obj.pushFunction("reserveElements")) {
			_obj.pushArg(numIndices);
			return (_obj.callFunction<void>());
		}

		return osg::DrawElementsUInt::reserveElements(numIndices);
	};

	// void osg::DrawElementsUInt::setElement(unsigned int i, unsigned int v)
	void setElement(unsigned int i, unsigned int v) {
		if(_obj.pushFunction("setElement")) {
			_obj.pushArg(i);
			_obj.pushArg(v);
			return (_obj.callFunction<void>());
		}

		return osg::DrawElementsUInt::setElement(i, v);
	};

	// unsigned int osg::DrawElementsUInt::getElement(unsigned int i)
	unsigned int getElement(unsigned int i) {
		if(_obj.pushFunction("getElement")) {
			_obj.pushArg(i);
			return (_obj.callFunction<unsigned int>());
		}

		return osg::DrawElementsUInt::getElement(i);
	};

	// void osg::DrawElementsUInt::addElement(unsigned int v)
	void addElement(unsigned int v) {
		if(_obj.pushFunction("addElement")) {
			_obj.pushArg(v);
			return (_obj.callFunction<void>());
		}

		return osg::DrawElementsUInt::addElement(v);
	};




};




#endif

