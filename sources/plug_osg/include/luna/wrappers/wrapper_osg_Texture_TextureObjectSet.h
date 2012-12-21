#ifndef _WRAPPERS_WRAPPER_OSG_TEXTURE_TEXTUREOBJECTSET_H_
#define _WRAPPERS_WRAPPER_OSG_TEXTURE_TEXTUREOBJECTSET_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Texture>

class wrapper_osg_Texture_TextureObjectSet : public osg::Texture::TextureObjectSet, public luna_wrapper_base {

public:
		

	~wrapper_osg_Texture_TextureObjectSet() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_Texture_TextureObjectSet(lua_State* L, lua_Table* dum, osg::Texture::TextureObjectManager * parent, const osg::Texture::TextureProfile & profile) : osg::Texture::TextureObjectSet(parent, profile), luna_wrapper_base(L) {};




// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
	return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
};

// void osg::Referenced::deleteUsingDeleteHandler() const
void public_deleteUsingDeleteHandler() const {
	return osg::Referenced::deleteUsingDeleteHandler();
};


};




#endif

