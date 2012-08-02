#include <plug_common.h>

class luna_wrapper_wxListEvent {
public:
	typedef Luna< wxListEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxListEvent* ptr= dynamic_cast< wxListEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxListEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetCacheFrom(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCacheTo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColumn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetImage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetKeyCode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLabel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsEditCancelled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// long wxListEvent::GetCacheFrom() const
	static int _bind_GetCacheFrom(lua_State *L) {
		if (!_lg_typecheck_GetCacheFrom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxListEvent::GetCacheFrom() const function, expected prototype:\nlong wxListEvent::GetCacheFrom() const\nClass arguments details:\n");
		}


		wxListEvent* self=dynamic_cast< wxListEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxListEvent::GetCacheFrom() const");
		}
		long lret = self->GetCacheFrom();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxListEvent::GetCacheTo() const
	static int _bind_GetCacheTo(lua_State *L) {
		if (!_lg_typecheck_GetCacheTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxListEvent::GetCacheTo() const function, expected prototype:\nlong wxListEvent::GetCacheTo() const\nClass arguments details:\n");
		}


		wxListEvent* self=dynamic_cast< wxListEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxListEvent::GetCacheTo() const");
		}
		long lret = self->GetCacheTo();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxListEvent::GetColumn() const
	static int _bind_GetColumn(lua_State *L) {
		if (!_lg_typecheck_GetColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxListEvent::GetColumn() const function, expected prototype:\nint wxListEvent::GetColumn() const\nClass arguments details:\n");
		}


		wxListEvent* self=dynamic_cast< wxListEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxListEvent::GetColumn() const");
		}
		int lret = self->GetColumn();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxListEvent::GetData() const
	static int _bind_GetData(lua_State *L) {
		if (!_lg_typecheck_GetData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxListEvent::GetData() const function, expected prototype:\nlong wxListEvent::GetData() const\nClass arguments details:\n");
		}


		wxListEvent* self=dynamic_cast< wxListEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxListEvent::GetData() const");
		}
		long lret = self->GetData();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxListEvent::GetImage() const
	static int _bind_GetImage(lua_State *L) {
		if (!_lg_typecheck_GetImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxListEvent::GetImage() const function, expected prototype:\nint wxListEvent::GetImage() const\nClass arguments details:\n");
		}


		wxListEvent* self=dynamic_cast< wxListEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxListEvent::GetImage() const");
		}
		int lret = self->GetImage();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxListEvent::GetIndex() const
	static int _bind_GetIndex(lua_State *L) {
		if (!_lg_typecheck_GetIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxListEvent::GetIndex() const function, expected prototype:\nlong wxListEvent::GetIndex() const\nClass arguments details:\n");
		}


		wxListEvent* self=dynamic_cast< wxListEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxListEvent::GetIndex() const");
		}
		long lret = self->GetIndex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxListItem & wxListEvent::GetItem() const
	static int _bind_GetItem(lua_State *L) {
		if (!_lg_typecheck_GetItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxListItem & wxListEvent::GetItem() const function, expected prototype:\nconst wxListItem & wxListEvent::GetItem() const\nClass arguments details:\n");
		}


		wxListEvent* self=dynamic_cast< wxListEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxListItem & wxListEvent::GetItem() const");
		}
		const wxListItem* lret = &self->GetItem();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxListItem >::push(L,lret,false);

		return 1;
	}

