#ifndef _WRAPPERS_WRAPPER_OSG_STENCIL_EXTENSIONS_H_
#define _WRAPPERS_WRAPPER_OSG_STENCIL_EXTENSIONS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Stencil>

class wrapper_osg_Stencil_Extensions : public osg::Stencil::Extensions, public luna_wrapper_base {

public:
	

	wrapper_osg_Stencil_Extensions(lua_State* L, lua_Table* dum, unsigned int contextID) : osg::Stencil::Extensions(contextID), luna_wrapper_base(L) {};




};




#endif

