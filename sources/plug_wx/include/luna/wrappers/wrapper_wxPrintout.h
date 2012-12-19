#ifndef _WRAPPERS_WRAPPER_WXPRINTOUT_H_
#define _WRAPPERS_WRAPPER_WXPRINTOUT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/print.h>

class wrapper_wxPrintout : public wxPrintout, public luna_wrapper_base {

public:
	


	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxPrintout::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxPrintout::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxPrintout::CloneRefData(data);
	};


public:
// bool wxPrintout::OnPrintPage(int pageNum)
bool OnPrintPage(int) {
	THROW_IF(true,"The function call bool wxPrintout::OnPrintPage(int) is not implemented in wrapper.");
	return bool();
};

};




#endif

