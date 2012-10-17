#include <plug_common.h>

class luna_wrapper_wxQueryLayoutInfoEvent {
public:
	typedef Luna< wxQueryLayoutInfoEvent > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxObject*)");
		}

		wxObject* rhs =(Luna< wxObject >::check(L,2));
		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxQueryLayoutInfoEvent* ptr= dynamic_cast< wxQueryLayoutInfoEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxQueryLayoutInfoEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOrientation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRequestedLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAlignment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOrientation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRequestedLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxLayoutAlignment wxQueryLayoutInfoEvent::GetAlignment() const
	static int _bind_GetAlignment(lua_State *L) {
		if (!_lg_typecheck_GetAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLayoutAlignment wxQueryLayoutInfoEvent::GetAlignment() const function, expected prototype:\nwxLayoutAlignment wxQueryLayoutInfoEvent::GetAlignment() const\nClass arguments details:\n");
		}


		wxQueryLayoutInfoEvent* self=dynamic_cast< wxQueryLayoutInfoEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLayoutAlignment wxQueryLayoutInfoEvent::GetAlignment() const");
		}
		wxLayoutAlignment lret = self->GetAlignment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxQueryLayoutInfoEvent::GetFlags() const
	static int _bind_GetFlags(lua_State *L) {
		if (!_lg_typecheck_GetFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxQueryLayoutInfoEvent::GetFlags() const function, expected prototype:\nint wxQueryLayoutInfoEvent::GetFlags() const\nClass arguments details:\n");
		}


		wxQueryLayoutInfoEvent* self=dynamic_cast< wxQueryLayoutInfoEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxQueryLayoutInfoEvent::GetFlags() const");
		}
		int lret = self->GetFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxLayoutOrientation wxQueryLayoutInfoEvent::GetOrientation() const
	static int _bind_GetOrientation(lua_State *L) {
		if (!_lg_typecheck_GetOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLayoutOrientation wxQueryLayoutInfoEvent::GetOrientation() const function, expected prototype:\nwxLayoutOrientation wxQueryLayoutInfoEvent::GetOrientation() const\nClass arguments details:\n");
		}


		wxQueryLayoutInfoEvent* self=dynamic_cast< wxQueryLayoutInfoEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLayoutOrientation wxQueryLayoutInfoEvent::GetOrientation() const");
		}
		wxLayoutOrientation lret = self->GetOrientation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxQueryLayoutInfoEvent::GetRequestedLength() const
	static int _bind_GetRequestedLength(lua_State *L) {
		if (!_lg_typecheck_GetRequestedLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxQueryLayoutInfoEvent::GetRequestedLength() const function, expected prototype:\nint wxQueryLayoutInfoEvent::GetRequestedLength() const\nClass arguments details:\n");
		}


		wxQueryLayoutInfoEvent* self=dynamic_cast< wxQueryLayoutInfoEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxQueryLayoutInfoEvent::GetRequestedLength() const");
		}
		int lret = self->GetRequestedLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSize wxQueryLayoutInfoEvent::GetSize() const
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxQueryLayoutInfoEvent::GetSize() const function, expected prototype:\nwxSize wxQueryLayoutInfoEvent::GetSize() const\nClass arguments details:\n");
		}


		wxQueryLayoutInfoEvent* self=dynamic_cast< wxQueryLayoutInfoEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxQueryLayoutInfoEvent::GetSize() const");
		}
		wxSize stack_lret = self->GetSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxQueryLayoutInfoEvent::SetAlignment(wxLayoutAlignment alignment)
	static int _bind_SetAlignment(lua_State *L) {
		if (!_lg_typecheck_SetAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxQueryLayoutInfoEvent::SetAlignment(wxLayoutAlignment alignment) function, expected prototype:\nvoid wxQueryLayoutInfoEvent::SetAlignment(wxLayoutAlignment alignment)\nClass arguments details:\n");
		}

		wxLayoutAlignment alignment=(wxLayoutAlignment)lua_tointeger(L,2);

		wxQueryLayoutInfoEvent* self=dynamic_cast< wxQueryLayoutInfoEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxQueryLayoutInfoEvent::SetAlignment(wxLayoutAlignment)");
		}
		self->SetAlignment(alignment);

		return 0;
	}

	// void wxQueryLayoutInfoEvent::SetFlags(int flags)
	static int _bind_SetFlags(lua_State *L) {
		if (!_lg_typecheck_SetFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxQueryLayoutInfoEvent::SetFlags(int flags) function, expected prototype:\nvoid wxQueryLayoutInfoEvent::SetFlags(int flags)\nClass arguments details:\n");
		}

		int flags=(int)lua_tointeger(L,2);

		wxQueryLayoutInfoEvent* self=dynamic_cast< wxQueryLayoutInfoEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxQueryLayoutInfoEvent::SetFlags(int)");
		}
		self->SetFlags(flags);

		return 0;
	}

	// void wxQueryLayoutInfoEvent::SetOrientation(wxLayoutOrientation orientation)
	static int _bind_SetOrientation(lua_State *L) {
		if (!_lg_typecheck_SetOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxQueryLayoutInfoEvent::SetOrientation(wxLayoutOrientation orientation) function, expected prototype:\nvoid wxQueryLayoutInfoEvent::SetOrientation(wxLayoutOrientation orientation)\nClass arguments details:\n");
		}

		wxLayoutOrientation orientation=(wxLayoutOrientation)lua_tointeger(L,2);

		wxQueryLayoutInfoEvent* self=dynamic_cast< wxQueryLayoutInfoEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxQueryLayoutInfoEvent::SetOrientation(wxLayoutOrientation)");
		}
		self->SetOrientation(orientation);

		return 0;
	}

	// void wxQueryLayoutInfoEvent::SetRequestedLength(int length)
	static int _bind_SetRequestedLength(lua_State *L) {
		if (!_lg_typecheck_SetRequestedLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxQueryLayoutInfoEvent::SetRequestedLength(int length) function, expected prototype:\nvoid wxQueryLayoutInfoEvent::SetRequestedLength(int length)\nClass arguments details:\n");
		}

		int length=(int)lua_tointeger(L,2);

		wxQueryLayoutInfoEvent* self=dynamic_cast< wxQueryLayoutInfoEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxQueryLayoutInfoEvent::SetRequestedLength(int)");
		}
		self->SetRequestedLength(length);

		return 0;
	}

	// void wxQueryLayoutInfoEvent::SetSize(const wxSize & size)
	static int _bind_SetSize(lua_State *L) {
		if (!_lg_typecheck_SetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxQueryLayoutInfoEvent::SetSize(const wxSize & size) function, expected prototype:\nvoid wxQueryLayoutInfoEvent::SetSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxQueryLayoutInfoEvent::SetSize function");
		}
		const wxSize & size=*size_ptr;

		wxQueryLayoutInfoEvent* self=dynamic_cast< wxQueryLayoutInfoEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxQueryLayoutInfoEvent::SetSize(const wxSize &)");
		}
		self->SetSize(size);

		return 0;
	}


	// Operator binds:

};

