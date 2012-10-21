#include <plug_common.h>

class luna_wrapper_wxRibbonBar {
public:
	typedef Luna< wxRibbonBar > luna_t;

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
		wxRibbonBar* ptr= dynamic_cast< wxRibbonBar* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRibbonBar >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>3 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,4))) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTabCtrlMargins(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetArtProvider(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,48201749)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetActivePage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetActivePage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxRibbonPage* >(Luna< wxObject >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetActivePage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DismissExpandedPanel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ShowPanels(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HidePanels(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ArePanelsShown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Realize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxRibbonBar::wxRibbonBar()
	static wxRibbonBar* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonBar::wxRibbonBar() function, expected prototype:\nwxRibbonBar::wxRibbonBar()\nClass arguments details:\n");
		}


		return new wxRibbonBar();
	}

	// wxRibbonBar::wxRibbonBar(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxRIBBON_BAR_DEFAULT_STYLE)
	static wxRibbonBar* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonBar::wxRibbonBar(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxRIBBON_BAR_DEFAULT_STYLE) function, expected prototype:\nwxRibbonBar::wxRibbonBar(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxRIBBON_BAR_DEFAULT_STYLE)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : wxID_ANY;
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRibbonBar::wxRibbonBar function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRibbonBar::wxRibbonBar function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : wxDefaultSize;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : wxRIBBON_BAR_DEFAULT_STYLE;

		return new wxRibbonBar(parent, id, pos, size, style);
	}

	// Overload binder for wxRibbonBar::wxRibbonBar
	static wxRibbonBar* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxRibbonBar, cannot match any of the overloads for function wxRibbonBar:\n  wxRibbonBar()\n  wxRibbonBar(wxWindow *, int, const wxPoint &, const wxSize &, long)\n");
		return NULL;
	}


	// Function binds:
	// bool wxRibbonBar::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxRIBBON_BAR_DEFAULT_STYLE)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonBar::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxRIBBON_BAR_DEFAULT_STYLE) function, expected prototype:\nbool wxRibbonBar::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxRIBBON_BAR_DEFAULT_STYLE)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : wxID_ANY;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRibbonBar::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRibbonBar::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxRIBBON_BAR_DEFAULT_STYLE;

		wxRibbonBar* self=dynamic_cast< wxRibbonBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonBar::Create(wxWindow *, int, const wxPoint &, const wxSize &, long)");
		}
		bool lret = self->Create(parent, id, pos, size, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRibbonBar::SetTabCtrlMargins(int left, int right)
	static int _bind_SetTabCtrlMargins(lua_State *L) {
		if (!_lg_typecheck_SetTabCtrlMargins(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRibbonBar::SetTabCtrlMargins(int left, int right) function, expected prototype:\nvoid wxRibbonBar::SetTabCtrlMargins(int left, int right)\nClass arguments details:\n");
		}

		int left=(int)lua_tointeger(L,2);
		int right=(int)lua_tointeger(L,3);

		wxRibbonBar* self=dynamic_cast< wxRibbonBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRibbonBar::SetTabCtrlMargins(int, int)");
		}
		self->SetTabCtrlMargins(left, right);

		return 0;
	}

	// void wxRibbonBar::SetArtProvider(wxRibbonArtProvider * art)
	static int _bind_SetArtProvider(lua_State *L) {
		if (!_lg_typecheck_SetArtProvider(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRibbonBar::SetArtProvider(wxRibbonArtProvider * art) function, expected prototype:\nvoid wxRibbonBar::SetArtProvider(wxRibbonArtProvider * art)\nClass arguments details:\narg 1 ID = 48201749\n");
		}

		wxRibbonArtProvider* art=(Luna< wxRibbonArtProvider >::check(L,2));

		wxRibbonBar* self=dynamic_cast< wxRibbonBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRibbonBar::SetArtProvider(wxRibbonArtProvider *)");
		}
		self->SetArtProvider(art);

		return 0;
	}

	// bool wxRibbonBar::SetActivePage(size_t page)
	static int _bind_SetActivePage_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetActivePage_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonBar::SetActivePage(size_t page) function, expected prototype:\nbool wxRibbonBar::SetActivePage(size_t page)\nClass arguments details:\n");
		}

		size_t page=(size_t)lua_tointeger(L,2);

		wxRibbonBar* self=dynamic_cast< wxRibbonBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonBar::SetActivePage(size_t)");
		}
		bool lret = self->SetActivePage(page);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonBar::SetActivePage(wxRibbonPage * page)
	static int _bind_SetActivePage_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetActivePage_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonBar::SetActivePage(wxRibbonPage * page) function, expected prototype:\nbool wxRibbonBar::SetActivePage(wxRibbonPage * page)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxRibbonPage* page=dynamic_cast< wxRibbonPage* >(Luna< wxObject >::check(L,2));

		wxRibbonBar* self=dynamic_cast< wxRibbonBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonBar::SetActivePage(wxRibbonPage *)");
		}
		bool lret = self->SetActivePage(page);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxRibbonBar::SetActivePage
	static int _bind_SetActivePage(lua_State *L) {
		if (_lg_typecheck_SetActivePage_overload_1(L)) return _bind_SetActivePage_overload_1(L);
		if (_lg_typecheck_SetActivePage_overload_2(L)) return _bind_SetActivePage_overload_2(L);

		luaL_error(L, "error in function SetActivePage, cannot match any of the overloads for function SetActivePage:\n  SetActivePage(size_t)\n  SetActivePage(wxRibbonPage *)\n");
		return 0;
	}

	// int wxRibbonBar::GetActivePage() const
	static int _bind_GetActivePage(lua_State *L) {
		if (!_lg_typecheck_GetActivePage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRibbonBar::GetActivePage() const function, expected prototype:\nint wxRibbonBar::GetActivePage() const\nClass arguments details:\n");
		}


		wxRibbonBar* self=dynamic_cast< wxRibbonBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRibbonBar::GetActivePage() const");
		}
		int lret = self->GetActivePage();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxRibbonPage * wxRibbonBar::GetPage(int n)
	static int _bind_GetPage(lua_State *L) {
		if (!_lg_typecheck_GetPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonPage * wxRibbonBar::GetPage(int n) function, expected prototype:\nwxRibbonPage * wxRibbonBar::GetPage(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxRibbonBar* self=dynamic_cast< wxRibbonBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonPage * wxRibbonBar::GetPage(int)");
		}
		wxRibbonPage * lret = self->GetPage(n);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonPage >::push(L,lret,false);

		return 1;
	}

	// bool wxRibbonBar::DismissExpandedPanel()
	static int _bind_DismissExpandedPanel(lua_State *L) {
		if (!_lg_typecheck_DismissExpandedPanel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonBar::DismissExpandedPanel() function, expected prototype:\nbool wxRibbonBar::DismissExpandedPanel()\nClass arguments details:\n");
		}


		wxRibbonBar* self=dynamic_cast< wxRibbonBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonBar::DismissExpandedPanel()");
		}
		bool lret = self->DismissExpandedPanel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRibbonBar::ShowPanels(bool show = true)
	static int _bind_ShowPanels(lua_State *L) {
		if (!_lg_typecheck_ShowPanels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRibbonBar::ShowPanels(bool show = true) function, expected prototype:\nvoid wxRibbonBar::ShowPanels(bool show = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxRibbonBar* self=dynamic_cast< wxRibbonBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRibbonBar::ShowPanels(bool)");
		}
		self->ShowPanels(show);

		return 0;
	}

	// void wxRibbonBar::HidePanels()
	static int _bind_HidePanels(lua_State *L) {
		if (!_lg_typecheck_HidePanels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRibbonBar::HidePanels() function, expected prototype:\nvoid wxRibbonBar::HidePanels()\nClass arguments details:\n");
		}


		wxRibbonBar* self=dynamic_cast< wxRibbonBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRibbonBar::HidePanels()");
		}
		self->HidePanels();

		return 0;
	}

	// bool wxRibbonBar::ArePanelsShown() const
	static int _bind_ArePanelsShown(lua_State *L) {
		if (!_lg_typecheck_ArePanelsShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonBar::ArePanelsShown() const function, expected prototype:\nbool wxRibbonBar::ArePanelsShown() const\nClass arguments details:\n");
		}


		wxRibbonBar* self=dynamic_cast< wxRibbonBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonBar::ArePanelsShown() const");
		}
		bool lret = self->ArePanelsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonBar::Realize()
	static int _bind_Realize(lua_State *L) {
		if (!_lg_typecheck_Realize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonBar::Realize() function, expected prototype:\nbool wxRibbonBar::Realize()\nClass arguments details:\n");
		}


		wxRibbonBar* self=dynamic_cast< wxRibbonBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonBar::Realize()");
		}
		bool lret = self->Realize();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxRibbonBar* LunaTraits< wxRibbonBar >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRibbonBar::_bind_ctor(L);
}

