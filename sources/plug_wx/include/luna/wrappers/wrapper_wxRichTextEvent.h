#ifndef _WRAPPERS_WRAPPER_WXRICHTEXTEVENT_H_
#define _WRAPPERS_WRAPPER_WXRICHTEXTEVENT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/richtext/richtextctrl.h>

class wrapper_wxRichTextEvent : public wxRichTextEvent, public luna_wrapper_base {

public:
	


	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxRichTextEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxRichTextEvent::GetEventCategory();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextEvent::CloneRefData(data);
	};


};




#endif

