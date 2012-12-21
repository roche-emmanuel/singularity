#ifndef _WRAPPERS_WRAPPER_OSGDB_REGISTRY_H_
#define _WRAPPERS_WRAPPER_OSGDB_REGISTRY_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/Registry>

class wrapper_osgDB_Registry : public osgDB::Registry, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_Registry() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_Registry(lua_State* L, lua_Table* dum) : osgDB::Registry(), luna_wrapper_base(L) {};




// void osgDB::Registry::destruct()
void public_destruct() {
	return osgDB::Registry::destruct();
};

// static std::string osgDB::Registry::trim(const std::string & str)
static std::string public_trim(const std::string & str) {
	return osgDB::Registry::trim(str);
};

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

