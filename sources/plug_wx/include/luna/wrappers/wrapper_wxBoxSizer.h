#ifndef _WRAPPERS_WRAPPER_WXBOXSIZER_H_
#define _WRAPPERS_WRAPPER_WXBOXSIZER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/sizer.h>

class wrapper_wxBoxSizer : public wxBoxSizer {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxBoxSizer(lua_State* L, lua_Table* dum, int orient) : wxBoxSizer(orient), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};

	// void wxSizer::Clear(bool delete_windows = false)
	void Clear(bool delete_windows = false) {
		if(_obj.pushFunction("Clear")) {
			_obj.pushArg(delete_windows);
			return (_obj.callFunction<void>());
		}

		return wxSizer::Clear(delete_windows);
	};

	// bool wxSizer::Detach(wxWindow * window)
	bool Detach(wxWindow * window) {
		if(_obj.pushFunction("Detach")) {
			_obj.pushArg(window);
			return (_obj.callFunction<bool>());
		}

		return wxSizer::Detach(window);
	};

	// bool wxSizer::Detach(wxSizer * sizer)
	bool Detach(wxSizer * sizer) {
		if(_obj.pushFunction("Detach")) {
			_obj.pushArg(sizer);
			return (_obj.callFunction<bool>());
		}

		return wxSizer::Detach(sizer);
	};

	// bool wxSizer::Detach(int index)
	bool Detach(int index) {
		if(_obj.pushFunction("Detach")) {
			_obj.pushArg(index);
			return (_obj.callFunction<bool>());
		}

		return wxSizer::Detach(index);
	};

	// bool wxSizer::InformFirstDirection(int direction, int size, int availableOtherDir)
	bool InformFirstDirection(int direction, int size, int availableOtherDir) {
		if(_obj.pushFunction("InformFirstDirection")) {
			_obj.pushArg(direction);
			_obj.pushArg(size);
			_obj.pushArg(availableOtherDir);
			return (_obj.callFunction<bool>());
		}

		return wxSizer::InformFirstDirection(direction, size, availableOtherDir);
	};

	// void wxSizer::Layout()
	void Layout() {
		if(_obj.pushFunction("Layout")) {
			return (_obj.callFunction<void>());
		}

		return wxSizer::Layout();
	};

	// bool wxSizer::Remove(wxSizer * sizer)
	bool Remove(wxSizer * sizer) {
		if(_obj.pushFunction("Remove")) {
			_obj.pushArg(sizer);
			return (_obj.callFunction<bool>());
		}

		return wxSizer::Remove(sizer);
	};

	// bool wxSizer::Remove(int index)
	bool Remove(int index) {
		if(_obj.pushFunction("Remove")) {
			_obj.pushArg(index);
			return (_obj.callFunction<bool>());
		}

		return wxSizer::Remove(index);
	};

	// bool wxSizer::Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false)
	bool Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false) {
		if(_obj.pushFunction("Replace")) {
			_obj.pushArg(oldwin);
			_obj.pushArg(newwin);
			_obj.pushArg(recursive);
			return (_obj.callFunction<bool>());
		}

		return wxSizer::Replace(oldwin, newwin, recursive);
	};

	// bool wxSizer::Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false)
	bool Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false) {
		if(_obj.pushFunction("Replace")) {
			_obj.pushArg(oldsz);
			_obj.pushArg(newsz);
			_obj.pushArg(recursive);
			return (_obj.callFunction<bool>());
		}

		return wxSizer::Replace(oldsz, newsz, recursive);
	};

	// bool wxSizer::Replace(size_t index, wxSizerItem * newitem)
	bool Replace(size_t index, wxSizerItem * newitem) {
		if(_obj.pushFunction("Replace")) {
			_obj.pushArg(index);
			_obj.pushArg(newitem);
			return (_obj.callFunction<bool>());
		}

		return wxSizer::Replace(index, newitem);
	};

	// wxSizerItem * wxBoxSizer::AddSpacer(int size)
	wxSizerItem * AddSpacer(int size) {
		if(_obj.pushFunction("AddSpacer")) {
			_obj.pushArg(size);
			return (_obj.callFunction<wxSizerItem*>());
		}

		return wxBoxSizer::AddSpacer(size);
	};

	// wxSize wxBoxSizer::CalcMin()
	wxSize CalcMin() {
		if(_obj.pushFunction("CalcMin")) {
			return *(_obj.callFunction<wxSize*>());
		}

		return wxBoxSizer::CalcMin();
	};

	// void wxBoxSizer::RecalcSizes()
	void RecalcSizes() {
		if(_obj.pushFunction("RecalcSizes")) {
			return (_obj.callFunction<void>());
		}

		return wxBoxSizer::RecalcSizes();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif

