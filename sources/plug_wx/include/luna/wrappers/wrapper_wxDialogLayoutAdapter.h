#ifndef _WRAPPERS_WRAPPER_WXDIALOGLAYOUTADAPTER_H_
#define _WRAPPERS_WRAPPER_WXDIALOGLAYOUTADAPTER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/dialog.h>

class wrapper_wxDialogLayoutAdapter : public wxDialogLayoutAdapter, public luna_wrapper_base {

public:
		

	~wrapper_wxDialogLayoutAdapter() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxDialogLayoutAdapter(lua_State* L, lua_Table* dum) : wxDialogLayoutAdapter(), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool wxDialogLayoutAdapter::CanDoLayoutAdaptation(wxDialog * dialog)
	bool CanDoLayoutAdaptation(wxDialog * dialog) {
		THROW_IF(!_obj.pushFunction("CanDoLayoutAdaptation"),"No implementation for abstract function wxDialogLayoutAdapter::CanDoLayoutAdaptation");
		_obj.pushArg(dialog);
		return (_obj.callFunction<bool>());
	};

	// bool wxDialogLayoutAdapter::DoLayoutAdaptation(wxDialog * dialog)
	bool DoLayoutAdaptation(wxDialog * dialog) {
		THROW_IF(!_obj.pushFunction("DoLayoutAdaptation"),"No implementation for abstract function wxDialogLayoutAdapter::DoLayoutAdaptation");
		_obj.pushArg(dialog);
		return (_obj.callFunction<bool>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

