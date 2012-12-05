#ifndef _WRAPPERS_WRAPPER_OSGUTIL_TANGENTSPACEGENERATOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_TANGENTSPACEGENERATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/TangentSpaceGenerator>

class wrapper_osgUtil_TangentSpaceGenerator : public osgUtil::TangentSpaceGenerator {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgUtil_TangentSpaceGenerator(lua_State* L, lua_Table* dum) : osgUtil::TangentSpaceGenerator(), _obj(L,-1) {};
	wrapper_osgUtil_TangentSpaceGenerator(lua_State* L, lua_Table* dum, const osgUtil::TangentSpaceGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgUtil::TangentSpaceGenerator(copy, copyop), _obj(L,-1) {};




};




#endif

