#ifndef _WRAPPERS_WRAPPER_OSG_LINESEGMENT_H_
#define _WRAPPERS_WRAPPER_OSG_LINESEGMENT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/LineSegment>

class wrapper_osg_LineSegment : public osg::LineSegment, public luna_wrapper_base {

public:
	

	wrapper_osg_LineSegment(lua_State* L, lua_Table* dum) : osg::LineSegment(), luna_wrapper_base(L) {};
	wrapper_osg_LineSegment(lua_State* L, lua_Table* dum, const osg::LineSegment & seg) : osg::LineSegment(seg), luna_wrapper_base(L) {};
	wrapper_osg_LineSegment(lua_State* L, lua_Table* dum, const osg::Vec3d & s, const osg::Vec3d & e) : osg::LineSegment(s, e), luna_wrapper_base(L) {};




};




#endif

