#ifndef _WRAPPERS_WRAPPER_WXDATAVIEWCUSTOMRENDERER_H_
#define _WRAPPERS_WRAPPER_WXDATAVIEWCUSTOMRENDERER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/dataview.h>

class wrapper_wxDataViewCustomRenderer : public wxDataViewCustomRenderer {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxDataViewCustomRenderer(lua_State* L, lua_Table* dum, const wxString & varianttype = "string", wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int align = -1, bool no_init = false) : wxDataViewCustomRenderer(varianttype, mode, align, no_init), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};

	// int wxDataViewRenderer::GetAlignment() const
	int GetAlignment() const {
		if(_obj.pushFunction("GetAlignment")) {
			return (_obj.callFunction<int>());
		}

		return wxDataViewRenderer::GetAlignment();
	};

	// wxDataViewCellMode wxDataViewRenderer::GetMode() const
	wxDataViewCellMode GetMode() const {
		if(_obj.pushFunction("GetMode")) {
			return (wxDataViewCellMode)(_obj.callFunction<int>());
		}

		return wxDataViewRenderer::GetMode();
	};

	// void wxDataViewRenderer::SetAlignment(int align)
	void SetAlignment(int align) {
		if(_obj.pushFunction("SetAlignment")) {
			_obj.pushArg(align);
			return (_obj.callFunction<void>());
		}

		return wxDataViewRenderer::SetAlignment(align);
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

		return wxDataViewCustomRenderer::ActivateCell(cell, model, item, col, mouseEvent);
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

		return wxDataViewCustomRenderer::HasEditorCtrl();
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

		return wxDataViewCustomRenderer::LeftClick(cursor, cell, model, item, col);
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

		return wxDataViewCustomRenderer::StartDrag(cursor, cell, model, item, col);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif

