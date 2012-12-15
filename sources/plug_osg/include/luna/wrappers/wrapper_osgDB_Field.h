#ifndef _WRAPPERS_WRAPPER_OSGDB_FIELD_H_
#define _WRAPPERS_WRAPPER_OSGDB_FIELD_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/Input>

class wrapper_osgDB_Field : public osgDB::Field {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgDB_Field(lua_State* L, lua_Table* dum) : osgDB::Field(), _obj(L,-1) {};
	wrapper_osgDB_Field(lua_State* L, lua_Table* dum, const osgDB::Field & field) : osgDB::Field(field), _obj(L,-1) {};

	// osgDB::Field & osgDB::Field::operator=(const osgDB::Field & ic)
	osgDB::Field & operator=(const osgDB::Field & ic) {
		if(_obj.pushFunction("operator=")) {
			_obj.pushArg(&ic);
			return *(_obj.callFunction<osgDB::Field*>());
		}

		return Field::operator=(ic);
	};




};




#endif

