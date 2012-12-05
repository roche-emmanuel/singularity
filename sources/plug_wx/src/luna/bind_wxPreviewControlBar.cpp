#include <plug_common.h>

#include <luna/wrappers/wrapper_wxPreviewControlBar.h>

class luna_wrapper_wxPreviewControlBar {
public:
	typedef Luna< wxPreviewControlBar > luna_t;

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
		wxPreviewControlBar* ptr= dynamic_cast< wxPreviewControlBar* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPreviewControlBar >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_CreateButtons(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetZoomControl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetZoomControl(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void wxPreviewControlBar::CreateButtons()
	static int _bind_CreateButtons(lua_State *L) {
		if (!_lg_typecheck_CreateButtons(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewControlBar::CreateButtons() function, expected prototype:\nvoid wxPreviewControlBar::CreateButtons()\nClass arguments details:\n");
		}


		wxPreviewControlBar* self=dynamic_cast< wxPreviewControlBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewControlBar::CreateButtons()");
		}
		self->CreateButtons();

		return 0;
	}

	// int wxPreviewControlBar::GetZoomControl()
	static int _bind_GetZoomControl(lua_State *L) {
		if (!_lg_typecheck_GetZoomControl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxPreviewControlBar::GetZoomControl() function, expected prototype:\nint wxPreviewControlBar::GetZoomControl()\nClass arguments details:\n");
		}


		wxPreviewControlBar* self=dynamic_cast< wxPreviewControlBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxPreviewControlBar::GetZoomControl()");
		}
		int lret = self->GetZoomControl();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxPreviewControlBar::SetZoomControl(int percent)
	static int _bind_SetZoomControl(lua_State *L) {
		if (!_lg_typecheck_SetZoomControl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewControlBar::SetZoomControl(int percent) function, expected prototype:\nvoid wxPreviewControlBar::SetZoomControl(int percent)\nClass arguments details:\n");
		}

		int percent=(int)lua_tointeger(L,2);

		wxPreviewControlBar* self=dynamic_cast< wxPreviewControlBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewControlBar::SetZoomControl(int)");
		}
		self->SetZoomControl(percent);

		return 0;
	}


	// Operator binds:

};

wxPreviewControlBar* LunaTraits< wxPreviewControlBar >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxPreviewControlBar >::_bind_dtor(wxPreviewControlBar* obj) {
	delete obj;
}

const char LunaTraits< wxPreviewControlBar >::className[] = "wxPreviewControlBar";
const char LunaTraits< wxPreviewControlBar >::fullName[] = "wxPreviewControlBar";
const char LunaTraits< wxPreviewControlBar >::moduleName[] = "wx";
const char* LunaTraits< wxPreviewControlBar >::parents[] = {"wx.wxPanel", 0};
const int LunaTraits< wxPreviewControlBar >::hash = 13967323;
const int LunaTraits< wxPreviewControlBar >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxPreviewControlBar >::methods[] = {
	{"CreateButtons", &luna_wrapper_wxPreviewControlBar::_bind_CreateButtons},
	{"GetZoomControl", &luna_wrapper_wxPreviewControlBar::_bind_GetZoomControl},
	{"SetZoomControl", &luna_wrapper_wxPreviewControlBar::_bind_SetZoomControl},
	{"__eq", &luna_wrapper_wxPreviewControlBar::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxPreviewControlBar >::converters[] = {
	{"wxObject", &luna_wrapper_wxPreviewControlBar::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPreviewControlBar >::enumValues[] = {
	{0,0}
};


