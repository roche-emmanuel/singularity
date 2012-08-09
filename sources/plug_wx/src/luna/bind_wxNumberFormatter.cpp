#include <plug_common.h>

class luna_wrapper_wxNumberFormatter {
public:
	typedef Luna< wxNumberFormatter > luna_t;

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

		wxNumberFormatter* self=(Luna< wxNumberFormatter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxNumberFormatter");
		
		return luna_dynamicCast(L,converters,"wxNumberFormatter",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_ToString_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ToString_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FromString_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FromString_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static wxString wxNumberFormatter::ToString(long val, int flags = wxNumberFormatter::Style_WithThousandsSep)
	static int _bind_ToString_overload_1(lua_State *L) {
		if (!_lg_typecheck_ToString_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxString wxNumberFormatter::ToString(long val, int flags = wxNumberFormatter::Style_WithThousandsSep) function, expected prototype:\nstatic wxString wxNumberFormatter::ToString(long val, int flags = wxNumberFormatter::Style_WithThousandsSep)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long val=(long)lua_tointeger(L,1);
		int flags=luatop>1 ? (int)lua_tointeger(L,2) : wxNumberFormatter::Style_WithThousandsSep;

		wxString lret = wxNumberFormatter::ToString(val, flags);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxNumberFormatter::ToString(double val, int precision, int flags = wxNumberFormatter::Style_WithThousandsSep)
	static int _bind_ToString_overload_2(lua_State *L) {
		if (!_lg_typecheck_ToString_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxString wxNumberFormatter::ToString(double val, int precision, int flags = wxNumberFormatter::Style_WithThousandsSep) function, expected prototype:\nstatic wxString wxNumberFormatter::ToString(double val, int precision, int flags = wxNumberFormatter::Style_WithThousandsSep)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double val=(double)lua_tonumber(L,1);
		int precision=(int)lua_tointeger(L,2);
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : wxNumberFormatter::Style_WithThousandsSep;

		wxString lret = wxNumberFormatter::ToString(val, precision, flags);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// Overload binder for wxNumberFormatter::ToString
	static int _bind_ToString(lua_State *L) {
		if (_lg_typecheck_ToString_overload_1(L)) return _bind_ToString_overload_1(L);
		if (_lg_typecheck_ToString_overload_2(L)) return _bind_ToString_overload_2(L);

		luaL_error(L, "error in function ToString, cannot match any of the overloads for function ToString:\n  ToString(long, int)\n  ToString(double, int, int)\n");
		return 0;
	}

	// static bool wxNumberFormatter::FromString(wxString s, long * val)
	static int _bind_FromString_overload_1(lua_State *L) {
		if (!_lg_typecheck_FromString_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool wxNumberFormatter::FromString(wxString s, long * val) function, expected prototype:\nstatic bool wxNumberFormatter::FromString(wxString s, long * val)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString s(lua_tostring(L,1),lua_objlen(L,1));
		long val=(long)lua_tointeger(L,2);

		bool lret = wxNumberFormatter::FromString(s, &val);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxNumberFormatter::FromString(wxString s, double * val)
	static int _bind_FromString_overload_2(lua_State *L) {
		if (!_lg_typecheck_FromString_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool wxNumberFormatter::FromString(wxString s, double * val) function, expected prototype:\nstatic bool wxNumberFormatter::FromString(wxString s, double * val)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString s(lua_tostring(L,1),lua_objlen(L,1));
		double val=(double)lua_tonumber(L,2);

		bool lret = wxNumberFormatter::FromString(s, &val);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxNumberFormatter::FromString
	static int _bind_FromString(lua_State *L) {
		if (_lg_typecheck_FromString_overload_1(L)) return _bind_FromString_overload_1(L);
		if (_lg_typecheck_FromString_overload_2(L)) return _bind_FromString_overload_2(L);

		luaL_error(L, "error in function FromString, cannot match any of the overloads for function FromString:\n  FromString(wxString, long *)\n  FromString(wxString, double *)\n");
		return 0;
	}


	// Operator binds:

};

wxNumberFormatter* LunaTraits< wxNumberFormatter >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxNumberFormatter >::_bind_dtor(wxNumberFormatter* obj) {
	delete obj;
}

const char LunaTraits< wxNumberFormatter >::className[] = "wxNumberFormatter";
const char LunaTraits< wxNumberFormatter >::fullName[] = "wxNumberFormatter";
const char LunaTraits< wxNumberFormatter >::moduleName[] = "wx";
const char* LunaTraits< wxNumberFormatter >::parents[] = {0};
const int LunaTraits< wxNumberFormatter >::hash = 27021326;
const int LunaTraits< wxNumberFormatter >::uniqueIDs[] = {27021326,0};

luna_RegType LunaTraits< wxNumberFormatter >::methods[] = {
	{"ToString", &luna_wrapper_wxNumberFormatter::_bind_ToString},
	{"FromString", &luna_wrapper_wxNumberFormatter::_bind_FromString},
	{"dynCast", &luna_wrapper_wxNumberFormatter::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxNumberFormatter >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxNumberFormatter >::enumValues[] = {
	{"Style_None", wxNumberFormatter::Style_None},
	{"Style_WithThousandsSep", wxNumberFormatter::Style_WithThousandsSep},
	{"Style_NoTrailingZeroes", wxNumberFormatter::Style_NoTrailingZeroes},
	{0,0}
};

