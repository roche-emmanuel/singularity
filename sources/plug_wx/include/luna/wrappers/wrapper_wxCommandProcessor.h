#ifndef _WRAPPERS_WRAPPER_WXCOMMANDPROCESSOR_H_
#define _WRAPPERS_WRAPPER_WXCOMMANDPROCESSOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/cmdproc.h>

class wrapper_wxCommandProcessor : public wxCommandProcessor, public luna_wrapper_base {

public:
		

	~wrapper_wxCommandProcessor() {
		logDEBUG3("Calling delete function for wrapper wxCommandProcessor");
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxCommandProcessor(lua_State* L, lua_Table* dum, int maxCommands = -1) : wxCommandProcessor(maxCommands), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxCommandProcessor::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxCommandProcessor::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxCommandProcessor::GetClassInfo();
	};

	// bool wxCommandProcessor::CanUndo() const
	bool CanUndo() const {
		if(_obj.pushFunction("CanUndo")) {
			return (_obj.callFunction<bool>());
		}

		return wxCommandProcessor::CanUndo();
	};

	// bool wxCommandProcessor::CanRedo() const
	bool CanRedo() const {
		if(_obj.pushFunction("CanRedo")) {
			return (_obj.callFunction<bool>());
		}

		return wxCommandProcessor::CanRedo();
	};

	// void wxCommandProcessor::ClearCommands()
	void ClearCommands() {
		if(_obj.pushFunction("ClearCommands")) {
			return (_obj.callFunction<void>());
		}

		return wxCommandProcessor::ClearCommands();
	};

	// void wxCommandProcessor::Initialize()
	void Initialize() {
		if(_obj.pushFunction("Initialize")) {
			return (_obj.callFunction<void>());
		}

		return wxCommandProcessor::Initialize();
	};

	// bool wxCommandProcessor::IsDirty() const
	bool IsDirty() const {
		if(_obj.pushFunction("IsDirty")) {
			return (_obj.callFunction<bool>());
		}

		return wxCommandProcessor::IsDirty();
	};

	// bool wxCommandProcessor::Redo()
	bool Redo() {
		if(_obj.pushFunction("Redo")) {
			return (_obj.callFunction<bool>());
		}

		return wxCommandProcessor::Redo();
	};

	// void wxCommandProcessor::SetMenuStrings()
	void SetMenuStrings() {
		if(_obj.pushFunction("SetMenuStrings")) {
			return (_obj.callFunction<void>());
		}

		return wxCommandProcessor::SetMenuStrings();
	};

	// bool wxCommandProcessor::Submit(wxCommand * command, bool storeIt = true)
	bool Submit(wxCommand * command, bool storeIt = true) {
		if(_obj.pushFunction("Submit")) {
			_obj.pushArg(command);
			_obj.pushArg(storeIt);
			return (_obj.callFunction<bool>());
		}

		return wxCommandProcessor::Submit(command, storeIt);
	};

	// void wxCommandProcessor::Store(wxCommand * command)
	void Store(wxCommand * command) {
		if(_obj.pushFunction("Store")) {
			_obj.pushArg(command);
			return (_obj.callFunction<void>());
		}

		return wxCommandProcessor::Store(command);
	};

	// bool wxCommandProcessor::Undo()
	bool Undo() {
		if(_obj.pushFunction("Undo")) {
			return (_obj.callFunction<bool>());
		}

		return wxCommandProcessor::Undo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

