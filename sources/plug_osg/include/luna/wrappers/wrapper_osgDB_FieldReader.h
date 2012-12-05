#ifndef _WRAPPERS_WRAPPER_OSGDB_FIELDREADER_H_
#define _WRAPPERS_WRAPPER_OSGDB_FIELDREADER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/Input>

class wrapper_osgDB_FieldReader : public osgDB::FieldReader {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgDB_FieldReader(lua_State* L, lua_Table* dum) : osgDB::FieldReader(), _obj(L,-1) {};
	wrapper_osgDB_FieldReader(lua_State* L, lua_Table* dum, const osgDB::FieldReader & ic) : osgDB::FieldReader(ic), _obj(L,-1) {};

	// bool osgDB::FieldReader::eof() const
	bool eof() const {
		if(_obj.pushFunction("eof")) {
			return (_obj.callFunction<bool>());
		}

		return osgDB::FieldReader::eof();
	};

	// osgDB::FieldReader & osgDB::FieldReader::operator=(const osgDB::FieldReader & ic)
	osgDB::FieldReader & operator=(const osgDB::FieldReader & ic) {
		if(_obj.pushFunction("operator=")) {
			_obj.pushArg(&ic);
			return *(_obj.callFunction<osgDB::FieldReader*>());
		}

		return osgDB::FieldReader::operator=(ic);
	};




};




#endif

