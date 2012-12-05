#ifndef _WRAPPERS_WRAPPER_OSGDB_DYNAMICLIBRARY_H_
#define _WRAPPERS_WRAPPER_OSGDB_DYNAMICLIBRARY_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/DynamicLibrary>

class wrapper_osgDB_DynamicLibrary : public osgDB::DynamicLibrary {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgDB_DynamicLibrary(lua_State* L, lua_Table* dum) : osgDB::DynamicLibrary(), _obj(L,-1) {};
	wrapper_osgDB_DynamicLibrary(lua_State* L, lua_Table* dum, const osgDB::DynamicLibrary & arg1) : osgDB::DynamicLibrary(arg1), _obj(L,-1) {};
	wrapper_osgDB_DynamicLibrary(lua_State* L, lua_Table* dum, const std::string & name, void * handle) : osgDB::DynamicLibrary(name, handle), _obj(L,-1) {};




};




#endif

