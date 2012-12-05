#ifndef _WRAPPERS_WRAPPER_OSG_GLBUFFEROBJECT_EXTENSIONS_H_
#define _WRAPPERS_WRAPPER_OSG_GLBUFFEROBJECT_EXTENSIONS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/BufferObject>

class wrapper_osg_GLBufferObject_Extensions : public osg::GLBufferObject::Extensions {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_GLBufferObject_Extensions(lua_State* L, lua_Table* dum, unsigned int contextID) : osg::GLBufferObject::Extensions(contextID), _obj(L,-1) {};




};




#endif

