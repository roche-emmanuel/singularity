#ifndef _WRAPPERS_WRAPPER_OSG_BLENDEQUATION_EXTENSIONS_H_
#define _WRAPPERS_WRAPPER_OSG_BLENDEQUATION_EXTENSIONS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/BlendEquation>

class wrapper_osg_BlendEquation_Extensions : public osg::BlendEquation::Extensions {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_BlendEquation_Extensions(lua_State* L, lua_Table* dum, unsigned int contextID) : osg::BlendEquation::Extensions(contextID), _obj(L,-1) {};




};




#endif

