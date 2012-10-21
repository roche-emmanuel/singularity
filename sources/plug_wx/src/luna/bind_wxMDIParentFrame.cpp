#include <plug_common.h>

class luna_wrapper_wxMDIParentFrame {
public:
	typedef Luna< wxMDIParentFrame > luna_t;

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
		wxMDIParentFrame* ptr= dynamic_cast< wxMDIParentFrame* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMDIParentFrame >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_ActivateNext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ActivatePrevious(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ArrangeIcons(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Cascade(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>8 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetActiveChild(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetClientWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWindowMenu(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnCreateClient(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetWindowMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Tile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsTDI(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMDIParentFrame::wxMDIParentFrame()
	static wxMDIParentFrame* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMDIParentFrame::wxMDIParentFrame() function, expected prototype:\nwxMDIParentFrame::wxMDIParentFrame()\nClass arguments details:\n");
		}


		return new wxMDIParentFrame();
	}

	// wxMDIParentFrame::wxMDIParentFrame(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE | wxVSCROLL | wxHSCROLL, const wxString & name = wxFrameNameStr)
	static wxMDIParentFrame* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMDIParentFrame::wxMDIParentFrame(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE | wxVSCROLL | wxHSCROLL, const wxString & name = wxFrameNameStr) function, expected prototype:\nwxMDIParentFrame::wxMDIParentFrame(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE | wxVSCROLL | wxHSCROLL, const wxString & name = wxFrameNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		wxString title(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxMDIParentFrame::wxMDIParentFrame function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMDIParentFrame::wxMDIParentFrame function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxDEFAULT_FRAME_STYLE | wxVSCROLL | wxHSCROLL;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wxMDIParentFrame(parent, id, title, pos, size, style, name);
	}

	// Overload binder for wxMDIParentFrame::wxMDIParentFrame
	static wxMDIParentFrame* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxMDIParentFrame, cannot match any of the overloads for function wxMDIParentFrame:\n  wxMDIParentFrame()\n  wxMDIParentFrame(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// void wxMDIParentFrame::ActivateNext()
	static int _bind_ActivateNext(lua_State *L) {
		if (!_lg_typecheck_ActivateNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::ActivateNext() function, expected prototype:\nvoid wxMDIParentFrame::ActivateNext()\nClass arguments details:\n");
		}


		wxMDIParentFrame* self=dynamic_cast< wxMDIParentFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::ActivateNext()");
		}
		self->ActivateNext();

		return 0;
	}

	// void wxMDIParentFrame::ActivatePrevious()
	static int _bind_ActivatePrevious(lua_State *L) {
		if (!_lg_typecheck_ActivatePrevious(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::ActivatePrevious() function, expected prototype:\nvoid wxMDIParentFrame::ActivatePrevious()\nClass arguments details:\n");
		}


		wxMDIParentFrame* self=dynamic_cast< wxMDIParentFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::ActivatePrevious()");
		}
		self->ActivatePrevious();

		return 0;
	}

	// void wxMDIParentFrame::ArrangeIcons()
	static int _bind_ArrangeIcons(lua_State *L) {
		if (!_lg_typecheck_ArrangeIcons(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::ArrangeIcons() function, expected prototype:\nvoid wxMDIParentFrame::ArrangeIcons()\nClass arguments details:\n");
		}


		wxMDIParentFrame* self=dynamic_cast< wxMDIParentFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::ArrangeIcons()");
		}
		self->ArrangeIcons();

		return 0;
	}

	// void wxMDIParentFrame::Cascade()
	static int _bind_Cascade(lua_State *L) {
		if (!_lg_typecheck_Cascade(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::Cascade() function, expected prototype:\nvoid wxMDIParentFrame::Cascade()\nClass arguments details:\n");
		}


		wxMDIParentFrame* self=dynamic_cast< wxMDIParentFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::Cascade()");
		}
		self->Cascade();

		return 0;
	}

	// bool wxMDIParentFrame::Create(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE | wxVSCROLL | wxHSCROLL, const wxString & name = wxFrameNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::Create(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE | wxVSCROLL | wxHSCROLL, const wxString & name = wxFrameNameStr) function, expected prototype:\nbool wxMDIParentFrame::Create(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE | wxVSCROLL | wxHSCROLL, const wxString & name = wxFrameNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString title(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxMDIParentFrame::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMDIParentFrame::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxDEFAULT_FRAME_STYLE | wxVSCROLL | wxHSCROLL;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		wxMDIParentFrame* self=dynamic_cast< wxMDIParentFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &)");
		}
		bool lret = self->Create(parent, id, title, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxMDIChildFrame * wxMDIParentFrame::GetActiveChild() const
	static int _bind_GetActiveChild(lua_State *L) {
		if (!_lg_typecheck_GetActiveChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMDIChildFrame * wxMDIParentFrame::GetActiveChild() const function, expected prototype:\nwxMDIChildFrame * wxMDIParentFrame::GetActiveChild() const\nClass arguments details:\n");
		}


		wxMDIParentFrame* self=dynamic_cast< wxMDIParentFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxMDIChildFrame * wxMDIParentFrame::GetActiveChild() const");
		}
		wxMDIChildFrame * lret = self->GetActiveChild();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMDIChildFrame >::push(L,lret,false);

		return 1;
	}

	// wxMDIClientWindowBase * wxMDIParentFrame::GetClientWindow() const
	static int _bind_GetClientWindow(lua_State *L) {
		if (!_lg_typecheck_GetClientWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMDIClientWindowBase * wxMDIParentFrame::GetClientWindow() const function, expected prototype:\nwxMDIClientWindowBase * wxMDIParentFrame::GetClientWindow() const\nClass arguments details:\n");
		}


		wxMDIParentFrame* self=dynamic_cast< wxMDIParentFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxMDIClientWindowBase * wxMDIParentFrame::GetClientWindow() const");
		}
		wxMDIClientWindowBase * lret = self->GetClientWindow();
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'wxMDIClientWindowBase *'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// wxMenu * wxMDIParentFrame::GetWindowMenu() const
	static int _bind_GetWindowMenu(lua_State *L) {
		if (!_lg_typecheck_GetWindowMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMenu * wxMDIParentFrame::GetWindowMenu() const function, expected prototype:\nwxMenu * wxMDIParentFrame::GetWindowMenu() const\nClass arguments details:\n");
		}


		wxMDIParentFrame* self=dynamic_cast< wxMDIParentFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxMenu * wxMDIParentFrame::GetWindowMenu() const");
		}
		wxMenu * lret = self->GetWindowMenu();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenu >::push(L,lret,false);

		return 1;
	}

	// wxMDIClientWindow * wxMDIParentFrame::OnCreateClient()
	static int _bind_OnCreateClient(lua_State *L) {
		if (!_lg_typecheck_OnCreateClient(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMDIClientWindow * wxMDIParentFrame::OnCreateClient() function, expected prototype:\nwxMDIClientWindow * wxMDIParentFrame::OnCreateClient()\nClass arguments details:\n");
		}


		wxMDIParentFrame* self=dynamic_cast< wxMDIParentFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxMDIClientWindow * wxMDIParentFrame::OnCreateClient()");
		}
		wxMDIClientWindow * lret = self->OnCreateClient();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMDIClientWindow >::push(L,lret,false);

		return 1;
	}

	// void wxMDIParentFrame::SetWindowMenu(wxMenu * menu)
	static int _bind_SetWindowMenu(lua_State *L) {
		if (!_lg_typecheck_SetWindowMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::SetWindowMenu(wxMenu * menu) function, expected prototype:\nvoid wxMDIParentFrame::SetWindowMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxMenu* menu=dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,2));

		wxMDIParentFrame* self=dynamic_cast< wxMDIParentFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::SetWindowMenu(wxMenu *)");
		}
		self->SetWindowMenu(menu);

		return 0;
	}

	// void wxMDIParentFrame::Tile(wxOrientation orient = wxHORIZONTAL)
	static int _bind_Tile(lua_State *L) {
		if (!_lg_typecheck_Tile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::Tile(wxOrientation orient = wxHORIZONTAL) function, expected prototype:\nvoid wxMDIParentFrame::Tile(wxOrientation orient = wxHORIZONTAL)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxOrientation orient=luatop>1 ? (wxOrientation)lua_tointeger(L,2) : wxHORIZONTAL;

		wxMDIParentFrame* self=dynamic_cast< wxMDIParentFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::Tile(wxOrientation)");
		}
		self->Tile(orient);

		return 0;
	}

	// static bool wxMDIParentFrame::IsTDI()
	static int _bind_IsTDI(lua_State *L) {
		if (!_lg_typecheck_IsTDI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool wxMDIParentFrame::IsTDI() function, expected prototype:\nstatic bool wxMDIParentFrame::IsTDI()\nClass arguments details:\n");
		}


		bool lret = wxMDIParentFrame::IsTDI();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxMDIParentFrame* LunaTraits< wxMDIParentFrame >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMDIParentFrame::_bind_ctor(L);
}

void LunaTraits< wxMDIParentFrame >::_bind_dtor(wxMDIParentFrame* obj) {
	delete obj;
}

const char LunaTraits< wxMDIParentFrame >::className[] = "wxMDIParentFrame";
const char LunaTraits< wxMDIParentFrame >::fullName[] = "wxMDIParentFrame";
const char LunaTraits< wxMDIParentFrame >::moduleName[] = "wx";
const char* LunaTraits< wxMDIParentFrame >::parents[] = {"wx.wxFrame", 0};
const int LunaTraits< wxMDIParentFrame >::hash = 94157277;
const int LunaTraits< wxMDIParentFrame >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxMDIParentFrame >::methods[] = {
	{"ActivateNext", &luna_wrapper_wxMDIParentFrame::_bind_ActivateNext},
	{"ActivatePrevious", &luna_wrapper_wxMDIParentFrame::_bind_ActivatePrevious},
	{"ArrangeIcons", &luna_wrapper_wxMDIParentFrame::_bind_ArrangeIcons},
	{"Cascade", &luna_wrapper_wxMDIParentFrame::_bind_Cascade},
	{"Create", &luna_wrapper_wxMDIParentFrame::_bind_Create},
	{"GetActiveChild", &luna_wrapper_wxMDIParentFrame::_bind_GetActiveChild},
	{"GetClientWindow", &luna_wrapper_wxMDIParentFrame::_bind_GetClientWindow},
	{"GetWindowMenu", &luna_wrapper_wxMDIParentFrame::_bind_GetWindowMenu},
	{"OnCreateClient", &luna_wrapper_wxMDIParentFrame::_bind_OnCreateClient},
	{"SetWindowMenu", &luna_wrapper_wxMDIParentFrame::_bind_SetWindowMenu},
	{"Tile", &luna_wrapper_wxMDIParentFrame::_bind_Tile},
	{"IsTDI", &luna_wrapper_wxMDIParentFrame::_bind_IsTDI},
	{"__eq", &luna_wrapper_wxMDIParentFrame::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxMDIParentFrame >::converters[] = {
	{"wxObject", &luna_wrapper_wxMDIParentFrame::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMDIParentFrame >::enumValues[] = {
	{0,0}
};


