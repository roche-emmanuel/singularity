#ifndef _WRAPPERS_WRAPPER_OSGDB_OBJECTWRAPPER_H_
#define _WRAPPERS_WRAPPER_OSGDB_OBJECTWRAPPER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/ObjectWrapper>

class wrapper_osgDB_ObjectWrapper : public osgDB::ObjectWrapper, public luna_wrapper_base {

public:
	

	wrapper_osgDB_ObjectWrapper(lua_State* L, lua_Table* dum, osg::Object * proto, const std::string & name, const std::string & associates) : osgDB::ObjectWrapper(proto, name, associates), luna_wrapper_base(L) {};
	wrapper_osgDB_ObjectWrapper(lua_State* L, lua_Table* dum) : osgDB::ObjectWrapper(), luna_wrapper_base(L) {};




};




#endif

