#include <plug_common.h>

class luna_wrapper_wxWindowDisabler {
public:
	typedef Luna< wxWindowDisabler > luna_t;

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

		wxWindowDisabler* self=(Luna< wxWindowDisabler >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxWindowDisabler");
		
		return luna_dynamicCast(L,converters,"wxWindowDisabler",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_isboolean(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxWindowDisabler::wxWindowDisabler(bool disable = true)
	static wxWindowDisabler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindowDisabler::wxWindowDisabler(bool disable = true) function, expected prototype:\nwxWindowDisabler::wxWindowDisabler(bool disable = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool disable=luatop>0 ? (bool)(lua_toboolean(L,1)==1) : true;

		return new wxWindowDisabler(disable);
	}

	// wxWindowDisabler::wxWindowDisabler(wxWindow * winToSkip)
	static wxWindowDisabler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindowDisabler::wxWindowDisabler(wxWindow * winToSkip) function, expected prototype:\nwxWindowDisabler::wxWindowDisabler(wxWindow * winToSkip)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* winToSkip=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));

		return new wxWindowDisabler(winToSkip);
	}

	// Overload binder for wxWindowDisabler::wxWindowDisabler
	static wxWindowDisabler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxWindowDisabler, cannot match any of the overloads for function wxWindowDisabler:\n  wxWindowDisabler(bool)\n  wxWindowDisabler(wxWindow *)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

wxWindowDisabler* LunaTraits< wxWindowDisabler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxWindowDisabler::_bind_ctor(L);
}

void LunaTraits< wxWindowDisabler >::_bind_dtor(wxWindowDisabler* obj) {
	delete obj;
}

const char LunaTraits< wxWindowDisabler >::className[] = "wxWindowDisabler";
const char LunaTraits< wxWindowDisabler >::fullName[] = "wxWindowDisabler";
const char LunaTraits< wxWindowDisabler >::moduleName[] = "wx";
const char* LunaTraits< wxWindowDisabler >::parents[] = {0};
const int LunaTraits< wxWindowDisabler >::hash = 851961;
const int LunaTraits< wxWindowDisabler >::uniqueIDs[] = {851961,0};

luna_RegType LunaTraits< wxWindowDisabler >::methods[] = {
	{"dynCast", &luna_wrapper_wxWindowDisabler::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxWindowDisabler >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxWindowDisabler >::enumValues[] = {
	{0,0}
};


