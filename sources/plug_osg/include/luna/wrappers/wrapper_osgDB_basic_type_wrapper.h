#ifndef _WRAPPERS_WRAPPER_OSGDB_BASIC_TYPE_WRAPPER_H_
#define _WRAPPERS_WRAPPER_OSGDB_BASIC_TYPE_WRAPPER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/Registry>

class wrapper_osgDB_basic_type_wrapper : public osgDB::basic_type_wrapper {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgDB_basic_type_wrapper(lua_State* L, lua_Table* dum) : osgDB::basic_type_wrapper(), _obj(L,-1) {};

	// bool osgDB::basic_type_wrapper::matches(const osg::Object * proto) const
	bool matches(const osg::Object * proto) const {
		THROW_IF(!_obj.pushFunction("matches"),"No implementation for abstract function osgDB::basic_type_wrapper::matches");
		_obj.pushArg(proto);
		return (_obj.callFunction<bool>());
	};




};




#endif

