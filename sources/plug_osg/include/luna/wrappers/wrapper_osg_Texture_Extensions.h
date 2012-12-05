#ifndef _WRAPPERS_WRAPPER_OSG_TEXTURE_EXTENSIONS_H_
#define _WRAPPERS_WRAPPER_OSG_TEXTURE_EXTENSIONS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Texture>

class wrapper_osg_Texture_Extensions : public osg::Texture::Extensions {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_Texture_Extensions(lua_State* L, lua_Table* dum, unsigned int contextID) : osg::Texture::Extensions(contextID), _obj(L,-1) {};




};




#endif

