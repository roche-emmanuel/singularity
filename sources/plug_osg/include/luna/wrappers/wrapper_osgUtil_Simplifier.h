#ifndef _WRAPPERS_WRAPPER_OSGUTIL_SIMPLIFIER_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_SIMPLIFIER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/Simplifier>

class wrapper_osgUtil_Simplifier : public osgUtil::Simplifier, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_Simplifier() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_Simplifier(lua_State* L, lua_Table* dum, double sampleRatio = 1.0, double maximumError = FLT_MAX, double maximumLength = 0.0) : osgUtil::Simplifier(sampleRatio, maximumError, maximumLength), luna_wrapper_base(L) {};

	// void osg::NodeVisitor::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			return (_obj.callFunction<void>());
		}

		return Simplifier::reset();
	};

	// osg::Vec3f osg::NodeVisitor::getEyePoint() const
	osg::Vec3f getEyePoint() const {
		if(_obj.pushFunction("getEyePoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return Simplifier::getEyePoint();
	};

	// osg::Vec3f osg::NodeVisitor::getViewPoint() const
	osg::Vec3f getViewPoint() const {
		if(_obj.pushFunction("getViewPoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return Simplifier::getViewPoint();
	};

	// float osg::NodeVisitor::getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return Simplifier::getDistanceToEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceFromEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return Simplifier::getDistanceFromEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToViewPoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return Simplifier::getDistanceToViewPoint(arg1, arg2);
	};

	// const char * osgUtil::Simplifier::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return Simplifier::libraryName();
	};

	// const char * osgUtil::Simplifier::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return Simplifier::className();
	};

	// bool osgUtil::Simplifier::continueSimplificationImplementation(float nextError, unsigned int numOriginalPrimitives, unsigned int numRemainingPrimitives) const
	bool continueSimplificationImplementation(float nextError, unsigned int numOriginalPrimitives, unsigned int numRemainingPrimitives) const {
		if(_obj.pushFunction("continueSimplificationImplementation")) {
			_obj.pushArg(nextError);
			_obj.pushArg(numOriginalPrimitives);
			_obj.pushArg(numRemainingPrimitives);
			return (_obj.callFunction<bool>());
		}

		return Simplifier::continueSimplificationImplementation(nextError, numOriginalPrimitives, numRemainingPrimitives);
	};

	// void osgUtil::Simplifier::apply(osg::Geode & geode)
	void apply(osg::Geode & geode) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&geode);
			return (_obj.callFunction<void>());
		}

		return Simplifier::apply(geode);
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

