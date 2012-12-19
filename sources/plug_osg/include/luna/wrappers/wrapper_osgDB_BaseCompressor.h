#ifndef _WRAPPERS_WRAPPER_OSGDB_BASECOMPRESSOR_H_
#define _WRAPPERS_WRAPPER_OSGDB_BASECOMPRESSOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/ObjectWrapper>

class wrapper_osgDB_BaseCompressor : public osgDB::BaseCompressor, public luna_wrapper_base {

public:
	

	wrapper_osgDB_BaseCompressor(lua_State* L, lua_Table* dum) : osgDB::BaseCompressor(), luna_wrapper_base(L) {};

	// bool osgDB::BaseCompressor::compress(std::ostream & arg1, const std::string & arg2)
	bool compress(std::ostream & arg1, const std::string & arg2) {
		THROW_IF(!_obj.pushFunction("compress"),"No implementation for abstract function osgDB::BaseCompressor::compress");
		_obj.pushArg(&arg1);
		_obj.pushArg(arg2);
		return (_obj.callFunction<bool>());
	};

	// bool osgDB::BaseCompressor::decompress(std::istream & arg1, std::string & arg2)
	bool decompress(std::istream & arg1, std::string & arg2) {
		THROW_IF(!_obj.pushFunction("decompress"),"No implementation for abstract function osgDB::BaseCompressor::decompress");
		_obj.pushArg(&arg1);
		_obj.pushArg(arg2);
		return (_obj.callFunction<bool>());
	};




};




#endif

