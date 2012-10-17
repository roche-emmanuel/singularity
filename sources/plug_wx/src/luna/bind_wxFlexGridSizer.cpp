#include <plug_common.h>

class luna_wrapper_wxFlexGridSizer {
public:
	typedef Luna< wxFlexGridSizer > luna_t;

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
		wxFlexGridSizer* ptr= dynamic_cast< wxFlexGridSizer* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFlexGridSizer >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_AddGrowableCol(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddGrowableRow(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFlexibleDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNonFlexibleGrowMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsColGrowable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsRowGrowable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveGrowableCol(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveGrowableRow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFlexibleDirection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNonFlexibleGrowMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RecalcSizes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CalcMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFlexGridSizer::wxFlexGridSizer(int cols, int vgap, int hgap)
	static wxFlexGridSizer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFlexGridSizer::wxFlexGridSizer(int cols, int vgap, int hgap) function, expected prototype:\nwxFlexGridSizer::wxFlexGridSizer(int cols, int vgap, int hgap)\nClass arguments details:\n");
		}

		int cols=(int)lua_tointeger(L,1);
		int vgap=(int)lua_tointeger(L,2);
		int hgap=(int)lua_tointeger(L,3);

		return new wxFlexGridSizer(cols, vgap, hgap);
	}

	// wxFlexGridSizer::wxFlexGridSizer(int cols, const wxSize & gap = wxSize (0, 0))
	static wxFlexGridSizer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFlexGridSizer::wxFlexGridSizer(int cols, const wxSize & gap = wxSize (0, 0)) function, expected prototype:\nwxFlexGridSizer::wxFlexGridSizer(int cols, const wxSize & gap = wxSize (0, 0))\nClass arguments details:\narg 2 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		int cols=(int)lua_tointeger(L,1);
		const wxSize* gap_ptr=luatop>1 ? (Luna< wxSize >::check(L,2)) : NULL;
		if( luatop>1 && !gap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg gap in wxFlexGridSizer::wxFlexGridSizer function");
		}
		const wxSize & gap=luatop>1 ? *gap_ptr : wxSize (0, 0);

		return new wxFlexGridSizer(cols, gap);
	}

