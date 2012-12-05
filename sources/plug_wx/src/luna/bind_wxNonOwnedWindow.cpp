#include <plug_common.h>

#include <luna/wrappers/wrapper_wxNonOwnedWindow.h>

class luna_wrapper_wxNonOwnedWindow {
public:
	typedef Luna< wxNonOwnedWindow > luna_t;

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
		wxNonOwnedWindow* ptr= dynamic_cast< wxNonOwnedWindow* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxNonOwnedWindow >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_SetShape(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// bool wxNonOwnedWindow::SetShape(const wxRegion & region)
	static int _bind_SetShape(lua_State *L) {
		if (!_lg_typecheck_SetShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxNonOwnedWindow::SetShape(const wxRegion & region) function, expected prototype:\nbool wxNonOwnedWindow::SetShape(const wxRegion & region)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxRegion* region_ptr=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,2));
		if( !region_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg region in wxNonOwnedWindow::SetShape function");
		}
		const wxRegion & region=*region_ptr;

		wxNonOwnedWindow* self=dynamic_cast< wxNonOwnedWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxNonOwnedWindow::SetShape(const wxRegion &)");
		}
		bool lret = self->SetShape(region);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxNonOwnedWindow* LunaTraits< wxNonOwnedWindow >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxNonOwnedWindow >::_bind_dtor(wxNonOwnedWindow* obj) {
	delete obj;
}

const char LunaTraits< wxNonOwnedWindow >::className[] = "wxNonOwnedWindow";
const char LunaTraits< wxNonOwnedWindow >::fullName[] = "wxNonOwnedWindow";
const char LunaTraits< wxNonOwnedWindow >::moduleName[] = "wx";
const char* LunaTraits< wxNonOwnedWindow >::parents[] = {"wx.wxWindow", 0};
const int LunaTraits< wxNonOwnedWindow >::hash = 48935665;
const int LunaTraits< wxNonOwnedWindow >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxNonOwnedWindow >::methods[] = {
	{"SetShape", &luna_wrapper_wxNonOwnedWindow::_bind_SetShape},
	{"__eq", &luna_wrapper_wxNonOwnedWindow::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxNonOwnedWindow >::converters[] = {
	{"wxObject", &luna_wrapper_wxNonOwnedWindow::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxNonOwnedWindow >::enumValues[] = {
	{0,0}
};


