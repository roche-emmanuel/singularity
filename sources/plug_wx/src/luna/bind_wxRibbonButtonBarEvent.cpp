#include <plug_common.h>

class luna_wrapper_wxRibbonButtonBarEvent {
public:
	typedef Luna< wxRibbonButtonBarEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRibbonButtonBarEvent* ptr= dynamic_cast< wxRibbonButtonBarEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRibbonButtonBarEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetBar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PopupMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxRibbonButtonBar * wxRibbonButtonBarEvent::GetBar()
	static int _bind_GetBar(lua_State *L) {
		if (!_lg_typecheck_GetBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonButtonBar * wxRibbonButtonBarEvent::GetBar() function, expected prototype:\nwxRibbonButtonBar * wxRibbonButtonBarEvent::GetBar()\nClass arguments details:\n");
		}


		wxRibbonButtonBarEvent* self=dynamic_cast< wxRibbonButtonBarEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonButtonBar * wxRibbonButtonBarEvent::GetBar()");
		}
		wxRibbonButtonBar * lret = self->GetBar();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonButtonBar >::push(L,lret,false);

		return 1;
	}

	// void wxRibbonButtonBarEvent::SetBar(wxRibbonButtonBar * bar)
	static int _bind_SetBar(lua_State *L) {
		if (!_lg_typecheck_SetBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRibbonButtonBarEvent::SetBar(wxRibbonButtonBar * bar) function, expected prototype:\nvoid wxRibbonButtonBarEvent::SetBar(wxRibbonButtonBar * bar)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxRibbonButtonBar* bar=dynamic_cast< wxRibbonButtonBar* >(Luna< wxObject >::check(L,2));

		wxRibbonButtonBarEvent* self=dynamic_cast< wxRibbonButtonBarEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRibbonButtonBarEvent::SetBar(wxRibbonButtonBar *)");
		}
		self->SetBar(bar);

		return 0;
	}

	// bool wxRibbonButtonBarEvent::PopupMenu(wxMenu * menu)
	static int _bind_PopupMenu(lua_State *L) {
		if (!_lg_typecheck_PopupMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonButtonBarEvent::PopupMenu(wxMenu * menu) function, expected prototype:\nbool wxRibbonButtonBarEvent::PopupMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxMenu* menu=dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,2));

		wxRibbonButtonBarEvent* self=dynamic_cast< wxRibbonButtonBarEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonButtonBarEvent::PopupMenu(wxMenu *)");
		}
		bool lret = self->PopupMenu(menu);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxRibbonButtonBarEvent* LunaTraits< wxRibbonButtonBarEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxRibbonButtonBarEvent >::_bind_dtor(wxRibbonButtonBarEvent* obj) {
	delete obj;
}

const char LunaTraits< wxRibbonButtonBarEvent >::className[] = "wxRibbonButtonBarEvent";
const char LunaTraits< wxRibbonButtonBarEvent >::fullName[] = "wxRibbonButtonBarEvent";
const char LunaTraits< wxRibbonButtonBarEvent >::moduleName[] = "wx";
const char* LunaTraits< wxRibbonButtonBarEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxRibbonButtonBarEvent >::hash = 28960676;
const int LunaTraits< wxRibbonButtonBarEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRibbonButtonBarEvent >::methods[] = {
	{"GetBar", &luna_wrapper_wxRibbonButtonBarEvent::_bind_GetBar},
	{"SetBar", &luna_wrapper_wxRibbonButtonBarEvent::_bind_SetBar},
	{"PopupMenu", &luna_wrapper_wxRibbonButtonBarEvent::_bind_PopupMenu},
	{0,0}
};

luna_ConverterType LunaTraits< wxRibbonButtonBarEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxRibbonButtonBarEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRibbonButtonBarEvent >::enumValues[] = {
	{0,0}
};


