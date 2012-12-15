#include <plug_common.h>

class luna_wrapper_wxSizerFlags {
public:
	typedef Luna< wxSizerFlags > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85412581) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxSizerFlags*)");
		}

		wxSizerFlags* rhs =(Luna< wxSizerFlags >::check(L,2));
		wxSizerFlags* self=(Luna< wxSizerFlags >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		wxSizerFlags* self=(Luna< wxSizerFlags >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxSizerFlags");
		
		return luna_dynamicCast(L,converters,"wxSizerFlags",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Align(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Border_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Border_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Bottom(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Center(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Centre(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DoubleBorder(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DoubleHorzBorder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Expand(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FixedMinSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ReserveSpaceEvenIfHidden(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Left(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Proportion(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Right(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Shaped(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Top(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_TripleBorder(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDefaultBorder(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSizerFlags::wxSizerFlags(int proportion = 0)
	static wxSizerFlags* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerFlags::wxSizerFlags(int proportion = 0) function, expected prototype:\nwxSizerFlags::wxSizerFlags(int proportion = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int proportion=luatop>0 ? (int)lua_tointeger(L,1) : 0;

		return new wxSizerFlags(proportion);
	}


	// Function binds:
	// wxSizerFlags & wxSizerFlags::Align(int alignment)
	static int _bind_Align(lua_State *L) {
		if (!_lg_typecheck_Align(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerFlags & wxSizerFlags::Align(int alignment) function, expected prototype:\nwxSizerFlags & wxSizerFlags::Align(int alignment)\nClass arguments details:\n");
		}

		int alignment=(int)lua_tointeger(L,2);

		wxSizerFlags* self=(Luna< wxSizerFlags >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerFlags & wxSizerFlags::Align(int)");
		}
		const wxSizerFlags* lret = &self->Align(alignment);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerFlags >::push(L,lret,false);

		return 1;
	}

	// wxSizerFlags & wxSizerFlags::Border(int direction, int borderinpixels)
	static int _bind_Border_overload_1(lua_State *L) {
		if (!_lg_typecheck_Border_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerFlags & wxSizerFlags::Border(int direction, int borderinpixels) function, expected prototype:\nwxSizerFlags & wxSizerFlags::Border(int direction, int borderinpixels)\nClass arguments details:\n");
		}

		int direction=(int)lua_tointeger(L,2);
		int borderinpixels=(int)lua_tointeger(L,3);

		wxSizerFlags* self=(Luna< wxSizerFlags >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerFlags & wxSizerFlags::Border(int, int)");
		}
		const wxSizerFlags* lret = &self->Border(direction, borderinpixels);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerFlags >::push(L,lret,false);

		return 1;
	}

	// wxSizerFlags & wxSizerFlags::Border(int direction = ::wxALL)
	static int _bind_Border_overload_2(lua_State *L) {
		if (!_lg_typecheck_Border_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerFlags & wxSizerFlags::Border(int direction = ::wxALL) function, expected prototype:\nwxSizerFlags & wxSizerFlags::Border(int direction = ::wxALL)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int direction=luatop>1 ? (int)lua_tointeger(L,2) : ::wxALL;

		wxSizerFlags* self=(Luna< wxSizerFlags >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerFlags & wxSizerFlags::Border(int)");
		}
		const wxSizerFlags* lret = &self->Border(direction);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerFlags >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxSizerFlags::Border
	static int _bind_Border(lua_State *L) {
		if (_lg_typecheck_Border_overload_1(L)) return _bind_Border_overload_1(L);
		if (_lg_typecheck_Border_overload_2(L)) return _bind_Border_overload_2(L);

		luaL_error(L, "error in function Border, cannot match any of the overloads for function Border:\n  Border(int, int)\n  Border(int)\n");
		return 0;
	}

	// wxSizerFlags & wxSizerFlags::Bottom()
	static int _bind_Bottom(lua_State *L) {
		if (!_lg_typecheck_Bottom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerFlags & wxSizerFlags::Bottom() function, expected prototype:\nwxSizerFlags & wxSizerFlags::Bottom()\nClass arguments details:\n");
		}


		wxSizerFlags* self=(Luna< wxSizerFlags >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerFlags & wxSizerFlags::Bottom()");
		}
		const wxSizerFlags* lret = &self->Bottom();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerFlags >::push(L,lret,false);

		return 1;
	}

	// wxSizerFlags & wxSizerFlags::Center()
	static int _bind_Center(lua_State *L) {
		if (!_lg_typecheck_Center(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerFlags & wxSizerFlags::Center() function, expected prototype:\nwxSizerFlags & wxSizerFlags::Center()\nClass arguments details:\n");
		}


		wxSizerFlags* self=(Luna< wxSizerFlags >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerFlags & wxSizerFlags::Center()");
		}
		const wxSizerFlags* lret = &self->Center();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerFlags >::push(L,lret,false);

		return 1;
	}

	// wxSizerFlags & wxSizerFlags::Centre()
	static int _bind_Centre(lua_State *L) {
		if (!_lg_typecheck_Centre(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerFlags & wxSizerFlags::Centre() function, expected prototype:\nwxSizerFlags & wxSizerFlags::Centre()\nClass arguments details:\n");
		}


		wxSizerFlags* self=(Luna< wxSizerFlags >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerFlags & wxSizerFlags::Centre()");
		}
		const wxSizerFlags* lret = &self->Centre();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerFlags >::push(L,lret,false);

		return 1;
	}

	// wxSizerFlags & wxSizerFlags::DoubleBorder(int direction = ::wxALL)
	static int _bind_DoubleBorder(lua_State *L) {
		if (!_lg_typecheck_DoubleBorder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerFlags & wxSizerFlags::DoubleBorder(int direction = ::wxALL) function, expected prototype:\nwxSizerFlags & wxSizerFlags::DoubleBorder(int direction = ::wxALL)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int direction=luatop>1 ? (int)lua_tointeger(L,2) : ::wxALL;

		wxSizerFlags* self=(Luna< wxSizerFlags >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerFlags & wxSizerFlags::DoubleBorder(int)");
		}
		const wxSizerFlags* lret = &self->DoubleBorder(direction);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerFlags >::push(L,lret,false);

		return 1;
	}

	// wxSizerFlags & wxSizerFlags::DoubleHorzBorder()
	static int _bind_DoubleHorzBorder(lua_State *L) {
		if (!_lg_typecheck_DoubleHorzBorder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerFlags & wxSizerFlags::DoubleHorzBorder() function, expected prototype:\nwxSizerFlags & wxSizerFlags::DoubleHorzBorder()\nClass arguments details:\n");
		}


		wxSizerFlags* self=(Luna< wxSizerFlags >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerFlags & wxSizerFlags::DoubleHorzBorder()");
		}
		const wxSizerFlags* lret = &self->DoubleHorzBorder();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerFlags >::push(L,lret,false);

		return 1;
	}

	// wxSizerFlags & wxSizerFlags::Expand()
	static int _bind_Expand(lua_State *L) {
		if (!_lg_typecheck_Expand(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerFlags & wxSizerFlags::Expand() function, expected prototype:\nwxSizerFlags & wxSizerFlags::Expand()\nClass arguments details:\n");
		}


		wxSizerFlags* self=(Luna< wxSizerFlags >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerFlags & wxSizerFlags::Expand()");
		}
		const wxSizerFlags* lret = &self->Expand();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerFlags >::push(L,lret,false);

		return 1;
	}

	// wxSizerFlags & wxSizerFlags::FixedMinSize()
	static int _bind_FixedMinSize(lua_State *L) {
		if (!_lg_typecheck_FixedMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerFlags & wxSizerFlags::FixedMinSize() function, expected prototype:\nwxSizerFlags & wxSizerFlags::FixedMinSize()\nClass arguments details:\n");
		}


		wxSizerFlags* self=(Luna< wxSizerFlags >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerFlags & wxSizerFlags::FixedMinSize()");
		}
		const wxSizerFlags* lret = &self->FixedMinSize();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerFlags >::push(L,lret,false);

		return 1;
	}

	// wxSizerFlags & wxSizerFlags::ReserveSpaceEvenIfHidden()
	static int _bind_ReserveSpaceEvenIfHidden(lua_State *L) {
		if (!_lg_typecheck_ReserveSpaceEvenIfHidden(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerFlags & wxSizerFlags::ReserveSpaceEvenIfHidden() function, expected prototype:\nwxSizerFlags & wxSizerFlags::ReserveSpaceEvenIfHidden()\nClass arguments details:\n");
		}


		wxSizerFlags* self=(Luna< wxSizerFlags >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerFlags & wxSizerFlags::ReserveSpaceEvenIfHidden()");
		}
		const wxSizerFlags* lret = &self->ReserveSpaceEvenIfHidden();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerFlags >::push(L,lret,false);

		return 1;
	}

	// wxSizerFlags & wxSizerFlags::Left()
	static int _bind_Left(lua_State *L) {
		if (!_lg_typecheck_Left(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerFlags & wxSizerFlags::Left() function, expected prototype:\nwxSizerFlags & wxSizerFlags::Left()\nClass arguments details:\n");
		}


		wxSizerFlags* self=(Luna< wxSizerFlags >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerFlags & wxSizerFlags::Left()");
		}
		const wxSizerFlags* lret = &self->Left();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerFlags >::push(L,lret,false);

		return 1;
	}

	// wxSizerFlags & wxSizerFlags::Proportion(int proportion)
	static int _bind_Proportion(lua_State *L) {
		if (!_lg_typecheck_Proportion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerFlags & wxSizerFlags::Proportion(int proportion) function, expected prototype:\nwxSizerFlags & wxSizerFlags::Proportion(int proportion)\nClass arguments details:\n");
		}

		int proportion=(int)lua_tointeger(L,2);

		wxSizerFlags* self=(Luna< wxSizerFlags >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerFlags & wxSizerFlags::Proportion(int)");
		}
		const wxSizerFlags* lret = &self->Proportion(proportion);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerFlags >::push(L,lret,false);

		return 1;
	}

	// wxSizerFlags & wxSizerFlags::Right()
	static int _bind_Right(lua_State *L) {
		if (!_lg_typecheck_Right(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerFlags & wxSizerFlags::Right() function, expected prototype:\nwxSizerFlags & wxSizerFlags::Right()\nClass arguments details:\n");
		}


		wxSizerFlags* self=(Luna< wxSizerFlags >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerFlags & wxSizerFlags::Right()");
		}
		const wxSizerFlags* lret = &self->Right();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerFlags >::push(L,lret,false);

		return 1;
	}

	// wxSizerFlags & wxSizerFlags::Shaped()
	static int _bind_Shaped(lua_State *L) {
		if (!_lg_typecheck_Shaped(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerFlags & wxSizerFlags::Shaped() function, expected prototype:\nwxSizerFlags & wxSizerFlags::Shaped()\nClass arguments details:\n");
		}


		wxSizerFlags* self=(Luna< wxSizerFlags >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerFlags & wxSizerFlags::Shaped()");
		}
		const wxSizerFlags* lret = &self->Shaped();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerFlags >::push(L,lret,false);

		return 1;
	}

	// wxSizerFlags & wxSizerFlags::Top()
	static int _bind_Top(lua_State *L) {
		if (!_lg_typecheck_Top(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerFlags & wxSizerFlags::Top() function, expected prototype:\nwxSizerFlags & wxSizerFlags::Top()\nClass arguments details:\n");
		}


		wxSizerFlags* self=(Luna< wxSizerFlags >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerFlags & wxSizerFlags::Top()");
		}
		const wxSizerFlags* lret = &self->Top();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerFlags >::push(L,lret,false);

		return 1;
	}

	// wxSizerFlags & wxSizerFlags::TripleBorder(int direction = ::wxALL)
	static int _bind_TripleBorder(lua_State *L) {
		if (!_lg_typecheck_TripleBorder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerFlags & wxSizerFlags::TripleBorder(int direction = ::wxALL) function, expected prototype:\nwxSizerFlags & wxSizerFlags::TripleBorder(int direction = ::wxALL)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int direction=luatop>1 ? (int)lua_tointeger(L,2) : ::wxALL;

		wxSizerFlags* self=(Luna< wxSizerFlags >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerFlags & wxSizerFlags::TripleBorder(int)");
		}
		const wxSizerFlags* lret = &self->TripleBorder(direction);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerFlags >::push(L,lret,false);

		return 1;
	}

	// static int wxSizerFlags::GetDefaultBorder()
	static int _bind_GetDefaultBorder(lua_State *L) {
		if (!_lg_typecheck_GetDefaultBorder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static int wxSizerFlags::GetDefaultBorder() function, expected prototype:\nstatic int wxSizerFlags::GetDefaultBorder()\nClass arguments details:\n");
		}


		int lret = wxSizerFlags::GetDefaultBorder();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxSizerFlags* LunaTraits< wxSizerFlags >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSizerFlags::_bind_ctor(L);
}

void LunaTraits< wxSizerFlags >::_bind_dtor(wxSizerFlags* obj) {
	delete obj;
}

const char LunaTraits< wxSizerFlags >::className[] = "wxSizerFlags";
const char LunaTraits< wxSizerFlags >::fullName[] = "wxSizerFlags";
const char LunaTraits< wxSizerFlags >::moduleName[] = "wx";
const char* LunaTraits< wxSizerFlags >::parents[] = {0};
const int LunaTraits< wxSizerFlags >::hash = 85412581;
const int LunaTraits< wxSizerFlags >::uniqueIDs[] = {85412581,0};

luna_RegType LunaTraits< wxSizerFlags >::methods[] = {
	{"Align", &luna_wrapper_wxSizerFlags::_bind_Align},
	{"Border", &luna_wrapper_wxSizerFlags::_bind_Border},
	{"Bottom", &luna_wrapper_wxSizerFlags::_bind_Bottom},
	{"Center", &luna_wrapper_wxSizerFlags::_bind_Center},
	{"Centre", &luna_wrapper_wxSizerFlags::_bind_Centre},
	{"DoubleBorder", &luna_wrapper_wxSizerFlags::_bind_DoubleBorder},
	{"DoubleHorzBorder", &luna_wrapper_wxSizerFlags::_bind_DoubleHorzBorder},
	{"Expand", &luna_wrapper_wxSizerFlags::_bind_Expand},
	{"FixedMinSize", &luna_wrapper_wxSizerFlags::_bind_FixedMinSize},
	{"ReserveSpaceEvenIfHidden", &luna_wrapper_wxSizerFlags::_bind_ReserveSpaceEvenIfHidden},
	{"Left", &luna_wrapper_wxSizerFlags::_bind_Left},
	{"Proportion", &luna_wrapper_wxSizerFlags::_bind_Proportion},
	{"Right", &luna_wrapper_wxSizerFlags::_bind_Right},
	{"Shaped", &luna_wrapper_wxSizerFlags::_bind_Shaped},
	{"Top", &luna_wrapper_wxSizerFlags::_bind_Top},
	{"TripleBorder", &luna_wrapper_wxSizerFlags::_bind_TripleBorder},
	{"GetDefaultBorder", &luna_wrapper_wxSizerFlags::_bind_GetDefaultBorder},
	{"dynCast", &luna_wrapper_wxSizerFlags::_bind_dynCast},
	{"__eq", &luna_wrapper_wxSizerFlags::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxSizerFlags >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxSizerFlags >::enumValues[] = {
	{0,0}
};


