#ifndef _WRAPPERS_WRAPPER_OSG_TEXTURE_D_EXTENSIONS_H_
#define _WRAPPERS_WRAPPER_OSG_TEXTURE_D_EXTENSIONS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Texture3D>

class wrapper_osg_Texture3D_Extensions : public osg::Texture3D::Extensions, public luna_wrapper_base {

public:
		

	~wrapper_osg_Texture3D_Extensions() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_Texture3D_Extensions(lua_State* L, lua_Table* dum, unsigned int contextID) : osg::Texture3D::Extensions(contextID), luna_wrapper_base(L) {};




};




#endif

