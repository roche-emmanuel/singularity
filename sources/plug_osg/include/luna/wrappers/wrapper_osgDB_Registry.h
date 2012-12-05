#ifndef _WRAPPERS_WRAPPER_OSGDB_REGISTRY_H_
#define _WRAPPERS_WRAPPER_OSGDB_REGISTRY_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/Registry>

class wrapper_osgDB_Registry : public osgDB::Registry {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgDB_Registry(lua_State* L, lua_Table* dum) : osgDB::Registry(), _obj(L,-1) {};




};




#endif

