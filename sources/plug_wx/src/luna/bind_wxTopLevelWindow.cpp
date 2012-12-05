#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTopLevelWindow.h>

class luna_wrapper_wxTopLevelWindow {
public:
	typedef Luna< wxTopLevelWindow > luna_t;

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
		wxTopLevelWindow* ptr= dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTopLevelWindow >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>8 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>4 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,5))) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>5 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,6))) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}


	// Function checkers:
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

	inline static bool _lg_typecheck_CanSetTransparent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CenterOnScreen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CentreOnScreen(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnableCloseButton(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDefaultItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetIcon(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetIcons(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTitle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Iconize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsActive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsAlwaysMaximized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsFullScreen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsIconized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsMaximized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Layout(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Maximize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MSWGetSystemMenu(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RequestUserAttention(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDefaultItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTmpDefaultItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTmpDefaultItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetIcon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetIcons(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMaxSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMinSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSizeHints_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSizeHints_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( luatop>2 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>3 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTitle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTransparent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShouldPreventAppExit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OSXSetModified(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OSXIsModified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ShowFullScreen(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDefaultSize(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTopLevelWindow::wxTopLevelWindow()
	static wxTopLevelWindow* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTopLevelWindow::wxTopLevelWindow() function, expected prototype:\nwxTopLevelWindow::wxTopLevelWindow()\nClass arguments details:\n");
		}


		return new wxTopLevelWindow();
	}

	// wxTopLevelWindow::wxTopLevelWindow(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)
	static wxTopLevelWindow* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTopLevelWindow::wxTopLevelWindow(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr) function, expected prototype:\nwxTopLevelWindow::wxTopLevelWindow(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		wxString title(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxTopLevelWindow::wxTopLevelWindow function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTopLevelWindow::wxTopLevelWindow function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxDEFAULT_FRAME_STYLE;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wxTopLevelWindow(parent, id, title, pos, size, style, name);
	}

	// wxTopLevelWindow::wxTopLevelWindow(lua_Table * data)
	static wxTopLevelWindow* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTopLevelWindow::wxTopLevelWindow(lua_Table * data) function, expected prototype:\nwxTopLevelWindow::wxTopLevelWindow(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxTopLevelWindow(L,NULL);
	}

	// wxTopLevelWindow::wxTopLevelWindow(lua_Table * data, wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)
	static wxTopLevelWindow* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTopLevelWindow::wxTopLevelWindow(lua_Table * data, wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr) function, expected prototype:\nwxTopLevelWindow::wxTopLevelWindow(lua_Table * data, wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 88196105\narg 5 ID = 25723480\narg 6 ID = 20268751\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString title(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxTopLevelWindow::wxTopLevelWindow function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTopLevelWindow::wxTopLevelWindow function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxDEFAULT_FRAME_STYLE;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		return new wrapper_wxTopLevelWindow(L,NULL, parent, id, title, pos, size, style, name);
	}

	// Overload binder for wxTopLevelWindow::wxTopLevelWindow
	static wxTopLevelWindow* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxTopLevelWindow, cannot match any of the overloads for function wxTopLevelWindow:\n  wxTopLevelWindow()\n  wxTopLevelWindow(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &)\n  wxTopLevelWindow(lua_Table *)\n  wxTopLevelWindow(lua_Table *, wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxTopLevelWindow::Create(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTopLevelWindow::Create(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr) function, expected prototype:\nbool wxTopLevelWindow::Create(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString & name = wxFrameNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString title(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxTopLevelWindow::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTopLevelWindow::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxDEFAULT_FRAME_STYLE;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTopLevelWindow::Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &)");
		}
		bool lret = self->Create(parent, id, title, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTopLevelWindow::CanSetTransparent()
	static int _bind_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_CanSetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTopLevelWindow::CanSetTransparent() function, expected prototype:\nbool wxTopLevelWindow::CanSetTransparent()\nClass arguments details:\n");
		}


		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTopLevelWindow::CanSetTransparent()");
		}
		bool lret = self->CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTopLevelWindow::CenterOnScreen(int direction)
	static int _bind_CenterOnScreen(lua_State *L) {
		if (!_lg_typecheck_CenterOnScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTopLevelWindow::CenterOnScreen(int direction) function, expected prototype:\nvoid wxTopLevelWindow::CenterOnScreen(int direction)\nClass arguments details:\n");
		}

		int direction=(int)lua_tointeger(L,2);

		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTopLevelWindow::CenterOnScreen(int)");
		}
		self->CenterOnScreen(direction);

		return 0;
	}

	// void wxTopLevelWindow::CentreOnScreen(int direction = ::wxBOTH)
	static int _bind_CentreOnScreen(lua_State *L) {
		if (!_lg_typecheck_CentreOnScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTopLevelWindow::CentreOnScreen(int direction = ::wxBOTH) function, expected prototype:\nvoid wxTopLevelWindow::CentreOnScreen(int direction = ::wxBOTH)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int direction=luatop>1 ? (int)lua_tointeger(L,2) : ::wxBOTH;

		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTopLevelWindow::CentreOnScreen(int)");
		}
		self->CentreOnScreen(direction);

		return 0;
	}

	// bool wxTopLevelWindow::EnableCloseButton(bool enable = true)
	static int _bind_EnableCloseButton(lua_State *L) {
		if (!_lg_typecheck_EnableCloseButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTopLevelWindow::EnableCloseButton(bool enable = true) function, expected prototype:\nbool wxTopLevelWindow::EnableCloseButton(bool enable = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTopLevelWindow::EnableCloseButton(bool)");
		}
		bool lret = self->EnableCloseButton(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxWindow * wxTopLevelWindow::GetDefaultItem() const
	static int _bind_GetDefaultItem(lua_State *L) {
		if (!_lg_typecheck_GetDefaultItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxTopLevelWindow::GetDefaultItem() const function, expected prototype:\nwxWindow * wxTopLevelWindow::GetDefaultItem() const\nClass arguments details:\n");
		}


		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxTopLevelWindow::GetDefaultItem() const");
		}
		wxWindow * lret = self->GetDefaultItem();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxIcon wxTopLevelWindow::GetIcon() const
	static int _bind_GetIcon(lua_State *L) {
		if (!_lg_typecheck_GetIcon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIcon wxTopLevelWindow::GetIcon() const function, expected prototype:\nwxIcon wxTopLevelWindow::GetIcon() const\nClass arguments details:\n");
		}


		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxIcon wxTopLevelWindow::GetIcon() const");
		}
		wxIcon stack_lret = self->GetIcon();
		wxIcon* lret = new wxIcon(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIcon >::push(L,lret,true);

		return 1;
	}

	// const wxIconBundle & wxTopLevelWindow::GetIcons() const
	static int _bind_GetIcons(lua_State *L) {
		if (!_lg_typecheck_GetIcons(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxIconBundle & wxTopLevelWindow::GetIcons() const function, expected prototype:\nconst wxIconBundle & wxTopLevelWindow::GetIcons() const\nClass arguments details:\n");
		}


		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxIconBundle & wxTopLevelWindow::GetIcons() const");
		}
		const wxIconBundle* lret = &self->GetIcons();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIconBundle >::push(L,lret,false);

		return 1;
	}

	// wxString wxTopLevelWindow::GetTitle() const
	static int _bind_GetTitle(lua_State *L) {
		if (!_lg_typecheck_GetTitle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxTopLevelWindow::GetTitle() const function, expected prototype:\nwxString wxTopLevelWindow::GetTitle() const\nClass arguments details:\n");
		}


		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxTopLevelWindow::GetTitle() const");
		}
		wxString lret = self->GetTitle();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxTopLevelWindow::Iconize(bool iconize = true)
	static int _bind_Iconize(lua_State *L) {
		if (!_lg_typecheck_Iconize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTopLevelWindow::Iconize(bool iconize = true) function, expected prototype:\nvoid wxTopLevelWindow::Iconize(bool iconize = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool iconize=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTopLevelWindow::Iconize(bool)");
		}
		self->Iconize(iconize);

		return 0;
	}

	// bool wxTopLevelWindow::IsActive()
	static int _bind_IsActive(lua_State *L) {
		if (!_lg_typecheck_IsActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTopLevelWindow::IsActive() function, expected prototype:\nbool wxTopLevelWindow::IsActive()\nClass arguments details:\n");
		}


		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTopLevelWindow::IsActive()");
		}
		bool lret = self->IsActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTopLevelWindow::IsAlwaysMaximized() const
	static int _bind_IsAlwaysMaximized(lua_State *L) {
		if (!_lg_typecheck_IsAlwaysMaximized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTopLevelWindow::IsAlwaysMaximized() const function, expected prototype:\nbool wxTopLevelWindow::IsAlwaysMaximized() const\nClass arguments details:\n");
		}


		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTopLevelWindow::IsAlwaysMaximized() const");
		}
		bool lret = self->IsAlwaysMaximized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTopLevelWindow::IsFullScreen() const
	static int _bind_IsFullScreen(lua_State *L) {
		if (!_lg_typecheck_IsFullScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTopLevelWindow::IsFullScreen() const function, expected prototype:\nbool wxTopLevelWindow::IsFullScreen() const\nClass arguments details:\n");
		}


		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTopLevelWindow::IsFullScreen() const");
		}
		bool lret = self->IsFullScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTopLevelWindow::IsIconized() const
	static int _bind_IsIconized(lua_State *L) {
		if (!_lg_typecheck_IsIconized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTopLevelWindow::IsIconized() const function, expected prototype:\nbool wxTopLevelWindow::IsIconized() const\nClass arguments details:\n");
		}


		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTopLevelWindow::IsIconized() const");
		}
		bool lret = self->IsIconized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTopLevelWindow::IsMaximized() const
	static int _bind_IsMaximized(lua_State *L) {
		if (!_lg_typecheck_IsMaximized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTopLevelWindow::IsMaximized() const function, expected prototype:\nbool wxTopLevelWindow::IsMaximized() const\nClass arguments details:\n");
		}


		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTopLevelWindow::IsMaximized() const");
		}
		bool lret = self->IsMaximized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTopLevelWindow::Layout()
	static int _bind_Layout(lua_State *L) {
		if (!_lg_typecheck_Layout(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTopLevelWindow::Layout() function, expected prototype:\nbool wxTopLevelWindow::Layout()\nClass arguments details:\n");
		}


		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTopLevelWindow::Layout()");
		}
		bool lret = self->Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTopLevelWindow::Maximize(bool maximize = true)
	static int _bind_Maximize(lua_State *L) {
		if (!_lg_typecheck_Maximize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTopLevelWindow::Maximize(bool maximize = true) function, expected prototype:\nvoid wxTopLevelWindow::Maximize(bool maximize = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool maximize=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTopLevelWindow::Maximize(bool)");
		}
		self->Maximize(maximize);

		return 0;
	}

	// wxMenu * wxTopLevelWindow::MSWGetSystemMenu() const
	static int _bind_MSWGetSystemMenu(lua_State *L) {
		if (!_lg_typecheck_MSWGetSystemMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMenu * wxTopLevelWindow::MSWGetSystemMenu() const function, expected prototype:\nwxMenu * wxTopLevelWindow::MSWGetSystemMenu() const\nClass arguments details:\n");
		}


		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxMenu * wxTopLevelWindow::MSWGetSystemMenu() const");
		}
		wxMenu * lret = self->MSWGetSystemMenu();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenu >::push(L,lret,false);

		return 1;
	}

	// void wxTopLevelWindow::RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO)
	static int _bind_RequestUserAttention(lua_State *L) {
		if (!_lg_typecheck_RequestUserAttention(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTopLevelWindow::RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO) function, expected prototype:\nvoid wxTopLevelWindow::RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : ::wxUSER_ATTENTION_INFO;

		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTopLevelWindow::RequestUserAttention(int)");
		}
		self->RequestUserAttention(flags);

		return 0;
	}

	// wxWindow * wxTopLevelWindow::SetDefaultItem(wxWindow * win)
	static int _bind_SetDefaultItem(lua_State *L) {
		if (!_lg_typecheck_SetDefaultItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxTopLevelWindow::SetDefaultItem(wxWindow * win) function, expected prototype:\nwxWindow * wxTopLevelWindow::SetDefaultItem(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxTopLevelWindow::SetDefaultItem(wxWindow *)");
		}
		wxWindow * lret = self->SetDefaultItem(win);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxTopLevelWindow::SetTmpDefaultItem(wxWindow * win)
	static int _bind_SetTmpDefaultItem(lua_State *L) {
		if (!_lg_typecheck_SetTmpDefaultItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxTopLevelWindow::SetTmpDefaultItem(wxWindow * win) function, expected prototype:\nwxWindow * wxTopLevelWindow::SetTmpDefaultItem(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxTopLevelWindow::SetTmpDefaultItem(wxWindow *)");
		}
		wxWindow * lret = self->SetTmpDefaultItem(win);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxTopLevelWindow::GetTmpDefaultItem() const
	static int _bind_GetTmpDefaultItem(lua_State *L) {
		if (!_lg_typecheck_GetTmpDefaultItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxTopLevelWindow::GetTmpDefaultItem() const function, expected prototype:\nwxWindow * wxTopLevelWindow::GetTmpDefaultItem() const\nClass arguments details:\n");
		}


		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxTopLevelWindow::GetTmpDefaultItem() const");
		}
		wxWindow * lret = self->GetTmpDefaultItem();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// void wxTopLevelWindow::SetIcon(const wxIcon & icon)
	static int _bind_SetIcon(lua_State *L) {
		if (!_lg_typecheck_SetIcon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTopLevelWindow::SetIcon(const wxIcon & icon) function, expected prototype:\nvoid wxTopLevelWindow::SetIcon(const wxIcon & icon)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxIcon* icon_ptr=dynamic_cast< wxIcon* >(Luna< wxObject >::check(L,2));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxTopLevelWindow::SetIcon function");
		}
		const wxIcon & icon=*icon_ptr;

		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTopLevelWindow::SetIcon(const wxIcon &)");
		}
		self->SetIcon(icon);

		return 0;
	}

	// void wxTopLevelWindow::SetIcons(const wxIconBundle & icons)
	static int _bind_SetIcons(lua_State *L) {
		if (!_lg_typecheck_SetIcons(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTopLevelWindow::SetIcons(const wxIconBundle & icons) function, expected prototype:\nvoid wxTopLevelWindow::SetIcons(const wxIconBundle & icons)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxIconBundle* icons_ptr=dynamic_cast< wxIconBundle* >(Luna< wxObject >::check(L,2));
		if( !icons_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icons in wxTopLevelWindow::SetIcons function");
		}
		const wxIconBundle & icons=*icons_ptr;

		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTopLevelWindow::SetIcons(const wxIconBundle &)");
		}
		self->SetIcons(icons);

		return 0;
	}

	// void wxTopLevelWindow::SetMaxSize(const wxSize & size)
	static int _bind_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_SetMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTopLevelWindow::SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxTopLevelWindow::SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTopLevelWindow::SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTopLevelWindow::SetMaxSize(const wxSize &)");
		}
		self->SetMaxSize(size);

		return 0;
	}

	// void wxTopLevelWindow::SetMinSize(const wxSize & size)
	static int _bind_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_SetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTopLevelWindow::SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxTopLevelWindow::SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTopLevelWindow::SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTopLevelWindow::SetMinSize(const wxSize &)");
		}
		self->SetMinSize(size);

		return 0;
	}

	// void wxTopLevelWindow::SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetSizeHints_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTopLevelWindow::SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxTopLevelWindow::SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : -1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : -1;

		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTopLevelWindow::SetSizeHints(int, int, int, int, int, int)");
		}
		self->SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// void wxTopLevelWindow::SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetSizeHints_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTopLevelWindow::SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxTopLevelWindow::SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxTopLevelWindow::SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxTopLevelWindow::SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxTopLevelWindow::SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : wxDefaultSize;

		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTopLevelWindow::SetSizeHints(const wxSize &, const wxSize &, const wxSize &)");
		}
		self->SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// Overload binder for wxTopLevelWindow::SetSizeHints
	static int _bind_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_SetSizeHints_overload_1(L)) return _bind_SetSizeHints_overload_1(L);
		if (_lg_typecheck_SetSizeHints_overload_2(L)) return _bind_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function SetSizeHints, cannot match any of the overloads for function SetSizeHints:\n  SetSizeHints(int, int, int, int, int, int)\n  SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n");
		return 0;
	}

	// void wxTopLevelWindow::SetTitle(const wxString & title)
	static int _bind_SetTitle(lua_State *L) {
		if (!_lg_typecheck_SetTitle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTopLevelWindow::SetTitle(const wxString & title) function, expected prototype:\nvoid wxTopLevelWindow::SetTitle(const wxString & title)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString title(lua_tostring(L,2),lua_objlen(L,2));

		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTopLevelWindow::SetTitle(const wxString &)");
		}
		self->SetTitle(title);

		return 0;
	}

	// bool wxTopLevelWindow::SetTransparent(unsigned char alpha)
	static int _bind_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_SetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTopLevelWindow::SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxTopLevelWindow::SetTransparent(unsigned char alpha)\nClass arguments details:\n");
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTopLevelWindow::SetTransparent(unsigned char)");
		}
		bool lret = self->SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTopLevelWindow::ShouldPreventAppExit() const
	static int _bind_ShouldPreventAppExit(lua_State *L) {
		if (!_lg_typecheck_ShouldPreventAppExit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTopLevelWindow::ShouldPreventAppExit() const function, expected prototype:\nbool wxTopLevelWindow::ShouldPreventAppExit() const\nClass arguments details:\n");
		}


		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTopLevelWindow::ShouldPreventAppExit() const");
		}
		bool lret = self->ShouldPreventAppExit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTopLevelWindow::OSXSetModified(bool modified)
	static int _bind_OSXSetModified(lua_State *L) {
		if (!_lg_typecheck_OSXSetModified(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTopLevelWindow::OSXSetModified(bool modified) function, expected prototype:\nvoid wxTopLevelWindow::OSXSetModified(bool modified)\nClass arguments details:\n");
		}

		bool modified=(bool)(lua_toboolean(L,2)==1);

		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTopLevelWindow::OSXSetModified(bool)");
		}
		self->OSXSetModified(modified);

		return 0;
	}

	// bool wxTopLevelWindow::OSXIsModified() const
	static int _bind_OSXIsModified(lua_State *L) {
		if (!_lg_typecheck_OSXIsModified(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTopLevelWindow::OSXIsModified() const function, expected prototype:\nbool wxTopLevelWindow::OSXIsModified() const\nClass arguments details:\n");
		}


		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTopLevelWindow::OSXIsModified() const");
		}
		bool lret = self->OSXIsModified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTopLevelWindow::ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL)
	static int _bind_ShowFullScreen(lua_State *L) {
		if (!_lg_typecheck_ShowFullScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTopLevelWindow::ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL) function, expected prototype:\nbool wxTopLevelWindow::ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool show=(bool)(lua_toboolean(L,2)==1);
		long style=luatop>2 ? (long)lua_tointeger(L,3) : ::wxFULLSCREEN_ALL;

		wxTopLevelWindow* self=dynamic_cast< wxTopLevelWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTopLevelWindow::ShowFullScreen(bool, long)");
		}
		bool lret = self->ShowFullScreen(show, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static wxSize wxTopLevelWindow::GetDefaultSize()
	static int _bind_GetDefaultSize(lua_State *L) {
		if (!_lg_typecheck_GetDefaultSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxSize wxTopLevelWindow::GetDefaultSize() function, expected prototype:\nstatic wxSize wxTopLevelWindow::GetDefaultSize()\nClass arguments details:\n");
		}


		wxSize stack_lret = wxTopLevelWindow::GetDefaultSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

wxTopLevelWindow* LunaTraits< wxTopLevelWindow >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTopLevelWindow::_bind_ctor(L);
}

void LunaTraits< wxTopLevelWindow >::_bind_dtor(wxTopLevelWindow* obj) {
	delete obj;
}

const char LunaTraits< wxTopLevelWindow >::className[] = "wxTopLevelWindow";
const char LunaTraits< wxTopLevelWindow >::fullName[] = "wxTopLevelWindow";
const char LunaTraits< wxTopLevelWindow >::moduleName[] = "wx";
const char* LunaTraits< wxTopLevelWindow >::parents[] = {"wx.wxNonOwnedWindow", 0};
const int LunaTraits< wxTopLevelWindow >::hash = 47549448;
const int LunaTraits< wxTopLevelWindow >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxTopLevelWindow >::methods[] = {
	{"Create", &luna_wrapper_wxTopLevelWindow::_bind_Create},
	{"CanSetTransparent", &luna_wrapper_wxTopLevelWindow::_bind_CanSetTransparent},
	{"CenterOnScreen", &luna_wrapper_wxTopLevelWindow::_bind_CenterOnScreen},
	{"CentreOnScreen", &luna_wrapper_wxTopLevelWindow::_bind_CentreOnScreen},
	{"EnableCloseButton", &luna_wrapper_wxTopLevelWindow::_bind_EnableCloseButton},
	{"GetDefaultItem", &luna_wrapper_wxTopLevelWindow::_bind_GetDefaultItem},
	{"GetIcon", &luna_wrapper_wxTopLevelWindow::_bind_GetIcon},
	{"GetIcons", &luna_wrapper_wxTopLevelWindow::_bind_GetIcons},
	{"GetTitle", &luna_wrapper_wxTopLevelWindow::_bind_GetTitle},
	{"Iconize", &luna_wrapper_wxTopLevelWindow::_bind_Iconize},
	{"IsActive", &luna_wrapper_wxTopLevelWindow::_bind_IsActive},
	{"IsAlwaysMaximized", &luna_wrapper_wxTopLevelWindow::_bind_IsAlwaysMaximized},
	{"IsFullScreen", &luna_wrapper_wxTopLevelWindow::_bind_IsFullScreen},
	{"IsIconized", &luna_wrapper_wxTopLevelWindow::_bind_IsIconized},
	{"IsMaximized", &luna_wrapper_wxTopLevelWindow::_bind_IsMaximized},
	{"Layout", &luna_wrapper_wxTopLevelWindow::_bind_Layout},
	{"Maximize", &luna_wrapper_wxTopLevelWindow::_bind_Maximize},
	{"MSWGetSystemMenu", &luna_wrapper_wxTopLevelWindow::_bind_MSWGetSystemMenu},
	{"RequestUserAttention", &luna_wrapper_wxTopLevelWindow::_bind_RequestUserAttention},
	{"SetDefaultItem", &luna_wrapper_wxTopLevelWindow::_bind_SetDefaultItem},
	{"SetTmpDefaultItem", &luna_wrapper_wxTopLevelWindow::_bind_SetTmpDefaultItem},
	{"GetTmpDefaultItem", &luna_wrapper_wxTopLevelWindow::_bind_GetTmpDefaultItem},
	{"SetIcon", &luna_wrapper_wxTopLevelWindow::_bind_SetIcon},
	{"SetIcons", &luna_wrapper_wxTopLevelWindow::_bind_SetIcons},
	{"SetMaxSize", &luna_wrapper_wxTopLevelWindow::_bind_SetMaxSize},
	{"SetMinSize", &luna_wrapper_wxTopLevelWindow::_bind_SetMinSize},
	{"SetSizeHints", &luna_wrapper_wxTopLevelWindow::_bind_SetSizeHints},
	{"SetTitle", &luna_wrapper_wxTopLevelWindow::_bind_SetTitle},
	{"SetTransparent", &luna_wrapper_wxTopLevelWindow::_bind_SetTransparent},
	{"ShouldPreventAppExit", &luna_wrapper_wxTopLevelWindow::_bind_ShouldPreventAppExit},
	{"OSXSetModified", &luna_wrapper_wxTopLevelWindow::_bind_OSXSetModified},
	{"OSXIsModified", &luna_wrapper_wxTopLevelWindow::_bind_OSXIsModified},
	{"ShowFullScreen", &luna_wrapper_wxTopLevelWindow::_bind_ShowFullScreen},
	{"GetDefaultSize", &luna_wrapper_wxTopLevelWindow::_bind_GetDefaultSize},
	{"__eq", &luna_wrapper_wxTopLevelWindow::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxTopLevelWindow >::converters[] = {
	{"wxObject", &luna_wrapper_wxTopLevelWindow::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTopLevelWindow >::enumValues[] = {
	{0,0}
};


