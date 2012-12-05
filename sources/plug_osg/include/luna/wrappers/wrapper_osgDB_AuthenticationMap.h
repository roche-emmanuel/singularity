#ifndef _WRAPPERS_WRAPPER_OSGDB_AUTHENTICATIONMAP_H_
#define _WRAPPERS_WRAPPER_OSGDB_AUTHENTICATIONMAP_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/AuthenticationMap>

class wrapper_osgDB_AuthenticationMap : public osgDB::AuthenticationMap {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgDB_AuthenticationMap(lua_State* L, lua_Table* dum) : osgDB::AuthenticationMap(), _obj(L,-1) {};

	// void osgDB::AuthenticationMap::addAuthenticationDetails(const std::string & path, osgDB::AuthenticationDetails * details)
	void addAuthenticationDetails(const std::string & path, osgDB::AuthenticationDetails * details) {
		if(_obj.pushFunction("addAuthenticationDetails")) {
			_obj.pushArg(path);
			_obj.pushArg(details);
			return (_obj.callFunction<void>());
		}

		return osgDB::AuthenticationMap::addAuthenticationDetails(path, details);
	};

	// const osgDB::AuthenticationDetails * osgDB::AuthenticationMap::getAuthenticationDetails(const std::string & path) const
	const osgDB::AuthenticationDetails * getAuthenticationDetails(const std::string & path) const {
		if(_obj.pushFunction("getAuthenticationDetails")) {
			_obj.pushArg(path);
			return (_obj.callFunction<osgDB::AuthenticationDetails*>());
		}

		return osgDB::AuthenticationMap::getAuthenticationDetails(path);
	};




};




#endif
