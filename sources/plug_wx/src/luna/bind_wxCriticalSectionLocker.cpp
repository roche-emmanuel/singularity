#include <plug_common.h>

class luna_wrapper_wxCriticalSectionLocker {
public:
	typedef Luna< wxCriticalSectionLocker > luna_t;

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

		wxCriticalSectionLocker* self=(Luna< wxCriticalSectionLocker >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxCriticalSectionLocker");
		
		return luna_dynamicCast(L,converters,"wxCriticalSectionLocker",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50835119) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxCriticalSectionLocker::wxCriticalSectionLocker(wxCriticalSection & criticalsection)
	static wxCriticalSectionLocker* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCriticalSectionLocker::wxCriticalSectionLocker(wxCriticalSection & criticalsection) function, expected prototype:\nwxCriticalSectionLocker::wxCriticalSectionLocker(wxCriticalSection & criticalsection)\nClass arguments details:\narg 1 ID = 50835119\n");
		}

		wxCriticalSection* criticalsection_ptr=(Luna< wxCriticalSection >::check(L,1));
		if( !criticalsection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg criticalsection in wxCriticalSectionLocker::wxCriticalSectionLocker function");
		}
		wxCriticalSection & criticalsection=*criticalsection_ptr;

		return new wxCriticalSectionLocker(criticalsection);
	}


	// Function binds:

	// Operator binds:

};

wxCriticalSectionLocker* LunaTraits< wxCriticalSectionLocker >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxCriticalSectionLocker::_bind_ctor(L);
}

void LunaTraits< wxCriticalSectionLocker >::_bind_dtor(wxCriticalSectionLocker* obj) {
	delete obj;
}

const char LunaTraits< wxCriticalSectionLocker >::className[] = "wxCriticalSectionLocker";
const char LunaTraits< wxCriticalSectionLocker >::fullName[] = "wxCriticalSectionLocker";
const char LunaTraits< wxCriticalSectionLocker >::moduleName[] = "wx";
const char* LunaTraits< wxCriticalSectionLocker >::parents[] = {0};
const int LunaTraits< wxCriticalSectionLocker >::hash = 74790888;
const int LunaTraits< wxCriticalSectionLocker >::uniqueIDs[] = {74790888,0};

luna_RegType LunaTraits< wxCriticalSectionLocker >::methods[] = {
	{"dynCast", &luna_wrapper_wxCriticalSectionLocker::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxCriticalSectionLocker >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxCriticalSectionLocker >::enumValues[] = {
	{0,0}
};

