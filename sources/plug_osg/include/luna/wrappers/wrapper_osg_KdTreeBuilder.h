#ifndef _WRAPPERS_WRAPPER_OSG_KDTREEBUILDER_H_
#define _WRAPPERS_WRAPPER_OSG_KDTREEBUILDER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/KdTree>

class wrapper_osg_KdTreeBuilder : public osg::KdTreeBuilder, public luna_wrapper_base {

public:
		

	~wrapper_osg_KdTreeBuilder() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_KdTreeBuilder(lua_State* L, lua_Table* dum) : osg::KdTreeBuilder(), luna_wrapper_base(L) {};
	wrapper_osg_KdTreeBuilder(lua_State* L, lua_Table* dum, const osg::KdTreeBuilder & rhs) : osg::KdTreeBuilder(rhs), luna_wrapper_base(L) {};

	// void osg::NodeVisitor::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			return (_obj.callFunction<void>());
		}

		return KdTreeBuilder::reset();
	};

	// osg::Vec3f osg::NodeVisitor::getEyePoint() const
	osg::Vec3f getEyePoint() const {
		if(_obj.pushFunction("getEyePoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return KdTreeBuilder::getEyePoint();
	};

	// osg::Vec3f osg::NodeVisitor::getViewPoint() const
	osg::Vec3f getViewPoint() const {
		if(_obj.pushFunction("getViewPoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return KdTreeBuilder::getViewPoint();
	};

	// float osg::NodeVisitor::getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return KdTreeBuilder::getDistanceToEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceFromEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return KdTreeBuilder::getDistanceFromEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToViewPoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return KdTreeBuilder::getDistanceToViewPoint(arg1, arg2);
	};

	// const char * osg::KdTreeBuilder::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return KdTreeBuilder::libraryName();
	};

	// const char * osg::KdTreeBuilder::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return KdTreeBuilder::className();
	};

	// osg::KdTreeBuilder * osg::KdTreeBuilder::clone()
	osg::KdTreeBuilder * clone() {
		if(_obj.pushFunction("clone")) {
			return (_obj.callFunction<osg::KdTreeBuilder*>());
		}

		return KdTreeBuilder::clone();
	};

	// void osg::KdTreeBuilder::apply(osg::Geode & geode)
	void apply(osg::Geode & geode) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&geode);
			return (_obj.callFunction<void>());
		}

		return KdTreeBuilder::apply(geode);
	};




};




#endif

