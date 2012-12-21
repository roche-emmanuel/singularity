#ifndef _WRAPPERS_WRAPPER_OSGUTIL_INCREMENTALCOMPILEOPERATION_COMPILEPROGRAMOP_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_INCREMENTALCOMPILEOPERATION_COMPILEPROGRAMOP_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/IncrementalCompileOperation>

class wrapper_osgUtil_IncrementalCompileOperation_CompileProgramOp : public osgUtil::IncrementalCompileOperation::CompileProgramOp, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_IncrementalCompileOperation_CompileProgramOp() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	




};




#endif