	// wxFlexGridSizer::wxFlexGridSizer(int rows, int cols, int vgap, int hgap)
	static wxFlexGridSizer* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFlexGridSizer::wxFlexGridSizer(int rows, int cols, int vgap, int hgap) function, expected prototype:\nwxFlexGridSizer::wxFlexGridSizer(int rows, int cols, int vgap, int hgap)\nClass arguments details:\n");
		}

		int rows=(int)lua_tointeger(L,1);
		int cols=(int)lua_tointeger(L,2);
		int vgap=(int)lua_tointeger(L,3);
		int hgap=(int)lua_tointeger(L,4);

		return new wxFlexGridSizer(rows, cols, vgap, hgap);
	}

	// wxFlexGridSizer::wxFlexGridSizer(int rows, int cols, const wxSize & gap)
	static wxFlexGridSizer* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFlexGridSizer::wxFlexGridSizer(int rows, int cols, const wxSize & gap) function, expected prototype:\nwxFlexGridSizer::wxFlexGridSizer(int rows, int cols, const wxSize & gap)\nClass arguments details:\narg 3 ID = 20268751\n");
		}

		int rows=(int)lua_tointeger(L,1);
		int cols=(int)lua_tointeger(L,2);
		const wxSize* gap_ptr=(Luna< wxSize >::check(L,3));
		if( !gap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg gap in wxFlexGridSizer::wxFlexGridSizer function");
		}
		const wxSize & gap=*gap_ptr;

		return new wxFlexGridSizer(rows, cols, gap);
	}

	// Overload binder for wxFlexGridSizer::wxFlexGridSizer
	static wxFlexGridSizer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxFlexGridSizer, cannot match any of the overloads for function wxFlexGridSizer:\n  wxFlexGridSizer(int, int, int)\n  wxFlexGridSizer(int, const wxSize &)\n  wxFlexGridSizer(int, int, int, int)\n  wxFlexGridSizer(int, int, const wxSize &)\n");
		return NULL;
	}


	// Function binds:
	// void wxFlexGridSizer::AddGrowableCol(size_t idx, int proportion = 0)
	static int _bind_AddGrowableCol(lua_State *L) {
		if (!_lg_typecheck_AddGrowableCol(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFlexGridSizer::AddGrowableCol(size_t idx, int proportion = 0) function, expected prototype:\nvoid wxFlexGridSizer::AddGrowableCol(size_t idx, int proportion = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		size_t idx=(size_t)lua_tointeger(L,2);
		int proportion=luatop>2 ? (int)lua_tointeger(L,3) : 0;

		wxFlexGridSizer* self=dynamic_cast< wxFlexGridSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFlexGridSizer::AddGrowableCol(size_t, int)");
		}
		self->AddGrowableCol(idx, proportion);

		return 0;
	}

	// void wxFlexGridSizer::AddGrowableRow(size_t idx, int proportion = 0)
	static int _bind_AddGrowableRow(lua_State *L) {
		if (!_lg_typecheck_AddGrowableRow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFlexGridSizer::AddGrowableRow(size_t idx, int proportion = 0) function, expected prototype:\nvoid wxFlexGridSizer::AddGrowableRow(size_t idx, int proportion = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		size_t idx=(size_t)lua_tointeger(L,2);
		int proportion=luatop>2 ? (int)lua_tointeger(L,3) : 0;

		wxFlexGridSizer* self=dynamic_cast< wxFlexGridSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFlexGridSizer::AddGrowableRow(size_t, int)");
		}
		self->AddGrowableRow(idx, proportion);

		return 0;
	}

	// int wxFlexGridSizer::GetFlexibleDirection() const
	static int _bind_GetFlexibleDirection(lua_State *L) {
		if (!_lg_typecheck_GetFlexibleDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxFlexGridSizer::GetFlexibleDirection() const function, expected prototype:\nint wxFlexGridSizer::GetFlexibleDirection() const\nClass arguments details:\n");
		}


		wxFlexGridSizer* self=dynamic_cast< wxFlexGridSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxFlexGridSizer::GetFlexibleDirection() const");
		}
		int lret = self->GetFlexibleDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxFlexSizerGrowMode wxFlexGridSizer::GetNonFlexibleGrowMode() const
	static int _bind_GetNonFlexibleGrowMode(lua_State *L) {
		if (!_lg_typecheck_GetNonFlexibleGrowMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFlexSizerGrowMode wxFlexGridSizer::GetNonFlexibleGrowMode() const function, expected prototype:\nwxFlexSizerGrowMode wxFlexGridSizer::GetNonFlexibleGrowMode() const\nClass arguments details:\n");
		}


		wxFlexGridSizer* self=dynamic_cast< wxFlexGridSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFlexSizerGrowMode wxFlexGridSizer::GetNonFlexibleGrowMode() const");
		}
		wxFlexSizerGrowMode lret = self->GetNonFlexibleGrowMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxFlexGridSizer::IsColGrowable(size_t idx)
	static int _bind_IsColGrowable(lua_State *L) {
		if (!_lg_typecheck_IsColGrowable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFlexGridSizer::IsColGrowable(size_t idx) function, expected prototype:\nbool wxFlexGridSizer::IsColGrowable(size_t idx)\nClass arguments details:\n");
		}

		size_t idx=(size_t)lua_tointeger(L,2);

		wxFlexGridSizer* self=dynamic_cast< wxFlexGridSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFlexGridSizer::IsColGrowable(size_t)");
		}
		bool lret = self->IsColGrowable(idx);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFlexGridSizer::IsRowGrowable(size_t idx)
	static int _bind_IsRowGrowable(lua_State *L) {
		if (!_lg_typecheck_IsRowGrowable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFlexGridSizer::IsRowGrowable(size_t idx) function, expected prototype:\nbool wxFlexGridSizer::IsRowGrowable(size_t idx)\nClass arguments details:\n");
		}

		size_t idx=(size_t)lua_tointeger(L,2);

		wxFlexGridSizer* self=dynamic_cast< wxFlexGridSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFlexGridSizer::IsRowGrowable(size_t)");
		}
		bool lret = self->IsRowGrowable(idx);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFlexGridSizer::RemoveGrowableCol(size_t idx)
	static int _bind_RemoveGrowableCol(lua_State *L) {
		if (!_lg_typecheck_RemoveGrowableCol(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFlexGridSizer::RemoveGrowableCol(size_t idx) function, expected prototype:\nvoid wxFlexGridSizer::RemoveGrowableCol(size_t idx)\nClass arguments details:\n");
		}

		size_t idx=(size_t)lua_tointeger(L,2);

		wxFlexGridSizer* self=dynamic_cast< wxFlexGridSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFlexGridSizer::RemoveGrowableCol(size_t)");
		}
		self->RemoveGrowableCol(idx);

		return 0;
	}

	// void wxFlexGridSizer::RemoveGrowableRow(size_t idx)
	static int _bind_RemoveGrowableRow(lua_State *L) {
		if (!_lg_typecheck_RemoveGrowableRow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFlexGridSizer::RemoveGrowableRow(size_t idx) function, expected prototype:\nvoid wxFlexGridSizer::RemoveGrowableRow(size_t idx)\nClass arguments details:\n");
		}

		size_t idx=(size_t)lua_tointeger(L,2);

		wxFlexGridSizer* self=dynamic_cast< wxFlexGridSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFlexGridSizer::RemoveGrowableRow(size_t)");
		}
		self->RemoveGrowableRow(idx);

		return 0;
	}

	// void wxFlexGridSizer::SetFlexibleDirection(int direction)
	static int _bind_SetFlexibleDirection(lua_State *L) {
		if (!_lg_typecheck_SetFlexibleDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFlexGridSizer::SetFlexibleDirection(int direction) function, expected prototype:\nvoid wxFlexGridSizer::SetFlexibleDirection(int direction)\nClass arguments details:\n");
		}

		int direction=(int)lua_tointeger(L,2);

		wxFlexGridSizer* self=dynamic_cast< wxFlexGridSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFlexGridSizer::SetFlexibleDirection(int)");
		}
		self->SetFlexibleDirection(direction);

		return 0;
	}

	// void wxFlexGridSizer::SetNonFlexibleGrowMode(wxFlexSizerGrowMode mode)
	static int _bind_SetNonFlexibleGrowMode(lua_State *L) {
		if (!_lg_typecheck_SetNonFlexibleGrowMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFlexGridSizer::SetNonFlexibleGrowMode(wxFlexSizerGrowMode mode) function, expected prototype:\nvoid wxFlexGridSizer::SetNonFlexibleGrowMode(wxFlexSizerGrowMode mode)\nClass arguments details:\n");
		}

		wxFlexSizerGrowMode mode=(wxFlexSizerGrowMode)lua_tointeger(L,2);

		wxFlexGridSizer* self=dynamic_cast< wxFlexGridSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFlexGridSizer::SetNonFlexibleGrowMode(wxFlexSizerGrowMode)");
		}
		self->SetNonFlexibleGrowMode(mode);

		return 0;
	}

	// void wxFlexGridSizer::RecalcSizes()
	static int _bind_RecalcSizes(lua_State *L) {
		if (!_lg_typecheck_RecalcSizes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFlexGridSizer::RecalcSizes() function, expected prototype:\nvoid wxFlexGridSizer::RecalcSizes()\nClass arguments details:\n");
		}


		wxFlexGridSizer* self=dynamic_cast< wxFlexGridSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFlexGridSizer::RecalcSizes()");
		}
		self->RecalcSizes();

		return 0;
	}

	// wxSize wxFlexGridSizer::CalcMin()
	static int _bind_CalcMin(lua_State *L) {
		if (!_lg_typecheck_CalcMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxFlexGridSizer::CalcMin() function, expected prototype:\nwxSize wxFlexGridSizer::CalcMin()\nClass arguments details:\n");
		}


		wxFlexGridSizer* self=dynamic_cast< wxFlexGridSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxFlexGridSizer::CalcMin()");
		}
		wxSize stack_lret = self->CalcMin();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

