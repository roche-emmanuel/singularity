#ifndef _WRAPPERS_WRAPPER_OSG_ARRAYDISPATCHERS_H_
#define _WRAPPERS_WRAPPER_OSG_ARRAYDISPATCHERS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/ArrayDispatchers>

class wrapper_osg_ArrayDispatchers : public osg::ArrayDispatchers {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_ArrayDispatchers(lua_State* L, lua_Table* dum) : osg::ArrayDispatchers(), _obj(L,-1) {};




};




#endif

