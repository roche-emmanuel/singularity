#ifndef _WRAPPERS_WRAPPER_OSGUTIL_TESSELLATOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_TESSELLATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/Tessellator>

class wrapper_osgUtil_Tessellator : public osgUtil::Tessellator {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgUtil_Tessellator(lua_State* L, lua_Table* dum) : osgUtil::Tessellator(), _obj(L,-1) {};




};




#endif

