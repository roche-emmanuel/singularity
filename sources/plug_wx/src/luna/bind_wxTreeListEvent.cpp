#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTreeListEvent.h>

class luna_wrapper_wxTreeListEvent {
public:
	typedef Luna< wxTreeListEvent > luna_t;

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
		wxTreeListEvent* ptr= dynamic_cast< wxTreeListEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTreeListEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOldCheckedState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColumn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxTreeListItem wxTreeListEvent::GetItem() const
	static int _bind_GetItem(lua_State *L) {
		if (!_lg_typecheck_GetItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeListItem wxTreeListEvent::GetItem() const function, expected prototype:\nwxTreeListItem wxTreeListEvent::GetItem() const\nClass arguments details:\n");
		}


		wxTreeListEvent* self=dynamic_cast< wxTreeListEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTreeListItem wxTreeListEvent::GetItem() const");
		}
		wxTreeListItem stack_lret = self->GetItem();
		wxTreeListItem* lret = new wxTreeListItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeListItem >::push(L,lret,true);

		return 1;
	}

	// wxCheckBoxState wxTreeListEvent::GetOldCheckedState() const
	static int _bind_GetOldCheckedState(lua_State *L) {
		if (!_lg_typecheck_GetOldCheckedState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCheckBoxState wxTreeListEvent::GetOldCheckedState() const function, expected prototype:\nwxCheckBoxState wxTreeListEvent::GetOldCheckedState() const\nClass arguments details:\n");
		}


		wxTreeListEvent* self=dynamic_cast< wxTreeListEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxCheckBoxState wxTreeListEvent::GetOldCheckedState() const");
		}
		wxCheckBoxState lret = self->GetOldCheckedState();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int wxTreeListEvent::GetColumn() const
	static int _bind_GetColumn(lua_State *L) {
		if (!_lg_typecheck_GetColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxTreeListEvent::GetColumn() const function, expected prototype:\nunsigned int wxTreeListEvent::GetColumn() const\nClass arguments details:\n");
		}


		wxTreeListEvent* self=dynamic_cast< wxTreeListEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxTreeListEvent::GetColumn() const");
		}
		unsigned int lret = self->GetColumn();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxTreeListEvent* LunaTraits< wxTreeListEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxTreeListEvent >::_bind_dtor(wxTreeListEvent* obj) {
	delete obj;
}

const char LunaTraits< wxTreeListEvent >::className[] = "wxTreeListEvent";
const char LunaTraits< wxTreeListEvent >::fullName[] = "wxTreeListEvent";
const char LunaTraits< wxTreeListEvent >::moduleName[] = "wx";
const char* LunaTraits< wxTreeListEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxTreeListEvent >::hash = 29687405;
const int LunaTraits< wxTreeListEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxTreeListEvent >::methods[] = {
	{"GetItem", &luna_wrapper_wxTreeListEvent::_bind_GetItem},
	{"GetOldCheckedState", &luna_wrapper_wxTreeListEvent::_bind_GetOldCheckedState},
	{"GetColumn", &luna_wrapper_wxTreeListEvent::_bind_GetColumn},
	{"__eq", &luna_wrapper_wxTreeListEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxTreeListEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxTreeListEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTreeListEvent >::enumValues[] = {
	{0,0}
};


