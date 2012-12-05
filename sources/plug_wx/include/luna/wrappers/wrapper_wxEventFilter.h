#ifndef _WRAPPERS_WRAPPER_WXEVENTFILTER_H_
#define _WRAPPERS_WRAPPER_WXEVENTFILTER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/eventfilter.h>

class wrapper_wxEventFilter : public wxEventFilter {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxEventFilter(lua_State* L, lua_Table* dum) : wxEventFilter(), _obj(L,-1) {};

	// int wxEventFilter::FilterEvent(wxEvent & event)
	int FilterEvent(wxEvent & event) {
		THROW_IF(!_obj.pushFunction("FilterEvent"),"No implementation for abstract function wxEventFilter::FilterEvent");
		_obj.pushArg(&event);
		return (_obj.callFunction<int>());
	};




};




#endif

