#include <plug_common.h>

class luna_wrapper_wxRibbonPanel {
public:
	typedef Luna< wxRibbonPanel > luna_t;

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
		wxRibbonPanel* ptr= dynamic_cast< wxRibbonPanel* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRibbonPanel >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTrackable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRibbonPanel* ptr= static_cast< wxRibbonPanel* >(Luna< wxTrackable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRibbonPanel >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>7 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>3 && (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>4 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,5))) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>5 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,6))) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>8 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,25723480) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,20268751) ) return false;
		if( luatop>7 && (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMinimisedIcon_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMinimisedIcon_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsMinimised_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsMinimised_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsHovered(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CanAutoMinimise(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ShowExpanded(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HideExpanded(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetArtProvider(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,48201749)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Realize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetExpandedDummy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetExpandedPanel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxRibbonPanel::wxRibbonPanel()
	static wxRibbonPanel* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonPanel::wxRibbonPanel() function, expected prototype:\nwxRibbonPanel::wxRibbonPanel()\nClass arguments details:\n");
		}


		return new wxRibbonPanel();
	}

	// wxRibbonPanel::wxRibbonPanel(wxWindow * parent, int id = wxID_ANY, const wxString & label = wxEmptyString, const wxBitmap & minimised_icon = wxNullBitmap, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxRIBBON_PANEL_DEFAULT_STYLE)
	static wxRibbonPanel* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonPanel::wxRibbonPanel(wxWindow * parent, int id = wxID_ANY, const wxString & label = wxEmptyString, const wxBitmap & minimised_icon = wxNullBitmap, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxRIBBON_PANEL_DEFAULT_STYLE) function, expected prototype:\nwxRibbonPanel::wxRibbonPanel(wxWindow * parent, int id = wxID_ANY, const wxString & label = wxEmptyString, const wxBitmap & minimised_icon = wxNullBitmap, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxRIBBON_PANEL_DEFAULT_STYLE)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 56813631\narg 5 ID = 25723480\narg 6 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : wxID_ANY;
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		const wxBitmap* minimised_icon_ptr=luatop>3 ? dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4)) : NULL;
		if( luatop>3 && !minimised_icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minimised_icon in wxRibbonPanel::wxRibbonPanel function");
		}
		const wxBitmap & minimised_icon=luatop>3 ? *minimised_icon_ptr : wxNullBitmap;
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRibbonPanel::wxRibbonPanel function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRibbonPanel::wxRibbonPanel function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxRIBBON_PANEL_DEFAULT_STYLE;

		return new wxRibbonPanel(parent, id, label, minimised_icon, pos, size, style);
	}

	// Overload binder for wxRibbonPanel::wxRibbonPanel
	static wxRibbonPanel* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxRibbonPanel, cannot match any of the overloads for function wxRibbonPanel:\n  wxRibbonPanel()\n  wxRibbonPanel(wxWindow *, int, const wxString &, const wxBitmap &, const wxPoint &, const wxSize &, long)\n");
		return NULL;
	}


	// Function binds:
	// bool wxRibbonPanel::Create(wxWindow * parent, int id = wxID_ANY, const wxString & label = wxEmptyString, const wxBitmap & icon = wxNullBitmap, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxRIBBON_PANEL_DEFAULT_STYLE)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonPanel::Create(wxWindow * parent, int id = wxID_ANY, const wxString & label = wxEmptyString, const wxBitmap & icon = wxNullBitmap, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxRIBBON_PANEL_DEFAULT_STYLE) function, expected prototype:\nbool wxRibbonPanel::Create(wxWindow * parent, int id = wxID_ANY, const wxString & label = wxEmptyString, const wxBitmap & icon = wxNullBitmap, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxRIBBON_PANEL_DEFAULT_STYLE)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 56813631\narg 5 ID = 25723480\narg 6 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : wxID_ANY;
		wxString label(lua_tostring(L,4),lua_objlen(L,4));
		const wxBitmap* icon_ptr=luatop>4 ? dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,5)) : NULL;
		if( luatop>4 && !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxRibbonPanel::Create function");
		}
		const wxBitmap & icon=luatop>4 ? *icon_ptr : wxNullBitmap;
		const wxPoint* pos_ptr=luatop>5 ? (Luna< wxPoint >::check(L,6)) : NULL;
		if( luatop>5 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRibbonPanel::Create function");
		}
		const wxPoint & pos=luatop>5 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>6 ? (Luna< wxSize >::check(L,7)) : NULL;
		if( luatop>6 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRibbonPanel::Create function");
		}
		const wxSize & size=luatop>6 ? *size_ptr : wxDefaultSize;
		long style=luatop>7 ? (long)lua_tointeger(L,8) : wxRIBBON_PANEL_DEFAULT_STYLE;

		wxRibbonPanel* self=dynamic_cast< wxRibbonPanel* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonPanel::Create(wxWindow *, int, const wxString &, const wxBitmap &, const wxPoint &, const wxSize &, long)");
		}
		bool lret = self->Create(parent, id, label, icon, pos, size, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxBitmap & wxRibbonPanel::GetMinimisedIcon()
	static int _bind_GetMinimisedIcon_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetMinimisedIcon_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap & wxRibbonPanel::GetMinimisedIcon() function, expected prototype:\nwxBitmap & wxRibbonPanel::GetMinimisedIcon()\nClass arguments details:\n");
		}


		wxRibbonPanel* self=dynamic_cast< wxRibbonPanel* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBitmap & wxRibbonPanel::GetMinimisedIcon()");
		}
		const wxBitmap* lret = &self->GetMinimisedIcon();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,false);

		return 1;
	}

	// const wxBitmap & wxRibbonPanel::GetMinimisedIcon() const
	static int _bind_GetMinimisedIcon_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetMinimisedIcon_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxBitmap & wxRibbonPanel::GetMinimisedIcon() const function, expected prototype:\nconst wxBitmap & wxRibbonPanel::GetMinimisedIcon() const\nClass arguments details:\n");
		}


		wxRibbonPanel* self=dynamic_cast< wxRibbonPanel* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxBitmap & wxRibbonPanel::GetMinimisedIcon() const");
		}
		const wxBitmap* lret = &self->GetMinimisedIcon();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxRibbonPanel::GetMinimisedIcon
	static int _bind_GetMinimisedIcon(lua_State *L) {
		if (_lg_typecheck_GetMinimisedIcon_overload_1(L)) return _bind_GetMinimisedIcon_overload_1(L);
		if (_lg_typecheck_GetMinimisedIcon_overload_2(L)) return _bind_GetMinimisedIcon_overload_2(L);

		luaL_error(L, "error in function GetMinimisedIcon, cannot match any of the overloads for function GetMinimisedIcon:\n  GetMinimisedIcon()\n  GetMinimisedIcon()\n");
		return 0;
	}

	// bool wxRibbonPanel::IsMinimised() const
	static int _bind_IsMinimised_overload_1(lua_State *L) {
		if (!_lg_typecheck_IsMinimised_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonPanel::IsMinimised() const function, expected prototype:\nbool wxRibbonPanel::IsMinimised() const\nClass arguments details:\n");
		}


		wxRibbonPanel* self=dynamic_cast< wxRibbonPanel* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonPanel::IsMinimised() const");
		}
		bool lret = self->IsMinimised();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonPanel::IsMinimised(wxSize at_size) const
	static int _bind_IsMinimised_overload_2(lua_State *L) {
		if (!_lg_typecheck_IsMinimised_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonPanel::IsMinimised(wxSize at_size) const function, expected prototype:\nbool wxRibbonPanel::IsMinimised(wxSize at_size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		wxSize* at_size_ptr=(Luna< wxSize >::check(L,2));
		if( !at_size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg at_size in wxRibbonPanel::IsMinimised function");
		}
		wxSize at_size=*at_size_ptr;

		wxRibbonPanel* self=dynamic_cast< wxRibbonPanel* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonPanel::IsMinimised(wxSize) const");
		}
		bool lret = self->IsMinimised(at_size);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxRibbonPanel::IsMinimised
	static int _bind_IsMinimised(lua_State *L) {
		if (_lg_typecheck_IsMinimised_overload_1(L)) return _bind_IsMinimised_overload_1(L);
		if (_lg_typecheck_IsMinimised_overload_2(L)) return _bind_IsMinimised_overload_2(L);

		luaL_error(L, "error in function IsMinimised, cannot match any of the overloads for function IsMinimised:\n  IsMinimised()\n  IsMinimised(wxSize)\n");
		return 0;
	}

	// bool wxRibbonPanel::IsHovered() const
	static int _bind_IsHovered(lua_State *L) {
		if (!_lg_typecheck_IsHovered(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonPanel::IsHovered() const function, expected prototype:\nbool wxRibbonPanel::IsHovered() const\nClass arguments details:\n");
		}


		wxRibbonPanel* self=dynamic_cast< wxRibbonPanel* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonPanel::IsHovered() const");
		}
		bool lret = self->IsHovered();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonPanel::CanAutoMinimise() const
	static int _bind_CanAutoMinimise(lua_State *L) {
		if (!_lg_typecheck_CanAutoMinimise(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonPanel::CanAutoMinimise() const function, expected prototype:\nbool wxRibbonPanel::CanAutoMinimise() const\nClass arguments details:\n");
		}


		wxRibbonPanel* self=dynamic_cast< wxRibbonPanel* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonPanel::CanAutoMinimise() const");
		}
		bool lret = self->CanAutoMinimise();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonPanel::ShowExpanded()
	static int _bind_ShowExpanded(lua_State *L) {
		if (!_lg_typecheck_ShowExpanded(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonPanel::ShowExpanded() function, expected prototype:\nbool wxRibbonPanel::ShowExpanded()\nClass arguments details:\n");
		}


		wxRibbonPanel* self=dynamic_cast< wxRibbonPanel* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonPanel::ShowExpanded()");
		}
		bool lret = self->ShowExpanded();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonPanel::HideExpanded()
	static int _bind_HideExpanded(lua_State *L) {
		if (!_lg_typecheck_HideExpanded(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonPanel::HideExpanded() function, expected prototype:\nbool wxRibbonPanel::HideExpanded()\nClass arguments details:\n");
		}


		wxRibbonPanel* self=dynamic_cast< wxRibbonPanel* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonPanel::HideExpanded()");
		}
		bool lret = self->HideExpanded();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRibbonPanel::SetArtProvider(wxRibbonArtProvider * art)
	static int _bind_SetArtProvider(lua_State *L) {
		if (!_lg_typecheck_SetArtProvider(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRibbonPanel::SetArtProvider(wxRibbonArtProvider * art) function, expected prototype:\nvoid wxRibbonPanel::SetArtProvider(wxRibbonArtProvider * art)\nClass arguments details:\narg 1 ID = 48201749\n");
		}

		wxRibbonArtProvider* art=(Luna< wxRibbonArtProvider >::check(L,2));

		wxRibbonPanel* self=dynamic_cast< wxRibbonPanel* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRibbonPanel::SetArtProvider(wxRibbonArtProvider *)");
		}
		self->SetArtProvider(art);

		return 0;
	}

	// bool wxRibbonPanel::Realize()
	static int _bind_Realize(lua_State *L) {
		if (!_lg_typecheck_Realize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonPanel::Realize() function, expected prototype:\nbool wxRibbonPanel::Realize()\nClass arguments details:\n");
		}


		wxRibbonPanel* self=dynamic_cast< wxRibbonPanel* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonPanel::Realize()");
		}
		bool lret = self->Realize();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxRibbonPanel * wxRibbonPanel::GetExpandedDummy()
	static int _bind_GetExpandedDummy(lua_State *L) {
		if (!_lg_typecheck_GetExpandedDummy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonPanel * wxRibbonPanel::GetExpandedDummy() function, expected prototype:\nwxRibbonPanel * wxRibbonPanel::GetExpandedDummy()\nClass arguments details:\n");
		}


		wxRibbonPanel* self=dynamic_cast< wxRibbonPanel* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonPanel * wxRibbonPanel::GetExpandedDummy()");
		}
		wxRibbonPanel * lret = self->GetExpandedDummy();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonPanel >::push(L,lret,false);

		return 1;
	}

	// wxRibbonPanel * wxRibbonPanel::GetExpandedPanel()
	static int _bind_GetExpandedPanel(lua_State *L) {
		if (!_lg_typecheck_GetExpandedPanel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonPanel * wxRibbonPanel::GetExpandedPanel() function, expected prototype:\nwxRibbonPanel * wxRibbonPanel::GetExpandedPanel()\nClass arguments details:\n");
		}


		wxRibbonPanel* self=dynamic_cast< wxRibbonPanel* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonPanel * wxRibbonPanel::GetExpandedPanel()");
		}
		wxRibbonPanel * lret = self->GetExpandedPanel();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonPanel >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxRibbonPanel* LunaTraits< wxRibbonPanel >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRibbonPanel::_bind_ctor(L);
}

void LunaTraits< wxRibbonPanel >::_bind_dtor(wxRibbonPanel* obj) {
	delete obj;
}

const char LunaTraits< wxRibbonPanel >::className[] = "wxRibbonPanel";
const char LunaTraits< wxRibbonPanel >::fullName[] = "wxRibbonPanel";
const char LunaTraits< wxRibbonPanel >::moduleName[] = "wx";
const char* LunaTraits< wxRibbonPanel >::parents[] = {"wx.wxRibbonControl", 0};
const int LunaTraits< wxRibbonPanel >::hash = 70578767;
const int LunaTraits< wxRibbonPanel >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxRibbonPanel >::methods[] = {
	{"Create", &luna_wrapper_wxRibbonPanel::_bind_Create},
	{"GetMinimisedIcon", &luna_wrapper_wxRibbonPanel::_bind_GetMinimisedIcon},
	{"IsMinimised", &luna_wrapper_wxRibbonPanel::_bind_IsMinimised},
	{"IsHovered", &luna_wrapper_wxRibbonPanel::_bind_IsHovered},
	{"CanAutoMinimise", &luna_wrapper_wxRibbonPanel::_bind_CanAutoMinimise},
	{"ShowExpanded", &luna_wrapper_wxRibbonPanel::_bind_ShowExpanded},
	{"HideExpanded", &luna_wrapper_wxRibbonPanel::_bind_HideExpanded},
	{"SetArtProvider", &luna_wrapper_wxRibbonPanel::_bind_SetArtProvider},
	{"Realize", &luna_wrapper_wxRibbonPanel::_bind_Realize},
	{"GetExpandedDummy", &luna_wrapper_wxRibbonPanel::_bind_GetExpandedDummy},
	{"GetExpandedPanel", &luna_wrapper_wxRibbonPanel::_bind_GetExpandedPanel},
	{"__eq", &luna_wrapper_wxRibbonPanel::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRibbonPanel >::converters[] = {
	{"wxObject", &luna_wrapper_wxRibbonPanel::_cast_from_wxObject},
	{"wxTrackable", &luna_wrapper_wxRibbonPanel::_cast_from_wxTrackable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRibbonPanel >::enumValues[] = {
	{0,0}
};


