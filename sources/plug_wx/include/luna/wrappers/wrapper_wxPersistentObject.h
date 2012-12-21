#ifndef _WRAPPERS_WRAPPER_WXPERSISTENTOBJECT_H_
#define _WRAPPERS_WRAPPER_WXPERSISTENTOBJECT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/persist.h>

class wrapper_wxPersistentObject : public wxPersistentObject, public luna_wrapper_base {

public:
		

	~wrapper_wxPersistentObject() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxPersistentObject(lua_State* L, lua_Table* dum, void * obj) : wxPersistentObject(obj), luna_wrapper_base(L) {};

	// void wxPersistentObject::Save() const
	void Save() const {
		THROW_IF(!_obj.pushFunction("Save"),"No implementation for abstract function wxPersistentObject::Save");
		return (_obj.callFunction<void>());
	};

	// bool wxPersistentObject::Restore()
	bool Restore() {
		THROW_IF(!_obj.pushFunction("Restore"),"No implementation for abstract function wxPersistentObject::Restore");
		return (_obj.callFunction<bool>());
	};

	// wxString wxPersistentObject::GetKind() const
	wxString GetKind() const {
		THROW_IF(!_obj.pushFunction("GetKind"),"No implementation for abstract function wxPersistentObject::GetKind");
		return *(_obj.callFunction<wxString*>());
	};

	// wxString wxPersistentObject::GetName() const
	wxString GetName() const {
		THROW_IF(!_obj.pushFunction("GetName"),"No implementation for abstract function wxPersistentObject::GetName");
		return *(_obj.callFunction<wxString*>());
	};




};




#endif

