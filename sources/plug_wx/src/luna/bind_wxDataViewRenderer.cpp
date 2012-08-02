#include <plug_common.h>

class luna_wrapper_wxDataViewRenderer {
public:
	typedef Luna< wxDataViewRenderer > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDataViewRenderer* ptr= dynamic_cast< wxDataViewRenderer* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewRenderer >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_EnableEllipsize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DisableEllipsize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEllipsizeMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOwner(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVariantType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAlignment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOwner(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void wxDataViewRenderer::EnableEllipsize(wxEllipsizeMode mode = wxELLIPSIZE_MIDDLE)
	static int _bind_EnableEllipsize(lua_State *L) {
		if (!_lg_typecheck_EnableEllipsize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewRenderer::EnableEllipsize(wxEllipsizeMode mode = wxELLIPSIZE_MIDDLE) function, expected prototype:\nvoid wxDataViewRenderer::EnableEllipsize(wxEllipsizeMode mode = wxELLIPSIZE_MIDDLE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxEllipsizeMode mode=luatop>1 ? (wxEllipsizeMode)lua_tointeger(L,2) : wxELLIPSIZE_MIDDLE;

		wxDataViewRenderer* self=dynamic_cast< wxDataViewRenderer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewRenderer::EnableEllipsize(wxEllipsizeMode)");
		}
		self->EnableEllipsize(mode);

		return 0;
	}

	// void wxDataViewRenderer::DisableEllipsize()
	static int _bind_DisableEllipsize(lua_State *L) {
		if (!_lg_typecheck_DisableEllipsize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewRenderer::DisableEllipsize() function, expected prototype:\nvoid wxDataViewRenderer::DisableEllipsize()\nClass arguments details:\n");
		}


		wxDataViewRenderer* self=dynamic_cast< wxDataViewRenderer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewRenderer::DisableEllipsize()");
		}
		self->DisableEllipsize();

		return 0;
	}

	// int wxDataViewRenderer::GetAlignment() const
	static int _bind_GetAlignment(lua_State *L) {
		if (!_lg_typecheck_GetAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewRenderer::GetAlignment() const function, expected prototype:\nint wxDataViewRenderer::GetAlignment() const\nClass arguments details:\n");
		}


		wxDataViewRenderer* self=dynamic_cast< wxDataViewRenderer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewRenderer::GetAlignment() const");
		}
		int lret = self->GetAlignment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEllipsizeMode wxDataViewRenderer::GetEllipsizeMode() const
	static int _bind_GetEllipsizeMode(lua_State *L) {
		if (!_lg_typecheck_GetEllipsizeMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEllipsizeMode wxDataViewRenderer::GetEllipsizeMode() const function, expected prototype:\nwxEllipsizeMode wxDataViewRenderer::GetEllipsizeMode() const\nClass arguments details:\n");
		}


		wxDataViewRenderer* self=dynamic_cast< wxDataViewRenderer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEllipsizeMode wxDataViewRenderer::GetEllipsizeMode() const");
		}
		wxEllipsizeMode lret = self->GetEllipsizeMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewCellMode wxDataViewRenderer::GetMode() const
	static int _bind_GetMode(lua_State *L) {
		if (!_lg_typecheck_GetMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewCellMode wxDataViewRenderer::GetMode() const function, expected prototype:\nwxDataViewCellMode wxDataViewRenderer::GetMode() const\nClass arguments details:\n");
		}


		wxDataViewRenderer* self=dynamic_cast< wxDataViewRenderer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewCellMode wxDataViewRenderer::GetMode() const");
		}
		wxDataViewCellMode lret = self->GetMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewColumn * wxDataViewRenderer::GetOwner() const
	static int _bind_GetOwner(lua_State *L) {
		if (!_lg_typecheck_GetOwner(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewRenderer::GetOwner() const function, expected prototype:\nwxDataViewColumn * wxDataViewRenderer::GetOwner() const\nClass arguments details:\n");
		}


		wxDataViewRenderer* self=dynamic_cast< wxDataViewRenderer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewRenderer::GetOwner() const");
		}
		wxDataViewColumn * lret = self->GetOwner();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// wxString wxDataViewRenderer::GetVariantType() const
	static int _bind_GetVariantType(lua_State *L) {
		if (!_lg_typecheck_GetVariantType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDataViewRenderer::GetVariantType() const function, expected prototype:\nwxString wxDataViewRenderer::GetVariantType() const\nClass arguments details:\n");
		}


		wxDataViewRenderer* self=dynamic_cast< wxDataViewRenderer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDataViewRenderer::GetVariantType() const");
		}
		wxString lret = self->GetVariantType();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxDataViewRenderer::SetAlignment(int align)
	static int _bind_SetAlignment(lua_State *L) {
		if (!_lg_typecheck_SetAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewRenderer::SetAlignment(int align) function, expected prototype:\nvoid wxDataViewRenderer::SetAlignment(int align)\nClass arguments details:\n");
		}

		int align=(int)lua_tointeger(L,2);

		wxDataViewRenderer* self=dynamic_cast< wxDataViewRenderer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewRenderer::SetAlignment(int)");
		}
		self->SetAlignment(align);

		return 0;
	}

	// void wxDataViewRenderer::SetOwner(wxDataViewColumn * owner)
	static int _bind_SetOwner(lua_State *L) {
		if (!_lg_typecheck_SetOwner(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewRenderer::SetOwner(wxDataViewColumn * owner) function, expected prototype:\nvoid wxDataViewRenderer::SetOwner(wxDataViewColumn * owner)\nClass arguments details:\narg 1 ID = 185523\n");
		}

		wxDataViewColumn* owner=dynamic_cast< wxDataViewColumn* >(Luna< wxHeaderColumn >::check(L,2));

		wxDataViewRenderer* self=dynamic_cast< wxDataViewRenderer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewRenderer::SetOwner(wxDataViewColumn *)");
		}
		self->SetOwner(owner);

		return 0;
	}


	// Operator binds:

};

wxDataViewRenderer* LunaTraits< wxDataViewRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxDataViewRenderer::GetValue(wxVariant & value) const
	// bool wxDataViewRenderer::SetValue(const wxVariant & value)

	// Abstract operators:
}

void LunaTraits< wxDataViewRenderer >::_bind_dtor(wxDataViewRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewRenderer >::className[] = "wxDataViewRenderer";
const char LunaTraits< wxDataViewRenderer >::fullName[] = "wxDataViewRenderer";
const char LunaTraits< wxDataViewRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewRenderer >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxDataViewRenderer >::hash = 62992239;
const int LunaTraits< wxDataViewRenderer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDataViewRenderer >::methods[] = {
	{"EnableEllipsize", &luna_wrapper_wxDataViewRenderer::_bind_EnableEllipsize},
	{"DisableEllipsize", &luna_wrapper_wxDataViewRenderer::_bind_DisableEllipsize},
	{"GetAlignment", &luna_wrapper_wxDataViewRenderer::_bind_GetAlignment},
	{"GetEllipsizeMode", &luna_wrapper_wxDataViewRenderer::_bind_GetEllipsizeMode},
	{"GetMode", &luna_wrapper_wxDataViewRenderer::_bind_GetMode},
	{"GetOwner", &luna_wrapper_wxDataViewRenderer::_bind_GetOwner},
	{"GetVariantType", &luna_wrapper_wxDataViewRenderer::_bind_GetVariantType},
	{"SetAlignment", &luna_wrapper_wxDataViewRenderer::_bind_SetAlignment},
	{"SetOwner", &luna_wrapper_wxDataViewRenderer::_bind_SetOwner},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewRenderer >::converters[] = {
	{"wxObject", &luna_wrapper_wxDataViewRenderer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewRenderer >::enumValues[] = {
	{0,0}
};


