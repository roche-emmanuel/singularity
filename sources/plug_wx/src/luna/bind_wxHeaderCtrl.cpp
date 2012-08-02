#include <plug_common.h>

class luna_wrapper_wxHeaderCtrl {
public:
	typedef Luna< wxHeaderCtrl > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxHeaderCtrl* ptr= dynamic_cast< wxHeaderCtrl* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHeaderCtrl >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColumnCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumnCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsEmpty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_UpdateColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColumnsOrder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,47342076) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumnsOrder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColumnAt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumnPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ResetColumnsOrder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ShowColumnsMenu(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddColumnsItems(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowCustomizeDialog(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MoveColumnInOrderArray(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47342076) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxHeaderCtrl::Create(wxWindow * parent, int winid = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHD_DEFAULT_STYLE, const wxString & name = wxHeaderCtrlNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrl::Create(wxWindow * parent, int winid = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHD_DEFAULT_STYLE, const wxString & name = wxHeaderCtrlNameStr) function, expected prototype:\nbool wxHeaderCtrl::Create(wxWindow * parent, int winid = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHD_DEFAULT_STYLE, const wxString & name = wxHeaderCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int winid=luatop>2 ? (int)lua_tointeger(L,3) : wxID_ANY;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxHeaderCtrl::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHeaderCtrl::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxHD_DEFAULT_STYLE;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		wxHeaderCtrl* self=dynamic_cast< wxHeaderCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrl::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)");
		}
		bool lret = self->Create(parent, winid, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHeaderCtrl::SetColumnCount(unsigned int count)
	static int _bind_SetColumnCount(lua_State *L) {
		if (!_lg_typecheck_SetColumnCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrl::SetColumnCount(unsigned int count) function, expected prototype:\nvoid wxHeaderCtrl::SetColumnCount(unsigned int count)\nClass arguments details:\n");
		}

		unsigned int count=(unsigned int)lua_tointeger(L,2);

		wxHeaderCtrl* self=dynamic_cast< wxHeaderCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrl::SetColumnCount(unsigned int)");
		}
		self->SetColumnCount(count);

		return 0;
	}

	// unsigned int wxHeaderCtrl::GetColumnCount() const
	static int _bind_GetColumnCount(lua_State *L) {
		if (!_lg_typecheck_GetColumnCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxHeaderCtrl::GetColumnCount() const function, expected prototype:\nunsigned int wxHeaderCtrl::GetColumnCount() const\nClass arguments details:\n");
		}


		wxHeaderCtrl* self=dynamic_cast< wxHeaderCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxHeaderCtrl::GetColumnCount() const");
		}
		unsigned int lret = self->GetColumnCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxHeaderCtrl::IsEmpty() const
	static int _bind_IsEmpty(lua_State *L) {
		if (!_lg_typecheck_IsEmpty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrl::IsEmpty() const function, expected prototype:\nbool wxHeaderCtrl::IsEmpty() const\nClass arguments details:\n");
		}


		wxHeaderCtrl* self=dynamic_cast< wxHeaderCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrl::IsEmpty() const");
		}
		bool lret = self->IsEmpty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHeaderCtrl::UpdateColumn(unsigned int idx)
	static int _bind_UpdateColumn(lua_State *L) {
		if (!_lg_typecheck_UpdateColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrl::UpdateColumn(unsigned int idx) function, expected prototype:\nvoid wxHeaderCtrl::UpdateColumn(unsigned int idx)\nClass arguments details:\n");
		}

		unsigned int idx=(unsigned int)lua_tointeger(L,2);

		wxHeaderCtrl* self=dynamic_cast< wxHeaderCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrl::UpdateColumn(unsigned int)");
		}
		self->UpdateColumn(idx);

		return 0;
	}

	// void wxHeaderCtrl::SetColumnsOrder(const wxArrayInt & order)
	static int _bind_SetColumnsOrder(lua_State *L) {
		if (!_lg_typecheck_SetColumnsOrder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrl::SetColumnsOrder(const wxArrayInt & order) function, expected prototype:\nvoid wxHeaderCtrl::SetColumnsOrder(const wxArrayInt & order)\nClass arguments details:\narg 1 ID = 47342076\n");
		}

		const wxArrayInt* order_ptr=(Luna< wxArrayInt >::check(L,2));
		if( !order_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg order in wxHeaderCtrl::SetColumnsOrder function");
		}
		const wxArrayInt & order=*order_ptr;

		wxHeaderCtrl* self=dynamic_cast< wxHeaderCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrl::SetColumnsOrder(const wxArrayInt &)");
		}
		self->SetColumnsOrder(order);

		return 0;
	}

	// wxArrayInt wxHeaderCtrl::GetColumnsOrder() const
	static int _bind_GetColumnsOrder(lua_State *L) {
		if (!_lg_typecheck_GetColumnsOrder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxArrayInt wxHeaderCtrl::GetColumnsOrder() const function, expected prototype:\nwxArrayInt wxHeaderCtrl::GetColumnsOrder() const\nClass arguments details:\n");
		}


		wxHeaderCtrl* self=dynamic_cast< wxHeaderCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxArrayInt wxHeaderCtrl::GetColumnsOrder() const");
		}
		wxArrayInt stack_lret = self->GetColumnsOrder();
		wxArrayInt* lret = new wxArrayInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayInt >::push(L,lret,true);

		return 1;
	}

	// unsigned int wxHeaderCtrl::GetColumnAt(unsigned int pos) const
	static int _bind_GetColumnAt(lua_State *L) {
		if (!_lg_typecheck_GetColumnAt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxHeaderCtrl::GetColumnAt(unsigned int pos) const function, expected prototype:\nunsigned int wxHeaderCtrl::GetColumnAt(unsigned int pos) const\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		wxHeaderCtrl* self=dynamic_cast< wxHeaderCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxHeaderCtrl::GetColumnAt(unsigned int) const");
		}
		unsigned int lret = self->GetColumnAt(pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int wxHeaderCtrl::GetColumnPos(unsigned int idx) const
	static int _bind_GetColumnPos(lua_State *L) {
		if (!_lg_typecheck_GetColumnPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxHeaderCtrl::GetColumnPos(unsigned int idx) const function, expected prototype:\nunsigned int wxHeaderCtrl::GetColumnPos(unsigned int idx) const\nClass arguments details:\n");
		}

		unsigned int idx=(unsigned int)lua_tointeger(L,2);

		wxHeaderCtrl* self=dynamic_cast< wxHeaderCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxHeaderCtrl::GetColumnPos(unsigned int) const");
		}
		unsigned int lret = self->GetColumnPos(idx);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxHeaderCtrl::ResetColumnsOrder()
	static int _bind_ResetColumnsOrder(lua_State *L) {
		if (!_lg_typecheck_ResetColumnsOrder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrl::ResetColumnsOrder() function, expected prototype:\nvoid wxHeaderCtrl::ResetColumnsOrder()\nClass arguments details:\n");
		}


		wxHeaderCtrl* self=dynamic_cast< wxHeaderCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrl::ResetColumnsOrder()");
		}
		self->ResetColumnsOrder();

		return 0;
	}

	// bool wxHeaderCtrl::ShowColumnsMenu(const wxPoint & pt, const wxString & title = wxString ())
	static int _bind_ShowColumnsMenu(lua_State *L) {
		if (!_lg_typecheck_ShowColumnsMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrl::ShowColumnsMenu(const wxPoint & pt, const wxString & title = wxString ()) function, expected prototype:\nbool wxHeaderCtrl::ShowColumnsMenu(const wxPoint & pt, const wxString & title = wxString ())\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxHeaderCtrl::ShowColumnsMenu function");
		}
		const wxPoint & pt=*pt_ptr;
		wxString title(lua_tostring(L,3),lua_objlen(L,3));

		wxHeaderCtrl* self=dynamic_cast< wxHeaderCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrl::ShowColumnsMenu(const wxPoint &, const wxString &)");
		}
		bool lret = self->ShowColumnsMenu(pt, title);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHeaderCtrl::AddColumnsItems(wxMenu & menu, int idColumnsBase = 0)
	static int _bind_AddColumnsItems(lua_State *L) {
		if (!_lg_typecheck_AddColumnsItems(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHeaderCtrl::AddColumnsItems(wxMenu & menu, int idColumnsBase = 0) function, expected prototype:\nvoid wxHeaderCtrl::AddColumnsItems(wxMenu & menu, int idColumnsBase = 0)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxMenu* menu_ptr=dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,2));
		if( !menu_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg menu in wxHeaderCtrl::AddColumnsItems function");
		}
		wxMenu & menu=*menu_ptr;
		int idColumnsBase=luatop>2 ? (int)lua_tointeger(L,3) : 0;

		wxHeaderCtrl* self=dynamic_cast< wxHeaderCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHeaderCtrl::AddColumnsItems(wxMenu &, int)");
		}
		self->AddColumnsItems(menu, idColumnsBase);

		return 0;
	}

	// bool wxHeaderCtrl::ShowCustomizeDialog()
	static int _bind_ShowCustomizeDialog(lua_State *L) {
		if (!_lg_typecheck_ShowCustomizeDialog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHeaderCtrl::ShowCustomizeDialog() function, expected prototype:\nbool wxHeaderCtrl::ShowCustomizeDialog()\nClass arguments details:\n");
		}


		wxHeaderCtrl* self=dynamic_cast< wxHeaderCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHeaderCtrl::ShowCustomizeDialog()");
		}
		bool lret = self->ShowCustomizeDialog();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static void wxHeaderCtrl::MoveColumnInOrderArray(wxArrayInt & order, unsigned int idx, unsigned int pos)
	static int _bind_MoveColumnInOrderArray(lua_State *L) {
		if (!_lg_typecheck_MoveColumnInOrderArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxHeaderCtrl::MoveColumnInOrderArray(wxArrayInt & order, unsigned int idx, unsigned int pos) function, expected prototype:\nstatic void wxHeaderCtrl::MoveColumnInOrderArray(wxArrayInt & order, unsigned int idx, unsigned int pos)\nClass arguments details:\narg 1 ID = 47342076\n");
		}

		wxArrayInt* order_ptr=(Luna< wxArrayInt >::check(L,1));
		if( !order_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg order in wxHeaderCtrl::MoveColumnInOrderArray function");
		}
		wxArrayInt & order=*order_ptr;
		unsigned int idx=(unsigned int)lua_tointeger(L,2);
		unsigned int pos=(unsigned int)lua_tointeger(L,3);

		wxHeaderCtrl::MoveColumnInOrderArray(order, idx, pos);

		return 0;
	}


	// Operator binds:

};

