#ifndef _WRAPPERS_WRAPPER_OSGDB_FIELDREADER_H_
#define _WRAPPERS_WRAPPER_OSGDB_FIELDREADER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/Input>

class wrapper_osgDB_FieldReader : public osgDB::FieldReader, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_FieldReader() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_FieldReader(lua_State* L, lua_Table* dum) : osgDB::FieldReader(), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osgDB_FieldReader(lua_State* L, lua_Table* dum, const osgDB::FieldReader & ic) : osgDB::FieldReader(ic), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool osgDB::FieldReader::eof() const
	bool eof() const {
		if(_obj.pushFunction("eof")) {
			return (_obj.callFunction<bool>());
		}

		return FieldReader::eof();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

