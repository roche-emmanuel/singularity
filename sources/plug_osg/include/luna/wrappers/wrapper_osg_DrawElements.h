#ifndef _WRAPPERS_WRAPPER_OSG_DRAWELEMENTS_H_
#define _WRAPPERS_WRAPPER_OSG_DRAWELEMENTS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/PrimitiveSet>

class wrapper_osg_DrawElements : public osg::DrawElements {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_DrawElements(lua_State* L, lua_Table* dum, const osg::DrawElements & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::DrawElements(copy, copyop), _obj(L,-1) {};

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

