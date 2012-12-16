#ifndef _WRAPPERS_WRAPPER_OSG_DRAWABLE_EXTENSIONS_H_
#define _WRAPPERS_WRAPPER_OSG_DRAWABLE_EXTENSIONS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Drawable>

class wrapper_osg_Drawable_Extensions : public osg::Drawable::Extensions, public luna_wrapper_base {

public:
	

	wrapper_osg_Drawable_Extensions(lua_State* L, lua_Table* dum, unsigned int contextID) : osg::Drawable::Extensions(contextID), luna_wrapper_base(L) {};




};




#endif

