#ifndef _WRAPPERS_WRAPPER_OSGDB_BASESERIALIZER_H_
#define _WRAPPERS_WRAPPER_OSGDB_BASESERIALIZER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/Serializer>

class wrapper_osgDB_BaseSerializer : public osgDB::BaseSerializer, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_BaseSerializer() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_BaseSerializer(lua_State* L, lua_Table* dum) : osgDB::BaseSerializer(), luna_wrapper_base(L) {};

	// bool osgDB::BaseSerializer::read(osgDB::InputStream & arg1, osg::Object & arg2)
	bool read(osgDB::InputStream & arg1, osg::Object & arg2) {
		THROW_IF(!_obj.pushFunction("read"),"No implementation for abstract function osgDB::BaseSerializer::read");
		_obj.pushArg(&arg1);
		_obj.pushArg(&arg2);
		return (_obj.callFunction<bool>());
	};

	// bool osgDB::BaseSerializer::write(osgDB::OutputStream & arg1, const osg::Object & arg2)
	bool write(osgDB::OutputStream & arg1, const osg::Object & arg2) {
		THROW_IF(!_obj.pushFunction("write"),"No implementation for abstract function osgDB::BaseSerializer::write");
		_obj.pushArg(&arg1);
		_obj.pushArg(&arg2);
		return (_obj.callFunction<bool>());
	};

	// const std::string & osgDB::BaseSerializer::getName() const
	const std::string & getName() const {
		THROW_IF(!_obj.pushFunction("getName"),"No implementation for abstract function osgDB::BaseSerializer::getName");
		return (_obj.callFunction<std::string>());
	};




};




#endif

