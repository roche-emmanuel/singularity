#ifndef _WRAPPERS_WRAPPER_WXSVGFILEDC_H_
#define _WRAPPERS_WRAPPER_WXSVGFILEDC_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/dcsvg.h>

class wrapper_wxSVGFileDC : public wxSVGFileDC {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxSVGFileDC(lua_State* L, lua_Table* dum, const wxString & filename, int width = 320, int height = 240, double dpi = 72) : wxSVGFileDC(filename, width, height, dpi), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif

