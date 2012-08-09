#include <plug_common.h>

class luna_wrapper_wxMatrix2D {
public:
	typedef Luna< wxMatrix2D > luna_t;

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

		wxMatrix2D* self=(Luna< wxMatrix2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxMatrix2D");
		
		return luna_dynamicCast(L,converters,"wxMatrix2D",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>4 ) return false;

		if( luatop>0 && lua_isnumber(L,1)==0 ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMatrix2D::wxMatrix2D(double v11 = 1, double v12 = 0, double v21 = 0, double v22 = 1)
	static wxMatrix2D* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMatrix2D::wxMatrix2D(double v11 = 1, double v12 = 0, double v21 = 0, double v22 = 1) function, expected prototype:\nwxMatrix2D::wxMatrix2D(double v11 = 1, double v12 = 0, double v21 = 0, double v22 = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double v11=luatop>0 ? (double)lua_tonumber(L,1) : 1;
		double v12=luatop>1 ? (double)lua_tonumber(L,2) : 0;
		double v21=luatop>2 ? (double)lua_tonumber(L,3) : 0;
		double v22=luatop>3 ? (double)lua_tonumber(L,4) : 1;

		return new wxMatrix2D(v11, v12, v21, v22);
	}


	// Function binds:

	// Operator binds:

};

wxMatrix2D* LunaTraits< wxMatrix2D >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMatrix2D::_bind_ctor(L);
}

void LunaTraits< wxMatrix2D >::_bind_dtor(wxMatrix2D* obj) {
	delete obj;
}

const char LunaTraits< wxMatrix2D >::className[] = "wxMatrix2D";
const char LunaTraits< wxMatrix2D >::fullName[] = "wxMatrix2D";
const char LunaTraits< wxMatrix2D >::moduleName[] = "wx";
const char* LunaTraits< wxMatrix2D >::parents[] = {0};
const int LunaTraits< wxMatrix2D >::hash = 83648097;
const int LunaTraits< wxMatrix2D >::uniqueIDs[] = {83648097,0};

luna_RegType LunaTraits< wxMatrix2D >::methods[] = {
	{"dynCast", &luna_wrapper_wxMatrix2D::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxMatrix2D >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxMatrix2D >::enumValues[] = {
	{0,0}
};

