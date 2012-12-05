#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMoveEvent.h>

class luna_wrapper_wxMoveEvent {
public:
	typedef Luna< wxMoveEvent > luna_t;

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
		wxMoveEvent* ptr= dynamic_cast< wxMoveEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMoveEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRect(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxPoint wxMoveEvent::GetPosition() const
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxMoveEvent::GetPosition() const function, expected prototype:\nwxPoint wxMoveEvent::GetPosition() const\nClass arguments details:\n");
		}


		wxMoveEvent* self=dynamic_cast< wxMoveEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxMoveEvent::GetPosition() const");
		}
		wxPoint stack_lret = self->GetPosition();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxRect wxMoveEvent::GetRect() const
	static int _bind_GetRect(lua_State *L) {
		if (!_lg_typecheck_GetRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect wxMoveEvent::GetRect() const function, expected prototype:\nwxRect wxMoveEvent::GetRect() const\nClass arguments details:\n");
		}


		wxMoveEvent* self=dynamic_cast< wxMoveEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect wxMoveEvent::GetRect() const");
		}
		wxRect stack_lret = self->GetRect();
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// void wxMoveEvent::SetRect(const wxRect & rect)
	static int _bind_SetRect(lua_State *L) {
		if (!_lg_typecheck_SetRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMoveEvent::SetRect(const wxRect & rect) function, expected prototype:\nvoid wxMoveEvent::SetRect(const wxRect & rect)\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxMoveEvent::SetRect function");
		}
		const wxRect & rect=*rect_ptr;

		wxMoveEvent* self=dynamic_cast< wxMoveEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMoveEvent::SetRect(const wxRect &)");
		}
		self->SetRect(rect);

		return 0;
	}

	// void wxMoveEvent::SetPosition(const wxPoint & pos)
	static int _bind_SetPosition(lua_State *L) {
		if (!_lg_typecheck_SetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMoveEvent::SetPosition(const wxPoint & pos) function, expected prototype:\nvoid wxMoveEvent::SetPosition(const wxPoint & pos)\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxMoveEvent::SetPosition function");
		}
		const wxPoint & pos=*pos_ptr;

		wxMoveEvent* self=dynamic_cast< wxMoveEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMoveEvent::SetPosition(const wxPoint &)");
		}
		self->SetPosition(pos);

		return 0;
	}


	// Operator binds:

};

wxMoveEvent* LunaTraits< wxMoveEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxMoveEvent >::_bind_dtor(wxMoveEvent* obj) {
	delete obj;
}

const char LunaTraits< wxMoveEvent >::className[] = "wxMoveEvent";
const char LunaTraits< wxMoveEvent >::fullName[] = "wxMoveEvent";
const char LunaTraits< wxMoveEvent >::moduleName[] = "wx";
const char* LunaTraits< wxMoveEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxMoveEvent >::hash = 39255760;
const int LunaTraits< wxMoveEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMoveEvent >::methods[] = {
	{"GetPosition", &luna_wrapper_wxMoveEvent::_bind_GetPosition},
	{"GetRect", &luna_wrapper_wxMoveEvent::_bind_GetRect},
	{"SetRect", &luna_wrapper_wxMoveEvent::_bind_SetRect},
	{"SetPosition", &luna_wrapper_wxMoveEvent::_bind_SetPosition},
	{"__eq", &luna_wrapper_wxMoveEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxMoveEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxMoveEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMoveEvent >::enumValues[] = {
	{0,0}
};


