#include <plug_common.h>

class luna_wrapper_wxBrush {
public:
	typedef Luna< wxBrush > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxBrush* ptr= dynamic_cast< wxBrush* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxBrush >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStipple(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsHatch(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsNonTransparent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsTransparent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStipple(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStyle(lua_State *L) {
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
	// wxBrush::wxBrush()
	static wxBrush* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBrush::wxBrush() function, expected prototype:\nwxBrush::wxBrush()\nClass arguments details:\n");
		}


		return new wxBrush();
	}

	// wxBrush::wxBrush(const wxColour & colour, wxBrushStyle style = wxBRUSHSTYLE_SOLID)
	static wxBrush* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBrush::wxBrush(const wxColour & colour, wxBrushStyle style = wxBRUSHSTYLE_SOLID) function, expected prototype:\nwxBrush::wxBrush(const wxColour & colour, wxBrushStyle style = wxBRUSHSTYLE_SOLID)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxColour* colour_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxBrush::wxBrush function");
		}
		const wxColour & colour=*colour_ptr;
		wxBrushStyle style=luatop>1 ? (wxBrushStyle)lua_tointeger(L,2) : wxBRUSHSTYLE_SOLID;

		return new wxBrush(colour, style);
	}

	// wxBrush::wxBrush(const wxBitmap & stippleBitmap)
	static wxBrush* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBrush::wxBrush(const wxBitmap & stippleBitmap) function, expected prototype:\nwxBrush::wxBrush(const wxBitmap & stippleBitmap)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* stippleBitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,1));
		if( !stippleBitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stippleBitmap in wxBrush::wxBrush function");
		}
		const wxBitmap & stippleBitmap=*stippleBitmap_ptr;

		return new wxBrush(stippleBitmap);
	}

	// wxBrush::wxBrush(const wxBrush & brush)
	static wxBrush* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBrush::wxBrush(const wxBrush & brush) function, expected prototype:\nwxBrush::wxBrush(const wxBrush & brush)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBrush* brush_ptr=dynamic_cast< wxBrush* >(Luna< wxObject >::check(L,1));
		if( !brush_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg brush in wxBrush::wxBrush function");
		}
		const wxBrush & brush=*brush_ptr;

		return new wxBrush(brush);
	}

	// Overload binder for wxBrush::wxBrush
	static wxBrush* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxBrush, cannot match any of the overloads for function wxBrush:\n  wxBrush()\n  wxBrush(const wxColour &, wxBrushStyle)\n  wxBrush(const wxBitmap &)\n  wxBrush(const wxBrush &)\n");
		return NULL;
	}


	// Function binds:
	// wxColour wxBrush::GetColour() const
	static int _bind_GetColour(lua_State *L) {
		if (!_lg_typecheck_GetColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxBrush::GetColour() const function, expected prototype:\nwxColour wxBrush::GetColour() const\nClass arguments details:\n");
		}


		wxBrush* self=dynamic_cast< wxBrush* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxBrush::GetColour() const");
		}
		wxColour stack_lret = self->GetColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxBitmap * wxBrush::GetStipple() const
	static int _bind_GetStipple(lua_State *L) {
		if (!_lg_typecheck_GetStipple(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap * wxBrush::GetStipple() const function, expected prototype:\nwxBitmap * wxBrush::GetStipple() const\nClass arguments details:\n");
		}


		wxBrush* self=dynamic_cast< wxBrush* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBitmap * wxBrush::GetStipple() const");
		}
		wxBitmap * lret = self->GetStipple();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,false);

		return 1;
	}

	// wxBrushStyle wxBrush::GetStyle() const
	static int _bind_GetStyle(lua_State *L) {
		if (!_lg_typecheck_GetStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBrushStyle wxBrush::GetStyle() const function, expected prototype:\nwxBrushStyle wxBrush::GetStyle() const\nClass arguments details:\n");
		}


		wxBrush* self=dynamic_cast< wxBrush* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBrushStyle wxBrush::GetStyle() const");
		}
		wxBrushStyle lret = self->GetStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxBrush::IsHatch() const
	static int _bind_IsHatch(lua_State *L) {
		if (!_lg_typecheck_IsHatch(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBrush::IsHatch() const function, expected prototype:\nbool wxBrush::IsHatch() const\nClass arguments details:\n");
		}


		wxBrush* self=dynamic_cast< wxBrush* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBrush::IsHatch() const");
		}
		bool lret = self->IsHatch();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBrush::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBrush::IsOk() const function, expected prototype:\nbool wxBrush::IsOk() const\nClass arguments details:\n");
		}


		wxBrush* self=dynamic_cast< wxBrush* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBrush::IsOk() const");
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBrush::IsNonTransparent() const
	static int _bind_IsNonTransparent(lua_State *L) {
		if (!_lg_typecheck_IsNonTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBrush::IsNonTransparent() const function, expected prototype:\nbool wxBrush::IsNonTransparent() const\nClass arguments details:\n");
		}


		wxBrush* self=dynamic_cast< wxBrush* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBrush::IsNonTransparent() const");
		}
		bool lret = self->IsNonTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBrush::IsTransparent() const
	static int _bind_IsTransparent(lua_State *L) {
		if (!_lg_typecheck_IsTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBrush::IsTransparent() const function, expected prototype:\nbool wxBrush::IsTransparent() const\nClass arguments details:\n");
		}


		wxBrush* self=dynamic_cast< wxBrush* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBrush::IsTransparent() const");
		}
		bool lret = self->IsTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxBrush::SetColour(const wxColour & colour)
	static int _bind_SetColour(lua_State *L) {
		if (!_lg_typecheck_SetColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxBrush::SetColour(const wxColour & colour) function, expected prototype:\nvoid wxBrush::SetColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* colour_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxBrush::SetColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxBrush* self=dynamic_cast< wxBrush* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxBrush::SetColour(const wxColour &)");
		}
		self->SetColour(colour);

		return 0;
	}

	// void wxBrush::SetStipple(const wxBitmap & bitmap)
	static int _bind_SetStipple(lua_State *L) {
		if (!_lg_typecheck_SetStipple(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxBrush::SetStipple(const wxBitmap & bitmap) function, expected prototype:\nvoid wxBrush::SetStipple(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxBrush::SetStipple function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxBrush* self=dynamic_cast< wxBrush* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxBrush::SetStipple(const wxBitmap &)");
		}
		self->SetStipple(bitmap);

		return 0;
	}

	// void wxBrush::SetStyle(wxBrushStyle style)
	static int _bind_SetStyle(lua_State *L) {
		if (!_lg_typecheck_SetStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxBrush::SetStyle(wxBrushStyle style) function, expected prototype:\nvoid wxBrush::SetStyle(wxBrushStyle style)\nClass arguments details:\n");
		}

		wxBrushStyle style=(wxBrushStyle)lua_tointeger(L,2);

		wxBrush* self=dynamic_cast< wxBrush* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxBrush::SetStyle(wxBrushStyle)");
		}
		self->SetStyle(style);

		return 0;
	}


	// Operator binds:
	// bool wxBrush::operator!=(const wxBrush & brush) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBrush::operator!=(const wxBrush & brush) const function, expected prototype:\nbool wxBrush::operator!=(const wxBrush & brush) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBrush* brush_ptr=dynamic_cast< wxBrush* >(Luna< wxObject >::check(L,2));
		if( !brush_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg brush in wxBrush::operator!= function");
		}
		const wxBrush & brush=*brush_ptr;

		wxBrush* self=dynamic_cast< wxBrush* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBrush::operator!=(const wxBrush &) const");
		}
		bool lret = self->operator!=(brush);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBrush::operator==(const wxBrush & brush) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBrush::operator==(const wxBrush & brush) const function, expected prototype:\nbool wxBrush::operator==(const wxBrush & brush) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBrush* brush_ptr=dynamic_cast< wxBrush* >(Luna< wxObject >::check(L,2));
		if( !brush_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg brush in wxBrush::operator== function");
		}
		const wxBrush & brush=*brush_ptr;

		wxBrush* self=dynamic_cast< wxBrush* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBrush::operator==(const wxBrush &) const");
		}
		bool lret = self->operator==(brush);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxBrush* LunaTraits< wxBrush >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxBrush::_bind_ctor(L);
}

