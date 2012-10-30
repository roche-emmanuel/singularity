#include <plug_common.h>

class luna_wrapper_wxDataViewTreeCtrl {
public:
	typedef Luna< wxDataViewTreeCtrl > luna_t;

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
		wxDataViewTreeCtrl* ptr= dynamic_cast< wxDataViewTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewTreeCtrl >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTrackable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDataViewTreeCtrl* ptr= static_cast< wxDataViewTreeCtrl* >(Luna< wxTrackable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewTreeCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>3 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,4))) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,56813631) ) return false;
		if( luatop>5 && (!dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,6))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AppendContainer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteAllItems(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DeleteChildren(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetChildCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetImageList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItemData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemExpandedIcon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemIcon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNthChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetStore_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStore_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InsertContainer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,11709329) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,11709329) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsContainer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrependContainer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrependItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetImageList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemExpandedIcon(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemIcon(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemText(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDataViewTreeCtrl::wxDataViewTreeCtrl()
	static wxDataViewTreeCtrl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewTreeCtrl::wxDataViewTreeCtrl() function, expected prototype:\nwxDataViewTreeCtrl::wxDataViewTreeCtrl()\nClass arguments details:\n");
		}


		return new wxDataViewTreeCtrl();
	}

	// wxDataViewTreeCtrl::wxDataViewTreeCtrl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0x0002|0x0010, const wxValidator & validator = wxDefaultValidator)
	static wxDataViewTreeCtrl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewTreeCtrl::wxDataViewTreeCtrl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0x0002|0x0010, const wxValidator & validator = wxDefaultValidator) function, expected prototype:\nwxDataViewTreeCtrl::wxDataViewTreeCtrl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0x0002|0x0010, const wxValidator & validator = wxDefaultValidator)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDataViewTreeCtrl::wxDataViewTreeCtrl function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewTreeCtrl::wxDataViewTreeCtrl function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : wxDefaultSize;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : 0x0002|0x0010;
		const wxValidator* validator_ptr=luatop>5 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,6)) : NULL;
		if( luatop>5 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxDataViewTreeCtrl::wxDataViewTreeCtrl function");
		}
		const wxValidator & validator=luatop>5 ? *validator_ptr : wxDefaultValidator;

		return new wxDataViewTreeCtrl(parent, id, pos, size, style, validator);
	}

	// Overload binder for wxDataViewTreeCtrl::wxDataViewTreeCtrl
	static wxDataViewTreeCtrl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxDataViewTreeCtrl, cannot match any of the overloads for function wxDataViewTreeCtrl:\n  wxDataViewTreeCtrl()\n  wxDataViewTreeCtrl(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &)\n");
		return NULL;
	}


	// Function binds:
	// wxDataViewItem wxDataViewTreeCtrl::AppendContainer(const wxDataViewItem & parent, const wxString & text, int icon = -1, int expanded = -1, wxClientData * data = NULL)
	static int _bind_AppendContainer(lua_State *L) {
		if (!_lg_typecheck_AppendContainer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeCtrl::AppendContainer(const wxDataViewItem & parent, const wxString & text, int icon = -1, int expanded = -1, wxClientData * data = NULL) function, expected prototype:\nwxDataViewItem wxDataViewTreeCtrl::AppendContainer(const wxDataViewItem & parent, const wxString & text, int icon = -1, int expanded = -1, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 88196105\narg 5 ID = 50457573\n");
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeCtrl::AppendContainer function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		int icon=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		int expanded=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		wxClientData* data=luatop>5 ? (Luna< wxClientData >::check(L,6)) : (wxClientData*)NULL;

		wxDataViewTreeCtrl* self=dynamic_cast< wxDataViewTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeCtrl::AppendContainer(const wxDataViewItem &, const wxString &, int, int, wxClientData *)");
		}
		wxDataViewItem stack_lret = self->AppendContainer(parent, text, icon, expanded, data);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// wxDataViewItem wxDataViewTreeCtrl::AppendItem(const wxDataViewItem & parent, const wxString & text, int icon = -1, wxClientData * data = NULL)
	static int _bind_AppendItem(lua_State *L) {
		if (!_lg_typecheck_AppendItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeCtrl::AppendItem(const wxDataViewItem & parent, const wxString & text, int icon = -1, wxClientData * data = NULL) function, expected prototype:\nwxDataViewItem wxDataViewTreeCtrl::AppendItem(const wxDataViewItem & parent, const wxString & text, int icon = -1, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 88196105\narg 4 ID = 50457573\n");
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeCtrl::AppendItem function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		int icon=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		wxClientData* data=luatop>4 ? (Luna< wxClientData >::check(L,5)) : (wxClientData*)NULL;

		wxDataViewTreeCtrl* self=dynamic_cast< wxDataViewTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeCtrl::AppendItem(const wxDataViewItem &, const wxString &, int, wxClientData *)");
		}
		wxDataViewItem stack_lret = self->AppendItem(parent, text, icon, data);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// bool wxDataViewTreeCtrl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0x0002|0x0010, const wxValidator & validator = wxDefaultValidator)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0x0002|0x0010, const wxValidator & validator = wxDefaultValidator) function, expected prototype:\nbool wxDataViewTreeCtrl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0x0002|0x0010, const wxValidator & validator = wxDefaultValidator)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDataViewTreeCtrl::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewTreeCtrl::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0x0002|0x0010;
		const wxValidator* validator_ptr=luatop>6 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxDataViewTreeCtrl::Create function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : wxDefaultValidator;

		wxDataViewTreeCtrl* self=dynamic_cast< wxDataViewTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &)");
		}
		bool lret = self->Create(parent, id, pos, size, style, validator);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewTreeCtrl::DeleteAllItems()
	static int _bind_DeleteAllItems(lua_State *L) {
		if (!_lg_typecheck_DeleteAllItems(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::DeleteAllItems() function, expected prototype:\nvoid wxDataViewTreeCtrl::DeleteAllItems()\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=dynamic_cast< wxDataViewTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::DeleteAllItems()");
		}
		self->DeleteAllItems();

		return 0;
	}

	// void wxDataViewTreeCtrl::DeleteChildren(const wxDataViewItem & item)
	static int _bind_DeleteChildren(lua_State *L) {
		if (!_lg_typecheck_DeleteChildren(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::DeleteChildren(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewTreeCtrl::DeleteChildren(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::DeleteChildren function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeCtrl* self=dynamic_cast< wxDataViewTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::DeleteChildren(const wxDataViewItem &)");
		}
		self->DeleteChildren(item);

		return 0;
	}

	// void wxDataViewTreeCtrl::DeleteItem(const wxDataViewItem & item)
	static int _bind_DeleteItem(lua_State *L) {
		if (!_lg_typecheck_DeleteItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::DeleteItem(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewTreeCtrl::DeleteItem(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::DeleteItem function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeCtrl* self=dynamic_cast< wxDataViewTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::DeleteItem(const wxDataViewItem &)");
		}
		self->DeleteItem(item);

		return 0;
	}

	// int wxDataViewTreeCtrl::GetChildCount(const wxDataViewItem & parent) const
	static int _bind_GetChildCount(lua_State *L) {
		if (!_lg_typecheck_GetChildCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewTreeCtrl::GetChildCount(const wxDataViewItem & parent) const function, expected prototype:\nint wxDataViewTreeCtrl::GetChildCount(const wxDataViewItem & parent) const\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeCtrl::GetChildCount function");
		}
		const wxDataViewItem & parent=*parent_ptr;

		wxDataViewTreeCtrl* self=dynamic_cast< wxDataViewTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewTreeCtrl::GetChildCount(const wxDataViewItem &) const");
		}
		int lret = self->GetChildCount(parent);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxImageList * wxDataViewTreeCtrl::GetImageList()
	static int _bind_GetImageList(lua_State *L) {
		if (!_lg_typecheck_GetImageList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImageList * wxDataViewTreeCtrl::GetImageList() function, expected prototype:\nwxImageList * wxDataViewTreeCtrl::GetImageList()\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=dynamic_cast< wxDataViewTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxImageList * wxDataViewTreeCtrl::GetImageList()");
		}
		wxImageList * lret = self->GetImageList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImageList >::push(L,lret,false);

		return 1;
	}

	// wxClientData * wxDataViewTreeCtrl::GetItemData(const wxDataViewItem & item) const
	static int _bind_GetItemData(lua_State *L) {
		if (!_lg_typecheck_GetItemData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClientData * wxDataViewTreeCtrl::GetItemData(const wxDataViewItem & item) const function, expected prototype:\nwxClientData * wxDataViewTreeCtrl::GetItemData(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::GetItemData function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeCtrl* self=dynamic_cast< wxDataViewTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClientData * wxDataViewTreeCtrl::GetItemData(const wxDataViewItem &) const");
		}
		wxClientData * lret = self->GetItemData(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClientData >::push(L,lret,false);

		return 1;
	}

	// const wxIcon & wxDataViewTreeCtrl::GetItemExpandedIcon(const wxDataViewItem & item) const
	static int _bind_GetItemExpandedIcon(lua_State *L) {
		if (!_lg_typecheck_GetItemExpandedIcon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxIcon & wxDataViewTreeCtrl::GetItemExpandedIcon(const wxDataViewItem & item) const function, expected prototype:\nconst wxIcon & wxDataViewTreeCtrl::GetItemExpandedIcon(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::GetItemExpandedIcon function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeCtrl* self=dynamic_cast< wxDataViewTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxIcon & wxDataViewTreeCtrl::GetItemExpandedIcon(const wxDataViewItem &) const");
		}
		const wxIcon* lret = &self->GetItemExpandedIcon(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIcon >::push(L,lret,false);

		return 1;
	}

	// const wxIcon & wxDataViewTreeCtrl::GetItemIcon(const wxDataViewItem & item) const
	static int _bind_GetItemIcon(lua_State *L) {
		if (!_lg_typecheck_GetItemIcon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxIcon & wxDataViewTreeCtrl::GetItemIcon(const wxDataViewItem & item) const function, expected prototype:\nconst wxIcon & wxDataViewTreeCtrl::GetItemIcon(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::GetItemIcon function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeCtrl* self=dynamic_cast< wxDataViewTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxIcon & wxDataViewTreeCtrl::GetItemIcon(const wxDataViewItem &) const");
		}
		const wxIcon* lret = &self->GetItemIcon(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIcon >::push(L,lret,false);

		return 1;
	}

	// wxString wxDataViewTreeCtrl::GetItemText(const wxDataViewItem & item) const
	static int _bind_GetItemText(lua_State *L) {
		if (!_lg_typecheck_GetItemText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDataViewTreeCtrl::GetItemText(const wxDataViewItem & item) const function, expected prototype:\nwxString wxDataViewTreeCtrl::GetItemText(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::GetItemText function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeCtrl* self=dynamic_cast< wxDataViewTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDataViewTreeCtrl::GetItemText(const wxDataViewItem &) const");
		}
		wxString lret = self->GetItemText(item);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxDataViewItem wxDataViewTreeCtrl::GetNthChild(const wxDataViewItem & parent, unsigned int pos) const
	static int _bind_GetNthChild(lua_State *L) {
		if (!_lg_typecheck_GetNthChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeCtrl::GetNthChild(const wxDataViewItem & parent, unsigned int pos) const function, expected prototype:\nwxDataViewItem wxDataViewTreeCtrl::GetNthChild(const wxDataViewItem & parent, unsigned int pos) const\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeCtrl::GetNthChild function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		unsigned int pos=(unsigned int)lua_tointeger(L,3);

		wxDataViewTreeCtrl* self=dynamic_cast< wxDataViewTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeCtrl::GetNthChild(const wxDataViewItem &, unsigned int) const");
		}
		wxDataViewItem stack_lret = self->GetNthChild(parent, pos);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// wxDataViewTreeStore * wxDataViewTreeCtrl::GetStore()
	static int _bind_GetStore_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetStore_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewTreeStore * wxDataViewTreeCtrl::GetStore() function, expected prototype:\nwxDataViewTreeStore * wxDataViewTreeCtrl::GetStore()\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=dynamic_cast< wxDataViewTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewTreeStore * wxDataViewTreeCtrl::GetStore()");
		}
		wxDataViewTreeStore * lret = self->GetStore();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewTreeStore >::push(L,lret,false);

		return 1;
	}

	// const wxDataViewTreeStore * wxDataViewTreeCtrl::GetStore() const
	static int _bind_GetStore_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetStore_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxDataViewTreeStore * wxDataViewTreeCtrl::GetStore() const function, expected prototype:\nconst wxDataViewTreeStore * wxDataViewTreeCtrl::GetStore() const\nClass arguments details:\n");
		}


		wxDataViewTreeCtrl* self=dynamic_cast< wxDataViewTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxDataViewTreeStore * wxDataViewTreeCtrl::GetStore() const");
		}
		const wxDataViewTreeStore * lret = self->GetStore();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewTreeStore >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxDataViewTreeCtrl::GetStore
	static int _bind_GetStore(lua_State *L) {
		if (_lg_typecheck_GetStore_overload_1(L)) return _bind_GetStore_overload_1(L);
		if (_lg_typecheck_GetStore_overload_2(L)) return _bind_GetStore_overload_2(L);

		luaL_error(L, "error in function GetStore, cannot match any of the overloads for function GetStore:\n  GetStore()\n  GetStore()\n");
		return 0;
	}

	// wxDataViewItem wxDataViewTreeCtrl::InsertContainer(const wxDataViewItem & parent, const wxDataViewItem & previous, const wxString & text, int icon = -1, int expanded = -1, wxClientData * data = NULL)
	static int _bind_InsertContainer(lua_State *L) {
		if (!_lg_typecheck_InsertContainer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeCtrl::InsertContainer(const wxDataViewItem & parent, const wxDataViewItem & previous, const wxString & text, int icon = -1, int expanded = -1, wxClientData * data = NULL) function, expected prototype:\nwxDataViewItem wxDataViewTreeCtrl::InsertContainer(const wxDataViewItem & parent, const wxDataViewItem & previous, const wxString & text, int icon = -1, int expanded = -1, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 11709329\narg 3 ID = 88196105\narg 6 ID = 50457573\n");
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeCtrl::InsertContainer function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		const wxDataViewItem* previous_ptr=(Luna< wxDataViewItem >::check(L,3));
		if( !previous_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg previous in wxDataViewTreeCtrl::InsertContainer function");
		}
		const wxDataViewItem & previous=*previous_ptr;
		wxString text(lua_tostring(L,4),lua_objlen(L,4));
		int icon=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		int expanded=luatop>5 ? (int)lua_tointeger(L,6) : -1;
		wxClientData* data=luatop>6 ? (Luna< wxClientData >::check(L,7)) : (wxClientData*)NULL;

		wxDataViewTreeCtrl* self=dynamic_cast< wxDataViewTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeCtrl::InsertContainer(const wxDataViewItem &, const wxDataViewItem &, const wxString &, int, int, wxClientData *)");
		}
		wxDataViewItem stack_lret = self->InsertContainer(parent, previous, text, icon, expanded, data);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// wxDataViewItem wxDataViewTreeCtrl::InsertItem(const wxDataViewItem & parent, const wxDataViewItem & previous, const wxString & text, int icon = -1, wxClientData * data = NULL)
	static int _bind_InsertItem(lua_State *L) {
		if (!_lg_typecheck_InsertItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeCtrl::InsertItem(const wxDataViewItem & parent, const wxDataViewItem & previous, const wxString & text, int icon = -1, wxClientData * data = NULL) function, expected prototype:\nwxDataViewItem wxDataViewTreeCtrl::InsertItem(const wxDataViewItem & parent, const wxDataViewItem & previous, const wxString & text, int icon = -1, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 11709329\narg 3 ID = 88196105\narg 5 ID = 50457573\n");
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeCtrl::InsertItem function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		const wxDataViewItem* previous_ptr=(Luna< wxDataViewItem >::check(L,3));
		if( !previous_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg previous in wxDataViewTreeCtrl::InsertItem function");
		}
		const wxDataViewItem & previous=*previous_ptr;
		wxString text(lua_tostring(L,4),lua_objlen(L,4));
		int icon=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		wxClientData* data=luatop>5 ? (Luna< wxClientData >::check(L,6)) : (wxClientData*)NULL;

		wxDataViewTreeCtrl* self=dynamic_cast< wxDataViewTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeCtrl::InsertItem(const wxDataViewItem &, const wxDataViewItem &, const wxString &, int, wxClientData *)");
		}
		wxDataViewItem stack_lret = self->InsertItem(parent, previous, text, icon, data);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// bool wxDataViewTreeCtrl::IsContainer(const wxDataViewItem & item)
	static int _bind_IsContainer(lua_State *L) {
		if (!_lg_typecheck_IsContainer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeCtrl::IsContainer(const wxDataViewItem & item) function, expected prototype:\nbool wxDataViewTreeCtrl::IsContainer(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::IsContainer function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeCtrl* self=dynamic_cast< wxDataViewTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeCtrl::IsContainer(const wxDataViewItem &)");
		}
		bool lret = self->IsContainer(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDataViewItem wxDataViewTreeCtrl::PrependContainer(const wxDataViewItem & parent, const wxString & text, int icon = -1, int expanded = -1, wxClientData * data = NULL)
	static int _bind_PrependContainer(lua_State *L) {
		if (!_lg_typecheck_PrependContainer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeCtrl::PrependContainer(const wxDataViewItem & parent, const wxString & text, int icon = -1, int expanded = -1, wxClientData * data = NULL) function, expected prototype:\nwxDataViewItem wxDataViewTreeCtrl::PrependContainer(const wxDataViewItem & parent, const wxString & text, int icon = -1, int expanded = -1, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 88196105\narg 5 ID = 50457573\n");
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeCtrl::PrependContainer function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		int icon=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		int expanded=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		wxClientData* data=luatop>5 ? (Luna< wxClientData >::check(L,6)) : (wxClientData*)NULL;

		wxDataViewTreeCtrl* self=dynamic_cast< wxDataViewTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeCtrl::PrependContainer(const wxDataViewItem &, const wxString &, int, int, wxClientData *)");
		}
		wxDataViewItem stack_lret = self->PrependContainer(parent, text, icon, expanded, data);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// wxDataViewItem wxDataViewTreeCtrl::PrependItem(const wxDataViewItem & parent, const wxString & text, int icon = -1, wxClientData * data = NULL)
	static int _bind_PrependItem(lua_State *L) {
		if (!_lg_typecheck_PrependItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeCtrl::PrependItem(const wxDataViewItem & parent, const wxString & text, int icon = -1, wxClientData * data = NULL) function, expected prototype:\nwxDataViewItem wxDataViewTreeCtrl::PrependItem(const wxDataViewItem & parent, const wxString & text, int icon = -1, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 88196105\narg 4 ID = 50457573\n");
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeCtrl::PrependItem function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		int icon=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		wxClientData* data=luatop>4 ? (Luna< wxClientData >::check(L,5)) : (wxClientData*)NULL;

		wxDataViewTreeCtrl* self=dynamic_cast< wxDataViewTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeCtrl::PrependItem(const wxDataViewItem &, const wxString &, int, wxClientData *)");
		}
		wxDataViewItem stack_lret = self->PrependItem(parent, text, icon, data);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// void wxDataViewTreeCtrl::SetImageList(wxImageList * imagelist)
	static int _bind_SetImageList(lua_State *L) {
		if (!_lg_typecheck_SetImageList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::SetImageList(wxImageList * imagelist) function, expected prototype:\nvoid wxDataViewTreeCtrl::SetImageList(wxImageList * imagelist)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxImageList* imagelist=dynamic_cast< wxImageList* >(Luna< wxObject >::check(L,2));

		wxDataViewTreeCtrl* self=dynamic_cast< wxDataViewTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::SetImageList(wxImageList *)");
		}
		self->SetImageList(imagelist);

		return 0;
	}

	// void wxDataViewTreeCtrl::SetItemData(const wxDataViewItem & item, wxClientData * data)
	static int _bind_SetItemData(lua_State *L) {
		if (!_lg_typecheck_SetItemData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::SetItemData(const wxDataViewItem & item, wxClientData * data) function, expected prototype:\nvoid wxDataViewTreeCtrl::SetItemData(const wxDataViewItem & item, wxClientData * data)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 50457573\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::SetItemData function");
		}
		const wxDataViewItem & item=*item_ptr;
		wxClientData* data=(Luna< wxClientData >::check(L,3));

		wxDataViewTreeCtrl* self=dynamic_cast< wxDataViewTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::SetItemData(const wxDataViewItem &, wxClientData *)");
		}
		self->SetItemData(item, data);

		return 0;
	}

	// void wxDataViewTreeCtrl::SetItemExpandedIcon(const wxDataViewItem & item, const wxIcon & icon)
	static int _bind_SetItemExpandedIcon(lua_State *L) {
		if (!_lg_typecheck_SetItemExpandedIcon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::SetItemExpandedIcon(const wxDataViewItem & item, const wxIcon & icon) function, expected prototype:\nvoid wxDataViewTreeCtrl::SetItemExpandedIcon(const wxDataViewItem & item, const wxIcon & icon)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 56813631\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::SetItemExpandedIcon function");
		}
		const wxDataViewItem & item=*item_ptr;
		const wxIcon* icon_ptr=dynamic_cast< wxIcon* >(Luna< wxObject >::check(L,3));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxDataViewTreeCtrl::SetItemExpandedIcon function");
		}
		const wxIcon & icon=*icon_ptr;

		wxDataViewTreeCtrl* self=dynamic_cast< wxDataViewTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::SetItemExpandedIcon(const wxDataViewItem &, const wxIcon &)");
		}
		self->SetItemExpandedIcon(item, icon);

		return 0;
	}

	// void wxDataViewTreeCtrl::SetItemIcon(const wxDataViewItem & item, const wxIcon & icon)
	static int _bind_SetItemIcon(lua_State *L) {
		if (!_lg_typecheck_SetItemIcon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::SetItemIcon(const wxDataViewItem & item, const wxIcon & icon) function, expected prototype:\nvoid wxDataViewTreeCtrl::SetItemIcon(const wxDataViewItem & item, const wxIcon & icon)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 56813631\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::SetItemIcon function");
		}
		const wxDataViewItem & item=*item_ptr;
		const wxIcon* icon_ptr=dynamic_cast< wxIcon* >(Luna< wxObject >::check(L,3));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxDataViewTreeCtrl::SetItemIcon function");
		}
		const wxIcon & icon=*icon_ptr;

		wxDataViewTreeCtrl* self=dynamic_cast< wxDataViewTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::SetItemIcon(const wxDataViewItem &, const wxIcon &)");
		}
		self->SetItemIcon(item, icon);

		return 0;
	}

	// void wxDataViewTreeCtrl::SetItemText(const wxDataViewItem & item, const wxString & text)
	static int _bind_SetItemText(lua_State *L) {
		if (!_lg_typecheck_SetItemText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeCtrl::SetItemText(const wxDataViewItem & item, const wxString & text) function, expected prototype:\nvoid wxDataViewTreeCtrl::SetItemText(const wxDataViewItem & item, const wxString & text)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 88196105\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeCtrl::SetItemText function");
		}
		const wxDataViewItem & item=*item_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxDataViewTreeCtrl* self=dynamic_cast< wxDataViewTreeCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewTreeCtrl::SetItemText(const wxDataViewItem &, const wxString &)");
		}
		self->SetItemText(item, text);

		return 0;
	}


	// Operator binds:

};

wxDataViewTreeCtrl* LunaTraits< wxDataViewTreeCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDataViewTreeCtrl::_bind_ctor(L);
}

void LunaTraits< wxDataViewTreeCtrl >::_bind_dtor(wxDataViewTreeCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewTreeCtrl >::className[] = "wxDataViewTreeCtrl";
const char LunaTraits< wxDataViewTreeCtrl >::fullName[] = "wxDataViewTreeCtrl";
const char LunaTraits< wxDataViewTreeCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewTreeCtrl >::parents[] = {"wx.wxDataViewCtrl", 0};
const int LunaTraits< wxDataViewTreeCtrl >::hash = 68008610;
const int LunaTraits< wxDataViewTreeCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxDataViewTreeCtrl >::methods[] = {
	{"AppendContainer", &luna_wrapper_wxDataViewTreeCtrl::_bind_AppendContainer},
	{"AppendItem", &luna_wrapper_wxDataViewTreeCtrl::_bind_AppendItem},
	{"Create", &luna_wrapper_wxDataViewTreeCtrl::_bind_Create},
	{"DeleteAllItems", &luna_wrapper_wxDataViewTreeCtrl::_bind_DeleteAllItems},
	{"DeleteChildren", &luna_wrapper_wxDataViewTreeCtrl::_bind_DeleteChildren},
	{"DeleteItem", &luna_wrapper_wxDataViewTreeCtrl::_bind_DeleteItem},
	{"GetChildCount", &luna_wrapper_wxDataViewTreeCtrl::_bind_GetChildCount},
	{"GetImageList", &luna_wrapper_wxDataViewTreeCtrl::_bind_GetImageList},
	{"GetItemData", &luna_wrapper_wxDataViewTreeCtrl::_bind_GetItemData},
	{"GetItemExpandedIcon", &luna_wrapper_wxDataViewTreeCtrl::_bind_GetItemExpandedIcon},
	{"GetItemIcon", &luna_wrapper_wxDataViewTreeCtrl::_bind_GetItemIcon},
	{"GetItemText", &luna_wrapper_wxDataViewTreeCtrl::_bind_GetItemText},
	{"GetNthChild", &luna_wrapper_wxDataViewTreeCtrl::_bind_GetNthChild},
	{"GetStore", &luna_wrapper_wxDataViewTreeCtrl::_bind_GetStore},
	{"InsertContainer", &luna_wrapper_wxDataViewTreeCtrl::_bind_InsertContainer},
	{"InsertItem", &luna_wrapper_wxDataViewTreeCtrl::_bind_InsertItem},
	{"IsContainer", &luna_wrapper_wxDataViewTreeCtrl::_bind_IsContainer},
	{"PrependContainer", &luna_wrapper_wxDataViewTreeCtrl::_bind_PrependContainer},
	{"PrependItem", &luna_wrapper_wxDataViewTreeCtrl::_bind_PrependItem},
	{"SetImageList", &luna_wrapper_wxDataViewTreeCtrl::_bind_SetImageList},
	{"SetItemData", &luna_wrapper_wxDataViewTreeCtrl::_bind_SetItemData},
	{"SetItemExpandedIcon", &luna_wrapper_wxDataViewTreeCtrl::_bind_SetItemExpandedIcon},
	{"SetItemIcon", &luna_wrapper_wxDataViewTreeCtrl::_bind_SetItemIcon},
	{"SetItemText", &luna_wrapper_wxDataViewTreeCtrl::_bind_SetItemText},
	{"__eq", &luna_wrapper_wxDataViewTreeCtrl::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewTreeCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxDataViewTreeCtrl::_cast_from_wxObject},
	{"wxTrackable", &luna_wrapper_wxDataViewTreeCtrl::_cast_from_wxTrackable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewTreeCtrl >::enumValues[] = {
	{0,0}
};


