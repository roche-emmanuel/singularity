#ifndef _WRAPPERS_WRAPPER_OSG_VIEW_SLAVE_UPDATESLAVECALLBACK_H_
#define _WRAPPERS_WRAPPER_OSG_VIEW_SLAVE_UPDATESLAVECALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/View>

class wrapper_osg_View_Slave_UpdateSlaveCallback : public osg::View::Slave::UpdateSlaveCallback, public luna_wrapper_base {

public:
		

	~wrapper_osg_View_Slave_UpdateSlaveCallback() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	

	// void osg::View::Slave::UpdateSlaveCallback::updateSlave(osg::View & view, osg::View::Slave & slave)
	void updateSlave(osg::View & view, osg::View::Slave & slave) {
		THROW_IF(!_obj.pushFunction("updateSlave"),"No implementation for abstract function osg::View::Slave::UpdateSlaveCallback::updateSlave");
		_obj.pushArg(&view);
		_obj.pushArg(&slave);
		return (_obj.callFunction<void>());
	};




};




#endif

