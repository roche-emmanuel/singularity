#ifndef _WRAPPERS_WRAPPER_OSG_PROGRAM_PERCONTEXTPROGRAM_H_
#define _WRAPPERS_WRAPPER_OSG_PROGRAM_PERCONTEXTPROGRAM_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Program>

class wrapper_osg_Program_PerContextProgram : public osg::Program::PerContextProgram {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_Program_PerContextProgram(lua_State* L, lua_Table* dum, const osg::Program * program, unsigned int contextID) : osg::Program::PerContextProgram(program, contextID), _obj(L,-1) {};




};




#endif

