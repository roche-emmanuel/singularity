#ifndef _WRAPPERS_WRAPPER_OSGUTIL_EDGECOLLECTOR_TRIANGLE_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_EDGECOLLECTOR_TRIANGLE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/EdgeCollector>

class wrapper_osgUtil_EdgeCollector_Triangle : public osgUtil::EdgeCollector::Triangle {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgUtil_EdgeCollector_Triangle(lua_State* L, lua_Table* dum) : osgUtil::EdgeCollector::Triangle(), _obj(L,-1) {};




};




#endif
