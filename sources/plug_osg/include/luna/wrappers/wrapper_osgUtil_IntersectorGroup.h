#ifndef _WRAPPERS_WRAPPER_OSGUTIL_INTERSECTORGROUP_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_INTERSECTORGROUP_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/IntersectionVisitor>

class wrapper_osgUtil_IntersectorGroup : public osgUtil::IntersectorGroup, public luna_wrapper_base {

public:
	

	wrapper_osgUtil_IntersectorGroup(lua_State* L, lua_Table* dum) : osgUtil::IntersectorGroup(), luna_wrapper_base(L) {};

	// osgUtil::Intersector * osgUtil::IntersectorGroup::clone(osgUtil::IntersectionVisitor & iv)
	osgUtil::Intersector * clone(osgUtil::IntersectionVisitor & iv) {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&iv);
			return (_obj.callFunction<osgUtil::Intersector*>());
		}

		return IntersectorGroup::clone(iv);
	};

	// bool osgUtil::IntersectorGroup::enter(const osg::Node & node)
	bool enter(const osg::Node & node) {
		if(_obj.pushFunction("enter")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<bool>());
		}

		return IntersectorGroup::enter(node);
	};

	// void osgUtil::IntersectorGroup::leave()
	void leave() {
		if(_obj.pushFunction("leave")) {
			return (_obj.callFunction<void>());
		}

		return IntersectorGroup::leave();
	};

	// void osgUtil::IntersectorGroup::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)
	void intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable) {
		if(_obj.pushFunction("intersect")) {
			_obj.pushArg(&iv);
			_obj.pushArg(drawable);
			return (_obj.callFunction<void>());
		}

		return IntersectorGroup::intersect(iv, drawable);
	};

	// void osgUtil::IntersectorGroup::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			return (_obj.callFunction<void>());
		}

		return IntersectorGroup::reset();
	};

	// bool osgUtil::IntersectorGroup::containsIntersections()
	bool containsIntersections() {
		if(_obj.pushFunction("containsIntersections")) {
			return (_obj.callFunction<bool>());
		}

		return IntersectorGroup::containsIntersections();
	};




};




#endif

