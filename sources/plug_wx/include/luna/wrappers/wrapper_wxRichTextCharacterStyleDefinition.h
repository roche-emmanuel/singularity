#ifndef _WRAPPERS_WRAPPER_WXRICHTEXTCHARACTERSTYLEDEFINITION_H_
#define _WRAPPERS_WRAPPER_WXRICHTEXTCHARACTERSTYLEDEFINITION_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/richtext/richtextstyles.h>

class wrapper_wxRichTextCharacterStyleDefinition : public wxRichTextCharacterStyleDefinition, public luna_wrapper_base {

public:
		

	~wrapper_wxRichTextCharacterStyleDefinition() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxRichTextCharacterStyleDefinition::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextCharacterStyleDefinition::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextCharacterStyleDefinition::CloneRefData(data);
	};


};




#endif
