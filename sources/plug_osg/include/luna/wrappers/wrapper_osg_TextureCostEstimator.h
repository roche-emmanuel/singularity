#ifndef _WRAPPERS_WRAPPER_OSG_TEXTURECOSTESTIMATOR_H_
#define _WRAPPERS_WRAPPER_OSG_TEXTURECOSTESTIMATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GraphicsCostEstimator>

class wrapper_osg_TextureCostEstimator : public osg::TextureCostEstimator {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_TextureCostEstimator(lua_State* L, lua_Table* dum) : osg::TextureCostEstimator(), _obj(L,-1) {};




};




#endif

