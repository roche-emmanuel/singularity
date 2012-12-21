#ifndef _WRAPPERS_WRAPPER_OSG_PROGRAM_PERCONTEXTPROGRAM_H_
#define _WRAPPERS_WRAPPER_OSG_PROGRAM_PERCONTEXTPROGRAM_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Program>

class wrapper_osg_Program_PerContextProgram : public osg::Program::PerContextProgram, public luna_wrapper_base {

public:
		

	~wrapper_osg_Program_PerContextProgram() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_Program_PerContextProgram(lua_State* L, lua_Table* dum, const osg::Program * program, unsigned int contextID) : osg::Program::PerContextProgram(program, contextID), luna_wrapper_base(L) {};




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

