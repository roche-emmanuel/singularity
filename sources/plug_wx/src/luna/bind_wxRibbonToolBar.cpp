#include <plug_common.h>

class luna_wrapper_wxRibbonToolBar {
public:
	typedef Luna< wxRibbonToolBar > luna_t;

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
		wxRibbonToolBar* ptr= dynamic_cast< wxRibbonToolBar* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRibbonToolBar >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTrackable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRibbonToolBar* ptr= static_cast< wxRibbonToolBar* >(Luna< wxTrackable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRibbonToolBar >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_AddTool_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3))) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddTool_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>3 && (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4))) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,56813631)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !dynamic_cast< wxObject* >(Luna< wxObject >::check(L,7)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddDropdownTool(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddHybridTool(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddSeparator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRows(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxRibbonToolBar::wxRibbonToolBar()
	static wxRibbonToolBar* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonToolBar::wxRibbonToolBar() function, expected prototype:\nwxRibbonToolBar::wxRibbonToolBar()\nClass arguments details:\n");
		}


		return new wxRibbonToolBar();
	}

	// wxRibbonToolBar::wxRibbonToolBar(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0)
	static wxRibbonToolBar* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonToolBar::wxRibbonToolBar(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0) function, expected prototype:\nwxRibbonToolBar::wxRibbonToolBar(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : wxID_ANY;
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRibbonToolBar::wxRibbonToolBar function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRibbonToolBar::wxRibbonToolBar function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : wxDefaultSize;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : 0;

		return new wxRibbonToolBar(parent, id, pos, size, style);
	}

	// Overload binder for wxRibbonToolBar::wxRibbonToolBar
	static wxRibbonToolBar* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxRibbonToolBar, cannot match any of the overloads for function wxRibbonToolBar:\n  wxRibbonToolBar()\n  wxRibbonToolBar(wxWindow *, int, const wxPoint &, const wxSize &, long)\n");
		return NULL;
	}


	// Function binds:
	// bool wxRibbonToolBar::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonToolBar::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0) function, expected prototype:\nbool wxRibbonToolBar::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : wxID_ANY;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRibbonToolBar::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRibbonToolBar::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0;

		wxRibbonToolBar* self=dynamic_cast< wxRibbonToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonToolBar::Create(wxWindow *, int, const wxPoint &, const wxSize &, long)");
		}
		bool lret = self->Create(parent, id, pos, size, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxRibbonToolBarToolBase * wxRibbonToolBar::AddTool(int tool_id, const wxBitmap & bitmap, const wxString & help_string, wxRibbonButtonKind kind = wxRIBBON_BUTTON_NORMAL)
	static int _bind_AddTool_overload_1(lua_State *L) {
		if (!_lg_typecheck_AddTool_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonToolBarToolBase * wxRibbonToolBar::AddTool(int tool_id, const wxBitmap & bitmap, const wxString & help_string, wxRibbonButtonKind kind = wxRIBBON_BUTTON_NORMAL) function, expected prototype:\nwxRibbonToolBarToolBase * wxRibbonToolBar::AddTool(int tool_id, const wxBitmap & bitmap, const wxString & help_string, wxRibbonButtonKind kind = wxRIBBON_BUTTON_NORMAL)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		int tool_id=(int)lua_tointeger(L,2);
		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxRibbonToolBar::AddTool function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		wxString help_string(lua_tostring(L,4),lua_objlen(L,4));
		wxRibbonButtonKind kind=luatop>4 ? (wxRibbonButtonKind)lua_tointeger(L,5) : wxRIBBON_BUTTON_NORMAL;

		wxRibbonToolBar* self=dynamic_cast< wxRibbonToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonToolBarToolBase * wxRibbonToolBar::AddTool(int, const wxBitmap &, const wxString &, wxRibbonButtonKind)");
		}
		wxRibbonToolBarToolBase * lret = self->AddTool(tool_id, bitmap, help_string, kind);
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'wxRibbonToolBarToolBase *'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// wxRibbonToolBarToolBase * wxRibbonToolBar::AddTool(int tool_id, const wxBitmap & bitmap, const wxBitmap & bitmap_disabled = wxNullBitmap, const wxString & help_string = wxEmptyString, wxRibbonButtonKind kind = wxRIBBON_BUTTON_NORMAL, wxObject * client_data = NULL)
	static int _bind_AddTool_overload_2(lua_State *L) {
		if (!_lg_typecheck_AddTool_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonToolBarToolBase * wxRibbonToolBar::AddTool(int tool_id, const wxBitmap & bitmap, const wxBitmap & bitmap_disabled = wxNullBitmap, const wxString & help_string = wxEmptyString, wxRibbonButtonKind kind = wxRIBBON_BUTTON_NORMAL, wxObject * client_data = NULL) function, expected prototype:\nwxRibbonToolBarToolBase * wxRibbonToolBar::AddTool(int tool_id, const wxBitmap & bitmap, const wxBitmap & bitmap_disabled = wxNullBitmap, const wxString & help_string = wxEmptyString, wxRibbonButtonKind kind = wxRIBBON_BUTTON_NORMAL, wxObject * client_data = NULL)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 56813631\narg 4 ID = 88196105\narg 6 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		int tool_id=(int)lua_tointeger(L,2);
		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxRibbonToolBar::AddTool function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		const wxBitmap* bitmap_disabled_ptr=luatop>3 ? dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4)) : NULL;
		if( luatop>3 && !bitmap_disabled_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap_disabled in wxRibbonToolBar::AddTool function");
		}
		const wxBitmap & bitmap_disabled=luatop>3 ? *bitmap_disabled_ptr : wxNullBitmap;
		wxString help_string(lua_tostring(L,5),lua_objlen(L,5));
		wxRibbonButtonKind kind=luatop>5 ? (wxRibbonButtonKind)lua_tointeger(L,6) : wxRIBBON_BUTTON_NORMAL;
		wxObject* client_data=luatop>6 ? (Luna< wxObject >::check(L,7)) : (wxObject*)NULL;

		wxRibbonToolBar* self=dynamic_cast< wxRibbonToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonToolBarToolBase * wxRibbonToolBar::AddTool(int, const wxBitmap &, const wxBitmap &, const wxString &, wxRibbonButtonKind, wxObject *)");
		}
		wxRibbonToolBarToolBase * lret = self->AddTool(tool_id, bitmap, bitmap_disabled, help_string, kind, client_data);
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'wxRibbonToolBarToolBase *'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// Overload binder for wxRibbonToolBar::AddTool
	static int _bind_AddTool(lua_State *L) {
		if (_lg_typecheck_AddTool_overload_1(L)) return _bind_AddTool_overload_1(L);
		if (_lg_typecheck_AddTool_overload_2(L)) return _bind_AddTool_overload_2(L);

		luaL_error(L, "error in function AddTool, cannot match any of the overloads for function AddTool:\n  AddTool(int, const wxBitmap &, const wxString &, wxRibbonButtonKind)\n  AddTool(int, const wxBitmap &, const wxBitmap &, const wxString &, wxRibbonButtonKind, wxObject *)\n");
		return 0;
	}

	// wxRibbonToolBarToolBase * wxRibbonToolBar::AddDropdownTool(int tool_id, const wxBitmap & bitmap, const wxString & help_string = wxEmptyString)
	static int _bind_AddDropdownTool(lua_State *L) {
		if (!_lg_typecheck_AddDropdownTool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonToolBarToolBase * wxRibbonToolBar::AddDropdownTool(int tool_id, const wxBitmap & bitmap, const wxString & help_string = wxEmptyString) function, expected prototype:\nwxRibbonToolBarToolBase * wxRibbonToolBar::AddDropdownTool(int tool_id, const wxBitmap & bitmap, const wxString & help_string = wxEmptyString)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		int tool_id=(int)lua_tointeger(L,2);
		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxRibbonToolBar::AddDropdownTool function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		wxString help_string(lua_tostring(L,4),lua_objlen(L,4));

		wxRibbonToolBar* self=dynamic_cast< wxRibbonToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonToolBarToolBase * wxRibbonToolBar::AddDropdownTool(int, const wxBitmap &, const wxString &)");
		}
		wxRibbonToolBarToolBase * lret = self->AddDropdownTool(tool_id, bitmap, help_string);
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'wxRibbonToolBarToolBase *'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// wxRibbonToolBarToolBase * wxRibbonToolBar::AddHybridTool(int tool_id, const wxBitmap & bitmap, const wxString & help_string = wxEmptyString)
	static int _bind_AddHybridTool(lua_State *L) {
		if (!_lg_typecheck_AddHybridTool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonToolBarToolBase * wxRibbonToolBar::AddHybridTool(int tool_id, const wxBitmap & bitmap, const wxString & help_string = wxEmptyString) function, expected prototype:\nwxRibbonToolBarToolBase * wxRibbonToolBar::AddHybridTool(int tool_id, const wxBitmap & bitmap, const wxString & help_string = wxEmptyString)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		int tool_id=(int)lua_tointeger(L,2);
		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxRibbonToolBar::AddHybridTool function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		wxString help_string(lua_tostring(L,4),lua_objlen(L,4));

		wxRibbonToolBar* self=dynamic_cast< wxRibbonToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonToolBarToolBase * wxRibbonToolBar::AddHybridTool(int, const wxBitmap &, const wxString &)");
		}
		wxRibbonToolBarToolBase * lret = self->AddHybridTool(tool_id, bitmap, help_string);
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'wxRibbonToolBarToolBase *'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// wxRibbonToolBarToolBase * wxRibbonToolBar::AddSeparator()
	static int _bind_AddSeparator(lua_State *L) {
		if (!_lg_typecheck_AddSeparator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonToolBarToolBase * wxRibbonToolBar::AddSeparator() function, expected prototype:\nwxRibbonToolBarToolBase * wxRibbonToolBar::AddSeparator()\nClass arguments details:\n");
		}


		wxRibbonToolBar* self=dynamic_cast< wxRibbonToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonToolBarToolBase * wxRibbonToolBar::AddSeparator()");
		}
		wxRibbonToolBarToolBase * lret = self->AddSeparator();
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'wxRibbonToolBarToolBase *'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// void wxRibbonToolBar::SetRows(int nMin, int nMax = -1)
	static int _bind_SetRows(lua_State *L) {
		if (!_lg_typecheck_SetRows(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRibbonToolBar::SetRows(int nMin, int nMax = -1) function, expected prototype:\nvoid wxRibbonToolBar::SetRows(int nMin, int nMax = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int nMin=(int)lua_tointeger(L,2);
		int nMax=luatop>2 ? (int)lua_tointeger(L,3) : -1;

		wxRibbonToolBar* self=dynamic_cast< wxRibbonToolBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRibbonToolBar::SetRows(int, int)");
		}
		self->SetRows(nMin, nMax);

		return 0;
	}


	// Operator binds:

};

wxRibbonToolBar* LunaTraits< wxRibbonToolBar >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRibbonToolBar::_bind_ctor(L);
}

void LunaTraits< wxRibbonToolBar >::_bind_dtor(wxRibbonToolBar* obj) {
	delete obj;
}

const char LunaTraits< wxRibbonToolBar >::className[] = "wxRibbonToolBar";
const char LunaTraits< wxRibbonToolBar >::fullName[] = "wxRibbonToolBar";
const char LunaTraits< wxRibbonToolBar >::moduleName[] = "wx";
const char* LunaTraits< wxRibbonToolBar >::parents[] = {"wx.wxRibbonControl", 0};
const int LunaTraits< wxRibbonToolBar >::hash = 78102700;
const int LunaTraits< wxRibbonToolBar >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxRibbonToolBar >::methods[] = {
	{"Create", &luna_wrapper_wxRibbonToolBar::_bind_Create},
	{"AddTool", &luna_wrapper_wxRibbonToolBar::_bind_AddTool},
	{"AddDropdownTool", &luna_wrapper_wxRibbonToolBar::_bind_AddDropdownTool},
	{"AddHybridTool", &luna_wrapper_wxRibbonToolBar::_bind_AddHybridTool},
	{"AddSeparator", &luna_wrapper_wxRibbonToolBar::_bind_AddSeparator},
	{"SetRows", &luna_wrapper_wxRibbonToolBar::_bind_SetRows},
	{"__eq", &luna_wrapper_wxRibbonToolBar::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRibbonToolBar >::converters[] = {
	{"wxObject", &luna_wrapper_wxRibbonToolBar::_cast_from_wxObject},
	{"wxTrackable", &luna_wrapper_wxRibbonToolBar::_cast_from_wxTrackable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRibbonToolBar >::enumValues[] = {
	{0,0}
};


