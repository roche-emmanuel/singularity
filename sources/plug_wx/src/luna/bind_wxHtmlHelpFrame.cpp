#include <plug_common.h>

class luna_wrapper_wxHtmlHelpFrame {
public:
	typedef Luna< wxHtmlHelpFrame > luna_t;

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
		wxHtmlHelpFrame* ptr= dynamic_cast< wxHtmlHelpFrame* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlHelpFrame >::push(L,ptr,false);
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
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,56813631)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddToolbarButtons(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetController(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetController(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,14199711)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTitleFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHtmlHelpFrame::wxHtmlHelpFrame(wxHtmlHelpData * data = NULL)
	static wxHtmlHelpFrame* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlHelpFrame::wxHtmlHelpFrame(wxHtmlHelpData * data = NULL) function, expected prototype:\nwxHtmlHelpFrame::wxHtmlHelpFrame(wxHtmlHelpData * data = NULL)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxHtmlHelpData* data=luatop>0 ? dynamic_cast< wxHtmlHelpData* >(Luna< wxObject >::check(L,1)) : (wxHtmlHelpData*)NULL;

		return new wxHtmlHelpFrame(data);
	}

	// wxHtmlHelpFrame::wxHtmlHelpFrame(wxWindow * parent, int wxWindowID, const wxString & title = wxEmptyString, int style = wxHF_DEFAULT_STYLE, wxHtmlHelpData * data = NULL, wxConfigBase * config = NULL, const wxString & rootpath = wxEmptyString)
	static wxHtmlHelpFrame* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlHelpFrame::wxHtmlHelpFrame(wxWindow * parent, int wxWindowID, const wxString & title = wxEmptyString, int style = wxHF_DEFAULT_STYLE, wxHtmlHelpData * data = NULL, wxConfigBase * config = NULL, const wxString & rootpath = wxEmptyString) function, expected prototype:\nwxHtmlHelpFrame::wxHtmlHelpFrame(wxWindow * parent, int wxWindowID, const wxString & title = wxEmptyString, int style = wxHF_DEFAULT_STYLE, wxHtmlHelpData * data = NULL, wxConfigBase * config = NULL, const wxString & rootpath = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 5 ID = 56813631\narg 6 ID = 56813631\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int wxWindowID=(int)lua_tointeger(L,2);
		wxString title(lua_tostring(L,3),lua_objlen(L,3));
		int style=luatop>3 ? (int)lua_tointeger(L,4) : wxHF_DEFAULT_STYLE;
		wxHtmlHelpData* data=luatop>4 ? dynamic_cast< wxHtmlHelpData* >(Luna< wxObject >::check(L,5)) : (wxHtmlHelpData*)NULL;
		wxConfigBase* config=luatop>5 ? dynamic_cast< wxConfigBase* >(Luna< wxObject >::check(L,6)) : (wxConfigBase*)NULL;
		wxString rootpath(lua_tostring(L,7),lua_objlen(L,7));

		return new wxHtmlHelpFrame(parent, wxWindowID, title, style, data, config, rootpath);
	}

	// Overload binder for wxHtmlHelpFrame::wxHtmlHelpFrame
	static wxHtmlHelpFrame* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxHtmlHelpFrame, cannot match any of the overloads for function wxHtmlHelpFrame:\n  wxHtmlHelpFrame(wxHtmlHelpData *)\n  wxHtmlHelpFrame(wxWindow *, int, const wxString &, int, wxHtmlHelpData *, wxConfigBase *, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// void wxHtmlHelpFrame::AddToolbarButtons(wxToolBar * toolBar, int style)
	static int _bind_AddToolbarButtons(lua_State *L) {
		if (!_lg_typecheck_AddToolbarButtons(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::AddToolbarButtons(wxToolBar * toolBar, int style) function, expected prototype:\nvoid wxHtmlHelpFrame::AddToolbarButtons(wxToolBar * toolBar, int style)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxToolBar* toolBar=dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,2));
		int style=(int)lua_tointeger(L,3);

		wxHtmlHelpFrame* self=dynamic_cast< wxHtmlHelpFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::AddToolbarButtons(wxToolBar *, int)");
		}
		self->AddToolbarButtons(toolBar, style);

		return 0;
	}

	// bool wxHtmlHelpFrame::Create(wxWindow * parent, int id, const wxString & title = wxEmptyString, int style = wxHF_DEFAULT_STYLE, wxConfigBase * config = NULL, const wxString & rootpath = wxEmptyString)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpFrame::Create(wxWindow * parent, int id, const wxString & title = wxEmptyString, int style = wxHF_DEFAULT_STYLE, wxConfigBase * config = NULL, const wxString & rootpath = wxEmptyString) function, expected prototype:\nbool wxHtmlHelpFrame::Create(wxWindow * parent, int id, const wxString & title = wxEmptyString, int style = wxHF_DEFAULT_STYLE, wxConfigBase * config = NULL, const wxString & rootpath = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 5 ID = 56813631\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString title(lua_tostring(L,4),lua_objlen(L,4));
		int style=luatop>4 ? (int)lua_tointeger(L,5) : wxHF_DEFAULT_STYLE;
		wxConfigBase* config=luatop>5 ? dynamic_cast< wxConfigBase* >(Luna< wxObject >::check(L,6)) : (wxConfigBase*)NULL;
		wxString rootpath(lua_tostring(L,7),lua_objlen(L,7));

		wxHtmlHelpFrame* self=dynamic_cast< wxHtmlHelpFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpFrame::Create(wxWindow *, int, const wxString &, int, wxConfigBase *, const wxString &)");
		}
		bool lret = self->Create(parent, id, title, style, config, rootpath);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxHtmlHelpController * wxHtmlHelpFrame::GetController() const
	static int _bind_GetController(lua_State *L) {
		if (!_lg_typecheck_GetController(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlHelpController * wxHtmlHelpFrame::GetController() const function, expected prototype:\nwxHtmlHelpController * wxHtmlHelpFrame::GetController() const\nClass arguments details:\n");
		}


		wxHtmlHelpFrame* self=dynamic_cast< wxHtmlHelpFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxHtmlHelpController * wxHtmlHelpFrame::GetController() const");
		}
		wxHtmlHelpController * lret = self->GetController();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlHelpController >::push(L,lret,false);

		return 1;
	}

	// void wxHtmlHelpFrame::SetController(wxHtmlHelpController * controller)
	static int _bind_SetController(lua_State *L) {
		if (!_lg_typecheck_SetController(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::SetController(wxHtmlHelpController * controller) function, expected prototype:\nvoid wxHtmlHelpFrame::SetController(wxHtmlHelpController * controller)\nClass arguments details:\narg 1 ID = 14199711\n");
		}

		wxHtmlHelpController* controller=(Luna< wxHtmlHelpController >::check(L,2));

		wxHtmlHelpFrame* self=dynamic_cast< wxHtmlHelpFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::SetController(wxHtmlHelpController *)");
		}
		self->SetController(controller);

		return 0;
	}

	// void wxHtmlHelpFrame::SetTitleFormat(const wxString & format)
	static int _bind_SetTitleFormat(lua_State *L) {
		if (!_lg_typecheck_SetTitleFormat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpFrame::SetTitleFormat(const wxString & format) function, expected prototype:\nvoid wxHtmlHelpFrame::SetTitleFormat(const wxString & format)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString format(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlHelpFrame* self=dynamic_cast< wxHtmlHelpFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlHelpFrame::SetTitleFormat(const wxString &)");
		}
		self->SetTitleFormat(format);

		return 0;
	}


	// Operator binds:

};

