#include <plug_common.h>

class luna_wrapper_wxRearrangeList {
public:
	typedef Luna< wxRearrangeList > luna_t;

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
		wxRearrangeList* ptr= dynamic_cast< wxRearrangeList* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRearrangeList >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxItemContainerImmutable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRearrangeList* ptr= dynamic_cast< wxRearrangeList* >(Luna< wxItemContainerImmutable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRearrangeList >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>9 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,47342076) ) return false;
		if( (!dynamic_cast< wxArrayInt* >(Luna< wxArrayInt >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,59507769) ) return false;
		if( (!dynamic_cast< wxArrayString* >(Luna< wxArrayString >::check(L,6))) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>7 && (!dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8))) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>10 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,47342076) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,59507769) ) return false;
		if( luatop>7 && (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && !Luna<void>::has_uniqueid(L,9,56813631) ) return false;
		if( luatop>9 && lua_isstring(L,10)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCurrentOrder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CanMoveCurrentUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CanMoveCurrentDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MoveCurrentUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MoveCurrentDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxRearrangeList::wxRearrangeList()
	static wxRearrangeList* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRearrangeList::wxRearrangeList() function, expected prototype:\nwxRearrangeList::wxRearrangeList()\nClass arguments details:\n");
		}


		return new wxRearrangeList();
	}

	// wxRearrangeList::wxRearrangeList(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayInt & order, const wxArrayString & items, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRearrangeListNameStr)
	static wxRearrangeList* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRearrangeList::wxRearrangeList(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayInt & order, const wxArrayString & items, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRearrangeListNameStr) function, expected prototype:\nwxRearrangeList::wxRearrangeList(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayInt & order, const wxArrayString & items, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRearrangeListNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 5 ID = 47342076\narg 6 ID = 59507769\narg 8 ID = 56813631\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRearrangeList::wxRearrangeList function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,4));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRearrangeList::wxRearrangeList function");
		}
		const wxSize & size=*size_ptr;
		const wxArrayInt* order_ptr=(Luna< wxArrayInt >::check(L,5));
		if( !order_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg order in wxRearrangeList::wxRearrangeList function");
		}
		const wxArrayInt & order=*order_ptr;
		const wxArrayString* items_ptr=(Luna< wxArrayString >::check(L,6));
		if( !items_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg items in wxRearrangeList::wxRearrangeList function");
		}
		const wxArrayString & items=*items_ptr;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : 0;
		const wxValidator* validator_ptr=luatop>7 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxRearrangeList::wxRearrangeList function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		return new wxRearrangeList(parent, id, pos, size, order, items, style, validator, name);
	}

	// Overload binder for wxRearrangeList::wxRearrangeList
	static wxRearrangeList* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxRearrangeList, cannot match any of the overloads for function wxRearrangeList:\n  wxRearrangeList()\n  wxRearrangeList(wxWindow *, int, const wxPoint &, const wxSize &, const wxArrayInt &, const wxArrayString &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxRearrangeList::Create(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayInt & order, const wxArrayString & items, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRearrangeListNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::Create(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayInt & order, const wxArrayString & items, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRearrangeListNameStr) function, expected prototype:\nbool wxRearrangeList::Create(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayInt & order, const wxArrayString & items, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRearrangeListNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 5 ID = 47342076\narg 6 ID = 59507769\narg 8 ID = 56813631\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,4));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRearrangeList::Create function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,5));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRearrangeList::Create function");
		}
		const wxSize & size=*size_ptr;
		const wxArrayInt* order_ptr=(Luna< wxArrayInt >::check(L,6));
		if( !order_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg order in wxRearrangeList::Create function");
		}
		const wxArrayInt & order=*order_ptr;
		const wxArrayString* items_ptr=(Luna< wxArrayString >::check(L,7));
		if( !items_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg items in wxRearrangeList::Create function");
		}
		const wxArrayString & items=*items_ptr;
		long style=luatop>7 ? (long)lua_tointeger(L,8) : 0;
		const wxValidator* validator_ptr=luatop>8 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,9)) : NULL;
		if( luatop>8 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxRearrangeList::Create function");
		}
		const wxValidator & validator=luatop>8 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,10),lua_objlen(L,10));

		wxRearrangeList* self=dynamic_cast< wxRearrangeList* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::Create(wxWindow *, int, const wxPoint &, const wxSize &, const wxArrayInt &, const wxArrayString &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, pos, size, order, items, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const wxArrayInt & wxRearrangeList::GetCurrentOrder() const
	static int _bind_GetCurrentOrder(lua_State *L) {
		if (!_lg_typecheck_GetCurrentOrder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxArrayInt & wxRearrangeList::GetCurrentOrder() const function, expected prototype:\nconst wxArrayInt & wxRearrangeList::GetCurrentOrder() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=dynamic_cast< wxRearrangeList* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxArrayInt & wxRearrangeList::GetCurrentOrder() const");
		}
		const wxArrayInt* lret = &self->GetCurrentOrder();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayInt >::push(L,lret,false);

		return 1;
	}

	// bool wxRearrangeList::CanMoveCurrentUp() const
	static int _bind_CanMoveCurrentUp(lua_State *L) {
		if (!_lg_typecheck_CanMoveCurrentUp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::CanMoveCurrentUp() const function, expected prototype:\nbool wxRearrangeList::CanMoveCurrentUp() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=dynamic_cast< wxRearrangeList* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::CanMoveCurrentUp() const");
		}
		bool lret = self->CanMoveCurrentUp();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRearrangeList::CanMoveCurrentDown() const
	static int _bind_CanMoveCurrentDown(lua_State *L) {
		if (!_lg_typecheck_CanMoveCurrentDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::CanMoveCurrentDown() const function, expected prototype:\nbool wxRearrangeList::CanMoveCurrentDown() const\nClass arguments details:\n");
		}


		wxRearrangeList* self=dynamic_cast< wxRearrangeList* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::CanMoveCurrentDown() const");
		}
		bool lret = self->CanMoveCurrentDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRearrangeList::MoveCurrentUp()
	static int _bind_MoveCurrentUp(lua_State *L) {
		if (!_lg_typecheck_MoveCurrentUp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::MoveCurrentUp() function, expected prototype:\nbool wxRearrangeList::MoveCurrentUp()\nClass arguments details:\n");
		}


		wxRearrangeList* self=dynamic_cast< wxRearrangeList* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::MoveCurrentUp()");
		}
		bool lret = self->MoveCurrentUp();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRearrangeList::MoveCurrentDown()
	static int _bind_MoveCurrentDown(lua_State *L) {
		if (!_lg_typecheck_MoveCurrentDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRearrangeList::MoveCurrentDown() function, expected prototype:\nbool wxRearrangeList::MoveCurrentDown()\nClass arguments details:\n");
		}


		wxRearrangeList* self=dynamic_cast< wxRearrangeList* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRearrangeList::MoveCurrentDown()");
		}
		bool lret = self->MoveCurrentDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxRearrangeList* LunaTraits< wxRearrangeList >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRearrangeList::_bind_ctor(L);
}

void LunaTraits< wxRearrangeList >::_bind_dtor(wxRearrangeList* obj) {
	delete obj;
}

const char LunaTraits< wxRearrangeList >::className[] = "wxRearrangeList";
const char LunaTraits< wxRearrangeList >::fullName[] = "wxRearrangeList";
const char LunaTraits< wxRearrangeList >::moduleName[] = "wx";
const char* LunaTraits< wxRearrangeList >::parents[] = {"wx.wxCheckListBox", 0};
const int LunaTraits< wxRearrangeList >::hash = 9863658;
const int LunaTraits< wxRearrangeList >::uniqueIDs[] = {56813631, 53506535, 69784830,0};

luna_RegType LunaTraits< wxRearrangeList >::methods[] = {
	{"Create", &luna_wrapper_wxRearrangeList::_bind_Create},
	{"GetCurrentOrder", &luna_wrapper_wxRearrangeList::_bind_GetCurrentOrder},
	{"CanMoveCurrentUp", &luna_wrapper_wxRearrangeList::_bind_CanMoveCurrentUp},
	{"CanMoveCurrentDown", &luna_wrapper_wxRearrangeList::_bind_CanMoveCurrentDown},
	{"MoveCurrentUp", &luna_wrapper_wxRearrangeList::_bind_MoveCurrentUp},
	{"MoveCurrentDown", &luna_wrapper_wxRearrangeList::_bind_MoveCurrentDown},
	{"__eq", &luna_wrapper_wxRearrangeList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRearrangeList >::converters[] = {
	{"wxObject", &luna_wrapper_wxRearrangeList::_cast_from_wxObject},
	{"wxItemContainerImmutable", &luna_wrapper_wxRearrangeList::_cast_from_wxItemContainerImmutable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRearrangeList >::enumValues[] = {
	{0,0}
};


