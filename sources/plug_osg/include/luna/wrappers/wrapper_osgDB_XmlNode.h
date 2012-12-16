#ifndef _WRAPPERS_WRAPPER_OSGDB_XMLNODE_H_
#define _WRAPPERS_WRAPPER_OSGDB_XMLNODE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/XmlParser>

class wrapper_osgDB_XmlNode : public osgDB::XmlNode, public luna_wrapper_base {

public:
	

	wrapper_osgDB_XmlNode(lua_State* L, lua_Table* dum) : osgDB::XmlNode(), luna_wrapper_base(L) {};




};




#endif

