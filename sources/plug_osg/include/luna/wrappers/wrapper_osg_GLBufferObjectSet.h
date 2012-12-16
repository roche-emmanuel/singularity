#ifndef _WRAPPERS_WRAPPER_OSG_GLBUFFEROBJECTSET_H_
#define _WRAPPERS_WRAPPER_OSG_GLBUFFEROBJECTSET_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/BufferObject>

class wrapper_osg_GLBufferObjectSet : public osg::GLBufferObjectSet, public luna_wrapper_base {

public:
	

	wrapper_osg_GLBufferObjectSet(lua_State* L, lua_Table* dum, osg::GLBufferObjectManager * parent, const osg::BufferObjectProfile & profile) : osg::GLBufferObjectSet(parent, profile), luna_wrapper_base(L) {};




};




#endif

