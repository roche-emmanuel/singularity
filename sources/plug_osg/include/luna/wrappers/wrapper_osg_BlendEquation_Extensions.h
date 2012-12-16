#ifndef _WRAPPERS_WRAPPER_OSG_BLENDEQUATION_EXTENSIONS_H_
#define _WRAPPERS_WRAPPER_OSG_BLENDEQUATION_EXTENSIONS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/BlendEquation>

class wrapper_osg_BlendEquation_Extensions : public osg::BlendEquation::Extensions, public luna_wrapper_base {

public:
	

	wrapper_osg_BlendEquation_Extensions(lua_State* L, lua_Table* dum, unsigned int contextID) : osg::BlendEquation::Extensions(contextID), luna_wrapper_base(L) {};




};




#endif

