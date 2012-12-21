#ifndef _WRAPPERS_WRAPPER_WXCOMMAND_H_
#define _WRAPPERS_WRAPPER_WXCOMMAND_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/cmdproc.h>

class wrapper_wxCommand : public wxCommand, public luna_wrapper_base {

public:
		

	~wrapper_wxCommand() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxCommand(lua_State* L, lua_Table* dum, bool canUndo = false, const wxString & name = wxEmptyString) : wxCommand(canUndo, name), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxCommand::GetClassInfo();
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
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxCommand::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxCommand::CloneRefData(data);
	};


};




#endif

