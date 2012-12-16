#ifndef _WRAPPERS_WRAPPER_OSG_GL_EXTENSIONS_H_
#define _WRAPPERS_WRAPPER_OSG_GL_EXTENSIONS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GL2Extensions>

class wrapper_osg_GL2Extensions : public osg::GL2Extensions, public luna_wrapper_base {

public:
	

	wrapper_osg_GL2Extensions(lua_State* L, lua_Table* dum, unsigned int contextID) : osg::GL2Extensions(contextID), luna_wrapper_base(L) {};




};




#endif

