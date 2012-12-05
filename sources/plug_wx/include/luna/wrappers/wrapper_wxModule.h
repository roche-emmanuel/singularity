#ifndef _WRAPPERS_WRAPPER_WXMODULE_H_
#define _WRAPPERS_WRAPPER_WXMODULE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/module.h>

class wrapper_wxModule : public wxModule {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxModule(lua_State* L, lua_Table* dum) : wxModule(), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
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
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif

