#ifndef _WRAPPERS_WRAPPER_OSGUTIL_INTERSECTIONVISITOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_INTERSECTIONVISITOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/IntersectionVisitor>

class wrapper_osgUtil_IntersectionVisitor : public osgUtil::IntersectionVisitor, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_IntersectionVisitor() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_IntersectionVisitor(lua_State* L, lua_Table* dum, osgUtil::Intersector * intersector = 0, osgUtil::IntersectionVisitor::ReadCallback * readCallback = 0) : osgUtil::IntersectionVisitor(intersector, readCallback), luna_wrapper_base(L) {};

	// osg::Vec3f osg::NodeVisitor::getViewPoint() const
	osg::Vec3f getViewPoint() const {
		if(_obj.pushFunction("getViewPoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return IntersectionVisitor::getViewPoint();
	};

	// float osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceFromEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return IntersectionVisitor::getDistanceFromEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToViewPoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return IntersectionVisitor::getDistanceToViewPoint(arg1, arg2);
	};

	// const char * osgUtil::IntersectionVisitor::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return IntersectionVisitor::libraryName();
	};

	// const char * osgUtil::IntersectionVisitor::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return IntersectionVisitor::className();
	};

	// void osgUtil::IntersectionVisitor::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			return (_obj.callFunction<void>());
		}

		return IntersectionVisitor::reset();
	};

	// osg::Vec3f osgUtil::IntersectionVisitor::getEyePoint() const
	osg::Vec3f getEyePoint() const {
		if(_obj.pushFunction("getEyePoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return IntersectionVisitor::getEyePoint();
	};

	// float osgUtil::IntersectionVisitor::getDistanceToEyePoint(const osg::Vec3f & pos, bool withLODScale) const
	float getDistanceToEyePoint(const osg::Vec3f & pos, bool withLODScale) const {
		if(_obj.pushFunction("getDistanceToEyePoint")) {
			_obj.pushArg(&pos);
			_obj.pushArg(withLODScale);
			return (_obj.callFunction<float>());
		}

		return IntersectionVisitor::getDistanceToEyePoint(pos, withLODScale);
	};

	// void osgUtil::IntersectionVisitor::apply(osg::Node & node)
	void apply(osg::Node & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return IntersectionVisitor::apply(node);
	};

	// void osgUtil::IntersectionVisitor::apply(osg::Geode & geode)
	void apply(osg::Geode & geode) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&geode);
			return (_obj.callFunction<void>());
		}

		return IntersectionVisitor::apply(geode);
	};

	// void osgUtil::IntersectionVisitor::apply(osg::Billboard & geode)
	void apply(osg::Billboard & geode) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&geode);
			return (_obj.callFunction<void>());
		}

		return IntersectionVisitor::apply(geode);
	};

	// void osgUtil::IntersectionVisitor::apply(osg::Group & group)
	void apply(osg::Group & group) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&group);
			return (_obj.callFunction<void>());
		}

		return IntersectionVisitor::apply(group);
	};

	// void osgUtil::IntersectionVisitor::apply(osg::LOD & lod)
	void apply(osg::LOD & lod) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&lod);
			return (_obj.callFunction<void>());
		}

		return IntersectionVisitor::apply(lod);
	};

	// void osgUtil::IntersectionVisitor::apply(osg::PagedLOD & lod)
	void apply(osg::PagedLOD & lod) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&lod);
			return (_obj.callFunction<void>());
		}

		return IntersectionVisitor::apply(lod);
	};

	// void osgUtil::IntersectionVisitor::apply(osg::Transform & transform)
	void apply(osg::Transform & transform) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&transform);
			return (_obj.callFunction<void>());
		}

		return IntersectionVisitor::apply(transform);
	};

	// void osgUtil::IntersectionVisitor::apply(osg::Projection & projection)
	void apply(osg::Projection & projection) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&projection);
			return (_obj.callFunction<void>());
		}

		return IntersectionVisitor::apply(projection);
	};

	// void osgUtil::IntersectionVisitor::apply(osg::Camera & camera)
	void apply(osg::Camera & camera) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&camera);
			return (_obj.callFunction<void>());
		}

		return IntersectionVisitor::apply(camera);
	};




};




#endif

