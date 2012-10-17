#include <plug_common.h>

class luna_wrapper_wxRibbonButtonBar {
public:
	typedef Luna< wxRibbonButtonBar > luna_t;

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
		wxRibbonButtonBar* ptr= dynamic_cast< wxRibbonButtonBar* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRibbonButtonBar >::push(L,ptr,false);
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
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
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

	inline static bool _lg_typecheck_AddButton_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddButton_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>10 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,56813631) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,56813631) ) return false;
		if( luatop>7 && (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		if( luatop>9 && (lua_isnil(L,10)==0 && !Luna<void>::has_uniqueid(L,10,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddDropdownButton(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddHybridButton(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddToggleButton(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Realize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ClearButtons(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DeleteButton(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnableButton(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ToggleButton(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxRibbonButtonBar::wxRibbonButtonBar()
	static wxRibbonButtonBar* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonButtonBar::wxRibbonButtonBar() function, expected prototype:\nwxRibbonButtonBar::wxRibbonButtonBar()\nClass arguments details:\n");
		}


		return new wxRibbonButtonBar();
	}

	// wxRibbonButtonBar::wxRibbonButtonBar(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0)
	static wxRibbonButtonBar* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonButtonBar::wxRibbonButtonBar(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0) function, expected prototype:\nwxRibbonButtonBar::wxRibbonButtonBar(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : wxID_ANY;
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRibbonButtonBar::wxRibbonButtonBar function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRibbonButtonBar::wxRibbonButtonBar function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : wxDefaultSize;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : 0;

		return new wxRibbonButtonBar(parent, id, pos, size, style);
	}

	// Overload binder for wxRibbonButtonBar::wxRibbonButtonBar
	static wxRibbonButtonBar* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxRibbonButtonBar, cannot match any of the overloads for function wxRibbonButtonBar:\n  wxRibbonButtonBar()\n  wxRibbonButtonBar(wxWindow *, int, const wxPoint &, const wxSize &, long)\n");
		return NULL;
	}


	// Function binds:
	// bool wxRibbonButtonBar::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonButtonBar::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0) function, expected prototype:\nbool wxRibbonButtonBar::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : wxID_ANY;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRibbonButtonBar::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRibbonButtonBar::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0;

		wxRibbonButtonBar* self=dynamic_cast< wxRibbonButtonBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonButtonBar::Create(wxWindow *, int, const wxPoint &, const wxSize &, long)");
		}
		bool lret = self->Create(parent, id, pos, size, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxRibbonButtonBarButtonBase * wxRibbonButtonBar::AddButton(int button_id, const wxString & label, const wxBitmap & bitmap, const wxString & help_string, wxRibbonButtonKind kind = wxRIBBON_BUTTON_NORMAL)
	static int _bind_AddButton_overload_1(lua_State *L) {
		if (!_lg_typecheck_AddButton_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonButtonBarButtonBase * wxRibbonButtonBar::AddButton(int button_id, const wxString & label, const wxBitmap & bitmap, const wxString & help_string, wxRibbonButtonKind kind = wxRIBBON_BUTTON_NORMAL) function, expected prototype:\nwxRibbonButtonBarButtonBase * wxRibbonButtonBar::AddButton(int button_id, const wxString & label, const wxBitmap & bitmap, const wxString & help_string, wxRibbonButtonKind kind = wxRIBBON_BUTTON_NORMAL)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		int button_id=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxRibbonButtonBar::AddButton function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		wxString help_string(lua_tostring(L,5),lua_objlen(L,5));
		wxRibbonButtonKind kind=luatop>5 ? (wxRibbonButtonKind)lua_tointeger(L,6) : wxRIBBON_BUTTON_NORMAL;

		wxRibbonButtonBar* self=dynamic_cast< wxRibbonButtonBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonButtonBarButtonBase * wxRibbonButtonBar::AddButton(int, const wxString &, const wxBitmap &, const wxString &, wxRibbonButtonKind)");
		}
		wxRibbonButtonBarButtonBase * lret = self->AddButton(button_id, label, bitmap, help_string, kind);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonButtonBarButtonBase >::push(L,lret,false);

		return 1;
	}

	// wxRibbonButtonBarButtonBase * wxRibbonButtonBar::AddButton(int button_id, const wxString & label, const wxBitmap & bitmap, const wxBitmap & bitmap_small = wxNullBitmap, const wxBitmap & bitmap_disabled = wxNullBitmap, const wxBitmap & bitmap_small_disabled = wxNullBitmap, wxRibbonButtonKind kind = wxRIBBON_BUTTON_NORMAL, const wxString & help_string = wxEmptyString, wxObject * client_data = NULL)
	static int _bind_AddButton_overload_2(lua_State *L) {
		if (!_lg_typecheck_AddButton_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonButtonBarButtonBase * wxRibbonButtonBar::AddButton(int button_id, const wxString & label, const wxBitmap & bitmap, const wxBitmap & bitmap_small = wxNullBitmap, const wxBitmap & bitmap_disabled = wxNullBitmap, const wxBitmap & bitmap_small_disabled = wxNullBitmap, wxRibbonButtonKind kind = wxRIBBON_BUTTON_NORMAL, const wxString & help_string = wxEmptyString, wxObject * client_data = NULL) function, expected prototype:\nwxRibbonButtonBarButtonBase * wxRibbonButtonBar::AddButton(int button_id, const wxString & label, const wxBitmap & bitmap, const wxBitmap & bitmap_small = wxNullBitmap, const wxBitmap & bitmap_disabled = wxNullBitmap, const wxBitmap & bitmap_small_disabled = wxNullBitmap, wxRibbonButtonKind kind = wxRIBBON_BUTTON_NORMAL, const wxString & help_string = wxEmptyString, wxObject * client_data = NULL)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 56813631\narg 5 ID = 56813631\narg 6 ID = 56813631\narg 8 ID = 88196105\narg 9 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		int button_id=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxRibbonButtonBar::AddButton function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		const wxBitmap* bitmap_small_ptr=luatop>4 ? dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,5)) : NULL;
		if( luatop>4 && !bitmap_small_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap_small in wxRibbonButtonBar::AddButton function");
		}
		const wxBitmap & bitmap_small=luatop>4 ? *bitmap_small_ptr : wxNullBitmap;
		const wxBitmap* bitmap_disabled_ptr=luatop>5 ? dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,6)) : NULL;
		if( luatop>5 && !bitmap_disabled_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap_disabled in wxRibbonButtonBar::AddButton function");
		}
		const wxBitmap & bitmap_disabled=luatop>5 ? *bitmap_disabled_ptr : wxNullBitmap;
		const wxBitmap* bitmap_small_disabled_ptr=luatop>6 ? dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,7)) : NULL;
		if( luatop>6 && !bitmap_small_disabled_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap_small_disabled in wxRibbonButtonBar::AddButton function");
		}
		const wxBitmap & bitmap_small_disabled=luatop>6 ? *bitmap_small_disabled_ptr : wxNullBitmap;
		wxRibbonButtonKind kind=luatop>7 ? (wxRibbonButtonKind)lua_tointeger(L,8) : wxRIBBON_BUTTON_NORMAL;
		wxString help_string(lua_tostring(L,9),lua_objlen(L,9));
		wxObject* client_data=luatop>9 ? (Luna< wxObject >::check(L,10)) : (wxObject*)NULL;

		wxRibbonButtonBar* self=dynamic_cast< wxRibbonButtonBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonButtonBarButtonBase * wxRibbonButtonBar::AddButton(int, const wxString &, const wxBitmap &, const wxBitmap &, const wxBitmap &, const wxBitmap &, wxRibbonButtonKind, const wxString &, wxObject *)");
		}
		wxRibbonButtonBarButtonBase * lret = self->AddButton(button_id, label, bitmap, bitmap_small, bitmap_disabled, bitmap_small_disabled, kind, help_string, client_data);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonButtonBarButtonBase >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxRibbonButtonBar::AddButton
	static int _bind_AddButton(lua_State *L) {
		if (_lg_typecheck_AddButton_overload_1(L)) return _bind_AddButton_overload_1(L);
		if (_lg_typecheck_AddButton_overload_2(L)) return _bind_AddButton_overload_2(L);

		luaL_error(L, "error in function AddButton, cannot match any of the overloads for function AddButton:\n  AddButton(int, const wxString &, const wxBitmap &, const wxString &, wxRibbonButtonKind)\n  AddButton(int, const wxString &, const wxBitmap &, const wxBitmap &, const wxBitmap &, const wxBitmap &, wxRibbonButtonKind, const wxString &, wxObject *)\n");
		return 0;
	}

	// wxRibbonButtonBarButtonBase * wxRibbonButtonBar::AddDropdownButton(int button_id, const wxString & label, const wxBitmap & bitmap, const wxString & help_string = wxEmptyString)
	static int _bind_AddDropdownButton(lua_State *L) {
		if (!_lg_typecheck_AddDropdownButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonButtonBarButtonBase * wxRibbonButtonBar::AddDropdownButton(int button_id, const wxString & label, const wxBitmap & bitmap, const wxString & help_string = wxEmptyString) function, expected prototype:\nwxRibbonButtonBarButtonBase * wxRibbonButtonBar::AddDropdownButton(int button_id, const wxString & label, const wxBitmap & bitmap, const wxString & help_string = wxEmptyString)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		int button_id=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxRibbonButtonBar::AddDropdownButton function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		wxString help_string(lua_tostring(L,5),lua_objlen(L,5));

		wxRibbonButtonBar* self=dynamic_cast< wxRibbonButtonBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonButtonBarButtonBase * wxRibbonButtonBar::AddDropdownButton(int, const wxString &, const wxBitmap &, const wxString &)");
		}
		wxRibbonButtonBarButtonBase * lret = self->AddDropdownButton(button_id, label, bitmap, help_string);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonButtonBarButtonBase >::push(L,lret,false);

		return 1;
	}

	// wxRibbonButtonBarButtonBase * wxRibbonButtonBar::AddHybridButton(int button_id, const wxString & label, const wxBitmap & bitmap, const wxString & help_string = wxEmptyString)
	static int _bind_AddHybridButton(lua_State *L) {
		if (!_lg_typecheck_AddHybridButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonButtonBarButtonBase * wxRibbonButtonBar::AddHybridButton(int button_id, const wxString & label, const wxBitmap & bitmap, const wxString & help_string = wxEmptyString) function, expected prototype:\nwxRibbonButtonBarButtonBase * wxRibbonButtonBar::AddHybridButton(int button_id, const wxString & label, const wxBitmap & bitmap, const wxString & help_string = wxEmptyString)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		int button_id=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxRibbonButtonBar::AddHybridButton function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		wxString help_string(lua_tostring(L,5),lua_objlen(L,5));

		wxRibbonButtonBar* self=dynamic_cast< wxRibbonButtonBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonButtonBarButtonBase * wxRibbonButtonBar::AddHybridButton(int, const wxString &, const wxBitmap &, const wxString &)");
		}
		wxRibbonButtonBarButtonBase * lret = self->AddHybridButton(button_id, label, bitmap, help_string);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonButtonBarButtonBase >::push(L,lret,false);

		return 1;
	}

	// wxRibbonButtonBarButtonBase * wxRibbonButtonBar::AddToggleButton(int button_id, const wxString & label, const wxBitmap & bitmap, const wxString & help_string = wxEmptyString)
	static int _bind_AddToggleButton(lua_State *L) {
		if (!_lg_typecheck_AddToggleButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonButtonBarButtonBase * wxRibbonButtonBar::AddToggleButton(int button_id, const wxString & label, const wxBitmap & bitmap, const wxString & help_string = wxEmptyString) function, expected prototype:\nwxRibbonButtonBarButtonBase * wxRibbonButtonBar::AddToggleButton(int button_id, const wxString & label, const wxBitmap & bitmap, const wxString & help_string = wxEmptyString)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		int button_id=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxRibbonButtonBar::AddToggleButton function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		wxString help_string(lua_tostring(L,5),lua_objlen(L,5));

		wxRibbonButtonBar* self=dynamic_cast< wxRibbonButtonBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonButtonBarButtonBase * wxRibbonButtonBar::AddToggleButton(int, const wxString &, const wxBitmap &, const wxString &)");
		}
		wxRibbonButtonBarButtonBase * lret = self->AddToggleButton(button_id, label, bitmap, help_string);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonButtonBarButtonBase >::push(L,lret,false);

		return 1;
	}

	// bool wxRibbonButtonBar::Realize()
	static int _bind_Realize(lua_State *L) {
		if (!_lg_typecheck_Realize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonButtonBar::Realize() function, expected prototype:\nbool wxRibbonButtonBar::Realize()\nClass arguments details:\n");
		}


		wxRibbonButtonBar* self=dynamic_cast< wxRibbonButtonBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonButtonBar::Realize()");
		}
		bool lret = self->Realize();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRibbonButtonBar::ClearButtons()
	static int _bind_ClearButtons(lua_State *L) {
		if (!_lg_typecheck_ClearButtons(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRibbonButtonBar::ClearButtons() function, expected prototype:\nvoid wxRibbonButtonBar::ClearButtons()\nClass arguments details:\n");
		}


		wxRibbonButtonBar* self=dynamic_cast< wxRibbonButtonBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRibbonButtonBar::ClearButtons()");
		}
		self->ClearButtons();

		return 0;
	}

	// bool wxRibbonButtonBar::DeleteButton(int button_id)
	static int _bind_DeleteButton(lua_State *L) {
		if (!_lg_typecheck_DeleteButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonButtonBar::DeleteButton(int button_id) function, expected prototype:\nbool wxRibbonButtonBar::DeleteButton(int button_id)\nClass arguments details:\n");
		}

		int button_id=(int)lua_tointeger(L,2);

		wxRibbonButtonBar* self=dynamic_cast< wxRibbonButtonBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonButtonBar::DeleteButton(int)");
		}
		bool lret = self->DeleteButton(button_id);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRibbonButtonBar::EnableButton(int button_id, bool enable = true)
	static int _bind_EnableButton(lua_State *L) {
		if (!_lg_typecheck_EnableButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRibbonButtonBar::EnableButton(int button_id, bool enable = true) function, expected prototype:\nvoid wxRibbonButtonBar::EnableButton(int button_id, bool enable = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int button_id=(int)lua_tointeger(L,2);
		bool enable=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxRibbonButtonBar* self=dynamic_cast< wxRibbonButtonBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRibbonButtonBar::EnableButton(int, bool)");
		}
		self->EnableButton(button_id, enable);

		return 0;
	}

	// void wxRibbonButtonBar::ToggleButton(int button_id, bool checked)
	static int _bind_ToggleButton(lua_State *L) {
		if (!_lg_typecheck_ToggleButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRibbonButtonBar::ToggleButton(int button_id, bool checked) function, expected prototype:\nvoid wxRibbonButtonBar::ToggleButton(int button_id, bool checked)\nClass arguments details:\n");
		}

		int button_id=(int)lua_tointeger(L,2);
		bool checked=(bool)(lua_toboolean(L,3)==1);

		wxRibbonButtonBar* self=dynamic_cast< wxRibbonButtonBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRibbonButtonBar::ToggleButton(int, bool)");
		}
		self->ToggleButton(button_id, checked);

		return 0;
	}


	// Operator binds:

};

wxRibbonButtonBar* LunaTraits< wxRibbonButtonBar >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRibbonButtonBar::_bind_ctor(L);
}

void LunaTraits< wxRibbonButtonBar >::_bind_dtor(wxRibbonButtonBar* obj) {
	delete obj;
}

const char LunaTraits< wxRibbonButtonBar >::className[] = "wxRibbonButtonBar";
const char LunaTraits< wxRibbonButtonBar >::fullName[] = "wxRibbonButtonBar";
const char LunaTraits< wxRibbonButtonBar >::moduleName[] = "wx";
const char* LunaTraits< wxRibbonButtonBar >::parents[] = {"wx.wxRibbonControl", 0};
const int LunaTraits< wxRibbonButtonBar >::hash = 4276099;
const int LunaTraits< wxRibbonButtonBar >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxRibbonButtonBar >::methods[] = {
	{"Create", &luna_wrapper_wxRibbonButtonBar::_bind_Create},
	{"AddButton", &luna_wrapper_wxRibbonButtonBar::_bind_AddButton},
	{"AddDropdownButton", &luna_wrapper_wxRibbonButtonBar::_bind_AddDropdownButton},
	{"AddHybridButton", &luna_wrapper_wxRibbonButtonBar::_bind_AddHybridButton},
	{"AddToggleButton", &luna_wrapper_wxRibbonButtonBar::_bind_AddToggleButton},
	{"Realize", &luna_wrapper_wxRibbonButtonBar::_bind_Realize},
	{"ClearButtons", &luna_wrapper_wxRibbonButtonBar::_bind_ClearButtons},
	{"DeleteButton", &luna_wrapper_wxRibbonButtonBar::_bind_DeleteButton},
	{"EnableButton", &luna_wrapper_wxRibbonButtonBar::_bind_EnableButton},
	{"ToggleButton", &luna_wrapper_wxRibbonButtonBar::_bind_ToggleButton},
	{"__eq", &luna_wrapper_wxRibbonButtonBar::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRibbonButtonBar >::converters[] = {
	{"wxObject", &luna_wrapper_wxRibbonButtonBar::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRibbonButtonBar >::enumValues[] = {
	{0,0}
};


