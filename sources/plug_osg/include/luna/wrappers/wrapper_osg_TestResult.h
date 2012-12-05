#ifndef _WRAPPERS_WRAPPER_OSG_TESTRESULT_H_
#define _WRAPPERS_WRAPPER_OSG_TESTRESULT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/OcclusionQueryNode>

class wrapper_osg_TestResult : public osg::TestResult {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_TestResult(lua_State* L, lua_Table* dum) : osg::TestResult(), _obj(L,-1) {};




};




#endif

