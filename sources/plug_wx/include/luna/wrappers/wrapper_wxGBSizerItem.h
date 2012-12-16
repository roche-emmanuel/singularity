#ifndef _WRAPPERS_WRAPPER_WXGBSIZERITEM_H_
#define _WRAPPERS_WRAPPER_WXGBSIZERITEM_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/gbsizer.h>

class wrapper_wxGBSizerItem : public wxGBSizerItem, public luna_wrapper_base {

public:
	

	wrapper_wxGBSizerItem(lua_State* L, lua_Table* dum, int width, int height, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL) : wxGBSizerItem(width, height, pos, span, flag, border, userData), luna_wrapper_base(L) {};
	wrapper_wxGBSizerItem(lua_State* L, lua_Table* dum, wxWindow * window, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL) : wxGBSizerItem(window, pos, span, flag, border, userData), luna_wrapper_base(L) {};
	wrapper_wxGBSizerItem(lua_State* L, lua_Table* dum, wxSizer * sizer, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL) : wxGBSizerItem(sizer, pos, span, flag, border, userData), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxGBSizerItem::GetClassInfo();
	};

	// wxSize wxSizerItem::CalcMin()
	wxSize CalcMin() {
		if(_obj.pushFunction("CalcMin")) {
			return *(_obj.callFunction<wxSize*>());
		}

		return wxGBSizerItem::CalcMin();
	};

	// void wxSizerItem::DeleteWindows()
	void DeleteWindows() {
		if(_obj.pushFunction("DeleteWindows")) {
			return (_obj.callFunction<void>());
		}

		return wxGBSizerItem::DeleteWindows();
	};

	// wxRect wxSizerItem::GetRect()
	wxRect GetRect() {
		if(_obj.pushFunction("GetRect")) {
			return *(_obj.callFunction<wxRect*>());
		}

		return wxGBSizerItem::GetRect();
	};

	// wxSize wxSizerItem::GetSize() const
	wxSize GetSize() const {
		if(_obj.pushFunction("GetSize")) {
			return *(_obj.callFunction<wxSize*>());
		}

		return wxGBSizerItem::GetSize();
	};

	// void wxSizerItem::SetDimension(const wxPoint & pos, const wxSize & size)
	void SetDimension(const wxPoint & pos, const wxSize & size) {
		if(_obj.pushFunction("SetDimension")) {
			_obj.pushArg(&pos);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxGBSizerItem::SetDimension(pos, size);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGBSizerItem::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGBSizerItem::CloneRefData(data);
	};


};




#endif

