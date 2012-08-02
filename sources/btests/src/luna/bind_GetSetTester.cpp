#include <plug_common.h>

class luna_wrapper_GetSetTester {
public:
	typedef Luna< GetSetTester > luna_t;

	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L) != 0) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L) != 2) return false;
		if( lua_isnumber(L,2)==0) return false;
		return true;
	}

	inline static bool _lg_typecheck_get(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}


	// Constructor binds:
	static GetSetTester* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GetSetTester function, expected prototype:\nGetSetTester()");
		}


		return new GetSetTester();
	}


	// Function binds:
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in set function, expected prototype:\nset(double)");
		}

		double i=(double)lua_tonumber(L,2);

		GetSetTester* self=dynamic_cast< GetSetTester* >(Luna< GetSetTester >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call set(...)");
		}
		self->set(i);

		return 0;
	}

	static int _bind_get(lua_State *L) {
		if (!_lg_typecheck_get(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in get function, expected prototype:\nget()");
		}


		GetSetTester* self=dynamic_cast< GetSetTester* >(Luna< GetSetTester >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call get(...)");
		}
		double ret = self->get();
		lua_pushnumber(L,ret);

		return 1;
	}

};

GetSetTester* LunaTraits< GetSetTester >::_bind_ctor(lua_State *L) {
	return luna_wrapper_GetSetTester::_bind_ctor(L);
}

void LunaTraits< GetSetTester >::_bind_dtor(GetSetTester* obj) {
	delete obj;
}

const char LunaTraits< GetSetTester >::className[] = "GetSetTester";
const char LunaTraits< GetSetTester >::moduleName[] = "btests";
const char* LunaTraits< GetSetTester >::parents[] = {0};
const int LunaTraits< GetSetTester >::uniqueIDs[] = {21160797,0};

luna_RegType LunaTraits< GetSetTester >::methods[] = {
	{"set", &luna_wrapper_GetSetTester::_bind_set},
	{"get", &luna_wrapper_GetSetTester::_bind_get},
	{0,0}
};