wxHeaderCtrl* LunaTraits< wxHeaderCtrl >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// const wxHeaderColumn & wxHeaderCtrl::GetColumn(unsigned int idx) const

	// Abstract operators:
}

void LunaTraits< wxHeaderCtrl >::_bind_dtor(wxHeaderCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxHeaderCtrl >::className[] = "wxHeaderCtrl";
const char LunaTraits< wxHeaderCtrl >::fullName[] = "wxHeaderCtrl";
const char LunaTraits< wxHeaderCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxHeaderCtrl >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxHeaderCtrl >::hash = 65665950;
const int LunaTraits< wxHeaderCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxHeaderCtrl >::methods[] = {
	{"Create", &luna_wrapper_wxHeaderCtrl::_bind_Create},
	{"SetColumnCount", &luna_wrapper_wxHeaderCtrl::_bind_SetColumnCount},
	{"GetColumnCount", &luna_wrapper_wxHeaderCtrl::_bind_GetColumnCount},
	{"IsEmpty", &luna_wrapper_wxHeaderCtrl::_bind_IsEmpty},
	{"UpdateColumn", &luna_wrapper_wxHeaderCtrl::_bind_UpdateColumn},
	{"SetColumnsOrder", &luna_wrapper_wxHeaderCtrl::_bind_SetColumnsOrder},
	{"GetColumnsOrder", &luna_wrapper_wxHeaderCtrl::_bind_GetColumnsOrder},
	{"GetColumnAt", &luna_wrapper_wxHeaderCtrl::_bind_GetColumnAt},
	{"GetColumnPos", &luna_wrapper_wxHeaderCtrl::_bind_GetColumnPos},
	{"ResetColumnsOrder", &luna_wrapper_wxHeaderCtrl::_bind_ResetColumnsOrder},
	{"ShowColumnsMenu", &luna_wrapper_wxHeaderCtrl::_bind_ShowColumnsMenu},
	{"AddColumnsItems", &luna_wrapper_wxHeaderCtrl::_bind_AddColumnsItems},
	{"ShowCustomizeDialog", &luna_wrapper_wxHeaderCtrl::_bind_ShowCustomizeDialog},
	{"MoveColumnInOrderArray", &luna_wrapper_wxHeaderCtrl::_bind_MoveColumnInOrderArray},
	{0,0}
};

luna_ConverterType LunaTraits< wxHeaderCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxHeaderCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHeaderCtrl >::enumValues[] = {
	{0,0}
};


