#ifndef _WRAPPERS_WRAPPER_OSG_TEXTURERECTANGLE_SUBLOADCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSG_TEXTURERECTANGLE_SUBLOADCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/TextureRectangle>

class wrapper_osg_TextureRectangle_SubloadCallback : public osg::TextureRectangle::SubloadCallback, public luna_wrapper_base {

public:
		

	~wrapper_osg_TextureRectangle_SubloadCallback() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	

	// void osg::TextureRectangle::SubloadCallback::load(const osg::TextureRectangle & arg1, osg::State & arg2) const
	void load(const osg::TextureRectangle & arg1, osg::State & arg2) const {
		THROW_IF(!_obj.pushFunction("load"),"No implementation for abstract function osg::TextureRectangle::SubloadCallback::load");
		_obj.pushArg(&arg1);
		_obj.pushArg(&arg2);
		return (_obj.callFunction<void>());
	};

	// void osg::TextureRectangle::SubloadCallback::subload(const osg::TextureRectangle & arg1, osg::State & arg2) const
	void subload(const osg::TextureRectangle & arg1, osg::State & arg2) const {
		THROW_IF(!_obj.pushFunction("subload"),"No implementation for abstract function osg::TextureRectangle::SubloadCallback::subload");
		_obj.pushArg(&arg1);
		_obj.pushArg(&arg2);
		return (_obj.callFunction<void>());
	};




};




#endif

