#ifndef _WRAPPERS_WRAPPER_OSGUTIL_INTERSECTOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_INTERSECTOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/IntersectionVisitor>

class wrapper_osgUtil_Intersector : public osgUtil::Intersector, public luna_wrapper_base {

public:
	

	wrapper_osgUtil_Intersector(lua_State* L, lua_Table* dum, osgUtil::Intersector::CoordinateFrame cf = osgUtil::Intersector::MODEL) : osgUtil::Intersector(cf), luna_wrapper_base(L) {};

	// osgUtil::Intersector * osgUtil::Intersector::clone(osgUtil::IntersectionVisitor & iv)
	osgUtil::Intersector * clone(osgUtil::IntersectionVisitor & iv) {
		THROW_IF(!_obj.pushFunction("clone"),"No implementation for abstract function osgUtil::Intersector::clone");
		_obj.pushArg(&iv);
		return (_obj.callFunction<osgUtil::Intersector*>());
	};

	// bool osgUtil::Intersector::enter(const osg::Node & node)
	bool enter(const osg::Node & node) {
		THROW_IF(!_obj.pushFunction("enter"),"No implementation for abstract function osgUtil::Intersector::enter");
		_obj.pushArg(&node);
		return (_obj.callFunction<bool>());
	};

	// void osgUtil::Intersector::leave()
	void leave() {
		THROW_IF(!_obj.pushFunction("leave"),"No implementation for abstract function osgUtil::Intersector::leave");
		return (_obj.callFunction<void>());
	};

	// void osgUtil::Intersector::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)
	void intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable) {
		THROW_IF(!_obj.pushFunction("intersect"),"No implementation for abstract function osgUtil::Intersector::intersect");
		_obj.pushArg(&iv);
		_obj.pushArg(drawable);
		return (_obj.callFunction<void>());
	};

	// void osgUtil::Intersector::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			return (_obj.callFunction<void>());
		}

		return Intersector::reset();
	};

	// bool osgUtil::Intersector::containsIntersections()
	bool containsIntersections() {
		THROW_IF(!_obj.pushFunction("containsIntersections"),"No implementation for abstract function osgUtil::Intersector::containsIntersections");
		return (_obj.callFunction<bool>());
	};




};




#endif

