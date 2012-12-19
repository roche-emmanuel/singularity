#ifndef _WRAPPERS_WRAPPER_OSG_FRAMESTAMP_H_
#define _WRAPPERS_WRAPPER_OSG_FRAMESTAMP_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/FrameStamp>

class wrapper_osg_FrameStamp : public osg::FrameStamp, public luna_wrapper_base {

public:
	

	wrapper_osg_FrameStamp(lua_State* L, lua_Table* dum) : osg::FrameStamp(), luna_wrapper_base(L) {};
	wrapper_osg_FrameStamp(lua_State* L, lua_Table* dum, const osg::FrameStamp & fs) : osg::FrameStamp(fs), luna_wrapper_base(L) {};




};




#endif

