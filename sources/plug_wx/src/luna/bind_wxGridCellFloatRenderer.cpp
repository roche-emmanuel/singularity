#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGridCellFloatRenderer.h>

class luna_wrapper_wxGridCellFloatRenderer {
public:
	typedef Luna< wxGridCellFloatRenderer > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxGridCellRenderer* self=(Luna< wxGridCellRenderer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxGridCellRenderer,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,96062845) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxGridCellRenderer*)");
		}

		wxGridCellRenderer* rhs =(Luna< wxGridCellRenderer >::check(L,2));
		wxGridCellRenderer* self=(Luna< wxGridCellRenderer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxGridCellRenderer(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxGridCellFloatRenderer* ptr= dynamic_cast< wxGridCellFloatRenderer* >(Luna< wxGridCellRenderer >::check(L,1));
		wxGridCellFloatRenderer* ptr= luna_caster< wxGridCellRenderer, wxGridCellFloatRenderer >::cast(Luna< wxGridCellRenderer >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridCellFloatRenderer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPrecision(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetParameters(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPrecision(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetParameters(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxGridCellFloatRenderer::wxGridCellFloatRenderer(lua_Table * data, int width = -1, int precision = -1, int format = ::wxGRID_FLOAT_FORMAT_DEFAULT)
	static wxGridCellFloatRenderer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGridCellFloatRenderer::wxGridCellFloatRenderer(lua_Table * data, int width = -1, int precision = -1, int format = ::wxGRID_FLOAT_FORMAT_DEFAULT) function, expected prototype:\nwxGridCellFloatRenderer::wxGridCellFloatRenderer(lua_Table * data, int width = -1, int precision = -1, int format = ::wxGRID_FLOAT_FORMAT_DEFAULT)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int width=luatop>1 ? (int)lua_tointeger(L,2) : -1;
		int precision=luatop>2 ? (int)lua_tointeger(L,3) : -1;
		int format=luatop>3 ? (int)lua_tointeger(L,4) : ::wxGRID_FLOAT_FORMAT_DEFAULT;

		return new wrapper_wxGridCellFloatRenderer(L,NULL, width, precision, format);
	}


	// Function binds:
	// int wxGridCellFloatRenderer::GetFormat() const
	static int _bind_GetFormat(lua_State *L) {
		if (!_lg_typecheck_GetFormat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGridCellFloatRenderer::GetFormat() const function, expected prototype:\nint wxGridCellFloatRenderer::GetFormat() const\nClass arguments details:\n");
		}


		wxGridCellFloatRenderer* self=Luna< wxGridCellRenderer >::checkSubType< wxGridCellFloatRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGridCellFloatRenderer::GetFormat() const. Got : '%s'",typeid(Luna< wxGridCellRenderer >::check(L,1)).name());
		}
		int lret = self->GetFormat();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGridCellFloatRenderer::GetPrecision() const
	static int _bind_GetPrecision(lua_State *L) {
		if (!_lg_typecheck_GetPrecision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGridCellFloatRenderer::GetPrecision() const function, expected prototype:\nint wxGridCellFloatRenderer::GetPrecision() const\nClass arguments details:\n");
		}


		wxGridCellFloatRenderer* self=Luna< wxGridCellRenderer >::checkSubType< wxGridCellFloatRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGridCellFloatRenderer::GetPrecision() const. Got : '%s'",typeid(Luna< wxGridCellRenderer >::check(L,1)).name());
		}
		int lret = self->GetPrecision();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGridCellFloatRenderer::GetWidth() const
	static int _bind_GetWidth(lua_State *L) {
		if (!_lg_typecheck_GetWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGridCellFloatRenderer::GetWidth() const function, expected prototype:\nint wxGridCellFloatRenderer::GetWidth() const\nClass arguments details:\n");
		}


		wxGridCellFloatRenderer* self=Luna< wxGridCellRenderer >::checkSubType< wxGridCellFloatRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGridCellFloatRenderer::GetWidth() const. Got : '%s'",typeid(Luna< wxGridCellRenderer >::check(L,1)).name());
		}
		int lret = self->GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxGridCellFloatRenderer::SetFormat(int format)
	static int _bind_SetFormat(lua_State *L) {
		if (!_lg_typecheck_SetFormat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellFloatRenderer::SetFormat(int format) function, expected prototype:\nvoid wxGridCellFloatRenderer::SetFormat(int format)\nClass arguments details:\n");
		}

		int format=(int)lua_tointeger(L,2);

		wxGridCellFloatRenderer* self=Luna< wxGridCellRenderer >::checkSubType< wxGridCellFloatRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellFloatRenderer::SetFormat(int). Got : '%s'",typeid(Luna< wxGridCellRenderer >::check(L,1)).name());
		}
		self->SetFormat(format);

		return 0;
	}

	// void wxGridCellFloatRenderer::SetParameters(const wxString & params)
	static int _bind_SetParameters(lua_State *L) {
		if (!_lg_typecheck_SetParameters(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellFloatRenderer::SetParameters(const wxString & params) function, expected prototype:\nvoid wxGridCellFloatRenderer::SetParameters(const wxString & params)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString params(lua_tostring(L,2),lua_objlen(L,2));

		wxGridCellFloatRenderer* self=Luna< wxGridCellRenderer >::checkSubType< wxGridCellFloatRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellFloatRenderer::SetParameters(const wxString &). Got : '%s'",typeid(Luna< wxGridCellRenderer >::check(L,1)).name());
		}
		self->SetParameters(params);

		return 0;
	}

	// void wxGridCellFloatRenderer::SetPrecision(int precision)
	static int _bind_SetPrecision(lua_State *L) {
		if (!_lg_typecheck_SetPrecision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellFloatRenderer::SetPrecision(int precision) function, expected prototype:\nvoid wxGridCellFloatRenderer::SetPrecision(int precision)\nClass arguments details:\n");
		}

		int precision=(int)lua_tointeger(L,2);

		wxGridCellFloatRenderer* self=Luna< wxGridCellRenderer >::checkSubType< wxGridCellFloatRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellFloatRenderer::SetPrecision(int). Got : '%s'",typeid(Luna< wxGridCellRenderer >::check(L,1)).name());
		}
		self->SetPrecision(precision);

		return 0;
	}

	// void wxGridCellFloatRenderer::SetWidth(int width)
	static int _bind_SetWidth(lua_State *L) {
		if (!_lg_typecheck_SetWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellFloatRenderer::SetWidth(int width) function, expected prototype:\nvoid wxGridCellFloatRenderer::SetWidth(int width)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);

		wxGridCellFloatRenderer* self=Luna< wxGridCellRenderer >::checkSubType< wxGridCellFloatRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellFloatRenderer::SetWidth(int). Got : '%s'",typeid(Luna< wxGridCellRenderer >::check(L,1)).name());
		}
		self->SetWidth(width);

		return 0;
	}

	// void wxGridCellFloatRenderer::base_SetParameters(const wxString & params)
	static int _bind_base_SetParameters(lua_State *L) {
		if (!_lg_typecheck_base_SetParameters(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellFloatRenderer::base_SetParameters(const wxString & params) function, expected prototype:\nvoid wxGridCellFloatRenderer::base_SetParameters(const wxString & params)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString params(lua_tostring(L,2),lua_objlen(L,2));

		wxGridCellFloatRenderer* self=Luna< wxGridCellRenderer >::checkSubType< wxGridCellFloatRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellFloatRenderer::base_SetParameters(const wxString &). Got : '%s'",typeid(Luna< wxGridCellRenderer >::check(L,1)).name());
		}
		self->wxGridCellFloatRenderer::SetParameters(params);

		return 0;
	}


	// Operator binds:

};

wxGridCellFloatRenderer* LunaTraits< wxGridCellFloatRenderer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGridCellFloatRenderer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxGridCellRenderer * wxGridCellRenderer::Clone() const
	// void wxGridCellRenderer::Draw(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, const wxRect & rect, int row, int col, bool isSelected)
	// wxSize wxGridCellRenderer::GetBestSize(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, int row, int col)
}

void LunaTraits< wxGridCellFloatRenderer >::_bind_dtor(wxGridCellFloatRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxGridCellFloatRenderer >::className[] = "wxGridCellFloatRenderer";
const char LunaTraits< wxGridCellFloatRenderer >::fullName[] = "wxGridCellFloatRenderer";
const char LunaTraits< wxGridCellFloatRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxGridCellFloatRenderer >::parents[] = {"wx.wxGridCellStringRenderer", 0};
const int LunaTraits< wxGridCellFloatRenderer >::hash = 13711756;
const int LunaTraits< wxGridCellFloatRenderer >::uniqueIDs[] = {96062845,0};

luna_RegType LunaTraits< wxGridCellFloatRenderer >::methods[] = {
	{"GetFormat", &luna_wrapper_wxGridCellFloatRenderer::_bind_GetFormat},
	{"GetPrecision", &luna_wrapper_wxGridCellFloatRenderer::_bind_GetPrecision},
	{"GetWidth", &luna_wrapper_wxGridCellFloatRenderer::_bind_GetWidth},
	{"SetFormat", &luna_wrapper_wxGridCellFloatRenderer::_bind_SetFormat},
	{"SetParameters", &luna_wrapper_wxGridCellFloatRenderer::_bind_SetParameters},
	{"SetPrecision", &luna_wrapper_wxGridCellFloatRenderer::_bind_SetPrecision},
	{"SetWidth", &luna_wrapper_wxGridCellFloatRenderer::_bind_SetWidth},
	{"base_SetParameters", &luna_wrapper_wxGridCellFloatRenderer::_bind_base_SetParameters},
	{"__eq", &luna_wrapper_wxGridCellFloatRenderer::_bind___eq},
	{"getTable", &luna_wrapper_wxGridCellFloatRenderer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCellFloatRenderer >::converters[] = {
	{"wxGridCellRenderer", &luna_wrapper_wxGridCellFloatRenderer::_cast_from_wxGridCellRenderer},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCellFloatRenderer >::enumValues[] = {
	{0,0}
};


