#ifndef _WRAPPERS_WRAPPER_OSG_CULLSETTINGS_CLAMPPROJECTIONMATRIXCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSG_CULLSETTINGS_CLAMPPROJECTIONMATRIXCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/CullSettings>

class wrapper_osg_CullSettings_ClampProjectionMatrixCallback : public osg::CullSettings::ClampProjectionMatrixCallback, public luna_wrapper_base {

public:
		

	~wrapper_osg_CullSettings_ClampProjectionMatrixCallback() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	

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

