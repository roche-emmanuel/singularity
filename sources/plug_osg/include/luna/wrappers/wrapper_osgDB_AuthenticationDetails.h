#ifndef _WRAPPERS_WRAPPER_OSGDB_AUTHENTICATIONDETAILS_H_
#define _WRAPPERS_WRAPPER_OSGDB_AUTHENTICATIONDETAILS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/AuthenticationMap>

class wrapper_osgDB_AuthenticationDetails : public osgDB::AuthenticationDetails {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgDB_AuthenticationDetails(lua_State* L, lua_Table* dum, const std::string & u, const std::string & p, osgDB::AuthenticationDetails::HttpAuthentication auth = osgDB::AuthenticationDetails::BASIC) : osgDB::AuthenticationDetails(u, p, auth), _obj(L,-1) {};




};




#endif

