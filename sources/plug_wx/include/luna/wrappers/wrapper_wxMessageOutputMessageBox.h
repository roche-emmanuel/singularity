#ifndef _WRAPPERS_WRAPPER_WXMESSAGEOUTPUTMESSAGEBOX_H_
#define _WRAPPERS_WRAPPER_WXMESSAGEOUTPUTMESSAGEBOX_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/msgout.h>

class wrapper_wxMessageOutputMessageBox : public wxMessageOutputMessageBox {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxMessageOutputMessageBox(lua_State* L, lua_Table* dum) : wxMessageOutputMessageBox(), _obj(L,-1) {};

	// void wxMessageOutput::Output(const wxString & str)
	void Output(const wxString & str) {
		THROW_IF(!_obj.pushFunction("Output"),"No implementation for abstract function wxMessageOutput::Output");
		_obj.pushArg(str);
		return (_obj.callFunction<void>());
	};




};




#endif

