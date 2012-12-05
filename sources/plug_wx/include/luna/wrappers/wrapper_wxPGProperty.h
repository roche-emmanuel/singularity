#ifndef _WRAPPERS_WRAPPER_WXPGPROPERTY_H_
#define _WRAPPERS_WRAPPER_WXPGPROPERTY_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/propgrid/property.h>

class wrapper_wxPGProperty : public wxPGProperty {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxPGProperty(lua_State* L, lua_Table* dum) : wxPGProperty(), _obj(L,-1) {};
	wrapper_wxPGProperty(lua_State* L, lua_Table* dum, const wxString & label, const wxString & name) : wxPGProperty(label, name), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};

	// void wxPGProperty::OnSetValue()
	void OnSetValue() {
		if(_obj.pushFunction("OnSetValue")) {
			return (_obj.callFunction<void>());
		}

		return wxPGProperty::OnSetValue();
	};

	// wxSize wxPGProperty::OnMeasureImage(int item = -1) const
	wxSize OnMeasureImage(int item = -1) const {
		if(_obj.pushFunction("OnMeasureImage")) {
			_obj.pushArg(item);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxPGProperty::OnMeasureImage(item);
	};

	// bool wxPGProperty::OnEvent(wxPropertyGrid * propgrid, wxWindow * wnd_primary, wxEvent & event)
	bool OnEvent(wxPropertyGrid * propgrid, wxWindow * wnd_primary, wxEvent & event) {
		if(_obj.pushFunction("OnEvent")) {
			_obj.pushArg(propgrid);
			_obj.pushArg(wnd_primary);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxPGProperty::OnEvent(propgrid, wnd_primary, event);
	};

	// const wxPGEditor * wxPGProperty::DoGetEditorClass() const
	const wxPGEditor * DoGetEditorClass() const {
		if(_obj.pushFunction("DoGetEditorClass")) {
			return (_obj.callFunction<wxPGEditor*>());
		}

		return wxPGProperty::DoGetEditorClass();
	};

	// wxValidator * wxPGProperty::DoGetValidator() const
	wxValidator * DoGetValidator() const {
		if(_obj.pushFunction("DoGetValidator")) {
			return (_obj.callFunction<wxValidator*>());
		}

		return wxPGProperty::DoGetValidator();
	};

	// wxPGCellRenderer * wxPGProperty::GetCellRenderer(int column) const
	wxPGCellRenderer * GetCellRenderer(int column) const {
		if(_obj.pushFunction("GetCellRenderer")) {
			_obj.pushArg(column);
			return (_obj.callFunction<wxPGCellRenderer*>());
		}

		return wxPGProperty::GetCellRenderer(column);
	};

	// int wxPGProperty::GetChoiceSelection() const
	int GetChoiceSelection() const {
		if(_obj.pushFunction("GetChoiceSelection")) {
			return (_obj.callFunction<int>());
		}

		return wxPGProperty::GetChoiceSelection();
	};

	// void wxPGProperty::RefreshChildren()
	void RefreshChildren() {
		if(_obj.pushFunction("RefreshChildren")) {
			return (_obj.callFunction<void>());
		}

		return wxPGProperty::RefreshChildren();
	};

	// wxPGEditorDialogAdapter * wxPGProperty::GetEditorDialog() const
	wxPGEditorDialogAdapter * GetEditorDialog() const {
		if(_obj.pushFunction("GetEditorDialog")) {
			return (_obj.callFunction<wxPGEditorDialogAdapter*>());
		}

		return wxPGProperty::GetEditorDialog();
	};

	// wxString wxPGProperty::GetValueAsString(int argFlags = 0) const
	wxString GetValueAsString(int argFlags = 0) const {
		if(_obj.pushFunction("GetValueAsString")) {
			_obj.pushArg(argFlags);
			return *(_obj.callFunction<wxString*>());
		}

		return wxPGProperty::GetValueAsString(argFlags);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif

