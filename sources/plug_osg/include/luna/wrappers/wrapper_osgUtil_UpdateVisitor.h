#ifndef _WRAPPERS_WRAPPER_OSGUTIL_UPDATEVISITOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_UPDATEVISITOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/UpdateVisitor>

class wrapper_osgUtil_UpdateVisitor : public osgUtil::UpdateVisitor, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_UpdateVisitor() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_UpdateVisitor(lua_State* L, lua_Table* dum) : osgUtil::UpdateVisitor(), luna_wrapper_base(L) {};

	// osg::Vec3f osg::NodeVisitor::getEyePoint() const
	osg::Vec3f getEyePoint() const {
		if(_obj.pushFunction("getEyePoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return UpdateVisitor::getEyePoint();
	};

	// osg::Vec3f osg::NodeVisitor::getViewPoint() const
	osg::Vec3f getViewPoint() const {
		if(_obj.pushFunction("getViewPoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return UpdateVisitor::getViewPoint();
	};

	// float osg::NodeVisitor::getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return UpdateVisitor::getDistanceToEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceFromEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return UpdateVisitor::getDistanceFromEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToViewPoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return UpdateVisitor::getDistanceToViewPoint(arg1, arg2);
	};

	// const char * osgUtil::UpdateVisitor::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return UpdateVisitor::libraryName();
	};

	// const char * osgUtil::UpdateVisitor::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return UpdateVisitor::className();
	};

	// void osgUtil::UpdateVisitor::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			return (_obj.callFunction<void>());
		}

		return UpdateVisitor::reset();
	};

	// void osgUtil::UpdateVisitor::apply(osg::Node & node)
	void apply(osg::Node & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return UpdateVisitor::apply(node);
	};

	// void osgUtil::UpdateVisitor::apply(osg::Geode & node)
	void apply(osg::Geode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return UpdateVisitor::apply(node);
	};

	// void osgUtil::UpdateVisitor::apply(osg::Billboard & node)
	void apply(osg::Billboard & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return UpdateVisitor::apply(node);
	};

	// void osgUtil::UpdateVisitor::apply(osg::LightSource & node)
	void apply(osg::LightSource & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return UpdateVisitor::apply(node);
	};

	// void osgUtil::UpdateVisitor::apply(osg::Group & node)
	void apply(osg::Group & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return UpdateVisitor::apply(node);
	};

	// void osgUtil::UpdateVisitor::apply(osg::Transform & node)
	void apply(osg::Transform & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return UpdateVisitor::apply(node);
	};

	// void osgUtil::UpdateVisitor::apply(osg::Projection & node)
	void apply(osg::Projection & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return UpdateVisitor::apply(node);
	};

	// void osgUtil::UpdateVisitor::apply(osg::Switch & node)
	void apply(osg::Switch & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return UpdateVisitor::apply(node);
	};

	// void osgUtil::UpdateVisitor::apply(osg::LOD & node)
	void apply(osg::LOD & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return UpdateVisitor::apply(node);
	};

	// void osgUtil::UpdateVisitor::apply(osg::OccluderNode & node)
	void apply(osg::OccluderNode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return UpdateVisitor::apply(node);
	};




};




#endif

