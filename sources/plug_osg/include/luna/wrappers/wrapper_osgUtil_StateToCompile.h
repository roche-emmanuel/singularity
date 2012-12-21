#ifndef _WRAPPERS_WRAPPER_OSGUTIL_STATETOCOMPILE_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_STATETOCOMPILE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/IncrementalCompileOperation>

class wrapper_osgUtil_StateToCompile : public osgUtil::StateToCompile, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_StateToCompile() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_StateToCompile(lua_State* L, lua_Table* dum, unsigned int mode) : osgUtil::StateToCompile(mode), luna_wrapper_base(L) {};

	// const char * osg::NodeVisitor::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return StateToCompile::libraryName();
	};

	// const char * osg::NodeVisitor::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return StateToCompile::className();
	};

	// void osg::NodeVisitor::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			return (_obj.callFunction<void>());
		}

		return StateToCompile::reset();
	};

	// osg::Vec3f osg::NodeVisitor::getEyePoint() const
	osg::Vec3f getEyePoint() const {
		if(_obj.pushFunction("getEyePoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return StateToCompile::getEyePoint();
	};

	// osg::Vec3f osg::NodeVisitor::getViewPoint() const
	osg::Vec3f getViewPoint() const {
		if(_obj.pushFunction("getViewPoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return StateToCompile::getViewPoint();
	};

	// float osg::NodeVisitor::getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return StateToCompile::getDistanceToEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceFromEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return StateToCompile::getDistanceFromEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToViewPoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return StateToCompile::getDistanceToViewPoint(arg1, arg2);
	};

	// void osgUtil::StateToCompile::apply(osg::Node & node)
	void apply(osg::Node & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return StateToCompile::apply(node);
	};

	// void osgUtil::StateToCompile::apply(osg::Geode & node)
	void apply(osg::Geode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return StateToCompile::apply(node);
	};

	// void osgUtil::StateToCompile::apply(osg::Drawable & drawable)
	void apply(osg::Drawable & drawable) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&drawable);
			return (_obj.callFunction<void>());
		}

		return StateToCompile::apply(drawable);
	};

	// void osgUtil::StateToCompile::apply(osg::StateSet & stateset)
	void apply(osg::StateSet & stateset) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&stateset);
			return (_obj.callFunction<void>());
		}

		return StateToCompile::apply(stateset);
	};

	// void osgUtil::StateToCompile::apply(osg::Texture & texture)
	void apply(osg::Texture & texture) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&texture);
			return (_obj.callFunction<void>());
		}

		return StateToCompile::apply(texture);
	};




// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
	return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
};

// void osg::Referenced::deleteUsingDeleteHandler() const
void public_deleteUsingDeleteHandler() const {
	return osg::Referenced::deleteUsingDeleteHandler();
};


};




#endif

