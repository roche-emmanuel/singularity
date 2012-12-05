#ifndef _WRAPPERS_WRAPPER_OSG_REFBLOCK_H_
#define _WRAPPERS_WRAPPER_OSG_REFBLOCK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/OperationThread>

class wrapper_osg_RefBlock : public osg::RefBlock {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_RefBlock(lua_State* L, lua_Table* dum) : osg::RefBlock(), _obj(L,-1) {};




};




#endif

