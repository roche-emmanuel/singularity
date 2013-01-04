#ifndef _WRAPPERS_WRAPPER_OSGDB_FIELDREADERITERATOR_H_
#define _WRAPPERS_WRAPPER_OSGDB_FIELDREADERITERATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/Input>

class wrapper_osgDB_FieldReaderIterator : public osgDB::FieldReaderIterator, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_FieldReaderIterator() {
		logDEBUG3("Calling delete function for wrapper osgDB_FieldReaderIterator");
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_FieldReaderIterator(lua_State* L, lua_Table* dum) : osgDB::FieldReaderIterator(), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osgDB_FieldReaderIterator(lua_State* L, lua_Table* dum, const osgDB::FieldReaderIterator & ic) : osgDB::FieldReaderIterator(ic), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool osgDB::FieldReaderIterator::eof() const
	bool eof() const {
		if(_obj.pushFunction("eof")) {
			return (_obj.callFunction<bool>());
		}

		return FieldReaderIterator::eof();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

