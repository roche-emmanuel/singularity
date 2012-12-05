#ifndef _WRAPPERS_WRAPPER_OSG_GRAPHICSCONTEXT_WINDOWINGSYSTEMINTERFACE_H_
#define _WRAPPERS_WRAPPER_OSG_GRAPHICSCONTEXT_WINDOWINGSYSTEMINTERFACE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GraphicsContext>

class wrapper_osg_GraphicsContext_WindowingSystemInterface : public osg::GraphicsContext::WindowingSystemInterface {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_GraphicsContext_WindowingSystemInterface(lua_State* L, lua_Table* dum) : osg::GraphicsContext::WindowingSystemInterface(), _obj(L,-1) {};

	// osg::GraphicsContext * osg::GraphicsContext::WindowingSystemInterface::createGraphicsContext(osg::GraphicsContext::Traits * traits)
	osg::GraphicsContext * createGraphicsContext(osg::GraphicsContext::Traits * traits) {
		THROW_IF(!_obj.pushFunction("createGraphicsContext"),"No implementation for abstract function osg::GraphicsContext::WindowingSystemInterface::createGraphicsContext");
		_obj.pushArg(traits);
		return (_obj.callFunction<osg::GraphicsContext*>());
	};




};




#endif

