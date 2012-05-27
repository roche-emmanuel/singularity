#include <plug_common.h>

luabind::scope register_wxEvtHandler() {
	using namespace luabind;
	return
		class_< wxEvtHandler, wxObject >("wxEvtHandler")
			.def(constructor<  >())
			.def("GetNextHandler",(wxEvtHandler*(wxEvtHandler::*)() const)&wxEvtHandler::GetNextHandler)
			.def("GetPreviousHandler",(wxEvtHandler*(wxEvtHandler::*)() const)&wxEvtHandler::GetPreviousHandler)
			.def("SetNextHandler",(void(wxEvtHandler::*)(wxEvtHandler*))&wxEvtHandler::SetNextHandler)
			.def("SetPreviousHandler",(void(wxEvtHandler::*)(wxEvtHandler*))&wxEvtHandler::SetPreviousHandler)
			.def("SetEvtHandlerEnabled",(void(wxEvtHandler::*)(bool))&wxEvtHandler::SetEvtHandlerEnabled)
			.def("GetEvtHandlerEnabled",(bool(wxEvtHandler::*)() const)&wxEvtHandler::GetEvtHandlerEnabled)
			.def("Unlink",(void(wxEvtHandler::*)())&wxEvtHandler::Unlink)
			.def("IsUnlinked",(bool(wxEvtHandler::*)() const)&wxEvtHandler::IsUnlinked)
			.def("DeletePendingEvents",(void(wxEvtHandler::*)())&wxEvtHandler::DeletePendingEvents)
			.def("SetClientData",(void(wxEvtHandler::*)(void*))&wxEvtHandler::SetClientData)
			.def("GetClientData",(void*(wxEvtHandler::*)() const)&wxEvtHandler::GetClientData)
;
}

