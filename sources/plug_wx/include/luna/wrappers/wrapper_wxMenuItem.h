#ifndef _WRAPPERS_WRAPPER_WXMENUITEM_H_
#define _WRAPPERS_WRAPPER_WXMENUITEM_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/menuitem.h>

class wrapper_wxMenuItem : public wxMenuItem {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxMenuItem(lua_State* L, lua_Table* dum, wxMenu * parentMenu = NULL, int id = ::wxID_SEPARATOR, const wxString & text = wxEmptyString, const wxString & helpString = wxEmptyString, wxItemKind kind = ::wxITEM_NORMAL, wxMenu * subMenu = NULL) : wxMenuItem(parentMenu, id, text, helpString, kind, subMenu), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxMenuItem::GetClassInfo();
	};

	// void wxMenuItem::Check(bool check = true)
	void Check(bool check = true) {
		if(_obj.pushFunction("Check")) {
			_obj.pushArg(check);
			return (_obj.callFunction<void>());
		}

		return wxMenuItem::Check(check);
	};

	// void wxMenuItem::Enable(bool enable = true)
	void Enable(bool enable = true) {
		if(_obj.pushFunction("Enable")) {
			_obj.pushArg(enable);
			return (_obj.callFunction<void>());
		}

		return wxMenuItem::Enable(enable);
	};

	// const wxBitmap & wxMenuItem::GetBitmap() const
	const wxBitmap & GetBitmap() const {
		if(_obj.pushFunction("GetBitmap")) {
			return *(_obj.callFunction<wxBitmap*>());
		}

		return wxMenuItem::GetBitmap();
	};

	// wxString wxMenuItem::GetItemLabel() const
	wxString GetItemLabel() const {
		if(_obj.pushFunction("GetItemLabel")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxMenuItem::GetItemLabel();
	};

	// wxString wxMenuItem::GetItemLabelText() const
	wxString GetItemLabelText() const {
		if(_obj.pushFunction("GetItemLabelText")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxMenuItem::GetItemLabelText();
	};

	// bool wxMenuItem::IsChecked() const
	bool IsChecked() const {
		if(_obj.pushFunction("IsChecked")) {
			return (_obj.callFunction<bool>());
		}

		return wxMenuItem::IsChecked();
	};

	// bool wxMenuItem::IsEnabled() const
	bool IsEnabled() const {
		if(_obj.pushFunction("IsEnabled")) {
			return (_obj.callFunction<bool>());
		}

		return wxMenuItem::IsEnabled();
	};

	// void wxMenuItem::SetBitmap(const wxBitmap & bmp, bool checked = true)
	void SetBitmap(const wxBitmap & bmp, bool checked = true) {
		if(_obj.pushFunction("SetBitmap")) {
			_obj.pushArg(&bmp);
			_obj.pushArg(checked);
			return (_obj.callFunction<void>());
		}

		return wxMenuItem::SetBitmap(bmp, checked);
	};

	// void wxMenuItem::SetItemLabel(const wxString & label)
	void SetItemLabel(const wxString & label) {
		if(_obj.pushFunction("SetItemLabel")) {
			_obj.pushArg(label);
			return (_obj.callFunction<void>());
		}

		return wxMenuItem::SetItemLabel(label);
	};

	// void wxMenuItem::SetText(const wxString & text)
	void SetText(const wxString & text) {
		if(_obj.pushFunction("SetText")) {
			_obj.pushArg(text);
			return (_obj.callFunction<void>());
		}

		return wxMenuItem::SetText(text);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxMenuItem::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxMenuItem::CloneRefData(data);
	};


};




#endif

