#include <plug_common.h>

class luna_wrapper_wxHtmlContainerCell {
public:
	typedef Luna< wxHtmlContainerCell > luna_t;

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
		wxHtmlContainerCell* ptr= dynamic_cast< wxHtmlContainerCell* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlContainerCell >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetAlignHor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAlignVer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetIndent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetIndentUnits(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertCell(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAlign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,66986009) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAlignHor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAlignVer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBorder(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetIndent(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMinHeight(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWidthFloat_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWidthFloat_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,66986009) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHtmlContainerCell::wxHtmlContainerCell(wxHtmlContainerCell * parent)
	static wxHtmlContainerCell* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlContainerCell::wxHtmlContainerCell(wxHtmlContainerCell * parent) function, expected prototype:\nwxHtmlContainerCell::wxHtmlContainerCell(wxHtmlContainerCell * parent)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxHtmlContainerCell* parent=dynamic_cast< wxHtmlContainerCell* >(Luna< wxObject >::check(L,1));

		return new wxHtmlContainerCell(parent);
	}


	// Function binds:
	// int wxHtmlContainerCell::GetAlignHor() const
	static int _bind_GetAlignHor(lua_State *L) {
		if (!_lg_typecheck_GetAlignHor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHtmlContainerCell::GetAlignHor() const function, expected prototype:\nint wxHtmlContainerCell::GetAlignHor() const\nClass arguments details:\n");
		}


		wxHtmlContainerCell* self=dynamic_cast< wxHtmlContainerCell* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHtmlContainerCell::GetAlignHor() const");
		}
		int lret = self->GetAlignHor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHtmlContainerCell::GetAlignVer() const
	static int _bind_GetAlignVer(lua_State *L) {
		if (!_lg_typecheck_GetAlignVer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHtmlContainerCell::GetAlignVer() const function, expected prototype:\nint wxHtmlContainerCell::GetAlignVer() const\nClass arguments details:\n");
		}


		wxHtmlContainerCell* self=dynamic_cast< wxHtmlContainerCell* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHtmlContainerCell::GetAlignVer() const");
		}
		int lret = self->GetAlignVer();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxColour wxHtmlContainerCell::GetBackgroundColour()
	static int _bind_GetBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_GetBackgroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxHtmlContainerCell::GetBackgroundColour() function, expected prototype:\nwxColour wxHtmlContainerCell::GetBackgroundColour()\nClass arguments details:\n");
		}


		wxHtmlContainerCell* self=dynamic_cast< wxHtmlContainerCell* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxHtmlContainerCell::GetBackgroundColour()");
		}
		wxColour stack_lret = self->GetBackgroundColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// int wxHtmlContainerCell::GetIndent(int ind) const
	static int _bind_GetIndent(lua_State *L) {
		if (!_lg_typecheck_GetIndent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHtmlContainerCell::GetIndent(int ind) const function, expected prototype:\nint wxHtmlContainerCell::GetIndent(int ind) const\nClass arguments details:\n");
		}

		int ind=(int)lua_tointeger(L,2);

		wxHtmlContainerCell* self=dynamic_cast< wxHtmlContainerCell* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHtmlContainerCell::GetIndent(int) const");
		}
		int lret = self->GetIndent(ind);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHtmlContainerCell::GetIndentUnits(int ind) const
	static int _bind_GetIndentUnits(lua_State *L) {
		if (!_lg_typecheck_GetIndentUnits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHtmlContainerCell::GetIndentUnits(int ind) const function, expected prototype:\nint wxHtmlContainerCell::GetIndentUnits(int ind) const\nClass arguments details:\n");
		}

		int ind=(int)lua_tointeger(L,2);

		wxHtmlContainerCell* self=dynamic_cast< wxHtmlContainerCell* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHtmlContainerCell::GetIndentUnits(int) const");
		}
		int lret = self->GetIndentUnits(ind);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxHtmlContainerCell::InsertCell(wxHtmlCell * cell)
	static int _bind_InsertCell(lua_State *L) {
		if (!_lg_typecheck_InsertCell(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlContainerCell::InsertCell(wxHtmlCell * cell) function, expected prototype:\nvoid wxHtmlContainerCell::InsertCell(wxHtmlCell * cell)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxHtmlCell* cell=dynamic_cast< wxHtmlCell* >(Luna< wxObject >::check(L,2));

		wxHtmlContainerCell* self=dynamic_cast< wxHtmlContainerCell* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlContainerCell::InsertCell(wxHtmlCell *)");
		}
		self->InsertCell(cell);

		return 0;
	}

	// void wxHtmlContainerCell::SetAlign(const wxHtmlTag & tag)
	static int _bind_SetAlign(lua_State *L) {
		if (!_lg_typecheck_SetAlign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlContainerCell::SetAlign(const wxHtmlTag & tag) function, expected prototype:\nvoid wxHtmlContainerCell::SetAlign(const wxHtmlTag & tag)\nClass arguments details:\narg 1 ID = 66986009\n");
		}

		const wxHtmlTag* tag_ptr=(Luna< wxHtmlTag >::check(L,2));
		if( !tag_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tag in wxHtmlContainerCell::SetAlign function");
		}
		const wxHtmlTag & tag=*tag_ptr;

		wxHtmlContainerCell* self=dynamic_cast< wxHtmlContainerCell* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlContainerCell::SetAlign(const wxHtmlTag &)");
		}
		self->SetAlign(tag);

		return 0;
	}

