#include <plug_common.h>

class luna_wrapper_ProfileMultiBases {
public:
	typedef Luna< ProfileMultiBases > luna_t;

	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L) != 0) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_virtual_func(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}


	// Constructor binds:
	static ProfileMultiBases* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in ProfileMultiBases function, expected prototype:\nProfileMultiBases()");
		}


		return new ProfileMultiBases();
	}


	// Function binds:
	static int _bind_virtual_func(lua_State *L) {
		if (!_lg_typecheck_virtual_func(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in virtual_func function, expected prototype:\nvirtual_func()");
		}


		ProfileMultiBases* self=dynamic_cast< ProfileMultiBases* >(Luna< ProfileAnotherBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call virtual_func(...)");
		}
		self->virtual_func();

		return 0;
	}

};

ProfileMultiBases* LunaTraits< ProfileMultiBases >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ProfileMultiBases::_bind_ctor(L);
}

void LunaTraits< ProfileMultiBases >::_bind_dtor(ProfileMultiBases* obj) {
	delete obj;
}

const char LunaTraits< ProfileMultiBases >::className[] = "ProfileMultiBases";
const char LunaTraits< ProfileMultiBases >::moduleName[] = "btests";
const char* LunaTraits< ProfileMultiBases >::parents[] = {"btests.ProfileAnotherBase", "btests.ProfileDerived", 0};
const int LunaTraits< ProfileMultiBases >::uniqueIDs[] = {15791216, 1821726,0};

luna_RegType LunaTraits< ProfileMultiBases >::methods[] = {
	{"virtual_func", &luna_wrapper_ProfileMultiBases::_bind_virtual_func},
	{0,0}
};


