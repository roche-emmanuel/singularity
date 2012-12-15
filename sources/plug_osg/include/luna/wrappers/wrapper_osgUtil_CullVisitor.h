#ifndef _WRAPPERS_WRAPPER_OSGUTIL_CULLVISITOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_CULLVISITOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/CullVisitor>

class wrapper_osgUtil_CullVisitor : public osgUtil::CullVisitor {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgUtil_CullVisitor(lua_State* L, lua_Table* dum) : osgUtil::CullVisitor(), _obj(L,-1) {};
	wrapper_osgUtil_CullVisitor(lua_State* L, lua_Table* dum, const osgUtil::CullVisitor & arg1) : osgUtil::CullVisitor(arg1), _obj(L,-1) {};

	// void osg::CullSettings::setDefaults()
	void setDefaults() {
		if(_obj.pushFunction("setDefaults")) {
			return (_obj.callFunction<void>());
		}

		return CullVisitor::setDefaults();
	};

	// void osg::CullSettings::inheritCullSettings(const osg::CullSettings & settings)
	void inheritCullSettings(const osg::CullSettings & settings) {
		if(_obj.pushFunction("inheritCullSettings")) {
			_obj.pushArg(&settings);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::inheritCullSettings(settings);
	};

	// void osg::CullSettings::inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask)
	void inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask) {
		if(_obj.pushFunction("inheritCullSettings")) {
			_obj.pushArg(&settings);
			_obj.pushArg(inheritanceMask);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::inheritCullSettings(settings, inheritanceMask);
	};

	// const char * osgUtil::CullVisitor::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return CullVisitor::libraryName();
	};

	// const char * osgUtil::CullVisitor::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return CullVisitor::className();
	};

	// osgUtil::CullVisitor * osgUtil::CullVisitor::clone() const
	osgUtil::CullVisitor * clone() const {
		if(_obj.pushFunction("clone")) {
			return (_obj.callFunction<osgUtil::CullVisitor*>());
		}

		return CullVisitor::clone();
	};

	// void osgUtil::CullVisitor::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			return (_obj.callFunction<void>());
		}

		return CullVisitor::reset();
	};

	// osg::Vec3f osgUtil::CullVisitor::getEyePoint() const
	osg::Vec3f getEyePoint() const {
		if(_obj.pushFunction("getEyePoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return CullVisitor::getEyePoint();
	};

	// osg::Vec3f osgUtil::CullVisitor::getViewPoint() const
	osg::Vec3f getViewPoint() const {
		if(_obj.pushFunction("getViewPoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return CullVisitor::getViewPoint();
	};

	// float osgUtil::CullVisitor::getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return CullVisitor::getDistanceToEyePoint(arg1, arg2);
	};

	// float osgUtil::CullVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceFromEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return CullVisitor::getDistanceFromEyePoint(arg1, arg2);
	};

	// float osgUtil::CullVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToViewPoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return CullVisitor::getDistanceToViewPoint(arg1, arg2);
	};

	// void osgUtil::CullVisitor::apply(osg::Node & arg1)
	void apply(osg::Node & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(arg1);
	};

	// void osgUtil::CullVisitor::apply(osg::Geode & node)
	void apply(osg::Geode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(node);
	};

	// void osgUtil::CullVisitor::apply(osg::Billboard & node)
	void apply(osg::Billboard & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(node);
	};

	// void osgUtil::CullVisitor::apply(osg::LightSource & node)
	void apply(osg::LightSource & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(node);
	};

	// void osgUtil::CullVisitor::apply(osg::ClipNode & node)
	void apply(osg::ClipNode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(node);
	};

	// void osgUtil::CullVisitor::apply(osg::TexGenNode & node)
	void apply(osg::TexGenNode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(node);
	};

	// void osgUtil::CullVisitor::apply(osg::Group & node)
	void apply(osg::Group & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(node);
	};

	// void osgUtil::CullVisitor::apply(osg::Transform & node)
	void apply(osg::Transform & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(node);
	};

	// void osgUtil::CullVisitor::apply(osg::Projection & node)
	void apply(osg::Projection & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(node);
	};

	// void osgUtil::CullVisitor::apply(osg::Switch & node)
	void apply(osg::Switch & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(node);
	};

	// void osgUtil::CullVisitor::apply(osg::LOD & node)
	void apply(osg::LOD & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(node);
	};

	// void osgUtil::CullVisitor::apply(osg::ClearNode & node)
	void apply(osg::ClearNode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(node);
	};

	// void osgUtil::CullVisitor::apply(osg::Camera & node)
	void apply(osg::Camera & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(node);
	};

	// void osgUtil::CullVisitor::apply(osg::OccluderNode & node)
	void apply(osg::OccluderNode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(node);
	};

	// void osgUtil::CullVisitor::apply(osg::OcclusionQueryNode & node)
	void apply(osg::OcclusionQueryNode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(node);
	};

	// void osgUtil::CullVisitor::popProjectionMatrix()
	void popProjectionMatrix() {
		if(_obj.pushFunction("popProjectionMatrix")) {
			return (_obj.callFunction<void>());
		}

		return CullVisitor::popProjectionMatrix();
	};

	// bool osgUtil::CullVisitor::clampProjectionMatrixImplementation(osg::Matrixf & projection, double & znear, double & zfar) const
	bool clampProjectionMatrixImplementation(osg::Matrixf & projection, double & znear, double & zfar) const {
		if(_obj.pushFunction("clampProjectionMatrixImplementation")) {
			_obj.pushArg(&projection);
			_obj.pushArg(znear);
			_obj.pushArg(zfar);
			return (_obj.callFunction<bool>());
		}

		return CullVisitor::clampProjectionMatrixImplementation(projection, znear, zfar);
	};

	// bool osgUtil::CullVisitor::clampProjectionMatrixImplementation(osg::Matrixd & projection, double & znear, double & zfar) const
	bool clampProjectionMatrixImplementation(osg::Matrixd & projection, double & znear, double & zfar) const {
		if(_obj.pushFunction("clampProjectionMatrixImplementation")) {
			_obj.pushArg(&projection);
			_obj.pushArg(znear);
			_obj.pushArg(zfar);
			return (_obj.callFunction<bool>());
		}

		return CullVisitor::clampProjectionMatrixImplementation(projection, znear, zfar);
	};




};




#endif

