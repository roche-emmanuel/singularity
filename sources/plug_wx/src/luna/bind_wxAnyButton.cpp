#include <plug_common.h>

class luna_wrapper_wxAnyButton {
public:
	typedef Luna< wxAnyButton > luna_t;

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
		wxAnyButton* ptr= dynamic_cast< wxAnyButton* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxAnyButton >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTrackable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxAnyButton* ptr= static_cast< wxAnyButton* >(Luna< wxTrackable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxAnyButton >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetBitmap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBitmapCurrent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBitmapDisabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBitmapFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBitmapLabel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBitmapPressed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBitmap(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBitmapCurrent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBitmapDisabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBitmapFocus(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBitmapLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBitmapPressed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBitmapMargins(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBitmapMargins_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBitmapMargins_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBitmapPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxAnyButton::wxAnyButton()
	static wxAnyButton* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAnyButton::wxAnyButton() function, expected prototype:\nwxAnyButton::wxAnyButton()\nClass arguments details:\n");
		}


		return new wxAnyButton();
	}


	// Function binds:
	// wxBitmap wxAnyButton::GetBitmap() const
	static int _bind_GetBitmap(lua_State *L) {
		if (!_lg_typecheck_GetBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap wxAnyButton::GetBitmap() const function, expected prototype:\nwxBitmap wxAnyButton::GetBitmap() const\nClass arguments details:\n");
		}


		wxAnyButton* self=dynamic_cast< wxAnyButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBitmap wxAnyButton::GetBitmap() const");
		}
		wxBitmap stack_lret = self->GetBitmap();
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// wxBitmap wxAnyButton::GetBitmapCurrent() const
	static int _bind_GetBitmapCurrent(lua_State *L) {
		if (!_lg_typecheck_GetBitmapCurrent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap wxAnyButton::GetBitmapCurrent() const function, expected prototype:\nwxBitmap wxAnyButton::GetBitmapCurrent() const\nClass arguments details:\n");
		}


		wxAnyButton* self=dynamic_cast< wxAnyButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBitmap wxAnyButton::GetBitmapCurrent() const");
		}
		wxBitmap stack_lret = self->GetBitmapCurrent();
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// wxBitmap wxAnyButton::GetBitmapDisabled() const
	static int _bind_GetBitmapDisabled(lua_State *L) {
		if (!_lg_typecheck_GetBitmapDisabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap wxAnyButton::GetBitmapDisabled() const function, expected prototype:\nwxBitmap wxAnyButton::GetBitmapDisabled() const\nClass arguments details:\n");
		}


		wxAnyButton* self=dynamic_cast< wxAnyButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBitmap wxAnyButton::GetBitmapDisabled() const");
		}
		wxBitmap stack_lret = self->GetBitmapDisabled();
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// wxBitmap wxAnyButton::GetBitmapFocus() const
	static int _bind_GetBitmapFocus(lua_State *L) {
		if (!_lg_typecheck_GetBitmapFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap wxAnyButton::GetBitmapFocus() const function, expected prototype:\nwxBitmap wxAnyButton::GetBitmapFocus() const\nClass arguments details:\n");
		}


		wxAnyButton* self=dynamic_cast< wxAnyButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBitmap wxAnyButton::GetBitmapFocus() const");
		}
		wxBitmap stack_lret = self->GetBitmapFocus();
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// wxBitmap wxAnyButton::GetBitmapLabel() const
	static int _bind_GetBitmapLabel(lua_State *L) {
		if (!_lg_typecheck_GetBitmapLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap wxAnyButton::GetBitmapLabel() const function, expected prototype:\nwxBitmap wxAnyButton::GetBitmapLabel() const\nClass arguments details:\n");
		}


		wxAnyButton* self=dynamic_cast< wxAnyButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBitmap wxAnyButton::GetBitmapLabel() const");
		}
		wxBitmap stack_lret = self->GetBitmapLabel();
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// wxBitmap wxAnyButton::GetBitmapPressed() const
	static int _bind_GetBitmapPressed(lua_State *L) {
		if (!_lg_typecheck_GetBitmapPressed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap wxAnyButton::GetBitmapPressed() const function, expected prototype:\nwxBitmap wxAnyButton::GetBitmapPressed() const\nClass arguments details:\n");
		}


		wxAnyButton* self=dynamic_cast< wxAnyButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBitmap wxAnyButton::GetBitmapPressed() const");
		}
		wxBitmap stack_lret = self->GetBitmapPressed();
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// void wxAnyButton::SetBitmap(const wxBitmap & bitmap, wxDirection dir = wxLEFT)
	static int _bind_SetBitmap(lua_State *L) {
		if (!_lg_typecheck_SetBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAnyButton::SetBitmap(const wxBitmap & bitmap, wxDirection dir = wxLEFT) function, expected prototype:\nvoid wxAnyButton::SetBitmap(const wxBitmap & bitmap, wxDirection dir = wxLEFT)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxAnyButton::SetBitmap function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		wxDirection dir=luatop>2 ? (wxDirection)lua_tointeger(L,3) : wxLEFT;

		wxAnyButton* self=dynamic_cast< wxAnyButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAnyButton::SetBitmap(const wxBitmap &, wxDirection)");
		}
		self->SetBitmap(bitmap, dir);

		return 0;
	}

	// void wxAnyButton::SetBitmapCurrent(const wxBitmap & bitmap)
	static int _bind_SetBitmapCurrent(lua_State *L) {
		if (!_lg_typecheck_SetBitmapCurrent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAnyButton::SetBitmapCurrent(const wxBitmap & bitmap) function, expected prototype:\nvoid wxAnyButton::SetBitmapCurrent(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxAnyButton::SetBitmapCurrent function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxAnyButton* self=dynamic_cast< wxAnyButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAnyButton::SetBitmapCurrent(const wxBitmap &)");
		}
		self->SetBitmapCurrent(bitmap);

		return 0;
	}

	// void wxAnyButton::SetBitmapDisabled(const wxBitmap & bitmap)
	static int _bind_SetBitmapDisabled(lua_State *L) {
		if (!_lg_typecheck_SetBitmapDisabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAnyButton::SetBitmapDisabled(const wxBitmap & bitmap) function, expected prototype:\nvoid wxAnyButton::SetBitmapDisabled(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxAnyButton::SetBitmapDisabled function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxAnyButton* self=dynamic_cast< wxAnyButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAnyButton::SetBitmapDisabled(const wxBitmap &)");
		}
		self->SetBitmapDisabled(bitmap);

		return 0;
	}

	// void wxAnyButton::SetBitmapFocus(const wxBitmap & bitmap)
	static int _bind_SetBitmapFocus(lua_State *L) {
		if (!_lg_typecheck_SetBitmapFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAnyButton::SetBitmapFocus(const wxBitmap & bitmap) function, expected prototype:\nvoid wxAnyButton::SetBitmapFocus(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxAnyButton::SetBitmapFocus function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxAnyButton* self=dynamic_cast< wxAnyButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAnyButton::SetBitmapFocus(const wxBitmap &)");
		}
		self->SetBitmapFocus(bitmap);

		return 0;
	}

	// void wxAnyButton::SetBitmapLabel(const wxBitmap & bitmap)
	static int _bind_SetBitmapLabel(lua_State *L) {
		if (!_lg_typecheck_SetBitmapLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAnyButton::SetBitmapLabel(const wxBitmap & bitmap) function, expected prototype:\nvoid wxAnyButton::SetBitmapLabel(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxAnyButton::SetBitmapLabel function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxAnyButton* self=dynamic_cast< wxAnyButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAnyButton::SetBitmapLabel(const wxBitmap &)");
		}
		self->SetBitmapLabel(bitmap);

		return 0;
	}

	// void wxAnyButton::SetBitmapPressed(const wxBitmap & bitmap)
	static int _bind_SetBitmapPressed(lua_State *L) {
		if (!_lg_typecheck_SetBitmapPressed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAnyButton::SetBitmapPressed(const wxBitmap & bitmap) function, expected prototype:\nvoid wxAnyButton::SetBitmapPressed(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxAnyButton::SetBitmapPressed function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxAnyButton* self=dynamic_cast< wxAnyButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAnyButton::SetBitmapPressed(const wxBitmap &)");
		}
		self->SetBitmapPressed(bitmap);

		return 0;
	}

	// wxSize wxAnyButton::GetBitmapMargins()
	static int _bind_GetBitmapMargins(lua_State *L) {
		if (!_lg_typecheck_GetBitmapMargins(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxAnyButton::GetBitmapMargins() function, expected prototype:\nwxSize wxAnyButton::GetBitmapMargins()\nClass arguments details:\n");
		}


		wxAnyButton* self=dynamic_cast< wxAnyButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxAnyButton::GetBitmapMargins()");
		}
		wxSize stack_lret = self->GetBitmapMargins();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxAnyButton::SetBitmapMargins(int x, int y)
	static int _bind_SetBitmapMargins_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetBitmapMargins_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAnyButton::SetBitmapMargins(int x, int y) function, expected prototype:\nvoid wxAnyButton::SetBitmapMargins(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxAnyButton* self=dynamic_cast< wxAnyButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAnyButton::SetBitmapMargins(int, int)");
		}
		self->SetBitmapMargins(x, y);

		return 0;
	}

	// void wxAnyButton::SetBitmapMargins(const wxSize & sz)
	static int _bind_SetBitmapMargins_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetBitmapMargins_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAnyButton::SetBitmapMargins(const wxSize & sz) function, expected prototype:\nvoid wxAnyButton::SetBitmapMargins(const wxSize & sz)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* sz_ptr=(Luna< wxSize >::check(L,2));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxAnyButton::SetBitmapMargins function");
		}
		const wxSize & sz=*sz_ptr;

		wxAnyButton* self=dynamic_cast< wxAnyButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAnyButton::SetBitmapMargins(const wxSize &)");
		}
		self->SetBitmapMargins(sz);

		return 0;
	}

	// Overload binder for wxAnyButton::SetBitmapMargins
	static int _bind_SetBitmapMargins(lua_State *L) {
		if (_lg_typecheck_SetBitmapMargins_overload_1(L)) return _bind_SetBitmapMargins_overload_1(L);
		if (_lg_typecheck_SetBitmapMargins_overload_2(L)) return _bind_SetBitmapMargins_overload_2(L);

		luaL_error(L, "error in function SetBitmapMargins, cannot match any of the overloads for function SetBitmapMargins:\n  SetBitmapMargins(int, int)\n  SetBitmapMargins(const wxSize &)\n");
		return 0;
	}

	// void wxAnyButton::SetBitmapPosition(wxDirection dir)
	static int _bind_SetBitmapPosition(lua_State *L) {
		if (!_lg_typecheck_SetBitmapPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAnyButton::SetBitmapPosition(wxDirection dir) function, expected prototype:\nvoid wxAnyButton::SetBitmapPosition(wxDirection dir)\nClass arguments details:\n");
		}

		wxDirection dir=(wxDirection)lua_tointeger(L,2);

		wxAnyButton* self=dynamic_cast< wxAnyButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAnyButton::SetBitmapPosition(wxDirection)");
		}
		self->SetBitmapPosition(dir);

		return 0;
	}


	// Operator binds:

};

wxAnyButton* LunaTraits< wxAnyButton >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxAnyButton::_bind_ctor(L);
}

void LunaTraits< wxAnyButton >::_bind_dtor(wxAnyButton* obj) {
	delete obj;
}

const char LunaTraits< wxAnyButton >::className[] = "wxAnyButton";
const char LunaTraits< wxAnyButton >::fullName[] = "wxAnyButton";
const char LunaTraits< wxAnyButton >::moduleName[] = "wx";
const char* LunaTraits< wxAnyButton >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxAnyButton >::hash = 39771035;
const int LunaTraits< wxAnyButton >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxAnyButton >::methods[] = {
	{"GetBitmap", &luna_wrapper_wxAnyButton::_bind_GetBitmap},
	{"GetBitmapCurrent", &luna_wrapper_wxAnyButton::_bind_GetBitmapCurrent},
	{"GetBitmapDisabled", &luna_wrapper_wxAnyButton::_bind_GetBitmapDisabled},
	{"GetBitmapFocus", &luna_wrapper_wxAnyButton::_bind_GetBitmapFocus},
	{"GetBitmapLabel", &luna_wrapper_wxAnyButton::_bind_GetBitmapLabel},
	{"GetBitmapPressed", &luna_wrapper_wxAnyButton::_bind_GetBitmapPressed},
	{"SetBitmap", &luna_wrapper_wxAnyButton::_bind_SetBitmap},
	{"SetBitmapCurrent", &luna_wrapper_wxAnyButton::_bind_SetBitmapCurrent},
	{"SetBitmapDisabled", &luna_wrapper_wxAnyButton::_bind_SetBitmapDisabled},
	{"SetBitmapFocus", &luna_wrapper_wxAnyButton::_bind_SetBitmapFocus},
	{"SetBitmapLabel", &luna_wrapper_wxAnyButton::_bind_SetBitmapLabel},
	{"SetBitmapPressed", &luna_wrapper_wxAnyButton::_bind_SetBitmapPressed},
	{"GetBitmapMargins", &luna_wrapper_wxAnyButton::_bind_GetBitmapMargins},
	{"SetBitmapMargins", &luna_wrapper_wxAnyButton::_bind_SetBitmapMargins},
	{"SetBitmapPosition", &luna_wrapper_wxAnyButton::_bind_SetBitmapPosition},
	{"__eq", &luna_wrapper_wxAnyButton::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxAnyButton >::converters[] = {
	{"wxObject", &luna_wrapper_wxAnyButton::_cast_from_wxObject},
	{"wxTrackable", &luna_wrapper_wxAnyButton::_cast_from_wxTrackable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxAnyButton >::enumValues[] = {
	{0,0}
};