void LunaTraits< wxRibbonBar >::_bind_dtor(wxRibbonBar* obj) {
	delete obj;
}

const char LunaTraits< wxRibbonBar >::className[] = "wxRibbonBar";
const char LunaTraits< wxRibbonBar >::fullName[] = "wxRibbonBar";
const char LunaTraits< wxRibbonBar >::moduleName[] = "wx";
const char* LunaTraits< wxRibbonBar >::parents[] = {"wx.wxRibbonControl", 0};
const int LunaTraits< wxRibbonBar >::hash = 20975705;
const int LunaTraits< wxRibbonBar >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxRibbonBar >::methods[] = {
	{"Create", &luna_wrapper_wxRibbonBar::_bind_Create},
	{"SetTabCtrlMargins", &luna_wrapper_wxRibbonBar::_bind_SetTabCtrlMargins},
	{"SetArtProvider", &luna_wrapper_wxRibbonBar::_bind_SetArtProvider},
	{"SetActivePage", &luna_wrapper_wxRibbonBar::_bind_SetActivePage},
	{"GetActivePage", &luna_wrapper_wxRibbonBar::_bind_GetActivePage},
	{"GetPage", &luna_wrapper_wxRibbonBar::_bind_GetPage},
	{"DismissExpandedPanel", &luna_wrapper_wxRibbonBar::_bind_DismissExpandedPanel},
	{"ShowPanels", &luna_wrapper_wxRibbonBar::_bind_ShowPanels},
	{"HidePanels", &luna_wrapper_wxRibbonBar::_bind_HidePanels},
	{"ArePanelsShown", &luna_wrapper_wxRibbonBar::_bind_ArePanelsShown},
	{"Realize", &luna_wrapper_wxRibbonBar::_bind_Realize},
	{"__eq", &luna_wrapper_wxRibbonBar::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRibbonBar >::converters[] = {
	{"wxObject", &luna_wrapper_wxRibbonBar::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRibbonBar >::enumValues[] = {
	{0,0}
};


