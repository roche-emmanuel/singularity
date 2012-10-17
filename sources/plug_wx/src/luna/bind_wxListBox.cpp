#include <plug_common.h>

class luna_wrapper_wxListBox {
public:
	typedef Luna< wxListBox > luna_t;

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
		wxListBox* ptr= dynamic_cast< wxListBox* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxListBox >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxItemContainerImmutable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxListBox* ptr= dynamic_cast< wxListBox* >(Luna< wxItemContainerImmutable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxListBox >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>8 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,59507769) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,56813631) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>9 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,59507769) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Deselect(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelections(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,47342076) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HitTest_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HitTest_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertItems_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertItems_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsSelected(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnsureVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsSorted(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Refresh(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,20234418)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindString(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxListBox::wxListBox()
	static wxListBox* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxListBox::wxListBox() function, expected prototype:\nwxListBox::wxListBox()\nClass arguments details:\n");
		}


		return new wxListBox();
	}

	// wxListBox::wxListBox(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxListBoxNameStr)
	static wxListBox* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxListBox::wxListBox(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxListBoxNameStr) function, expected prototype:\nwxListBox::wxListBox(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxListBoxNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 5 ID = 59507769\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxListBox::wxListBox function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,4));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxListBox::wxListBox function");
		}
		const wxSize & size=*size_ptr;
		const wxArrayString* choices_ptr=(Luna< wxArrayString >::check(L,5));
		if( !choices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg choices in wxListBox::wxListBox function");
		}
		const wxArrayString & choices=*choices_ptr;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0;
		const wxValidator* validator_ptr=luatop>6 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxListBox::wxListBox function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		return new wxListBox(parent, id, pos, size, choices, style, validator, name);
	}

	// Overload binder for wxListBox::wxListBox
	static wxListBox* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxListBox, cannot match any of the overloads for function wxListBox:\n  wxListBox()\n  wxListBox(wxWindow *, int, const wxPoint &, const wxSize &, const wxArrayString &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxListBox::Create(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxListBoxNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListBox::Create(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxListBoxNameStr) function, expected prototype:\nbool wxListBox::Create(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxListBoxNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 5 ID = 59507769\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,4));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxListBox::Create function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,5));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxListBox::Create function");
		}
		const wxSize & size=*size_ptr;
		const wxArrayString* choices_ptr=(Luna< wxArrayString >::check(L,6));
		if( !choices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg choices in wxListBox::Create function");
		}
		const wxArrayString & choices=*choices_ptr;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : 0;
		const wxValidator* validator_ptr=luatop>7 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxListBox::Create function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		wxListBox* self=dynamic_cast< wxListBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListBox::Create(wxWindow *, int, const wxPoint &, const wxSize &, const wxArrayString &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, pos, size, choices, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListBox::Deselect(int n)
	static int _bind_Deselect(lua_State *L) {
		if (!_lg_typecheck_Deselect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListBox::Deselect(int n) function, expected prototype:\nvoid wxListBox::Deselect(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxListBox* self=dynamic_cast< wxListBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListBox::Deselect(int)");
		}
		self->Deselect(n);

		return 0;
	}

	// int wxListBox::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxListBox::GetSelection() const function, expected prototype:\nint wxListBox::GetSelection() const\nClass arguments details:\n");
		}


		wxListBox* self=dynamic_cast< wxListBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxListBox::GetSelection() const");
		}
		int lret = self->GetSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxListBox::GetSelections(wxArrayInt & selections) const
	static int _bind_GetSelections(lua_State *L) {
		if (!_lg_typecheck_GetSelections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxListBox::GetSelections(wxArrayInt & selections) const function, expected prototype:\nint wxListBox::GetSelections(wxArrayInt & selections) const\nClass arguments details:\narg 1 ID = 47342076\n");
		}

		wxArrayInt* selections_ptr=(Luna< wxArrayInt >::check(L,2));
		if( !selections_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg selections in wxListBox::GetSelections function");
		}
		wxArrayInt & selections=*selections_ptr;

		wxListBox* self=dynamic_cast< wxListBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxListBox::GetSelections(wxArrayInt &) const");
		}
		int lret = self->GetSelections(selections);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxListBox::HitTest(const wxPoint & point) const
	static int _bind_HitTest_overload_1(lua_State *L) {
		if (!_lg_typecheck_HitTest_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxListBox::HitTest(const wxPoint & point) const function, expected prototype:\nint wxListBox::HitTest(const wxPoint & point) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxListBox::HitTest function");
		}
		const wxPoint & point=*point_ptr;

		wxListBox* self=dynamic_cast< wxListBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxListBox::HitTest(const wxPoint &) const");
		}
		int lret = self->HitTest(point);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxListBox::HitTest(int x, int y) const
	static int _bind_HitTest_overload_2(lua_State *L) {
		if (!_lg_typecheck_HitTest_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxListBox::HitTest(int x, int y) const function, expected prototype:\nint wxListBox::HitTest(int x, int y) const\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxListBox* self=dynamic_cast< wxListBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxListBox::HitTest(int, int) const");
		}
		int lret = self->HitTest(x, y);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxListBox::HitTest
	static int _bind_HitTest(lua_State *L) {
		if (_lg_typecheck_HitTest_overload_1(L)) return _bind_HitTest_overload_1(L);
		if (_lg_typecheck_HitTest_overload_2(L)) return _bind_HitTest_overload_2(L);

		luaL_error(L, "error in function HitTest, cannot match any of the overloads for function HitTest:\n  HitTest(const wxPoint &)\n  HitTest(int, int)\n");
		return 0;
	}

	// void wxListBox::InsertItems(unsigned int nItems, const wxString * items, unsigned int pos)
	static int _bind_InsertItems_overload_1(lua_State *L) {
		if (!_lg_typecheck_InsertItems_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListBox::InsertItems(unsigned int nItems, const wxString * items, unsigned int pos) function, expected prototype:\nvoid wxListBox::InsertItems(unsigned int nItems, const wxString * items, unsigned int pos)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		unsigned int nItems=(unsigned int)lua_tointeger(L,2);
		wxString items(lua_tostring(L,3),lua_objlen(L,3));
		unsigned int pos=(unsigned int)lua_tointeger(L,4);

		wxListBox* self=dynamic_cast< wxListBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListBox::InsertItems(unsigned int, const wxString *, unsigned int)");
		}
		self->InsertItems(nItems, &items, pos);

		return 0;
	}

	// void wxListBox::InsertItems(const wxArrayString & items, unsigned int pos)
	static int _bind_InsertItems_overload_2(lua_State *L) {
		if (!_lg_typecheck_InsertItems_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListBox::InsertItems(const wxArrayString & items, unsigned int pos) function, expected prototype:\nvoid wxListBox::InsertItems(const wxArrayString & items, unsigned int pos)\nClass arguments details:\narg 1 ID = 59507769\n");
		}

		const wxArrayString* items_ptr=(Luna< wxArrayString >::check(L,2));
		if( !items_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg items in wxListBox::InsertItems function");
		}
		const wxArrayString & items=*items_ptr;
		unsigned int pos=(unsigned int)lua_tointeger(L,3);

		wxListBox* self=dynamic_cast< wxListBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListBox::InsertItems(const wxArrayString &, unsigned int)");
		}
		self->InsertItems(items, pos);

		return 0;
	}

	// Overload binder for wxListBox::InsertItems
	static int _bind_InsertItems(lua_State *L) {
		if (_lg_typecheck_InsertItems_overload_1(L)) return _bind_InsertItems_overload_1(L);
		if (_lg_typecheck_InsertItems_overload_2(L)) return _bind_InsertItems_overload_2(L);

		luaL_error(L, "error in function InsertItems, cannot match any of the overloads for function InsertItems:\n  InsertItems(unsigned int, const wxString *, unsigned int)\n  InsertItems(const wxArrayString &, unsigned int)\n");
		return 0;
	}

	// bool wxListBox::IsSelected(int n) const
	static int _bind_IsSelected(lua_State *L) {
		if (!_lg_typecheck_IsSelected(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListBox::IsSelected(int n) const function, expected prototype:\nbool wxListBox::IsSelected(int n) const\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxListBox* self=dynamic_cast< wxListBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListBox::IsSelected(int) const");
		}
		bool lret = self->IsSelected(n);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListBox::EnsureVisible(int n)
	static int _bind_EnsureVisible(lua_State *L) {
		if (!_lg_typecheck_EnsureVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListBox::EnsureVisible(int n) function, expected prototype:\nvoid wxListBox::EnsureVisible(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxListBox* self=dynamic_cast< wxListBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListBox::EnsureVisible(int)");
		}
		self->EnsureVisible(n);

		return 0;
	}

	// bool wxListBox::IsSorted() const
	static int _bind_IsSorted(lua_State *L) {
		if (!_lg_typecheck_IsSorted(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxListBox::IsSorted() const function, expected prototype:\nbool wxListBox::IsSorted() const\nClass arguments details:\n");
		}


		wxListBox* self=dynamic_cast< wxListBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxListBox::IsSorted() const");
		}
		bool lret = self->IsSorted();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListBox::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_Refresh(lua_State *L) {
		if (!_lg_typecheck_Refresh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxListBox::Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxListBox::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxListBox* self=dynamic_cast< wxListBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxListBox::Refresh(bool, const wxRect *)");
		}
		self->Refresh(eraseBackground, rect);

		return 0;
	}

	// unsigned int wxListBox::GetCount() const
	static int _bind_GetCount(lua_State *L) {
		if (!_lg_typecheck_GetCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxListBox::GetCount() const function, expected prototype:\nunsigned int wxListBox::GetCount() const\nClass arguments details:\n");
		}


		wxListBox* self=dynamic_cast< wxListBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxListBox::GetCount() const");
		}
		unsigned int lret = self->GetCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxListBox::GetString(unsigned int n) const
	static int _bind_GetString(lua_State *L) {
		if (!_lg_typecheck_GetString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxListBox::GetString(unsigned int n) const function, expected prototype:\nwxString wxListBox::GetString(unsigned int n) const\nClass arguments details:\n");
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);

		wxListBox* self=dynamic_cast< wxListBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxListBox::GetString(unsigned int) const");
		}
		wxString lret = self->GetString(n);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxListBox::FindString(const wxString & string, bool caseSensitive = false) const
	static int _bind_FindString(lua_State *L) {
		if (!_lg_typecheck_FindString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxListBox::FindString(const wxString & string, bool caseSensitive = false) const function, expected prototype:\nint wxListBox::FindString(const wxString & string, bool caseSensitive = false) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString string(lua_tostring(L,2),lua_objlen(L,2));
		bool caseSensitive=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		wxListBox* self=dynamic_cast< wxListBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxListBox::FindString(const wxString &, bool) const");
		}
		int lret = self->FindString(string, caseSensitive);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxListBox* LunaTraits< wxListBox >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxListBox::_bind_ctor(L);
}

void LunaTraits< wxListBox >::_bind_dtor(wxListBox* obj) {
	delete obj;
}

const char LunaTraits< wxListBox >::className[] = "wxListBox";
const char LunaTraits< wxListBox >::fullName[] = "wxListBox";
const char LunaTraits< wxListBox >::moduleName[] = "wx";
const char* LunaTraits< wxListBox >::parents[] = {"wx.wxControlWithItems", 0};
const int LunaTraits< wxListBox >::hash = 7842413;
const int LunaTraits< wxListBox >::uniqueIDs[] = {56813631, 53506535, 69784830,0};

luna_RegType LunaTraits< wxListBox >::methods[] = {
	{"Create", &luna_wrapper_wxListBox::_bind_Create},
	{"Deselect", &luna_wrapper_wxListBox::_bind_Deselect},
	{"GetSelection", &luna_wrapper_wxListBox::_bind_GetSelection},
	{"GetSelections", &luna_wrapper_wxListBox::_bind_GetSelections},
	{"HitTest", &luna_wrapper_wxListBox::_bind_HitTest},
	{"InsertItems", &luna_wrapper_wxListBox::_bind_InsertItems},
	{"IsSelected", &luna_wrapper_wxListBox::_bind_IsSelected},
	{"EnsureVisible", &luna_wrapper_wxListBox::_bind_EnsureVisible},
	{"IsSorted", &luna_wrapper_wxListBox::_bind_IsSorted},
	{"Refresh", &luna_wrapper_wxListBox::_bind_Refresh},
	{"GetCount", &luna_wrapper_wxListBox::_bind_GetCount},
	{"GetString", &luna_wrapper_wxListBox::_bind_GetString},
	{"FindString", &luna_wrapper_wxListBox::_bind_FindString},
	{"__eq", &luna_wrapper_wxListBox::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxListBox >::converters[] = {
	{"wxObject", &luna_wrapper_wxListBox::_cast_from_wxObject},
	{"wxItemContainerImmutable", &luna_wrapper_wxListBox::_cast_from_wxItemContainerImmutable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxListBox >::enumValues[] = {
	{0,0}
};


