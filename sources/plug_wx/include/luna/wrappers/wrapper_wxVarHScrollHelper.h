#ifndef _WRAPPERS_WRAPPER_WXVARHSCROLLHELPER_H_
#define _WRAPPERS_WRAPPER_WXVARHSCROLLHELPER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/vscroll.h>

class wrapper_wxVarHScrollHelper : public wxVarHScrollHelper {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxVarHScrollHelper(lua_State* L, lua_Table* dum, wxWindow * winToScroll) : wxVarHScrollHelper(winToScroll), _obj(L,-1) {};

	// int wxVarScrollHelperBase::GetNonOrientationTargetSize() const
	int GetNonOrientationTargetSize() const {
		THROW_IF(!_obj.pushFunction("GetNonOrientationTargetSize"),"No implementation for abstract function wxVarScrollHelperBase::GetNonOrientationTargetSize");
		return (_obj.callFunction<int>());
	};

	// wxOrientation wxVarScrollHelperBase::GetOrientation() const
	wxOrientation GetOrientation() const {
		THROW_IF(!_obj.pushFunction("GetOrientation"),"No implementation for abstract function wxVarScrollHelperBase::GetOrientation");
		return (wxOrientation)(_obj.callFunction<int>());
	};

	// int wxVarScrollHelperBase::GetOrientationTargetSize() const
	int GetOrientationTargetSize() const {
		THROW_IF(!_obj.pushFunction("GetOrientationTargetSize"),"No implementation for abstract function wxVarScrollHelperBase::GetOrientationTargetSize");
		return (_obj.callFunction<int>());
	};

	// wxWindow * wxVarScrollHelperBase::GetTargetWindow() const
	wxWindow * GetTargetWindow() const {
		if(_obj.pushFunction("GetTargetWindow")) {
			return (_obj.callFunction<wxWindow*>());
		}

		return wxVarScrollHelperBase::GetTargetWindow();
	};

	// void wxVarScrollHelperBase::RefreshAll()
	void RefreshAll() {
		if(_obj.pushFunction("RefreshAll")) {
			return (_obj.callFunction<void>());
		}

		return wxVarScrollHelperBase::RefreshAll();
	};

	// void wxVarScrollHelperBase::SetTargetWindow(wxWindow * target)
	void SetTargetWindow(wxWindow * target) {
		if(_obj.pushFunction("SetTargetWindow")) {
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return wxVarScrollHelperBase::SetTargetWindow(target);
	};

	// void wxVarScrollHelperBase::UpdateScrollbar()
	void UpdateScrollbar() {
		if(_obj.pushFunction("UpdateScrollbar")) {
			return (_obj.callFunction<void>());
		}

		return wxVarScrollHelperBase::UpdateScrollbar();
	};

	// void wxVarHScrollHelper::RefreshColumn(size_t column)
	void RefreshColumn(size_t column) {
		if(_obj.pushFunction("RefreshColumn")) {
			_obj.pushArg(column);
			return (_obj.callFunction<void>());
		}

		return wxVarHScrollHelper::RefreshColumn(column);
	};

	// void wxVarHScrollHelper::RefreshColumns(size_t from, size_t to)
	void RefreshColumns(size_t from, size_t to) {
		if(_obj.pushFunction("RefreshColumns")) {
			_obj.pushArg(from);
			_obj.pushArg(to);
			return (_obj.callFunction<void>());
		}

		return wxVarHScrollHelper::RefreshColumns(from, to);
	};

	// bool wxVarHScrollHelper::ScrollColumnPages(int pages)
	bool ScrollColumnPages(int pages) {
		if(_obj.pushFunction("ScrollColumnPages")) {
			_obj.pushArg(pages);
			return (_obj.callFunction<bool>());
		}

		return wxVarHScrollHelper::ScrollColumnPages(pages);
	};

	// bool wxVarHScrollHelper::ScrollColumns(int columns)
	bool ScrollColumns(int columns) {
		if(_obj.pushFunction("ScrollColumns")) {
			_obj.pushArg(columns);
			return (_obj.callFunction<bool>());
		}

		return wxVarHScrollHelper::ScrollColumns(columns);
	};


protected:
	// void wxVarScrollHelperBase::OnGetUnitsSizeHint(size_t unitMin, size_t unitMax) const
	// int wxVarScrollHelperBase::EstimateTotalSize() const
	// int wxVarScrollHelperBase::OnGetUnitSize(size_t unit) const
	// int wxVarHScrollHelper::EstimateTotalWidth() const
	// void wxVarHScrollHelper::OnGetColumnsWidthHint(size_t columnMin, size_t columnMax) const
	// int wxVarHScrollHelper::OnGetColumnWidth(size_t column) const

};




#endif

