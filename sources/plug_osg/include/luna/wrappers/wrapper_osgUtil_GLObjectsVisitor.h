#ifndef _WRAPPERS_WRAPPER_OSGUTIL_GLOBJECTSVISITOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_GLOBJECTSVISITOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/GLObjectsVisitor>

class wrapper_osgUtil_GLObjectsVisitor : public osgUtil::GLObjectsVisitor, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_GLObjectsVisitor() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_GLObjectsVisitor(lua_State* L, lua_Table* dum, unsigned int mode = osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES) : osgUtil::GLObjectsVisitor(mode), luna_wrapper_base(L) {};

	// osg::Vec3f osg::NodeVisitor::getEyePoint() const
	osg::Vec3f getEyePoint() const {
		if(_obj.pushFunction("getEyePoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return GLObjectsVisitor::getEyePoint();
	};

	// osg::Vec3f osg::NodeVisitor::getViewPoint() const
	osg::Vec3f getViewPoint() const {
		if(_obj.pushFunction("getViewPoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return GLObjectsVisitor::getViewPoint();
	};

	// float osg::NodeVisitor::getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return GLObjectsVisitor::getDistanceToEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceFromEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return GLObjectsVisitor::getDistanceFromEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToViewPoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return GLObjectsVisitor::getDistanceToViewPoint(arg1, arg2);
	};

	// const char * osgUtil::GLObjectsVisitor::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return GLObjectsVisitor::libraryName();
	};

	// const char * osgUtil::GLObjectsVisitor::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return GLObjectsVisitor::className();
	};

	// void osgUtil::GLObjectsVisitor::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			return (_obj.callFunction<void>());
		}

		return GLObjectsVisitor::reset();
	};

	// void osgUtil::GLObjectsVisitor::apply(osg::Node & node)
	void apply(osg::Node & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return GLObjectsVisitor::apply(node);
	};

	// void osgUtil::GLObjectsVisitor::apply(osg::Geode & node)
	void apply(osg::Geode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return GLObjectsVisitor::apply(node);
	};




};




#endif

