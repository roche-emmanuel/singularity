#ifndef _WRAPPERS_WRAPPER_OSGUTIL_EDGECOLLECTOR_EDGELOOP_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_EDGECOLLECTOR_EDGELOOP_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/EdgeCollector>

class wrapper_osgUtil_EdgeCollector_Edgeloop : public osgUtil::EdgeCollector::Edgeloop {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgUtil_EdgeCollector_Edgeloop(lua_State* L, lua_Table* dum) : osgUtil::EdgeCollector::Edgeloop(), _obj(L,-1) {};




};




#endif

