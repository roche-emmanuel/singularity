#ifndef _WRAPPERS_WRAPPER_OSGUTIL_SIMPLIFIER_CONTINUESIMPLIFICATIONCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_SIMPLIFIER_CONTINUESIMPLIFICATIONCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/Simplifier>

class wrapper_osgUtil_Simplifier_ContinueSimplificationCallback : public osgUtil::Simplifier::ContinueSimplificationCallback {
protected:
	sgt::LuaObject _obj;
	
public:
	


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




};




#endif

