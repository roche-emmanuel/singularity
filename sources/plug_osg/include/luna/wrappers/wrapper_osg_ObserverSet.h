#ifndef _WRAPPERS_WRAPPER_OSG_OBSERVERSET_H_
#define _WRAPPERS_WRAPPER_OSG_OBSERVERSET_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Observer>

class wrapper_osg_ObserverSet : public osg::ObserverSet, public luna_wrapper_base {

public:
		

	~wrapper_osg_ObserverSet() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_ObserverSet(lua_State* L, lua_Table* dum, const osg::Referenced * observedObject) : osg::ObserverSet(observedObject), luna_wrapper_base(L) {};
	wrapper_osg_ObserverSet(lua_State* L, lua_Table* dum, const osg::ObserverSet & rhs) : osg::ObserverSet(rhs), luna_wrapper_base(L) {};




// osg::ObserverSet & osg::ObserverSet::operator=(const osg::ObserverSet & arg1)
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

