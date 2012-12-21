#ifndef _WRAPPERS_WRAPPER_OSGDB_OBJECTWRAPPERMANAGER_H_
#define _WRAPPERS_WRAPPER_OSGDB_OBJECTWRAPPERMANAGER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/ObjectWrapper>

class wrapper_osgDB_ObjectWrapperManager : public osgDB::ObjectWrapperManager, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_ObjectWrapperManager() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_ObjectWrapperManager(lua_State* L, lua_Table* dum) : osgDB::ObjectWrapperManager(), luna_wrapper_base(L) {};




};




#endif

