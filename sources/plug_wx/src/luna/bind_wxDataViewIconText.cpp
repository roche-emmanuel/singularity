#include <plug_common.h>

class luna_wrapper_wxDataViewIconText {
public:
	typedef Luna< wxDataViewIconText > luna_t;

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
		wxDataViewIconText* ptr= dynamic_cast< wxDataViewIconText* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewIconText >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetIcon(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetIcon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDataViewIconText::wxDataViewIconText(const wxString & text = wxEmptyString, const wxIcon & icon = wxNullIcon)
	static wxDataViewIconText* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewIconText::wxDataViewIconText(const wxString & text = wxEmptyString, const wxIcon & icon = wxNullIcon) function, expected prototype:\nwxDataViewIconText::wxDataViewIconText(const wxString & text = wxEmptyString, const wxIcon & icon = wxNullIcon)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxString text(lua_tostring(L,1),lua_objlen(L,1));
		const wxIcon* icon_ptr=luatop>1 ? dynamic_cast< wxIcon* >(Luna< wxObject >::check(L,2)) : NULL;
		if( luatop>1 && !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxDataViewIconText::wxDataViewIconText function");
		}
		const wxIcon & icon=luatop>1 ? *icon_ptr : wxNullIcon;

		return new wxDataViewIconText(text, icon);
	}

	// wxDataViewIconText::wxDataViewIconText(const wxDataViewIconText & other)
	static wxDataViewIconText* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewIconText::wxDataViewIconText(const wxDataViewIconText & other) function, expected prototype:\nwxDataViewIconText::wxDataViewIconText(const wxDataViewIconText & other)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxDataViewIconText* other_ptr=dynamic_cast< wxDataViewIconText* >(Luna< wxObject >::check(L,1));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in wxDataViewIconText::wxDataViewIconText function");
		}
		const wxDataViewIconText & other=*other_ptr;

		return new wxDataViewIconText(other);
	}

	// Overload binder for wxDataViewIconText::wxDataViewIconText
	static wxDataViewIconText* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxDataViewIconText, cannot match any of the overloads for function wxDataViewIconText:\n  wxDataViewIconText(const wxString &, const wxIcon &)\n  wxDataViewIconText(const wxDataViewIconText &)\n");
		return NULL;
	}


	// Function binds:
	// const wxIcon & wxDataViewIconText::GetIcon() const
	static int _bind_GetIcon(lua_State *L) {
		if (!_lg_typecheck_GetIcon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxIcon & wxDataViewIconText::GetIcon() const function, expected prototype:\nconst wxIcon & wxDataViewIconText::GetIcon() const\nClass arguments details:\n");
		}


		wxDataViewIconText* self=dynamic_cast< wxDataViewIconText* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxIcon & wxDataViewIconText::GetIcon() const");
		}
		const wxIcon* lret = &self->GetIcon();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIcon >::push(L,lret,false);

		return 1;
	}

	// wxString wxDataViewIconText::GetText() const
	static int _bind_GetText(lua_State *L) {
		if (!_lg_typecheck_GetText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDataViewIconText::GetText() const function, expected prototype:\nwxString wxDataViewIconText::GetText() const\nClass arguments details:\n");
		}


		wxDataViewIconText* self=dynamic_cast< wxDataViewIconText* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDataViewIconText::GetText() const");
		}
		wxString lret = self->GetText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxDataViewIconText::SetIcon(const wxIcon & icon)
	static int _bind_SetIcon(lua_State *L) {
		if (!_lg_typecheck_SetIcon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewIconText::SetIcon(const wxIcon & icon) function, expected prototype:\nvoid wxDataViewIconText::SetIcon(const wxIcon & icon)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxIcon* icon_ptr=dynamic_cast< wxIcon* >(Luna< wxObject >::check(L,2));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxDataViewIconText::SetIcon function");
		}
		const wxIcon & icon=*icon_ptr;

		wxDataViewIconText* self=dynamic_cast< wxDataViewIconText* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewIconText::SetIcon(const wxIcon &)");
		}
		self->SetIcon(icon);

		return 0;
	}

	// void wxDataViewIconText::SetText(const wxString & text)
	static int _bind_SetText(lua_State *L) {
		if (!_lg_typecheck_SetText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewIconText::SetText(const wxString & text) function, expected prototype:\nvoid wxDataViewIconText::SetText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxDataViewIconText* self=dynamic_cast< wxDataViewIconText* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewIconText::SetText(const wxString &)");
		}
		self->SetText(text);

		return 0;
	}


	// Operator binds:

};

wxDataViewIconText* LunaTraits< wxDataViewIconText >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDataViewIconText::_bind_ctor(L);
}

void LunaTraits< wxDataViewIconText >::_bind_dtor(wxDataViewIconText* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewIconText >::className[] = "wxDataViewIconText";
const char LunaTraits< wxDataViewIconText >::fullName[] = "wxDataViewIconText";
const char LunaTraits< wxDataViewIconText >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewIconText >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxDataViewIconText >::hash = 11844362;
const int LunaTraits< wxDataViewIconText >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDataViewIconText >::methods[] = {
	{"GetIcon", &luna_wrapper_wxDataViewIconText::_bind_GetIcon},
	{"GetText", &luna_wrapper_wxDataViewIconText::_bind_GetText},
	{"SetIcon", &luna_wrapper_wxDataViewIconText::_bind_SetIcon},
	{"SetText", &luna_wrapper_wxDataViewIconText::_bind_SetText},
	{"__eq", &luna_wrapper_wxDataViewIconText::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewIconText >::converters[] = {
	{"wxObject", &luna_wrapper_wxDataViewIconText::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewIconText >::enumValues[] = {
	{0,0}
};


