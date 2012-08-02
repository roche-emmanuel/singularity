#include <plug_common.h>

class luna_wrapper_wxTransform2D {
public:
	typedef Luna< wxTransform2D > luna_t;

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

		wxTransform2D* self=(Luna< wxTransform2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTransform2D");
		
		return luna_dynamicCast(L,converters,"wxTransform2D",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_Transform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81619599)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Transform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,15778700)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Transform_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Transform_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,15778700) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InverseTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81619599)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InverseTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,15778700)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InverseTransform_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InverseTransform_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,15778700) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void wxTransform2D::Transform(wxPoint2DInt * pt) const
	static int _bind_Transform_overload_1(lua_State *L) {
		if (!_lg_typecheck_Transform_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTransform2D::Transform(wxPoint2DInt * pt) const function, expected prototype:\nvoid wxTransform2D::Transform(wxPoint2DInt * pt) const\nClass arguments details:\narg 1 ID = 81619599\n");
		}

		wxPoint2DInt* pt=(Luna< wxPoint2DInt >::check(L,2));

		wxTransform2D* self=(Luna< wxTransform2D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTransform2D::Transform(wxPoint2DInt *) const");
		}
		self->Transform(pt);

		return 0;
	}

	// void wxTransform2D::Transform(wxRect2DInt * r) const
	static int _bind_Transform_overload_2(lua_State *L) {
		if (!_lg_typecheck_Transform_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTransform2D::Transform(wxRect2DInt * r) const function, expected prototype:\nvoid wxTransform2D::Transform(wxRect2DInt * r) const\nClass arguments details:\narg 1 ID = 15778700\n");
		}

		wxRect2DInt* r=(Luna< wxRect2DInt >::check(L,2));

		wxTransform2D* self=(Luna< wxTransform2D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTransform2D::Transform(wxRect2DInt *) const");
		}
		self->Transform(r);

		return 0;
	}

	// wxPoint2DInt wxTransform2D::Transform(const wxPoint2DInt & pt) const
	static int _bind_Transform_overload_3(lua_State *L) {
		if (!_lg_typecheck_Transform_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint2DInt wxTransform2D::Transform(const wxPoint2DInt & pt) const function, expected prototype:\nwxPoint2DInt wxTransform2D::Transform(const wxPoint2DInt & pt) const\nClass arguments details:\narg 1 ID = 81619599\n");
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxTransform2D::Transform function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		wxTransform2D* self=(Luna< wxTransform2D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint2DInt wxTransform2D::Transform(const wxPoint2DInt &) const");
		}
		wxPoint2DInt stack_lret = self->Transform(pt);
		wxPoint2DInt* lret = new wxPoint2DInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DInt >::push(L,lret,true);

		return 1;
	}

	// wxRect2DInt wxTransform2D::Transform(const wxRect2DInt & r) const
	static int _bind_Transform_overload_4(lua_State *L) {
		if (!_lg_typecheck_Transform_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect2DInt wxTransform2D::Transform(const wxRect2DInt & r) const function, expected prototype:\nwxRect2DInt wxTransform2D::Transform(const wxRect2DInt & r) const\nClass arguments details:\narg 1 ID = 15778700\n");
		}

		const wxRect2DInt* r_ptr=(Luna< wxRect2DInt >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in wxTransform2D::Transform function");
		}
		const wxRect2DInt & r=*r_ptr;

		wxTransform2D* self=(Luna< wxTransform2D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect2DInt wxTransform2D::Transform(const wxRect2DInt &) const");
		}
		wxRect2DInt stack_lret = self->Transform(r);
		wxRect2DInt* lret = new wxRect2DInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect2DInt >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxTransform2D::Transform
	static int _bind_Transform(lua_State *L) {
		if (_lg_typecheck_Transform_overload_1(L)) return _bind_Transform_overload_1(L);
		if (_lg_typecheck_Transform_overload_2(L)) return _bind_Transform_overload_2(L);
		if (_lg_typecheck_Transform_overload_3(L)) return _bind_Transform_overload_3(L);
		if (_lg_typecheck_Transform_overload_4(L)) return _bind_Transform_overload_4(L);

		luaL_error(L, "error in function Transform, cannot match any of the overloads for function Transform:\n  Transform(wxPoint2DInt *)\n  Transform(wxRect2DInt *)\n  Transform(const wxPoint2DInt &)\n  Transform(const wxRect2DInt &)\n");
		return 0;
	}

	// void wxTransform2D::InverseTransform(wxPoint2DInt * pt) const
	static int _bind_InverseTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_InverseTransform_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTransform2D::InverseTransform(wxPoint2DInt * pt) const function, expected prototype:\nvoid wxTransform2D::InverseTransform(wxPoint2DInt * pt) const\nClass arguments details:\narg 1 ID = 81619599\n");
		}

		wxPoint2DInt* pt=(Luna< wxPoint2DInt >::check(L,2));

		wxTransform2D* self=(Luna< wxTransform2D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTransform2D::InverseTransform(wxPoint2DInt *) const");
		}
		self->InverseTransform(pt);

		return 0;
	}

	// void wxTransform2D::InverseTransform(wxRect2DInt * r) const
	static int _bind_InverseTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_InverseTransform_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTransform2D::InverseTransform(wxRect2DInt * r) const function, expected prototype:\nvoid wxTransform2D::InverseTransform(wxRect2DInt * r) const\nClass arguments details:\narg 1 ID = 15778700\n");
		}

		wxRect2DInt* r=(Luna< wxRect2DInt >::check(L,2));

		wxTransform2D* self=(Luna< wxTransform2D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTransform2D::InverseTransform(wxRect2DInt *) const");
		}
		self->InverseTransform(r);

		return 0;
	}

	// wxPoint2DInt wxTransform2D::InverseTransform(const wxPoint2DInt & pt) const
	static int _bind_InverseTransform_overload_3(lua_State *L) {
		if (!_lg_typecheck_InverseTransform_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint2DInt wxTransform2D::InverseTransform(const wxPoint2DInt & pt) const function, expected prototype:\nwxPoint2DInt wxTransform2D::InverseTransform(const wxPoint2DInt & pt) const\nClass arguments details:\narg 1 ID = 81619599\n");
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxTransform2D::InverseTransform function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		wxTransform2D* self=(Luna< wxTransform2D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint2DInt wxTransform2D::InverseTransform(const wxPoint2DInt &) const");
		}
		wxPoint2DInt stack_lret = self->InverseTransform(pt);
		wxPoint2DInt* lret = new wxPoint2DInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DInt >::push(L,lret,true);

		return 1;
	}

	// wxRect2DInt wxTransform2D::InverseTransform(const wxRect2DInt & r) const
	static int _bind_InverseTransform_overload_4(lua_State *L) {
		if (!_lg_typecheck_InverseTransform_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect2DInt wxTransform2D::InverseTransform(const wxRect2DInt & r) const function, expected prototype:\nwxRect2DInt wxTransform2D::InverseTransform(const wxRect2DInt & r) const\nClass arguments details:\narg 1 ID = 15778700\n");
		}

		const wxRect2DInt* r_ptr=(Luna< wxRect2DInt >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in wxTransform2D::InverseTransform function");
		}
		const wxRect2DInt & r=*r_ptr;

		wxTransform2D* self=(Luna< wxTransform2D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect2DInt wxTransform2D::InverseTransform(const wxRect2DInt &) const");
		}
		wxRect2DInt stack_lret = self->InverseTransform(r);
		wxRect2DInt* lret = new wxRect2DInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect2DInt >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxTransform2D::InverseTransform
	static int _bind_InverseTransform(lua_State *L) {
		if (_lg_typecheck_InverseTransform_overload_1(L)) return _bind_InverseTransform_overload_1(L);
		if (_lg_typecheck_InverseTransform_overload_2(L)) return _bind_InverseTransform_overload_2(L);
		if (_lg_typecheck_InverseTransform_overload_3(L)) return _bind_InverseTransform_overload_3(L);
		if (_lg_typecheck_InverseTransform_overload_4(L)) return _bind_InverseTransform_overload_4(L);

		luaL_error(L, "error in function InverseTransform, cannot match any of the overloads for function InverseTransform:\n  InverseTransform(wxPoint2DInt *)\n  InverseTransform(wxRect2DInt *)\n  InverseTransform(const wxPoint2DInt &)\n  InverseTransform(const wxRect2DInt &)\n");
		return 0;
	}


	// Operator binds:

};

wxTransform2D* LunaTraits< wxTransform2D >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxTransform2D::Transform(wxPoint2DInt * pt) const
	// void wxTransform2D::InverseTransform(wxPoint2DInt * pt) const

	// Abstract operators:
}

void LunaTraits< wxTransform2D >::_bind_dtor(wxTransform2D* obj) {
	delete obj;
}

const char LunaTraits< wxTransform2D >::className[] = "wxTransform2D";
const char LunaTraits< wxTransform2D >::fullName[] = "wxTransform2D";
const char LunaTraits< wxTransform2D >::moduleName[] = "wx";
const char* LunaTraits< wxTransform2D >::parents[] = {0};
const int LunaTraits< wxTransform2D >::hash = 13863894;
const int LunaTraits< wxTransform2D >::uniqueIDs[] = {13863894,0};

luna_RegType LunaTraits< wxTransform2D >::methods[] = {
	{"Transform", &luna_wrapper_wxTransform2D::_bind_Transform},
	{"InverseTransform", &luna_wrapper_wxTransform2D::_bind_InverseTransform},
	{"dynCast", &luna_wrapper_wxTransform2D::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxTransform2D >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTransform2D >::enumValues[] = {
	{0,0}
};


