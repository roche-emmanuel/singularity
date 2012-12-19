#ifndef _WRAPPERS_WRAPPER_OSGUTIL_INCREMENTALCOMPILEOPERATION_COMPILEOP_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_INCREMENTALCOMPILEOPERATION_COMPILEOP_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/IncrementalCompileOperation>

class wrapper_osgUtil_IncrementalCompileOperation_CompileOp : public osgUtil::IncrementalCompileOperation::CompileOp, public luna_wrapper_base {

public:
	





public:
// double osgUtil::IncrementalCompileOperation::CompileOp::estimatedTimeForCompile(osgUtil::IncrementalCompileOperation::CompileInfo & compileInfo) const
double estimatedTimeForCompile(osgUtil::IncrementalCompileOperation::CompileInfo &) const {
	THROW_IF(true,"The function call double osgUtil::IncrementalCompileOperation::CompileOp::estimatedTimeForCompile(osgUtil::IncrementalCompileOperation::CompileInfo &) const is not implemented in wrapper.");
	return double();
};

public:
// bool osgUtil::IncrementalCompileOperation::CompileOp::compile(osgUtil::IncrementalCompileOperation::CompileInfo & compileInfo)
bool compile(osgUtil::IncrementalCompileOperation::CompileInfo &) {
	THROW_IF(true,"The function call bool osgUtil::IncrementalCompileOperation::CompileOp::compile(osgUtil::IncrementalCompileOperation::CompileInfo &) is not implemented in wrapper.");
	return bool();
};

};




#endif

