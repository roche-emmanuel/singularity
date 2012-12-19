#ifndef _WRAPPERS_WRAPPER_OSG_CULLSETTINGS_CLAMPPROJECTIONMATRIXCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSG_CULLSETTINGS_CLAMPPROJECTIONMATRIXCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/CullSettings>

class wrapper_osg_CullSettings_ClampProjectionMatrixCallback : public osg::CullSettings::ClampProjectionMatrixCallback, public luna_wrapper_base {

public:
	


	// bool osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation(osg::Matrixf & projection, double & znear, double & zfar) const
	bool clampProjectionMatrixImplementation(osg::Matrixf & projection, double & znear, double & zfar) const {
		THROW_IF(!_obj.pushFunction("clampProjectionMatrixImplementation"),"No implementation for abstract function osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation");
		_obj.pushArg(&projection);
		_obj.pushArg(znear);
		_obj.pushArg(zfar);
		return (_obj.callFunction<bool>());
	};

	// bool osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation(osg::Matrixd & projection, double & znear, double & zfar) const
	bool clampProjectionMatrixImplementation(osg::Matrixd & projection, double & znear, double & zfar) const {
		THROW_IF(!_obj.pushFunction("clampProjectionMatrixImplementation"),"No implementation for abstract function osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation");
		_obj.pushArg(&projection);
		_obj.pushArg(znear);
		_obj.pushArg(zfar);
		return (_obj.callFunction<bool>());
	};




};




#endif

