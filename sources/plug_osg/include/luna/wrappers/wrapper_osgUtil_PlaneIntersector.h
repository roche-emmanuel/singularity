#ifndef _WRAPPERS_WRAPPER_OSGUTIL_PLANEINTERSECTOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_PLANEINTERSECTOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/PlaneIntersector>

class wrapper_osgUtil_PlaneIntersector : public osgUtil::PlaneIntersector {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgUtil_PlaneIntersector(lua_State* L, lua_Table* dum, const osg::Plane & plane, const osg::Polytope & boundingPolytope = osg::Polytope ()) : osgUtil::PlaneIntersector(plane, boundingPolytope), _obj(L,-1) {};
	wrapper_osgUtil_PlaneIntersector(lua_State* L, lua_Table* dum, osgUtil::Intersector::CoordinateFrame cf, const osg::Plane & plane, const osg::Polytope & boundingPolytope = osg::Polytope ()) : osgUtil::PlaneIntersector(cf, plane, boundingPolytope), _obj(L,-1) {};

	// osgUtil::Intersector * osgUtil::PlaneIntersector::clone(osgUtil::IntersectionVisitor & iv)
	osgUtil::Intersector * clone(osgUtil::IntersectionVisitor & iv) {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&iv);
			return (_obj.callFunction<osgUtil::Intersector*>());
		}

		return osgUtil::PlaneIntersector::clone(iv);
	};

	// bool osgUtil::PlaneIntersector::enter(const osg::Node & node)
	bool enter(const osg::Node & node) {
		if(_obj.pushFunction("enter")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<bool>());
		}

		return osgUtil::PlaneIntersector::enter(node);
	};

	// void osgUtil::PlaneIntersector::leave()
	void leave() {
		if(_obj.pushFunction("leave")) {
			return (_obj.callFunction<void>());
		}

		return osgUtil::PlaneIntersector::leave();
	};

	// void osgUtil::PlaneIntersector::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)
	void intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable) {
		if(_obj.pushFunction("intersect")) {
			_obj.pushArg(&iv);
			_obj.pushArg(drawable);
			return (_obj.callFunction<void>());
		}

		return osgUtil::PlaneIntersector::intersect(iv, drawable);
	};

	// void osgUtil::PlaneIntersector::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			return (_obj.callFunction<void>());
		}

		return osgUtil::PlaneIntersector::reset();
	};

	// bool osgUtil::PlaneIntersector::containsIntersections()
	bool containsIntersections() {
		if(_obj.pushFunction("containsIntersections")) {
			return (_obj.callFunction<bool>());
		}

		return osgUtil::PlaneIntersector::containsIntersections();
	};




};




#endif

