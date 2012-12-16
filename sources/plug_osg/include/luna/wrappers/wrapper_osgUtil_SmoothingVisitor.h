#ifndef _WRAPPERS_WRAPPER_OSGUTIL_SMOOTHINGVISITOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_SMOOTHINGVISITOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/SmoothingVisitor>

class wrapper_osgUtil_SmoothingVisitor : public osgUtil::SmoothingVisitor, public luna_wrapper_base {

public:
	

	wrapper_osgUtil_SmoothingVisitor(lua_State* L, lua_Table* dum) : osgUtil::SmoothingVisitor(), luna_wrapper_base(L) {};

	// const char * osg::NodeVisitor::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return SmoothingVisitor::libraryName();
	};

	// const char * osg::NodeVisitor::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return SmoothingVisitor::className();
	};

	// void osg::NodeVisitor::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			return (_obj.callFunction<void>());
		}

		return SmoothingVisitor::reset();
	};

	// osg::Vec3f osg::NodeVisitor::getEyePoint() const
	osg::Vec3f getEyePoint() const {
		if(_obj.pushFunction("getEyePoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return SmoothingVisitor::getEyePoint();
	};

	// osg::Vec3f osg::NodeVisitor::getViewPoint() const
	osg::Vec3f getViewPoint() const {
		if(_obj.pushFunction("getViewPoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return SmoothingVisitor::getViewPoint();
	};

	// float osg::NodeVisitor::getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return SmoothingVisitor::getDistanceToEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceFromEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return SmoothingVisitor::getDistanceFromEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToViewPoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return SmoothingVisitor::getDistanceToViewPoint(arg1, arg2);
	};

	// void osgUtil::SmoothingVisitor::apply(osg::Geode & geode)
	void apply(osg::Geode & geode) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&geode);
			return (_obj.callFunction<void>());
		}

		return SmoothingVisitor::apply(geode);
	};




};




#endif

