#ifndef _WRAPPERS_WRAPPER_OSG_TEXTURE_DARRAY_EXTENSIONS_H_
#define _WRAPPERS_WRAPPER_OSG_TEXTURE_DARRAY_EXTENSIONS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Texture2DArray>

class wrapper_osg_Texture2DArray_Extensions : public osg::Texture2DArray::Extensions {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_Texture2DArray_Extensions(lua_State* L, lua_Table* dum, unsigned int contextID) : osg::Texture2DArray::Extensions(contextID), _obj(L,-1) {};




};




#endif

