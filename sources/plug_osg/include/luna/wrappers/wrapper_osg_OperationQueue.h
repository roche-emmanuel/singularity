#ifndef _WRAPPERS_WRAPPER_OSG_OPERATIONQUEUE_H_
#define _WRAPPERS_WRAPPER_OSG_OPERATIONQUEUE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/OperationThread>

class wrapper_osg_OperationQueue : public osg::OperationQueue, public luna_wrapper_base {

public:
	

	wrapper_osg_OperationQueue(lua_State* L, lua_Table* dum) : osg::OperationQueue(), luna_wrapper_base(L) {};




};




#endif

