#include <plug_common.h>

class luna_wrapper_ProfileBase {
public:
	typedef Luna< ProfileBase > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_increment_a_base(lua_State *L) {
		if( lua_gettop(L) != 2) return false;
		if( lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1821726)) return false;
		return true;
	}

	inline static bool _lg_typecheck_virtual_func(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_pure_virtual_func(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}


	// Function binds:
	static int _bind_increment_a_base(lua_State *L) {
		if (!_lg_typecheck_increment_a_base(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in increment_a_base function, expected prototype:\nincrement_a_base(ProfileBase*)");
		}

		ProfileBase* base=dynamic_cast< ProfileBase* >(Luna< ProfileBase >::check(L,2));

		ProfileBase* self=dynamic_cast< ProfileBase* >(Luna< ProfileBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call increment_a_base(...)");
		}
		self->increment_a_base(base);

		return 0;
	}

	static int _bind_virtual_func(lua_State *L) {
		if (!_lg_typecheck_virtual_func(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in virtual_func function, expected prototype:\nvirtual_func()");
		}


		ProfileBase* self=dynamic_cast< ProfileBase* >(Luna< ProfileBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call virtual_func(...)");
		}
		self->virtual_func();

		return 0;
	}

	static int _bind_pure_virtual_func(lua_State *L) {
		if (!_lg_typecheck_pure_virtual_func(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in pure_virtual_func function, expected prototype:\npure_virtual_func()");
		}


		ProfileBase* self=dynamic_cast< ProfileBase* >(Luna< ProfileBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call pure_virtual_func(...)");
		}
		self->pure_virtual_func();

		return 0;
	}

};

ProfileBase* LunaTraits< ProfileBase >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< ProfileBase >::_bind_dtor(ProfileBase* obj) {
	delete obj;
}

const char LunaTraits< ProfileBase >::className[] = "ProfileBase";
const char LunaTraits< ProfileBase >::moduleName[] = "btests";
const char* LunaTraits< ProfileBase >::parents[] = {0};
const int LunaTraits< ProfileBase >::uniqueIDs[] = {1821726,0};

luna_RegType LunaTraits< ProfileBase >::methods[] = {
	{"increment_a_base", &luna_wrapper_ProfileBase::_bind_increment_a_base},
	{"virtual_func", &luna_wrapper_ProfileBase::_bind_virtual_func},
	{"pure_virtual_func", &luna_wrapper_ProfileBase::_bind_pure_virtual_func},
	{0,0}
};


