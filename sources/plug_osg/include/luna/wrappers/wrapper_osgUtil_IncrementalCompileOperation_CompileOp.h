#ifndef _WRAPPERS_WRAPPER_OSGUTIL_INCREMENTALCOMPILEOPERATION_COMPILEOP_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_INCREMENTALCOMPILEOPERATION_COMPILEOP_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/IncrementalCompileOperation>

class wrapper_osgUtil_IncrementalCompileOperation_CompileOp : public osgUtil::IncrementalCompileOperation::CompileOp {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgUtil_IncrementalCompileOperation_CompileOp(lua_State* L, lua_Table* dum) : osgUtil::IncrementalCompileOperation::CompileOp(), _obj(L,-1) {};




};




#endif

