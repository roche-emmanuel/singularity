#ifndef _WRAPPERS_WRAPPER_OSGUTIL_RENDERBIN_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_RENDERBIN_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/RenderBin>

class wrapper_osgUtil_RenderBin : public osgUtil::RenderBin {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgUtil_RenderBin(lua_State* L, lua_Table* dum) : osgUtil::RenderBin(), _obj(L,-1) {};
	wrapper_osgUtil_RenderBin(lua_State* L, lua_Table* dum, osgUtil::RenderBin::SortMode mode) : osgUtil::RenderBin(mode), _obj(L,-1) {};
	wrapper_osgUtil_RenderBin(lua_State* L, lua_Table* dum, const osgUtil::RenderBin & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgUtil::RenderBin(rhs, copyop), _obj(L,-1) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return RenderBin::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return RenderBin::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return RenderBin::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return RenderBin::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return RenderBin::getUserData();
	};

	// osg::Object * osgUtil::RenderBin::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return RenderBin::cloneType();
	};

	// osg::Object * osgUtil::RenderBin::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return RenderBin::clone(arg1);
	};

	// bool osgUtil::RenderBin::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return RenderBin::isSameKindAs(obj);
	};

	// const char * osgUtil::RenderBin::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return RenderBin::libraryName();
	};

	// const char * osgUtil::RenderBin::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return RenderBin::className();
	};

	// void osgUtil::RenderBin::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			return (_obj.callFunction<void>());
		}

		return RenderBin::reset();
	};

	// void osgUtil::RenderBin::sort()
	void sort() {
		if(_obj.pushFunction("sort")) {
			return (_obj.callFunction<void>());
		}

		return RenderBin::sort();
	};

	// void osgUtil::RenderBin::sortImplementation()
	void sortImplementation() {
		if(_obj.pushFunction("sortImplementation")) {
			return (_obj.callFunction<void>());
		}

		return RenderBin::sortImplementation();
	};

	// void osgUtil::RenderBin::sortByState()
	void sortByState() {
		if(_obj.pushFunction("sortByState")) {
			return (_obj.callFunction<void>());
		}

		return RenderBin::sortByState();
	};

	// void osgUtil::RenderBin::sortByStateThenFrontToBack()
	void sortByStateThenFrontToBack() {
		if(_obj.pushFunction("sortByStateThenFrontToBack")) {
			return (_obj.callFunction<void>());
		}

		return RenderBin::sortByStateThenFrontToBack();
	};

	// void osgUtil::RenderBin::sortFrontToBack()
	void sortFrontToBack() {
		if(_obj.pushFunction("sortFrontToBack")) {
			return (_obj.callFunction<void>());
		}

		return RenderBin::sortFrontToBack();
	};

	// void osgUtil::RenderBin::sortBackToFront()
	void sortBackToFront() {
		if(_obj.pushFunction("sortBackToFront")) {
			return (_obj.callFunction<void>());
		}

		return RenderBin::sortBackToFront();
	};

	// void osgUtil::RenderBin::sortTraversalOrder()
	void sortTraversalOrder() {
		if(_obj.pushFunction("sortTraversalOrder")) {
			return (_obj.callFunction<void>());
		}

		return RenderBin::sortTraversalOrder();
	};

	// void osgUtil::RenderBin::draw(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)
	void draw(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous) {
		if(_obj.pushFunction("draw")) {
			_obj.pushArg(&renderInfo);
			_obj.pushArg(previous);
			return (_obj.callFunction<void>());
		}

		return RenderBin::draw(renderInfo, previous);
	};

	// void osgUtil::RenderBin::drawImplementation(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)
	void drawImplementation(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous) {
		if(_obj.pushFunction("drawImplementation")) {
			_obj.pushArg(&renderInfo);
			_obj.pushArg(previous);
			return (_obj.callFunction<void>());
		}

		return RenderBin::drawImplementation(renderInfo, previous);
	};

	// unsigned int osgUtil::RenderBin::computeNumberOfDynamicRenderLeaves() const
	unsigned int computeNumberOfDynamicRenderLeaves() const {
		if(_obj.pushFunction("computeNumberOfDynamicRenderLeaves")) {
			return (_obj.callFunction<unsigned int>());
		}

		return RenderBin::computeNumberOfDynamicRenderLeaves();
	};

	// void osgUtil::RenderBin::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return RenderBin::releaseGLObjects(state);
	};




};




#endif

