#ifndef _WRAPPERS_WRAPPER_WXMESSAGEOUTPUTDEBUG_H_
#define _WRAPPERS_WRAPPER_WXMESSAGEOUTPUTDEBUG_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/msgout.h>

class wrapper_wxMessageOutputDebug : public wxMessageOutputDebug, public luna_wrapper_base {

public:
		

	~wrapper_wxMessageOutputDebug() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxMessageOutputDebug(lua_State* L, lua_Table* dum) : wxMessageOutputDebug(), luna_wrapper_base(L) { register_protected_methods(L); };

	// Public virtual methods:
	// void wxMessageOutput::Output(const wxString & str)
	void Output(const wxString & str) {
		THROW_IF(!_obj.pushFunction("Output"),"No implementation for abstract function wxMessageOutput::Output");
		_obj.pushArg(str);
		return (_obj.callFunction<void>());
	};



	// Protected virtual methods:

	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

