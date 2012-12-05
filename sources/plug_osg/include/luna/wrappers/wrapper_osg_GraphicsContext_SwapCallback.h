#ifndef _WRAPPERS_WRAPPER_OSG_GRAPHICSCONTEXT_SWAPCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSG_GRAPHICSCONTEXT_SWAPCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GraphicsContext>

class wrapper_osg_GraphicsContext_SwapCallback : public osg::GraphicsContext::SwapCallback {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_GraphicsContext_SwapCallback(lua_State* L, lua_Table* dum) : osg::GraphicsContext::SwapCallback(), _obj(L,-1) {};

	// void osg::GraphicsContext::SwapCallback::swapBuffersImplementation(osg::GraphicsContext * gc)
	void swapBuffersImplementation(osg::GraphicsContext * gc) {
		THROW_IF(!_obj.pushFunction("swapBuffersImplementation"),"No implementation for abstract function osg::GraphicsContext::SwapCallback::swapBuffersImplementation");
		_obj.pushArg(gc);
		return (_obj.callFunction<void>());
	};




};




#endif
