#include <plug_common.h>

class luna_wrapper_wxCollapsiblePaneEvent {
public:
	typedef Luna< wxCollapsiblePaneEvent > luna_t;

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
		wxCollapsiblePaneEvent* ptr= dynamic_cast< wxCollapsiblePaneEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxCollapsiblePaneEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetCollapsed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCollapsed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxCollapsiblePaneEvent::GetCollapsed() const
	static int _bind_GetCollapsed(lua_State *L) {
		if (!_lg_typecheck_GetCollapsed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCollapsiblePaneEvent::GetCollapsed() const function, expected prototype:\nbool wxCollapsiblePaneEvent::GetCollapsed() const\nClass arguments details:\n");
		}


		wxCollapsiblePaneEvent* self=dynamic_cast< wxCollapsiblePaneEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCollapsiblePaneEvent::GetCollapsed() const");
		}
		bool lret = self->GetCollapsed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxCollapsiblePaneEvent::SetCollapsed(bool collapsed)
	static int _bind_SetCollapsed(lua_State *L) {
		if (!_lg_typecheck_SetCollapsed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCollapsiblePaneEvent::SetCollapsed(bool collapsed) function, expected prototype:\nvoid wxCollapsiblePaneEvent::SetCollapsed(bool collapsed)\nClass arguments details:\n");
		}

		bool collapsed=(bool)(lua_toboolean(L,2)==1);

		wxCollapsiblePaneEvent* self=dynamic_cast< wxCollapsiblePaneEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCollapsiblePaneEvent::SetCollapsed(bool)");
		}
		self->SetCollapsed(collapsed);

		return 0;
	}


	// Operator binds:

};

wxCollapsiblePaneEvent* LunaTraits< wxCollapsiblePaneEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxCollapsiblePaneEvent >::_bind_dtor(wxCollapsiblePaneEvent* obj) {
	delete obj;
}

const char LunaTraits< wxCollapsiblePaneEvent >::className[] = "wxCollapsiblePaneEvent";
const char LunaTraits< wxCollapsiblePaneEvent >::fullName[] = "wxCollapsiblePaneEvent";
const char LunaTraits< wxCollapsiblePaneEvent >::moduleName[] = "wx";
const char* LunaTraits< wxCollapsiblePaneEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxCollapsiblePaneEvent >::hash = 4452642;
const int LunaTraits< wxCollapsiblePaneEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxCollapsiblePaneEvent >::methods[] = {
	{"GetCollapsed", &luna_wrapper_wxCollapsiblePaneEvent::_bind_GetCollapsed},
	{"SetCollapsed", &luna_wrapper_wxCollapsiblePaneEvent::_bind_SetCollapsed},
	{"__eq", &luna_wrapper_wxCollapsiblePaneEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxCollapsiblePaneEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxCollapsiblePaneEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxCollapsiblePaneEvent >::enumValues[] = {
	{0,0}
};


