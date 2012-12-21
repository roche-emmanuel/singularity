#ifndef _WRAPPERS_WRAPPER_OSGDB_REGISTRY_H_
#define _WRAPPERS_WRAPPER_OSGDB_REGISTRY_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/Registry>

class wrapper_osgDB_Registry : public osgDB::Registry, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_Registry() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_Registry(lua_State* L, lua_Table* dum) : osgDB::Registry(), luna_wrapper_base(L) {};




};




#endif

