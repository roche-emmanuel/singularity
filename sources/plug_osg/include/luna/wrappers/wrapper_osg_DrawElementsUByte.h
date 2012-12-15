#ifndef _WRAPPERS_WRAPPER_OSG_DRAWELEMENTSUBYTE_H_
#define _WRAPPERS_WRAPPER_OSG_DRAWELEMENTSUBYTE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/PrimitiveSet>

class wrapper_osg_DrawElementsUByte : public osg::DrawElementsUByte {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_DrawElementsUByte(lua_State* L, lua_Table* dum, unsigned int mode = 0) : osg::DrawElementsUByte(mode), _obj(L,-1) {};
	wrapper_osg_DrawElementsUByte(lua_State* L, lua_Table* dum, const osg::DrawElementsUByte & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::DrawElementsUByte(array, copyop), _obj(L,-1) {};
	wrapper_osg_DrawElementsUByte(lua_State* L, lua_Table* dum, unsigned int mode, unsigned int no, const unsigned char * ptr, int numInstances = 0) : osg::DrawElementsUByte(mode, no, ptr, numInstances), _obj(L,-1) {};
	wrapper_osg_DrawElementsUByte(lua_State* L, lua_Table* dum, unsigned int mode, unsigned int no) : osg::DrawElementsUByte(mode, no), _obj(L,-1) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return DrawElementsUByte::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return DrawElementsUByte::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return DrawElementsUByte::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return DrawElementsUByte::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return DrawElementsUByte::getUserData();
	};

	// void osg::BufferData::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return DrawElementsUByte::releaseGLObjects(state);
	};

	// unsigned int osg::PrimitiveSet::getNumPrimitives() const
	unsigned int getNumPrimitives() const {
		if(_obj.pushFunction("getNumPrimitives")) {
			return (_obj.callFunction<unsigned int>());
		}

		return DrawElementsUByte::getNumPrimitives();
	};

	// void osg::PrimitiveSet::computeRange() const
	void computeRange() const {
		if(_obj.pushFunction("computeRange")) {
			return (_obj.callFunction<void>());
		}

		return DrawElementsUByte::computeRange();
	};

	// osg::DrawElements * osg::DrawElements::getDrawElements()
	osg::DrawElements * getDrawElements() {
		if(_obj.pushFunction("getDrawElements")) {
			return (_obj.callFunction<osg::DrawElements*>());
		}

		return DrawElementsUByte::getDrawElements();
	};

	// const osg::DrawElements * osg::DrawElements::getDrawElements() const
	const osg::DrawElements * getDrawElements() const {
		if(_obj.pushFunction("getDrawElements")) {
			return (_obj.callFunction<osg::DrawElements*>());
		}

		return DrawElementsUByte::getDrawElements();
	};

	// osg::Object * osg::DrawElementsUByte::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return DrawElementsUByte::cloneType();
	};

	// osg::Object * osg::DrawElementsUByte::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return DrawElementsUByte::clone(arg1);
	};

	// bool osg::DrawElementsUByte::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return DrawElementsUByte::isSameKindAs(obj);
	};

	// const char * osg::DrawElementsUByte::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return DrawElementsUByte::libraryName();
	};

	// const char * osg::DrawElementsUByte::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return DrawElementsUByte::className();
	};

	// const void * osg::DrawElementsUByte::getDataPointer() const
	const void * getDataPointer() const {
		if(_obj.pushFunction("getDataPointer")) {
			return (_obj.callFunction<void*>());
		}

		return DrawElementsUByte::getDataPointer();
	};

	// unsigned int osg::DrawElementsUByte::getTotalDataSize() const
	unsigned int getTotalDataSize() const {
		if(_obj.pushFunction("getTotalDataSize")) {
			return (_obj.callFunction<unsigned int>());
		}

		return DrawElementsUByte::getTotalDataSize();
	};

	// bool osg::DrawElementsUByte::supportsBufferObject() const
	bool supportsBufferObject() const {
		if(_obj.pushFunction("supportsBufferObject")) {
			return (_obj.callFunction<bool>());
		}

		return DrawElementsUByte::supportsBufferObject();
	};

	// void osg::DrawElementsUByte::draw(osg::State & state, bool useVertexBufferObjects) const
	void draw(osg::State & state, bool useVertexBufferObjects) const {
		if(_obj.pushFunction("draw")) {
			_obj.pushArg(&state);
			_obj.pushArg(useVertexBufferObjects);
			return (_obj.callFunction<void>());
		}

		return DrawElementsUByte::draw(state, useVertexBufferObjects);
	};

	// unsigned int osg::DrawElementsUByte::getNumIndices() const
	unsigned int getNumIndices() const {
		if(_obj.pushFunction("getNumIndices")) {
			return (_obj.callFunction<unsigned int>());
		}

		return DrawElementsUByte::getNumIndices();
	};

	// unsigned int osg::DrawElementsUByte::index(unsigned int pos) const
	unsigned int index(unsigned int pos) const {
		if(_obj.pushFunction("index")) {
			_obj.pushArg(pos);
			return (_obj.callFunction<unsigned int>());
		}

		return DrawElementsUByte::index(pos);
	};

	// void osg::DrawElementsUByte::offsetIndices(int offset)
	void offsetIndices(int offset) {
		if(_obj.pushFunction("offsetIndices")) {
			_obj.pushArg(offset);
			return (_obj.callFunction<void>());
		}

		return DrawElementsUByte::offsetIndices(offset);
	};

	// void osg::DrawElementsUByte::reserveElements(unsigned int numIndices)
	void reserveElements(unsigned int numIndices) {
		if(_obj.pushFunction("reserveElements")) {
			_obj.pushArg(numIndices);
			return (_obj.callFunction<void>());
		}

		return DrawElementsUByte::reserveElements(numIndices);
	};

	// void osg::DrawElementsUByte::setElement(unsigned int i, unsigned int v)
	void setElement(unsigned int i, unsigned int v) {
		if(_obj.pushFunction("setElement")) {
			_obj.pushArg(i);
			_obj.pushArg(v);
			return (_obj.callFunction<void>());
		}

		return DrawElementsUByte::setElement(i, v);
	};

	// unsigned int osg::DrawElementsUByte::getElement(unsigned int i)
	unsigned int getElement(unsigned int i) {
		if(_obj.pushFunction("getElement")) {
			_obj.pushArg(i);
			return (_obj.callFunction<unsigned int>());
		}

		return DrawElementsUByte::getElement(i);
	};

	// void osg::DrawElementsUByte::addElement(unsigned int v)
	void addElement(unsigned int v) {
		if(_obj.pushFunction("addElement")) {
			_obj.pushArg(v);
			return (_obj.callFunction<void>());
		}

		return DrawElementsUByte::addElement(v);
	};




};




#endif

