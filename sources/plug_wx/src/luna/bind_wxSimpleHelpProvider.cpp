#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSimpleHelpProvider.h>

class luna_wrapper_wxSimpleHelpProvider {
public:
	typedef Luna< wxSimpleHelpProvider > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,7267466) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxHelpProvider*)");
		}

		wxHelpProvider* rhs =(Luna< wxHelpProvider >::check(L,2));
		wxHelpProvider* self=(Luna< wxHelpProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxHelpProvider(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxSimpleHelpProvider* ptr= dynamic_cast< wxSimpleHelpProvider* >(Luna< wxHelpProvider >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSimpleHelpProvider >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxSimpleHelpProvider* LunaTraits< wxSimpleHelpProvider >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxString wxHelpProvider::GetHelp(const wxWindow * window)
}

void LunaTraits< wxSimpleHelpProvider >::_bind_dtor(wxSimpleHelpProvider* obj) {
	delete obj;
}

const char LunaTraits< wxSimpleHelpProvider >::className[] = "wxSimpleHelpProvider";
const char LunaTraits< wxSimpleHelpProvider >::fullName[] = "wxSimpleHelpProvider";
const char LunaTraits< wxSimpleHelpProvider >::moduleName[] = "wx";
const char* LunaTraits< wxSimpleHelpProvider >::parents[] = {"wx.wxHelpProvider", 0};
const int LunaTraits< wxSimpleHelpProvider >::hash = 99505392;
const int LunaTraits< wxSimpleHelpProvider >::uniqueIDs[] = {7267466,0};

luna_RegType LunaTraits< wxSimpleHelpProvider >::methods[] = {
	{"__eq", &luna_wrapper_wxSimpleHelpProvider::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxSimpleHelpProvider >::converters[] = {
	{"wxHelpProvider", &luna_wrapper_wxSimpleHelpProvider::_cast_from_wxHelpProvider},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSimpleHelpProvider >::enumValues[] = {
	{0,0}
};


