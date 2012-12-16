#ifndef _WRAPPERS_WRAPPER_WXDATAVIEWSPINRENDERER_H_
#define _WRAPPERS_WRAPPER_WXDATAVIEWSPINRENDERER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/dataview.h>

class wrapper_wxDataViewSpinRenderer : public wxDataViewSpinRenderer, public luna_wrapper_base {

public:
	

	wrapper_wxDataViewSpinRenderer(lua_State* L, lua_Table* dum, int min, int max, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_EDITABLE, int align = -1) : wxDataViewSpinRenderer(min, max, mode, align), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxDataViewSpinRenderer::GetClassInfo();
	};

	// int wxDataViewRenderer::GetAlignment() const
	int GetAlignment() const {
		if(_obj.pushFunction("GetAlignment")) {
			return (_obj.callFunction<int>());
		}

		return wxDataViewSpinRenderer::GetAlignment();
	};

	// wxDataViewCellMode wxDataViewRenderer::GetMode() const
	wxDataViewCellMode GetMode() const {
		if(_obj.pushFunction("GetMode")) {
			return (wxDataViewCellMode)(_obj.callFunction<int>());
		}

		return wxDataViewSpinRenderer::GetMode();
	};

	// void wxDataViewRenderer::SetAlignment(int align)
	void SetAlignment(int align) {
		if(_obj.pushFunction("SetAlignment")) {
			_obj.pushArg(align);
			return (_obj.callFunction<void>());
		}

		return wxDataViewSpinRenderer::SetAlignment(align);
	};

	// bool wxDataViewCustomRenderer::ActivateCell(const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col, const wxMouseEvent * mouseEvent)
	bool ActivateCell(const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col, const wxMouseEvent * mouseEvent) {
		if(_obj.pushFunction("ActivateCell")) {
			_obj.pushArg(&cell);
			_obj.pushArg(model);
			_obj.pushArg(&item);
			_obj.pushArg(col);
			_obj.pushArg(mouseEvent);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewSpinRenderer::ActivateCell(cell, model, item, col, mouseEvent);
	};

	// wxSize wxDataViewCustomRenderer::GetSize() const
	wxSize GetSize() const {
		THROW_IF(!_obj.pushFunction("GetSize"),"No implementation for abstract function wxDataViewCustomRenderer::GetSize");
		return *(_obj.callFunction<wxSize*>());
	};

	// bool wxDataViewCustomRenderer::HasEditorCtrl() const
	bool HasEditorCtrl() const {
		if(_obj.pushFunction("HasEditorCtrl")) {
			return (_obj.callFunction<bool>());
		}

		return wxDataViewSpinRenderer::HasEditorCtrl();
	};

	// bool wxDataViewCustomRenderer::LeftClick(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col)
	bool LeftClick(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col) {
		if(_obj.pushFunction("LeftClick")) {
			_obj.pushArg(&cursor);
			_obj.pushArg(&cell);
			_obj.pushArg(model);
			_obj.pushArg(&item);
			_obj.pushArg(col);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewSpinRenderer::LeftClick(cursor, cell, model, item, col);
	};

	// bool wxDataViewCustomRenderer::Render(wxRect cell, wxDC * dc, int state)
	bool Render(wxRect cell, wxDC * dc, int state) {
		THROW_IF(!_obj.pushFunction("Render"),"No implementation for abstract function wxDataViewCustomRenderer::Render");
		_obj.pushArg(cell);
		_obj.pushArg(dc);
		_obj.pushArg(state);
		return (_obj.callFunction<bool>());
	};

	// bool wxDataViewCustomRenderer::StartDrag(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col)
	bool StartDrag(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col) {
		if(_obj.pushFunction("StartDrag")) {
			_obj.pushArg(&cursor);
			_obj.pushArg(&cell);
			_obj.pushArg(model);
			_obj.pushArg(&item);
			_obj.pushArg(col);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewSpinRenderer::StartDrag(cursor, cell, model, item, col);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDataViewSpinRenderer::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDataViewSpinRenderer::CloneRefData(data);
	};


};




#endif

