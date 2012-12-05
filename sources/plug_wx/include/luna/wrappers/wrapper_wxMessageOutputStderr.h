#ifndef _WRAPPERS_WRAPPER_WXMESSAGEOUTPUTSTDERR_H_
#define _WRAPPERS_WRAPPER_WXMESSAGEOUTPUTSTDERR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/msgout.h>

class wrapper_wxMessageOutputStderr : public wxMessageOutputStderr {
protected:
	sgt::LuaObject _obj;
	
public:
	


	// void wxMessageOutput::Output(const wxString & str)
	void Output(const wxString & str) {
		THROW_IF(!_obj.pushFunction("Output"),"No implementation for abstract function wxMessageOutput::Output");
		_obj.pushArg(str);
		return (_obj.callFunction<void>());
	};




};




#endif

