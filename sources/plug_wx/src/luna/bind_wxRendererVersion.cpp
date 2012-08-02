#include <plug_common.h>

class luna_wrapper_wxRendererVersion {
public:
	typedef Luna< wxRendererVersion > luna_t;

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

		wxRendererVersion* self=(Luna< wxRendererVersion >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRendererVersion");
		
		return luna_dynamicCast(L,converters,"wxRendererVersion",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_IsCompatible(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,83336883) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static bool wxRendererVersion::IsCompatible(const wxRendererVersion & ver)
	static int _bind_IsCompatible(lua_State *L) {
		if (!_lg_typecheck_IsCompatible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool wxRendererVersion::IsCompatible(const wxRendererVersion & ver) function, expected prototype:\nstatic bool wxRendererVersion::IsCompatible(const wxRendererVersion & ver)\nClass arguments details:\narg 1 ID = 83336883\n");
		}

		const wxRendererVersion* ver_ptr=(Luna< wxRendererVersion >::check(L,1));
		if( !ver_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ver in wxRendererVersion::IsCompatible function");
		}
		const wxRendererVersion & ver=*ver_ptr;

		bool lret = wxRendererVersion::IsCompatible(ver);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxRendererVersion* LunaTraits< wxRendererVersion >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRendererVersion >::_bind_dtor(wxRendererVersion* obj) {
	delete obj;
}

const char LunaTraits< wxRendererVersion >::className[] = "wxRendererVersion";
const char LunaTraits< wxRendererVersion >::fullName[] = "wxRendererVersion";
const char LunaTraits< wxRendererVersion >::moduleName[] = "wx";
const char* LunaTraits< wxRendererVersion >::parents[] = {0};
const int LunaTraits< wxRendererVersion >::hash = 83336883;
const int LunaTraits< wxRendererVersion >::uniqueIDs[] = {83336883,0};

luna_RegType LunaTraits< wxRendererVersion >::methods[] = {
	{"IsCompatible", &luna_wrapper_wxRendererVersion::_bind_IsCompatible},
	{"dynCast", &luna_wrapper_wxRendererVersion::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxRendererVersion >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRendererVersion >::enumValues[] = {
	{0,0}
};


