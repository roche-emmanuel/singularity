#ifndef _WRAPPERS_WRAPPER_WXTIPPROVIDER_H_
#define _WRAPPERS_WRAPPER_WXTIPPROVIDER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/tipdlg.h>

class wrapper_wxTipProvider : public wxTipProvider {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxTipProvider(lua_State* L, lua_Table* dum, size_t currentTip) : wxTipProvider(currentTip), _obj(L,-1) {};

	// wxString wxTipProvider::GetTip()
	wxString GetTip() {
		THROW_IF(!_obj.pushFunction("GetTip"),"No implementation for abstract function wxTipProvider::GetTip");
		return *(_obj.callFunction<wxString*>());
	};




};




#endif

