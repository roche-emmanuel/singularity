#include <plug_common.h>

class luna_wrapper_wxOwnerDrawnComboBox {
public:
	typedef Luna< wxOwnerDrawnComboBox > luna_t;

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
		wxOwnerDrawnComboBox* ptr= dynamic_cast< wxOwnerDrawnComboBox* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxOwnerDrawnComboBox >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTextEntry(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxOwnerDrawnComboBox* ptr= dynamic_cast< wxOwnerDrawnComboBox* >(Luna< wxTextEntry >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxOwnerDrawnComboBox >::push(L,ptr,false);
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
		if( lua_isstring(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,59507769) ) return false;
		if( (!dynamic_cast< wxArrayString* >(Luna< wxArrayString >::check(L,6))) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>7 && (!dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8))) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>9 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>4 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,5))) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>5 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,6))) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>7 && (!dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8))) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>10 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,59507769) ) return false;
		if( (!dynamic_cast< wxArrayString* >(Luna< wxArrayString >::check(L,7))) ) return false;
		if( luatop>7 && (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && !Luna<void>::has_uniqueid(L,9,56813631) ) return false;
		if( luatop>8 && (!dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,9))) ) return false;
		if( luatop>9 && lua_isstring(L,10)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetWidestItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWidestItemWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxOwnerDrawnComboBox::wxOwnerDrawnComboBox()
	static wxOwnerDrawnComboBox* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxOwnerDrawnComboBox::wxOwnerDrawnComboBox() function, expected prototype:\nwxOwnerDrawnComboBox::wxOwnerDrawnComboBox()\nClass arguments details:\n");
		}


		return new wxOwnerDrawnComboBox();
	}

	// wxOwnerDrawnComboBox::wxOwnerDrawnComboBox(wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = "comboBox")
	static wxOwnerDrawnComboBox* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxOwnerDrawnComboBox::wxOwnerDrawnComboBox(wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = \"comboBox\") function, expected prototype:\nwxOwnerDrawnComboBox::wxOwnerDrawnComboBox(wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = \"comboBox\")\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 6 ID = 59507769\narg 8 ID = 56813631\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		wxString value(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,4));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxOwnerDrawnComboBox::wxOwnerDrawnComboBox function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,5));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxOwnerDrawnComboBox::wxOwnerDrawnComboBox function");
		}
		const wxSize & size=*size_ptr;
		const wxArrayString* choices_ptr=(Luna< wxArrayString >::check(L,6));
		if( !choices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg choices in wxOwnerDrawnComboBox::wxOwnerDrawnComboBox function");
		}
		const wxArrayString & choices=*choices_ptr;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : 0;
		const wxValidator* validator_ptr=luatop>7 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxOwnerDrawnComboBox::wxOwnerDrawnComboBox function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		return new wxOwnerDrawnComboBox(parent, id, value, pos, size, choices, style, validator, name);
	}

	// Overload binder for wxOwnerDrawnComboBox::wxOwnerDrawnComboBox
	static wxOwnerDrawnComboBox* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxOwnerDrawnComboBox, cannot match any of the overloads for function wxOwnerDrawnComboBox:\n  wxOwnerDrawnComboBox()\n  wxOwnerDrawnComboBox(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, const wxArrayString &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxOwnerDrawnComboBox::Create(wxWindow * parent, int id, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr)
	static int _bind_Create_overload_1(lua_State *L) {
		if (!_lg_typecheck_Create_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxOwnerDrawnComboBox::Create(wxWindow * parent, int id, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr) function, expected prototype:\nbool wxOwnerDrawnComboBox::Create(wxWindow * parent, int id, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString value(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxOwnerDrawnComboBox::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxOwnerDrawnComboBox::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : 0;
		const wxValidator* validator_ptr=luatop>7 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxOwnerDrawnComboBox::Create function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		wxOwnerDrawnComboBox* self=dynamic_cast< wxOwnerDrawnComboBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxOwnerDrawnComboBox::Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, value, pos, size, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxOwnerDrawnComboBox::Create(wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr)
	static int _bind_Create_overload_2(lua_State *L) {
		if (!_lg_typecheck_Create_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxOwnerDrawnComboBox::Create(wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr) function, expected prototype:\nbool wxOwnerDrawnComboBox::Create(wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 6 ID = 59507769\narg 8 ID = 56813631\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString value(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,5));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxOwnerDrawnComboBox::Create function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,6));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxOwnerDrawnComboBox::Create function");
		}
		const wxSize & size=*size_ptr;
		const wxArrayString* choices_ptr=(Luna< wxArrayString >::check(L,7));
		if( !choices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg choices in wxOwnerDrawnComboBox::Create function");
		}
		const wxArrayString & choices=*choices_ptr;
		long style=luatop>7 ? (long)lua_tointeger(L,8) : 0;
		const wxValidator* validator_ptr=luatop>8 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,9)) : NULL;
		if( luatop>8 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxOwnerDrawnComboBox::Create function");
		}
		const wxValidator & validator=luatop>8 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,10),lua_objlen(L,10));

		wxOwnerDrawnComboBox* self=dynamic_cast< wxOwnerDrawnComboBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxOwnerDrawnComboBox::Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, const wxArrayString &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, value, pos, size, choices, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxOwnerDrawnComboBox::Create
	static int _bind_Create(lua_State *L) {
		if (_lg_typecheck_Create_overload_1(L)) return _bind_Create_overload_1(L);
		if (_lg_typecheck_Create_overload_2(L)) return _bind_Create_overload_2(L);

		luaL_error(L, "error in function Create, cannot match any of the overloads for function Create:\n  Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n  Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, const wxArrayString &, long, const wxValidator &, const wxString &)\n");
		return 0;
	}

	// int wxOwnerDrawnComboBox::GetWidestItem()
	static int _bind_GetWidestItem(lua_State *L) {
		if (!_lg_typecheck_GetWidestItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxOwnerDrawnComboBox::GetWidestItem() function, expected prototype:\nint wxOwnerDrawnComboBox::GetWidestItem()\nClass arguments details:\n");
		}


		wxOwnerDrawnComboBox* self=dynamic_cast< wxOwnerDrawnComboBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxOwnerDrawnComboBox::GetWidestItem()");
		}
		int lret = self->GetWidestItem();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxOwnerDrawnComboBox::GetWidestItemWidth()
	static int _bind_GetWidestItemWidth(lua_State *L) {
		if (!_lg_typecheck_GetWidestItemWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxOwnerDrawnComboBox::GetWidestItemWidth() function, expected prototype:\nint wxOwnerDrawnComboBox::GetWidestItemWidth()\nClass arguments details:\n");
		}


		wxOwnerDrawnComboBox* self=dynamic_cast< wxOwnerDrawnComboBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxOwnerDrawnComboBox::GetWidestItemWidth()");
		}
		int lret = self->GetWidestItemWidth();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxOwnerDrawnComboBox* LunaTraits< wxOwnerDrawnComboBox >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxOwnerDrawnComboBox::_bind_ctor(L);
}

