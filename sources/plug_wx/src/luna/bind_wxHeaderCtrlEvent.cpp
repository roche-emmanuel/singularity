#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHeaderCtrlEvent.h>

class luna_wrapper_wxHeaderCtrlEvent {
public:
	typedef Luna< wxHeaderCtrlEvent > luna_t;

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
		wxHeaderCtrlEvent* ptr= dynamic_cast< wxHeaderCtrlEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHeaderCtrlEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetColumn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNewOrder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// int wxHeaderCtrlEvent::GetColumn() const
	static int _bind_GetColumn(lua_State *L) {
		if (!_lg_typecheck_GetColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHeaderCtrlEvent::GetColumn() const function, expected prototype:\nint wxHeaderCtrlEvent::GetColumn() const\nClass arguments details:\n");
		}


		wxHeaderCtrlEvent* self=dynamic_cast< wxHeaderCtrlEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHeaderCtrlEvent::GetColumn() const");
		}
		int lret = self->GetColumn();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHeaderCtrlEvent::GetWidth() const
	static int _bind_GetWidth(lua_State *L) {
		if (!_lg_typecheck_GetWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHeaderCtrlEvent::GetWidth() const function, expected prototype:\nint wxHeaderCtrlEvent::GetWidth() const\nClass arguments details:\n");
		}


		wxHeaderCtrlEvent* self=dynamic_cast< wxHeaderCtrlEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHeaderCtrlEvent::GetWidth() const");
		}
		int lret = self->GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int wxHeaderCtrlEvent::GetNewOrder() const
	static int _bind_GetNewOrder(lua_State *L) {
		if (!_lg_typecheck_GetNewOrder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxHeaderCtrlEvent::GetNewOrder() const function, expected prototype:\nunsigned int wxHeaderCtrlEvent::GetNewOrder() const\nClass arguments details:\n");
		}


		wxHeaderCtrlEvent* self=dynamic_cast< wxHeaderCtrlEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxHeaderCtrlEvent::GetNewOrder() const");
		}
		unsigned int lret = self->GetNewOrder();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxHeaderCtrlEvent* LunaTraits< wxHeaderCtrlEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxHeaderCtrlEvent >::_bind_dtor(wxHeaderCtrlEvent* obj) {
	delete obj;
}

const char LunaTraits< wxHeaderCtrlEvent >::className[] = "wxHeaderCtrlEvent";
const char LunaTraits< wxHeaderCtrlEvent >::fullName[] = "wxHeaderCtrlEvent";
const char LunaTraits< wxHeaderCtrlEvent >::moduleName[] = "wx";
const char* LunaTraits< wxHeaderCtrlEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxHeaderCtrlEvent >::hash = 20721291;
const int LunaTraits< wxHeaderCtrlEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHeaderCtrlEvent >::methods[] = {
	{"GetColumn", &luna_wrapper_wxHeaderCtrlEvent::_bind_GetColumn},
	{"GetWidth", &luna_wrapper_wxHeaderCtrlEvent::_bind_GetWidth},
	{"GetNewOrder", &luna_wrapper_wxHeaderCtrlEvent::_bind_GetNewOrder},
	{"__eq", &luna_wrapper_wxHeaderCtrlEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxHeaderCtrlEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxHeaderCtrlEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHeaderCtrlEvent >::enumValues[] = {
	{0,0}
};


