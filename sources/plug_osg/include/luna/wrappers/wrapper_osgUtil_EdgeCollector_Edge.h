#ifndef _WRAPPERS_WRAPPER_OSGUTIL_EDGECOLLECTOR_EDGE_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_EDGECOLLECTOR_EDGE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/EdgeCollector>

class wrapper_osgUtil_EdgeCollector_Edge : public osgUtil::EdgeCollector::Edge {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgUtil_EdgeCollector_Edge(lua_State* L, lua_Table* dum) : osgUtil::EdgeCollector::Edge(), _obj(L,-1) {};




};




#endif

