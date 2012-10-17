#include <plug_common.h>

class luna_wrapper_wxPaletteChangedEvent {
public:
	typedef Luna< wxPaletteChangedEvent > luna_t;

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
		wxPaletteChangedEvent* ptr= dynamic_cast< wxPaletteChangedEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPaletteChangedEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_SetChangedWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetChangedWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void wxPaletteChangedEvent::SetChangedWindow(wxWindow * win)
	static int _bind_SetChangedWindow(lua_State *L) {
		if (!_lg_typecheck_SetChangedWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPaletteChangedEvent::SetChangedWindow(wxWindow * win) function, expected prototype:\nvoid wxPaletteChangedEvent::SetChangedWindow(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxPaletteChangedEvent* self=dynamic_cast< wxPaletteChangedEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPaletteChangedEvent::SetChangedWindow(wxWindow *)");
		}
		self->SetChangedWindow(win);

		return 0;
	}

	// wxWindow * wxPaletteChangedEvent::GetChangedWindow() const
	static int _bind_GetChangedWindow(lua_State *L) {
		if (!_lg_typecheck_GetChangedWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxPaletteChangedEvent::GetChangedWindow() const function, expected prototype:\nwxWindow * wxPaletteChangedEvent::GetChangedWindow() const\nClass arguments details:\n");
		}


		wxPaletteChangedEvent* self=dynamic_cast< wxPaletteChangedEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxPaletteChangedEvent::GetChangedWindow() const");
		}
		wxWindow * lret = self->GetChangedWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxPaletteChangedEvent* LunaTraits< wxPaletteChangedEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxPaletteChangedEvent >::_bind_dtor(wxPaletteChangedEvent* obj) {
	delete obj;
}

const char LunaTraits< wxPaletteChangedEvent >::className[] = "wxPaletteChangedEvent";
const char LunaTraits< wxPaletteChangedEvent >::fullName[] = "wxPaletteChangedEvent";
const char LunaTraits< wxPaletteChangedEvent >::moduleName[] = "wx";
const char* LunaTraits< wxPaletteChangedEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxPaletteChangedEvent >::hash = 38526120;
const int LunaTraits< wxPaletteChangedEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPaletteChangedEvent >::methods[] = {
	{"SetChangedWindow", &luna_wrapper_wxPaletteChangedEvent::_bind_SetChangedWindow},
	{"GetChangedWindow", &luna_wrapper_wxPaletteChangedEvent::_bind_GetChangedWindow},
	{"__eq", &luna_wrapper_wxPaletteChangedEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxPaletteChangedEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxPaletteChangedEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPaletteChangedEvent >::enumValues[] = {
	{0,0}
};


