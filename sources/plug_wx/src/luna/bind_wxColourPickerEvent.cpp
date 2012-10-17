#include <plug_common.h>

class luna_wrapper_wxColourPickerEvent {
public:
	typedef Luna< wxColourPickerEvent > luna_t;

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
		wxColourPickerEvent* ptr= dynamic_cast< wxColourPickerEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxColourPickerEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxColour wxColourPickerEvent::GetColour() const
	static int _bind_GetColour(lua_State *L) {
		if (!_lg_typecheck_GetColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxColourPickerEvent::GetColour() const function, expected prototype:\nwxColour wxColourPickerEvent::GetColour() const\nClass arguments details:\n");
		}


		wxColourPickerEvent* self=dynamic_cast< wxColourPickerEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxColourPickerEvent::GetColour() const");
		}
		wxColour stack_lret = self->GetColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// void wxColourPickerEvent::SetColour(const wxColour & pos)
	static int _bind_SetColour(lua_State *L) {
		if (!_lg_typecheck_SetColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxColourPickerEvent::SetColour(const wxColour & pos) function, expected prototype:\nvoid wxColourPickerEvent::SetColour(const wxColour & pos)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* pos_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxColourPickerEvent::SetColour function");
		}
		const wxColour & pos=*pos_ptr;

		wxColourPickerEvent* self=dynamic_cast< wxColourPickerEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxColourPickerEvent::SetColour(const wxColour &)");
		}
		self->SetColour(pos);

		return 0;
	}


	// Operator binds:

};

wxColourPickerEvent* LunaTraits< wxColourPickerEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxColourPickerEvent >::_bind_dtor(wxColourPickerEvent* obj) {
	delete obj;
}

const char LunaTraits< wxColourPickerEvent >::className[] = "wxColourPickerEvent";
const char LunaTraits< wxColourPickerEvent >::fullName[] = "wxColourPickerEvent";
const char LunaTraits< wxColourPickerEvent >::moduleName[] = "wx";
const char* LunaTraits< wxColourPickerEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxColourPickerEvent >::hash = 43152060;
const int LunaTraits< wxColourPickerEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxColourPickerEvent >::methods[] = {
	{"GetColour", &luna_wrapper_wxColourPickerEvent::_bind_GetColour},
	{"SetColour", &luna_wrapper_wxColourPickerEvent::_bind_SetColour},
	{"__eq", &luna_wrapper_wxColourPickerEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxColourPickerEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxColourPickerEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxColourPickerEvent >::enumValues[] = {
	{0,0}
};


