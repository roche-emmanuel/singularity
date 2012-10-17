#include <plug_common.h>

class luna_wrapper_wxTipWindow {
public:
	typedef Luna< wxTipWindow > luna_t;

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
		wxTipWindow* ptr= dynamic_cast< wxTipWindow* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTipWindow >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_SetBoundingRect(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void wxTipWindow::SetBoundingRect(const wxRect & rectBound)
	static int _bind_SetBoundingRect(lua_State *L) {
		if (!_lg_typecheck_SetBoundingRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTipWindow::SetBoundingRect(const wxRect & rectBound) function, expected prototype:\nvoid wxTipWindow::SetBoundingRect(const wxRect & rectBound)\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* rectBound_ptr=(Luna< wxRect >::check(L,2));
		if( !rectBound_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rectBound in wxTipWindow::SetBoundingRect function");
		}
		const wxRect & rectBound=*rectBound_ptr;

		wxTipWindow* self=dynamic_cast< wxTipWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTipWindow::SetBoundingRect(const wxRect &)");
		}
		self->SetBoundingRect(rectBound);

		return 0;
	}


	// Operator binds:

};

wxTipWindow* LunaTraits< wxTipWindow >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxTipWindow >::_bind_dtor(wxTipWindow* obj) {
	delete obj;
}

const char LunaTraits< wxTipWindow >::className[] = "wxTipWindow";
const char LunaTraits< wxTipWindow >::fullName[] = "wxTipWindow";
const char LunaTraits< wxTipWindow >::moduleName[] = "wx";
const char* LunaTraits< wxTipWindow >::parents[] = {"wx.wxWindow", 0};
const int LunaTraits< wxTipWindow >::hash = 7548741;
const int LunaTraits< wxTipWindow >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxTipWindow >::methods[] = {
	{"SetBoundingRect", &luna_wrapper_wxTipWindow::_bind_SetBoundingRect},
	{"__eq", &luna_wrapper_wxTipWindow::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxTipWindow >::converters[] = {
	{"wxObject", &luna_wrapper_wxTipWindow::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTipWindow >::enumValues[] = {
	{0,0}
};


