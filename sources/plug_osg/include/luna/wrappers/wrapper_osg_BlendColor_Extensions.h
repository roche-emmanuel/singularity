#ifndef _WRAPPERS_WRAPPER_OSG_BLENDCOLOR_EXTENSIONS_H_
#define _WRAPPERS_WRAPPER_OSG_BLENDCOLOR_EXTENSIONS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/BlendColor>

class wrapper_osg_BlendColor_Extensions : public osg::BlendColor::Extensions, public luna_wrapper_base {

public:
	

	wrapper_osg_BlendColor_Extensions(lua_State* L, lua_Table* dum, unsigned int contextID) : osg::BlendColor::Extensions(contextID), luna_wrapper_base(L) {};




};




#endif

