#ifndef _WRAPPERS_WRAPPER_WXCOMMAND_H_
#define _WRAPPERS_WRAPPER_WXCOMMAND_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/cmdproc.h>

class wrapper_wxCommand : public wxCommand {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxCommand(lua_State* L, lua_Table* dum, bool canUndo = false, const wxString & name = wxEmptyString) : wxCommand(canUndo, name), _obj(L,-1) {};

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

	// bool wxCommand::Do()
	bool Do() {
		THROW_IF(!_obj.pushFunction("Do"),"No implementation for abstract function wxCommand::Do");
		return (_obj.callFunction<bool>());
	};

	// wxString wxCommand::GetName() const
	wxString GetName() const {
		if(_obj.pushFunction("GetName")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxCommand::GetName();
	};

	// bool wxCommand::Undo()
	bool Undo() {
		THROW_IF(!_obj.pushFunction("Undo"),"No implementation for abstract function wxCommand::Undo");
		return (_obj.callFunction<bool>());
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif

