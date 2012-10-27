#include <plug_common.h>

class luna_wrapper_wxSashLayoutWindow {
public:
	typedef Luna< wxSashLayoutWindow > luna_t;

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
		wxSashLayoutWindow* ptr= dynamic_cast< wxSashLayoutWindow* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSashLayoutWindow >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxSashLayoutWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>3 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,4))) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOrientation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnCalculateLayout(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnQueryLayoutInfo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAlignment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDefaultSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOrientation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSashLayoutWindow::wxSashLayoutWindow()
	static wxSashLayoutWindow* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSashLayoutWindow::wxSashLayoutWindow() function, expected prototype:\nwxSashLayoutWindow::wxSashLayoutWindow()\nClass arguments details:\n");
		}


		return new wxSashLayoutWindow();
	}

	// wxSashLayoutWindow::wxSashLayoutWindow(wxSashLayoutWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCLIP_CHILDREN | wxSW_3D, const wxString & name = "layoutWindow")
	static wxSashLayoutWindow* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSashLayoutWindow::wxSashLayoutWindow(wxSashLayoutWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCLIP_CHILDREN | wxSW_3D, const wxString & name = \"layoutWindow\") function, expected prototype:\nwxSashLayoutWindow::wxSashLayoutWindow(wxSashLayoutWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCLIP_CHILDREN | wxSW_3D, const wxString & name = \"layoutWindow\")\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxSashLayoutWindow* parent=dynamic_cast< wxSashLayoutWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxSashLayoutWindow::wxSashLayoutWindow function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSashLayoutWindow::wxSashLayoutWindow function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : wxDefaultSize;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : wxCLIP_CHILDREN | wxSW_3D;
		wxString name(lua_tostring(L,6),lua_objlen(L,6));

		return new wxSashLayoutWindow(parent, id, pos, size, style, name);
	}

	// Overload binder for wxSashLayoutWindow::wxSashLayoutWindow
	static wxSashLayoutWindow* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxSashLayoutWindow, cannot match any of the overloads for function wxSashLayoutWindow:\n  wxSashLayoutWindow()\n  wxSashLayoutWindow(wxSashLayoutWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxSashLayoutWindow::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCLIP_CHILDREN | wxSW_3D, const wxString & name = "layoutWindow")
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCLIP_CHILDREN | wxSW_3D, const wxString & name = \"layoutWindow\") function, expected prototype:\nbool wxSashLayoutWindow::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCLIP_CHILDREN | wxSW_3D, const wxString & name = \"layoutWindow\")\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : wxID_ANY;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxSashLayoutWindow::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSashLayoutWindow::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxCLIP_CHILDREN | wxSW_3D;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		wxSashLayoutWindow* self=dynamic_cast< wxSashLayoutWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)");
		}
		bool lret = self->Create(parent, id, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutAlignment wxSashLayoutWindow::GetAlignment() const
	static int _bind_GetAlignment(lua_State *L) {
		if (!_lg_typecheck_GetAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLayoutAlignment wxSashLayoutWindow::GetAlignment() const function, expected prototype:\nwxLayoutAlignment wxSashLayoutWindow::GetAlignment() const\nClass arguments details:\n");
		}


		wxSashLayoutWindow* self=dynamic_cast< wxSashLayoutWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLayoutAlignment wxSashLayoutWindow::GetAlignment() const");
		}
		wxLayoutAlignment lret = self->GetAlignment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxLayoutOrientation wxSashLayoutWindow::GetOrientation() const
	static int _bind_GetOrientation(lua_State *L) {
		if (!_lg_typecheck_GetOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLayoutOrientation wxSashLayoutWindow::GetOrientation() const function, expected prototype:\nwxLayoutOrientation wxSashLayoutWindow::GetOrientation() const\nClass arguments details:\n");
		}


		wxSashLayoutWindow* self=dynamic_cast< wxSashLayoutWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLayoutOrientation wxSashLayoutWindow::GetOrientation() const");
		}
		wxLayoutOrientation lret = self->GetOrientation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxSashLayoutWindow::OnCalculateLayout(wxCalculateLayoutEvent & event)
	static int _bind_OnCalculateLayout(lua_State *L) {
		if (!_lg_typecheck_OnCalculateLayout(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::OnCalculateLayout(wxCalculateLayoutEvent & event) function, expected prototype:\nvoid wxSashLayoutWindow::OnCalculateLayout(wxCalculateLayoutEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxCalculateLayoutEvent* event_ptr=dynamic_cast< wxCalculateLayoutEvent* >(Luna< wxObject >::check(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxSashLayoutWindow::OnCalculateLayout function");
		}
		wxCalculateLayoutEvent & event=*event_ptr;

		wxSashLayoutWindow* self=dynamic_cast< wxSashLayoutWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::OnCalculateLayout(wxCalculateLayoutEvent &)");
		}
		self->OnCalculateLayout(event);

		return 0;
	}

	// void wxSashLayoutWindow::OnQueryLayoutInfo(wxQueryLayoutInfoEvent & event)
	static int _bind_OnQueryLayoutInfo(lua_State *L) {
		if (!_lg_typecheck_OnQueryLayoutInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::OnQueryLayoutInfo(wxQueryLayoutInfoEvent & event) function, expected prototype:\nvoid wxSashLayoutWindow::OnQueryLayoutInfo(wxQueryLayoutInfoEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxQueryLayoutInfoEvent* event_ptr=dynamic_cast< wxQueryLayoutInfoEvent* >(Luna< wxObject >::check(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxSashLayoutWindow::OnQueryLayoutInfo function");
		}
		wxQueryLayoutInfoEvent & event=*event_ptr;

		wxSashLayoutWindow* self=dynamic_cast< wxSashLayoutWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::OnQueryLayoutInfo(wxQueryLayoutInfoEvent &)");
		}
		self->OnQueryLayoutInfo(event);

		return 0;
	}

	// void wxSashLayoutWindow::SetAlignment(wxLayoutAlignment alignment)
	static int _bind_SetAlignment(lua_State *L) {
		if (!_lg_typecheck_SetAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::SetAlignment(wxLayoutAlignment alignment) function, expected prototype:\nvoid wxSashLayoutWindow::SetAlignment(wxLayoutAlignment alignment)\nClass arguments details:\n");
		}

		wxLayoutAlignment alignment=(wxLayoutAlignment)lua_tointeger(L,2);

		wxSashLayoutWindow* self=dynamic_cast< wxSashLayoutWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::SetAlignment(wxLayoutAlignment)");
		}
		self->SetAlignment(alignment);

		return 0;
	}

	// void wxSashLayoutWindow::SetDefaultSize(const wxSize & size)
	static int _bind_SetDefaultSize(lua_State *L) {
		if (!_lg_typecheck_SetDefaultSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::SetDefaultSize(const wxSize & size) function, expected prototype:\nvoid wxSashLayoutWindow::SetDefaultSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSashLayoutWindow::SetDefaultSize function");
		}
		const wxSize & size=*size_ptr;

		wxSashLayoutWindow* self=dynamic_cast< wxSashLayoutWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::SetDefaultSize(const wxSize &)");
		}
		self->SetDefaultSize(size);

		return 0;
	}

	// void wxSashLayoutWindow::SetOrientation(wxLayoutOrientation orientation)
	static int _bind_SetOrientation(lua_State *L) {
		if (!_lg_typecheck_SetOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::SetOrientation(wxLayoutOrientation orientation) function, expected prototype:\nvoid wxSashLayoutWindow::SetOrientation(wxLayoutOrientation orientation)\nClass arguments details:\n");
		}

		wxLayoutOrientation orientation=(wxLayoutOrientation)lua_tointeger(L,2);

		wxSashLayoutWindow* self=dynamic_cast< wxSashLayoutWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::SetOrientation(wxLayoutOrientation)");
		}
		self->SetOrientation(orientation);

		return 0;
	}


	// Operator binds:

};

wxSashLayoutWindow* LunaTraits< wxSashLayoutWindow >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSashLayoutWindow::_bind_ctor(L);
}

void LunaTraits< wxSashLayoutWindow >::_bind_dtor(wxSashLayoutWindow* obj) {
	delete obj;
}

const char LunaTraits< wxSashLayoutWindow >::className[] = "wxSashLayoutWindow";
const char LunaTraits< wxSashLayoutWindow >::fullName[] = "wxSashLayoutWindow";
const char LunaTraits< wxSashLayoutWindow >::moduleName[] = "wx";
const char* LunaTraits< wxSashLayoutWindow >::parents[] = {"wx.wxSashWindow", 0};
const int LunaTraits< wxSashLayoutWindow >::hash = 8713345;
const int LunaTraits< wxSashLayoutWindow >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxSashLayoutWindow >::methods[] = {
	{"Create", &luna_wrapper_wxSashLayoutWindow::_bind_Create},
	{"GetAlignment", &luna_wrapper_wxSashLayoutWindow::_bind_GetAlignment},
	{"GetOrientation", &luna_wrapper_wxSashLayoutWindow::_bind_GetOrientation},
	{"OnCalculateLayout", &luna_wrapper_wxSashLayoutWindow::_bind_OnCalculateLayout},
	{"OnQueryLayoutInfo", &luna_wrapper_wxSashLayoutWindow::_bind_OnQueryLayoutInfo},
	{"SetAlignment", &luna_wrapper_wxSashLayoutWindow::_bind_SetAlignment},
	{"SetDefaultSize", &luna_wrapper_wxSashLayoutWindow::_bind_SetDefaultSize},
	{"SetOrientation", &luna_wrapper_wxSashLayoutWindow::_bind_SetOrientation},
	{"__eq", &luna_wrapper_wxSashLayoutWindow::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxSashLayoutWindow >::converters[] = {
	{"wxObject", &luna_wrapper_wxSashLayoutWindow::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSashLayoutWindow >::enumValues[] = {
	{0,0}
};


