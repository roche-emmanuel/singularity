#ifndef _WRAPPERS_WRAPPER_OSG_POINT_EXTENSIONS_H_
#define _WRAPPERS_WRAPPER_OSG_POINT_EXTENSIONS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Point>

class wrapper_osg_Point_Extensions : public osg::Point::Extensions {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_Point_Extensions(lua_State* L, lua_Table* dum, unsigned int contextID) : osg::Point::Extensions(contextID), _obj(L,-1) {};




};




#endif

