#ifndef _WRAPPERS_WRAPPER_OSGUTIL_SIMPLIFIER_CONTINUESIMPLIFICATIONCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_SIMPLIFIER_CONTINUESIMPLIFICATIONCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/Simplifier>

class wrapper_osgUtil_Simplifier_ContinueSimplificationCallback : public osgUtil::Simplifier::ContinueSimplificationCallback, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_Simplifier_ContinueSimplificationCallback() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	

	// bool osgUtil::Simplifier::ContinueSimplificationCallback::continueSimplification(const osgUtil::Simplifier & simplifier, float nextError, unsigned int numOriginalPrimitives, unsigned int numRemainingPrimitives) const
	bool continueSimplification(const osgUtil::Simplifier & simplifier, float nextError, unsigned int numOriginalPrimitives, unsigned int numRemainingPrimitives) const {
		if(_obj.pushFunction("continueSimplification")) {
			_obj.pushArg(&simplifier);
			_obj.pushArg(nextError);
			_obj.pushArg(numOriginalPrimitives);
			_obj.pushArg(numRemainingPrimitives);
			return (_obj.callFunction<bool>());
		}

		return ContinueSimplificationCallback::continueSimplification(simplifier, nextError, numOriginalPrimitives, numRemainingPrimitives);
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

