#ifndef _WRAPPERS_WRAPPER_OSGDB_FIELDREADERITERATOR_H_
#define _WRAPPERS_WRAPPER_OSGDB_FIELDREADERITERATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/Input>

class wrapper_osgDB_FieldReaderIterator : public osgDB::FieldReaderIterator, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_FieldReaderIterator() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_FieldReaderIterator(lua_State* L, lua_Table* dum) : osgDB::FieldReaderIterator(), luna_wrapper_base(L) {};
	wrapper_osgDB_FieldReaderIterator(lua_State* L, lua_Table* dum, const osgDB::FieldReaderIterator & ic) : osgDB::FieldReaderIterator(ic), luna_wrapper_base(L) {};

	// bool osgDB::FieldReaderIterator::eof() const
	bool eof() const {
		if(_obj.pushFunction("eof")) {
			return (_obj.callFunction<bool>());
		}

		return FieldReaderIterator::eof();
	};





};




#endif

