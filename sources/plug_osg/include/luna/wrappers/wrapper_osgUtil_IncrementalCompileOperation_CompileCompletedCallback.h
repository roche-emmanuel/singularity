#ifndef _WRAPPERS_WRAPPER_OSGUTIL_INCREMENTALCOMPILEOPERATION_COMPILECOMPLETEDCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_INCREMENTALCOMPILEOPERATION_COMPILECOMPLETEDCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/IncrementalCompileOperation>

class wrapper_osgUtil_IncrementalCompileOperation_CompileCompletedCallback : public osgUtil::IncrementalCompileOperation::CompileCompletedCallback, public luna_wrapper_base {

public:
	





public:
// bool osgUtil::IncrementalCompileOperation::CompileCompletedCallback::compileCompleted(osgUtil::IncrementalCompileOperation::CompileSet * compileSet)
bool compileCompleted(osgUtil::IncrementalCompileOperation::CompileSet *) {
	THROW_IF(true,"The function call bool osgUtil::IncrementalCompileOperation::CompileCompletedCallback::compileCompleted(osgUtil::IncrementalCompileOperation::CompileSet *) is not implemented in wrapper.");
	return bool();
};

};




#endif

