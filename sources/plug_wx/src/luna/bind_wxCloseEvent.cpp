#include <plug_common.h>

class luna_wrapper_wxCloseEvent {
public:
	typedef Luna< wxCloseEvent > luna_t;

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
		wxCloseEvent* ptr= dynamic_cast< wxCloseEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxCloseEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_CanVeto(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLoggingOff(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCanVeto(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLoggingOff(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Veto(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxCloseEvent::CanVeto() const
	static int _bind_CanVeto(lua_State *L) {
		if (!_lg_typecheck_CanVeto(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCloseEvent::CanVeto() const function, expected prototype:\nbool wxCloseEvent::CanVeto() const\nClass arguments details:\n");
		}


		wxCloseEvent* self=dynamic_cast< wxCloseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCloseEvent::CanVeto() const");
		}
		bool lret = self->CanVeto();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxCloseEvent::GetLoggingOff() const
	static int _bind_GetLoggingOff(lua_State *L) {
		if (!_lg_typecheck_GetLoggingOff(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCloseEvent::GetLoggingOff() const function, expected prototype:\nbool wxCloseEvent::GetLoggingOff() const\nClass arguments details:\n");
		}


		wxCloseEvent* self=dynamic_cast< wxCloseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCloseEvent::GetLoggingOff() const");
		}
		bool lret = self->GetLoggingOff();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxCloseEvent::SetCanVeto(bool canVeto)
	static int _bind_SetCanVeto(lua_State *L) {
		if (!_lg_typecheck_SetCanVeto(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCloseEvent::SetCanVeto(bool canVeto) function, expected prototype:\nvoid wxCloseEvent::SetCanVeto(bool canVeto)\nClass arguments details:\n");
		}

		bool canVeto=(bool)(lua_toboolean(L,2)==1);

		wxCloseEvent* self=dynamic_cast< wxCloseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCloseEvent::SetCanVeto(bool)");
		}
		self->SetCanVeto(canVeto);

		return 0;
	}

	// void wxCloseEvent::SetLoggingOff(bool loggingOff)
	static int _bind_SetLoggingOff(lua_State *L) {
		if (!_lg_typecheck_SetLoggingOff(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCloseEvent::SetLoggingOff(bool loggingOff) function, expected prototype:\nvoid wxCloseEvent::SetLoggingOff(bool loggingOff)\nClass arguments details:\n");
		}

		bool loggingOff=(bool)(lua_toboolean(L,2)==1);

		wxCloseEvent* self=dynamic_cast< wxCloseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCloseEvent::SetLoggingOff(bool)");
		}
		self->SetLoggingOff(loggingOff);

		return 0;
	}

	// void wxCloseEvent::Veto(bool veto = true)
	static int _bind_Veto(lua_State *L) {
		if (!_lg_typecheck_Veto(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCloseEvent::Veto(bool veto = true) function, expected prototype:\nvoid wxCloseEvent::Veto(bool veto = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool veto=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxCloseEvent* self=dynamic_cast< wxCloseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCloseEvent::Veto(bool)");
		}
		self->Veto(veto);

		return 0;
	}


	// Operator binds:

};

wxCloseEvent* LunaTraits< wxCloseEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxCloseEvent >::_bind_dtor(wxCloseEvent* obj) {
	delete obj;
}

const char LunaTraits< wxCloseEvent >::className[] = "wxCloseEvent";
const char LunaTraits< wxCloseEvent >::fullName[] = "wxCloseEvent";
const char LunaTraits< wxCloseEvent >::moduleName[] = "wx";
const char* LunaTraits< wxCloseEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxCloseEvent >::hash = 51631401;
const int LunaTraits< wxCloseEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxCloseEvent >::methods[] = {
	{"CanVeto", &luna_wrapper_wxCloseEvent::_bind_CanVeto},
	{"GetLoggingOff", &luna_wrapper_wxCloseEvent::_bind_GetLoggingOff},
	{"SetCanVeto", &luna_wrapper_wxCloseEvent::_bind_SetCanVeto},
	{"SetLoggingOff", &luna_wrapper_wxCloseEvent::_bind_SetLoggingOff},
	{"Veto", &luna_wrapper_wxCloseEvent::_bind_Veto},
	{"__eq", &luna_wrapper_wxCloseEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxCloseEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxCloseEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxCloseEvent >::enumValues[] = {
	{0,0}
};


