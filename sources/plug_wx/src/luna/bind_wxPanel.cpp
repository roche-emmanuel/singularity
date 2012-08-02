#include <plug_common.h>

class luna_wrapper_wxPanel {
public:
	typedef Luna< wxPanel > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxPanel* ptr= dynamic_cast< wxPanel* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPanel >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AcceptsFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

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

	inline static bool _lg_typecheck_InitDialog(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Layout(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnSysColourChanged(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFocusIgnoringChildren(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxPanel::wxPanel()
	static wxPanel* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPanel::wxPanel() function, expected prototype:\nwxPanel::wxPanel()\nClass arguments details:\n");
		}


		return new wxPanel();
	}

	// wxPanel::wxPanel(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTAB_TRAVERSAL, const wxString & name = wxPanelNameStr)
	static wxPanel* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPanel::wxPanel(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTAB_TRAVERSAL, const wxString & name = wxPanelNameStr) function, expected prototype:\nwxPanel::wxPanel(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTAB_TRAVERSAL, const wxString & name = wxPanelNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : wxID_ANY;
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxPanel::wxPanel function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPanel::wxPanel function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : wxDefaultSize;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : wxTAB_TRAVERSAL;
		wxString name(lua_tostring(L,6),lua_objlen(L,6));

		return new wxPanel(parent, id, pos, size, style, name);
	}

	// Overload binder for wxPanel::wxPanel
	static wxPanel* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxPanel, cannot match any of the overloads for function wxPanel:\n  wxPanel()\n  wxPanel(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxPanel::AcceptsFocus() const
	static int _bind_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_AcceptsFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPanel::AcceptsFocus() const function, expected prototype:\nbool wxPanel::AcceptsFocus() const\nClass arguments details:\n");
		}


		wxPanel* self=dynamic_cast< wxPanel* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPanel::AcceptsFocus() const");
		}
		bool lret = self->AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPanel::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTAB_TRAVERSAL, const wxString & name = wxPanelNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPanel::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTAB_TRAVERSAL, const wxString & name = wxPanelNameStr) function, expected prototype:\nbool wxPanel::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTAB_TRAVERSAL, const wxString & name = wxPanelNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : wxID_ANY;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxPanel::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPanel::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxTAB_TRAVERSAL;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		wxPanel* self=dynamic_cast< wxPanel* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPanel::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)");
		}
		bool lret = self->Create(parent, id, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPanel::InitDialog()
	static int _bind_InitDialog(lua_State *L) {
		if (!_lg_typecheck_InitDialog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPanel::InitDialog() function, expected prototype:\nvoid wxPanel::InitDialog()\nClass arguments details:\n");
		}


		wxPanel* self=dynamic_cast< wxPanel* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPanel::InitDialog()");
		}
		self->InitDialog();

		return 0;
	}

	// bool wxPanel::Layout()
	static int _bind_Layout(lua_State *L) {
		if (!_lg_typecheck_Layout(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPanel::Layout() function, expected prototype:\nbool wxPanel::Layout()\nClass arguments details:\n");
		}


		wxPanel* self=dynamic_cast< wxPanel* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPanel::Layout()");
		}
		bool lret = self->Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPanel::OnSysColourChanged(wxSysColourChangedEvent & event)
	static int _bind_OnSysColourChanged(lua_State *L) {
		if (!_lg_typecheck_OnSysColourChanged(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPanel::OnSysColourChanged(wxSysColourChangedEvent & event) function, expected prototype:\nvoid wxPanel::OnSysColourChanged(wxSysColourChangedEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxSysColourChangedEvent* event_ptr=dynamic_cast< wxSysColourChangedEvent* >(Luna< wxObject >::check(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxPanel::OnSysColourChanged function");
		}
		wxSysColourChangedEvent & event=*event_ptr;

		wxPanel* self=dynamic_cast< wxPanel* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPanel::OnSysColourChanged(wxSysColourChangedEvent &)");
		}
		self->OnSysColourChanged(event);

		return 0;
	}

	// void wxPanel::SetFocus()
	static int _bind_SetFocus(lua_State *L) {
		if (!_lg_typecheck_SetFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPanel::SetFocus() function, expected prototype:\nvoid wxPanel::SetFocus()\nClass arguments details:\n");
		}


		wxPanel* self=dynamic_cast< wxPanel* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPanel::SetFocus()");
		}
		self->SetFocus();

		return 0;
	}

	// void wxPanel::SetFocusIgnoringChildren()
	static int _bind_SetFocusIgnoringChildren(lua_State *L) {
		if (!_lg_typecheck_SetFocusIgnoringChildren(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPanel::SetFocusIgnoringChildren() function, expected prototype:\nvoid wxPanel::SetFocusIgnoringChildren()\nClass arguments details:\n");
		}


		wxPanel* self=dynamic_cast< wxPanel* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPanel::SetFocusIgnoringChildren()");
		}
		self->SetFocusIgnoringChildren();

		return 0;
	}


	// Operator binds:

};

wxPanel* LunaTraits< wxPanel >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPanel::_bind_ctor(L);
}

void LunaTraits< wxPanel >::_bind_dtor(wxPanel* obj) {
	delete obj;
}

const char LunaTraits< wxPanel >::className[] = "wxPanel";
const char LunaTraits< wxPanel >::fullName[] = "wxPanel";
const char LunaTraits< wxPanel >::moduleName[] = "wx";
const char* LunaTraits< wxPanel >::parents[] = {"wx.wxWindow", 0};
const int LunaTraits< wxPanel >::hash = 25310924;
const int LunaTraits< wxPanel >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxPanel >::methods[] = {
	{"AcceptsFocus", &luna_wrapper_wxPanel::_bind_AcceptsFocus},
	{"Create", &luna_wrapper_wxPanel::_bind_Create},
	{"InitDialog", &luna_wrapper_wxPanel::_bind_InitDialog},
	{"Layout", &luna_wrapper_wxPanel::_bind_Layout},
	{"OnSysColourChanged", &luna_wrapper_wxPanel::_bind_OnSysColourChanged},
	{"SetFocus", &luna_wrapper_wxPanel::_bind_SetFocus},
	{"SetFocusIgnoringChildren", &luna_wrapper_wxPanel::_bind_SetFocusIgnoringChildren},
	{0,0}
};

luna_ConverterType LunaTraits< wxPanel >::converters[] = {
	{"wxObject", &luna_wrapper_wxPanel::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPanel >::enumValues[] = {
	{0,0}
};


