#ifndef _WRAPPERS_WRAPPER_OSG_FBOEXTENSIONS_H_
#define _WRAPPERS_WRAPPER_OSG_FBOEXTENSIONS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/FrameBufferObject>

class wrapper_osg_FBOExtensions : public osg::FBOExtensions {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_FBOExtensions(lua_State* L, lua_Table* dum, unsigned int contextID) : osg::FBOExtensions(contextID), _obj(L,-1) {};




};




#endif