wxFlexGridSizer* LunaTraits< wxFlexGridSizer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFlexGridSizer::_bind_ctor(L);
}

void LunaTraits< wxFlexGridSizer >::_bind_dtor(wxFlexGridSizer* obj) {
	delete obj;
}

const char LunaTraits< wxFlexGridSizer >::className[] = "wxFlexGridSizer";
const char LunaTraits< wxFlexGridSizer >::fullName[] = "wxFlexGridSizer";
const char LunaTraits< wxFlexGridSizer >::moduleName[] = "wx";
const char* LunaTraits< wxFlexGridSizer >::parents[] = {"wx.wxGridSizer", 0};
const int LunaTraits< wxFlexGridSizer >::hash = 13113834;
const int LunaTraits< wxFlexGridSizer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFlexGridSizer >::methods[] = {
	{"AddGrowableCol", &luna_wrapper_wxFlexGridSizer::_bind_AddGrowableCol},
	{"AddGrowableRow", &luna_wrapper_wxFlexGridSizer::_bind_AddGrowableRow},
	{"GetFlexibleDirection", &luna_wrapper_wxFlexGridSizer::_bind_GetFlexibleDirection},
	{"GetNonFlexibleGrowMode", &luna_wrapper_wxFlexGridSizer::_bind_GetNonFlexibleGrowMode},
	{"IsColGrowable", &luna_wrapper_wxFlexGridSizer::_bind_IsColGrowable},
	{"IsRowGrowable", &luna_wrapper_wxFlexGridSizer::_bind_IsRowGrowable},
	{"RemoveGrowableCol", &luna_wrapper_wxFlexGridSizer::_bind_RemoveGrowableCol},
	{"RemoveGrowableRow", &luna_wrapper_wxFlexGridSizer::_bind_RemoveGrowableRow},
	{"SetFlexibleDirection", &luna_wrapper_wxFlexGridSizer::_bind_SetFlexibleDirection},
	{"SetNonFlexibleGrowMode", &luna_wrapper_wxFlexGridSizer::_bind_SetNonFlexibleGrowMode},
	{"RecalcSizes", &luna_wrapper_wxFlexGridSizer::_bind_RecalcSizes},
	{"CalcMin", &luna_wrapper_wxFlexGridSizer::_bind_CalcMin},
	{"__eq", &luna_wrapper_wxFlexGridSizer::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxFlexGridSizer >::converters[] = {
	{"wxObject", &luna_wrapper_wxFlexGridSizer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFlexGridSizer >::enumValues[] = {
	{0,0}
};


