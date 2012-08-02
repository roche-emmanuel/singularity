#include <plug_common.h>

class luna_wrapper_wxWindowUpdateLocker {
public:
	typedef Luna< wxWindowUpdateLocker > luna_t;

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

		wxWindowUpdateLocker* self=(Luna< wxWindowUpdateLocker >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxWindowUpdateLocker");
		
		return luna_dynamicCast(L,converters,"wxWindowUpdateLocker",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxWindowUpdateLocker::wxWindowUpdateLocker(wxWindow * win)
	static wxWindowUpdateLocker* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindowUpdateLocker::wxWindowUpdateLocker(wxWindow * win) function, expected prototype:\nwxWindowUpdateLocker::wxWindowUpdateLocker(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));

		return new wxWindowUpdateLocker(win);
	}


	// Function binds:

	// Operator binds:

};

wxWindowUpdateLocker* LunaTraits< wxWindowUpdateLocker >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxWindowUpdateLocker::_bind_ctor(L);
}

void LunaTraits< wxWindowUpdateLocker >::_bind_dtor(wxWindowUpdateLocker* obj) {
	delete obj;
}

const char LunaTraits< wxWindowUpdateLocker >::className[] = "wxWindowUpdateLocker";
const char LunaTraits< wxWindowUpdateLocker >::fullName[] = "wxWindowUpdateLocker";
const char LunaTraits< wxWindowUpdateLocker >::moduleName[] = "wx";
const char* LunaTraits< wxWindowUpdateLocker >::parents[] = {0};
const int LunaTraits< wxWindowUpdateLocker >::hash = 69362373;
const int LunaTraits< wxWindowUpdateLocker >::uniqueIDs[] = {69362373,0};

luna_RegType LunaTraits< wxWindowUpdateLocker >::methods[] = {
	{"dynCast", &luna_wrapper_wxWindowUpdateLocker::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxWindowUpdateLocker >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxWindowUpdateLocker >::enumValues[] = {
	{0,0}
};


