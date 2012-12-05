#ifndef _WRAPPERS_WRAPPER_OSG_TEXTURE_TEXTUREOBJECTMANAGER_H_
#define _WRAPPERS_WRAPPER_OSG_TEXTURE_TEXTUREOBJECTMANAGER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Texture>

class wrapper_osg_Texture_TextureObjectManager : public osg::Texture::TextureObjectManager {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_Texture_TextureObjectManager(lua_State* L, lua_Table* dum, unsigned int contextID) : osg::Texture::TextureObjectManager(contextID), _obj(L,-1) {};




};




#endif

