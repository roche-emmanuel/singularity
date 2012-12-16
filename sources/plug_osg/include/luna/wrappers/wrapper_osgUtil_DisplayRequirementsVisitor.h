#ifndef _WRAPPERS_WRAPPER_OSGUTIL_DISPLAYREQUIREMENTSVISITOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_DISPLAYREQUIREMENTSVISITOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/DisplayRequirementsVisitor>

class wrapper_osgUtil_DisplayRequirementsVisitor : public osgUtil::DisplayRequirementsVisitor, public luna_wrapper_base {

public:
	

	wrapper_osgUtil_DisplayRequirementsVisitor(lua_State* L, lua_Table* dum) : osgUtil::DisplayRequirementsVisitor(), luna_wrapper_base(L) {};

	// void osg::NodeVisitor::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			return (_obj.callFunction<void>());
		}

		return DisplayRequirementsVisitor::reset();
	};

	// osg::Vec3f osg::NodeVisitor::getEyePoint() const
	osg::Vec3f getEyePoint() const {
		if(_obj.pushFunction("getEyePoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return DisplayRequirementsVisitor::getEyePoint();
	};

	// osg::Vec3f osg::NodeVisitor::getViewPoint() const
	osg::Vec3f getViewPoint() const {
		if(_obj.pushFunction("getViewPoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return DisplayRequirementsVisitor::getViewPoint();
	};

	// float osg::NodeVisitor::getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return DisplayRequirementsVisitor::getDistanceToEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceFromEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return DisplayRequirementsVisitor::getDistanceFromEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToViewPoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return DisplayRequirementsVisitor::getDistanceToViewPoint(arg1, arg2);
	};

	// const char * osgUtil::DisplayRequirementsVisitor::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return DisplayRequirementsVisitor::libraryName();
	};

	// const char * osgUtil::DisplayRequirementsVisitor::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return DisplayRequirementsVisitor::className();
	};

	// void osgUtil::DisplayRequirementsVisitor::applyStateSet(osg::StateSet & stateset)
	void applyStateSet(osg::StateSet & stateset) {
		if(_obj.pushFunction("applyStateSet")) {
			_obj.pushArg(&stateset);
			return (_obj.callFunction<void>());
		}

		return DisplayRequirementsVisitor::applyStateSet(stateset);
	};

	// void osgUtil::DisplayRequirementsVisitor::apply(osg::Node & node)
	void apply(osg::Node & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return DisplayRequirementsVisitor::apply(node);
	};

	// void osgUtil::DisplayRequirementsVisitor::apply(osg::Geode & geode)
	void apply(osg::Geode & geode) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&geode);
			return (_obj.callFunction<void>());
		}

		return DisplayRequirementsVisitor::apply(geode);
	};




};




#endif

