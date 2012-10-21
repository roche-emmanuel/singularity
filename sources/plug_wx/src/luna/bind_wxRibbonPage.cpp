#include <plug_common.h>

class luna_wrapper_wxRibbonPage {
public:
	typedef Luna< wxRibbonPage > luna_t;

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
		wxRibbonPage* ptr= dynamic_cast< wxRibbonPage* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRibbonPage >::push(L,ptr,false);
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
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxRibbonBar* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>3 && (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4))) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetArtProvider(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,48201749)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetIcon(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetSizeWithScrollButtonAdjustment(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AdjustRectToIncludeScrollButtons(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,20234418)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DismissExpandedPanel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Realize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ScrollLines(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScrollPixels(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMajorAxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxRibbonPage::wxRibbonPage()
	static wxRibbonPage* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonPage::wxRibbonPage() function, expected prototype:\nwxRibbonPage::wxRibbonPage()\nClass arguments details:\n");
		}


		return new wxRibbonPage();
	}

	// wxRibbonPage::wxRibbonPage(wxRibbonBar * parent, int id = wxID_ANY, const wxString & label = wxEmptyString, const wxBitmap & icon = wxNullBitmap, long style = 0)
	static wxRibbonPage* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonPage::wxRibbonPage(wxRibbonBar * parent, int id = wxID_ANY, const wxString & label = wxEmptyString, const wxBitmap & icon = wxNullBitmap, long style = 0) function, expected prototype:\nwxRibbonPage::wxRibbonPage(wxRibbonBar * parent, int id = wxID_ANY, const wxString & label = wxEmptyString, const wxBitmap & icon = wxNullBitmap, long style = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxRibbonBar* parent=dynamic_cast< wxRibbonBar* >(Luna< wxObject >::check(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : wxID_ANY;
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		const wxBitmap* icon_ptr=luatop>3 ? dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4)) : NULL;
		if( luatop>3 && !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxRibbonPage::wxRibbonPage function");
		}
		const wxBitmap & icon=luatop>3 ? *icon_ptr : wxNullBitmap;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : 0;

		return new wxRibbonPage(parent, id, label, icon, style);
	}

	// Overload binder for wxRibbonPage::wxRibbonPage
	static wxRibbonPage* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxRibbonPage, cannot match any of the overloads for function wxRibbonPage:\n  wxRibbonPage()\n  wxRibbonPage(wxRibbonBar *, int, const wxString &, const wxBitmap &, long)\n");
		return NULL;
	}


	// Function binds:
	// bool wxRibbonPage::Create(wxRibbonBar * parent, int id = wxID_ANY, const wxString & label = wxEmptyString, const wxBitmap & icon = wxNullBitmap, long style = 0)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonPage::Create(wxRibbonBar * parent, int id = wxID_ANY, const wxString & label = wxEmptyString, const wxBitmap & icon = wxNullBitmap, long style = 0) function, expected prototype:\nbool wxRibbonPage::Create(wxRibbonBar * parent, int id = wxID_ANY, const wxString & label = wxEmptyString, const wxBitmap & icon = wxNullBitmap, long style = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxRibbonBar* parent=dynamic_cast< wxRibbonBar* >(Luna< wxObject >::check(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : wxID_ANY;
		wxString label(lua_tostring(L,4),lua_objlen(L,4));
		const wxBitmap* icon_ptr=luatop>4 ? dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,5)) : NULL;
		if( luatop>4 && !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxRibbonPage::Create function");
		}
		const wxBitmap & icon=luatop>4 ? *icon_ptr : wxNullBitmap;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0;

		wxRibbonPage* self=dynamic_cast< wxRibbonPage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonPage::Create(wxRibbonBar *, int, const wxString &, const wxBitmap &, long)");
		}
		bool lret = self->Create(parent, id, label, icon, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRibbonPage::SetArtProvider(wxRibbonArtProvider * art)
	static int _bind_SetArtProvider(lua_State *L) {
		if (!_lg_typecheck_SetArtProvider(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRibbonPage::SetArtProvider(wxRibbonArtProvider * art) function, expected prototype:\nvoid wxRibbonPage::SetArtProvider(wxRibbonArtProvider * art)\nClass arguments details:\narg 1 ID = 48201749\n");
		}

		wxRibbonArtProvider* art=(Luna< wxRibbonArtProvider >::check(L,2));

		wxRibbonPage* self=dynamic_cast< wxRibbonPage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRibbonPage::SetArtProvider(wxRibbonArtProvider *)");
		}
		self->SetArtProvider(art);

		return 0;
	}

	// wxBitmap & wxRibbonPage::GetIcon()
	static int _bind_GetIcon(lua_State *L) {
		if (!_lg_typecheck_GetIcon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap & wxRibbonPage::GetIcon() function, expected prototype:\nwxBitmap & wxRibbonPage::GetIcon()\nClass arguments details:\n");
		}


		wxRibbonPage* self=dynamic_cast< wxRibbonPage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBitmap & wxRibbonPage::GetIcon()");
		}
		const wxBitmap* lret = &self->GetIcon();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,false);

		return 1;
	}

	// void wxRibbonPage::SetSizeWithScrollButtonAdjustment(int x, int y, int width, int height)
	static int _bind_SetSizeWithScrollButtonAdjustment(lua_State *L) {
		if (!_lg_typecheck_SetSizeWithScrollButtonAdjustment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRibbonPage::SetSizeWithScrollButtonAdjustment(int x, int y, int width, int height) function, expected prototype:\nvoid wxRibbonPage::SetSizeWithScrollButtonAdjustment(int x, int y, int width, int height)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		wxRibbonPage* self=dynamic_cast< wxRibbonPage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRibbonPage::SetSizeWithScrollButtonAdjustment(int, int, int, int)");
		}
		self->SetSizeWithScrollButtonAdjustment(x, y, width, height);

		return 0;
	}

	// void wxRibbonPage::AdjustRectToIncludeScrollButtons(wxRect * rect) const
	static int _bind_AdjustRectToIncludeScrollButtons(lua_State *L) {
		if (!_lg_typecheck_AdjustRectToIncludeScrollButtons(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRibbonPage::AdjustRectToIncludeScrollButtons(wxRect * rect) const function, expected prototype:\nvoid wxRibbonPage::AdjustRectToIncludeScrollButtons(wxRect * rect) const\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		wxRect* rect=(Luna< wxRect >::check(L,2));

		wxRibbonPage* self=dynamic_cast< wxRibbonPage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRibbonPage::AdjustRectToIncludeScrollButtons(wxRect *) const");
		}
		self->AdjustRectToIncludeScrollButtons(rect);

		return 0;
	}

	// bool wxRibbonPage::DismissExpandedPanel()
	static int _bind_DismissExpandedPanel(lua_State *L) {
		if (!_lg_typecheck_DismissExpandedPanel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonPage::DismissExpandedPanel() function, expected prototype:\nbool wxRibbonPage::DismissExpandedPanel()\nClass arguments details:\n");
		}


		wxRibbonPage* self=dynamic_cast< wxRibbonPage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonPage::DismissExpandedPanel()");
		}
		bool lret = self->DismissExpandedPanel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonPage::Realize()
	static int _bind_Realize(lua_State *L) {
		if (!_lg_typecheck_Realize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonPage::Realize() function, expected prototype:\nbool wxRibbonPage::Realize()\nClass arguments details:\n");
		}


		wxRibbonPage* self=dynamic_cast< wxRibbonPage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonPage::Realize()");
		}
		bool lret = self->Realize();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonPage::ScrollLines(int lines)
	static int _bind_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_ScrollLines(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonPage::ScrollLines(int lines) function, expected prototype:\nbool wxRibbonPage::ScrollLines(int lines)\nClass arguments details:\n");
		}

		int lines=(int)lua_tointeger(L,2);

		wxRibbonPage* self=dynamic_cast< wxRibbonPage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonPage::ScrollLines(int)");
		}
		bool lret = self->ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonPage::ScrollPixels(int pixels)
	static int _bind_ScrollPixels(lua_State *L) {
		if (!_lg_typecheck_ScrollPixels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonPage::ScrollPixels(int pixels) function, expected prototype:\nbool wxRibbonPage::ScrollPixels(int pixels)\nClass arguments details:\n");
		}

		int pixels=(int)lua_tointeger(L,2);

		wxRibbonPage* self=dynamic_cast< wxRibbonPage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonPage::ScrollPixels(int)");
		}
		bool lret = self->ScrollPixels(pixels);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxOrientation wxRibbonPage::GetMajorAxis() const
	static int _bind_GetMajorAxis(lua_State *L) {
		if (!_lg_typecheck_GetMajorAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxOrientation wxRibbonPage::GetMajorAxis() const function, expected prototype:\nwxOrientation wxRibbonPage::GetMajorAxis() const\nClass arguments details:\n");
		}


		wxRibbonPage* self=dynamic_cast< wxRibbonPage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxOrientation wxRibbonPage::GetMajorAxis() const");
		}
		wxOrientation lret = self->GetMajorAxis();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxRibbonPage* LunaTraits< wxRibbonPage >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRibbonPage::_bind_ctor(L);
}