	// int wxListEvent::GetKeyCode() const
	static int _bind_GetKeyCode(lua_State *L) {
		if (!_lg_typecheck_GetKeyCode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxListEvent::GetKeyCode() const function, expected prototype:\nint wxListEvent::GetKeyCode() const\nClass arguments details:\n");
		}


		wxListEvent* self=dynamic_cast< wxListEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxListEvent::GetKeyCode() const");
		}
		int lret = self->GetKeyCode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxString & wxListEvent::GetLabel() const
	static int _bind_GetLabel(lua_State *L) {
		if (!_lg_typecheck_GetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxListEvent::GetLabel() const function, expected prototype:\nconst wxString & wxListEvent::GetLabel() const\nClass arguments details:\n");
		}


		wxListEvent* self=dynamic_cast< wxListEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxListEvent::GetLabel() const");
		}
		const wxString & lret = self->GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// long wxListEvent::GetMask() const
	static int _bind_GetMask(lua_State *L) {
		if (!_lg_typecheck_GetMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxListEvent::GetMask() const function, expected prototype:\nlong wxListEvent::GetMask() const\nClass arguments details:\n");
		}


		wxListEvent* self=dynamic_cast< wxListEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxListEvent::GetMask() const");
		}
		long lret = self->GetMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPoint wxListEvent::GetPoint() const
	static int _bind_GetPoint(lua_State *L) {
		if (!_lg_typecheck_GetPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxListEvent::GetPoint() const function, expected prototype:\nwxPoint wxListEvent::GetPoint() const\nClass arguments details:\n");
		}


		wxListEvent* self=dynamic_cast< wxListEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxListEvent::GetPoint() const");
		}
		wxPoint stack_lret = self->GetPoint();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// const wxString & wxListEvent::GetText() const
	static int _bind_GetText(lua_State *L) {
		if (!_lg_typecheck_GetText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxListEvent::GetText() const function, expected prototype:\nconst wxString & wxListEvent::GetText() const\nClass arguments details:\n");
		}


		wxListEvent* self=dynamic_cast< wxListEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxListEvent::GetText() const");
		}
		const wxString & lret = self->GetText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxListEvent::IsEditCancelled() const
	static int _bind_IsEditCancelled(lua_State *L) {
		if (!_lg_typecheck_IsEditCancelled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListEvent::IsEditCancelled() const function, expected prototype:\nbool wxListEvent::IsEditCancelled() const\nClass arguments details:\n");
		}


		wxListEvent* self=dynamic_cast< wxListEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListEvent::IsEditCancelled() const");
		}
		bool lret = self->IsEditCancelled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxListEvent* LunaTraits< wxListEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxListEvent >::_bind_dtor(wxListEvent* obj) {
	delete obj;
}

const char LunaTraits< wxListEvent >::className[] = "wxListEvent";
const char LunaTraits< wxListEvent >::fullName[] = "wxListEvent";
const char LunaTraits< wxListEvent >::moduleName[] = "wx";
const char* LunaTraits< wxListEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxListEvent >::hash = 39522497;
const int LunaTraits< wxListEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxListEvent >::methods[] = {
	{"GetCacheFrom", &luna_wrapper_wxListEvent::_bind_GetCacheFrom},
	{"GetCacheTo", &luna_wrapper_wxListEvent::_bind_GetCacheTo},
	{"GetColumn", &luna_wrapper_wxListEvent::_bind_GetColumn},
	{"GetData", &luna_wrapper_wxListEvent::_bind_GetData},
	{"GetImage", &luna_wrapper_wxListEvent::_bind_GetImage},
	{"GetIndex", &luna_wrapper_wxListEvent::_bind_GetIndex},
	{"GetItem", &luna_wrapper_wxListEvent::_bind_GetItem},
	{"GetKeyCode", &luna_wrapper_wxListEvent::_bind_GetKeyCode},
	{"GetLabel", &luna_wrapper_wxListEvent::_bind_GetLabel},
	{"GetMask", &luna_wrapper_wxListEvent::_bind_GetMask},
	{"GetPoint", &luna_wrapper_wxListEvent::_bind_GetPoint},
	{"GetText", &luna_wrapper_wxListEvent::_bind_GetText},
	{"IsEditCancelled", &luna_wrapper_wxListEvent::_bind_IsEditCancelled},
	{0,0}
};

luna_ConverterType LunaTraits< wxListEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxListEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxListEvent >::enumValues[] = {
	{0,0}
};


