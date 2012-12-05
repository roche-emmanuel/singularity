#ifndef _WRAPPERS_WRAPPER_WXPGEDITOR_H_
#define _WRAPPERS_WRAPPER_WXPGEDITOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/propgrid/editors.h>

class wrapper_wxPGEditor : public wxPGEditor {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxPGEditor(lua_State* L, lua_Table* dum) : wxPGEditor(), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};

	// wxString wxPGEditor::GetName() const
	wxString GetName() const {
		if(_obj.pushFunction("GetName")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxPGEditor::GetName();
	};

	// wxPGWindowList wxPGEditor::CreateControls(wxPropertyGrid * propgrid, wxPGProperty * property, const wxPoint & pos, const wxSize & size) const
	wxPGWindowList CreateControls(wxPropertyGrid * propgrid, wxPGProperty * property, const wxPoint & pos, const wxSize & size) const {
		THROW_IF(!_obj.pushFunction("CreateControls"),"No implementation for abstract function wxPGEditor::CreateControls");
		_obj.pushArg(propgrid);
		_obj.pushArg(property);
		_obj.pushArg(&pos);
		_obj.pushArg(&size);
		return (_obj.callFunction<wxPGWindowList>());
	};

	// void wxPGEditor::UpdateControl(wxPGProperty * property, wxWindow * ctrl) const
	void UpdateControl(wxPGProperty * property, wxWindow * ctrl) const {
		THROW_IF(!_obj.pushFunction("UpdateControl"),"No implementation for abstract function wxPGEditor::UpdateControl");
		_obj.pushArg(property);
		_obj.pushArg(ctrl);
		return (_obj.callFunction<void>());
	};

	// void wxPGEditor::DrawValue(wxDC & dc, const wxRect & rect, wxPGProperty * property, const wxString & text) const
	void DrawValue(wxDC & dc, const wxRect & rect, wxPGProperty * property, const wxString & text) const {
		if(_obj.pushFunction("DrawValue")) {
			_obj.pushArg(&dc);
			_obj.pushArg(&rect);
			_obj.pushArg(property);
			_obj.pushArg(text);
			return (_obj.callFunction<void>());
		}

		return wxPGEditor::DrawValue(dc, rect, property, text);
	};

	// bool wxPGEditor::OnEvent(wxPropertyGrid * propgrid, wxPGProperty * property, wxWindow * wnd_primary, wxEvent & event) const
	bool OnEvent(wxPropertyGrid * propgrid, wxPGProperty * property, wxWindow * wnd_primary, wxEvent & event) const {
		THROW_IF(!_obj.pushFunction("OnEvent"),"No implementation for abstract function wxPGEditor::OnEvent");
		_obj.pushArg(propgrid);
		_obj.pushArg(property);
		_obj.pushArg(wnd_primary);
		_obj.pushArg(&event);
		return (_obj.callFunction<bool>());
	};

	// void wxPGEditor::SetValueToUnspecified(wxPGProperty * property, wxWindow * ctrl) const
	void SetValueToUnspecified(wxPGProperty * property, wxWindow * ctrl) const {
		THROW_IF(!_obj.pushFunction("SetValueToUnspecified"),"No implementation for abstract function wxPGEditor::SetValueToUnspecified");
		_obj.pushArg(property);
		_obj.pushArg(ctrl);
		return (_obj.callFunction<void>());
	};

	// void wxPGEditor::SetControlAppearance(wxPropertyGrid * pg, wxPGProperty * property, wxWindow * ctrl, const wxPGCell & appearance, const wxPGCell & oldAppearance, bool unspecified) const
	void SetControlAppearance(wxPropertyGrid * pg, wxPGProperty * property, wxWindow * ctrl, const wxPGCell & appearance, const wxPGCell & oldAppearance, bool unspecified) const {
		if(_obj.pushFunction("SetControlAppearance")) {
			_obj.pushArg(pg);
			_obj.pushArg(property);
			_obj.pushArg(ctrl);
			_obj.pushArg(&appearance);
			_obj.pushArg(&oldAppearance);
			_obj.pushArg(unspecified);
			return (_obj.callFunction<void>());
		}

		return wxPGEditor::SetControlAppearance(pg, property, ctrl, appearance, oldAppearance, unspecified);
	};

	// void wxPGEditor::SetControlStringValue(wxPGProperty * property, wxWindow * ctrl, const wxString & txt) const
	void SetControlStringValue(wxPGProperty * property, wxWindow * ctrl, const wxString & txt) const {
		if(_obj.pushFunction("SetControlStringValue")) {
			_obj.pushArg(property);
			_obj.pushArg(ctrl);
			_obj.pushArg(txt);
			return (_obj.callFunction<void>());
		}

		return wxPGEditor::SetControlStringValue(property, ctrl, txt);
	};

	// void wxPGEditor::SetControlIntValue(wxPGProperty * property, wxWindow * ctrl, int value) const
	void SetControlIntValue(wxPGProperty * property, wxWindow * ctrl, int value) const {
		if(_obj.pushFunction("SetControlIntValue")) {
			_obj.pushArg(property);
			_obj.pushArg(ctrl);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return wxPGEditor::SetControlIntValue(property, ctrl, value);
	};

	// int wxPGEditor::InsertItem(wxWindow * ctrl, const wxString & label, int index) const
	int InsertItem(wxWindow * ctrl, const wxString & label, int index) const {
		if(_obj.pushFunction("InsertItem")) {
			_obj.pushArg(ctrl);
			_obj.pushArg(label);
			_obj.pushArg(index);
			return (_obj.callFunction<int>());
		}

		return wxPGEditor::InsertItem(ctrl, label, index);
	};

	// void wxPGEditor::DeleteItem(wxWindow * ctrl, int index) const
	void DeleteItem(wxWindow * ctrl, int index) const {
		if(_obj.pushFunction("DeleteItem")) {
			_obj.pushArg(ctrl);
			_obj.pushArg(index);
			return (_obj.callFunction<void>());
		}

		return wxPGEditor::DeleteItem(ctrl, index);
	};

	// void wxPGEditor::OnFocus(wxPGProperty * property, wxWindow * wnd) const
	void OnFocus(wxPGProperty * property, wxWindow * wnd) const {
		if(_obj.pushFunction("OnFocus")) {
			_obj.pushArg(property);
			_obj.pushArg(wnd);
			return (_obj.callFunction<void>());
		}

		return wxPGEditor::OnFocus(property, wnd);
	};

	// bool wxPGEditor::CanContainCustomImage() const
	bool CanContainCustomImage() const {
		if(_obj.pushFunction("CanContainCustomImage")) {
			return (_obj.callFunction<bool>());
		}

		return wxPGEditor::CanContainCustomImage();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif

