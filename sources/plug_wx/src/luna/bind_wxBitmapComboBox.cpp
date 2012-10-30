#include <plug_common.h>

class luna_wrapper_wxBitmapComboBox {
public:
	typedef Luna< wxBitmapComboBox > luna_t;

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
		wxBitmapComboBox* ptr= dynamic_cast< wxBitmapComboBox* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxBitmapComboBox >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTrackable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxBitmapComboBox* ptr= static_cast< wxBitmapComboBox* >(Luna< wxTrackable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxBitmapComboBox >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxItemContainerImmutable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxBitmapComboBox* ptr= dynamic_cast< wxBitmapComboBox* >(Luna< wxItemContainerImmutable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxBitmapComboBox >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTextEntry(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxBitmapComboBox* ptr= dynamic_cast< wxBitmapComboBox* >(Luna< wxTextEntry >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxBitmapComboBox >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>9 ) return false;

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
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>7 && (!dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8))) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Append_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>2 && (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Append_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3))) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Append_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3))) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50457573)) ) return false;
		if( (lua_isnil(L,4)==0 && !dynamic_cast< wxClientData* >(Luna< wxClientData >::check(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>10 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,59507769) ) return false;
		if( luatop>7 && (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && !Luna<void>::has_uniqueid(L,9,56813631) ) return false;
		if( luatop>9 && lua_isstring(L,10)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBitmapSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItemBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemBitmap(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxBitmapComboBox::wxBitmapComboBox()
	static wxBitmapComboBox* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmapComboBox::wxBitmapComboBox() function, expected prototype:\nwxBitmapComboBox::wxBitmapComboBox()\nClass arguments details:\n");
		}


		return new wxBitmapComboBox();
	}

	// wxBitmapComboBox::wxBitmapComboBox(wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxBitmapComboBoxNameStr)
	static wxBitmapComboBox* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmapComboBox::wxBitmapComboBox(wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxBitmapComboBoxNameStr) function, expected prototype:\nwxBitmapComboBox::wxBitmapComboBox(wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxBitmapComboBoxNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 6 ID = 59507769\narg 8 ID = 56813631\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		wxString value(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,4));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxBitmapComboBox::wxBitmapComboBox function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,5));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxBitmapComboBox::wxBitmapComboBox function");
		}
		const wxSize & size=*size_ptr;
		const wxArrayString* choices_ptr=(Luna< wxArrayString >::check(L,6));
		if( !choices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg choices in wxBitmapComboBox::wxBitmapComboBox function");
		}
		const wxArrayString & choices=*choices_ptr;
		long style=(long)lua_tointeger(L,7);
		const wxValidator* validator_ptr=luatop>7 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxBitmapComboBox::wxBitmapComboBox function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		return new wxBitmapComboBox(parent, id, value, pos, size, choices, style, validator, name);
	}

	// Overload binder for wxBitmapComboBox::wxBitmapComboBox
	static wxBitmapComboBox* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxBitmapComboBox, cannot match any of the overloads for function wxBitmapComboBox:\n  wxBitmapComboBox()\n  wxBitmapComboBox(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, const wxArrayString &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// int wxBitmapComboBox::Append(const wxString & item, const wxBitmap & bitmap = wxNullBitmap)
	static int _bind_Append_overload_1(lua_State *L) {
		if (!_lg_typecheck_Append_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxBitmapComboBox::Append(const wxString & item, const wxBitmap & bitmap = wxNullBitmap) function, expected prototype:\nint wxBitmapComboBox::Append(const wxString & item, const wxBitmap & bitmap = wxNullBitmap)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxString item(lua_tostring(L,2),lua_objlen(L,2));
		const wxBitmap* bitmap_ptr=luatop>2 ? dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3)) : NULL;
		if( luatop>2 && !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxBitmapComboBox::Append function");
		}
		const wxBitmap & bitmap=luatop>2 ? *bitmap_ptr : wxNullBitmap;

		wxBitmapComboBox* self=dynamic_cast< wxBitmapComboBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxBitmapComboBox::Append(const wxString &, const wxBitmap &)");
		}
		int lret = self->Append(item, bitmap);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxBitmapComboBox::Append(const wxString & item, const wxBitmap & bitmap, void * clientData)
	static int _bind_Append_overload_2(lua_State *L) {
		if (!_lg_typecheck_Append_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxBitmapComboBox::Append(const wxString & item, const wxBitmap & bitmap, void * clientData) function, expected prototype:\nint wxBitmapComboBox::Append(const wxString & item, const wxBitmap & bitmap, void * clientData)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\n");
		}

		wxString item(lua_tostring(L,2),lua_objlen(L,2));
		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxBitmapComboBox::Append function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		void* clientData=(Luna< void >::check(L,4));

		wxBitmapComboBox* self=dynamic_cast< wxBitmapComboBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxBitmapComboBox::Append(const wxString &, const wxBitmap &, void *)");
		}
		int lret = self->Append(item, bitmap, clientData);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxBitmapComboBox::Append(const wxString & item, const wxBitmap & bitmap, wxClientData * clientData)
	static int _bind_Append_overload_3(lua_State *L) {
		if (!_lg_typecheck_Append_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxBitmapComboBox::Append(const wxString & item, const wxBitmap & bitmap, wxClientData * clientData) function, expected prototype:\nint wxBitmapComboBox::Append(const wxString & item, const wxBitmap & bitmap, wxClientData * clientData)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\narg 3 ID = 50457573\n");
		}

		wxString item(lua_tostring(L,2),lua_objlen(L,2));
		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxBitmapComboBox::Append function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		wxClientData* clientData=(Luna< wxClientData >::check(L,4));

		wxBitmapComboBox* self=dynamic_cast< wxBitmapComboBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxBitmapComboBox::Append(const wxString &, const wxBitmap &, wxClientData *)");
		}
		int lret = self->Append(item, bitmap, clientData);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxBitmapComboBox::Append
	static int _bind_Append(lua_State *L) {
		if (_lg_typecheck_Append_overload_1(L)) return _bind_Append_overload_1(L);
		if (_lg_typecheck_Append_overload_2(L)) return _bind_Append_overload_2(L);
		if (_lg_typecheck_Append_overload_3(L)) return _bind_Append_overload_3(L);

		luaL_error(L, "error in function Append, cannot match any of the overloads for function Append:\n  Append(const wxString &, const wxBitmap &)\n  Append(const wxString &, const wxBitmap &, void *)\n  Append(const wxString &, const wxBitmap &, wxClientData *)\n");
		return 0;
	}

	// bool wxBitmapComboBox::Create(wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxBitmapComboBoxNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::Create(wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxBitmapComboBoxNameStr) function, expected prototype:\nbool wxBitmapComboBox::Create(wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxBitmapComboBoxNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 6 ID = 59507769\narg 8 ID = 56813631\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString value(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,5));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxBitmapComboBox::Create function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,6));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxBitmapComboBox::Create function");
		}
		const wxSize & size=*size_ptr;
		const wxArrayString* choices_ptr=(Luna< wxArrayString >::check(L,7));
		if( !choices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg choices in wxBitmapComboBox::Create function");
		}
		const wxArrayString & choices=*choices_ptr;
		long style=luatop>7 ? (long)lua_tointeger(L,8) : 0;
		const wxValidator* validator_ptr=luatop>8 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,9)) : NULL;
		if( luatop>8 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxBitmapComboBox::Create function");
		}
		const wxValidator & validator=luatop>8 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,10),lua_objlen(L,10));

		wxBitmapComboBox* self=dynamic_cast< wxBitmapComboBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, const wxArrayString &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, value, pos, size, choices, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxSize wxBitmapComboBox::GetBitmapSize() const
	static int _bind_GetBitmapSize(lua_State *L) {
		if (!_lg_typecheck_GetBitmapSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxBitmapComboBox::GetBitmapSize() const function, expected prototype:\nwxSize wxBitmapComboBox::GetBitmapSize() const\nClass arguments details:\n");
		}


		wxBitmapComboBox* self=dynamic_cast< wxBitmapComboBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxBitmapComboBox::GetBitmapSize() const");
		}
		wxSize stack_lret = self->GetBitmapSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxBitmap wxBitmapComboBox::GetItemBitmap(unsigned int n) const
	static int _bind_GetItemBitmap(lua_State *L) {
		if (!_lg_typecheck_GetItemBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap wxBitmapComboBox::GetItemBitmap(unsigned int n) const function, expected prototype:\nwxBitmap wxBitmapComboBox::GetItemBitmap(unsigned int n) const\nClass arguments details:\n");
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);

		wxBitmapComboBox* self=dynamic_cast< wxBitmapComboBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBitmap wxBitmapComboBox::GetItemBitmap(unsigned int) const");
		}
		wxBitmap stack_lret = self->GetItemBitmap(n);
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// void wxBitmapComboBox::SetItemBitmap(unsigned int n, const wxBitmap & bitmap)
	static int _bind_SetItemBitmap(lua_State *L) {
		if (!_lg_typecheck_SetItemBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::SetItemBitmap(unsigned int n, const wxBitmap & bitmap) function, expected prototype:\nvoid wxBitmapComboBox::SetItemBitmap(unsigned int n, const wxBitmap & bitmap)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);
		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxBitmapComboBox::SetItemBitmap function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxBitmapComboBox* self=dynamic_cast< wxBitmapComboBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::SetItemBitmap(unsigned int, const wxBitmap &)");
		}
		self->SetItemBitmap(n, bitmap);

		return 0;
	}


	// Operator binds:

};

