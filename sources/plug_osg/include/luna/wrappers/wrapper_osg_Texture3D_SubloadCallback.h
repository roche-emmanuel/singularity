#ifndef _WRAPPERS_WRAPPER_OSG_TEXTURE_D_SUBLOADCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSG_TEXTURE_D_SUBLOADCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Texture3D>

class wrapper_osg_Texture3D_SubloadCallback : public osg::Texture3D::SubloadCallback {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_Texture3D_SubloadCallback(lua_State* L, lua_Table* dum) : osg::Texture3D::SubloadCallback(), _obj(L,-1) {};

	// void osg::Texture3D::SubloadCallback::load(const osg::Texture3D & texture, osg::State & state) const
	void load(const osg::Texture3D & texture, osg::State & state) const {
		THROW_IF(!_obj.pushFunction("load"),"No implementation for abstract function osg::Texture3D::SubloadCallback::load");
		_obj.pushArg(&texture);
		_obj.pushArg(&state);
		return (_obj.callFunction<void>());
	};

	// void osg::Texture3D::SubloadCallback::subload(const osg::Texture3D & texture, osg::State & state) const
	void subload(const osg::Texture3D & texture, osg::State & state) const {
		THROW_IF(!_obj.pushFunction("subload"),"No implementation for abstract function osg::Texture3D::SubloadCallback::subload");
		_obj.pushArg(&texture);
		_obj.pushArg(&state);
		return (_obj.callFunction<void>());
	};




};




#endif

