#ifndef _WRAPPERS_WRAPPER_OSGUTIL_BASEOPTIMIZERVISITOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_BASEOPTIMIZERVISITOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/Optimizer>

class wrapper_osgUtil_BaseOptimizerVisitor : public osgUtil::BaseOptimizerVisitor {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgUtil_BaseOptimizerVisitor(lua_State* L, lua_Table* dum, osgUtil::Optimizer * optimizer, unsigned int operation) : osgUtil::BaseOptimizerVisitor(optimizer, operation), _obj(L,-1) {};

	// const char * osg::NodeVisitor::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::NodeVisitor::libraryName();
	};

	// const char * osg::NodeVisitor::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::NodeVisitor::className();
	};

	// void osg::NodeVisitor::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			return (_obj.callFunction<void>());
		}

		return osg::NodeVisitor::reset();
	};

	// osg::Vec3f osg::NodeVisitor::getEyePoint() const
	osg::Vec3f getEyePoint() const {
		if(_obj.pushFunction("getEyePoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return osg::NodeVisitor::getEyePoint();
	};

	// osg::Vec3f osg::NodeVisitor::getViewPoint() const
	osg::Vec3f getViewPoint() const {
		if(_obj.pushFunction("getViewPoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return osg::NodeVisitor::getViewPoint();
	};

	// float osg::NodeVisitor::getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return osg::NodeVisitor::getDistanceToEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceFromEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return osg::NodeVisitor::getDistanceFromEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToViewPoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return osg::NodeVisitor::getDistanceToViewPoint(arg1, arg2);
	};

	// void osg::NodeVisitor::apply(osg::Node & node)
	void apply(osg::Node & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return osg::NodeVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::Geode & node)
	void apply(osg::Geode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return osg::NodeVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::Billboard & node)
	void apply(osg::Billboard & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return osg::NodeVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::Group & node)
	void apply(osg::Group & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return osg::NodeVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::Projection & node)
	void apply(osg::Projection & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return osg::NodeVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::CoordinateSystemNode & node)
	void apply(osg::CoordinateSystemNode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return osg::NodeVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::ClipNode & node)
	void apply(osg::ClipNode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return osg::NodeVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::TexGenNode & node)
	void apply(osg::TexGenNode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return osg::NodeVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::LightSource & node)
	void apply(osg::LightSource & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return osg::NodeVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::Transform & node)
	void apply(osg::Transform & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return osg::NodeVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::Camera & node)
	void apply(osg::Camera & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return osg::NodeVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::CameraView & node)
	void apply(osg::CameraView & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return osg::NodeVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::MatrixTransform & node)
	void apply(osg::MatrixTransform & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return osg::NodeVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::PositionAttitudeTransform & node)
	void apply(osg::PositionAttitudeTransform & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return osg::NodeVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::Switch & node)
	void apply(osg::Switch & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return osg::NodeVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::Sequence & node)
	void apply(osg::Sequence & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return osg::NodeVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::LOD & node)
	void apply(osg::LOD & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return osg::NodeVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::PagedLOD & node)
	void apply(osg::PagedLOD & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return osg::NodeVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::ClearNode & node)
	void apply(osg::ClearNode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return osg::NodeVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::OccluderNode & node)
	void apply(osg::OccluderNode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return osg::NodeVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::OcclusionQueryNode & node)
	void apply(osg::OcclusionQueryNode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return osg::NodeVisitor::apply(node);
	};




};




#endif
