#include <plug_common.h>

class luna_wrapper_wxAuiManager {
public:
	typedef Luna< wxAuiManager > luna_t;

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
		wxAuiManager* ptr= dynamic_cast< wxAuiManager* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxAuiManager >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddPane_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,42930508) ) return false;
		if( (!dynamic_cast< wxAuiPaneInfo* >(Luna< wxAuiPaneInfo >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddPane_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddPane_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,42930508) ) return false;
		if( (!dynamic_cast< wxAuiPaneInfo* >(Luna< wxAuiPaneInfo >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DetachPane(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAllPanes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetArtProvider(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDockSizeConstraint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetManagedWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPane_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPane_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HideHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InsertPane(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,42930508) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadPaneInfo(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,42930508) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadPerspective(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SavePaneInfo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,42930508) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SavePerspective(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetArtProvider(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,55065598)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDockSizeConstraint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetManagedWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UnInit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Update(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetManager(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxAuiManager::wxAuiManager(wxWindow * managed_wnd = NULL, unsigned int flags = wxAUI_MGR_DEFAULT)
	static wxAuiManager* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiManager::wxAuiManager(wxWindow * managed_wnd = NULL, unsigned int flags = wxAUI_MGR_DEFAULT) function, expected prototype:\nwxAuiManager::wxAuiManager(wxWindow * managed_wnd = NULL, unsigned int flags = wxAUI_MGR_DEFAULT)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* managed_wnd=luatop>0 ? dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) : (wxWindow*)NULL;
		unsigned int flags=luatop>1 ? (unsigned int)lua_tointeger(L,2) : wxAUI_MGR_DEFAULT;

		return new wxAuiManager(managed_wnd, flags);
	}


	// Function binds:
	// bool wxAuiManager::AddPane(wxWindow * window, const wxAuiPaneInfo & pane_info)
	static int _bind_AddPane_overload_1(lua_State *L) {
		if (!_lg_typecheck_AddPane_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiManager::AddPane(wxWindow * window, const wxAuiPaneInfo & pane_info) function, expected prototype:\nbool wxAuiManager::AddPane(wxWindow * window, const wxAuiPaneInfo & pane_info)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 42930508\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		const wxAuiPaneInfo* pane_info_ptr=(Luna< wxAuiPaneInfo >::check(L,3));
		if( !pane_info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pane_info in wxAuiManager::AddPane function");
		}
		const wxAuiPaneInfo & pane_info=*pane_info_ptr;

		wxAuiManager* self=dynamic_cast< wxAuiManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiManager::AddPane(wxWindow *, const wxAuiPaneInfo &)");
		}
		bool lret = self->AddPane(window, pane_info);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiManager::AddPane(wxWindow * window, int direction = wxLEFT, const wxString & caption = wxEmptyString)
	static int _bind_AddPane_overload_2(lua_State *L) {
		if (!_lg_typecheck_AddPane_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiManager::AddPane(wxWindow * window, int direction = wxLEFT, const wxString & caption = wxEmptyString) function, expected prototype:\nbool wxAuiManager::AddPane(wxWindow * window, int direction = wxLEFT, const wxString & caption = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int direction=luatop>2 ? (int)lua_tointeger(L,3) : wxLEFT;
		wxString caption(lua_tostring(L,4),lua_objlen(L,4));

		wxAuiManager* self=dynamic_cast< wxAuiManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiManager::AddPane(wxWindow *, int, const wxString &)");
		}
		bool lret = self->AddPane(window, direction, caption);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiManager::AddPane(wxWindow * window, const wxAuiPaneInfo & pane_info, const wxPoint & drop_pos)
	static int _bind_AddPane_overload_3(lua_State *L) {
		if (!_lg_typecheck_AddPane_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiManager::AddPane(wxWindow * window, const wxAuiPaneInfo & pane_info, const wxPoint & drop_pos) function, expected prototype:\nbool wxAuiManager::AddPane(wxWindow * window, const wxAuiPaneInfo & pane_info, const wxPoint & drop_pos)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 42930508\narg 3 ID = 25723480\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		const wxAuiPaneInfo* pane_info_ptr=(Luna< wxAuiPaneInfo >::check(L,3));
		if( !pane_info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pane_info in wxAuiManager::AddPane function");
		}
		const wxAuiPaneInfo & pane_info=*pane_info_ptr;
		const wxPoint* drop_pos_ptr=(Luna< wxPoint >::check(L,4));
		if( !drop_pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg drop_pos in wxAuiManager::AddPane function");
		}
		const wxPoint & drop_pos=*drop_pos_ptr;

		wxAuiManager* self=dynamic_cast< wxAuiManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiManager::AddPane(wxWindow *, const wxAuiPaneInfo &, const wxPoint &)");
		}
		bool lret = self->AddPane(window, pane_info, drop_pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxAuiManager::AddPane
	static int _bind_AddPane(lua_State *L) {
		if (_lg_typecheck_AddPane_overload_1(L)) return _bind_AddPane_overload_1(L);
		if (_lg_typecheck_AddPane_overload_2(L)) return _bind_AddPane_overload_2(L);
		if (_lg_typecheck_AddPane_overload_3(L)) return _bind_AddPane_overload_3(L);

		luaL_error(L, "error in function AddPane, cannot match any of the overloads for function AddPane:\n  AddPane(wxWindow *, const wxAuiPaneInfo &)\n  AddPane(wxWindow *, int, const wxString &)\n  AddPane(wxWindow *, const wxAuiPaneInfo &, const wxPoint &)\n");
		return 0;
	}

	// bool wxAuiManager::DetachPane(wxWindow * window)
	static int _bind_DetachPane(lua_State *L) {
		if (!_lg_typecheck_DetachPane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiManager::DetachPane(wxWindow * window) function, expected prototype:\nbool wxAuiManager::DetachPane(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxAuiManager* self=dynamic_cast< wxAuiManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiManager::DetachPane(wxWindow *)");
		}
		bool lret = self->DetachPane(window);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxAuiPaneInfoArray & wxAuiManager::GetAllPanes()
	static int _bind_GetAllPanes(lua_State *L) {
		if (!_lg_typecheck_GetAllPanes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfoArray & wxAuiManager::GetAllPanes() function, expected prototype:\nwxAuiPaneInfoArray & wxAuiManager::GetAllPanes()\nClass arguments details:\n");
		}


		wxAuiManager* self=dynamic_cast< wxAuiManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxAuiPaneInfoArray & wxAuiManager::GetAllPanes()");
		}
		const wxAuiPaneInfoArray* lret = &self->GetAllPanes();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfoArray >::push(L,lret,false);

		return 1;
	}

	// wxAuiDockArt * wxAuiManager::GetArtProvider() const
	static int _bind_GetArtProvider(lua_State *L) {
		if (!_lg_typecheck_GetArtProvider(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiDockArt * wxAuiManager::GetArtProvider() const function, expected prototype:\nwxAuiDockArt * wxAuiManager::GetArtProvider() const\nClass arguments details:\n");
		}


		wxAuiManager* self=dynamic_cast< wxAuiManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxAuiDockArt * wxAuiManager::GetArtProvider() const");
		}
		wxAuiDockArt * lret = self->GetArtProvider();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiDockArt >::push(L,lret,false);

		return 1;
	}

	// void wxAuiManager::GetDockSizeConstraint(double * widthpct, double * heightpct) const
	static int _bind_GetDockSizeConstraint(lua_State *L) {
		if (!_lg_typecheck_GetDockSizeConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiManager::GetDockSizeConstraint(double * widthpct, double * heightpct) const function, expected prototype:\nvoid wxAuiManager::GetDockSizeConstraint(double * widthpct, double * heightpct) const\nClass arguments details:\n");
		}

		double widthpct=(double)lua_tonumber(L,2);
		double heightpct=(double)lua_tonumber(L,3);

		wxAuiManager* self=dynamic_cast< wxAuiManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiManager::GetDockSizeConstraint(double *, double *) const");
		}
		self->GetDockSizeConstraint(&widthpct, &heightpct);

		return 0;
	}

	// unsigned int wxAuiManager::GetFlags() const
	static int _bind_GetFlags(lua_State *L) {
		if (!_lg_typecheck_GetFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxAuiManager::GetFlags() const function, expected prototype:\nunsigned int wxAuiManager::GetFlags() const\nClass arguments details:\n");
		}


		wxAuiManager* self=dynamic_cast< wxAuiManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxAuiManager::GetFlags() const");
		}
		unsigned int lret = self->GetFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxWindow * wxAuiManager::GetManagedWindow() const
	static int _bind_GetManagedWindow(lua_State *L) {
		if (!_lg_typecheck_GetManagedWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxAuiManager::GetManagedWindow() const function, expected prototype:\nwxWindow * wxAuiManager::GetManagedWindow() const\nClass arguments details:\n");
		}


		wxAuiManager* self=dynamic_cast< wxAuiManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxAuiManager::GetManagedWindow() const");
		}
		wxWindow * lret = self->GetManagedWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiManager::GetPane(wxWindow * window)
	static int _bind_GetPane_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetPane_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiManager::GetPane(wxWindow * window) function, expected prototype:\nwxAuiPaneInfo & wxAuiManager::GetPane(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxAuiManager* self=dynamic_cast< wxAuiManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiManager::GetPane(wxWindow *)");
		}
		const wxAuiPaneInfo* lret = &self->GetPane(window);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiManager::GetPane(const wxString & name)
	static int _bind_GetPane_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetPane_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiManager::GetPane(const wxString & name) function, expected prototype:\nwxAuiPaneInfo & wxAuiManager::GetPane(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxAuiManager* self=dynamic_cast< wxAuiManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiManager::GetPane(const wxString &)");
		}
		const wxAuiPaneInfo* lret = &self->GetPane(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxAuiManager::GetPane
	static int _bind_GetPane(lua_State *L) {
		if (_lg_typecheck_GetPane_overload_1(L)) return _bind_GetPane_overload_1(L);
		if (_lg_typecheck_GetPane_overload_2(L)) return _bind_GetPane_overload_2(L);

		luaL_error(L, "error in function GetPane, cannot match any of the overloads for function GetPane:\n  GetPane(wxWindow *)\n  GetPane(const wxString &)\n");
		return 0;
	}

	// void wxAuiManager::HideHint()
	static int _bind_HideHint(lua_State *L) {
		if (!_lg_typecheck_HideHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiManager::HideHint() function, expected prototype:\nvoid wxAuiManager::HideHint()\nClass arguments details:\n");
		}


		wxAuiManager* self=dynamic_cast< wxAuiManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiManager::HideHint()");
		}
		self->HideHint();

		return 0;
	}

	// bool wxAuiManager::InsertPane(wxWindow * window, const wxAuiPaneInfo & insert_location, int insert_level = wxAUI_INSERT_PANE)
	static int _bind_InsertPane(lua_State *L) {
		if (!_lg_typecheck_InsertPane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiManager::InsertPane(wxWindow * window, const wxAuiPaneInfo & insert_location, int insert_level = wxAUI_INSERT_PANE) function, expected prototype:\nbool wxAuiManager::InsertPane(wxWindow * window, const wxAuiPaneInfo & insert_location, int insert_level = wxAUI_INSERT_PANE)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 42930508\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		const wxAuiPaneInfo* insert_location_ptr=(Luna< wxAuiPaneInfo >::check(L,3));
		if( !insert_location_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg insert_location in wxAuiManager::InsertPane function");
		}
		const wxAuiPaneInfo & insert_location=*insert_location_ptr;
		int insert_level=luatop>3 ? (int)lua_tointeger(L,4) : wxAUI_INSERT_PANE;

		wxAuiManager* self=dynamic_cast< wxAuiManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiManager::InsertPane(wxWindow *, const wxAuiPaneInfo &, int)");
		}
		bool lret = self->InsertPane(window, insert_location, insert_level);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiManager::LoadPaneInfo(wxString pane_part, wxAuiPaneInfo & pane)
	static int _bind_LoadPaneInfo(lua_State *L) {
		if (!_lg_typecheck_LoadPaneInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiManager::LoadPaneInfo(wxString pane_part, wxAuiPaneInfo & pane) function, expected prototype:\nvoid wxAuiManager::LoadPaneInfo(wxString pane_part, wxAuiPaneInfo & pane)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 42930508\n");
		}

		wxString pane_part(lua_tostring(L,2),lua_objlen(L,2));
		wxAuiPaneInfo* pane_ptr=(Luna< wxAuiPaneInfo >::check(L,3));
		if( !pane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pane in wxAuiManager::LoadPaneInfo function");
		}
		wxAuiPaneInfo & pane=*pane_ptr;

		wxAuiManager* self=dynamic_cast< wxAuiManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiManager::LoadPaneInfo(wxString, wxAuiPaneInfo &)");
		}
		self->LoadPaneInfo(pane_part, pane);

		return 0;
	}

	// bool wxAuiManager::LoadPerspective(const wxString & perspective, bool update = true)
	static int _bind_LoadPerspective(lua_State *L) {
		if (!_lg_typecheck_LoadPerspective(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiManager::LoadPerspective(const wxString & perspective, bool update = true) function, expected prototype:\nbool wxAuiManager::LoadPerspective(const wxString & perspective, bool update = true)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString perspective(lua_tostring(L,2),lua_objlen(L,2));
		bool update=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxAuiManager* self=dynamic_cast< wxAuiManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiManager::LoadPerspective(const wxString &, bool)");
		}
		bool lret = self->LoadPerspective(perspective, update);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxAuiManager::SavePaneInfo(wxAuiPaneInfo & pane)
	static int _bind_SavePaneInfo(lua_State *L) {
		if (!_lg_typecheck_SavePaneInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxAuiManager::SavePaneInfo(wxAuiPaneInfo & pane) function, expected prototype:\nwxString wxAuiManager::SavePaneInfo(wxAuiPaneInfo & pane)\nClass arguments details:\narg 1 ID = 42930508\n");
		}

		wxAuiPaneInfo* pane_ptr=(Luna< wxAuiPaneInfo >::check(L,2));
		if( !pane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pane in wxAuiManager::SavePaneInfo function");
		}
		wxAuiPaneInfo & pane=*pane_ptr;

		wxAuiManager* self=dynamic_cast< wxAuiManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxAuiManager::SavePaneInfo(wxAuiPaneInfo &)");
		}
		wxString lret = self->SavePaneInfo(pane);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxAuiManager::SavePerspective()
	static int _bind_SavePerspective(lua_State *L) {
		if (!_lg_typecheck_SavePerspective(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxAuiManager::SavePerspective() function, expected prototype:\nwxString wxAuiManager::SavePerspective()\nClass arguments details:\n");
		}


		wxAuiManager* self=dynamic_cast< wxAuiManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxAuiManager::SavePerspective()");
		}
		wxString lret = self->SavePerspective();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxAuiManager::SetArtProvider(wxAuiDockArt * art_provider)
	static int _bind_SetArtProvider(lua_State *L) {
		if (!_lg_typecheck_SetArtProvider(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiManager::SetArtProvider(wxAuiDockArt * art_provider) function, expected prototype:\nvoid wxAuiManager::SetArtProvider(wxAuiDockArt * art_provider)\nClass arguments details:\narg 1 ID = 55065598\n");
		}

		wxAuiDockArt* art_provider=(Luna< wxAuiDockArt >::check(L,2));

		wxAuiManager* self=dynamic_cast< wxAuiManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiManager::SetArtProvider(wxAuiDockArt *)");
		}
		self->SetArtProvider(art_provider);

		return 0;
	}

	// void wxAuiManager::SetDockSizeConstraint(double widthpct, double heightpct)
	static int _bind_SetDockSizeConstraint(lua_State *L) {
		if (!_lg_typecheck_SetDockSizeConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiManager::SetDockSizeConstraint(double widthpct, double heightpct) function, expected prototype:\nvoid wxAuiManager::SetDockSizeConstraint(double widthpct, double heightpct)\nClass arguments details:\n");
		}

		double widthpct=(double)lua_tonumber(L,2);
		double heightpct=(double)lua_tonumber(L,3);

		wxAuiManager* self=dynamic_cast< wxAuiManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiManager::SetDockSizeConstraint(double, double)");
		}
		self->SetDockSizeConstraint(widthpct, heightpct);

		return 0;
	}

	// void wxAuiManager::SetFlags(unsigned int flags)
	static int _bind_SetFlags(lua_State *L) {
		if (!_lg_typecheck_SetFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiManager::SetFlags(unsigned int flags) function, expected prototype:\nvoid wxAuiManager::SetFlags(unsigned int flags)\nClass arguments details:\n");
		}

		unsigned int flags=(unsigned int)lua_tointeger(L,2);

		wxAuiManager* self=dynamic_cast< wxAuiManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiManager::SetFlags(unsigned int)");
		}
		self->SetFlags(flags);

		return 0;
	}

	// void wxAuiManager::SetManagedWindow(wxWindow * managed_wnd)
	static int _bind_SetManagedWindow(lua_State *L) {
		if (!_lg_typecheck_SetManagedWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiManager::SetManagedWindow(wxWindow * managed_wnd) function, expected prototype:\nvoid wxAuiManager::SetManagedWindow(wxWindow * managed_wnd)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* managed_wnd=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxAuiManager* self=dynamic_cast< wxAuiManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiManager::SetManagedWindow(wxWindow *)");
		}
		self->SetManagedWindow(managed_wnd);

		return 0;
	}

	// void wxAuiManager::ShowHint(const wxRect & rect)
	static int _bind_ShowHint(lua_State *L) {
		if (!_lg_typecheck_ShowHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiManager::ShowHint(const wxRect & rect) function, expected prototype:\nvoid wxAuiManager::ShowHint(const wxRect & rect)\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiManager::ShowHint function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiManager* self=dynamic_cast< wxAuiManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiManager::ShowHint(const wxRect &)");
		}
		self->ShowHint(rect);

		return 0;
	}

	// void wxAuiManager::UnInit()
	static int _bind_UnInit(lua_State *L) {
		if (!_lg_typecheck_UnInit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiManager::UnInit() function, expected prototype:\nvoid wxAuiManager::UnInit()\nClass arguments details:\n");
		}


		wxAuiManager* self=dynamic_cast< wxAuiManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiManager::UnInit()");
		}
		self->UnInit();

		return 0;
	}

	// void wxAuiManager::Update()
	static int _bind_Update(lua_State *L) {
		if (!_lg_typecheck_Update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiManager::Update() function, expected prototype:\nvoid wxAuiManager::Update()\nClass arguments details:\n");
		}


		wxAuiManager* self=dynamic_cast< wxAuiManager* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiManager::Update()");
		}
		self->Update();

		return 0;
	}

	// static wxAuiManager * wxAuiManager::GetManager(wxWindow * window)
	static int _bind_GetManager(lua_State *L) {
		if (!_lg_typecheck_GetManager(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxAuiManager * wxAuiManager::GetManager(wxWindow * window) function, expected prototype:\nstatic wxAuiManager * wxAuiManager::GetManager(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));

		wxAuiManager * lret = wxAuiManager::GetManager(window);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiManager >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxAuiManager* LunaTraits< wxAuiManager >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxAuiManager::_bind_ctor(L);
}

void LunaTraits< wxAuiManager >::_bind_dtor(wxAuiManager* obj) {
	delete obj;
}

const char LunaTraits< wxAuiManager >::className[] = "wxAuiManager";
const char LunaTraits< wxAuiManager >::fullName[] = "wxAuiManager";
const char LunaTraits< wxAuiManager >::moduleName[] = "wx";
const char* LunaTraits< wxAuiManager >::parents[] = {"wx.wxEvtHandler", 0};
const int LunaTraits< wxAuiManager >::hash = 51686728;
const int LunaTraits< wxAuiManager >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxAuiManager >::methods[] = {
	{"AddPane", &luna_wrapper_wxAuiManager::_bind_AddPane},
	{"DetachPane", &luna_wrapper_wxAuiManager::_bind_DetachPane},
	{"GetAllPanes", &luna_wrapper_wxAuiManager::_bind_GetAllPanes},
	{"GetArtProvider", &luna_wrapper_wxAuiManager::_bind_GetArtProvider},
	{"GetDockSizeConstraint", &luna_wrapper_wxAuiManager::_bind_GetDockSizeConstraint},
	{"GetFlags", &luna_wrapper_wxAuiManager::_bind_GetFlags},
	{"GetManagedWindow", &luna_wrapper_wxAuiManager::_bind_GetManagedWindow},
	{"GetPane", &luna_wrapper_wxAuiManager::_bind_GetPane},
	{"HideHint", &luna_wrapper_wxAuiManager::_bind_HideHint},
	{"InsertPane", &luna_wrapper_wxAuiManager::_bind_InsertPane},
	{"LoadPaneInfo", &luna_wrapper_wxAuiManager::_bind_LoadPaneInfo},
	{"LoadPerspective", &luna_wrapper_wxAuiManager::_bind_LoadPerspective},
	{"SavePaneInfo", &luna_wrapper_wxAuiManager::_bind_SavePaneInfo},
	{"SavePerspective", &luna_wrapper_wxAuiManager::_bind_SavePerspective},
	{"SetArtProvider", &luna_wrapper_wxAuiManager::_bind_SetArtProvider},
	{"SetDockSizeConstraint", &luna_wrapper_wxAuiManager::_bind_SetDockSizeConstraint},
	{"SetFlags", &luna_wrapper_wxAuiManager::_bind_SetFlags},
	{"SetManagedWindow", &luna_wrapper_wxAuiManager::_bind_SetManagedWindow},
	{"ShowHint", &luna_wrapper_wxAuiManager::_bind_ShowHint},
	{"UnInit", &luna_wrapper_wxAuiManager::_bind_UnInit},
	{"Update", &luna_wrapper_wxAuiManager::_bind_Update},
	{"GetManager", &luna_wrapper_wxAuiManager::_bind_GetManager},
	{"__eq", &luna_wrapper_wxAuiManager::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxAuiManager >::converters[] = {
	{"wxObject", &luna_wrapper_wxAuiManager::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxAuiManager >::enumValues[] = {
	{0,0}
};


