#include <plug_common.h>

class luna_wrapper_wxColour {
public:
	typedef Luna< wxColour > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxColour* ptr= dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxColour >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetAsString(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRGB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRGBA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRGB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRGBA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPixel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Set_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ChangeLightness(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Constructor binds:
	// wxColour::wxColour()
	static wxColour* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour::wxColour() function, expected prototype:\nwxColour::wxColour()\nClass arguments details:\n");
		}


		return new wxColour();
	}

	// wxColour::wxColour(const wxString & colourName)
	static wxColour* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour::wxColour(const wxString & colourName) function, expected prototype:\nwxColour::wxColour(const wxString & colourName)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString colourName(lua_tostring(L,1),lua_objlen(L,1));

		return new wxColour(colourName);
	}

	// wxColour::wxColour(unsigned long colRGB)
	static wxColour* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour::wxColour(unsigned long colRGB) function, expected prototype:\nwxColour::wxColour(unsigned long colRGB)\nClass arguments details:\n");
		}

		unsigned long colRGB=(unsigned long)lua_tointeger(L,1);

		return new wxColour(colRGB);
	}

	// wxColour::wxColour(const wxColour & colour)
	static wxColour* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour::wxColour(const wxColour & colour) function, expected prototype:\nwxColour::wxColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* colour_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxColour::wxColour function");
		}
		const wxColour & colour=*colour_ptr;

		return new wxColour(colour);
	}

	// Overload binder for wxColour::wxColour
	static wxColour* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxColour, cannot match any of the overloads for function wxColour:\n  wxColour()\n  wxColour(const wxString &)\n  wxColour(unsigned long)\n  wxColour(const wxColour &)\n");
		return NULL;
	}


	// Function binds:
	// wxString wxColour::GetAsString(long flags = wxC2S_NAME | wxC2S_CSS_SYNTAX) const
	static int _bind_GetAsString(lua_State *L) {
		if (!_lg_typecheck_GetAsString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxColour::GetAsString(long flags = wxC2S_NAME | wxC2S_CSS_SYNTAX) const function, expected prototype:\nwxString wxColour::GetAsString(long flags = wxC2S_NAME | wxC2S_CSS_SYNTAX) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tointeger(L,2) : wxC2S_NAME | wxC2S_CSS_SYNTAX;

		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxColour::GetAsString(long) const");
		}
		wxString lret = self->GetAsString(flags);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxColour::SetRGB(unsigned int colRGB)
	static int _bind_SetRGB(lua_State *L) {
		if (!_lg_typecheck_SetRGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxColour::SetRGB(unsigned int colRGB) function, expected prototype:\nvoid wxColour::SetRGB(unsigned int colRGB)\nClass arguments details:\n");
		}

		unsigned int colRGB=(unsigned int)lua_tointeger(L,2);

		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxColour::SetRGB(unsigned int)");
		}
		self->SetRGB(colRGB);

		return 0;
	}

	// void wxColour::SetRGBA(unsigned int colRGBA)
	static int _bind_SetRGBA(lua_State *L) {
		if (!_lg_typecheck_SetRGBA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxColour::SetRGBA(unsigned int colRGBA) function, expected prototype:\nvoid wxColour::SetRGBA(unsigned int colRGBA)\nClass arguments details:\n");
		}

		unsigned int colRGBA=(unsigned int)lua_tointeger(L,2);

		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxColour::SetRGBA(unsigned int)");
		}
		self->SetRGBA(colRGBA);

		return 0;
	}

	// unsigned int wxColour::GetRGB() const
	static int _bind_GetRGB(lua_State *L) {
		if (!_lg_typecheck_GetRGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxColour::GetRGB() const function, expected prototype:\nunsigned int wxColour::GetRGB() const\nClass arguments details:\n");
		}


		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxColour::GetRGB() const");
		}
		unsigned int lret = self->GetRGB();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int wxColour::GetRGBA() const
	static int _bind_GetRGBA(lua_State *L) {
		if (!_lg_typecheck_GetRGBA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxColour::GetRGBA() const function, expected prototype:\nunsigned int wxColour::GetRGBA() const\nClass arguments details:\n");
		}


		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxColour::GetRGBA() const");
		}
		unsigned int lret = self->GetRGBA();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ssize_t wxColour::GetPixel() const
	static int _bind_GetPixel(lua_State *L) {
		if (!_lg_typecheck_GetPixel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in ssize_t wxColour::GetPixel() const function, expected prototype:\nssize_t wxColour::GetPixel() const\nClass arguments details:\n");
		}


		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call ssize_t wxColour::GetPixel() const");
		}
		ssize_t lret = self->GetPixel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxColour::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxColour::IsOk() const function, expected prototype:\nbool wxColour::IsOk() const\nClass arguments details:\n");
		}


		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxColour::IsOk() const");
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxColour::Set(unsigned long RGB)
	static int _bind_Set_overload_1(lua_State *L) {
		if (!_lg_typecheck_Set_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxColour::Set(unsigned long RGB) function, expected prototype:\nvoid wxColour::Set(unsigned long RGB)\nClass arguments details:\n");
		}

		unsigned long RGB=(unsigned long)lua_tointeger(L,2);

		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxColour::Set(unsigned long)");
		}
		self->Set(RGB);

		return 0;
	}

	// bool wxColour::Set(const wxString & str)
	static int _bind_Set_overload_2(lua_State *L) {
		if (!_lg_typecheck_Set_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxColour::Set(const wxString & str) function, expected prototype:\nbool wxColour::Set(const wxString & str)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString str(lua_tostring(L,2),lua_objlen(L,2));

		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxColour::Set(const wxString &)");
		}
		bool lret = self->Set(str);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxColour::Set
	static int _bind_Set(lua_State *L) {
		if (_lg_typecheck_Set_overload_1(L)) return _bind_Set_overload_1(L);
		if (_lg_typecheck_Set_overload_2(L)) return _bind_Set_overload_2(L);

		luaL_error(L, "error in function Set, cannot match any of the overloads for function Set:\n  Set(unsigned long)\n  Set(const wxString &)\n");
		return 0;
	}

	// wxColour wxColour::ChangeLightness(int ialpha) const
	static int _bind_ChangeLightness(lua_State *L) {
		if (!_lg_typecheck_ChangeLightness(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxColour::ChangeLightness(int ialpha) const function, expected prototype:\nwxColour wxColour::ChangeLightness(int ialpha) const\nClass arguments details:\n");
		}

		int ialpha=(int)lua_tointeger(L,2);

		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxColour::ChangeLightness(int) const");
		}
		wxColour stack_lret = self->ChangeLightness(ialpha);
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}


	// Operator binds:
	// bool wxColour::operator!=(const wxColour & colour) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxColour::operator!=(const wxColour & colour) const function, expected prototype:\nbool wxColour::operator!=(const wxColour & colour) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* colour_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxColour::operator!= function");
		}
		const wxColour & colour=*colour_ptr;

		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxColour::operator!=(const wxColour &) const");
		}
		bool lret = self->operator!=(colour);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxColour::operator==(const wxColour & colour) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxColour::operator==(const wxColour & colour) const function, expected prototype:\nbool wxColour::operator==(const wxColour & colour) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* colour_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxColour::operator== function");
		}
		const wxColour & colour=*colour_ptr;

		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxColour::operator==(const wxColour &) const");
		}
		bool lret = self->operator==(colour);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxColour* LunaTraits< wxColour >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxColour::_bind_ctor(L);
}