wxBitmapComboBox* LunaTraits< wxBitmapComboBox >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxBitmapComboBox::_bind_ctor(L);
}

void LunaTraits< wxBitmapComboBox >::_bind_dtor(wxBitmapComboBox* obj) {
	delete obj;
}

const char LunaTraits< wxBitmapComboBox >::className[] = "wxBitmapComboBox";
const char LunaTraits< wxBitmapComboBox >::fullName[] = "wxBitmapComboBox";
const char LunaTraits< wxBitmapComboBox >::moduleName[] = "wx";
const char* LunaTraits< wxBitmapComboBox >::parents[] = {"wx.wxComboBox", 0};
const int LunaTraits< wxBitmapComboBox >::hash = 96967094;
const int LunaTraits< wxBitmapComboBox >::uniqueIDs[] = {56813631, 53506535, 69784830, 54144136,0};

luna_RegType LunaTraits< wxBitmapComboBox >::methods[] = {
	{"Append", &luna_wrapper_wxBitmapComboBox::_bind_Append},
	{"Create", &luna_wrapper_wxBitmapComboBox::_bind_Create},
	{"GetBitmapSize", &luna_wrapper_wxBitmapComboBox::_bind_GetBitmapSize},
	{"GetItemBitmap", &luna_wrapper_wxBitmapComboBox::_bind_GetItemBitmap},
	{"SetItemBitmap", &luna_wrapper_wxBitmapComboBox::_bind_SetItemBitmap},
	{"__eq", &luna_wrapper_wxBitmapComboBox::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxBitmapComboBox >::converters[] = {
	{"wxObject", &luna_wrapper_wxBitmapComboBox::_cast_from_wxObject},
	{"wxTrackable", &luna_wrapper_wxBitmapComboBox::_cast_from_wxTrackable},
	{"wxItemContainerImmutable", &luna_wrapper_wxBitmapComboBox::_cast_from_wxItemContainerImmutable},
	{"wxTextEntry", &luna_wrapper_wxBitmapComboBox::_cast_from_wxTextEntry},
	{0,0}
};

luna_RegEnumType LunaTraits< wxBitmapComboBox >::enumValues[] = {
	{0,0}
};


