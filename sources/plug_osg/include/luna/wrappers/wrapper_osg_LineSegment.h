#ifndef _WRAPPERS_WRAPPER_OSG_LINESEGMENT_H_
#define _WRAPPERS_WRAPPER_OSG_LINESEGMENT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/LineSegment>

class wrapper_osg_LineSegment : public osg::LineSegment {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_LineSegment(lua_State* L, lua_Table* dum) : osg::LineSegment(), _obj(L,-1) {};
	wrapper_osg_LineSegment(lua_State* L, lua_Table* dum, const osg::LineSegment & seg) : osg::LineSegment(seg), _obj(L,-1) {};
	wrapper_osg_LineSegment(lua_State* L, lua_Table* dum, const osg::Vec3d & s, const osg::Vec3d & e) : osg::LineSegment(s, e), _obj(L,-1) {};




};




#endif

