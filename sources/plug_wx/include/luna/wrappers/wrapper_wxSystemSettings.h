#ifndef _WRAPPERS_WRAPPER_WXSYSTEMSETTINGS_H_
#define _WRAPPERS_WRAPPER_WXSYSTEMSETTINGS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/settings.h>

class wrapper_wxSystemSettings : public wxSystemSettings, public luna_wrapper_base {

public:
		

	~wrapper_wxSystemSettings() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	




};




#endif

