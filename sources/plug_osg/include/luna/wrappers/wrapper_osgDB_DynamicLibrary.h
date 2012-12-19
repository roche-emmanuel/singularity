#ifndef _WRAPPERS_WRAPPER_OSGDB_DYNAMICLIBRARY_H_
#define _WRAPPERS_WRAPPER_OSGDB_DYNAMICLIBRARY_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/DynamicLibrary>

class wrapper_osgDB_DynamicLibrary : public osgDB::DynamicLibrary, public luna_wrapper_base {

public:
	

	wrapper_osgDB_DynamicLibrary(lua_State* L, lua_Table* dum) : osgDB::DynamicLibrary(), luna_wrapper_base(L) {};
	wrapper_osgDB_DynamicLibrary(lua_State* L, lua_Table* dum, const osgDB::DynamicLibrary & arg1) : osgDB::DynamicLibrary(arg1), luna_wrapper_base(L) {};
	wrapper_osgDB_DynamicLibrary(lua_State* L, lua_Table* dum, const std::string & name, void * handle) : osgDB::DynamicLibrary(name, handle), luna_wrapper_base(L) {};




};




#endif

