#ifndef _WRAPPERS_WRAPPER_OSG_MULTISAMPLE_EXTENSIONS_H_
#define _WRAPPERS_WRAPPER_OSG_MULTISAMPLE_EXTENSIONS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Multisample>

class wrapper_osg_Multisample_Extensions : public osg::Multisample::Extensions {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_Multisample_Extensions(lua_State* L, lua_Table* dum, unsigned int contextID) : osg::Multisample::Extensions(contextID), _obj(L,-1) {};




};




#endif

