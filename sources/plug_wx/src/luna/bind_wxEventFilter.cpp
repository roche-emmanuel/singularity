#include <plug_common.h>

#include <luna/wrappers/wrapper_wxEventFilter.h>

class luna_wrapper_wxEventFilter {
public:
	typedef Luna< wxEventFilter > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81056638) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxEventFilter*)");
		}

		wxEventFilter* rhs =(Luna< wxEventFilter >::check(L,2));
		wxEventFilter* self=(Luna< wxEventFilter >::check(L,1));
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

		wxEventFilter* self=(Luna< wxEventFilter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxEventFilter");
		
		return luna_dynamicCast(L,converters,"wxEventFilter",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_FilterEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// int wxEventFilter::FilterEvent(wxEvent & event)
	static int _bind_FilterEvent(lua_State *L) {
		if (!_lg_typecheck_FilterEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxEventFilter::FilterEvent(wxEvent & event) function, expected prototype:\nint wxEventFilter::FilterEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxEventFilter::FilterEvent function");
		}
		wxEvent & event=*event_ptr;

		wxEventFilter* self=(Luna< wxEventFilter >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxEventFilter::FilterEvent(wxEvent &)");
		}
		int lret = self->FilterEvent(event);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxEventFilter* LunaTraits< wxEventFilter >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// int wxEventFilter::FilterEvent(wxEvent & event)
}

void LunaTraits< wxEventFilter >::_bind_dtor(wxEventFilter* obj) {
	delete obj;
}

const char LunaTraits< wxEventFilter >::className[] = "wxEventFilter";
const char LunaTraits< wxEventFilter >::fullName[] = "wxEventFilter";
const char LunaTraits< wxEventFilter >::moduleName[] = "wx";
const char* LunaTraits< wxEventFilter >::parents[] = {0};
const int LunaTraits< wxEventFilter >::hash = 81056638;
const int LunaTraits< wxEventFilter >::uniqueIDs[] = {81056638,0};

luna_RegType LunaTraits< wxEventFilter >::methods[] = {
	{"FilterEvent", &luna_wrapper_wxEventFilter::_bind_FilterEvent},
	{"dynCast", &luna_wrapper_wxEventFilter::_bind_dynCast},
	{"__eq", &luna_wrapper_wxEventFilter::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxEventFilter >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxEventFilter >::enumValues[] = {
	{"Event_Skip", wxEventFilter::Event_Skip},
	{"Event_Ignore", wxEventFilter::Event_Ignore},
	{"Event_Processed", wxEventFilter::Event_Processed},
	{0,0}
};


