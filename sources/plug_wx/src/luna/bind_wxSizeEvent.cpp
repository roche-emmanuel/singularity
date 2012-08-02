#include <plug_common.h>

class luna_wrapper_wxSizeEvent {
public:
	typedef Luna< wxSizeEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxSizeEvent* ptr= dynamic_cast< wxSizeEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSizeEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// wxSize wxSizeEvent::GetSize() const
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxSizeEvent::GetSize() const function, expected prototype:\nwxSize wxSizeEvent::GetSize() const\nClass arguments details:\n");
		}


		wxSizeEvent* self=dynamic_cast< wxSizeEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxSizeEvent::GetSize() const");
		}
		wxSize stack_lret = self->GetSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxSizeEvent::SetSize(wxSize size)
	static int _bind_SetSize(lua_State *L) {
		if (!_lg_typecheck_SetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizeEvent::SetSize(wxSize size) function, expected prototype:\nvoid wxSizeEvent::SetSize(wxSize size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSizeEvent::SetSize function");
		}
		wxSize size=*size_ptr;

		wxSizeEvent* self=dynamic_cast< wxSizeEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizeEvent::SetSize(wxSize)");
		}
		self->SetSize(size);

		return 0;
	}

	// wxRect wxSizeEvent::GetRect() const
	static int _bind_GetRect(lua_State *L) {
		if (!_lg_typecheck_GetRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect wxSizeEvent::GetRect() const function, expected prototype:\nwxRect wxSizeEvent::GetRect() const\nClass arguments details:\n");
		}


		wxSizeEvent* self=dynamic_cast< wxSizeEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect wxSizeEvent::GetRect() const");
		}
		wxRect stack_lret = self->GetRect();
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// void wxSizeEvent::SetRect(wxRect rect)
	static int _bind_SetRect(lua_State *L) {
		if (!_lg_typecheck_SetRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizeEvent::SetRect(wxRect rect) function, expected prototype:\nvoid wxSizeEvent::SetRect(wxRect rect)\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxSizeEvent::SetRect function");
		}
		wxRect rect=*rect_ptr;

		wxSizeEvent* self=dynamic_cast< wxSizeEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizeEvent::SetRect(wxRect)");
		}
		self->SetRect(rect);

		return 0;
	}


	// Operator binds:

};

wxSizeEvent* LunaTraits< wxSizeEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxSizeEvent >::_bind_dtor(wxSizeEvent* obj) {
	delete obj;
}

const char LunaTraits< wxSizeEvent >::className[] = "wxSizeEvent";
const char LunaTraits< wxSizeEvent >::fullName[] = "wxSizeEvent";
const char LunaTraits< wxSizeEvent >::moduleName[] = "wx";
const char* LunaTraits< wxSizeEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxSizeEvent >::hash = 59394658;
const int LunaTraits< wxSizeEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSizeEvent >::methods[] = {
	{"GetSize", &luna_wrapper_wxSizeEvent::_bind_GetSize},
	{"SetSize", &luna_wrapper_wxSizeEvent::_bind_SetSize},
	{"GetRect", &luna_wrapper_wxSizeEvent::_bind_GetRect},
	{"SetRect", &luna_wrapper_wxSizeEvent::_bind_SetRect},
	{0,0}
};

luna_ConverterType LunaTraits< wxSizeEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxSizeEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSizeEvent >::enumValues[] = {
	{0,0}
};


