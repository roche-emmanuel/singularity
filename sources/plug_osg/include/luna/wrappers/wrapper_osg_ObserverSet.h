#ifndef _WRAPPERS_WRAPPER_OSG_OBSERVERSET_H_
#define _WRAPPERS_WRAPPER_OSG_OBSERVERSET_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Observer>

class wrapper_osg_ObserverSet : public osg::ObserverSet {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_ObserverSet(lua_State* L, lua_Table* dum, const osg::Referenced * observedObject) : osg::ObserverSet(observedObject), _obj(L,-1) {};
	wrapper_osg_ObserverSet(lua_State* L, lua_Table* dum, const osg::ObserverSet & rhs) : osg::ObserverSet(rhs), _obj(L,-1) {};




};




#endif

