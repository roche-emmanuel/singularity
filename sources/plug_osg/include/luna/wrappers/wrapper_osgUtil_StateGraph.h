#ifndef _WRAPPERS_WRAPPER_OSGUTIL_STATEGRAPH_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_STATEGRAPH_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/StateGraph>

class wrapper_osgUtil_StateGraph : public osgUtil::StateGraph, public luna_wrapper_base {

public:
	

	wrapper_osgUtil_StateGraph(lua_State* L, lua_Table* dum) : osgUtil::StateGraph(), luna_wrapper_base(L) {};
	wrapper_osgUtil_StateGraph(lua_State* L, lua_Table* dum, osgUtil::StateGraph * parent, const osg::StateSet * stateset) : osgUtil::StateGraph(parent, stateset), luna_wrapper_base(L) {};




};




#endif

