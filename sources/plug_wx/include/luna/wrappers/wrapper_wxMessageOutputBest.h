#ifndef _WRAPPERS_WRAPPER_WXMESSAGEOUTPUTBEST_H_
#define _WRAPPERS_WRAPPER_WXMESSAGEOUTPUTBEST_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/msgout.h>

class wrapper_wxMessageOutputBest : public wxMessageOutputBest {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxMessageOutputBest(lua_State* L, lua_Table* dum, wxMessageOutputFlags flags = ::wxMSGOUT_PREFER_STDERR) : wxMessageOutputBest(flags), _obj(L,-1) {};

	// void wxMessageOutput::Output(const wxString & str)
	void Output(const wxString & str) {
		THROW_IF(!_obj.pushFunction("Output"),"No implementation for abstract function wxMessageOutput::Output");
		_obj.pushArg(str);
		return (_obj.callFunction<void>());
	};




};




#endif

