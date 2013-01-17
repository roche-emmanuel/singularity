#include <plug_common.h>

class luna_wrapper_wxDCClipper {
public:
	typedef Luna< wxDCClipper > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,36406952) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDCClipper*)");
		}

		wxDCClipper* rhs =(Luna< wxDCClipper >::check(L,2));
		wxDCClipper* self=(Luna< wxDCClipper >::check(L,1));
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

		wxDCClipper* self=(Luna< wxDCClipper >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDCClipper");
		
		return luna_dynamicCast(L,converters,"wxDCClipper",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxDC >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxRegion >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxDC >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (!(Luna< wxRect >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxDC >(L,1))) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDCClipper::wxDCClipper(wxDC & dc, const wxRegion & region)
	static wxDCClipper* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDCClipper::wxDCClipper(wxDC & dc, const wxRegion & region) function, expected prototype:\nwxDCClipper::wxDCClipper(wxDC & dc, const wxRegion & region)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,1));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDCClipper::wxDCClipper function");
		}
		wxDC & dc=*dc_ptr;
		const wxRegion* region_ptr=(Luna< wxObject >::checkSubType< wxRegion >(L,2));
		if( !region_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg region in wxDCClipper::wxDCClipper function");
		}
		const wxRegion & region=*region_ptr;

		return new wxDCClipper(dc, region);
	}

	// wxDCClipper::wxDCClipper(wxDC & dc, const wxRect & rect)
	static wxDCClipper* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDCClipper::wxDCClipper(wxDC & dc, const wxRect & rect) function, expected prototype:\nwxDCClipper::wxDCClipper(wxDC & dc, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 20234418\n");
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,1));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDCClipper::wxDCClipper function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDCClipper::wxDCClipper function");
		}
		const wxRect & rect=*rect_ptr;

		return new wxDCClipper(dc, rect);
	}

	// wxDCClipper::wxDCClipper(wxDC & dc, int x, int y, int w, int h)
	static wxDCClipper* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDCClipper::wxDCClipper(wxDC & dc, int x, int y, int w, int h) function, expected prototype:\nwxDCClipper::wxDCClipper(wxDC & dc, int x, int y, int w, int h)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,1));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDCClipper::wxDCClipper function");
		}
		wxDC & dc=*dc_ptr;
		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int w=(int)lua_tointeger(L,4);
		int h=(int)lua_tointeger(L,5);

		return new wxDCClipper(dc, x, y, w, h);
	}

	// Overload binder for wxDCClipper::wxDCClipper
	static wxDCClipper* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function wxDCClipper, cannot match any of the overloads for function wxDCClipper:\n  wxDCClipper(wxDC &, const wxRegion &)\n  wxDCClipper(wxDC &, const wxRect &)\n  wxDCClipper(wxDC &, int, int, int, int)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

wxDCClipper* LunaTraits< wxDCClipper >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDCClipper::_bind_ctor(L);
}

void LunaTraits< wxDCClipper >::_bind_dtor(wxDCClipper* obj) {
	delete obj;
}

const char LunaTraits< wxDCClipper >::className[] = "wxDCClipper";
const char LunaTraits< wxDCClipper >::fullName[] = "wxDCClipper";
const char LunaTraits< wxDCClipper >::moduleName[] = "wx";
const char* LunaTraits< wxDCClipper >::parents[] = {0};
const int LunaTraits< wxDCClipper >::hash = 36406952;
const int LunaTraits< wxDCClipper >::uniqueIDs[] = {36406952,0};

luna_RegType LunaTraits< wxDCClipper >::methods[] = {
	{"dynCast", &luna_wrapper_wxDCClipper::_bind_dynCast},
	{"__eq", &luna_wrapper_wxDCClipper::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxDCClipper >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDCClipper >::enumValues[] = {
	{0,0}
};


