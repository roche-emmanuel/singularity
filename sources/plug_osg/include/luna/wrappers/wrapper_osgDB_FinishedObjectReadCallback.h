#ifndef _WRAPPERS_WRAPPER_OSGDB_FINISHEDOBJECTREADCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSGDB_FINISHEDOBJECTREADCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/ObjectWrapper>

class wrapper_osgDB_FinishedObjectReadCallback : public osgDB::FinishedObjectReadCallback {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgDB_FinishedObjectReadCallback(lua_State* L, lua_Table* dum) : osgDB::FinishedObjectReadCallback(), _obj(L,-1) {};




};




#endif

