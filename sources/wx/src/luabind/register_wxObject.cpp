#include <plug_common.h>

luabind::scope register_wxObject() {
	using namespace luabind;
	return
		class_< wxObject >("wxObject")
			.def(constructor<  >())
			.def(constructor< const wxObject& >())
			.def("IsKindOf",(bool(wxObject::*)(const wxClassInfo*) const)&wxObject::IsKindOf)
			.def("GetRefData",(wxObjectRefData*(wxObject::*)() const)&wxObject::GetRefData)
			.def("SetRefData",(void(wxObject::*)(wxObjectRefData*))&wxObject::SetRefData)
			.def("Ref",(void(wxObject::*)(const wxObject&))&wxObject::Ref)
			.def("UnRef",(void(wxObject::*)())&wxObject::UnRef)
			.def("UnShare",(void(wxObject::*)())&wxObject::UnShare)
			.def("IsSameAs",(bool(wxObject::*)(const wxObject&) const)&wxObject::IsSameAs)
			.def("dynamicCast",&dynamicCastwxObject,raw(_4))
;
}

