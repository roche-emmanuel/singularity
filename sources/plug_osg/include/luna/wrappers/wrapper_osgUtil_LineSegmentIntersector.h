#ifndef _WRAPPERS_WRAPPER_OSGUTIL_LINESEGMENTINTERSECTOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_LINESEGMENTINTERSECTOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/LineSegmentIntersector>

class wrapper_osgUtil_LineSegmentIntersector : public osgUtil::LineSegmentIntersector, public luna_wrapper_base {

public:
	

	wrapper_osgUtil_LineSegmentIntersector(lua_State* L, lua_Table* dum, const osg::Vec3d & start, const osg::Vec3d & end) : osgUtil::LineSegmentIntersector(start, end), luna_wrapper_base(L) {};
	wrapper_osgUtil_LineSegmentIntersector(lua_State* L, lua_Table* dum, osgUtil::Intersector::CoordinateFrame cf, const osg::Vec3d & start, const osg::Vec3d & end) : osgUtil::LineSegmentIntersector(cf, start, end), luna_wrapper_base(L) {};
	wrapper_osgUtil_LineSegmentIntersector(lua_State* L, lua_Table* dum, osgUtil::Intersector::CoordinateFrame cf, double x, double y) : osgUtil::LineSegmentIntersector(cf, x, y), luna_wrapper_base(L) {};

	// osgUtil::Intersector * osgUtil::LineSegmentIntersector::clone(osgUtil::IntersectionVisitor & iv)
	osgUtil::Intersector * clone(osgUtil::IntersectionVisitor & iv) {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&iv);
			return (_obj.callFunction<osgUtil::Intersector*>());
		}

		return LineSegmentIntersector::clone(iv);
	};

	// bool osgUtil::LineSegmentIntersector::enter(const osg::Node & node)
	bool enter(const osg::Node & node) {
		if(_obj.pushFunction("enter")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<bool>());
		}

		return LineSegmentIntersector::enter(node);
	};

	// void osgUtil::LineSegmentIntersector::leave()
	void leave() {
		if(_obj.pushFunction("leave")) {
			return (_obj.callFunction<void>());
		}

		return LineSegmentIntersector::leave();
	};

	// void osgUtil::LineSegmentIntersector::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)
	void intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable) {
		if(_obj.pushFunction("intersect")) {
			_obj.pushArg(&iv);
			_obj.pushArg(drawable);
			return (_obj.callFunction<void>());
		}

		return LineSegmentIntersector::intersect(iv, drawable);
	};

	// void osgUtil::LineSegmentIntersector::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			return (_obj.callFunction<void>());
		}

		return LineSegmentIntersector::reset();
	};

	// bool osgUtil::LineSegmentIntersector::containsIntersections()
	bool containsIntersections() {
		if(_obj.pushFunction("containsIntersections")) {
			return (_obj.callFunction<bool>());
		}

		return LineSegmentIntersector::containsIntersections();
	};




};




#endif

