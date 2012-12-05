#ifndef _WRAPPERS_WRAPPER_OSG_FRAGMENTPROGRAM_EXTENSIONS_H_
#define _WRAPPERS_WRAPPER_OSG_FRAGMENTPROGRAM_EXTENSIONS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/FragmentProgram>

class wrapper_osg_FragmentProgram_Extensions : public osg::FragmentProgram::Extensions {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_FragmentProgram_Extensions(lua_State* L, lua_Table* dum, unsigned int contextID) : osg::FragmentProgram::Extensions(contextID), _obj(L,-1) {};




};




#endif