void LunaTraits< wxBrush >::_bind_dtor(wxBrush* obj) {
	delete obj;
}

const char LunaTraits< wxBrush >::className[] = "wxBrush";
const char LunaTraits< wxBrush >::fullName[] = "wxBrush";
const char LunaTraits< wxBrush >::moduleName[] = "wx";
const char* LunaTraits< wxBrush >::parents[] = {"wx.wxGDIObject", 0};
const int LunaTraits< wxBrush >::hash = 12895234;
const int LunaTraits< wxBrush >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxBrush >::methods[] = {
	{"GetColour", &luna_wrapper_wxBrush::_bind_GetColour},
	{"GetStipple", &luna_wrapper_wxBrush::_bind_GetStipple},
	{"GetStyle", &luna_wrapper_wxBrush::_bind_GetStyle},
	{"IsHatch", &luna_wrapper_wxBrush::_bind_IsHatch},
	{"IsOk", &luna_wrapper_wxBrush::_bind_IsOk},
	{"IsNonTransparent", &luna_wrapper_wxBrush::_bind_IsNonTransparent},
	{"IsTransparent", &luna_wrapper_wxBrush::_bind_IsTransparent},
	{"SetColour", &luna_wrapper_wxBrush::_bind_SetColour},
	{"SetStipple", &luna_wrapper_wxBrush::_bind_SetStipple},
	{"SetStyle", &luna_wrapper_wxBrush::_bind_SetStyle},
	{"op_neq", &luna_wrapper_wxBrush::_bind_op_neq},
	{"__eq", &luna_wrapper_wxBrush::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxBrush >::converters[] = {
	{"wxObject", &luna_wrapper_wxBrush::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxBrush >::enumValues[] = {
	{0,0}
};


