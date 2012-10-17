#include <plug_common.h>

class luna_wrapper_wxZipNotifier {
public:
	typedef Luna< wxZipNotifier > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,49666072) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxZipNotifier*)");
		}

		wxZipNotifier* rhs =(Luna< wxZipNotifier >::check(L,2));
		wxZipNotifier* self=(Luna< wxZipNotifier >::check(L,1));
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

		wxZipNotifier* self=(Luna< wxZipNotifier >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxZipNotifier");
		
		return luna_dynamicCast(L,converters,"wxZipNotifier",name);
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxZipNotifier* LunaTraits< wxZipNotifier >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxZipNotifier::OnEntryUpdated(wxZipEntry & entry)

	// Abstract operators:
}

void LunaTraits< wxZipNotifier >::_bind_dtor(wxZipNotifier* obj) {
	delete obj;
}

const char LunaTraits< wxZipNotifier >::className[] = "wxZipNotifier";
const char LunaTraits< wxZipNotifier >::fullName[] = "wxZipNotifier";
const char LunaTraits< wxZipNotifier >::moduleName[] = "wx";
const char* LunaTraits< wxZipNotifier >::parents[] = {0};
const int LunaTraits< wxZipNotifier >::hash = 49666072;
const int LunaTraits< wxZipNotifier >::uniqueIDs[] = {49666072,0};

luna_RegType LunaTraits< wxZipNotifier >::methods[] = {
	{"dynCast", &luna_wrapper_wxZipNotifier::_bind_dynCast},
	{"__eq", &luna_wrapper_wxZipNotifier::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxZipNotifier >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxZipNotifier >::enumValues[] = {
	{0,0}
};


