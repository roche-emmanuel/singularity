#include <plug_common.h>

class luna_wrapper_wxGridSizer {
public:
	typedef Luna< wxGridSizer > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGridSizer* ptr= dynamic_cast< wxGridSizer* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridSizer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetCols(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRows(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEffectiveColsCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEffectiveRowsCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHGap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVGap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCols(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHGap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRows(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVGap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CalcMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RecalcSizes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxGridSizer::wxGridSizer(int cols, int vgap, int hgap)
	static wxGridSizer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGridSizer::wxGridSizer(int cols, int vgap, int hgap) function, expected prototype:\nwxGridSizer::wxGridSizer(int cols, int vgap, int hgap)\nClass arguments details:\n");
		}

		int cols=(int)lua_tointeger(L,1);
		int vgap=(int)lua_tointeger(L,2);
		int hgap=(int)lua_tointeger(L,3);

		return new wxGridSizer(cols, vgap, hgap);
	}

	// wxGridSizer::wxGridSizer(int cols, const wxSize & gap = wxSize (0, 0))
	static wxGridSizer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGridSizer::wxGridSizer(int cols, const wxSize & gap = wxSize (0, 0)) function, expected prototype:\nwxGridSizer::wxGridSizer(int cols, const wxSize & gap = wxSize (0, 0))\nClass arguments details:\narg 2 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		int cols=(int)lua_tointeger(L,1);
		const wxSize* gap_ptr=luatop>1 ? (Luna< wxSize >::check(L,2)) : NULL;
		if( luatop>1 && !gap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg gap in wxGridSizer::wxGridSizer function");
		}
		const wxSize & gap=luatop>1 ? *gap_ptr : wxSize (0, 0);

		return new wxGridSizer(cols, gap);
	}

	// wxGridSizer::wxGridSizer(int rows, int cols, int vgap, int hgap)
	static wxGridSizer* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGridSizer::wxGridSizer(int rows, int cols, int vgap, int hgap) function, expected prototype:\nwxGridSizer::wxGridSizer(int rows, int cols, int vgap, int hgap)\nClass arguments details:\n");
		}

		int rows=(int)lua_tointeger(L,1);
		int cols=(int)lua_tointeger(L,2);
		int vgap=(int)lua_tointeger(L,3);
		int hgap=(int)lua_tointeger(L,4);

