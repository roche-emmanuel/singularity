#include <plug_common.h>

class luna_wrapper_wxTextAttrDimensionConverter {
public:
	typedef Luna< wxTextAttrDimensionConverter > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,6148370) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTextAttrDimensionConverter*)");
		}

		wxTextAttrDimensionConverter* rhs =(Luna< wxTextAttrDimensionConverter >::check(L,2));
		wxTextAttrDimensionConverter* self=(Luna< wxTextAttrDimensionConverter >::check(L,1));
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

		wxTextAttrDimensionConverter* self=(Luna< wxTextAttrDimensionConverter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTextAttrDimensionConverter");
		
		return luna_dynamicCast(L,converters,"wxTextAttrDimensionConverter",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxDC >(L,1))) ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( luatop>2 && (!(Luna< wxSize >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( luatop>2 && (!(Luna< wxSize >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetPixels(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25580455) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTenthsMM(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25580455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ConvertTenthsMMToPixels(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ConvertPixelsToTenthsMM(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTextAttrDimensionConverter::wxTextAttrDimensionConverter(wxDC & dc, double scale = 1.0, const wxSize & parentSize = wxDefaultSize)
	static wxTextAttrDimensionConverter* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrDimensionConverter::wxTextAttrDimensionConverter(wxDC & dc, double scale = 1.0, const wxSize & parentSize = wxDefaultSize) function, expected prototype:\nwxTextAttrDimensionConverter::wxTextAttrDimensionConverter(wxDC & dc, double scale = 1.0, const wxSize & parentSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,1));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxTextAttrDimensionConverter::wxTextAttrDimensionConverter function");
		}
		wxDC & dc=*dc_ptr;
		double scale=luatop>1 ? (double)lua_tonumber(L,2) : 1.0;
		const wxSize* parentSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !parentSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parentSize in wxTextAttrDimensionConverter::wxTextAttrDimensionConverter function");
		}
		const wxSize & parentSize=luatop>2 ? *parentSize_ptr : wxDefaultSize;

		return new wxTextAttrDimensionConverter(dc, scale, parentSize);
	}

	// wxTextAttrDimensionConverter::wxTextAttrDimensionConverter(int ppi, double scale = 1.0, const wxSize & parentSize = wxDefaultSize)
	static wxTextAttrDimensionConverter* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrDimensionConverter::wxTextAttrDimensionConverter(int ppi, double scale = 1.0, const wxSize & parentSize = wxDefaultSize) function, expected prototype:\nwxTextAttrDimensionConverter::wxTextAttrDimensionConverter(int ppi, double scale = 1.0, const wxSize & parentSize = wxDefaultSize)\nClass arguments details:\narg 3 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		int ppi=(int)lua_tointeger(L,1);
		double scale=luatop>1 ? (double)lua_tonumber(L,2) : 1.0;
		const wxSize* parentSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !parentSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parentSize in wxTextAttrDimensionConverter::wxTextAttrDimensionConverter function");
		}
		const wxSize & parentSize=luatop>2 ? *parentSize_ptr : wxDefaultSize;

		return new wxTextAttrDimensionConverter(ppi, scale, parentSize);
	}

	// Overload binder for wxTextAttrDimensionConverter::wxTextAttrDimensionConverter
	static wxTextAttrDimensionConverter* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxTextAttrDimensionConverter, cannot match any of the overloads for function wxTextAttrDimensionConverter:\n  wxTextAttrDimensionConverter(wxDC &, double, const wxSize &)\n  wxTextAttrDimensionConverter(int, double, const wxSize &)\n");
		return NULL;
	}


	// Function binds:
	// int wxTextAttrDimensionConverter::GetPixels(const wxTextAttrDimension & dim, int direction = ::wxHORIZONTAL) const
	static int _bind_GetPixels(lua_State *L) {
		if (!_lg_typecheck_GetPixels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTextAttrDimensionConverter::GetPixels(const wxTextAttrDimension & dim, int direction = ::wxHORIZONTAL) const function, expected prototype:\nint wxTextAttrDimensionConverter::GetPixels(const wxTextAttrDimension & dim, int direction = ::wxHORIZONTAL) const\nClass arguments details:\narg 1 ID = 25580455\n");
		}

		int luatop = lua_gettop(L);

		const wxTextAttrDimension* dim_ptr=(Luna< wxTextAttrDimension >::check(L,2));
		if( !dim_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dim in wxTextAttrDimensionConverter::GetPixels function");
		}
		const wxTextAttrDimension & dim=*dim_ptr;
		int direction=luatop>2 ? (int)lua_tointeger(L,3) : ::wxHORIZONTAL;

		wxTextAttrDimensionConverter* self=(Luna< wxTextAttrDimensionConverter >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTextAttrDimensionConverter::GetPixels(const wxTextAttrDimension &, int) const. Got : '%s'",typeid(Luna< wxTextAttrDimensionConverter >::check(L,1)).name());
		}
		int lret = self->GetPixels(dim, direction);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTextAttrDimensionConverter::GetTenthsMM(const wxTextAttrDimension & dim) const
	static int _bind_GetTenthsMM(lua_State *L) {
		if (!_lg_typecheck_GetTenthsMM(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTextAttrDimensionConverter::GetTenthsMM(const wxTextAttrDimension & dim) const function, expected prototype:\nint wxTextAttrDimensionConverter::GetTenthsMM(const wxTextAttrDimension & dim) const\nClass arguments details:\narg 1 ID = 25580455\n");
		}

		const wxTextAttrDimension* dim_ptr=(Luna< wxTextAttrDimension >::check(L,2));
		if( !dim_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dim in wxTextAttrDimensionConverter::GetTenthsMM function");
		}
		const wxTextAttrDimension & dim=*dim_ptr;

		wxTextAttrDimensionConverter* self=(Luna< wxTextAttrDimensionConverter >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTextAttrDimensionConverter::GetTenthsMM(const wxTextAttrDimension &) const. Got : '%s'",typeid(Luna< wxTextAttrDimensionConverter >::check(L,1)).name());
		}
		int lret = self->GetTenthsMM(dim);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTextAttrDimensionConverter::ConvertTenthsMMToPixels(int units) const
	static int _bind_ConvertTenthsMMToPixels(lua_State *L) {
		if (!_lg_typecheck_ConvertTenthsMMToPixels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTextAttrDimensionConverter::ConvertTenthsMMToPixels(int units) const function, expected prototype:\nint wxTextAttrDimensionConverter::ConvertTenthsMMToPixels(int units) const\nClass arguments details:\n");
		}

		int units=(int)lua_tointeger(L,2);

		wxTextAttrDimensionConverter* self=(Luna< wxTextAttrDimensionConverter >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTextAttrDimensionConverter::ConvertTenthsMMToPixels(int) const. Got : '%s'",typeid(Luna< wxTextAttrDimensionConverter >::check(L,1)).name());
		}
		int lret = self->ConvertTenthsMMToPixels(units);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTextAttrDimensionConverter::ConvertPixelsToTenthsMM(int pixels) const
	static int _bind_ConvertPixelsToTenthsMM(lua_State *L) {
		if (!_lg_typecheck_ConvertPixelsToTenthsMM(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTextAttrDimensionConverter::ConvertPixelsToTenthsMM(int pixels) const function, expected prototype:\nint wxTextAttrDimensionConverter::ConvertPixelsToTenthsMM(int pixels) const\nClass arguments details:\n");
		}

		int pixels=(int)lua_tointeger(L,2);

		wxTextAttrDimensionConverter* self=(Luna< wxTextAttrDimensionConverter >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTextAttrDimensionConverter::ConvertPixelsToTenthsMM(int) const. Got : '%s'",typeid(Luna< wxTextAttrDimensionConverter >::check(L,1)).name());
		}
		int lret = self->ConvertPixelsToTenthsMM(pixels);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxTextAttrDimensionConverter* LunaTraits< wxTextAttrDimensionConverter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTextAttrDimensionConverter::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxTextAttrDimensionConverter >::_bind_dtor(wxTextAttrDimensionConverter* obj) {
	delete obj;
}

const char LunaTraits< wxTextAttrDimensionConverter >::className[] = "wxTextAttrDimensionConverter";
const char LunaTraits< wxTextAttrDimensionConverter >::fullName[] = "wxTextAttrDimensionConverter";
const char LunaTraits< wxTextAttrDimensionConverter >::moduleName[] = "wx";
const char* LunaTraits< wxTextAttrDimensionConverter >::parents[] = {0};
const int LunaTraits< wxTextAttrDimensionConverter >::hash = 6148370;
const int LunaTraits< wxTextAttrDimensionConverter >::uniqueIDs[] = {6148370,0};

luna_RegType LunaTraits< wxTextAttrDimensionConverter >::methods[] = {
	{"GetPixels", &luna_wrapper_wxTextAttrDimensionConverter::_bind_GetPixels},
	{"GetTenthsMM", &luna_wrapper_wxTextAttrDimensionConverter::_bind_GetTenthsMM},
	{"ConvertTenthsMMToPixels", &luna_wrapper_wxTextAttrDimensionConverter::_bind_ConvertTenthsMMToPixels},
	{"ConvertPixelsToTenthsMM", &luna_wrapper_wxTextAttrDimensionConverter::_bind_ConvertPixelsToTenthsMM},
	{"dynCast", &luna_wrapper_wxTextAttrDimensionConverter::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTextAttrDimensionConverter::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxTextAttrDimensionConverter >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTextAttrDimensionConverter >::enumValues[] = {
	{0,0}
};


