#include <plug_common.h>

class luna_wrapper_wxHtmlHelpWindow {
public:
	typedef Luna< wxHtmlHelpWindow > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxHtmlHelpWindow* ptr= dynamic_cast< wxHtmlHelpWindow* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlHelpWindow >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>7 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,56813631)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Display_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Display_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DisplayContents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DisplayIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_KeywordSearch(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReadCustomization(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UseConfig(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WriteCustomization(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RefreshLists(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHtmlHelpWindow::wxHtmlHelpWindow(wxHtmlHelpData * data = NULL)
	static wxHtmlHelpWindow* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlHelpWindow::wxHtmlHelpWindow(wxHtmlHelpData * data = NULL) function, expected prototype:\nwxHtmlHelpWindow::wxHtmlHelpWindow(wxHtmlHelpData * data = NULL)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxHtmlHelpData* data=luatop>0 ? dynamic_cast< wxHtmlHelpData* >(Luna< wxObject >::check(L,1)) : (wxHtmlHelpData*)NULL;

		return new wxHtmlHelpWindow(data);
	}

	// wxHtmlHelpWindow::wxHtmlHelpWindow(wxWindow * parent, int wxWindowID, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, int style = wxTAB_TRAVERSAL | wxBORDER_NONE, int helpStyle = wxHF_DEFAULT_STYLE, wxHtmlHelpData * data = NULL)
	static wxHtmlHelpWindow* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlHelpWindow::wxHtmlHelpWindow(wxWindow * parent, int wxWindowID, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, int style = wxTAB_TRAVERSAL | wxBORDER_NONE, int helpStyle = wxHF_DEFAULT_STYLE, wxHtmlHelpData * data = NULL) function, expected prototype:\nwxHtmlHelpWindow::wxHtmlHelpWindow(wxWindow * parent, int wxWindowID, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, int style = wxTAB_TRAVERSAL | wxBORDER_NONE, int helpStyle = wxHF_DEFAULT_STYLE, wxHtmlHelpData * data = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 7 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int wxWindowID=(int)lua_tointeger(L,2);
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxHtmlHelpWindow::wxHtmlHelpWindow function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHtmlHelpWindow::wxHtmlHelpWindow function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : wxDefaultSize;
		int style=luatop>4 ? (int)lua_tointeger(L,5) : wxTAB_TRAVERSAL | wxBORDER_NONE;
		int helpStyle=luatop>5 ? (int)lua_tointeger(L,6) : wxHF_DEFAULT_STYLE;
		wxHtmlHelpData* data=luatop>6 ? dynamic_cast< wxHtmlHelpData* >(Luna< wxObject >::check(L,7)) : (wxHtmlHelpData*)NULL;

		return new wxHtmlHelpWindow(parent, wxWindowID, pos, size, style, helpStyle, data);
	}

	// Overload binder for wxHtmlHelpWindow::wxHtmlHelpWindow
	static wxHtmlHelpWindow* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxHtmlHelpWindow, cannot match any of the overloads for function wxHtmlHelpWindow:\n  wxHtmlHelpWindow(wxHtmlHelpData *)\n  wxHtmlHelpWindow(wxWindow *, int, const wxPoint &, const wxSize &, int, int, wxHtmlHelpData *)\n");
		return NULL;
	}


	// Function binds:
	// bool wxHtmlHelpWindow::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, int style = wxTAB_TRAVERSAL | wxBORDER_NONE, int helpStyle = wxHF_DEFAULT_STYLE)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpWindow::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, int style = wxTAB_TRAVERSAL | wxBORDER_NONE, int helpStyle = wxHF_DEFAULT_STYLE) function, expected prototype:\nbool wxHtmlHelpWindow::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, int style = wxTAB_TRAVERSAL | wxBORDER_NONE, int helpStyle = wxHF_DEFAULT_STYLE)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxHtmlHelpWindow::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHtmlHelpWindow::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		int style=luatop>5 ? (int)lua_tointeger(L,6) : wxTAB_TRAVERSAL | wxBORDER_NONE;
		int helpStyle=luatop>6 ? (int)lua_tointeger(L,7) : wxHF_DEFAULT_STYLE;

		wxHtmlHelpWindow* self=dynamic_cast< wxHtmlHelpWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpWindow::Create(wxWindow *, int, const wxPoint &, const wxSize &, int, int)");
		}
		bool lret = self->Create(parent, id, pos, size, style, helpStyle);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpWindow::Display(const wxString & x)
	static int _bind_Display_overload_1(lua_State *L) {
		if (!_lg_typecheck_Display_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpWindow::Display(const wxString & x) function, expected prototype:\nbool wxHtmlHelpWindow::Display(const wxString & x)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString x(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlHelpWindow* self=dynamic_cast< wxHtmlHelpWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpWindow::Display(const wxString &)");
		}
		bool lret = self->Display(x);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpWindow::Display(const int id)
	static int _bind_Display_overload_2(lua_State *L) {
		if (!_lg_typecheck_Display_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpWindow::Display(const int id) function, expected prototype:\nbool wxHtmlHelpWindow::Display(const int id)\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);

		wxHtmlHelpWindow* self=dynamic_cast< wxHtmlHelpWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpWindow::Display(const int)");
		}
		bool lret = self->Display(id);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxHtmlHelpWindow::Display
	static int _bind_Display(lua_State *L) {
		if (_lg_typecheck_Display_overload_1(L)) return _bind_Display_overload_1(L);
		if (_lg_typecheck_Display_overload_2(L)) return _bind_Display_overload_2(L);

		luaL_error(L, "error in function Display, cannot match any of the overloads for function Display:\n  Display(const wxString &)\n  Display(const int)\n");
		return 0;
	}

	// bool wxHtmlHelpWindow::DisplayContents()
	static int _bind_DisplayContents(lua_State *L) {
		if (!_lg_typecheck_DisplayContents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpWindow::DisplayContents() function, expected prototype:\nbool wxHtmlHelpWindow::DisplayContents()\nClass arguments details:\n");
		}


		wxHtmlHelpWindow* self=dynamic_cast< wxHtmlHelpWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpWindow::DisplayContents()");
		}
		bool lret = self->DisplayContents();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpWindow::DisplayIndex()
	static int _bind_DisplayIndex(lua_State *L) {
		if (!_lg_typecheck_DisplayIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpWindow::DisplayIndex() function, expected prototype:\nbool wxHtmlHelpWindow::DisplayIndex()\nClass arguments details:\n");
		}


		wxHtmlHelpWindow* self=dynamic_cast< wxHtmlHelpWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpWindow::DisplayIndex()");
		}
		bool lret = self->DisplayIndex();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxHtmlHelpData * wxHtmlHelpWindow::GetData()
	static int _bind_GetData(lua_State *L) {
		if (!_lg_typecheck_GetData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlHelpData * wxHtmlHelpWindow::GetData() function, expected prototype:\nwxHtmlHelpData * wxHtmlHelpWindow::GetData()\nClass arguments details:\n");
		}


		wxHtmlHelpWindow* self=dynamic_cast< wxHtmlHelpWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxHtmlHelpData * wxHtmlHelpWindow::GetData()");
		}
		wxHtmlHelpData * lret = self->GetData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlHelpData >::push(L,lret,false);

		return 1;
	}

	// bool wxHtmlHelpWindow::KeywordSearch(const wxString & keyword, wxHelpSearchMode mode = wxHELP_SEARCH_ALL)
	static int _bind_KeywordSearch(lua_State *L) {
		if (!_lg_typecheck_KeywordSearch(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpWindow::KeywordSearch(const wxString & keyword, wxHelpSearchMode mode = wxHELP_SEARCH_ALL) function, expected prototype:\nbool wxHtmlHelpWindow::KeywordSearch(const wxString & keyword, wxHelpSearchMode mode = wxHELP_SEARCH_ALL)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString keyword(lua_tostring(L,2),lua_objlen(L,2));
		wxHelpSearchMode mode=luatop>2 ? (wxHelpSearchMode)lua_tointeger(L,3) : wxHELP_SEARCH_ALL;

		wxHtmlHelpWindow* self=dynamic_cast< wxHtmlHelpWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpWindow::KeywordSearch(const wxString &, wxHelpSearchMode)");
		}
		bool lret = self->KeywordSearch(keyword, mode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlHelpWindow::ReadCustomization(wxConfigBase * cfg, const wxString & path = wxEmptyString)
	static int _bind_ReadCustomization(lua_State *L) {
		if (!_lg_typecheck_ReadCustomization(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpWindow::ReadCustomization(wxConfigBase * cfg, const wxString & path = wxEmptyString) function, expected prototype:\nvoid wxHtmlHelpWindow::ReadCustomization(wxConfigBase * cfg, const wxString & path = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxConfigBase* cfg=dynamic_cast< wxConfigBase* >(Luna< wxObject >::check(L,2));
		wxString path(lua_tostring(L,3),lua_objlen(L,3));

		wxHtmlHelpWindow* self=dynamic_cast< wxHtmlHelpWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpWindow::ReadCustomization(wxConfigBase *, const wxString &)");
		}
		self->ReadCustomization(cfg, path);

		return 0;
	}

	// void wxHtmlHelpWindow::UseConfig(wxConfigBase * config, const wxString & rootpath = wxEmptyString)
	static int _bind_UseConfig(lua_State *L) {
		if (!_lg_typecheck_UseConfig(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpWindow::UseConfig(wxConfigBase * config, const wxString & rootpath = wxEmptyString) function, expected prototype:\nvoid wxHtmlHelpWindow::UseConfig(wxConfigBase * config, const wxString & rootpath = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxConfigBase* config=dynamic_cast< wxConfigBase* >(Luna< wxObject >::check(L,2));
		wxString rootpath(lua_tostring(L,3),lua_objlen(L,3));

		wxHtmlHelpWindow* self=dynamic_cast< wxHtmlHelpWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpWindow::UseConfig(wxConfigBase *, const wxString &)");
		}
		self->UseConfig(config, rootpath);

		return 0;
	}

	// void wxHtmlHelpWindow::WriteCustomization(wxConfigBase * cfg, const wxString & path = wxEmptyString)
	static int _bind_WriteCustomization(lua_State *L) {
		if (!_lg_typecheck_WriteCustomization(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpWindow::WriteCustomization(wxConfigBase * cfg, const wxString & path = wxEmptyString) function, expected prototype:\nvoid wxHtmlHelpWindow::WriteCustomization(wxConfigBase * cfg, const wxString & path = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxConfigBase* cfg=dynamic_cast< wxConfigBase* >(Luna< wxObject >::check(L,2));
		wxString path(lua_tostring(L,3),lua_objlen(L,3));

		wxHtmlHelpWindow* self=dynamic_cast< wxHtmlHelpWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpWindow::WriteCustomization(wxConfigBase *, const wxString &)");
		}
		self->WriteCustomization(cfg, path);

		return 0;
	}

	// void wxHtmlHelpWindow::RefreshLists()
	static int _bind_RefreshLists(lua_State *L) {
		if (!_lg_typecheck_RefreshLists(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpWindow::RefreshLists() function, expected prototype:\nvoid wxHtmlHelpWindow::RefreshLists()\nClass arguments details:\n");
		}


		wxHtmlHelpWindow* self=dynamic_cast< wxHtmlHelpWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpWindow::RefreshLists()");
		}
		self->RefreshLists();

		return 0;
	}


	// Operator binds:

};

wxHtmlHelpWindow* LunaTraits< wxHtmlHelpWindow >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHtmlHelpWindow::_bind_ctor(L);
}

void LunaTraits< wxHtmlHelpWindow >::_bind_dtor(wxHtmlHelpWindow* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlHelpWindow >::className[] = "wxHtmlHelpWindow";
const char LunaTraits< wxHtmlHelpWindow >::fullName[] = "wxHtmlHelpWindow";
const char LunaTraits< wxHtmlHelpWindow >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlHelpWindow >::parents[] = {"wx.wxWindow", 0};
const int LunaTraits< wxHtmlHelpWindow >::hash = 46420009;
const int LunaTraits< wxHtmlHelpWindow >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxHtmlHelpWindow >::methods[] = {
	{"Create", &luna_wrapper_wxHtmlHelpWindow::_bind_Create},
	{"Display", &luna_wrapper_wxHtmlHelpWindow::_bind_Display},
	{"DisplayContents", &luna_wrapper_wxHtmlHelpWindow::_bind_DisplayContents},
	{"DisplayIndex", &luna_wrapper_wxHtmlHelpWindow::_bind_DisplayIndex},
	{"GetData", &luna_wrapper_wxHtmlHelpWindow::_bind_GetData},
	{"KeywordSearch", &luna_wrapper_wxHtmlHelpWindow::_bind_KeywordSearch},
	{"ReadCustomization", &luna_wrapper_wxHtmlHelpWindow::_bind_ReadCustomization},
	{"UseConfig", &luna_wrapper_wxHtmlHelpWindow::_bind_UseConfig},
	{"WriteCustomization", &luna_wrapper_wxHtmlHelpWindow::_bind_WriteCustomization},
	{"RefreshLists", &luna_wrapper_wxHtmlHelpWindow::_bind_RefreshLists},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlHelpWindow >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlHelpWindow::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlHelpWindow >::enumValues[] = {
	{0,0}
};


