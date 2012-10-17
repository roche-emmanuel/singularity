#include <plug_common.h>

class luna_wrapper_wxPGMultiButton {
public:
	typedef Luna< wxPGMultiButton > luna_t;

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
		wxPGMultiButton* ptr= dynamic_cast< wxPGMultiButton* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPGMultiButton >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Add_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Add_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Finalize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetButton(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetButtonId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPrimarySize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxPGMultiButton::wxPGMultiButton(wxPropertyGrid * pg, const wxSize & sz)
	static wxPGMultiButton* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPGMultiButton::wxPGMultiButton(wxPropertyGrid * pg, const wxSize & sz) function, expected prototype:\nwxPGMultiButton::wxPGMultiButton(wxPropertyGrid * pg, const wxSize & sz)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 20268751\n");
		}

		wxPropertyGrid* pg=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		const wxSize* sz_ptr=(Luna< wxSize >::check(L,2));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxPGMultiButton::wxPGMultiButton function");
		}
		const wxSize & sz=*sz_ptr;

		return new wxPGMultiButton(pg, sz);
	}


	// Function binds:
	// void wxPGMultiButton::Add(const wxString & label, int id = -2)
	static int _bind_Add_overload_1(lua_State *L) {
		if (!_lg_typecheck_Add_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPGMultiButton::Add(const wxString & label, int id = -2) function, expected prototype:\nvoid wxPGMultiButton::Add(const wxString & label, int id = -2)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : -2;

		wxPGMultiButton* self=dynamic_cast< wxPGMultiButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPGMultiButton::Add(const wxString &, int)");
		}
		self->Add(label, id);

		return 0;
	}

	// void wxPGMultiButton::Add(const wxBitmap & bitmap, int id = -2)
	static int _bind_Add_overload_2(lua_State *L) {
		if (!_lg_typecheck_Add_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPGMultiButton::Add(const wxBitmap & bitmap, int id = -2) function, expected prototype:\nvoid wxPGMultiButton::Add(const wxBitmap & bitmap, int id = -2)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxPGMultiButton::Add function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		int id=luatop>2 ? (int)lua_tointeger(L,3) : -2;

		wxPGMultiButton* self=dynamic_cast< wxPGMultiButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPGMultiButton::Add(const wxBitmap &, int)");
		}
		self->Add(bitmap, id);

		return 0;
	}

	// Overload binder for wxPGMultiButton::Add
	static int _bind_Add(lua_State *L) {
		if (_lg_typecheck_Add_overload_1(L)) return _bind_Add_overload_1(L);
		if (_lg_typecheck_Add_overload_2(L)) return _bind_Add_overload_2(L);

		luaL_error(L, "error in function Add, cannot match any of the overloads for function Add:\n  Add(const wxString &, int)\n  Add(const wxBitmap &, int)\n");
		return 0;
	}

	// void wxPGMultiButton::Finalize(wxPropertyGrid * propGrid, const wxPoint & pos)
	static int _bind_Finalize(lua_State *L) {
		if (!_lg_typecheck_Finalize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPGMultiButton::Finalize(wxPropertyGrid * propGrid, const wxPoint & pos) function, expected prototype:\nvoid wxPGMultiButton::Finalize(wxPropertyGrid * propGrid, const wxPoint & pos)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 25723480\n");
		}

		wxPropertyGrid* propGrid=dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,2));
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxPGMultiButton::Finalize function");
		}
		const wxPoint & pos=*pos_ptr;

		wxPGMultiButton* self=dynamic_cast< wxPGMultiButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPGMultiButton::Finalize(wxPropertyGrid *, const wxPoint &)");
		}
		self->Finalize(propGrid, pos);

		return 0;
	}

	// wxWindow * wxPGMultiButton::GetButton(unsigned int i)
	static int _bind_GetButton(lua_State *L) {
		if (!_lg_typecheck_GetButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxPGMultiButton::GetButton(unsigned int i) function, expected prototype:\nwxWindow * wxPGMultiButton::GetButton(unsigned int i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		wxPGMultiButton* self=dynamic_cast< wxPGMultiButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxPGMultiButton::GetButton(unsigned int)");
		}
		wxWindow * lret = self->GetButton(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// int wxPGMultiButton::GetButtonId(unsigned int i) const
	static int _bind_GetButtonId(lua_State *L) {
		if (!_lg_typecheck_GetButtonId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxPGMultiButton::GetButtonId(unsigned int i) const function, expected prototype:\nint wxPGMultiButton::GetButtonId(unsigned int i) const\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		wxPGMultiButton* self=dynamic_cast< wxPGMultiButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxPGMultiButton::GetButtonId(unsigned int) const");
		}
		int lret = self->GetButtonId(i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int wxPGMultiButton::GetCount()
	static int _bind_GetCount(lua_State *L) {
		if (!_lg_typecheck_GetCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxPGMultiButton::GetCount() function, expected prototype:\nunsigned int wxPGMultiButton::GetCount()\nClass arguments details:\n");
		}


		wxPGMultiButton* self=dynamic_cast< wxPGMultiButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxPGMultiButton::GetCount()");
		}
		unsigned int lret = self->GetCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSize wxPGMultiButton::GetPrimarySize() const
	static int _bind_GetPrimarySize(lua_State *L) {
		if (!_lg_typecheck_GetPrimarySize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxPGMultiButton::GetPrimarySize() const function, expected prototype:\nwxSize wxPGMultiButton::GetPrimarySize() const\nClass arguments details:\n");
		}


		wxPGMultiButton* self=dynamic_cast< wxPGMultiButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxPGMultiButton::GetPrimarySize() const");
		}
		wxSize stack_lret = self->GetPrimarySize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

wxPGMultiButton* LunaTraits< wxPGMultiButton >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPGMultiButton::_bind_ctor(L);
}

void LunaTraits< wxPGMultiButton >::_bind_dtor(wxPGMultiButton* obj) {
	delete obj;
}

const char LunaTraits< wxPGMultiButton >::className[] = "wxPGMultiButton";
const char LunaTraits< wxPGMultiButton >::fullName[] = "wxPGMultiButton";
const char LunaTraits< wxPGMultiButton >::moduleName[] = "wx";
const char* LunaTraits< wxPGMultiButton >::parents[] = {"wx.wxWindow", 0};
const int LunaTraits< wxPGMultiButton >::hash = 739900;
const int LunaTraits< wxPGMultiButton >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxPGMultiButton >::methods[] = {
	{"Add", &luna_wrapper_wxPGMultiButton::_bind_Add},
	{"Finalize", &luna_wrapper_wxPGMultiButton::_bind_Finalize},
	{"GetButton", &luna_wrapper_wxPGMultiButton::_bind_GetButton},
	{"GetButtonId", &luna_wrapper_wxPGMultiButton::_bind_GetButtonId},
	{"GetCount", &luna_wrapper_wxPGMultiButton::_bind_GetCount},
	{"GetPrimarySize", &luna_wrapper_wxPGMultiButton::_bind_GetPrimarySize},
	{"__eq", &luna_wrapper_wxPGMultiButton::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxPGMultiButton >::converters[] = {
	{"wxObject", &luna_wrapper_wxPGMultiButton::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPGMultiButton >::enumValues[] = {
	{0,0}
};


