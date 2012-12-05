#ifndef _WRAPPERS_WRAPPER_OSG_TEXTURE_D_SUBLOADCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSG_TEXTURE_D_SUBLOADCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Texture1D>

class wrapper_osg_Texture1D_SubloadCallback : public osg::Texture1D::SubloadCallback {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_Texture1D_SubloadCallback(lua_State* L, lua_Table* dum) : osg::Texture1D::SubloadCallback(), _obj(L,-1) {};

	// void osg::Texture1D::SubloadCallback::load(const osg::Texture1D & texture, osg::State & state) const
	void load(const osg::Texture1D & texture, osg::State & state) const {
		THROW_IF(!_obj.pushFunction("load"),"No implementation for abstract function osg::Texture1D::SubloadCallback::load");
		_obj.pushArg(&texture);
		_obj.pushArg(&state);
		return (_obj.callFunction<void>());
	};

	// void osg::Texture1D::SubloadCallback::subload(const osg::Texture1D & texture, osg::State & state) const
	void subload(const osg::Texture1D & texture, osg::State & state) const {
		THROW_IF(!_obj.pushFunction("subload"),"No implementation for abstract function osg::Texture1D::SubloadCallback::subload");
		_obj.pushArg(&texture);
		_obj.pushArg(&state);
		return (_obj.callFunction<void>());
	};




};




#endif
