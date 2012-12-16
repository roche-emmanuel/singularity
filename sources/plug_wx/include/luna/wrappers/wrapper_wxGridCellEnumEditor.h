#ifndef _WRAPPERS_WRAPPER_WXGRIDCELLENUMEDITOR_H_
#define _WRAPPERS_WRAPPER_WXGRIDCELLENUMEDITOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/grid.h>

class wrapper_wxGridCellEnumEditor : public wxGridCellEnumEditor, public luna_wrapper_base {

public:
	

	wrapper_wxGridCellEnumEditor(lua_State* L, lua_Table* dum, const wxString & choices = wxEmptyString) : wxGridCellEnumEditor(choices), luna_wrapper_base(L) {};

	// void wxGridCellEditor::BeginEdit(int row, int col, wxGrid * grid)
	void BeginEdit(int row, int col, wxGrid * grid) {
		THROW_IF(!_obj.pushFunction("BeginEdit"),"No implementation for abstract function wxGridCellEditor::BeginEdit");
		_obj.pushArg(row);
		_obj.pushArg(col);
		_obj.pushArg(grid);
		return (_obj.callFunction<void>());
	};

	// wxGridCellEditor * wxGridCellEditor::Clone() const
	wxGridCellEditor * Clone() const {
		THROW_IF(!_obj.pushFunction("Clone"),"No implementation for abstract function wxGridCellEditor::Clone");
		return (_obj.callFunction<wxGridCellEditor*>());
	};

	// void wxGridCellEditor::Create(wxWindow * parent, int id, wxEvtHandler * evtHandler)
	void Create(wxWindow * parent, int id, wxEvtHandler * evtHandler) {
		THROW_IF(!_obj.pushFunction("Create"),"No implementation for abstract function wxGridCellEditor::Create");
		_obj.pushArg(parent);
		_obj.pushArg(id);
		_obj.pushArg(evtHandler);
		return (_obj.callFunction<void>());
	};

	// void wxGridCellEditor::Destroy()
	void Destroy() {
		if(_obj.pushFunction("Destroy")) {
			return (_obj.callFunction<void>());
		}

		return wxGridCellEnumEditor::Destroy();
	};

	// bool wxGridCellEditor::EndEdit(int row, int col, const wxGrid * grid, const wxString & oldval, wxString * newval)
	bool EndEdit(int row, int col, const wxGrid * grid, const wxString & oldval, wxString * newval) {
		THROW_IF(!_obj.pushFunction("EndEdit"),"No implementation for abstract function wxGridCellEditor::EndEdit");
		_obj.pushArg(row);
		_obj.pushArg(col);
		_obj.pushArg(grid);
		_obj.pushArg(oldval);
		_obj.pushArg(newval);
		return (_obj.callFunction<bool>());
	};

	// void wxGridCellEditor::ApplyEdit(int row, int col, wxGrid * grid)
	void ApplyEdit(int row, int col, wxGrid * grid) {
		THROW_IF(!_obj.pushFunction("ApplyEdit"),"No implementation for abstract function wxGridCellEditor::ApplyEdit");
		_obj.pushArg(row);
		_obj.pushArg(col);
		_obj.pushArg(grid);
		return (_obj.callFunction<void>());
	};

	// void wxGridCellEditor::HandleReturn(wxKeyEvent & event)
	void HandleReturn(wxKeyEvent & event) {
		if(_obj.pushFunction("HandleReturn")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxGridCellEnumEditor::HandleReturn(event);
	};

	// void wxGridCellEditor::PaintBackground(const wxRect & rectCell, wxGridCellAttr * attr)
	void PaintBackground(const wxRect & rectCell, wxGridCellAttr * attr) {
		if(_obj.pushFunction("PaintBackground")) {
			_obj.pushArg(&rectCell);
			_obj.pushArg(attr);
			return (_obj.callFunction<void>());
		}

		return wxGridCellEnumEditor::PaintBackground(rectCell, attr);
	};

	// void wxGridCellEditor::Reset()
	void Reset() {
		THROW_IF(!_obj.pushFunction("Reset"),"No implementation for abstract function wxGridCellEditor::Reset");
		return (_obj.callFunction<void>());
	};

	// void wxGridCellEditor::SetSize(const wxRect & rect)
	void SetSize(const wxRect & rect) {
		if(_obj.pushFunction("SetSize")) {
			_obj.pushArg(&rect);
			return (_obj.callFunction<void>());
		}

		return wxGridCellEnumEditor::SetSize(rect);
	};

	// void wxGridCellEditor::Show(bool show, wxGridCellAttr * attr = NULL)
	void Show(bool show, wxGridCellAttr * attr = NULL) {
		if(_obj.pushFunction("Show")) {
			_obj.pushArg(show);
			_obj.pushArg(attr);
			return (_obj.callFunction<void>());
		}

		return wxGridCellEnumEditor::Show(show, attr);
	};

	// void wxGridCellEditor::StartingClick()
	void StartingClick() {
		if(_obj.pushFunction("StartingClick")) {
			return (_obj.callFunction<void>());
		}

		return wxGridCellEnumEditor::StartingClick();
	};

	// void wxGridCellEditor::StartingKey(wxKeyEvent & event)
	void StartingKey(wxKeyEvent & event) {
		if(_obj.pushFunction("StartingKey")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxGridCellEnumEditor::StartingKey(event);
	};

	// void wxGridCellChoiceEditor::SetParameters(const wxString & params)
	void SetParameters(const wxString & params) {
		if(_obj.pushFunction("SetParameters")) {
			_obj.pushArg(params);
			return (_obj.callFunction<void>());
		}

		return wxGridCellEnumEditor::SetParameters(params);
	};




};




#endif

