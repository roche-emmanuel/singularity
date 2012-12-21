#ifndef _WRAPPERS_WRAPPER_OSGUTIL_POLYTOPEINTERSECTOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_POLYTOPEINTERSECTOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/PolytopeIntersector>

class wrapper_osgUtil_PolytopeIntersector : public osgUtil::PolytopeIntersector, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_PolytopeIntersector() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_PolytopeIntersector(lua_State* L, lua_Table* dum, const osg::Polytope & polytope) : osgUtil::PolytopeIntersector(polytope), luna_wrapper_base(L) {};
	wrapper_osgUtil_PolytopeIntersector(lua_State* L, lua_Table* dum, osgUtil::Intersector::CoordinateFrame cf, const osg::Polytope & polytope) : osgUtil::PolytopeIntersector(cf, polytope), luna_wrapper_base(L) {};
	wrapper_osgUtil_PolytopeIntersector(lua_State* L, lua_Table* dum, osgUtil::Intersector::CoordinateFrame cf, double xMin, double yMin, double xMax, double yMax) : osgUtil::PolytopeIntersector(cf, xMin, yMin, xMax, yMax), luna_wrapper_base(L) {};

	// osgUtil::Intersector * osgUtil::PolytopeIntersector::clone(osgUtil::IntersectionVisitor & iv)
	osgUtil::Intersector * clone(osgUtil::IntersectionVisitor & iv) {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&iv);
			return (_obj.callFunction<osgUtil::Intersector*>());
		}

		return PolytopeIntersector::clone(iv);
	};

	// bool osgUtil::PolytopeIntersector::enter(const osg::Node & node)
	bool enter(const osg::Node & node) {
		if(_obj.pushFunction("enter")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<bool>());
		}

		return PolytopeIntersector::enter(node);
	};

	// void osgUtil::PolytopeIntersector::leave()
	void leave() {
		if(_obj.pushFunction("leave")) {
			return (_obj.callFunction<void>());
		}

		return PolytopeIntersector::leave();
	};

	// void osgUtil::PolytopeIntersector::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)
	void intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable) {
		if(_obj.pushFunction("intersect")) {
			_obj.pushArg(&iv);
			_obj.pushArg(drawable);
			return (_obj.callFunction<void>());
		}

		return PolytopeIntersector::intersect(iv, drawable);
	};

	// void osgUtil::PolytopeIntersector::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			return (_obj.callFunction<void>());
		}

		return PolytopeIntersector::reset();
	};

	// bool osgUtil::PolytopeIntersector::containsIntersections()
	bool containsIntersections() {
		if(_obj.pushFunction("containsIntersections")) {
			return (_obj.callFunction<bool>());
		}

		return PolytopeIntersector::containsIntersections();
	};




};




#endif

