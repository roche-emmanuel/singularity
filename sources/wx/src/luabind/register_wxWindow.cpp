#include <plug_common.h>

luabind::scope register_wxWindow() {
	using namespace luabind;
	return
		class_< wxWindow >("wxWindow")
;
}

