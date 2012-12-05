#ifndef _WRAPPERS_WRAPPER_OSGUTIL_POLYTOPEINTERSECTOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_POLYTOPEINTERSECTOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/PolytopeIntersector>

class wrapper_osgUtil_PolytopeIntersector : public osgUtil::PolytopeIntersector {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgUtil_PolytopeIntersector(lua_State* L, lua_Table* dum, const osg::Polytope & polytope) : osgUtil::PolytopeIntersector(polytope), _obj(L,-1) {};
	wrapper_osgUtil_PolytopeIntersector(lua_State* L, lua_Table* dum, osgUtil::Intersector::CoordinateFrame cf, const osg::Polytope & polytope) : osgUtil::PolytopeIntersector(cf, polytope), _obj(L,-1) {};
	wrapper_osgUtil_PolytopeIntersector(lua_State* L, lua_Table* dum, osgUtil::Intersector::CoordinateFrame cf, double xMin, double yMin, double xMax, double yMax) : osgUtil::PolytopeIntersector(cf, xMin, yMin, xMax, yMax), _obj(L,-1) {};

	// osgUtil::Intersector * osgUtil::PolytopeIntersector::clone(osgUtil::IntersectionVisitor & iv)
	osgUtil::Intersector * clone(osgUtil::IntersectionVisitor & iv) {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&iv);
			return (_obj.callFunction<osgUtil::Intersector*>());
		}

		return osgUtil::PolytopeIntersector::clone(iv);
	};

	// bool osgUtil::PolytopeIntersector::enter(const osg::Node & node)
	bool enter(const osg::Node & node) {
		if(_obj.pushFunction("enter")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<bool>());
		}

		return osgUtil::PolytopeIntersector::enter(node);
	};

	// void osgUtil::PolytopeIntersector::leave()
	void leave() {
		if(_obj.pushFunction("leave")) {
			return (_obj.callFunction<void>());
		}

		return osgUtil::PolytopeIntersector::leave();
	};

	// void osgUtil::PolytopeIntersector::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)
	void intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable) {
		if(_obj.pushFunction("intersect")) {
			_obj.pushArg(&iv);
			_obj.pushArg(drawable);
			return (_obj.callFunction<void>());
		}

		return osgUtil::PolytopeIntersector::intersect(iv, drawable);
	};

	// void osgUtil::PolytopeIntersector::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			return (_obj.callFunction<void>());
		}

		return osgUtil::PolytopeIntersector::reset();
	};

	// bool osgUtil::PolytopeIntersector::containsIntersections()
	bool containsIntersections() {
		if(_obj.pushFunction("containsIntersections")) {
			return (_obj.callFunction<bool>());
		}

		return osgUtil::PolytopeIntersector::containsIntersections();
	};




};




#endif

