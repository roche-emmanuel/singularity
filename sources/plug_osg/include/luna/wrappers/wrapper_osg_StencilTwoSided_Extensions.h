#ifndef _WRAPPERS_WRAPPER_OSG_STENCILTWOSIDED_EXTENSIONS_H_
#define _WRAPPERS_WRAPPER_OSG_STENCILTWOSIDED_EXTENSIONS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/StencilTwoSided>

class wrapper_osg_StencilTwoSided_Extensions : public osg::StencilTwoSided::Extensions {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_StencilTwoSided_Extensions(lua_State* L, lua_Table* dum, unsigned int contextID) : osg::StencilTwoSided::Extensions(contextID), _obj(L,-1) {};




};




#endif

