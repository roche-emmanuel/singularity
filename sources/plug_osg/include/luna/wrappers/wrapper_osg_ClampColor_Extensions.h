#ifndef _WRAPPERS_WRAPPER_OSG_CLAMPCOLOR_EXTENSIONS_H_
#define _WRAPPERS_WRAPPER_OSG_CLAMPCOLOR_EXTENSIONS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/ClampColor>

class wrapper_osg_ClampColor_Extensions : public osg::ClampColor::Extensions {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_ClampColor_Extensions(lua_State* L, lua_Table* dum, unsigned int contextID) : osg::ClampColor::Extensions(contextID), _obj(L,-1) {};




};




#endif

