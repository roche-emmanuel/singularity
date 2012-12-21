#ifndef _WRAPPERS_WRAPPER_OSG_LINESEGMENT_H_
#define _WRAPPERS_WRAPPER_OSG_LINESEGMENT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/LineSegment>

class wrapper_osg_LineSegment : public osg::LineSegment, public luna_wrapper_base {

public:
		

	~wrapper_osg_LineSegment() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_LineSegment(lua_State* L, lua_Table* dum) : osg::LineSegment(), luna_wrapper_base(L) {};
	wrapper_osg_LineSegment(lua_State* L, lua_Table* dum, const osg::LineSegment & seg) : osg::LineSegment(seg), luna_wrapper_base(L) {};
	wrapper_osg_LineSegment(lua_State* L, lua_Table* dum, const osg::Vec3d & s, const osg::Vec3d & e) : osg::LineSegment(s, e), luna_wrapper_base(L) {};




// static bool osg::LineSegment::intersectAndClip(osg::Vec3d & s, osg::Vec3d & e, const osg::BoundingBoxd & bb)
static bool public_intersectAndClip(osg::Vec3d & s, osg::Vec3d & e, const osg::BoundingBoxd & bb) {
	return osg::LineSegment::intersectAndClip(s, e, bb);
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

