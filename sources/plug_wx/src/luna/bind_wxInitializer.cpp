#include <plug_common.h>

class luna_wrapper_wxInitializer {
public:
	typedef Luna< wxInitializer > luna_t;

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

		wxInitializer* self=(Luna< wxInitializer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxInitializer");
		
		return luna_dynamicCast(L,converters,"wxInitializer",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// bool wxInitializer::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxInitializer::IsOk() const function, expected prototype:\nbool wxInitializer::IsOk() const\nClass arguments details:\n");
		}


		wxInitializer* self=(Luna< wxInitializer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxInitializer::IsOk() const");
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxInitializer* LunaTraits< wxInitializer >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxInitializer >::_bind_dtor(wxInitializer* obj) {
	delete obj;
}

const char LunaTraits< wxInitializer >::className[] = "wxInitializer";
const char LunaTraits< wxInitializer >::fullName[] = "wxInitializer";
const char LunaTraits< wxInitializer >::moduleName[] = "wx";
const char* LunaTraits< wxInitializer >::parents[] = {0};
const int LunaTraits< wxInitializer >::hash = 56719609;
const int LunaTraits< wxInitializer >::uniqueIDs[] = {56719609,0};

luna_RegType LunaTraits< wxInitializer >::methods[] = {
	{"IsOk", &luna_wrapper_wxInitializer::_bind_IsOk},
	{"dynCast", &luna_wrapper_wxInitializer::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxInitializer >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxInitializer >::enumValues[] = {
	{0,0}
};

