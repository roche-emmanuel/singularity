#include <plug_common.h>

#include <luna/wrappers/wrapper_wxVariant.h>

class luna_wrapper_wxVariant {
public:
	typedef Luna< wxVariant > luna_t;

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
		
		luna_wrapper_base* wrapper = luna_caster<wxObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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
		//wxVariant* ptr= dynamic_cast< wxVariant* >(Luna< wxObject >::check(L,1));
		wxVariant* ptr= luna_caster< wxObject, wxVariant >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxVariant >::push(L,ptr,false);
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

wxVariant* LunaTraits< wxVariant >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxVariant >::_bind_dtor(wxVariant* obj) {
	delete obj;
}

const char LunaTraits< wxVariant >::className[] = "wxVariant";
const char LunaTraits< wxVariant >::fullName[] = "wxVariant";
const char LunaTraits< wxVariant >::moduleName[] = "wx";
const char* LunaTraits< wxVariant >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxVariant >::hash = 52623868;
const int LunaTraits< wxVariant >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxVariant >::methods[] = {
	{"__eq", &luna_wrapper_wxVariant::_bind___eq},
	{"getTable", &luna_wrapper_wxVariant::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxVariant >::converters[] = {
	{"wxObject", &luna_wrapper_wxVariant::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxVariant >::enumValues[] = {
	{0,0}
};


