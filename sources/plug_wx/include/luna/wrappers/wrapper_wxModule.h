#ifndef _WRAPPERS_WRAPPER_WXMODULE_H_
#define _WRAPPERS_WRAPPER_WXMODULE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/module.h>

class wrapper_wxModule : public wxModule, public luna_wrapper_base {

public:
		

	~wrapper_wxModule() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxModule(lua_State* L, lua_Table* dum) : wxModule(), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxModule::GetClassInfo();
	};

	// void wxModule::OnExit()
	void OnExit() {
		THROW_IF(!_obj.pushFunction("OnExit"),"No implementation for abstract function wxModule::OnExit");
		return (_obj.callFunction<void>());
	};

	// bool wxModule::OnInit()
	bool OnInit() {
		THROW_IF(!_obj.pushFunction("OnInit"),"No implementation for abstract function wxModule::OnInit");
		return (_obj.callFunction<bool>());
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxModule::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxModule::CloneRefData(data);
	};


};




#endif

