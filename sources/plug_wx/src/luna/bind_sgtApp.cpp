#include <plug_common.h>

class luna_wrapper_sgtApp {
public:
	typedef Luna< sgtApp > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxObject*)");
		}

		wxObject* rhs =(Luna< wxObject >::check(L,2));
		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		sgtApp* ptr= dynamic_cast< sgtApp* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgtApp >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTrackable(lua_State *L) {
		// all checked are already performed before reaching this point.
		sgtApp* ptr= static_cast< sgtApp* >(Luna< wxTrackable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgtApp >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxEventFilter(lua_State *L) {
		// all checked are already performed before reaching this point.
		sgtApp* ptr= dynamic_cast< sgtApp* >(Luna< wxEventFilter >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgtApp >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

sgtApp* LunaTraits< sgtApp >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< sgtApp >::_bind_dtor(sgtApp* obj) {
	delete obj;
}

const char LunaTraits< sgtApp >::className[] = "sgtApp";
const char LunaTraits< sgtApp >::fullName[] = "sgtApp";
const char LunaTraits< sgtApp >::moduleName[] = "wx";
const char* LunaTraits< sgtApp >::parents[] = {"wx.wxApp", 0};
const int LunaTraits< sgtApp >::hash = 90996666;
const int LunaTraits< sgtApp >::uniqueIDs[] = {56813631, 53506535, 81056638,0};

luna_RegType LunaTraits< sgtApp >::methods[] = {
	{"__eq", &luna_wrapper_sgtApp::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< sgtApp >::converters[] = {
	{"wxObject", &luna_wrapper_sgtApp::_cast_from_wxObject},
	{"wxTrackable", &luna_wrapper_sgtApp::_cast_from_wxTrackable},
	{"wxEventFilter", &luna_wrapper_sgtApp::_cast_from_wxEventFilter},
	{0,0}
};

luna_RegEnumType LunaTraits< sgtApp >::enumValues[] = {
	{0,0}
};


