#include <plug_common.h>

class luna_wrapper_wxNotifyEvent {
public:
	typedef Luna< wxNotifyEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxNotifyEvent* ptr= dynamic_cast< wxNotifyEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxNotifyEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_Allow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsAllowed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Veto(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void wxNotifyEvent::Allow()
	static int _bind_Allow(lua_State *L) {
		if (!_lg_typecheck_Allow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxNotifyEvent::Allow() function, expected prototype:\nvoid wxNotifyEvent::Allow()\nClass arguments details:\n");
		}


		wxNotifyEvent* self=dynamic_cast< wxNotifyEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxNotifyEvent::Allow()");
		}
		self->Allow();

		return 0;
	}

	// bool wxNotifyEvent::IsAllowed() const
	static int _bind_IsAllowed(lua_State *L) {
		if (!_lg_typecheck_IsAllowed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxNotifyEvent::IsAllowed() const function, expected prototype:\nbool wxNotifyEvent::IsAllowed() const\nClass arguments details:\n");
		}


		wxNotifyEvent* self=dynamic_cast< wxNotifyEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxNotifyEvent::IsAllowed() const");
		}
		bool lret = self->IsAllowed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxNotifyEvent::Veto()
	static int _bind_Veto(lua_State *L) {
		if (!_lg_typecheck_Veto(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxNotifyEvent::Veto() function, expected prototype:\nvoid wxNotifyEvent::Veto()\nClass arguments details:\n");
		}


		wxNotifyEvent* self=dynamic_cast< wxNotifyEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxNotifyEvent::Veto()");
		}
		self->Veto();

		return 0;
	}


	// Operator binds:

};

wxNotifyEvent* LunaTraits< wxNotifyEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxNotifyEvent >::_bind_dtor(wxNotifyEvent* obj) {
	delete obj;
}

const char LunaTraits< wxNotifyEvent >::className[] = "wxNotifyEvent";
const char LunaTraits< wxNotifyEvent >::fullName[] = "wxNotifyEvent";
const char LunaTraits< wxNotifyEvent >::moduleName[] = "wx";
const char* LunaTraits< wxNotifyEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxNotifyEvent >::hash = 50844681;
const int LunaTraits< wxNotifyEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxNotifyEvent >::methods[] = {
	{"Allow", &luna_wrapper_wxNotifyEvent::_bind_Allow},
	{"IsAllowed", &luna_wrapper_wxNotifyEvent::_bind_IsAllowed},
	{"Veto", &luna_wrapper_wxNotifyEvent::_bind_Veto},
	{0,0}
};

luna_ConverterType LunaTraits< wxNotifyEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxNotifyEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxNotifyEvent >::enumValues[] = {
	{0,0}
};


