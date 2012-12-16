#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSplitterWindow.h>

class luna_wrapper_wxSplitterWindow {
public:
	typedef Luna< wxSplitterWindow > luna_t;

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
		//wxSplitterWindow* ptr= dynamic_cast< wxSplitterWindow* >(Luna< wxObject >::check(L,1));
		wxSplitterWindow* ptr= luna_caster< wxObject, wxSplitterWindow >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSplitterWindow >::push(L,ptr,false);
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

wxSplitterWindow* LunaTraits< wxSplitterWindow >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxSplitterWindow >::_bind_dtor(wxSplitterWindow* obj) {
	delete obj;
}

const char LunaTraits< wxSplitterWindow >::className[] = "wxSplitterWindow";
const char LunaTraits< wxSplitterWindow >::fullName[] = "wxSplitterWindow";
const char LunaTraits< wxSplitterWindow >::moduleName[] = "wx";
const char* LunaTraits< wxSplitterWindow >::parents[] = {"wx.wxWindow", 0};
const int LunaTraits< wxSplitterWindow >::hash = 51250253;
const int LunaTraits< wxSplitterWindow >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxSplitterWindow >::methods[] = {
	{"__eq", &luna_wrapper_wxSplitterWindow::_bind___eq},
	{"getTable", &luna_wrapper_wxSplitterWindow::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxSplitterWindow >::converters[] = {
	{"wxObject", &luna_wrapper_wxSplitterWindow::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSplitterWindow >::enumValues[] = {
	{0,0}
};


