#ifndef _WRAPPERS_WRAPPER_WXICON_H_
#define _WRAPPERS_WRAPPER_WXICON_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/icon.h>

class wrapper_wxIcon : public wxIcon {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxIcon(lua_State* L, lua_Table* dum) : wxIcon(), _obj(L,-1) {};
	wrapper_wxIcon(lua_State* L, lua_Table* dum, const wxIcon & icon) : wxIcon(icon), _obj(L,-1) {};
	wrapper_wxIcon(lua_State* L, lua_Table* dum, const char *const * bits) : wxIcon(bits), _obj(L,-1) {};
	wrapper_wxIcon(lua_State* L, lua_Table* dum, const wxString & name, wxBitmapType type = wxICON_DEFAULT_TYPE, int desiredWidth = -1, int desiredHeight = -1) : wxIcon(name, type, desiredWidth, desiredHeight), _obj(L,-1) {};
	wrapper_wxIcon(lua_State* L, lua_Table* dum, const wxIconLocation & loc) : wxIcon(loc), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxIcon::GetClassInfo();
	};

	// bool wxIcon::IsOk() const
	bool IsOk() const {
		if(_obj.pushFunction("IsOk")) {
			return (_obj.callFunction<bool>());
		}

		return wxIcon::IsOk();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxIcon::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxIcon::CloneRefData(data);
	};


};




#endif