void LunaTraits< wxOwnerDrawnComboBox >::_bind_dtor(wxOwnerDrawnComboBox* obj) {
	delete obj;
}

const char LunaTraits< wxOwnerDrawnComboBox >::className[] = "wxOwnerDrawnComboBox";
const char LunaTraits< wxOwnerDrawnComboBox >::fullName[] = "wxOwnerDrawnComboBox";
const char LunaTraits< wxOwnerDrawnComboBox >::moduleName[] = "wx";
const char* LunaTraits< wxOwnerDrawnComboBox >::parents[] = {"wx.wxComboCtrl", 0};
const int LunaTraits< wxOwnerDrawnComboBox >::hash = 29100924;
const int LunaTraits< wxOwnerDrawnComboBox >::uniqueIDs[] = {56813631, 53506535, 54144136,0};

luna_RegType LunaTraits< wxOwnerDrawnComboBox >::methods[] = {
	{"Create", &luna_wrapper_wxOwnerDrawnComboBox::_bind_Create},
	{"GetWidestItem", &luna_wrapper_wxOwnerDrawnComboBox::_bind_GetWidestItem},
	{"GetWidestItemWidth", &luna_wrapper_wxOwnerDrawnComboBox::_bind_GetWidestItemWidth},
	{"__eq", &luna_wrapper_wxOwnerDrawnComboBox::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxOwnerDrawnComboBox >::converters[] = {
	{"wxObject", &luna_wrapper_wxOwnerDrawnComboBox::_cast_from_wxObject},
	{"wxTextEntry", &luna_wrapper_wxOwnerDrawnComboBox::_cast_from_wxTextEntry},
	{0,0}
};

luna_RegEnumType LunaTraits< wxOwnerDrawnComboBox >::enumValues[] = {
	{0,0}
};


