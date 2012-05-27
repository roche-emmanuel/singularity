#include <plug_common.h>

luabind::scope register_wxString() {
	using namespace luabind;
	return
		class_< wxString >("wxString")
;
}

