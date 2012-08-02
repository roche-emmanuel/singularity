#include <plug_common.h>

class luna_wrapper_wxRibbonBarEvent {
public:
	typedef Luna< wxRibbonBarEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRibbonBarEvent* ptr= dynamic_cast< wxRibbonBarEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRibbonBarEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetPage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetPage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxRibbonPage * wxRibbonBarEvent::GetPage()
	static int _bind_GetPage(lua_State *L) {
		if (!_lg_typecheck_GetPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonPage * wxRibbonBarEvent::GetPage() function, expected prototype:\nwxRibbonPage * wxRibbonBarEvent::GetPage()\nClass arguments details:\n");
		}


		wxRibbonBarEvent* self=dynamic_cast< wxRibbonBarEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonPage * wxRibbonBarEvent::GetPage()");
		}
		wxRibbonPage * lret = self->GetPage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonPage >::push(L,lret,false);

		return 1;
	}

	// void wxRibbonBarEvent::SetPage(wxRibbonPage * page)
	static int _bind_SetPage(lua_State *L) {
		if (!_lg_typecheck_SetPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRibbonBarEvent::SetPage(wxRibbonPage * page) function, expected prototype:\nvoid wxRibbonBarEvent::SetPage(wxRibbonPage * page)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxRibbonPage* page=dynamic_cast< wxRibbonPage* >(Luna< wxObject >::check(L,2));

		wxRibbonBarEvent* self=dynamic_cast< wxRibbonBarEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRibbonBarEvent::SetPage(wxRibbonPage *)");
		}
		self->SetPage(page);

		return 0;
	}


	// Operator binds:

};

wxRibbonBarEvent* LunaTraits< wxRibbonBarEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxRibbonBarEvent >::_bind_dtor(wxRibbonBarEvent* obj) {
	delete obj;
}

const char LunaTraits< wxRibbonBarEvent >::className[] = "wxRibbonBarEvent";
const char LunaTraits< wxRibbonBarEvent >::fullName[] = "wxRibbonBarEvent";
const char LunaTraits< wxRibbonBarEvent >::moduleName[] = "wx";
const char* LunaTraits< wxRibbonBarEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxRibbonBarEvent >::hash = 20571283;
const int LunaTraits< wxRibbonBarEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRibbonBarEvent >::methods[] = {
	{"GetPage", &luna_wrapper_wxRibbonBarEvent::_bind_GetPage},
	{"SetPage", &luna_wrapper_wxRibbonBarEvent::_bind_SetPage},
	{0,0}
};

luna_ConverterType LunaTraits< wxRibbonBarEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxRibbonBarEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRibbonBarEvent >::enumValues[] = {
	{0,0}
};


