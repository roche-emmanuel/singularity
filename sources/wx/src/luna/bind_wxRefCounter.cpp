#include <plug_common.h>

class luna_wrapper_wxRefCounter {
public:
	typedef Luna< wxRefCounter > luna_t;

	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L) != 0) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetRefCount(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_IncRef(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_DecRef(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}


	// Constructor binds:
	static wxRefCounter* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRefCounter function, expected prototype:\nwxRefCounter()");
		}


		return new wxRefCounter();
	}


	// Function binds:
	static int _bind_GetRefCount(lua_State *L) {
		if (!_lg_typecheck_GetRefCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GetRefCount function, expected prototype:\nGetRefCount()");
		}


		wxRefCounter* self=dynamic_cast< wxRefCounter* >(Luna< wxRefCounter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call GetRefCount(...)");
		}
		int ret = self->GetRefCount();
		lua_pushnumber(L,ret);

		return 1;
	}

	static int _bind_IncRef(lua_State *L) {
		if (!_lg_typecheck_IncRef(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in IncRef function, expected prototype:\nIncRef()");
		}


		wxRefCounter* self=dynamic_cast< wxRefCounter* >(Luna< wxRefCounter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IncRef(...)");
		}
		self->IncRef();

		return 0;
	}

	static int _bind_DecRef(lua_State *L) {
		if (!_lg_typecheck_DecRef(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in DecRef function, expected prototype:\nDecRef()");
		}


		wxRefCounter* self=dynamic_cast< wxRefCounter* >(Luna< wxRefCounter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call DecRef(...)");
		}
		self->DecRef();

		return 0;
	}

};

wxRefCounter* LunaTraits< wxRefCounter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRefCounter::_bind_ctor(L);
}

void LunaTraits< wxRefCounter >::_bind_dtor(wxRefCounter* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< wxRefCounter >::className[] = "wxRefCounter";
const char LunaTraits< wxRefCounter >::moduleName[] = "wx";
const int LunaTraits< wxRefCounter >::uniqueIDs = {32035533,0};

luna_RegType LunaTraits< wxRefCounter >::methods[] = {
	{"GetRefCount", &luna_wrapper_wxRefCounter::_bind_GetRefCount},
	{"IncRef", &luna_wrapper_wxRefCounter::_bind_IncRef},
	{"DecRef", &luna_wrapper_wxRefCounter::_bind_DecRef},
	{0,0}
};


