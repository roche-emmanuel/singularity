#ifndef _WRAPPERS_WRAPPER_OSG_TEXTURE_TEXTUREOBJECTSET_H_
#define _WRAPPERS_WRAPPER_OSG_TEXTURE_TEXTUREOBJECTSET_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Texture>

class wrapper_osg_Texture_TextureObjectSet : public osg::Texture::TextureObjectSet {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_Texture_TextureObjectSet(lua_State* L, lua_Table* dum, osg::Texture::TextureObjectManager * parent, const osg::Texture::TextureProfile & profile) : osg::Texture::TextureObjectSet(parent, profile), _obj(L,-1) {};




};




#endif

