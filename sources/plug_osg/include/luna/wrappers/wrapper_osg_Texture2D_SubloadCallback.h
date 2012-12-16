#ifndef _WRAPPERS_WRAPPER_OSG_TEXTURE_D_SUBLOADCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSG_TEXTURE_D_SUBLOADCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Texture2D>

class wrapper_osg_Texture2D_SubloadCallback : public osg::Texture2D::SubloadCallback, public luna_wrapper_base {

public:
	


	// bool osg::Texture2D::SubloadCallback::textureObjectValid(const osg::Texture2D & texture, osg::State & state) const
	bool textureObjectValid(const osg::Texture2D & texture, osg::State & state) const {
		if(_obj.pushFunction("textureObjectValid")) {
			_obj.pushArg(&texture);
			_obj.pushArg(&state);
			return (_obj.callFunction<bool>());
		}

		return SubloadCallback::textureObjectValid(texture, state);
	};

	// osg::Texture::TextureObject * osg::Texture2D::SubloadCallback::generateTextureObject(const osg::Texture2D & texture, osg::State & state) const
	osg::Texture::TextureObject * generateTextureObject(const osg::Texture2D & texture, osg::State & state) const {
		if(_obj.pushFunction("generateTextureObject")) {
			_obj.pushArg(&texture);
			_obj.pushArg(&state);
			return (_obj.callFunction<osg::Texture::TextureObject*>());
		}

		return SubloadCallback::generateTextureObject(texture, state);
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

