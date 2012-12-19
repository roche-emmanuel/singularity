#ifndef _WRAPPERS_WRAPPER_WXRICHTEXTXMLHANDLER_H_
#define _WRAPPERS_WRAPPER_WXRICHTEXTXMLHANDLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/richtext/richtextxml.h>

class wrapper_wxRichTextXMLHandler : public wxRichTextXMLHandler, public luna_wrapper_base {

public:
	


	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxRichTextXMLHandler::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextXMLHandler::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextXMLHandler::CloneRefData(data);
	};


public:
// void wxRichTextFileHandler::SetVisible(bool visible)
void SetVisible(bool) {
	THROW_IF(true,"The function call void wxRichTextFileHandler::SetVisible(bool) is not implemented in wrapper.");
};

};




#endif

