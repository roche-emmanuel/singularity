#ifndef _WRAPPERS_WRAPPER_WXVARSCROLLHELPERBASE_H_
#define _WRAPPERS_WRAPPER_WXVARSCROLLHELPERBASE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/vscroll.h>

class wrapper_wxVarScrollHelperBase : public wxVarScrollHelperBase {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxVarScrollHelperBase(lua_State* L, lua_Table* dum, wxWindow * winToScroll) : wxVarScrollHelperBase(winToScroll), _obj(L,-1) {};

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


protected:
	// void wxVarScrollHelperBase::OnGetUnitsSizeHint(size_t unitMin, size_t unitMax) const
	// int wxVarScrollHelperBase::EstimateTotalSize() const
	// int wxVarScrollHelperBase::OnGetUnitSize(size_t unit) const

};




#endif

