#ifndef _WRAPPERS_WRAPPER_OSG_TEXTURECUBEMAP_EXTENSIONS_H_
#define _WRAPPERS_WRAPPER_OSG_TEXTURECUBEMAP_EXTENSIONS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/TextureCubeMap>

class wrapper_osg_TextureCubeMap_Extensions : public osg::TextureCubeMap::Extensions {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_TextureCubeMap_Extensions(lua_State* L, lua_Table* dum, unsigned int contextID) : osg::TextureCubeMap::Extensions(contextID), _obj(L,-1) {};




};




#endif