wxQueryLayoutInfoEvent* LunaTraits< wxQueryLayoutInfoEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxQueryLayoutInfoEvent >::_bind_dtor(wxQueryLayoutInfoEvent* obj) {
	delete obj;
}

const char LunaTraits< wxQueryLayoutInfoEvent >::className[] = "wxQueryLayoutInfoEvent";
const char LunaTraits< wxQueryLayoutInfoEvent >::fullName[] = "wxQueryLayoutInfoEvent";
const char LunaTraits< wxQueryLayoutInfoEvent >::moduleName[] = "wx";
const char* LunaTraits< wxQueryLayoutInfoEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxQueryLayoutInfoEvent >::hash = 82783281;
const int LunaTraits< wxQueryLayoutInfoEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxQueryLayoutInfoEvent >::methods[] = {
	{"GetAlignment", &luna_wrapper_wxQueryLayoutInfoEvent::_bind_GetAlignment},
	{"GetFlags", &luna_wrapper_wxQueryLayoutInfoEvent::_bind_GetFlags},
	{"GetOrientation", &luna_wrapper_wxQueryLayoutInfoEvent::_bind_GetOrientation},
	{"GetRequestedLength", &luna_wrapper_wxQueryLayoutInfoEvent::_bind_GetRequestedLength},
	{"GetSize", &luna_wrapper_wxQueryLayoutInfoEvent::_bind_GetSize},
	{"SetAlignment", &luna_wrapper_wxQueryLayoutInfoEvent::_bind_SetAlignment},
	{"SetFlags", &luna_wrapper_wxQueryLayoutInfoEvent::_bind_SetFlags},
	{"SetOrientation", &luna_wrapper_wxQueryLayoutInfoEvent::_bind_SetOrientation},
	{"SetRequestedLength", &luna_wrapper_wxQueryLayoutInfoEvent::_bind_SetRequestedLength},
	{"SetSize", &luna_wrapper_wxQueryLayoutInfoEvent::_bind_SetSize},
	{"__eq", &luna_wrapper_wxQueryLayoutInfoEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxQueryLayoutInfoEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxQueryLayoutInfoEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxQueryLayoutInfoEvent >::enumValues[] = {
	{0,0}
};


