#ifndef _WRAPPERS_WRAPPER_WXRICHTEXTCOMMAND_H_
#define _WRAPPERS_WRAPPER_WXRICHTEXTCOMMAND_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/richtext/richtextbuffer.h>

class wrapper_wxRichTextCommand : public wxRichTextCommand {
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

	// bool wxCommand::CanUndo() const
	bool CanUndo() const {
		if(_obj.pushFunction("CanUndo")) {
			return (_obj.callFunction<bool>());
		}

		return wxCommand::CanUndo();
	};

	// wxString wxCommand::GetName() const
	wxString GetName() const {
		if(_obj.pushFunction("GetName")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxCommand::GetName();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif

