#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSplitterEvent.h>

class luna_wrapper_wxSplitterEvent {
public:
	typedef Luna< wxSplitterEvent > luna_t;

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
		//wxSplitterEvent* ptr= dynamic_cast< wxSplitterEvent* >(Luna< wxObject >::check(L,1));
		wxSplitterEvent* ptr= luna_caster< wxObject, wxSplitterEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSplitterEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxSplitterEvent* LunaTraits< wxSplitterEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxSplitterEvent >::_bind_dtor(wxSplitterEvent* obj) {
	delete obj;
}

const char LunaTraits< wxSplitterEvent >::className[] = "wxSplitterEvent";
const char LunaTraits< wxSplitterEvent >::fullName[] = "wxSplitterEvent";
const char LunaTraits< wxSplitterEvent >::moduleName[] = "wx";
const char* LunaTraits< wxSplitterEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxSplitterEvent >::hash = 98312044;
const int LunaTraits< wxSplitterEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSplitterEvent >::methods[] = {
	{"__eq", &luna_wrapper_wxSplitterEvent::_bind___eq},
	{"getTable", &luna_wrapper_wxSplitterEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxSplitterEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxSplitterEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSplitterEvent >::enumValues[] = {
	{0,0}
};


