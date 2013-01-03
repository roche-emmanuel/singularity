#include <plug_common.h>

class luna_wrapper_wxRealPoint {
public:
	typedef Luna< wxRealPoint > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,40755714) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxRealPoint*)");
		}

		wxRealPoint* rhs =(Luna< wxRealPoint >::check(L,2));
		wxRealPoint* self=(Luna< wxRealPoint >::check(L,1));
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

		wxRealPoint* self=(Luna< wxRealPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRealPoint");
		
		return luna_dynamicCast(L,converters,"wxRealPoint",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 4 valid operators)
	inline static bool _lg_typecheck_op_add_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,40755714) ) return false;
		if( (!(Luna< wxRealPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_add_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,40755714) ) return false;
		if( (!(Luna< wxRealPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}


	// Constructor binds:
	// wxRealPoint::wxRealPoint()
	static wxRealPoint* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRealPoint::wxRealPoint() function, expected prototype:\nwxRealPoint::wxRealPoint()\nClass arguments details:\n");
		}


		return new wxRealPoint();
	}

	// wxRealPoint::wxRealPoint(double x, double y)
	static wxRealPoint* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRealPoint::wxRealPoint(double x, double y) function, expected prototype:\nwxRealPoint::wxRealPoint(double x, double y)\nClass arguments details:\n");
		}

		double x=(double)lua_tonumber(L,1);
		double y=(double)lua_tonumber(L,2);

		return new wxRealPoint(x, y);
	}

	// wxRealPoint::wxRealPoint(const wxPoint & pt)
	static wxRealPoint* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRealPoint::wxRealPoint(const wxPoint & pt) function, expected prototype:\nwxRealPoint::wxRealPoint(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,1));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRealPoint::wxRealPoint function");
		}
		const wxPoint & pt=*pt_ptr;

		return new wxRealPoint(pt);
	}

	// Overload binder for wxRealPoint::wxRealPoint
	static wxRealPoint* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function wxRealPoint, cannot match any of the overloads for function wxRealPoint:\n  wxRealPoint()\n  wxRealPoint(double, double)\n  wxRealPoint(const wxPoint &)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:
	// wxRealPoint & wxRealPoint::operator+=(const wxRealPoint & pt)
	static int _bind_op_add_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_add_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRealPoint & wxRealPoint::operator+=(const wxRealPoint & pt) function, expected prototype:\nwxRealPoint & wxRealPoint::operator+=(const wxRealPoint & pt)\nClass arguments details:\narg 1 ID = 40755714\n");
		}

		const wxRealPoint* pt_ptr=(Luna< wxRealPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRealPoint::operator+= function");
		}
		const wxRealPoint & pt=*pt_ptr;

		wxRealPoint* self=(Luna< wxRealPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRealPoint & wxRealPoint::operator+=(const wxRealPoint &). Got : '%s'",typeid(Luna< wxRealPoint >::check(L,1)).name());
		}
		const wxRealPoint* lret = &self->operator+=(pt);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRealPoint >::push(L,lret,false);

		return 1;
	}

	// wxRealPoint & wxRealPoint::operator+=(const wxSize & sz)
	static int _bind_op_add_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_add_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRealPoint & wxRealPoint::operator+=(const wxSize & sz) function, expected prototype:\nwxRealPoint & wxRealPoint::operator+=(const wxSize & sz)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* sz_ptr=(Luna< wxSize >::check(L,2));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxRealPoint::operator+= function");
		}
		const wxSize & sz=*sz_ptr;

		wxRealPoint* self=(Luna< wxRealPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRealPoint & wxRealPoint::operator+=(const wxSize &). Got : '%s'",typeid(Luna< wxRealPoint >::check(L,1)).name());
		}
		const wxRealPoint* lret = &self->operator+=(sz);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRealPoint >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxRealPoint::operator+=
	static int _bind_op_add(lua_State *L) {
		if (_lg_typecheck_op_add_overload_1(L)) return _bind_op_add_overload_1(L);
		if (_lg_typecheck_op_add_overload_2(L)) return _bind_op_add_overload_2(L);

		luaL_error(L, "error in function operator+=, cannot match any of the overloads for function operator+=:\n  operator+=(const wxRealPoint &)\n  operator+=(const wxSize &)\n");
		return 0;
	}

	// wxRealPoint & wxRealPoint::operator-=(const wxRealPoint & pt)
	static int _bind_op_sub_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_sub_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRealPoint & wxRealPoint::operator-=(const wxRealPoint & pt) function, expected prototype:\nwxRealPoint & wxRealPoint::operator-=(const wxRealPoint & pt)\nClass arguments details:\narg 1 ID = 40755714\n");
		}

		const wxRealPoint* pt_ptr=(Luna< wxRealPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRealPoint::operator-= function");
		}
		const wxRealPoint & pt=*pt_ptr;

		wxRealPoint* self=(Luna< wxRealPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRealPoint & wxRealPoint::operator-=(const wxRealPoint &). Got : '%s'",typeid(Luna< wxRealPoint >::check(L,1)).name());
		}
		const wxRealPoint* lret = &self->operator-=(pt);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRealPoint >::push(L,lret,false);

		return 1;
	}

	// wxRealPoint & wxRealPoint::operator-=(const wxSize & sz)
	static int _bind_op_sub_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_sub_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRealPoint & wxRealPoint::operator-=(const wxSize & sz) function, expected prototype:\nwxRealPoint & wxRealPoint::operator-=(const wxSize & sz)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* sz_ptr=(Luna< wxSize >::check(L,2));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxRealPoint::operator-= function");
		}
		const wxSize & sz=*sz_ptr;

		wxRealPoint* self=(Luna< wxRealPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRealPoint & wxRealPoint::operator-=(const wxSize &). Got : '%s'",typeid(Luna< wxRealPoint >::check(L,1)).name());
		}
		const wxRealPoint* lret = &self->operator-=(sz);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRealPoint >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxRealPoint::operator-=
	static int _bind_op_sub(lua_State *L) {
		if (_lg_typecheck_op_sub_overload_1(L)) return _bind_op_sub_overload_1(L);
		if (_lg_typecheck_op_sub_overload_2(L)) return _bind_op_sub_overload_2(L);

		luaL_error(L, "error in function operator-=, cannot match any of the overloads for function operator-=:\n  operator-=(const wxRealPoint &)\n  operator-=(const wxSize &)\n");
		return 0;
	}


};

wxRealPoint* LunaTraits< wxRealPoint >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRealPoint::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxRealPoint >::_bind_dtor(wxRealPoint* obj) {
	delete obj;
}

const char LunaTraits< wxRealPoint >::className[] = "wxRealPoint";
const char LunaTraits< wxRealPoint >::fullName[] = "wxRealPoint";
const char LunaTraits< wxRealPoint >::moduleName[] = "wx";
const char* LunaTraits< wxRealPoint >::parents[] = {0};
const int LunaTraits< wxRealPoint >::hash = 40755714;
const int LunaTraits< wxRealPoint >::uniqueIDs[] = {40755714,0};

luna_RegType LunaTraits< wxRealPoint >::methods[] = {
	{"op_add", &luna_wrapper_wxRealPoint::_bind_op_add},
	{"op_sub", &luna_wrapper_wxRealPoint::_bind_op_sub},
	{"dynCast", &luna_wrapper_wxRealPoint::_bind_dynCast},
	{"__eq", &luna_wrapper_wxRealPoint::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRealPoint >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRealPoint >::enumValues[] = {
	{0,0}
};