		return new wxGridSizer(rows, cols, vgap, hgap);
	}

	// wxGridSizer::wxGridSizer(int rows, int cols, const wxSize & gap)
	static wxGridSizer* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGridSizer::wxGridSizer(int rows, int cols, const wxSize & gap) function, expected prototype:\nwxGridSizer::wxGridSizer(int rows, int cols, const wxSize & gap)\nClass arguments details:\narg 3 ID = 20268751\n");
		}

		int rows=(int)lua_tointeger(L,1);
		int cols=(int)lua_tointeger(L,2);
		const wxSize* gap_ptr=(Luna< wxSize >::check(L,3));
		if( !gap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg gap in wxGridSizer::wxGridSizer function");
		}
		const wxSize & gap=*gap_ptr;

		return new wxGridSizer(rows, cols, gap);
	}

	// Overload binder for wxGridSizer::wxGridSizer
	static wxGridSizer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxGridSizer, cannot match any of the overloads for function wxGridSizer:\n  wxGridSizer(int, int, int)\n  wxGridSizer(int, const wxSize &)\n  wxGridSizer(int, int, int, int)\n  wxGridSizer(int, int, const wxSize &)\n");
		return NULL;
	}


	// Function binds:
	// int wxGridSizer::GetCols() const
	static int _bind_GetCols(lua_State *L) {
		if (!_lg_typecheck_GetCols(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGridSizer::GetCols() const function, expected prototype:\nint wxGridSizer::GetCols() const\nClass arguments details:\n");
		}


		wxGridSizer* self=dynamic_cast< wxGridSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGridSizer::GetCols() const");
		}
		int lret = self->GetCols();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGridSizer::GetRows() const
	static int _bind_GetRows(lua_State *L) {
		if (!_lg_typecheck_GetRows(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGridSizer::GetRows() const function, expected prototype:\nint wxGridSizer::GetRows() const\nClass arguments details:\n");
		}


		wxGridSizer* self=dynamic_cast< wxGridSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGridSizer::GetRows() const");
		}
		int lret = self->GetRows();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGridSizer::GetEffectiveColsCount() const
	static int _bind_GetEffectiveColsCount(lua_State *L) {
		if (!_lg_typecheck_GetEffectiveColsCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGridSizer::GetEffectiveColsCount() const function, expected prototype:\nint wxGridSizer::GetEffectiveColsCount() const\nClass arguments details:\n");
		}


		wxGridSizer* self=dynamic_cast< wxGridSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGridSizer::GetEffectiveColsCount() const");
		}
		int lret = self->GetEffectiveColsCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGridSizer::GetEffectiveRowsCount() const
	static int _bind_GetEffectiveRowsCount(lua_State *L) {
		if (!_lg_typecheck_GetEffectiveRowsCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGridSizer::GetEffectiveRowsCount() const function, expected prototype:\nint wxGridSizer::GetEffectiveRowsCount() const\nClass arguments details:\n");
		}


		wxGridSizer* self=dynamic_cast< wxGridSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGridSizer::GetEffectiveRowsCount() const");
		}
		int lret = self->GetEffectiveRowsCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGridSizer::GetHGap() const
	static int _bind_GetHGap(lua_State *L) {
		if (!_lg_typecheck_GetHGap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGridSizer::GetHGap() const function, expected prototype:\nint wxGridSizer::GetHGap() const\nClass arguments details:\n");
		}


		wxGridSizer* self=dynamic_cast< wxGridSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGridSizer::GetHGap() const");
		}
		int lret = self->GetHGap();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGridSizer::GetVGap() const
	static int _bind_GetVGap(lua_State *L) {
		if (!_lg_typecheck_GetVGap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGridSizer::GetVGap() const function, expected prototype:\nint wxGridSizer::GetVGap() const\nClass arguments details:\n");
		}


		wxGridSizer* self=dynamic_cast< wxGridSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGridSizer::GetVGap() const");
		}
		int lret = self->GetVGap();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxGridSizer::SetCols(int cols)
	static int _bind_SetCols(lua_State *L) {
		if (!_lg_typecheck_SetCols(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridSizer::SetCols(int cols) function, expected prototype:\nvoid wxGridSizer::SetCols(int cols)\nClass arguments details:\n");
		}

		int cols=(int)lua_tointeger(L,2);

		wxGridSizer* self=dynamic_cast< wxGridSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridSizer::SetCols(int)");
		}
		self->SetCols(cols);

		return 0;
	}

	// void wxGridSizer::SetHGap(int gap)
	static int _bind_SetHGap(lua_State *L) {
		if (!_lg_typecheck_SetHGap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridSizer::SetHGap(int gap) function, expected prototype:\nvoid wxGridSizer::SetHGap(int gap)\nClass arguments details:\n");
		}

		int gap=(int)lua_tointeger(L,2);

		wxGridSizer* self=dynamic_cast< wxGridSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridSizer::SetHGap(int)");
		}
		self->SetHGap(gap);

		return 0;
	}

	// void wxGridSizer::SetRows(int rows)
	static int _bind_SetRows(lua_State *L) {
		if (!_lg_typecheck_SetRows(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridSizer::SetRows(int rows) function, expected prototype:\nvoid wxGridSizer::SetRows(int rows)\nClass arguments details:\n");
		}

		int rows=(int)lua_tointeger(L,2);

		wxGridSizer* self=dynamic_cast< wxGridSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridSizer::SetRows(int)");
		}
		self->SetRows(rows);

		return 0;
	}

	// void wxGridSizer::SetVGap(int gap)
	static int _bind_SetVGap(lua_State *L) {
		if (!_lg_typecheck_SetVGap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridSizer::SetVGap(int gap) function, expected prototype:\nvoid wxGridSizer::SetVGap(int gap)\nClass arguments details:\n");
		}

		int gap=(int)lua_tointeger(L,2);

		wxGridSizer* self=dynamic_cast< wxGridSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridSizer::SetVGap(int)");
		}
		self->SetVGap(gap);

		return 0;
	}

	// wxSize wxGridSizer::CalcMin()
	static int _bind_CalcMin(lua_State *L) {
		if (!_lg_typecheck_CalcMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxGridSizer::CalcMin() function, expected prototype:\nwxSize wxGridSizer::CalcMin()\nClass arguments details:\n");
		}


		wxGridSizer* self=dynamic_cast< wxGridSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxGridSizer::CalcMin()");
		}
		wxSize stack_lret = self->CalcMin();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxGridSizer::RecalcSizes()
	static int _bind_RecalcSizes(lua_State *L) {
		if (!_lg_typecheck_RecalcSizes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridSizer::RecalcSizes() function, expected prototype:\nvoid wxGridSizer::RecalcSizes()\nClass arguments details:\n");
		}


		wxGridSizer* self=dynamic_cast< wxGridSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridSizer::RecalcSizes()");
		}
		self->RecalcSizes();

		return 0;
	}


	// Operator binds:

};

wxGridSizer* LunaTraits< wxGridSizer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGridSizer::_bind_ctor(L);
}

void LunaTraits< wxGridSizer >::_bind_dtor(wxGridSizer* obj) {
	delete obj;
}

const char LunaTraits< wxGridSizer >::className[] = "wxGridSizer";
const char LunaTraits< wxGridSizer >::fullName[] = "wxGridSizer";
const char LunaTraits< wxGridSizer >::moduleName[] = "wx";
const char* LunaTraits< wxGridSizer >::parents[] = {"wx.wxSizer", 0};
const int LunaTraits< wxGridSizer >::hash = 77653436;
const int LunaTraits< wxGridSizer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGridSizer >::methods[] = {
	{"GetCols", &luna_wrapper_wxGridSizer::_bind_GetCols},
	{"GetRows", &luna_wrapper_wxGridSizer::_bind_GetRows},
	{"GetEffectiveColsCount", &luna_wrapper_wxGridSizer::_bind_GetEffectiveColsCount},
	{"GetEffectiveRowsCount", &luna_wrapper_wxGridSizer::_bind_GetEffectiveRowsCount},
	{"GetHGap", &luna_wrapper_wxGridSizer::_bind_GetHGap},
	{"GetVGap", &luna_wrapper_wxGridSizer::_bind_GetVGap},
	{"SetCols", &luna_wrapper_wxGridSizer::_bind_SetCols},
	{"SetHGap", &luna_wrapper_wxGridSizer::_bind_SetHGap},
	{"SetRows", &luna_wrapper_wxGridSizer::_bind_SetRows},
	{"SetVGap", &luna_wrapper_wxGridSizer::_bind_SetVGap},
	{"CalcMin", &luna_wrapper_wxGridSizer::_bind_CalcMin},
	{"RecalcSizes", &luna_wrapper_wxGridSizer::_bind_RecalcSizes},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridSizer >::converters[] = {
	{"wxObject", &luna_wrapper_wxGridSizer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridSizer >::enumValues[] = {
	{0,0}
};


