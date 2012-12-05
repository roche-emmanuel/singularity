#ifndef _WRAPPERS_WRAPPER_WXDATAVIEWPROGRESSRENDERER_H_
#define _WRAPPERS_WRAPPER_WXDATAVIEWPROGRESSRENDERER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/dataview.h>

class wrapper_wxDataViewProgressRenderer : public wxDataViewProgressRenderer {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxDataViewProgressRenderer(lua_State* L, lua_Table* dum, const wxString & label = wxEmptyString, const wxString & varianttype = "long", wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int align = -1) : wxDataViewProgressRenderer(label, varianttype, mode, align), _obj(L,-1) {};

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


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif

