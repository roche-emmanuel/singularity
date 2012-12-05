#ifndef _WRAPPERS_WRAPPER_OSG_TEXTURE_D_EXTENSIONS_H_
#define _WRAPPERS_WRAPPER_OSG_TEXTURE_D_EXTENSIONS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Texture3D>

class wrapper_osg_Texture3D_Extensions : public osg::Texture3D::Extensions {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_Texture3D_Extensions(lua_State* L, lua_Table* dum, unsigned int contextID) : osg::Texture3D::Extensions(contextID), _obj(L,-1) {};




};




#endif

