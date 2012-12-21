#ifndef _WRAPPERS_WRAPPER_WXDATAVIEWDATERENDERER_H_
#define _WRAPPERS_WRAPPER_WXDATAVIEWDATERENDERER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/dataview.h>

class wrapper_wxDataViewDateRenderer : public wxDataViewDateRenderer, public luna_wrapper_base {

public:
		

	~wrapper_wxDataViewDateRenderer() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxDataViewDateRenderer(lua_State* L, lua_Table* dum, const wxString & varianttype = "datetime", wxDataViewCellMode mode = ::wxDATAVIEW_CELL_ACTIVATABLE, int align = -1) : wxDataViewDateRenderer(varianttype, mode, align), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxDataViewDateRenderer::GetClassInfo();
	};

	// wxSize wxDataViewRenderer::GetSize() const
	wxSize GetSize() const {
		THROW_IF(!_obj.pushFunction("GetSize"),"No implementation for abstract function wxDataViewRenderer::GetSize");
		return *(_obj.callFunction<wxSize*>());
	};

	// bool wxDataViewRenderer::Render(wxRect arg1, wxDC * arg2, int arg3)
	bool Render(wxRect arg1, wxDC * arg2, int arg3) {
		THROW_IF(!_obj.pushFunction("Render"),"No implementation for abstract function wxDataViewRenderer::Render");
		_obj.pushArg(arg1);
		_obj.pushArg(arg2);
		_obj.pushArg(arg3);
		return (_obj.callFunction<bool>());
	};

	// int wxDataViewRenderer::GetAlignment() const
	int GetAlignment() const {
		if(_obj.pushFunction("GetAlignment")) {
			return (_obj.callFunction<int>());
		}

		return wxDataViewDateRenderer::GetAlignment();
	};

	// wxDataViewCellMode wxDataViewRenderer::GetMode() const
	wxDataViewCellMode GetMode() const {
		if(_obj.pushFunction("GetMode")) {
			return (wxDataViewCellMode)(_obj.callFunction<int>());
		}

		return wxDataViewDateRenderer::GetMode();
	};

	// void wxDataViewRenderer::SetAlignment(int align)
	void SetAlignment(int align) {
		if(_obj.pushFunction("SetAlignment")) {
			_obj.pushArg(align);
			return (_obj.callFunction<void>());
		}

		return wxDataViewDateRenderer::SetAlignment(align);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDataViewDateRenderer::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDataViewDateRenderer::CloneRefData(data);
	};


public:
// bool wxDataViewRenderer::GetValue(wxVariant & value) const
bool GetValue(wxVariant &) const {
	THROW_IF(true,"The function call bool wxDataViewRenderer::GetValue(wxVariant &) const is not implemented in wrapper.");
	return bool();
};

public:
// bool wxDataViewRenderer::SetValue(const wxVariant & value)
bool SetValue(const wxVariant &) {
	THROW_IF(true,"The function call bool wxDataViewRenderer::SetValue(const wxVariant &) is not implemented in wrapper.");
	return bool();
};

};




#endif