void LunaTraits< wxRibbonPage >::_bind_dtor(wxRibbonPage* obj) {
	delete obj;
}

const char LunaTraits< wxRibbonPage >::className[] = "wxRibbonPage";
const char LunaTraits< wxRibbonPage >::fullName[] = "wxRibbonPage";
const char LunaTraits< wxRibbonPage >::moduleName[] = "wx";
const char* LunaTraits< wxRibbonPage >::parents[] = {"wx.wxRibbonControl", 0};
const int LunaTraits< wxRibbonPage >::hash = 50663617;
const int LunaTraits< wxRibbonPage >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxRibbonPage >::methods[] = {
	{"Create", &luna_wrapper_wxRibbonPage::_bind_Create},
	{"SetArtProvider", &luna_wrapper_wxRibbonPage::_bind_SetArtProvider},
	{"GetIcon", &luna_wrapper_wxRibbonPage::_bind_GetIcon},
	{"SetSizeWithScrollButtonAdjustment", &luna_wrapper_wxRibbonPage::_bind_SetSizeWithScrollButtonAdjustment},
	{"AdjustRectToIncludeScrollButtons", &luna_wrapper_wxRibbonPage::_bind_AdjustRectToIncludeScrollButtons},
	{"DismissExpandedPanel", &luna_wrapper_wxRibbonPage::_bind_DismissExpandedPanel},
	{"Realize", &luna_wrapper_wxRibbonPage::_bind_Realize},
	{"ScrollLines", &luna_wrapper_wxRibbonPage::_bind_ScrollLines},
	{"ScrollPixels", &luna_wrapper_wxRibbonPage::_bind_ScrollPixels},
	{"GetMajorAxis", &luna_wrapper_wxRibbonPage::_bind_GetMajorAxis},
	{"__eq", &luna_wrapper_wxRibbonPage::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRibbonPage >::converters[] = {
	{"wxObject", &luna_wrapper_wxRibbonPage::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRibbonPage >::enumValues[] = {
	{0,0}
};


