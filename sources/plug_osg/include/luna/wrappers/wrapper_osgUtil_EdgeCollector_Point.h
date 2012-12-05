#ifndef _WRAPPERS_WRAPPER_OSGUTIL_EDGECOLLECTOR_POINT_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_EDGECOLLECTOR_POINT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/EdgeCollector>

class wrapper_osgUtil_EdgeCollector_Point : public osgUtil::EdgeCollector::Point {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgUtil_EdgeCollector_Point(lua_State* L, lua_Table* dum) : osgUtil::EdgeCollector::Point(), _obj(L,-1) {};




};




#endif

