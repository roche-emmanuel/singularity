#include <plug_common.h>

#include <luna/wrappers/wrapper_wxQueryNewPaletteEvent.h>

class luna_wrapper_wxQueryNewPaletteEvent {
public:
	typedef Luna< wxQueryNewPaletteEvent > luna_t;

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
		//wxQueryNewPaletteEvent* ptr= dynamic_cast< wxQueryNewPaletteEvent* >(Luna< wxObject >::check(L,1));
		wxQueryNewPaletteEvent* ptr= luna_caster< wxObject, wxQueryNewPaletteEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxQueryNewPaletteEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_SetPaletteRealized(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPaletteRealized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetEventCategory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void wxQueryNewPaletteEvent::SetPaletteRealized(bool realized)
	static int _bind_SetPaletteRealized(lua_State *L) {
		if (!_lg_typecheck_SetPaletteRealized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxQueryNewPaletteEvent::SetPaletteRealized(bool realized) function, expected prototype:\nvoid wxQueryNewPaletteEvent::SetPaletteRealized(bool realized)\nClass arguments details:\n");
		}

		bool realized=(bool)(lua_toboolean(L,2)==1);

		wxQueryNewPaletteEvent* self=Luna< wxObject >::checkSubType< wxQueryNewPaletteEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxQueryNewPaletteEvent::SetPaletteRealized(bool)");
		}
		self->SetPaletteRealized(realized);

		return 0;
	}

	// bool wxQueryNewPaletteEvent::GetPaletteRealized()
	static int _bind_GetPaletteRealized(lua_State *L) {
		if (!_lg_typecheck_GetPaletteRealized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxQueryNewPaletteEvent::GetPaletteRealized() function, expected prototype:\nbool wxQueryNewPaletteEvent::GetPaletteRealized()\nClass arguments details:\n");
		}


		wxQueryNewPaletteEvent* self=Luna< wxObject >::checkSubType< wxQueryNewPaletteEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxQueryNewPaletteEvent::GetPaletteRealized()");
		}
		bool lret = self->GetPaletteRealized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxQueryNewPaletteEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxQueryNewPaletteEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxQueryNewPaletteEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxQueryNewPaletteEvent* self=Luna< wxObject >::checkSubType< wxQueryNewPaletteEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxQueryNewPaletteEvent::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxQueryNewPaletteEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxQueryNewPaletteEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxQueryNewPaletteEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxQueryNewPaletteEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxQueryNewPaletteEvent* self=Luna< wxObject >::checkSubType< wxQueryNewPaletteEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxQueryNewPaletteEvent::base_GetEventCategory() const");
		}
		wxEventCategory lret = self->wxQueryNewPaletteEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxQueryNewPaletteEvent* LunaTraits< wxQueryNewPaletteEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxQueryNewPaletteEvent >::_bind_dtor(wxQueryNewPaletteEvent* obj) {
	delete obj;
}

const char LunaTraits< wxQueryNewPaletteEvent >::className[] = "wxQueryNewPaletteEvent";
const char LunaTraits< wxQueryNewPaletteEvent >::fullName[] = "wxQueryNewPaletteEvent";
const char LunaTraits< wxQueryNewPaletteEvent >::moduleName[] = "wx";
const char* LunaTraits< wxQueryNewPaletteEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxQueryNewPaletteEvent >::hash = 79566331;
const int LunaTraits< wxQueryNewPaletteEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxQueryNewPaletteEvent >::methods[] = {
	{"SetPaletteRealized", &luna_wrapper_wxQueryNewPaletteEvent::_bind_SetPaletteRealized},
	{"GetPaletteRealized", &luna_wrapper_wxQueryNewPaletteEvent::_bind_GetPaletteRealized},
	{"base_GetClassInfo", &luna_wrapper_wxQueryNewPaletteEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxQueryNewPaletteEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxQueryNewPaletteEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxQueryNewPaletteEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxQueryNewPaletteEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxQueryNewPaletteEvent >::enumValues[] = {
	{0,0}
};


