#ifndef _WRAPPERS_WRAPPER_OSG_TEXTURE_EXTENSIONS_H_
#define _WRAPPERS_WRAPPER_OSG_TEXTURE_EXTENSIONS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Texture>

class wrapper_osg_Texture_Extensions : public osg::Texture::Extensions, public luna_wrapper_base {

public:
		

	~wrapper_osg_Texture_Extensions() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_Texture_Extensions(lua_State* L, lua_Table* dum, unsigned int contextID) : osg::Texture::Extensions(contextID), luna_wrapper_base(L) {};




};




#endif