wxHtmlHelpFrame* LunaTraits< wxHtmlHelpFrame >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHtmlHelpFrame::_bind_ctor(L);
}

void LunaTraits< wxHtmlHelpFrame >::_bind_dtor(wxHtmlHelpFrame* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlHelpFrame >::className[] = "wxHtmlHelpFrame";
const char LunaTraits< wxHtmlHelpFrame >::fullName[] = "wxHtmlHelpFrame";
const char LunaTraits< wxHtmlHelpFrame >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlHelpFrame >::parents[] = {"wx.wxFrame", 0};
const int LunaTraits< wxHtmlHelpFrame >::hash = 66698628;
const int LunaTraits< wxHtmlHelpFrame >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxHtmlHelpFrame >::methods[] = {
	{"AddToolbarButtons", &luna_wrapper_wxHtmlHelpFrame::_bind_AddToolbarButtons},
	{"Create", &luna_wrapper_wxHtmlHelpFrame::_bind_Create},
	{"GetController", &luna_wrapper_wxHtmlHelpFrame::_bind_GetController},
	{"SetController", &luna_wrapper_wxHtmlHelpFrame::_bind_SetController},
	{"SetTitleFormat", &luna_wrapper_wxHtmlHelpFrame::_bind_SetTitleFormat},
	{"__eq", &luna_wrapper_wxHtmlHelpFrame::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlHelpFrame >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlHelpFrame::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlHelpFrame >::enumValues[] = {
	{0,0}
};


