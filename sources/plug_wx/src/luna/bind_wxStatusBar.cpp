#include <plug_common.h>

class luna_wrapper_wxStatusBar {
public:
	typedef Luna< wxStatusBar > luna_t;

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
		wxStatusBar* ptr= dynamic_cast< wxStatusBar* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxStatusBar >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFieldRect(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFieldsCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetField(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBorders(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStatusText(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetStatusWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetStatusStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PopStatusText(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PushStatusText(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFieldsCount(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMinHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStatusStyles(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxStatusBar::wxStatusBar()
	static wxStatusBar* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStatusBar::wxStatusBar() function, expected prototype:\nwxStatusBar::wxStatusBar()\nClass arguments details:\n");
		}


		return new wxStatusBar();
	}

	// wxStatusBar::wxStatusBar(wxWindow * parent, int id = wxID_ANY, long style = (0x0010|0x0100|0x0020|wxFULL_REPAINT_ON_RESIZE), const wxString & name = wxStatusBarNameStr)
	static wxStatusBar* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStatusBar::wxStatusBar(wxWindow * parent, int id = wxID_ANY, long style = (0x0010|0x0100|0x0020|wxFULL_REPAINT_ON_RESIZE), const wxString & name = wxStatusBarNameStr) function, expected prototype:\nwxStatusBar::wxStatusBar(wxWindow * parent, int id = wxID_ANY, long style = (0x0010|0x0100|0x0020|wxFULL_REPAINT_ON_RESIZE), const wxString & name = wxStatusBarNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 4 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : wxID_ANY;
		long style=luatop>2 ? (long)lua_tointeger(L,3) : (0x0010|0x0100|0x0020|wxFULL_REPAINT_ON_RESIZE);
		wxString name(lua_tostring(L,4),lua_objlen(L,4));

		return new wxStatusBar(parent, id, style, name);
	}

	// Overload binder for wxStatusBar::wxStatusBar
	static wxStatusBar* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxStatusBar, cannot match any of the overloads for function wxStatusBar:\n  wxStatusBar()\n  wxStatusBar(wxWindow *, int, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxStatusBar::Create(wxWindow * parent, int id = wxID_ANY, long style = (0x0010|0x0100|0x0020|wxFULL_REPAINT_ON_RESIZE), const wxString & name = wxStatusBarNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::Create(wxWindow * parent, int id = wxID_ANY, long style = (0x0010|0x0100|0x0020|wxFULL_REPAINT_ON_RESIZE), const wxString & name = wxStatusBarNameStr) function, expected prototype:\nbool wxStatusBar::Create(wxWindow * parent, int id = wxID_ANY, long style = (0x0010|0x0100|0x0020|wxFULL_REPAINT_ON_RESIZE), const wxString & name = wxStatusBarNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 4 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : wxID_ANY;
		long style=luatop>3 ? (long)lua_tointeger(L,4) : (0x0010|0x0100|0x0020|wxFULL_REPAINT_ON_RESIZE);
		wxString name(lua_tostring(L,5),lua_objlen(L,5));

		wxStatusBar* self=dynamic_cast< wxStatusBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStatusBar::Create(wxWindow *, int, long, const wxString &)");
		}
		bool lret = self->Create(parent, id, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStatusBar::GetFieldRect(int i, wxRect & rect) const
	static int _bind_GetFieldRect(lua_State *L) {
		if (!_lg_typecheck_GetFieldRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::GetFieldRect(int i, wxRect & rect) const function, expected prototype:\nbool wxStatusBar::GetFieldRect(int i, wxRect & rect) const\nClass arguments details:\narg 2 ID = 20234418\n");
		}

		int i=(int)lua_tointeger(L,2);
		wxRect* rect_ptr=(Luna< wxRect >::check(L,3));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxStatusBar::GetFieldRect function");
		}
		wxRect & rect=*rect_ptr;

		wxStatusBar* self=dynamic_cast< wxStatusBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStatusBar::GetFieldRect(int, wxRect &) const");
		}
		bool lret = self->GetFieldRect(i, rect);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxStatusBar::GetFieldsCount() const
	static int _bind_GetFieldsCount(lua_State *L) {
		if (!_lg_typecheck_GetFieldsCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStatusBar::GetFieldsCount() const function, expected prototype:\nint wxStatusBar::GetFieldsCount() const\nClass arguments details:\n");
		}


		wxStatusBar* self=dynamic_cast< wxStatusBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStatusBar::GetFieldsCount() const");
		}
		int lret = self->GetFieldsCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxStatusBarPane & wxStatusBar::GetField(int n) const
	static int _bind_GetField(lua_State *L) {
		if (!_lg_typecheck_GetField(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxStatusBarPane & wxStatusBar::GetField(int n) const function, expected prototype:\nconst wxStatusBarPane & wxStatusBar::GetField(int n) const\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxStatusBar* self=dynamic_cast< wxStatusBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxStatusBarPane & wxStatusBar::GetField(int) const");
		}
		const wxStatusBarPane* lret = &self->GetField(n);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStatusBarPane >::push(L,lret,false);

		return 1;
	}

	// wxSize wxStatusBar::GetBorders() const
	static int _bind_GetBorders(lua_State *L) {
		if (!_lg_typecheck_GetBorders(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxStatusBar::GetBorders() const function, expected prototype:\nwxSize wxStatusBar::GetBorders() const\nClass arguments details:\n");
		}


		wxStatusBar* self=dynamic_cast< wxStatusBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxStatusBar::GetBorders() const");
		}
		wxSize stack_lret = self->GetBorders();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxString wxStatusBar::GetStatusText(int i = 0) const
	static int _bind_GetStatusText(lua_State *L) {
		if (!_lg_typecheck_GetStatusText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStatusBar::GetStatusText(int i = 0) const function, expected prototype:\nwxString wxStatusBar::GetStatusText(int i = 0) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int i=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		wxStatusBar* self=dynamic_cast< wxStatusBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStatusBar::GetStatusText(int) const");
		}
		wxString lret = self->GetStatusText(i);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxStatusBar::GetStatusWidth(int n) const
	static int _bind_GetStatusWidth(lua_State *L) {
		if (!_lg_typecheck_GetStatusWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStatusBar::GetStatusWidth(int n) const function, expected prototype:\nint wxStatusBar::GetStatusWidth(int n) const\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxStatusBar* self=dynamic_cast< wxStatusBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStatusBar::GetStatusWidth(int) const");
		}
		int lret = self->GetStatusWidth(n);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStatusBar::GetStatusStyle(int n) const
	static int _bind_GetStatusStyle(lua_State *L) {
		if (!_lg_typecheck_GetStatusStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStatusBar::GetStatusStyle(int n) const function, expected prototype:\nint wxStatusBar::GetStatusStyle(int n) const\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxStatusBar* self=dynamic_cast< wxStatusBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStatusBar::GetStatusStyle(int) const");
		}
		int lret = self->GetStatusStyle(n);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStatusBar::PopStatusText(int field = 0)
	static int _bind_PopStatusText(lua_State *L) {
		if (!_lg_typecheck_PopStatusText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStatusBar::PopStatusText(int field = 0) function, expected prototype:\nvoid wxStatusBar::PopStatusText(int field = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int field=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		wxStatusBar* self=dynamic_cast< wxStatusBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStatusBar::PopStatusText(int)");
		}
		self->PopStatusText(field);

		return 0;
	}

	// void wxStatusBar::PushStatusText(const wxString & string, int field = 0)
	static int _bind_PushStatusText(lua_State *L) {
		if (!_lg_typecheck_PushStatusText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStatusBar::PushStatusText(const wxString & string, int field = 0) function, expected prototype:\nvoid wxStatusBar::PushStatusText(const wxString & string, int field = 0)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString string(lua_tostring(L,2),lua_objlen(L,2));
		int field=luatop>2 ? (int)lua_tointeger(L,3) : 0;

		wxStatusBar* self=dynamic_cast< wxStatusBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStatusBar::PushStatusText(const wxString &, int)");
		}
		self->PushStatusText(string, field);

		return 0;
	}

	// void wxStatusBar::SetFieldsCount(int number = 1, const int * widths = NULL)
	static int _bind_SetFieldsCount(lua_State *L) {
		if (!_lg_typecheck_SetFieldsCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStatusBar::SetFieldsCount(int number = 1, const int * widths = NULL) function, expected prototype:\nvoid wxStatusBar::SetFieldsCount(int number = 1, const int * widths = NULL)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int number=luatop>1 ? (int)lua_tointeger(L,2) : 1;
		int widths=luatop>2 ? (int)lua_tointeger(L,3) : NULL;

		wxStatusBar* self=dynamic_cast< wxStatusBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStatusBar::SetFieldsCount(int, const int *)");
		}
		self->SetFieldsCount(number, &widths);

		return 0;
	}

	// void wxStatusBar::SetMinHeight(int height)
	static int _bind_SetMinHeight(lua_State *L) {
		if (!_lg_typecheck_SetMinHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStatusBar::SetMinHeight(int height) function, expected prototype:\nvoid wxStatusBar::SetMinHeight(int height)\nClass arguments details:\n");
		}

		int height=(int)lua_tointeger(L,2);

		wxStatusBar* self=dynamic_cast< wxStatusBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStatusBar::SetMinHeight(int)");
		}
		self->SetMinHeight(height);

		return 0;
	}

	// void wxStatusBar::SetStatusStyles(int n, const int * styles)
	static int _bind_SetStatusStyles(lua_State *L) {
		if (!_lg_typecheck_SetStatusStyles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStatusBar::SetStatusStyles(int n, const int * styles) function, expected prototype:\nvoid wxStatusBar::SetStatusStyles(int n, const int * styles)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);
		int styles=(int)lua_tointeger(L,3);

		wxStatusBar* self=dynamic_cast< wxStatusBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStatusBar::SetStatusStyles(int, const int *)");
		}
		self->SetStatusStyles(n, &styles);

		return 0;
	}

	// void wxStatusBar::SetStatusText(const wxString & text, int i = 0)
	static int _bind_SetStatusText(lua_State *L) {
		if (!_lg_typecheck_SetStatusText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStatusBar::SetStatusText(const wxString & text, int i = 0) function, expected prototype:\nvoid wxStatusBar::SetStatusText(const wxString & text, int i = 0)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		int i=luatop>2 ? (int)lua_tointeger(L,3) : 0;

		wxStatusBar* self=dynamic_cast< wxStatusBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStatusBar::SetStatusText(const wxString &, int)");
		}
		self->SetStatusText(text, i);

		return 0;
	}

	// void wxStatusBar::SetStatusWidths(int n, const int * widths_field)
	static int _bind_SetStatusWidths(lua_State *L) {
		if (!_lg_typecheck_SetStatusWidths(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStatusBar::SetStatusWidths(int n, const int * widths_field) function, expected prototype:\nvoid wxStatusBar::SetStatusWidths(int n, const int * widths_field)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);
		int widths_field=(int)lua_tointeger(L,3);

		wxStatusBar* self=dynamic_cast< wxStatusBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStatusBar::SetStatusWidths(int, const int *)");
		}
		self->SetStatusWidths(n, &widths_field);

		return 0;
	}


	// Operator binds:

};

wxStatusBar* LunaTraits< wxStatusBar >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxStatusBar::_bind_ctor(L);
}

void LunaTraits< wxStatusBar >::_bind_dtor(wxStatusBar* obj) {
	delete obj;
}

const char LunaTraits< wxStatusBar >::className[] = "wxStatusBar";
const char LunaTraits< wxStatusBar >::fullName[] = "wxStatusBar";
const char LunaTraits< wxStatusBar >::moduleName[] = "wx";
const char* LunaTraits< wxStatusBar >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxStatusBar >::hash = 84175488;
const int LunaTraits< wxStatusBar >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxStatusBar >::methods[] = {
	{"Create", &luna_wrapper_wxStatusBar::_bind_Create},
	{"GetFieldRect", &luna_wrapper_wxStatusBar::_bind_GetFieldRect},
	{"GetFieldsCount", &luna_wrapper_wxStatusBar::_bind_GetFieldsCount},
	{"GetField", &luna_wrapper_wxStatusBar::_bind_GetField},
	{"GetBorders", &luna_wrapper_wxStatusBar::_bind_GetBorders},
	{"GetStatusText", &luna_wrapper_wxStatusBar::_bind_GetStatusText},
	{"GetStatusWidth", &luna_wrapper_wxStatusBar::_bind_GetStatusWidth},
	{"GetStatusStyle", &luna_wrapper_wxStatusBar::_bind_GetStatusStyle},
	{"PopStatusText", &luna_wrapper_wxStatusBar::_bind_PopStatusText},
	{"PushStatusText", &luna_wrapper_wxStatusBar::_bind_PushStatusText},
	{"SetFieldsCount", &luna_wrapper_wxStatusBar::_bind_SetFieldsCount},
	{"SetMinHeight", &luna_wrapper_wxStatusBar::_bind_SetMinHeight},
	{"SetStatusStyles", &luna_wrapper_wxStatusBar::_bind_SetStatusStyles},
	{"SetStatusText", &luna_wrapper_wxStatusBar::_bind_SetStatusText},
	{"SetStatusWidths", &luna_wrapper_wxStatusBar::_bind_SetStatusWidths},
	{"__eq", &luna_wrapper_wxStatusBar::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxStatusBar >::converters[] = {
	{"wxObject", &luna_wrapper_wxStatusBar::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxStatusBar >::enumValues[] = {
	{0,0}
};


