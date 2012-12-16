#ifndef _WRAPPERS_WRAPPER_OSG_PROGRAMCOSTESTIMATOR_H_
#define _WRAPPERS_WRAPPER_OSG_PROGRAMCOSTESTIMATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GraphicsCostEstimator>

class wrapper_osg_ProgramCostEstimator : public osg::ProgramCostEstimator, public luna_wrapper_base {

public:
	

	wrapper_osg_ProgramCostEstimator(lua_State* L, lua_Table* dum) : osg::ProgramCostEstimator(), luna_wrapper_base(L) {};




};




#endif

