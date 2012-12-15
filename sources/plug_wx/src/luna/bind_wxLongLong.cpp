#include <plug_common.h>

class luna_wrapper_wxLongLong {
public:
	typedef Luna< wxLongLong > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13282555) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxLongLong*)");
		}

		wxLongLong* rhs =(Luna< wxLongLong >::check(L,2));
		wxLongLong* self=(Luna< wxLongLong >::check(L,1));
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

		wxLongLong* self=(Luna< wxLongLong >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxLongLong");
		
		return luna_dynamicCast(L,converters,"wxLongLong",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Abs_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Abs_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHi(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToDouble(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToLong(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 5 valid operators)
	inline static bool _lg_typecheck___add_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13282555) ) return false;
		if( (!dynamic_cast< wxLongLong* >(Luna< wxLongLong >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13282555) ) return false;
		if( (!dynamic_cast< wxLongLong* >(Luna< wxLongLong >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13282555) ) return false;
		if( (!dynamic_cast< wxLongLong* >(Luna< wxLongLong >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13282555) ) return false;
		if( (!dynamic_cast< wxLongLong* >(Luna< wxLongLong >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Constructor binds:
	// wxLongLong::wxLongLong()
	static wxLongLong* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLongLong::wxLongLong() function, expected prototype:\nwxLongLong::wxLongLong()\nClass arguments details:\n");
		}


		return new wxLongLong();
	}

	// wxLongLong::wxLongLong(long hi, unsigned long lo)
	static wxLongLong* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLongLong::wxLongLong(long hi, unsigned long lo) function, expected prototype:\nwxLongLong::wxLongLong(long hi, unsigned long lo)\nClass arguments details:\n");
		}

		long hi=(long)lua_tointeger(L,1);
		unsigned long lo=(unsigned long)lua_tointeger(L,2);

		return new wxLongLong(hi, lo);
	}

	// Overload binder for wxLongLong::wxLongLong
	static wxLongLong* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxLongLong, cannot match any of the overloads for function wxLongLong:\n  wxLongLong()\n  wxLongLong(long, unsigned long)\n");
		return NULL;
	}


	// Function binds:
	// wxLongLong wxLongLong::Abs() const
	static int _bind_Abs_overload_1(lua_State *L) {
		if (!_lg_typecheck_Abs_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLongLong wxLongLong::Abs() const function, expected prototype:\nwxLongLong wxLongLong::Abs() const\nClass arguments details:\n");
		}


		wxLongLong* self=(Luna< wxLongLong >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLongLong wxLongLong::Abs() const");
		}
		wxLongLong stack_lret = self->Abs();
		wxLongLong* lret = new wxLongLong(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxLongLong >::push(L,lret,true);

		return 1;
	}

	// wxLongLong & wxLongLong::Abs()
	static int _bind_Abs_overload_2(lua_State *L) {
		if (!_lg_typecheck_Abs_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLongLong & wxLongLong::Abs() function, expected prototype:\nwxLongLong & wxLongLong::Abs()\nClass arguments details:\n");
		}


		wxLongLong* self=(Luna< wxLongLong >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLongLong & wxLongLong::Abs()");
		}
		const wxLongLong* lret = &self->Abs();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxLongLong >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxLongLong::Abs
	static int _bind_Abs(lua_State *L) {
		if (_lg_typecheck_Abs_overload_1(L)) return _bind_Abs_overload_1(L);
		if (_lg_typecheck_Abs_overload_2(L)) return _bind_Abs_overload_2(L);

		luaL_error(L, "error in function Abs, cannot match any of the overloads for function Abs:\n  Abs()\n  Abs()\n");
		return 0;
	}

	// wxLongLong wxLongLong::Assign(double d)
	static int _bind_Assign(lua_State *L) {
		if (!_lg_typecheck_Assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLongLong wxLongLong::Assign(double d) function, expected prototype:\nwxLongLong wxLongLong::Assign(double d)\nClass arguments details:\n");
		}

		double d=(double)lua_tonumber(L,2);

		wxLongLong* self=(Luna< wxLongLong >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLongLong wxLongLong::Assign(double)");
		}
		wxLongLong stack_lret = self->Assign(d);
		wxLongLong* lret = new wxLongLong(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxLongLong >::push(L,lret,true);

		return 1;
	}

	// long wxLongLong::GetHi() const
	static int _bind_GetHi(lua_State *L) {
		if (!_lg_typecheck_GetHi(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxLongLong::GetHi() const function, expected prototype:\nlong wxLongLong::GetHi() const\nClass arguments details:\n");
		}


		wxLongLong* self=(Luna< wxLongLong >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxLongLong::GetHi() const");
		}
		long lret = self->GetHi();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long wxLongLong::GetLo() const
	static int _bind_GetLo(lua_State *L) {
		if (!_lg_typecheck_GetLo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned long wxLongLong::GetLo() const function, expected prototype:\nunsigned long wxLongLong::GetLo() const\nClass arguments details:\n");
		}


		wxLongLong* self=(Luna< wxLongLong >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned long wxLongLong::GetLo() const");
		}
		unsigned long lret = self->GetLo();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long long wxLongLong::GetValue() const
	static int _bind_GetValue(lua_State *L) {
		if (!_lg_typecheck_GetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long long wxLongLong::GetValue() const function, expected prototype:\nlong long wxLongLong::GetValue() const\nClass arguments details:\n");
		}


		wxLongLong* self=(Luna< wxLongLong >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long long wxLongLong::GetValue() const");
		}
		long long lret = self->GetValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxLongLong::ToDouble() const
	static int _bind_ToDouble(lua_State *L) {
		if (!_lg_typecheck_ToDouble(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double wxLongLong::ToDouble() const function, expected prototype:\ndouble wxLongLong::ToDouble() const\nClass arguments details:\n");
		}


		wxLongLong* self=(Luna< wxLongLong >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double wxLongLong::ToDouble() const");
		}
		double lret = self->ToDouble();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxLongLong::ToLong() const
	static int _bind_ToLong(lua_State *L) {
		if (!_lg_typecheck_ToLong(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxLongLong::ToLong() const function, expected prototype:\nlong wxLongLong::ToLong() const\nClass arguments details:\n");
		}


		wxLongLong* self=(Luna< wxLongLong >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxLongLong::ToLong() const");
		}
		long lret = self->ToLong();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxLongLong::ToString() const
	static int _bind_ToString(lua_State *L) {
		if (!_lg_typecheck_ToString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxLongLong::ToString() const function, expected prototype:\nwxString wxLongLong::ToString() const\nClass arguments details:\n");
		}


		wxLongLong* self=(Luna< wxLongLong >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxLongLong::ToString() const");
		}
		wxString lret = self->ToString();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:
	// wxLongLong wxLongLong::operator+(const wxLongLong & ll) const
	static int _bind___add_overload_1(lua_State *L) {
		if (!_lg_typecheck___add_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLongLong wxLongLong::operator+(const wxLongLong & ll) const function, expected prototype:\nwxLongLong wxLongLong::operator+(const wxLongLong & ll) const\nClass arguments details:\narg 1 ID = 13282555\n");
		}

		const wxLongLong* ll_ptr=(Luna< wxLongLong >::check(L,2));
		if( !ll_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ll in wxLongLong::operator+ function");
		}
		const wxLongLong & ll=*ll_ptr;

		wxLongLong* self=(Luna< wxLongLong >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLongLong wxLongLong::operator+(const wxLongLong &) const");
		}
		wxLongLong stack_lret = self->operator+(ll);
		wxLongLong* lret = new wxLongLong(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxLongLong >::push(L,lret,true);

		return 1;
	}

	// wxLongLong & wxLongLong::operator+(const wxLongLong & ll)
	static int _bind___add_overload_2(lua_State *L) {
		if (!_lg_typecheck___add_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLongLong & wxLongLong::operator+(const wxLongLong & ll) function, expected prototype:\nwxLongLong & wxLongLong::operator+(const wxLongLong & ll)\nClass arguments details:\narg 1 ID = 13282555\n");
		}

		const wxLongLong* ll_ptr=(Luna< wxLongLong >::check(L,2));
		if( !ll_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ll in wxLongLong::operator+ function");
		}
		const wxLongLong & ll=*ll_ptr;

		wxLongLong* self=(Luna< wxLongLong >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLongLong & wxLongLong::operator+(const wxLongLong &)");
		}
		const wxLongLong* lret = &self->operator+(ll);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxLongLong >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxLongLong::operator+
	static int _bind___add(lua_State *L) {
		if (_lg_typecheck___add_overload_1(L)) return _bind___add_overload_1(L);
		if (_lg_typecheck___add_overload_2(L)) return _bind___add_overload_2(L);

		luaL_error(L, "error in function operator+, cannot match any of the overloads for function operator+:\n  operator+(const wxLongLong &)\n  operator+(const wxLongLong &)\n");
		return 0;
	}

	// wxLongLong wxLongLong::operator-(const wxLongLong & ll) const
	static int _bind___sub_overload_1(lua_State *L) {
		if (!_lg_typecheck___sub_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLongLong wxLongLong::operator-(const wxLongLong & ll) const function, expected prototype:\nwxLongLong wxLongLong::operator-(const wxLongLong & ll) const\nClass arguments details:\narg 1 ID = 13282555\n");
		}

		const wxLongLong* ll_ptr=(Luna< wxLongLong >::check(L,2));
		if( !ll_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ll in wxLongLong::operator- function");
		}
		const wxLongLong & ll=*ll_ptr;

		wxLongLong* self=(Luna< wxLongLong >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLongLong wxLongLong::operator-(const wxLongLong &) const");
		}
		wxLongLong stack_lret = self->operator-(ll);
		wxLongLong* lret = new wxLongLong(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxLongLong >::push(L,lret,true);

		return 1;
	}

	// wxLongLong & wxLongLong::operator-(const wxLongLong & ll)
	static int _bind___sub_overload_2(lua_State *L) {
		if (!_lg_typecheck___sub_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLongLong & wxLongLong::operator-(const wxLongLong & ll) function, expected prototype:\nwxLongLong & wxLongLong::operator-(const wxLongLong & ll)\nClass arguments details:\narg 1 ID = 13282555\n");
		}

		const wxLongLong* ll_ptr=(Luna< wxLongLong >::check(L,2));
		if( !ll_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ll in wxLongLong::operator- function");
		}
		const wxLongLong & ll=*ll_ptr;

		wxLongLong* self=(Luna< wxLongLong >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLongLong & wxLongLong::operator-(const wxLongLong &)");
		}
		const wxLongLong* lret = &self->operator-(ll);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxLongLong >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxLongLong::operator-
	static int _bind___sub(lua_State *L) {
		if (_lg_typecheck___sub_overload_1(L)) return _bind___sub_overload_1(L);
		if (_lg_typecheck___sub_overload_2(L)) return _bind___sub_overload_2(L);

		luaL_error(L, "error in function operator-, cannot match any of the overloads for function operator-:\n  operator-(const wxLongLong &)\n  operator-(const wxLongLong &)\n");
		return 0;
	}

	// wxLongLong wxLongLong::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLongLong wxLongLong::operator-() const function, expected prototype:\nwxLongLong wxLongLong::operator-() const\nClass arguments details:\n");
		}


		wxLongLong* self=(Luna< wxLongLong >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLongLong wxLongLong::operator-() const");
		}
		wxLongLong stack_lret = self->operator-();
		wxLongLong* lret = new wxLongLong(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxLongLong >::push(L,lret,true);

		return 1;
	}


};

wxLongLong* LunaTraits< wxLongLong >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxLongLong::_bind_ctor(L);
}

void LunaTraits< wxLongLong >::_bind_dtor(wxLongLong* obj) {
	delete obj;
}

const char LunaTraits< wxLongLong >::className[] = "wxLongLong";
const char LunaTraits< wxLongLong >::fullName[] = "wxLongLong";
const char LunaTraits< wxLongLong >::moduleName[] = "wx";
const char* LunaTraits< wxLongLong >::parents[] = {0};
const int LunaTraits< wxLongLong >::hash = 13282555;
const int LunaTraits< wxLongLong >::uniqueIDs[] = {13282555,0};

luna_RegType LunaTraits< wxLongLong >::methods[] = {
	{"Abs", &luna_wrapper_wxLongLong::_bind_Abs},
	{"Assign", &luna_wrapper_wxLongLong::_bind_Assign},
	{"GetHi", &luna_wrapper_wxLongLong::_bind_GetHi},
	{"GetLo", &luna_wrapper_wxLongLong::_bind_GetLo},
	{"GetValue", &luna_wrapper_wxLongLong::_bind_GetValue},
	{"ToDouble", &luna_wrapper_wxLongLong::_bind_ToDouble},
	{"ToLong", &luna_wrapper_wxLongLong::_bind_ToLong},
	{"ToString", &luna_wrapper_wxLongLong::_bind_ToString},
	{"__add", &luna_wrapper_wxLongLong::_bind___add},
	{"__sub", &luna_wrapper_wxLongLong::_bind___sub},
	{"__unm", &luna_wrapper_wxLongLong::_bind___unm},
	{"dynCast", &luna_wrapper_wxLongLong::_bind_dynCast},
	{"__eq", &luna_wrapper_wxLongLong::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxLongLong >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxLongLong >::enumValues[] = {
	{0,0}
};


