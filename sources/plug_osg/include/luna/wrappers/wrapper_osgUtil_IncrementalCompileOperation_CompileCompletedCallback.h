#ifndef _WRAPPERS_WRAPPER_OSGUTIL_INCREMENTALCOMPILEOPERATION_COMPILECOMPLETEDCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_INCREMENTALCOMPILEOPERATION_COMPILECOMPLETEDCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/IncrementalCompileOperation>

class wrapper_osgUtil_IncrementalCompileOperation_CompileCompletedCallback : public osgUtil::IncrementalCompileOperation::CompileCompletedCallback {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgUtil_IncrementalCompileOperation_CompileCompletedCallback(lua_State* L, lua_Table* dum) : osgUtil::IncrementalCompileOperation::CompileCompletedCallback(), _obj(L,-1) {};




};




#endif

