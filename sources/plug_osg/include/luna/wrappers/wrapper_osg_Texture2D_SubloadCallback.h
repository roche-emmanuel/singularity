#ifndef _WRAPPERS_WRAPPER_OSG_TEXTURE_D_SUBLOADCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSG_TEXTURE_D_SUBLOADCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Texture2D>

class wrapper_osg_Texture2D_SubloadCallback : public osg::Texture2D::SubloadCallback {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_Texture2D_SubloadCallback(lua_State* L, lua_Table* dum) : osg::Texture2D::SubloadCallback(), _obj(L,-1) {};

	// bool osg::Texture2D::SubloadCallback::textureObjectValid(const osg::Texture2D & texture, osg::State & state) const
	bool textureObjectValid(const osg::Texture2D & texture, osg::State & state) const {
		if(_obj.pushFunction("textureObjectValid")) {
			_obj.pushArg(&texture);
			_obj.pushArg(&state);
			return (_obj.callFunction<bool>());
		}

		return osg::Texture2D::SubloadCallback::textureObjectValid(texture, state);
	};

	// osg::Texture::TextureObject * osg::Texture2D::SubloadCallback::generateTextureObject(const osg::Texture2D & texture, osg::State & state) const
	osg::Texture::TextureObject * generateTextureObject(const osg::Texture2D & texture, osg::State & state) const {
		if(_obj.pushFunction("generateTextureObject")) {
			_obj.pushArg(&texture);
			_obj.pushArg(&state);
			return (_obj.callFunction<osg::Texture::TextureObject*>());
		}

		return osg::Texture2D::SubloadCallback::generateTextureObject(texture, state);
	};

	// void osg::Texture2D::SubloadCallback::load(const osg::Texture2D & texture, osg::State & state) const
	void load(const osg::Texture2D & texture, osg::State & state) const {
		THROW_IF(!_obj.pushFunction("load"),"No implementation for abstract function osg::Texture2D::SubloadCallback::load");
		_obj.pushArg(&texture);
		_obj.pushArg(&state);
		return (_obj.callFunction<void>());
	};

	// void osg::Texture2D::SubloadCallback::subload(const osg::Texture2D & texture, osg::State & state) const
	void subload(const osg::Texture2D & texture, osg::State & state) const {
		THROW_IF(!_obj.pushFunction("subload"),"No implementation for abstract function osg::Texture2D::SubloadCallback::subload");
		_obj.pushArg(&texture);
		_obj.pushArg(&state);
		return (_obj.callFunction<void>());
	};




};




#endif

