#ifndef _WRAPPERS_WRAPPER_OSGDB_FIELDREADERITERATOR_H_
#define _WRAPPERS_WRAPPER_OSGDB_FIELDREADERITERATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/Input>

class wrapper_osgDB_FieldReaderIterator : public osgDB::FieldReaderIterator {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgDB_FieldReaderIterator(lua_State* L, lua_Table* dum) : osgDB::FieldReaderIterator(), _obj(L,-1) {};
	wrapper_osgDB_FieldReaderIterator(lua_State* L, lua_Table* dum, const osgDB::FieldReaderIterator & ic) : osgDB::FieldReaderIterator(ic), _obj(L,-1) {};

	// bool osgDB::FieldReaderIterator::eof() const
	bool eof() const {
		if(_obj.pushFunction("eof")) {
			return (_obj.callFunction<bool>());
		}

		return FieldReaderIterator::eof();
	};




};




#endif

