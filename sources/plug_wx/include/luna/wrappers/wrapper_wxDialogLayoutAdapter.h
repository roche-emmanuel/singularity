#ifndef _WRAPPERS_WRAPPER_WXDIALOGLAYOUTADAPTER_H_
#define _WRAPPERS_WRAPPER_WXDIALOGLAYOUTADAPTER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/dialog.h>

class wrapper_wxDialogLayoutAdapter : public wxDialogLayoutAdapter {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxDialogLayoutAdapter(lua_State* L, lua_Table* dum) : wxDialogLayoutAdapter(), _obj(L,-1) {};

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




};




#endif

