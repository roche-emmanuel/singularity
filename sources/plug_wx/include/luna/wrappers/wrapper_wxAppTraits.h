#ifndef _WRAPPERS_WRAPPER_WXAPPTRAITS_H_
#define _WRAPPERS_WRAPPER_WXAPPTRAITS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/apptrait.h>

class wrapper_wxAppTraits : public wxAppTraits, public luna_wrapper_base {

public:
		

	~wrapper_wxAppTraits() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// wxConfigBase * wxAppTraits::CreateConfig()
	wxConfigBase * CreateConfig() {
		if(_obj.pushFunction("CreateConfig")) {
			return (_obj.callFunction<wxConfigBase*>());
		}

		return wxAppTraits::CreateConfig();
	};

	// wxEventLoopBase * wxAppTraits::CreateEventLoop()
	wxEventLoopBase * CreateEventLoop() {
		THROW_IF(!_obj.pushFunction("CreateEventLoop"),"No implementation for abstract function wxAppTraits::CreateEventLoop");
		return (_obj.callFunction<wxEventLoopBase*>());
	};

	// wxFontMapper * wxAppTraits::CreateFontMapper()
	wxFontMapper * CreateFontMapper() {
		THROW_IF(!_obj.pushFunction("CreateFontMapper"),"No implementation for abstract function wxAppTraits::CreateFontMapper");
		return (_obj.callFunction<wxFontMapper*>());
	};

	// wxLog * wxAppTraits::CreateLogTarget()
	wxLog * CreateLogTarget() {
		THROW_IF(!_obj.pushFunction("CreateLogTarget"),"No implementation for abstract function wxAppTraits::CreateLogTarget");
		return (_obj.callFunction<wxLog*>());
	};

	// wxMessageOutput * wxAppTraits::CreateMessageOutput()
	wxMessageOutput * CreateMessageOutput() {
		THROW_IF(!_obj.pushFunction("CreateMessageOutput"),"No implementation for abstract function wxAppTraits::CreateMessageOutput");
		return (_obj.callFunction<wxMessageOutput*>());
	};

	// wxRendererNative * wxAppTraits::CreateRenderer()
	wxRendererNative * CreateRenderer() {
		THROW_IF(!_obj.pushFunction("CreateRenderer"),"No implementation for abstract function wxAppTraits::CreateRenderer");
		return (_obj.callFunction<wxRendererNative*>());
	};

	// wxString wxAppTraits::GetDesktopEnvironment() const
	wxString GetDesktopEnvironment() const {
		THROW_IF(!_obj.pushFunction("GetDesktopEnvironment"),"No implementation for abstract function wxAppTraits::GetDesktopEnvironment");
		return *(_obj.callFunction<wxString*>());
	};

	// wxStandardPaths & wxAppTraits::GetStandardPaths()
	wxStandardPaths & GetStandardPaths() {
		if(_obj.pushFunction("GetStandardPaths")) {
			return *(_obj.callFunction<wxStandardPaths*>());
		}

		return wxAppTraits::GetStandardPaths();
	};

	// wxPortId wxAppTraits::GetToolkitVersion(int * major = NULL, int * minor = NULL) const
	wxPortId GetToolkitVersion(int * major = NULL, int * minor = NULL) const {
		THROW_IF(!_obj.pushFunction("GetToolkitVersion"),"No implementation for abstract function wxAppTraits::GetToolkitVersion");
		_obj.pushArg(major);
		_obj.pushArg(minor);
		return (wxPortId)(_obj.callFunction<int>());
	};

	// bool wxAppTraits::HasStderr()
	bool HasStderr() {
		THROW_IF(!_obj.pushFunction("HasStderr"),"No implementation for abstract function wxAppTraits::HasStderr");
		return (_obj.callFunction<bool>());
	};

	// bool wxAppTraits::IsUsingUniversalWidgets() const
	bool IsUsingUniversalWidgets() const {
		THROW_IF(!_obj.pushFunction("IsUsingUniversalWidgets"),"No implementation for abstract function wxAppTraits::IsUsingUniversalWidgets");
		return (_obj.callFunction<bool>());
	};

	// bool wxAppTraits::ShowAssertDialog(const wxString & msg)
	bool ShowAssertDialog(const wxString & msg) {
		THROW_IF(!_obj.pushFunction("ShowAssertDialog"),"No implementation for abstract function wxAppTraits::ShowAssertDialog");
		_obj.pushArg(msg);
		return (_obj.callFunction<bool>());
	};

	// wxTimerImpl * wxAppTraits::CreateTimerImpl(wxTimer * arg1)
	wxTimerImpl * CreateTimerImpl(wxTimer * arg1) {
		THROW_IF(!_obj.pushFunction("CreateTimerImpl"),"No implementation for abstract function wxAppTraits::CreateTimerImpl");
		_obj.pushArg(arg1);
		return (_obj.callFunction<wxTimerImpl*>());
	};

	// void * wxAppTraits::BeforeChildWaitLoop()
	void * BeforeChildWaitLoop() {
		THROW_IF(!_obj.pushFunction("BeforeChildWaitLoop"),"No implementation for abstract function wxAppTraits::BeforeChildWaitLoop");
		return (_obj.callFunction<void*>());
	};

	// void wxAppTraits::AfterChildWaitLoop(void * arg1)
	void AfterChildWaitLoop(void * arg1) {
		THROW_IF(!_obj.pushFunction("AfterChildWaitLoop"),"No implementation for abstract function wxAppTraits::AfterChildWaitLoop");
		_obj.pushArg(arg1);
		return (_obj.callFunction<void>());
	};

	// bool wxAppTraits::DoMessageFromThreadWait()
	bool DoMessageFromThreadWait() {
		THROW_IF(!_obj.pushFunction("DoMessageFromThreadWait"),"No implementation for abstract function wxAppTraits::DoMessageFromThreadWait");
		return (_obj.callFunction<bool>());
	};

	// bool wxAppTraits::CanUseStderr()
	bool CanUseStderr() {
		THROW_IF(!_obj.pushFunction("CanUseStderr"),"No implementation for abstract function wxAppTraits::CanUseStderr");
		return (_obj.callFunction<bool>());
	};

	// bool wxAppTraits::WriteToStderr(const wxString & arg1)
	bool WriteToStderr(const wxString & arg1) {
		THROW_IF(!_obj.pushFunction("WriteToStderr"),"No implementation for abstract function wxAppTraits::WriteToStderr");
		_obj.pushArg(arg1);
		return (_obj.callFunction<bool>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


public:
// WXDWORD wxAppTraits::WaitForThread(WXHANDLE arg1, int arg2)
WXDWORD WaitForThread(WXHANDLE, int) {
	THROW_IF(true,"The function call WXDWORD wxAppTraits::WaitForThread(WXHANDLE, int) is not implemented in wrapper.");
	return WXDWORD();
};

};




#endif

