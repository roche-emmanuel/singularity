#ifndef _WRAPPERS_WRAPPER_OSGDB_AUTHENTICATIONDETAILS_H_
#define _WRAPPERS_WRAPPER_OSGDB_AUTHENTICATIONDETAILS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/AuthenticationMap>

class wrapper_osgDB_AuthenticationDetails : public osgDB::AuthenticationDetails, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_AuthenticationDetails() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_AuthenticationDetails(lua_State* L, lua_Table* dum, const std::string & u, const std::string & p, osgDB::AuthenticationDetails::HttpAuthentication auth = osgDB::AuthenticationDetails::BASIC) : osgDB::AuthenticationDetails(u, p, auth), luna_wrapper_base(L) {};




// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
	return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
};

// void osg::Referenced::deleteUsingDeleteHandler() const
void public_deleteUsingDeleteHandler() const {
	return osg::Referenced::deleteUsingDeleteHandler();
};


};




#endif

