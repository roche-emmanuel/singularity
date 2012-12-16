#ifndef _WRAPPERS_WRAPPER_OSG_VERTEXPROGRAM_EXTENSIONS_H_
#define _WRAPPERS_WRAPPER_OSG_VERTEXPROGRAM_EXTENSIONS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/VertexProgram>

class wrapper_osg_VertexProgram_Extensions : public osg::VertexProgram::Extensions, public luna_wrapper_base {

public:
	

	wrapper_osg_VertexProgram_Extensions(lua_State* L, lua_Table* dum, unsigned int contextID) : osg::VertexProgram::Extensions(contextID), luna_wrapper_base(L) {};




};




#endif

