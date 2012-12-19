#include <plug_common.h>

#include <luna/wrappers/wrapper_wxThreadEvent.h>

class luna_wrapper_wxThreadEvent {
public:
	typedef Luna< wxThreadEvent > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
		//wxThreadEvent* ptr= dynamic_cast< wxThreadEvent* >(Luna< wxObject >::check(L,1));
		wxThreadEvent* ptr= luna_caster< wxObject, wxThreadEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxThreadEvent >::push(L,ptr,false);
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

wxThreadEvent* LunaTraits< wxThreadEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxThreadEvent >::_bind_dtor(wxThreadEvent* obj) {
	delete obj;
}

const char LunaTraits< wxThreadEvent >::className[] = "wxThreadEvent";
const char LunaTraits< wxThreadEvent >::fullName[] = "wxThreadEvent";
const char LunaTraits< wxThreadEvent >::moduleName[] = "wx";
const char* LunaTraits< wxThreadEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxThreadEvent >::hash = 77612431;
const int LunaTraits< wxThreadEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxThreadEvent >::methods[] = {
	{"__eq", &luna_wrapper_wxThreadEvent::_bind___eq},
	{"getTable", &luna_wrapper_wxThreadEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxThreadEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxThreadEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxThreadEvent >::enumValues[] = {
	{0,0}
};


