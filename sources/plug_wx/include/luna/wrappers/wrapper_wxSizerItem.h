#ifndef _WRAPPERS_WRAPPER_WXSIZERITEM_H_
#define _WRAPPERS_WRAPPER_WXSIZERITEM_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/sizer.h>

class wrapper_wxSizerItem : public wxSizerItem {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxSizerItem(lua_State* L, lua_Table* dum, int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) : wxSizerItem(width, height, proportion, flag, border, userData), _obj(L,-1) {};
	wrapper_wxSizerItem(lua_State* L, lua_Table* dum, wxWindow * window, const wxSizerFlags & flags) : wxSizerItem(window, flags), _obj(L,-1) {};
	wrapper_wxSizerItem(lua_State* L, lua_Table* dum, wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) : wxSizerItem(window, proportion, flag, border, userData), _obj(L,-1) {};
	wrapper_wxSizerItem(lua_State* L, lua_Table* dum, wxSizer * sizer, const wxSizerFlags & flags) : wxSizerItem(sizer, flags), _obj(L,-1) {};
	wrapper_wxSizerItem(lua_State* L, lua_Table* dum, wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) : wxSizerItem(sizer, proportion, flag, border, userData), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};

	// wxSize wxSizerItem::CalcMin()
	wxSize CalcMin() {
		if(_obj.pushFunction("CalcMin")) {
			return *(_obj.callFunction<wxSize*>());
		}

		return wxSizerItem::CalcMin();
	};

	// void wxSizerItem::DeleteWindows()
	void DeleteWindows() {
		if(_obj.pushFunction("DeleteWindows")) {
			return (_obj.callFunction<void>());
		}

		return wxSizerItem::DeleteWindows();
	};

	// wxRect wxSizerItem::GetRect()
	wxRect GetRect() {
		if(_obj.pushFunction("GetRect")) {
			return *(_obj.callFunction<wxRect*>());
		}

		return wxSizerItem::GetRect();
	};

	// wxSize wxSizerItem::GetSize() const
	wxSize GetSize() const {
		if(_obj.pushFunction("GetSize")) {
			return *(_obj.callFunction<wxSize*>());
		}

		return wxSizerItem::GetSize();
	};

	// void wxSizerItem::SetDimension(const wxPoint & pos, const wxSize & size)
	void SetDimension(const wxPoint & pos, const wxSize & size) {
		if(_obj.pushFunction("SetDimension")) {
			_obj.pushArg(&pos);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxSizerItem::SetDimension(pos, size);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif

