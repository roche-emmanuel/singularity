#ifndef _WRAPPERS_WRAPPER_WXMESSAGEOUTPUTBEST_H_
#define _WRAPPERS_WRAPPER_WXMESSAGEOUTPUTBEST_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/msgout.h>

class wrapper_wxMessageOutputBest : public wxMessageOutputBest, public luna_wrapper_base {

public:
		

	~wrapper_wxMessageOutputBest() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxMessageOutputBest(lua_State* L, lua_Table* dum, wxMessageOutputFlags flags = ::wxMSGOUT_PREFER_STDERR) : wxMessageOutputBest(flags), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void wxMessageOutput::Output(const wxString & str)
	void Output(const wxString & str) {
		THROW_IF(!_obj.pushFunction("Output"),"No implementation for abstract function wxMessageOutput::Output");
		_obj.pushArg(str);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

