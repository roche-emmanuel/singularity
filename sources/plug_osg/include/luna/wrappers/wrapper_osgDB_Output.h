#ifndef _WRAPPERS_WRAPPER_OSGDB_OUTPUT_H_
#define _WRAPPERS_WRAPPER_OSGDB_OUTPUT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/Output>

class wrapper_osgDB_Output : public osgDB::Output {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgDB_Output(lua_State* L, lua_Table* dum) : osgDB::Output(), _obj(L,-1) {};
	wrapper_osgDB_Output(lua_State* L, lua_Table* dum, const char * name) : osgDB::Output(name), _obj(L,-1) {};

	// bool osgDB::Output::writeObject(const osg::Object & obj)
	bool writeObject(const osg::Object & obj) {
		if(_obj.pushFunction("writeObject")) {
			_obj.pushArg(&obj);
			return (_obj.callFunction<bool>());
		}

		return osgDB::Output::writeObject(obj);
	};

	// void osgDB::Output::writeBeginObject(const std::string & name)
	void writeBeginObject(const std::string & name) {
		if(_obj.pushFunction("writeBeginObject")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return osgDB::Output::writeBeginObject(name);
	};

	// void osgDB::Output::writeEndObject()
	void writeEndObject() {
		if(_obj.pushFunction("writeEndObject")) {
			return (_obj.callFunction<void>());
		}

		return osgDB::Output::writeEndObject();
	};

	// void osgDB::Output::writeUseID(const std::string & id)
	void writeUseID(const std::string & id) {
		if(_obj.pushFunction("writeUseID")) {
			_obj.pushArg(id);
			return (_obj.callFunction<void>());
		}

		return osgDB::Output::writeUseID(id);
	};

	// void osgDB::Output::writeUniqueID(const std::string & id)
	void writeUniqueID(const std::string & id) {
		if(_obj.pushFunction("writeUniqueID")) {
			_obj.pushArg(id);
			return (_obj.callFunction<void>());
		}

		return osgDB::Output::writeUniqueID(id);
	};

	// std::string osgDB::Output::getFileNameForOutput(const std::string & filename) const
	std::string getFileNameForOutput(const std::string & filename) const {
		if(_obj.pushFunction("getFileNameForOutput")) {
			_obj.pushArg(filename);
			return (_obj.callFunction<std::string>());
		}

		return osgDB::Output::getFileNameForOutput(filename);
	};

	// std::string osgDB::Output::getTextureFileNameForOutput()
	std::string getTextureFileNameForOutput() {
		if(_obj.pushFunction("getTextureFileNameForOutput")) {
			return (_obj.callFunction<std::string>());
		}

		return osgDB::Output::getTextureFileNameForOutput();
	};

	// std::string osgDB::Output::getShaderFileNameForOutput()
	std::string getShaderFileNameForOutput() {
		if(_obj.pushFunction("getShaderFileNameForOutput")) {
			return (_obj.callFunction<std::string>());
		}

		return osgDB::Output::getShaderFileNameForOutput();
	};


protected:
	// void osgDB::Output::init()

};




#endif

