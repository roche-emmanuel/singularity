#ifndef _WRAPPERS_WRAPPER_WXRICHTEXTHTMLHANDLER_H_
#define _WRAPPERS_WRAPPER_WXRICHTEXTHTMLHANDLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/richtext/richtexthtml.h>

class wrapper_wxRichTextHTMLHandler : public wxRichTextHTMLHandler, public luna_wrapper_base {

public:
	


	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxRichTextHTMLHandler::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextHTMLHandler::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextHTMLHandler::CloneRefData(data);
	};


};




#endif