void LunaTraits< wxColour >::_bind_dtor(wxColour* obj) {
	delete obj;
}

const char LunaTraits< wxColour >::className[] = "wxColour";
const char LunaTraits< wxColour >::fullName[] = "wxColour";
const char LunaTraits< wxColour >::moduleName[] = "wx";
const char* LunaTraits< wxColour >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxColour >::hash = 25339364;
const int LunaTraits< wxColour >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxColour >::methods[] = {
	{"GetAsString", &luna_wrapper_wxColour::_bind_GetAsString},
	{"SetRGB", &luna_wrapper_wxColour::_bind_SetRGB},
	{"SetRGBA", &luna_wrapper_wxColour::_bind_SetRGBA},
	{"GetRGB", &luna_wrapper_wxColour::_bind_GetRGB},
	{"GetRGBA", &luna_wrapper_wxColour::_bind_GetRGBA},
	{"GetPixel", &luna_wrapper_wxColour::_bind_GetPixel},
	{"IsOk", &luna_wrapper_wxColour::_bind_IsOk},
	{"Set", &luna_wrapper_wxColour::_bind_Set},
	{"ChangeLightness", &luna_wrapper_wxColour::_bind_ChangeLightness},
	{"op_neq", &luna_wrapper_wxColour::_bind_op_neq},
	{"__eq", &luna_wrapper_wxColour::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxColour >::converters[] = {
	{"wxObject", &luna_wrapper_wxColour::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxColour >::enumValues[] = {
	{0,0}
};


