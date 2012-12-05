#ifndef _WRAPPERS_WRAPPER_OSGUTIL_SIMPLIFIER_CONTINUESIMPLIFICATIONCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_SIMPLIFIER_CONTINUESIMPLIFICATIONCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/Simplifier>

class wrapper_osgUtil_Simplifier_ContinueSimplificationCallback : public osgUtil::Simplifier::ContinueSimplificationCallback {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgUtil_Simplifier_ContinueSimplificationCallback(lua_State* L, lua_Table* dum) : osgUtil::Simplifier::ContinueSimplificationCallback(), _obj(L,-1) {};




};




#endif

