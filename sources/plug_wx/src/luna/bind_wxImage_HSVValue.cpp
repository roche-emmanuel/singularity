#include <plug_common.h>

class luna_wrapper_wxImage_HSVValue {
public:
	typedef Luna< wxImage::HSVValue > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,41631892) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxImage::HSVValue*)");
		}

		wxImage::HSVValue* rhs =(Luna< wxImage::HSVValue >::check(L,2));
		wxImage::HSVValue* self=(Luna< wxImage::HSVValue >::check(L,1));
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

		wxImage::HSVValue* self=(Luna< wxImage::HSVValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxImage::HSVValue");
		
		return luna_dynamicCast(L,converters,"wxImage::HSVValue",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>3 ) return false;

		if( luatop>0 && lua_isnumber(L,1)==0 ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxImage::HSVValue::HSVValue(double h = 0.0, double s = 0.0, double v = 0.0)
	static wxImage::HSVValue* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImage::HSVValue::HSVValue(double h = 0.0, double s = 0.0, double v = 0.0) function, expected prototype:\nwxImage::HSVValue::HSVValue(double h = 0.0, double s = 0.0, double v = 0.0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double h=luatop>0 ? (double)lua_tonumber(L,1) : 0.0;
		double s=luatop>1 ? (double)lua_tonumber(L,2) : 0.0;
		double v=luatop>2 ? (double)lua_tonumber(L,3) : 0.0;

		return new wxImage::HSVValue(h, s, v);
	}


	// Function binds:

	// Operator binds:

};

wxImage::HSVValue* LunaTraits< wxImage::HSVValue >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxImage_HSVValue::_bind_ctor(L);
}

void LunaTraits< wxImage::HSVValue >::_bind_dtor(wxImage::HSVValue* obj) {
	delete obj;
}

const char LunaTraits< wxImage::HSVValue >::className[] = "HSVValue";
const char LunaTraits< wxImage::HSVValue >::fullName[] = "wxImage::HSVValue";
const char LunaTraits< wxImage::HSVValue >::moduleName[] = "wxImage";
const char* LunaTraits< wxImage::HSVValue >::parents[] = {0};
const int LunaTraits< wxImage::HSVValue >::hash = 41631892;
const int LunaTraits< wxImage::HSVValue >::uniqueIDs[] = {41631892,0};

luna_RegType LunaTraits< wxImage::HSVValue >::methods[] = {
	{"dynCast", &luna_wrapper_wxImage_HSVValue::_bind_dynCast},
	{"__eq", &luna_wrapper_wxImage_HSVValue::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxImage::HSVValue >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxImage::HSVValue >::enumValues[] = {
	{0,0}
};


