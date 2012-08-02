#include <plug_common.h>

class luna_wrapper_ProfileAnotherBase {
public:
	typedef Luna< ProfileAnotherBase > luna_t;

	// Constructor checkers:

	// Function checkers:

	// Constructor binds:

	// Function binds:
};

ProfileAnotherBase* LunaTraits< ProfileAnotherBase >::_bind_ctor(lua_State *L) {
	return NULL; // No default constructor.
}

void LunaTraits< ProfileAnotherBase >::_bind_dtor(ProfileAnotherBase* obj) {
	delete obj;
}

const char LunaTraits< ProfileAnotherBase >::className[] = "ProfileAnotherBase";
const char LunaTraits< ProfileAnotherBase >::moduleName[] = "btests";
const char* LunaTraits< ProfileAnotherBase >::parents[] = {0};
const int LunaTraits< ProfileAnotherBase >::uniqueIDs[] = {15791216,0};

luna_RegType LunaTraits< ProfileAnotherBase >::methods[] = {
	{0,0}
};


