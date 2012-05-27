#include <plug_common.h>

luabind::scope register_wxClassInfo() {
	using namespace luabind;
	return
		class_< wxClassInfo >("wxClassInfo")
;
}

