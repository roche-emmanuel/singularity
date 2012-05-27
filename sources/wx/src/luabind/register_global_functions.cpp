#include <plug_common.h>

luabind::scope register_global_functions() {
	using namespace luabind;
	return
		def("wxMessageBox",(int(*)(const wxString&, const wxString&, long, wxWindow*, int, int))&wxMessageBox),
		def("wxExit",(void(*)())&wxExit),
		def("wxYield",(bool(*)())&wxYield),
		def("wxWakeUpIdle",(void(*)())&wxWakeUpIdle),
		def("wxNewEventType",(wxEventType(*)())&wxNewEventType),
		def("wxCheckDynamicCast",(wxObject*(*)(wxObject*, wxClassInfo*))&wxCheckDynamicCast)
;
}

