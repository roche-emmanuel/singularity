#ifndef _WRAPPERS_WRAPPER_OSGVIEWER_DEPTHPARTITIONSETTINGS_H_
#define _WRAPPERS_WRAPPER_OSGVIEWER_DEPTHPARTITIONSETTINGS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgViewer/View>

class wrapper_osgViewer_DepthPartitionSettings : public osgViewer::DepthPartitionSettings {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgViewer_DepthPartitionSettings(lua_State* L, lua_Table* dum, osgViewer::DepthPartitionSettings::DepthMode mode = osgViewer::DepthPartitionSettings::BOUNDING_VOLUME) : osgViewer::DepthPartitionSettings(mode), _obj(L,-1) {};

	// bool osgViewer::DepthPartitionSettings::getDepthRange(osg::View & view, unsigned int partition, double & zNear, double & zFar)
	bool getDepthRange(osg::View & view, unsigned int partition, double & zNear, double & zFar) {
		if(_obj.pushFunction("getDepthRange")) {
			_obj.pushArg(&view);
			_obj.pushArg(partition);
			_obj.pushArg(zNear);
			_obj.pushArg(zFar);
			return (_obj.callFunction<bool>());
		}

		return DepthPartitionSettings::getDepthRange(view, partition, zNear, zFar);
	};




};




#endif

