#include <plug_common.h>

luabind::scope register_wxApp() {
	using namespace luabind;
	return
		class_< wxApp, wxAppConsole >("wxApp")
			.def("OnInitGui",(bool(wxApp::*)())&wxApp::OnInitGui)
			.def("OnRun",(int(wxApp::*)())&wxApp::OnRun)
			.def("OnExit",(int(wxApp::*)())&wxApp::OnExit)
			.def("CleanUp",(void(wxApp::*)())&wxApp::CleanUp)
			.def("SafeYield",(bool(wxApp::*)(wxWindow*, bool))&wxApp::SafeYield)
			.def("SafeYieldFor",(bool(wxApp::*)(wxWindow*, long))&wxApp::SafeYieldFor)
			.def("ProcessIdle",(bool(wxApp::*)())&wxApp::ProcessIdle)
			.def("UsesEventLoop",(bool(wxApp::*)() const)&wxApp::UsesEventLoop)
			.def("IsActive",(bool(wxApp::*)() const)&wxApp::IsActive)
			.def("SetTopWindow",(void(wxApp::*)(wxWindow*))&wxApp::SetTopWindow)
			.def("GetTopWindow",(wxWindow*(wxApp::*)() const)&wxApp::GetTopWindow)
			.def("SetExitOnFrameDelete",(void(wxApp::*)(bool))&wxApp::SetExitOnFrameDelete)
			.def("GetExitOnFrameDelete",(bool(wxApp::*)() const)&wxApp::GetExitOnFrameDelete)
			.def("SetUseBestVisual",(void(wxApp::*)(bool, bool))&wxApp::SetUseBestVisual)
			.def("GetUseBestVisual",(bool(wxApp::*)() const)&wxApp::GetUseBestVisual)
			.def("GetLayoutDirection",(wxLayoutDirection(wxApp::*)() const)&wxApp::GetLayoutDirection)
			.def("SetNativeTheme",(bool(wxApp::*)(const wxString&))&wxApp::SetNativeTheme)
			.def("SetActive",(void(wxApp::*)(bool, wxWindow*))&wxApp::SetActive)
;
}

