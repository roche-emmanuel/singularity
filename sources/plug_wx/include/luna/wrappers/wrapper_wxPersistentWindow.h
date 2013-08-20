#ifndef _WRAPPERS_WRAPPER_WXPERSISTENTWINDOW_H_
#define _WRAPPERS_WRAPPER_WXPERSISTENTWINDOW_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/persist/window.h>

class wrapper_wxPersistentWindow : public wxPersistentWindow, public luna_wrapper_base {

public:
		

	~wrapper_wxPersistentWindow() {
		logDEBUG3("Calling delete function for wrapper wxPersistentWindow");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxPersistentWindow*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void wxPersistentObject::Save() const
	void Save() const {
		THROW_IF(!_obj.pushFunction("Save"),"No implementation for abstract function wxPersistentObject::Save");
		_obj.pushArg((wxPersistentWindow*)this);
		return (_obj.callFunction<void>());
	};

	// bool wxPersistentObject::Restore()
	bool Restore() {
		THROW_IF(!_obj.pushFunction("Restore"),"No implementation for abstract function wxPersistentObject::Restore");
		_obj.pushArg((wxPersistentWindow*)this);
		return (_obj.callFunction<bool>());
	};

	// wxString wxPersistentObject::GetKind() const
	wxString GetKind() const {
		THROW_IF(!_obj.pushFunction("GetKind"),"No implementation for abstract function wxPersistentObject::GetKind");
		_obj.pushArg((wxPersistentWindow*)this);
		return *(_obj.callFunction<wxString*>());
	};

	// wxString wxPersistentWindow::GetName() const
	wxString GetName() const {
		if(_obj.pushFunction("GetName")) {
			_obj.pushArg((wxPersistentWindow*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxPersistentWindow::GetName();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

