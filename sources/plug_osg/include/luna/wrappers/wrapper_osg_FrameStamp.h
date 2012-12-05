#ifndef _WRAPPERS_WRAPPER_OSG_FRAMESTAMP_H_
#define _WRAPPERS_WRAPPER_OSG_FRAMESTAMP_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/FrameStamp>

class wrapper_osg_FrameStamp : public osg::FrameStamp {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_FrameStamp(lua_State* L, lua_Table* dum) : osg::FrameStamp(), _obj(L,-1) {};
	wrapper_osg_FrameStamp(lua_State* L, lua_Table* dum, const osg::FrameStamp & fs) : osg::FrameStamp(fs), _obj(L,-1) {};




};




#endif

