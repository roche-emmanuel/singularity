#include <plug_common.h>

class luna_wrapper_wxRecursionGuard {
public:
	typedef Luna< wxRecursionGuard > luna_t;

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

		wxRecursionGuard* self=(Luna< wxRecursionGuard >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRecursionGuard");
		
		return luna_dynamicCast(L,converters,"wxRecursionGuard",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,7196007) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_IsInside(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxRecursionGuard::wxRecursionGuard(wxRecursionGuardFlag & flag)
	static wxRecursionGuard* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRecursionGuard::wxRecursionGuard(wxRecursionGuardFlag & flag) function, expected prototype:\nwxRecursionGuard::wxRecursionGuard(wxRecursionGuardFlag & flag)\nClass arguments details:\narg 1 ID = 7196007\n");
		}

		wxRecursionGuardFlag* flag_ptr=(Luna< wxRecursionGuardFlag >::check(L,1));
		if( !flag_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flag in wxRecursionGuard::wxRecursionGuard function");
		}
		wxRecursionGuardFlag & flag=*flag_ptr;

		return new wxRecursionGuard(flag);
	}


	// Function binds:
	// bool wxRecursionGuard::IsInside() const
	static int _bind_IsInside(lua_State *L) {
		if (!_lg_typecheck_IsInside(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRecursionGuard::IsInside() const function, expected prototype:\nbool wxRecursionGuard::IsInside() const\nClass arguments details:\n");
		}


		wxRecursionGuard* self=(Luna< wxRecursionGuard >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRecursionGuard::IsInside() const");
		}
		bool lret = self->IsInside();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxRecursionGuard* LunaTraits< wxRecursionGuard >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRecursionGuard::_bind_ctor(L);
}

void LunaTraits< wxRecursionGuard >::_bind_dtor(wxRecursionGuard* obj) {
	delete obj;
}

const char LunaTraits< wxRecursionGuard >::className[] = "wxRecursionGuard";
const char LunaTraits< wxRecursionGuard >::fullName[] = "wxRecursionGuard";
const char LunaTraits< wxRecursionGuard >::moduleName[] = "wx";
const char* LunaTraits< wxRecursionGuard >::parents[] = {0};
const int LunaTraits< wxRecursionGuard >::hash = 25025537;
const int LunaTraits< wxRecursionGuard >::uniqueIDs[] = {25025537,0};

luna_RegType LunaTraits< wxRecursionGuard >::methods[] = {
	{"IsInside", &luna_wrapper_wxRecursionGuard::_bind_IsInside},
	{"dynCast", &luna_wrapper_wxRecursionGuard::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxRecursionGuard >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRecursionGuard >::enumValues[] = {
	{0,0}
};

