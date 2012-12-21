#ifndef _WRAPPERS_WRAPPER_OSGDB_READERWRITERINFO_H_
#define _WRAPPERS_WRAPPER_OSGDB_READERWRITERINFO_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/PluginQuery>

class wrapper_osgDB_ReaderWriterInfo : public osgDB::ReaderWriterInfo, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_ReaderWriterInfo() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_ReaderWriterInfo(lua_State* L, lua_Table* dum) : osgDB::ReaderWriterInfo(), luna_wrapper_base(L) {};




};




#endif

