#ifndef _WRAPPERS_WRAPPER_OSG_TEXTURE_DARRAY_SUBLOADCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSG_TEXTURE_DARRAY_SUBLOADCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Texture2DArray>

class wrapper_osg_Texture2DArray_SubloadCallback : public osg::Texture2DArray::SubloadCallback {
protected:
	sgt::LuaObject _obj;
	
public:
	


	// void osg::Texture2DArray::SubloadCallback::load(const osg::Texture2DArray & texture, osg::State & state) const
	void load(const osg::Texture2DArray & texture, osg::State & state) const {
		THROW_IF(!_obj.pushFunction("load"),"No implementation for abstract function osg::Texture2DArray::SubloadCallback::load");
		_obj.pushArg(&texture);
		_obj.pushArg(&state);
		return (_obj.callFunction<void>());
	};

	// void osg::Texture2DArray::SubloadCallback::subload(const osg::Texture2DArray & texture, osg::State & state) const
	void subload(const osg::Texture2DArray & texture, osg::State & state) const {
		THROW_IF(!_obj.pushFunction("subload"),"No implementation for abstract function osg::Texture2DArray::SubloadCallback::subload");
		_obj.pushArg(&texture);
		_obj.pushArg(&state);
		return (_obj.callFunction<void>());
	};




};




#endif

