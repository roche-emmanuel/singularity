#ifndef _WRAPPERS_WRAPPER_OSG_DRAWABLE_EXTENSIONS_H_
#define _WRAPPERS_WRAPPER_OSG_DRAWABLE_EXTENSIONS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Drawable>

class wrapper_osg_Drawable_Extensions : public osg::Drawable::Extensions {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_Drawable_Extensions(lua_State* L, lua_Table* dum, unsigned int contextID) : osg::Drawable::Extensions(contextID), _obj(L,-1) {};




};




#endif

