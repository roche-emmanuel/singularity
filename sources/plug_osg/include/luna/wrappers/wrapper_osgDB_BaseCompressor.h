#ifndef _WRAPPERS_WRAPPER_OSGDB_BASECOMPRESSOR_H_
#define _WRAPPERS_WRAPPER_OSGDB_BASECOMPRESSOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/ObjectWrapper>

class wrapper_osgDB_BaseCompressor : public osgDB::BaseCompressor {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgDB_BaseCompressor(lua_State* L, lua_Table* dum) : osgDB::BaseCompressor(), _obj(L,-1) {};




};




#endif

