#ifndef _WRAPPERS_WRAPPER_OSG_TEXTURE_TEXTUREOBJECT_H_
#define _WRAPPERS_WRAPPER_OSG_TEXTURE_TEXTUREOBJECT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Texture>

class wrapper_osg_Texture_TextureObject : public osg::Texture::TextureObject {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_Texture_TextureObject(lua_State* L, lua_Table* dum, osg::Texture * texture, unsigned int id, unsigned int target) : osg::Texture::TextureObject(texture, id, target), _obj(L,-1) {};
	wrapper_osg_Texture_TextureObject(lua_State* L, lua_Table* dum, osg::Texture * texture, unsigned int id, const osg::Texture::TextureProfile & profile) : osg::Texture::TextureObject(texture, id, profile), _obj(L,-1) {};
	wrapper_osg_Texture_TextureObject(lua_State* L, lua_Table* dum, osg::Texture * texture, unsigned int id, unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border) : osg::Texture::TextureObject(texture, id, target, numMipmapLevels, internalFormat, width, height, depth, border), _obj(L,-1) {};




};




#endif

