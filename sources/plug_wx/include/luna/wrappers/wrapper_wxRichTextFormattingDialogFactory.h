#ifndef _WRAPPERS_WRAPPER_WXRICHTEXTFORMATTINGDIALOGFACTORY_H_
#define _WRAPPERS_WRAPPER_WXRICHTEXTFORMATTINGDIALOGFACTORY_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/richtext/richtextformatdlg.h>

class wrapper_wxRichTextFormattingDialogFactory : public wxRichTextFormattingDialogFactory {
protected:
	sgt::LuaObject _obj;
	
public:
	


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

