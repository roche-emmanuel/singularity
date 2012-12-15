#include <plug_common.h>

#include <luna/wrappers/wrapper_wxPaintEvent.h>

class luna_wrapper_wxPaintEvent {
public:
	typedef Luna< wxPaintEvent > luna_t;

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
		//wxPaintEvent* ptr= dynamic_cast< wxPaintEvent* >(Luna< wxObject >::check(L,1));
		wxPaintEvent* ptr= luna_caster< wxObject, wxPaintEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPaintEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
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
	// wxClassInfo * wxPaintEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxPaintEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxPaintEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxPaintEvent* self=Luna< wxObject >::checkSubType< wxPaintEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxPaintEvent::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxPaintEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxPaintEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxPaintEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxPaintEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxPaintEvent* self=Luna< wxObject >::checkSubType< wxPaintEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxPaintEvent::base_GetEventCategory() const");
		}
		wxEventCategory lret = self->wxPaintEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxPaintEvent* LunaTraits< wxPaintEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxPaintEvent >::_bind_dtor(wxPaintEvent* obj) {
	delete obj;
}

const char LunaTraits< wxPaintEvent >::className[] = "wxPaintEvent";
const char LunaTraits< wxPaintEvent >::fullName[] = "wxPaintEvent";
const char LunaTraits< wxPaintEvent >::moduleName[] = "wx";
const char* LunaTraits< wxPaintEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxPaintEvent >::hash = 27233890;
const int LunaTraits< wxPaintEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPaintEvent >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxPaintEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxPaintEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxPaintEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxPaintEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxPaintEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPaintEvent >::enumValues[] = {
	{0,0}
};


