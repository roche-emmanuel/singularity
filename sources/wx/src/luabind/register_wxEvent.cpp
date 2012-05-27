#include <plug_common.h>

luabind::scope register_wxEvent() {
	using namespace luabind;
	return
		class_< wxEvent >("wxEvent")
;
}

