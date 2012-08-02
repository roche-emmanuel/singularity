#include <plug_common.h>

class luna_wrapper_wxFrame {
public:
	typedef Luna< wxFrame > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxFrame* ptr= dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFrame >::push(L,ptr,false);
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
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Centre(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	inline static bool _lg_typecheck_CreateStatusBar(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CreateToolBar(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetClientAreaOrigin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMenuBar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStatusBar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStatusBarPane(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetToolBar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnCreateStatusBar(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnCreateToolBar(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ProcessCommand(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMenuBar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStatusBar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStatusBarPane(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStatusText(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStatusWidths(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToolBar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PushStatusText(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PopStatusText(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFrame::wxFrame()
	static wxFrame* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFrame::wxFrame() function, expected prototype:\nwxFrame::wxFrame()\nClass arguments details:\n");
		}


		return new wxFrame();
	}

	// wxFrame::wxFrame(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)
	static wxFrame* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFrame::wxFrame(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr) function, expected prototype:\nwxFrame::wxFrame(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		wxString title(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxFrame::wxFrame function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxFrame::wxFrame function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxDEFAULT_FRAME_STYLE;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wxFrame(parent, id, title, pos, size, style, name);
	}

	// Overload binder for wxFrame::wxFrame
	static wxFrame* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxFrame, cannot match any of the overloads for function wxFrame:\n  wxFrame()\n  wxFrame(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// void wxFrame::Centre(int direction = wxBOTH)
	static int _bind_Centre(lua_State *L) {
		if (!_lg_typecheck_Centre(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFrame::Centre(int direction = wxBOTH) function, expected prototype:\nvoid wxFrame::Centre(int direction = wxBOTH)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int direction=luatop>1 ? (int)lua_tointeger(L,2) : wxBOTH;

		wxFrame* self=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFrame::Centre(int)");
		}
		self->Centre(direction);

		return 0;
	}

	// bool wxFrame::Create(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFrame::Create(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr) function, expected prototype:\nbool wxFrame::Create(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString title(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxFrame::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxFrame::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxDEFAULT_FRAME_STYLE;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		wxFrame* self=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFrame::Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &)");
		}
		bool lret = self->Create(parent, id, title, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxStatusBar * wxFrame::CreateStatusBar(int number = 1, long style = wxSTB_DEFAULT_STYLE, int id = 0, const wxString & name = wxStatusLineNameStr)
	static int _bind_CreateStatusBar(lua_State *L) {
		if (!_lg_typecheck_CreateStatusBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStatusBar * wxFrame::CreateStatusBar(int number = 1, long style = wxSTB_DEFAULT_STYLE, int id = 0, const wxString & name = wxStatusLineNameStr) function, expected prototype:\nwxStatusBar * wxFrame::CreateStatusBar(int number = 1, long style = wxSTB_DEFAULT_STYLE, int id = 0, const wxString & name = wxStatusLineNameStr)\nClass arguments details:\narg 4 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		int number=luatop>1 ? (int)lua_tointeger(L,2) : 1;
		long style=luatop>2 ? (long)lua_tointeger(L,3) : wxSTB_DEFAULT_STYLE;
		int id=luatop>3 ? (int)lua_tointeger(L,4) : 0;
		wxString name(lua_tostring(L,5),lua_objlen(L,5));

		wxFrame* self=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxStatusBar * wxFrame::CreateStatusBar(int, long, int, const wxString &)");
		}
		wxStatusBar * lret = self->CreateStatusBar(number, style, id, name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStatusBar >::push(L,lret,false);

		return 1;
	}

	// wxToolBar * wxFrame::CreateToolBar(long style = wxBORDER_NONE |wxTB_HORIZONTAL, int id = wxID_ANY, const wxString & name = wxToolBarNameStr)
	static int _bind_CreateToolBar(lua_State *L) {
		if (!_lg_typecheck_CreateToolBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBar * wxFrame::CreateToolBar(long style = wxBORDER_NONE |wxTB_HORIZONTAL, int id = wxID_ANY, const wxString & name = wxToolBarNameStr) function, expected prototype:\nwxToolBar * wxFrame::CreateToolBar(long style = wxBORDER_NONE |wxTB_HORIZONTAL, int id = wxID_ANY, const wxString & name = wxToolBarNameStr)\nClass arguments details:\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		long style=luatop>1 ? (long)lua_tointeger(L,2) : wxBORDER_NONE |wxTB_HORIZONTAL;
		int id=luatop>2 ? (int)lua_tointeger(L,3) : wxID_ANY;
		wxString name(lua_tostring(L,4),lua_objlen(L,4));

		wxFrame* self=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBar * wxFrame::CreateToolBar(long, int, const wxString &)");
		}
		wxToolBar * lret = self->CreateToolBar(style, id, name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBar >::push(L,lret,false);

		return 1;
	}

	// wxPoint wxFrame::GetClientAreaOrigin() const
	static int _bind_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_GetClientAreaOrigin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxFrame::GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxFrame::GetClientAreaOrigin() const\nClass arguments details:\n");
		}


		wxFrame* self=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxFrame::GetClientAreaOrigin() const");
		}
		wxPoint stack_lret = self->GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxMenuBar * wxFrame::GetMenuBar() const
	static int _bind_GetMenuBar(lua_State *L) {
		if (!_lg_typecheck_GetMenuBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMenuBar * wxFrame::GetMenuBar() const function, expected prototype:\nwxMenuBar * wxFrame::GetMenuBar() const\nClass arguments details:\n");
		}


		wxFrame* self=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxMenuBar * wxFrame::GetMenuBar() const");
		}
		wxMenuBar * lret = self->GetMenuBar();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuBar >::push(L,lret,false);

		return 1;
	}

	// wxStatusBar * wxFrame::GetStatusBar() const
	static int _bind_GetStatusBar(lua_State *L) {
		if (!_lg_typecheck_GetStatusBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStatusBar * wxFrame::GetStatusBar() const function, expected prototype:\nwxStatusBar * wxFrame::GetStatusBar() const\nClass arguments details:\n");
		}


		wxFrame* self=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxStatusBar * wxFrame::GetStatusBar() const");
		}
		wxStatusBar * lret = self->GetStatusBar();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStatusBar >::push(L,lret,false);

		return 1;
	}

	// int wxFrame::GetStatusBarPane() const
	static int _bind_GetStatusBarPane(lua_State *L) {
		if (!_lg_typecheck_GetStatusBarPane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxFrame::GetStatusBarPane() const function, expected prototype:\nint wxFrame::GetStatusBarPane() const\nClass arguments details:\n");
		}


		wxFrame* self=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxFrame::GetStatusBarPane() const");
		}
		int lret = self->GetStatusBarPane();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxToolBar * wxFrame::GetToolBar() const
	static int _bind_GetToolBar(lua_State *L) {
		if (!_lg_typecheck_GetToolBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBar * wxFrame::GetToolBar() const function, expected prototype:\nwxToolBar * wxFrame::GetToolBar() const\nClass arguments details:\n");
		}


		wxFrame* self=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBar * wxFrame::GetToolBar() const");
		}
		wxToolBar * lret = self->GetToolBar();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBar >::push(L,lret,false);

		return 1;
	}

	// wxStatusBar * wxFrame::OnCreateStatusBar(int number, long style, int id, const wxString & name)
	static int _bind_OnCreateStatusBar(lua_State *L) {
		if (!_lg_typecheck_OnCreateStatusBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStatusBar * wxFrame::OnCreateStatusBar(int number, long style, int id, const wxString & name) function, expected prototype:\nwxStatusBar * wxFrame::OnCreateStatusBar(int number, long style, int id, const wxString & name)\nClass arguments details:\narg 4 ID = 88196105\n");
		}

		int number=(int)lua_tointeger(L,2);
		long style=(long)lua_tointeger(L,3);
		int id=(int)lua_tointeger(L,4);
		wxString name(lua_tostring(L,5),lua_objlen(L,5));

		wxFrame* self=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxStatusBar * wxFrame::OnCreateStatusBar(int, long, int, const wxString &)");
		}
		wxStatusBar * lret = self->OnCreateStatusBar(number, style, id, name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStatusBar >::push(L,lret,false);

		return 1;
	}

	// wxToolBar * wxFrame::OnCreateToolBar(long style, int id, const wxString & name)
	static int _bind_OnCreateToolBar(lua_State *L) {
		if (!_lg_typecheck_OnCreateToolBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBar * wxFrame::OnCreateToolBar(long style, int id, const wxString & name) function, expected prototype:\nwxToolBar * wxFrame::OnCreateToolBar(long style, int id, const wxString & name)\nClass arguments details:\narg 3 ID = 88196105\n");
		}

		long style=(long)lua_tointeger(L,2);
		int id=(int)lua_tointeger(L,3);
		wxString name(lua_tostring(L,4),lua_objlen(L,4));

		wxFrame* self=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBar * wxFrame::OnCreateToolBar(long, int, const wxString &)");
		}
		wxToolBar * lret = self->OnCreateToolBar(style, id, name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBar >::push(L,lret,false);

		return 1;
	}

	// bool wxFrame::ProcessCommand(int id)
	static int _bind_ProcessCommand(lua_State *L) {
		if (!_lg_typecheck_ProcessCommand(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFrame::ProcessCommand(int id) function, expected prototype:\nbool wxFrame::ProcessCommand(int id)\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);

		wxFrame* self=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFrame::ProcessCommand(int)");
		}
		bool lret = self->ProcessCommand(id);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFrame::SetMenuBar(wxMenuBar * menuBar)
	static int _bind_SetMenuBar(lua_State *L) {
		if (!_lg_typecheck_SetMenuBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFrame::SetMenuBar(wxMenuBar * menuBar) function, expected prototype:\nvoid wxFrame::SetMenuBar(wxMenuBar * menuBar)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxMenuBar* menuBar=dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,2));

		wxFrame* self=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFrame::SetMenuBar(wxMenuBar *)");
		}
		self->SetMenuBar(menuBar);

		return 0;
	}

	// void wxFrame::SetStatusBar(wxStatusBar * statusBar)
	static int _bind_SetStatusBar(lua_State *L) {
		if (!_lg_typecheck_SetStatusBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFrame::SetStatusBar(wxStatusBar * statusBar) function, expected prototype:\nvoid wxFrame::SetStatusBar(wxStatusBar * statusBar)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxStatusBar* statusBar=dynamic_cast< wxStatusBar* >(Luna< wxObject >::check(L,2));

		wxFrame* self=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFrame::SetStatusBar(wxStatusBar *)");
		}
		self->SetStatusBar(statusBar);

		return 0;
	}

	// void wxFrame::SetStatusBarPane(int n)
	static int _bind_SetStatusBarPane(lua_State *L) {
		if (!_lg_typecheck_SetStatusBarPane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFrame::SetStatusBarPane(int n) function, expected prototype:\nvoid wxFrame::SetStatusBarPane(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxFrame* self=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFrame::SetStatusBarPane(int)");
		}
		self->SetStatusBarPane(n);

		return 0;
	}

	// void wxFrame::SetStatusText(const wxString & text, int number = 0)
	static int _bind_SetStatusText(lua_State *L) {
		if (!_lg_typecheck_SetStatusText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFrame::SetStatusText(const wxString & text, int number = 0) function, expected prototype:\nvoid wxFrame::SetStatusText(const wxString & text, int number = 0)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		int number=luatop>2 ? (int)lua_tointeger(L,3) : 0;

		wxFrame* self=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFrame::SetStatusText(const wxString &, int)");
		}
		self->SetStatusText(text, number);

		return 0;
	}

	// void wxFrame::SetStatusWidths(int n, const int * widths_field)
	static int _bind_SetStatusWidths(lua_State *L) {
		if (!_lg_typecheck_SetStatusWidths(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFrame::SetStatusWidths(int n, const int * widths_field) function, expected prototype:\nvoid wxFrame::SetStatusWidths(int n, const int * widths_field)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);
		int widths_field=(int)lua_tointeger(L,3);

		wxFrame* self=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFrame::SetStatusWidths(int, const int *)");
		}
		self->SetStatusWidths(n, &widths_field);

		return 0;
	}

	// void wxFrame::SetToolBar(wxToolBar * toolBar)
	static int _bind_SetToolBar(lua_State *L) {
		if (!_lg_typecheck_SetToolBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFrame::SetToolBar(wxToolBar * toolBar) function, expected prototype:\nvoid wxFrame::SetToolBar(wxToolBar * toolBar)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxToolBar* toolBar=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,2));

		wxFrame* self=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFrame::SetToolBar(wxToolBar *)");
		}
		self->SetToolBar(toolBar);

		return 0;
	}

	// void wxFrame::PushStatusText(const wxString & text, int number = 0)
	static int _bind_PushStatusText(lua_State *L) {
		if (!_lg_typecheck_PushStatusText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFrame::PushStatusText(const wxString & text, int number = 0) function, expected prototype:\nvoid wxFrame::PushStatusText(const wxString & text, int number = 0)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		int number=luatop>2 ? (int)lua_tointeger(L,3) : 0;

		wxFrame* self=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFrame::PushStatusText(const wxString &, int)");
		}
		self->PushStatusText(text, number);

		return 0;
	}

	// void wxFrame::PopStatusText(int number = 0)
	static int _bind_PopStatusText(lua_State *L) {
		if (!_lg_typecheck_PopStatusText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFrame::PopStatusText(int number = 0) function, expected prototype:\nvoid wxFrame::PopStatusText(int number = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int number=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		wxFrame* self=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFrame::PopStatusText(int)");
		}
		self->PopStatusText(number);

		return 0;
	}


	// Operator binds:

};

wxFrame* LunaTraits< wxFrame >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFrame::_bind_ctor(L);
}

void LunaTraits< wxFrame >::_bind_dtor(wxFrame* obj) {
	delete obj;
}

const char LunaTraits< wxFrame >::className[] = "wxFrame";
const char LunaTraits< wxFrame >::fullName[] = "wxFrame";
const char LunaTraits< wxFrame >::moduleName[] = "wx";
const char* LunaTraits< wxFrame >::parents[] = {"wx.wxTopLevelWindow", 0};
const int LunaTraits< wxFrame >::hash = 16569909;
const int LunaTraits< wxFrame >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxFrame >::methods[] = {
	{"Centre", &luna_wrapper_wxFrame::_bind_Centre},
	{"Create", &luna_wrapper_wxFrame::_bind_Create},
	{"CreateStatusBar", &luna_wrapper_wxFrame::_bind_CreateStatusBar},
	{"CreateToolBar", &luna_wrapper_wxFrame::_bind_CreateToolBar},
	{"GetClientAreaOrigin", &luna_wrapper_wxFrame::_bind_GetClientAreaOrigin},
	{"GetMenuBar", &luna_wrapper_wxFrame::_bind_GetMenuBar},
	{"GetStatusBar", &luna_wrapper_wxFrame::_bind_GetStatusBar},
	{"GetStatusBarPane", &luna_wrapper_wxFrame::_bind_GetStatusBarPane},
	{"GetToolBar", &luna_wrapper_wxFrame::_bind_GetToolBar},
	{"OnCreateStatusBar", &luna_wrapper_wxFrame::_bind_OnCreateStatusBar},
	{"OnCreateToolBar", &luna_wrapper_wxFrame::_bind_OnCreateToolBar},
	{"ProcessCommand", &luna_wrapper_wxFrame::_bind_ProcessCommand},
	{"SetMenuBar", &luna_wrapper_wxFrame::_bind_SetMenuBar},
	{"SetStatusBar", &luna_wrapper_wxFrame::_bind_SetStatusBar},
	{"SetStatusBarPane", &luna_wrapper_wxFrame::_bind_SetStatusBarPane},
	{"SetStatusText", &luna_wrapper_wxFrame::_bind_SetStatusText},
	{"SetStatusWidths", &luna_wrapper_wxFrame::_bind_SetStatusWidths},
	{"SetToolBar", &luna_wrapper_wxFrame::_bind_SetToolBar},
	{"PushStatusText", &luna_wrapper_wxFrame::_bind_PushStatusText},
	{"PopStatusText", &luna_wrapper_wxFrame::_bind_PopStatusText},
	{0,0}
};

luna_ConverterType LunaTraits< wxFrame >::converters[] = {
	{"wxObject", &luna_wrapper_wxFrame::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFrame >::enumValues[] = {
	{0,0}
};


