#include <plug_common.h>

class luna_wrapper_wxCollapsiblePane {
public:
	typedef Luna< wxCollapsiblePane > luna_t;

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
		wxCollapsiblePane* ptr= dynamic_cast< wxCollapsiblePane* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxCollapsiblePane >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>8 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,56813631) ) return false;
		if( luatop>6 && (!dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,7))) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>9 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Collapse(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Expand(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPane(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsCollapsed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsExpanded(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxCollapsiblePane::wxCollapsiblePane()
	static wxCollapsiblePane* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCollapsiblePane::wxCollapsiblePane() function, expected prototype:\nwxCollapsiblePane::wxCollapsiblePane()\nClass arguments details:\n");
		}


		return new wxCollapsiblePane();
	}

	// wxCollapsiblePane::wxCollapsiblePane(wxWindow * parent, int id, const wxString & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ( wxTAB_TRAVERSAL | wxNO_BORDER ), const wxValidator & validator = wxDefaultValidator, const wxString & name = wxCollapsiblePaneNameStr)
	static wxCollapsiblePane* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCollapsiblePane::wxCollapsiblePane(wxWindow * parent, int id, const wxString & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ( wxTAB_TRAVERSAL | wxNO_BORDER ), const wxValidator & validator = wxDefaultValidator, const wxString & name = wxCollapsiblePaneNameStr) function, expected prototype:\nwxCollapsiblePane::wxCollapsiblePane(wxWindow * parent, int id, const wxString & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ( wxTAB_TRAVERSAL | wxNO_BORDER ), const wxValidator & validator = wxDefaultValidator, const wxString & name = wxCollapsiblePaneNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxCollapsiblePane::wxCollapsiblePane function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxCollapsiblePane::wxCollapsiblePane function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : ( wxTAB_TRAVERSAL | wxNO_BORDER );
		const wxValidator* validator_ptr=luatop>6 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxCollapsiblePane::wxCollapsiblePane function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		return new wxCollapsiblePane(parent, id, label, pos, size, style, validator, name);
	}

	// Overload binder for wxCollapsiblePane::wxCollapsiblePane
	static wxCollapsiblePane* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxCollapsiblePane, cannot match any of the overloads for function wxCollapsiblePane:\n  wxCollapsiblePane()\n  wxCollapsiblePane(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxCollapsiblePane::Create(wxWindow * parent, int id, const wxString & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ( wxTAB_TRAVERSAL | wxNO_BORDER ), const wxValidator & validator = wxDefaultValidator, const wxString & name = wxCollapsiblePaneNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCollapsiblePane::Create(wxWindow * parent, int id, const wxString & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ( wxTAB_TRAVERSAL | wxNO_BORDER ), const wxValidator & validator = wxDefaultValidator, const wxString & name = wxCollapsiblePaneNameStr) function, expected prototype:\nbool wxCollapsiblePane::Create(wxWindow * parent, int id, const wxString & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ( wxTAB_TRAVERSAL | wxNO_BORDER ), const wxValidator & validator = wxDefaultValidator, const wxString & name = wxCollapsiblePaneNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString label(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxCollapsiblePane::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxCollapsiblePane::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : ( wxTAB_TRAVERSAL | wxNO_BORDER );
		const wxValidator* validator_ptr=luatop>7 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxCollapsiblePane::Create function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		wxCollapsiblePane* self=dynamic_cast< wxCollapsiblePane* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCollapsiblePane::Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, label, pos, size, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxCollapsiblePane::Collapse(bool collapse = true)
	static int _bind_Collapse(lua_State *L) {
		if (!_lg_typecheck_Collapse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCollapsiblePane::Collapse(bool collapse = true) function, expected prototype:\nvoid wxCollapsiblePane::Collapse(bool collapse = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool collapse=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxCollapsiblePane* self=dynamic_cast< wxCollapsiblePane* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCollapsiblePane::Collapse(bool)");
		}
		self->Collapse(collapse);

		return 0;
	}

	// void wxCollapsiblePane::Expand()
	static int _bind_Expand(lua_State *L) {
		if (!_lg_typecheck_Expand(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCollapsiblePane::Expand() function, expected prototype:\nvoid wxCollapsiblePane::Expand()\nClass arguments details:\n");
		}


		wxCollapsiblePane* self=dynamic_cast< wxCollapsiblePane* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCollapsiblePane::Expand()");
		}
		self->Expand();

		return 0;
	}

	// wxWindow * wxCollapsiblePane::GetPane() const
	static int _bind_GetPane(lua_State *L) {
		if (!_lg_typecheck_GetPane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxCollapsiblePane::GetPane() const function, expected prototype:\nwxWindow * wxCollapsiblePane::GetPane() const\nClass arguments details:\n");
		}


		wxCollapsiblePane* self=dynamic_cast< wxCollapsiblePane* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxCollapsiblePane::GetPane() const");
		}
		wxWindow * lret = self->GetPane();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// bool wxCollapsiblePane::IsCollapsed() const
	static int _bind_IsCollapsed(lua_State *L) {
		if (!_lg_typecheck_IsCollapsed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCollapsiblePane::IsCollapsed() const function, expected prototype:\nbool wxCollapsiblePane::IsCollapsed() const\nClass arguments details:\n");
		}


		wxCollapsiblePane* self=dynamic_cast< wxCollapsiblePane* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCollapsiblePane::IsCollapsed() const");
		}
		bool lret = self->IsCollapsed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxCollapsiblePane::IsExpanded() const
	static int _bind_IsExpanded(lua_State *L) {
		if (!_lg_typecheck_IsExpanded(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCollapsiblePane::IsExpanded() const function, expected prototype:\nbool wxCollapsiblePane::IsExpanded() const\nClass arguments details:\n");
		}


		wxCollapsiblePane* self=dynamic_cast< wxCollapsiblePane* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCollapsiblePane::IsExpanded() const");
		}
		bool lret = self->IsExpanded();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxCollapsiblePane* LunaTraits< wxCollapsiblePane >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxCollapsiblePane::_bind_ctor(L);
}

void LunaTraits< wxCollapsiblePane >::_bind_dtor(wxCollapsiblePane* obj) {
	delete obj;
}

const char LunaTraits< wxCollapsiblePane >::className[] = "wxCollapsiblePane";
const char LunaTraits< wxCollapsiblePane >::fullName[] = "wxCollapsiblePane";
const char LunaTraits< wxCollapsiblePane >::moduleName[] = "wx";
const char* LunaTraits< wxCollapsiblePane >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxCollapsiblePane >::hash = 86794924;
const int LunaTraits< wxCollapsiblePane >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxCollapsiblePane >::methods[] = {
	{"Create", &luna_wrapper_wxCollapsiblePane::_bind_Create},
	{"Collapse", &luna_wrapper_wxCollapsiblePane::_bind_Collapse},
	{"Expand", &luna_wrapper_wxCollapsiblePane::_bind_Expand},
	{"GetPane", &luna_wrapper_wxCollapsiblePane::_bind_GetPane},
	{"IsCollapsed", &luna_wrapper_wxCollapsiblePane::_bind_IsCollapsed},
	{"IsExpanded", &luna_wrapper_wxCollapsiblePane::_bind_IsExpanded},
	{"__eq", &luna_wrapper_wxCollapsiblePane::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxCollapsiblePane >::converters[] = {
	{"wxObject", &luna_wrapper_wxCollapsiblePane::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxCollapsiblePane >::enumValues[] = {
	{0,0}
};


