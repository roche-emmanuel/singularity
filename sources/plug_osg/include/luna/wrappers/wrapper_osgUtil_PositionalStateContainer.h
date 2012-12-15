#ifndef _WRAPPERS_WRAPPER_OSGUTIL_POSITIONALSTATECONTAINER_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_POSITIONALSTATECONTAINER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/PositionalStateContainer>

class wrapper_osgUtil_PositionalStateContainer : public osgUtil::PositionalStateContainer {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgUtil_PositionalStateContainer(lua_State* L, lua_Table* dum) : osgUtil::PositionalStateContainer(), _obj(L,-1) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return PositionalStateContainer::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return PositionalStateContainer::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return PositionalStateContainer::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return PositionalStateContainer::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return PositionalStateContainer::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return PositionalStateContainer::releaseGLObjects(arg1);
	};

	// osg::Object * osgUtil::PositionalStateContainer::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return PositionalStateContainer::cloneType();
	};

	// osg::Object * osgUtil::PositionalStateContainer::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return PositionalStateContainer::clone(arg1);
	};

	// bool osgUtil::PositionalStateContainer::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return PositionalStateContainer::isSameKindAs(obj);
	};

	// const char * osgUtil::PositionalStateContainer::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return PositionalStateContainer::libraryName();
	};

	// const char * osgUtil::PositionalStateContainer::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return PositionalStateContainer::className();
	};

	// void osgUtil::PositionalStateContainer::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			return (_obj.callFunction<void>());
		}

		return PositionalStateContainer::reset();
	};

	// void osgUtil::PositionalStateContainer::addPositionedAttribute(osg::RefMatrixd * matrix, const osg::StateAttribute * attr)
	void addPositionedAttribute(osg::RefMatrixd * matrix, const osg::StateAttribute * attr) {
		if(_obj.pushFunction("addPositionedAttribute")) {
			_obj.pushArg(matrix);
			_obj.pushArg(attr);
			return (_obj.callFunction<void>());
		}

		return PositionalStateContainer::addPositionedAttribute(matrix, attr);
	};

	// void osgUtil::PositionalStateContainer::addPositionedTextureAttribute(unsigned int textureUnit, osg::RefMatrixd * matrix, const osg::StateAttribute * attr)
	void addPositionedTextureAttribute(unsigned int textureUnit, osg::RefMatrixd * matrix, const osg::StateAttribute * attr) {
		if(_obj.pushFunction("addPositionedTextureAttribute")) {
			_obj.pushArg(textureUnit);
			_obj.pushArg(matrix);
			_obj.pushArg(attr);
			return (_obj.callFunction<void>());
		}

		return PositionalStateContainer::addPositionedTextureAttribute(textureUnit, matrix, attr);
	};

	// void osgUtil::PositionalStateContainer::draw(osg::State & state, osgUtil::RenderLeaf *& previous, const osg::Matrixd * postMultMatrix = 0)
	void draw(osg::State & state, osgUtil::RenderLeaf *& previous, const osg::Matrixd * postMultMatrix = 0) {
		if(_obj.pushFunction("draw")) {
			_obj.pushArg(&state);
			_obj.pushArg(previous);
			_obj.pushArg(postMultMatrix);
			return (_obj.callFunction<void>());
		}

		return PositionalStateContainer::draw(state, previous, postMultMatrix);
	};




};




#endif

