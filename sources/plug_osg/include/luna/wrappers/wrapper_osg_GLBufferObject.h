#ifndef _WRAPPERS_WRAPPER_OSG_GLBUFFEROBJECT_H_
#define _WRAPPERS_WRAPPER_OSG_GLBUFFEROBJECT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/BufferObject>

class wrapper_osg_GLBufferObject : public osg::GLBufferObject, public luna_wrapper_base {

public:
		

	~wrapper_osg_GLBufferObject() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_GLBufferObject(lua_State* L, lua_Table* dum, unsigned int contextID, osg::BufferObject * bufferObject, unsigned int glObjectID = 0) : osg::GLBufferObject(contextID, bufferObject, glObjectID), luna_wrapper_base(L) {};




};




#endif

