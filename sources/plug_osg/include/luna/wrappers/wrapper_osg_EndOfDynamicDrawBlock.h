#ifndef _WRAPPERS_WRAPPER_OSG_ENDOFDYNAMICDRAWBLOCK_H_
#define _WRAPPERS_WRAPPER_OSG_ENDOFDYNAMICDRAWBLOCK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GraphicsThread>

class wrapper_osg_EndOfDynamicDrawBlock : public osg::EndOfDynamicDrawBlock, public luna_wrapper_base {

public:
		

	~wrapper_osg_EndOfDynamicDrawBlock() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_EndOfDynamicDrawBlock(lua_State* L, lua_Table* dum, unsigned int arg1) : osg::EndOfDynamicDrawBlock(arg1), luna_wrapper_base(L) {};

	// void osg::EndOfDynamicDrawBlock::completed(osg::State * state)
	void completed(osg::State * state) {
		if(_obj.pushFunction("completed")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return EndOfDynamicDrawBlock::completed(state);
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