	// void wxHtmlContainerCell::SetAlignHor(int al)
	static int _bind_SetAlignHor(lua_State *L) {
		if (!_lg_typecheck_SetAlignHor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlContainerCell::SetAlignHor(int al) function, expected prototype:\nvoid wxHtmlContainerCell::SetAlignHor(int al)\nClass arguments details:\n");
		}

		int al=(int)lua_tointeger(L,2);

		wxHtmlContainerCell* self=dynamic_cast< wxHtmlContainerCell* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlContainerCell::SetAlignHor(int)");
		}
		self->SetAlignHor(al);

		return 0;
	}

	// void wxHtmlContainerCell::SetAlignVer(int al)
	static int _bind_SetAlignVer(lua_State *L) {
		if (!_lg_typecheck_SetAlignVer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlContainerCell::SetAlignVer(int al) function, expected prototype:\nvoid wxHtmlContainerCell::SetAlignVer(int al)\nClass arguments details:\n");
		}

		int al=(int)lua_tointeger(L,2);

		wxHtmlContainerCell* self=dynamic_cast< wxHtmlContainerCell* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlContainerCell::SetAlignVer(int)");
		}
		self->SetAlignVer(al);

		return 0;
	}

	// void wxHtmlContainerCell::SetBackgroundColour(const wxColour & clr)
	static int _bind_SetBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetBackgroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlContainerCell::SetBackgroundColour(const wxColour & clr) function, expected prototype:\nvoid wxHtmlContainerCell::SetBackgroundColour(const wxColour & clr)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* clr_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !clr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clr in wxHtmlContainerCell::SetBackgroundColour function");
		}
		const wxColour & clr=*clr_ptr;

		wxHtmlContainerCell* self=dynamic_cast< wxHtmlContainerCell* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlContainerCell::SetBackgroundColour(const wxColour &)");
		}
		self->SetBackgroundColour(clr);

		return 0;
	}

	// void wxHtmlContainerCell::SetBorder(const wxColour & clr1, const wxColour & clr2, int border = 1)
	static int _bind_SetBorder(lua_State *L) {
		if (!_lg_typecheck_SetBorder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlContainerCell::SetBorder(const wxColour & clr1, const wxColour & clr2, int border = 1) function, expected prototype:\nvoid wxHtmlContainerCell::SetBorder(const wxColour & clr1, const wxColour & clr2, int border = 1)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxColour* clr1_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !clr1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clr1 in wxHtmlContainerCell::SetBorder function");
		}
		const wxColour & clr1=*clr1_ptr;
		const wxColour* clr2_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,3));
		if( !clr2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clr2 in wxHtmlContainerCell::SetBorder function");
		}
		const wxColour & clr2=*clr2_ptr;
		int border=luatop>3 ? (int)lua_tointeger(L,4) : 1;

		wxHtmlContainerCell* self=dynamic_cast< wxHtmlContainerCell* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlContainerCell::SetBorder(const wxColour &, const wxColour &, int)");
		}
		self->SetBorder(clr1, clr2, border);

		return 0;
	}

	// void wxHtmlContainerCell::SetIndent(int i, int what, int units = wxHTML_UNITS_PIXELS)
	static int _bind_SetIndent(lua_State *L) {
		if (!_lg_typecheck_SetIndent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlContainerCell::SetIndent(int i, int what, int units = wxHTML_UNITS_PIXELS) function, expected prototype:\nvoid wxHtmlContainerCell::SetIndent(int i, int what, int units = wxHTML_UNITS_PIXELS)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int i=(int)lua_tointeger(L,2);
		int what=(int)lua_tointeger(L,3);
		int units=luatop>3 ? (int)lua_tointeger(L,4) : wxHTML_UNITS_PIXELS;

		wxHtmlContainerCell* self=dynamic_cast< wxHtmlContainerCell* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlContainerCell::SetIndent(int, int, int)");
		}
		self->SetIndent(i, what, units);

		return 0;
	}

	// void wxHtmlContainerCell::SetMinHeight(int h, int align = wxHTML_ALIGN_TOP)
	static int _bind_SetMinHeight(lua_State *L) {
		if (!_lg_typecheck_SetMinHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlContainerCell::SetMinHeight(int h, int align = wxHTML_ALIGN_TOP) function, expected prototype:\nvoid wxHtmlContainerCell::SetMinHeight(int h, int align = wxHTML_ALIGN_TOP)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int h=(int)lua_tointeger(L,2);
		int align=luatop>2 ? (int)lua_tointeger(L,3) : wxHTML_ALIGN_TOP;

		wxHtmlContainerCell* self=dynamic_cast< wxHtmlContainerCell* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlContainerCell::SetMinHeight(int, int)");
		}
		self->SetMinHeight(h, align);

		return 0;
	}

	// void wxHtmlContainerCell::SetWidthFloat(int w, int units)
	static int _bind_SetWidthFloat_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetWidthFloat_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlContainerCell::SetWidthFloat(int w, int units) function, expected prototype:\nvoid wxHtmlContainerCell::SetWidthFloat(int w, int units)\nClass arguments details:\n");
		}

		int w=(int)lua_tointeger(L,2);
		int units=(int)lua_tointeger(L,3);

		wxHtmlContainerCell* self=dynamic_cast< wxHtmlContainerCell* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlContainerCell::SetWidthFloat(int, int)");
		}
		self->SetWidthFloat(w, units);

		return 0;
	}

	// void wxHtmlContainerCell::SetWidthFloat(const wxHtmlTag & tag, double pixel_scale = 1.0)
	static int _bind_SetWidthFloat_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetWidthFloat_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlContainerCell::SetWidthFloat(const wxHtmlTag & tag, double pixel_scale = 1.0) function, expected prototype:\nvoid wxHtmlContainerCell::SetWidthFloat(const wxHtmlTag & tag, double pixel_scale = 1.0)\nClass arguments details:\narg 1 ID = 66986009\n");
		}

		int luatop = lua_gettop(L);

		const wxHtmlTag* tag_ptr=(Luna< wxHtmlTag >::check(L,2));
		if( !tag_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tag in wxHtmlContainerCell::SetWidthFloat function");
		}
		const wxHtmlTag & tag=*tag_ptr;
		double pixel_scale=luatop>2 ? (double)lua_tonumber(L,3) : 1.0;

		wxHtmlContainerCell* self=dynamic_cast< wxHtmlContainerCell* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlContainerCell::SetWidthFloat(const wxHtmlTag &, double)");
		}
		self->SetWidthFloat(tag, pixel_scale);

		return 0;
	}

	// Overload binder for wxHtmlContainerCell::SetWidthFloat
	static int _bind_SetWidthFloat(lua_State *L) {
		if (_lg_typecheck_SetWidthFloat_overload_1(L)) return _bind_SetWidthFloat_overload_1(L);
		if (_lg_typecheck_SetWidthFloat_overload_2(L)) return _bind_SetWidthFloat_overload_2(L);

		luaL_error(L, "error in function SetWidthFloat, cannot match any of the overloads for function SetWidthFloat:\n  SetWidthFloat(int, int)\n  SetWidthFloat(const wxHtmlTag &, double)\n");
		return 0;
	}


	// Operator binds:

};

