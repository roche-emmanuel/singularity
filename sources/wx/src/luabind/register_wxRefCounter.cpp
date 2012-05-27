#include <plug_common.h>

luabind::scope register_wxRefCounter() {
	using namespace luabind;
	return
		class_< wxRefCounter >("wxRefCounter")
			.def("GetRefCount",(int(wxRefCounter::*)() const)&wxRefCounter::GetRefCount)
			.def("IncRef",(void(wxRefCounter::*)())&wxRefCounter::IncRef)
			.def("DecRef",(void(wxRefCounter::*)())&wxRefCounter::DecRef)
;
}

