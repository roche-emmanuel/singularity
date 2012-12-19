#ifndef _WRAPPERS_WRAPPER_OSG_GRAPHICSCOSTESTIMATOR_H_
#define _WRAPPERS_WRAPPER_OSG_GRAPHICSCOSTESTIMATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GraphicsCostEstimator>

class wrapper_osg_GraphicsCostEstimator : public osg::GraphicsCostEstimator, public luna_wrapper_base {

public:
	

	wrapper_osg_GraphicsCostEstimator(lua_State* L, lua_Table* dum) : osg::GraphicsCostEstimator(), luna_wrapper_base(L) {};




};




#endif

