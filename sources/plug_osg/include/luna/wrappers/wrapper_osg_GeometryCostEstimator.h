#ifndef _WRAPPERS_WRAPPER_OSG_GEOMETRYCOSTESTIMATOR_H_
#define _WRAPPERS_WRAPPER_OSG_GEOMETRYCOSTESTIMATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GraphicsCostEstimator>

class wrapper_osg_GeometryCostEstimator : public osg::GeometryCostEstimator, public luna_wrapper_base {

public:
	

	wrapper_osg_GeometryCostEstimator(lua_State* L, lua_Table* dum) : osg::GeometryCostEstimator(), luna_wrapper_base(L) {};




};




#endif

