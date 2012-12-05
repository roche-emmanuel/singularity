#ifndef _WRAPPERS_WRAPPER_OSG_VALUEOBJECT_GETVALUEVISITOR_H_
#define _WRAPPERS_WRAPPER_OSG_VALUEOBJECT_GETVALUEVISITOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/ValueObject>

class wrapper_osg_ValueObject_GetValueVisitor : public osg::ValueObject::GetValueVisitor {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_ValueObject_GetValueVisitor(lua_State* L, lua_Table* dum) : osg::ValueObject::GetValueVisitor(), _obj(L,-1) {};




};




#endif

