#ifndef _WRAPPERS_WRAPPER_WXSVGFILEDC_H_
#define _WRAPPERS_WRAPPER_WXSVGFILEDC_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/dcsvg.h>

class wrapper_wxSVGFileDC : public wxSVGFileDC, public luna_wrapper_base {

public:
		

	~wrapper_wxSVGFileDC() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxSVGFileDC(lua_State* L, lua_Table* dum, const wxString & filename, int width = 320, int height = 240, double dpi = 72) : wxSVGFileDC(filename, width, height, dpi), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxSVGFileDC::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSVGFileDC::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSVGFileDC::CloneRefData(data);
	};


};




#endif
