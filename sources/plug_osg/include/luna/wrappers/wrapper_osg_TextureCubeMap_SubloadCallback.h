#ifndef _WRAPPERS_WRAPPER_OSG_TEXTURECUBEMAP_SUBLOADCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSG_TEXTURECUBEMAP_SUBLOADCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/TextureCubeMap>

class wrapper_osg_TextureCubeMap_SubloadCallback : public osg::TextureCubeMap::SubloadCallback {
protected:
	sgt::LuaObject _obj;
	
public:
	


	// void osg::TextureCubeMap::SubloadCallback::load(const osg::TextureCubeMap & texture, osg::State & state) const
	void load(const osg::TextureCubeMap & texture, osg::State & state) const {
		THROW_IF(!_obj.pushFunction("load"),"No implementation for abstract function osg::TextureCubeMap::SubloadCallback::load");
		_obj.pushArg(&texture);
		_obj.pushArg(&state);
		return (_obj.callFunction<void>());
	};

	// void osg::TextureCubeMap::SubloadCallback::subload(const osg::TextureCubeMap & texture, osg::State & state) const
	void subload(const osg::TextureCubeMap & texture, osg::State & state) const {
		THROW_IF(!_obj.pushFunction("subload"),"No implementation for abstract function osg::TextureCubeMap::SubloadCallback::subload");
		_obj.pushArg(&texture);
		_obj.pushArg(&state);
		return (_obj.callFunction<void>());
	};




};




#endif

