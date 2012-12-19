#ifndef _WRAPPERS_WRAPPER_OSG_COLLECTOCCLUDERSVISITOR_H_
#define _WRAPPERS_WRAPPER_OSG_COLLECTOCCLUDERSVISITOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/CollectOccludersVisitor>

class wrapper_osg_CollectOccludersVisitor : public osg::CollectOccludersVisitor, public luna_wrapper_base {

public:
	

	wrapper_osg_CollectOccludersVisitor(lua_State* L, lua_Table* dum) : osg::CollectOccludersVisitor(), luna_wrapper_base(L) {};

	// osg::Vec3f osg::NodeVisitor::getEyePoint() const
	osg::Vec3f getEyePoint() const {
		if(_obj.pushFunction("getEyePoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return CollectOccludersVisitor::getEyePoint();
	};

	// osg::Vec3f osg::NodeVisitor::getViewPoint() const
	osg::Vec3f getViewPoint() const {
		if(_obj.pushFunction("getViewPoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return CollectOccludersVisitor::getViewPoint();
	};

	// void osg::CullSettings::setDefaults()
	void setDefaults() {
		if(_obj.pushFunction("setDefaults")) {
			return (_obj.callFunction<void>());
		}

		return CollectOccludersVisitor::setDefaults();
	};

	// void osg::CullSettings::inheritCullSettings(const osg::CullSettings & settings)
	void inheritCullSettings(const osg::CullSettings & settings) {
		if(_obj.pushFunction("inheritCullSettings")) {
			_obj.pushArg(&settings);
			return (_obj.callFunction<void>());
		}

		return CollectOccludersVisitor::inheritCullSettings(settings);
	};

	// void osg::CullSettings::inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask)
	void inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask) {
		if(_obj.pushFunction("inheritCullSettings")) {
			_obj.pushArg(&settings);
			_obj.pushArg(inheritanceMask);
			return (_obj.callFunction<void>());
		}

		return CollectOccludersVisitor::inheritCullSettings(settings, inheritanceMask);
	};

	// const char * osg::CollectOccludersVisitor::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return CollectOccludersVisitor::libraryName();
	};

	// const char * osg::CollectOccludersVisitor::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return CollectOccludersVisitor::className();
	};

	// osg::CollectOccludersVisitor * osg::CollectOccludersVisitor::cloneType() const
	osg::CollectOccludersVisitor * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::CollectOccludersVisitor*>());
		}

		return CollectOccludersVisitor::cloneType();
	};

	// void osg::CollectOccludersVisitor::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			return (_obj.callFunction<void>());
		}

		return CollectOccludersVisitor::reset();
	};

	// float osg::CollectOccludersVisitor::getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return CollectOccludersVisitor::getDistanceToEyePoint(arg1, arg2);
	};

	// float osg::CollectOccludersVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToViewPoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return CollectOccludersVisitor::getDistanceToViewPoint(arg1, arg2);
	};

	// float osg::CollectOccludersVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceFromEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return CollectOccludersVisitor::getDistanceFromEyePoint(arg1, arg2);
	};

	// void osg::CollectOccludersVisitor::apply(osg::Node & arg1)
	void apply(osg::Node & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return CollectOccludersVisitor::apply(arg1);
	};

	// void osg::CollectOccludersVisitor::apply(osg::Transform & node)
	void apply(osg::Transform & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CollectOccludersVisitor::apply(node);
	};

	// void osg::CollectOccludersVisitor::apply(osg::Projection & node)
	void apply(osg::Projection & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CollectOccludersVisitor::apply(node);
	};

	// void osg::CollectOccludersVisitor::apply(osg::Switch & node)
	void apply(osg::Switch & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CollectOccludersVisitor::apply(node);
	};

	// void osg::CollectOccludersVisitor::apply(osg::LOD & node)
	void apply(osg::LOD & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CollectOccludersVisitor::apply(node);
	};

	// void osg::CollectOccludersVisitor::apply(osg::OccluderNode & node)
	void apply(osg::OccluderNode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CollectOccludersVisitor::apply(node);
	};




};




#endif

