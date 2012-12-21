#ifndef _WRAPPERS_WRAPPER_OSGUTIL_INTERSECTVISITOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_INTERSECTVISITOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/IntersectVisitor>

class wrapper_osgUtil_IntersectVisitor : public osgUtil::IntersectVisitor, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_IntersectVisitor() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_IntersectVisitor(lua_State* L, lua_Table* dum) : osgUtil::IntersectVisitor(), luna_wrapper_base(L) {};

	// osg::Vec3f osg::NodeVisitor::getViewPoint() const
	osg::Vec3f getViewPoint() const {
		if(_obj.pushFunction("getViewPoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return IntersectVisitor::getViewPoint();
	};

	// float osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceFromEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return IntersectVisitor::getDistanceFromEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToViewPoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return IntersectVisitor::getDistanceToViewPoint(arg1, arg2);
	};

	// const char * osgUtil::IntersectVisitor::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return IntersectVisitor::libraryName();
	};

	// const char * osgUtil::IntersectVisitor::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return IntersectVisitor::className();
	};

	// void osgUtil::IntersectVisitor::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			return (_obj.callFunction<void>());
		}

		return IntersectVisitor::reset();
	};

	// osg::Vec3f osgUtil::IntersectVisitor::getEyePoint() const
	osg::Vec3f getEyePoint() const {
		if(_obj.pushFunction("getEyePoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return IntersectVisitor::getEyePoint();
	};

	// float osgUtil::IntersectVisitor::getDistanceToEyePoint(const osg::Vec3f & pos, bool withLODScale) const
	float getDistanceToEyePoint(const osg::Vec3f & pos, bool withLODScale) const {
		if(_obj.pushFunction("getDistanceToEyePoint")) {
			_obj.pushArg(&pos);
			_obj.pushArg(withLODScale);
			return (_obj.callFunction<float>());
		}

		return IntersectVisitor::getDistanceToEyePoint(pos, withLODScale);
	};

	// void osgUtil::IntersectVisitor::apply(osg::Node & arg1)
	void apply(osg::Node & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return IntersectVisitor::apply(arg1);
	};

	// void osgUtil::IntersectVisitor::apply(osg::Geode & node)
	void apply(osg::Geode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return IntersectVisitor::apply(node);
	};

	// void osgUtil::IntersectVisitor::apply(osg::Billboard & node)
	void apply(osg::Billboard & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return IntersectVisitor::apply(node);
	};

	// void osgUtil::IntersectVisitor::apply(osg::Group & node)
	void apply(osg::Group & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return IntersectVisitor::apply(node);
	};

	// void osgUtil::IntersectVisitor::apply(osg::Transform & node)
	void apply(osg::Transform & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return IntersectVisitor::apply(node);
	};

	// void osgUtil::IntersectVisitor::apply(osg::Switch & node)
	void apply(osg::Switch & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return IntersectVisitor::apply(node);
	};

	// void osgUtil::IntersectVisitor::apply(osg::LOD & node)
	void apply(osg::LOD & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return IntersectVisitor::apply(node);
	};




};




#endif

