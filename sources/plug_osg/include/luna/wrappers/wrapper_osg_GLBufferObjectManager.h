#ifndef _WRAPPERS_WRAPPER_OSG_GLBUFFEROBJECTMANAGER_H_
#define _WRAPPERS_WRAPPER_OSG_GLBUFFEROBJECTMANAGER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/BufferObject>

class wrapper_osg_GLBufferObjectManager : public osg::GLBufferObjectManager, public luna_wrapper_base {

public:
	

	wrapper_osg_GLBufferObjectManager(lua_State* L, lua_Table* dum, unsigned int contextID) : osg::GLBufferObjectManager(contextID), luna_wrapper_base(L) {};




};




#endif

