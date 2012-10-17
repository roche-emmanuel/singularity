#include <plug_common.h>

class luna_wrapper_wxCalculateLayoutEvent {
public:
	typedef Luna< wxCalculateLayoutEvent > luna_t;

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
		wxCalculateLayoutEvent* ptr= dynamic_cast< wxCalculateLayoutEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxCalculateLayoutEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRect(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// int wxCalculateLayoutEvent::GetFlags() const
	static int _bind_GetFlags(lua_State *L) {
		if (!_lg_typecheck_GetFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxCalculateLayoutEvent::GetFlags() const function, expected prototype:\nint wxCalculateLayoutEvent::GetFlags() const\nClass arguments details:\n");
		}


		wxCalculateLayoutEvent* self=dynamic_cast< wxCalculateLayoutEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxCalculateLayoutEvent::GetFlags() const");
		}
		int lret = self->GetFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxRect wxCalculateLayoutEvent::GetRect() const
	static int _bind_GetRect(lua_State *L) {
		if (!_lg_typecheck_GetRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect wxCalculateLayoutEvent::GetRect() const function, expected prototype:\nwxRect wxCalculateLayoutEvent::GetRect() const\nClass arguments details:\n");
		}


		wxCalculateLayoutEvent* self=dynamic_cast< wxCalculateLayoutEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect wxCalculateLayoutEvent::GetRect() const");
		}
		wxRect stack_lret = self->GetRect();
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// void wxCalculateLayoutEvent::SetFlags(int flags)
	static int _bind_SetFlags(lua_State *L) {
		if (!_lg_typecheck_SetFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCalculateLayoutEvent::SetFlags(int flags) function, expected prototype:\nvoid wxCalculateLayoutEvent::SetFlags(int flags)\nClass arguments details:\n");
		}

		int flags=(int)lua_tointeger(L,2);

		wxCalculateLayoutEvent* self=dynamic_cast< wxCalculateLayoutEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCalculateLayoutEvent::SetFlags(int)");
		}
		self->SetFlags(flags);

		return 0;
	}

	// void wxCalculateLayoutEvent::SetRect(const wxRect & rect)
	static int _bind_SetRect(lua_State *L) {
		if (!_lg_typecheck_SetRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCalculateLayoutEvent::SetRect(const wxRect & rect) function, expected prototype:\nvoid wxCalculateLayoutEvent::SetRect(const wxRect & rect)\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxCalculateLayoutEvent::SetRect function");
		}
		const wxRect & rect=*rect_ptr;

		wxCalculateLayoutEvent* self=dynamic_cast< wxCalculateLayoutEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCalculateLayoutEvent::SetRect(const wxRect &)");
		}
		self->SetRect(rect);

		return 0;
	}


	// Operator binds:

};

wxCalculateLayoutEvent* LunaTraits< wxCalculateLayoutEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxCalculateLayoutEvent >::_bind_dtor(wxCalculateLayoutEvent* obj) {
	delete obj;
}

const char LunaTraits< wxCalculateLayoutEvent >::className[] = "wxCalculateLayoutEvent";
const char LunaTraits< wxCalculateLayoutEvent >::fullName[] = "wxCalculateLayoutEvent";
const char LunaTraits< wxCalculateLayoutEvent >::moduleName[] = "wx";
const char* LunaTraits< wxCalculateLayoutEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxCalculateLayoutEvent >::hash = 1544915;
const int LunaTraits< wxCalculateLayoutEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxCalculateLayoutEvent >::methods[] = {
	{"GetFlags", &luna_wrapper_wxCalculateLayoutEvent::_bind_GetFlags},
	{"GetRect", &luna_wrapper_wxCalculateLayoutEvent::_bind_GetRect},
	{"SetFlags", &luna_wrapper_wxCalculateLayoutEvent::_bind_SetFlags},
	{"SetRect", &luna_wrapper_wxCalculateLayoutEvent::_bind_SetRect},
	{"__eq", &luna_wrapper_wxCalculateLayoutEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxCalculateLayoutEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxCalculateLayoutEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxCalculateLayoutEvent >::enumValues[] = {
	{0,0}
};


