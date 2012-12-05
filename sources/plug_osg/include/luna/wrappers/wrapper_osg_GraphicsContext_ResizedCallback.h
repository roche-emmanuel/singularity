#ifndef _WRAPPERS_WRAPPER_OSG_GRAPHICSCONTEXT_RESIZEDCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSG_GRAPHICSCONTEXT_RESIZEDCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GraphicsContext>

class wrapper_osg_GraphicsContext_ResizedCallback : public osg::GraphicsContext::ResizedCallback {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_GraphicsContext_ResizedCallback(lua_State* L, lua_Table* dum) : osg::GraphicsContext::ResizedCallback(), _obj(L,-1) {};

	// void osg::GraphicsContext::ResizedCallback::resizedImplementation(osg::GraphicsContext * gc, int x, int y, int width, int height)
	void resizedImplementation(osg::GraphicsContext * gc, int x, int y, int width, int height) {
		THROW_IF(!_obj.pushFunction("resizedImplementation"),"No implementation for abstract function osg::GraphicsContext::ResizedCallback::resizedImplementation");
		_obj.pushArg(gc);
		_obj.pushArg(x);
		_obj.pushArg(y);
		_obj.pushArg(width);
		_obj.pushArg(height);
		return (_obj.callFunction<void>());
	};




};




#endif

