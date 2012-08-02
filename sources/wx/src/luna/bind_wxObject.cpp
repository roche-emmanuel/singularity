#include <plug_common.h>

class luna_wrapper_wxObject {
public:
	typedef Luna< wxObject > luna_t;

	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L) != 0) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		if(Luna<void>::has_uniqueid(L,1,56813631)) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_IsKindOf(lua_State *L) {
		if( lua_gettop(L) != 2) return false;
		if( lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,96106697)) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRefData(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRefData(lua_State *L) {
		if( lua_gettop(L) != 2) return false;
		if( lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,32035533)) return false;
		return true;
	}

	inline static bool _lg_typecheck_Ref(lua_State *L) {
		if( lua_gettop(L) != 2) return false;
		if(Luna<void>::has_uniqueid(L,2,56813631)) return false;
		return true;
	}

	inline static bool _lg_typecheck_UnRef(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_UnShare(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsSameAs(lua_State *L) {
		if( lua_gettop(L) != 2) return false;
		if(Luna<void>::has_uniqueid(L,2,56813631)) return false;
		return true;
	}


	// Constructor binds:
	static wxObject* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxObject function, expected prototype:\nwxObject()");
		}


		return new wxObject();
	}

	static wxObject* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxObject function, expected prototype:\nwxObject(const wxObject&)");
		}

		wxObject* other=dynamic_cast< wxObject* >(Luna< wxObject >::check(L,1));

		return new wxObject(*other);
	}

	static wxObject* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxObject, cannot match any of the overloads:\nwxObject  wxObject()\n  wxObject(const wxObject&)\n");
		return NULL;
	}


	// Function binds:
	static int _bind_IsKindOf(lua_State *L) {
		if (!_lg_typecheck_IsKindOf(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in IsKindOf function, expected prototype:\nIsKindOf(const wxClassInfo*)");
		}

		wxClassInfo* info=dynamic_cast< wxClassInfo* >(Luna< wxClassInfo >::check(L,2));

		wxObject* self=dynamic_cast< wxObject* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IsKindOf(...)");
		}
		bool ret = self->IsKindOf(info);
		lua_pushboolean(L,ret?1:0);

		return 1;
	}

	static int _bind_GetRefData(lua_State *L) {
		if (!_lg_typecheck_GetRefData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GetRefData function, expected prototype:\nGetRefData()");
		}


		wxObject* self=dynamic_cast< wxObject* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call GetRefData(...)");
		}
		wxRefCounter* ret = self->GetRefData();
		Luna< wxRefCounter >::push(L,ret,false,"wxRefCounter");

		return 1;
	}

	static int _bind_SetRefData(lua_State *L) {
		if (!_lg_typecheck_SetRefData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SetRefData function, expected prototype:\nSetRefData(wxRefCounter*)");
		}

		wxRefCounter* data=dynamic_cast< wxRefCounter* >(Luna< wxRefCounter >::check(L,2));

		wxObject* self=dynamic_cast< wxObject* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SetRefData(...)");
		}
		self->SetRefData(data);

		return 0;
	}

	static int _bind_Ref(lua_State *L) {
		if (!_lg_typecheck_Ref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Ref function, expected prototype:\nRef(const wxObject&)");
		}

		wxObject* clone=dynamic_cast< wxObject* >(Luna< wxObject >::check(L,2));

		wxObject* self=dynamic_cast< wxObject* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Ref(...)");
		}
		self->Ref(*clone);

		return 0;
	}

	static int _bind_UnRef(lua_State *L) {
		if (!_lg_typecheck_UnRef(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in UnRef function, expected prototype:\nUnRef()");
		}


		wxObject* self=dynamic_cast< wxObject* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call UnRef(...)");
		}
		self->UnRef();

		return 0;
	}

	static int _bind_UnShare(lua_State *L) {
		if (!_lg_typecheck_UnShare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in UnShare function, expected prototype:\nUnShare()");
		}


		wxObject* self=dynamic_cast< wxObject* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call UnShare(...)");
		}
		self->UnShare();

		return 0;
	}

	static int _bind_IsSameAs(lua_State *L) {
		if (!_lg_typecheck_IsSameAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in IsSameAs function, expected prototype:\nIsSameAs(const wxObject&)");
		}

		wxObject* o=dynamic_cast< wxObject* >(Luna< wxObject >::check(L,2));

		wxObject* self=dynamic_cast< wxObject* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IsSameAs(...)");
		}
		bool ret = self->IsSameAs(*o);
		lua_pushboolean(L,ret?1:0);

		return 1;
	}

};

wxObject* LunaTraits< wxObject >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxObject::_bind_ctor(L);
}

void LunaTraits< wxObject >::_bind_dtor(wxObject* obj) {
	delete obj;
}

const char LunaTraits< wxObject >::className[] = "wxObject";
const char LunaTraits< wxObject >::moduleName[] = "wx";
const int LunaTraits< wxObject >::uniqueIDs = {56813631,0};

luna_RegType LunaTraits< wxObject >::methods[] = {
	{"IsKindOf", &luna_wrapper_wxObject::_bind_IsKindOf},
	{"GetRefData", &luna_wrapper_wxObject::_bind_GetRefData},
	{"SetRefData", &luna_wrapper_wxObject::_bind_SetRefData},
	{"Ref", &luna_wrapper_wxObject::_bind_Ref},
	{"UnRef", &luna_wrapper_wxObject::_bind_UnRef},
	{"UnShare", &luna_wrapper_wxObject::_bind_UnShare},
	{"IsSameAs", &luna_wrapper_wxObject::_bind_IsSameAs},
	{0,0}
};


