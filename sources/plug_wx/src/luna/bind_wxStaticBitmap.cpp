#include <plug_common.h>

class luna_wrapper_wxStaticBitmap {
public:
	typedef Luna< wxStaticBitmap > luna_t;

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
		wxStaticBitmap* ptr= dynamic_cast< wxStaticBitmap* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxStaticBitmap >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTrackable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxStaticBitmap* ptr= static_cast< wxStaticBitmap* >(Luna< wxTrackable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxStaticBitmap >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>8 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBitmap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetIcon(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetIcon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxStaticBitmap::wxStaticBitmap()
	static wxStaticBitmap* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStaticBitmap::wxStaticBitmap() function, expected prototype:\nwxStaticBitmap::wxStaticBitmap()\nClass arguments details:\n");
		}


		return new wxStaticBitmap();
	}

	// wxStaticBitmap::wxStaticBitmap(wxWindow * parent, int id, const wxBitmap & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxStaticBitmapNameStr)
	static wxStaticBitmap* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStaticBitmap::wxStaticBitmap(wxWindow * parent, int id, const wxBitmap & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxStaticBitmapNameStr) function, expected prototype:\nwxStaticBitmap::wxStaticBitmap(wxWindow * parent, int id, const wxBitmap & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxStaticBitmapNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxBitmap* label_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3));
		if( !label_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg label in wxStaticBitmap::wxStaticBitmap function");
		}
		const wxBitmap & label=*label_ptr;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxStaticBitmap::wxStaticBitmap function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxStaticBitmap::wxStaticBitmap function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wxStaticBitmap(parent, id, label, pos, size, style, name);
	}

	// Overload binder for wxStaticBitmap::wxStaticBitmap
	static wxStaticBitmap* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxStaticBitmap, cannot match any of the overloads for function wxStaticBitmap:\n  wxStaticBitmap()\n  wxStaticBitmap(wxWindow *, int, const wxBitmap &, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxStaticBitmap::Create(wxWindow * parent, int id, const wxBitmap & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxStaticBitmapNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStaticBitmap::Create(wxWindow * parent, int id, const wxBitmap & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxStaticBitmapNameStr) function, expected prototype:\nbool wxStaticBitmap::Create(wxWindow * parent, int id, const wxBitmap & label, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxStaticBitmapNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxBitmap* label_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4));
		if( !label_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg label in wxStaticBitmap::Create function");
		}
		const wxBitmap & label=*label_ptr;
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxStaticBitmap::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxStaticBitmap::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : 0;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		wxStaticBitmap* self=dynamic_cast< wxStaticBitmap* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStaticBitmap::Create(wxWindow *, int, const wxBitmap &, const wxPoint &, const wxSize &, long, const wxString &)");
		}
		bool lret = self->Create(parent, id, label, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxBitmap wxStaticBitmap::GetBitmap() const
	static int _bind_GetBitmap(lua_State *L) {
		if (!_lg_typecheck_GetBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap wxStaticBitmap::GetBitmap() const function, expected prototype:\nwxBitmap wxStaticBitmap::GetBitmap() const\nClass arguments details:\n");
		}


		wxStaticBitmap* self=dynamic_cast< wxStaticBitmap* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBitmap wxStaticBitmap::GetBitmap() const");
		}
		wxBitmap stack_lret = self->GetBitmap();
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// wxIcon wxStaticBitmap::GetIcon() const
	static int _bind_GetIcon(lua_State *L) {
		if (!_lg_typecheck_GetIcon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIcon wxStaticBitmap::GetIcon() const function, expected prototype:\nwxIcon wxStaticBitmap::GetIcon() const\nClass arguments details:\n");
		}


		wxStaticBitmap* self=dynamic_cast< wxStaticBitmap* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxIcon wxStaticBitmap::GetIcon() const");
		}
		wxIcon stack_lret = self->GetIcon();
		wxIcon* lret = new wxIcon(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIcon >::push(L,lret,true);

		return 1;
	}

	// void wxStaticBitmap::SetBitmap(const wxBitmap & label)
	static int _bind_SetBitmap(lua_State *L) {
		if (!_lg_typecheck_SetBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStaticBitmap::SetBitmap(const wxBitmap & label) function, expected prototype:\nvoid wxStaticBitmap::SetBitmap(const wxBitmap & label)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* label_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !label_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg label in wxStaticBitmap::SetBitmap function");
		}
		const wxBitmap & label=*label_ptr;

		wxStaticBitmap* self=dynamic_cast< wxStaticBitmap* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStaticBitmap::SetBitmap(const wxBitmap &)");
		}
		self->SetBitmap(label);

		return 0;
	}

	// void wxStaticBitmap::SetIcon(const wxIcon & label)
	static int _bind_SetIcon(lua_State *L) {
		if (!_lg_typecheck_SetIcon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStaticBitmap::SetIcon(const wxIcon & label) function, expected prototype:\nvoid wxStaticBitmap::SetIcon(const wxIcon & label)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxIcon* label_ptr=dynamic_cast< wxIcon* >(Luna< wxObject >::check(L,2));
		if( !label_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg label in wxStaticBitmap::SetIcon function");
		}
		const wxIcon & label=*label_ptr;

		wxStaticBitmap* self=dynamic_cast< wxStaticBitmap* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStaticBitmap::SetIcon(const wxIcon &)");
		}
		self->SetIcon(label);

		return 0;
	}


	// Operator binds:

};

wxStaticBitmap* LunaTraits< wxStaticBitmap >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxStaticBitmap::_bind_ctor(L);
}

void LunaTraits< wxStaticBitmap >::_bind_dtor(wxStaticBitmap* obj) {
	delete obj;
}

const char LunaTraits< wxStaticBitmap >::className[] = "wxStaticBitmap";
const char LunaTraits< wxStaticBitmap >::fullName[] = "wxStaticBitmap";
const char LunaTraits< wxStaticBitmap >::moduleName[] = "wx";
const char* LunaTraits< wxStaticBitmap >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxStaticBitmap >::hash = 27830285;
const int LunaTraits< wxStaticBitmap >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxStaticBitmap >::methods[] = {
	{"Create", &luna_wrapper_wxStaticBitmap::_bind_Create},
	{"GetBitmap", &luna_wrapper_wxStaticBitmap::_bind_GetBitmap},
	{"GetIcon", &luna_wrapper_wxStaticBitmap::_bind_GetIcon},
	{"SetBitmap", &luna_wrapper_wxStaticBitmap::_bind_SetBitmap},
	{"SetIcon", &luna_wrapper_wxStaticBitmap::_bind_SetIcon},
	{"__eq", &luna_wrapper_wxStaticBitmap::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxStaticBitmap >::converters[] = {
	{"wxObject", &luna_wrapper_wxStaticBitmap::_cast_from_wxObject},
	{"wxTrackable", &luna_wrapper_wxStaticBitmap::_cast_from_wxTrackable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxStaticBitmap >::enumValues[] = {
	{0,0}
};


