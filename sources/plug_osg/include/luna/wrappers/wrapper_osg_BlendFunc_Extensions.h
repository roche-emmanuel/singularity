#ifndef _WRAPPERS_WRAPPER_OSG_BLENDFUNC_EXTENSIONS_H_
#define _WRAPPERS_WRAPPER_OSG_BLENDFUNC_EXTENSIONS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/BlendFunc>

class wrapper_osg_BlendFunc_Extensions : public osg::BlendFunc::Extensions {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_BlendFunc_Extensions(lua_State* L, lua_Table* dum, unsigned int contextID) : osg::BlendFunc::Extensions(contextID), _obj(L,-1) {};




};




#endif

