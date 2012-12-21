#ifndef _WRAPPERS_WRAPPER_WXMESSAGEOUTPUT_H_
#define _WRAPPERS_WRAPPER_WXMESSAGEOUTPUT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/msgout.h>

class wrapper_wxMessageOutput : public wxMessageOutput, public luna_wrapper_base {

public:
		

	~wrapper_wxMessageOutput() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	

	// void wxMessageOutput::Output(const wxString & str)
	void Output(const wxString & str) {
		THROW_IF(!_obj.pushFunction("Output"),"No implementation for abstract function wxMessageOutput::Output");
		_obj.pushArg(str);
		return (_obj.callFunction<void>());
	};




};




#endif

