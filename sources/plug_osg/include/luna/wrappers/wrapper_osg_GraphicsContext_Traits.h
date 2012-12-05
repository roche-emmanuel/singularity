#ifndef _WRAPPERS_WRAPPER_OSG_GRAPHICSCONTEXT_TRAITS_H_
#define _WRAPPERS_WRAPPER_OSG_GRAPHICSCONTEXT_TRAITS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GraphicsContext>

class wrapper_osg_GraphicsContext_Traits : public osg::GraphicsContext::Traits {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_GraphicsContext_Traits(lua_State* L, lua_Table* dum, osg::DisplaySettings * ds = 0) : osg::GraphicsContext::Traits(ds), _obj(L,-1) {};




};




#endif

