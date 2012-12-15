#ifndef _WRAPPERS_WRAPPER_OSGGA_CAMERAMANIPULATOR_COORDINATEFRAMECALLBACK_H_
#define _WRAPPERS_WRAPPER_OSGGA_CAMERAMANIPULATOR_COORDINATEFRAMECALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgGA/CameraManipulator>

class wrapper_osgGA_CameraManipulator_CoordinateFrameCallback : public osgGA::CameraManipulator::CoordinateFrameCallback {
protected:
	sgt::LuaObject _obj;
	
public:
	


	// osg::Matrixd osgGA::CameraManipulator::CoordinateFrameCallback::getCoordinateFrame(const osg::Vec3d & position) const
	osg::Matrixd getCoordinateFrame(const osg::Vec3d & position) const {
		THROW_IF(!_obj.pushFunction("getCoordinateFrame"),"No implementation for abstract function osgGA::CameraManipulator::CoordinateFrameCallback::getCoordinateFrame");
		_obj.pushArg(&position);
		return *(_obj.callFunction<osg::Matrixd*>());
	};




};




#endif

