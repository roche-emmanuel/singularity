#ifndef _WRAPPERS_WRAPPER_WXDATAVIEWTOGGLERENDERER_H_
#define _WRAPPERS_WRAPPER_WXDATAVIEWTOGGLERENDERER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/dataview.h>

class wrapper_wxDataViewToggleRenderer : public wxDataViewToggleRenderer {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxDataViewToggleRenderer(lua_State* L, lua_Table* dum, const wxString & varianttype = "bool", wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int align = -1) : wxDataViewToggleRenderer(varianttype, mode, align), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxDataViewToggleRenderer::GetClassInfo();
	};

	// int wxDataViewRenderer::GetAlignment() const
	int GetAlignment() const {
		if(_obj.pushFunction("GetAlignment")) {
			return (_obj.callFunction<int>());
		}

		return wxDataViewToggleRenderer::GetAlignment();
	};

	// wxDataViewCellMode wxDataViewRenderer::GetMode() const
	wxDataViewCellMode GetMode() const {
		if(_obj.pushFunction("GetMode")) {
			return (wxDataViewCellMode)(_obj.callFunction<int>());
		}

		return wxDataViewToggleRenderer::GetMode();
	};

	// void wxDataViewRenderer::SetAlignment(int align)
	void SetAlignment(int align) {
		if(_obj.pushFunction("SetAlignment")) {
			_obj.pushArg(align);
			return (_obj.callFunction<void>());
		}

		return wxDataViewToggleRenderer::SetAlignment(align);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDataViewToggleRenderer::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDataViewToggleRenderer::CloneRefData(data);
	};


};




#endif

