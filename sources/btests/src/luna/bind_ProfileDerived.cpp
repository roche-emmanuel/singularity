#include <plug_common.h>

class luna_wrapper_ProfileDerived {
public:
	typedef Luna< ProfileDerived > luna_t;

	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L) != 0) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_pure_virtual_func(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}


	// Constructor binds:
	static ProfileDerived* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in ProfileDerived function, expected prototype:\nProfileDerived()");
		}


		return new ProfileDerived();
	}


	// Function binds:
	static int _bind_pure_virtual_func(lua_State *L) {
		if (!_lg_typecheck_pure_virtual_func(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in pure_virtual_func function, expected prototype:\npure_virtual_func()");
		}


		ProfileDerived* self=dynamic_cast< ProfileDerived* >(Luna< ProfileBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call pure_virtual_func(...)");
		}
		self->pure_virtual_func();

		return 0;
	}

};

ProfileDerived* LunaTraits< ProfileDerived >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ProfileDerived::_bind_ctor(L);
}

void LunaTraits< ProfileDerived >::_bind_dtor(ProfileDerived* obj) {
	delete obj;
}

const char LunaTraits< ProfileDerived >::className[] = "ProfileDerived";
const char LunaTraits< ProfileDerived >::moduleName[] = "btests";
const char* LunaTraits< ProfileDerived >::parents[] = {"btests.ProfileBase", 0};
const int LunaTraits< ProfileDerived >::uniqueIDs[] = {1821726,0};

luna_RegType LunaTraits< ProfileDerived >::methods[] = {
	{"pure_virtual_func", &luna_wrapper_ProfileDerived::_bind_pure_virtual_func},
	{0,0}
};