wxHtmlContainerCell* LunaTraits< wxHtmlContainerCell >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHtmlContainerCell::_bind_ctor(L);
}

void LunaTraits< wxHtmlContainerCell >::_bind_dtor(wxHtmlContainerCell* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlContainerCell >::className[] = "wxHtmlContainerCell";
const char LunaTraits< wxHtmlContainerCell >::fullName[] = "wxHtmlContainerCell";
const char LunaTraits< wxHtmlContainerCell >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlContainerCell >::parents[] = {"wx.wxHtmlCell", 0};
const int LunaTraits< wxHtmlContainerCell >::hash = 48055347;
const int LunaTraits< wxHtmlContainerCell >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHtmlContainerCell >::methods[] = {
	{"GetAlignHor", &luna_wrapper_wxHtmlContainerCell::_bind_GetAlignHor},
	{"GetAlignVer", &luna_wrapper_wxHtmlContainerCell::_bind_GetAlignVer},
	{"GetBackgroundColour", &luna_wrapper_wxHtmlContainerCell::_bind_GetBackgroundColour},
	{"GetIndent", &luna_wrapper_wxHtmlContainerCell::_bind_GetIndent},
	{"GetIndentUnits", &luna_wrapper_wxHtmlContainerCell::_bind_GetIndentUnits},
	{"InsertCell", &luna_wrapper_wxHtmlContainerCell::_bind_InsertCell},
	{"SetAlign", &luna_wrapper_wxHtmlContainerCell::_bind_SetAlign},
	{"SetAlignHor", &luna_wrapper_wxHtmlContainerCell::_bind_SetAlignHor},
	{"SetAlignVer", &luna_wrapper_wxHtmlContainerCell::_bind_SetAlignVer},
	{"SetBackgroundColour", &luna_wrapper_wxHtmlContainerCell::_bind_SetBackgroundColour},
	{"SetBorder", &luna_wrapper_wxHtmlContainerCell::_bind_SetBorder},
	{"SetIndent", &luna_wrapper_wxHtmlContainerCell::_bind_SetIndent},
	{"SetMinHeight", &luna_wrapper_wxHtmlContainerCell::_bind_SetMinHeight},
	{"SetWidthFloat", &luna_wrapper_wxHtmlContainerCell::_bind_SetWidthFloat},
	{"__eq", &luna_wrapper_wxHtmlContainerCell::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlContainerCell >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlContainerCell::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlContainerCell >::enumValues[] = {
	{0,0}
};


