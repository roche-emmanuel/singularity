#include <plug_common.h>

#include <luna/wrappers/wrapper_wxWizardEvent.h>

class luna_wrapper_wxWizardEvent {
public:
	typedef Luna< wxWizardEvent > luna_t;

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
		wxWizardEvent* ptr= dynamic_cast< wxWizardEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxWizardEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxWizardEvent::GetDirection() const
	static int _bind_GetDirection(lua_State *L) {
		if (!_lg_typecheck_GetDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWizardEvent::GetDirection() const function, expected prototype:\nbool wxWizardEvent::GetDirection() const\nClass arguments details:\n");
		}


		wxWizardEvent* self=dynamic_cast< wxWizardEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWizardEvent::GetDirection() const");
		}
		bool lret = self->GetDirection();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxWizardPage * wxWizardEvent::GetPage() const
	static int _bind_GetPage(lua_State *L) {
		if (!_lg_typecheck_GetPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWizardPage * wxWizardEvent::GetPage() const function, expected prototype:\nwxWizardPage * wxWizardEvent::GetPage() const\nClass arguments details:\n");
		}


		wxWizardEvent* self=dynamic_cast< wxWizardEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWizardPage * wxWizardEvent::GetPage() const");
		}
		wxWizardPage * lret = self->GetPage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWizardPage >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxWizardEvent* LunaTraits< wxWizardEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxWizardEvent >::_bind_dtor(wxWizardEvent* obj) {
	delete obj;
}

const char LunaTraits< wxWizardEvent >::className[] = "wxWizardEvent";
const char LunaTraits< wxWizardEvent >::fullName[] = "wxWizardEvent";
const char LunaTraits< wxWizardEvent >::moduleName[] = "wx";
const char* LunaTraits< wxWizardEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxWizardEvent >::hash = 1835864;
const int LunaTraits< wxWizardEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxWizardEvent >::methods[] = {
	{"GetDirection", &luna_wrapper_wxWizardEvent::_bind_GetDirection},
	{"GetPage", &luna_wrapper_wxWizardEvent::_bind_GetPage},
	{"__eq", &luna_wrapper_wxWizardEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxWizardEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxWizardEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxWizardEvent >::enumValues[] = {
	{0,0}
};


