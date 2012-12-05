#ifndef _WRAPPERS_WRAPPER_OSG_DRAWARRAYS_H_
#define _WRAPPERS_WRAPPER_OSG_DRAWARRAYS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/PrimitiveSet>

class wrapper_osg_DrawArrays : public osg::DrawArrays {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_DrawArrays(lua_State* L, lua_Table* dum, unsigned int mode = 0) : osg::DrawArrays(mode), _obj(L,-1) {};
	wrapper_osg_DrawArrays(lua_State* L, lua_Table* dum, unsigned int mode, int first, int count, int numInstances = 0) : osg::DrawArrays(mode, first, count, numInstances), _obj(L,-1) {};
	wrapper_osg_DrawArrays(lua_State* L, lua_Table* dum, const osg::DrawArrays & da, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::DrawArrays(da, copyop), _obj(L,-1) {};

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

	// osg::Object * osg::DrawArrays::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::DrawArrays::cloneType();
	};

	// osg::Object * osg::DrawArrays::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::DrawArrays::clone(arg1);
	};

	// bool osg::DrawArrays::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osg::DrawArrays::isSameKindAs(obj);
	};

	// const char * osg::DrawArrays::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::DrawArrays::libraryName();
	};

	// const char * osg::DrawArrays::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::DrawArrays::className();
	};

	// void osg::DrawArrays::draw(osg::State & state, bool useVertexBufferObjects) const
	void draw(osg::State & state, bool useVertexBufferObjects) const {
		if(_obj.pushFunction("draw")) {
			_obj.pushArg(&state);
			_obj.pushArg(useVertexBufferObjects);
			return (_obj.callFunction<void>());
		}

		return osg::DrawArrays::draw(state, useVertexBufferObjects);
	};

	// unsigned int osg::DrawArrays::getNumIndices() const
	unsigned int getNumIndices() const {
		if(_obj.pushFunction("getNumIndices")) {
			return (_obj.callFunction<unsigned int>());
		}

		return osg::DrawArrays::getNumIndices();
	};

	// unsigned int osg::DrawArrays::index(unsigned int pos) const
	unsigned int index(unsigned int pos) const {
		if(_obj.pushFunction("index")) {
			_obj.pushArg(pos);
			return (_obj.callFunction<unsigned int>());
		}

		return osg::DrawArrays::index(pos);
	};

	// void osg::DrawArrays::offsetIndices(int offset)
	void offsetIndices(int offset) {
		if(_obj.pushFunction("offsetIndices")) {
			_obj.pushArg(offset);
			return (_obj.callFunction<void>());
		}

		return osg::DrawArrays::offsetIndices(offset);
	};




};




#endif

