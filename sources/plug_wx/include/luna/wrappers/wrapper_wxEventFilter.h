#ifndef _WRAPPERS_WRAPPER_WXEVENTFILTER_H_
#define _WRAPPERS_WRAPPER_WXEVENTFILTER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/eventfilter.h>

class wrapper_wxEventFilter : public wxEventFilter, public luna_wrapper_base {

public:
		

	~wrapper_wxEventFilter() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxEventFilter(lua_State* L, lua_Table* dum) : wxEventFilter(), luna_wrapper_base(L) {};

	// int wxEventFilter::FilterEvent(wxEvent & event)
	int FilterEvent(wxEvent & event) {
		THROW_IF(!_obj.pushFunction("FilterEvent"),"No implementation for abstract function wxEventFilter::FilterEvent");
		_obj.pushArg(&event);
		return (_obj.callFunction<int>());
	};




};




#endif

