#include <plug_common.h>

class luna_wrapper_wxContextMenuEvent {
public:
	typedef Luna< wxContextMenuEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxContextMenuEvent* ptr= dynamic_cast< wxContextMenuEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxContextMenuEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// const wxPoint & wxContextMenuEvent::GetPosition() const
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxPoint & wxContextMenuEvent::GetPosition() const function, expected prototype:\nconst wxPoint & wxContextMenuEvent::GetPosition() const\nClass arguments details:\n");
		}


		wxContextMenuEvent* self=dynamic_cast< wxContextMenuEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxPoint & wxContextMenuEvent::GetPosition() const");
		}
		const wxPoint* lret = &self->GetPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,false);

		return 1;
	}

	// void wxContextMenuEvent::SetPosition(const wxPoint & point)
	static int _bind_SetPosition(lua_State *L) {
		if (!_lg_typecheck_SetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxContextMenuEvent::SetPosition(const wxPoint & point) function, expected prototype:\nvoid wxContextMenuEvent::SetPosition(const wxPoint & point)\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxContextMenuEvent::SetPosition function");
		}
		const wxPoint & point=*point_ptr;

		wxContextMenuEvent* self=dynamic_cast< wxContextMenuEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxContextMenuEvent::SetPosition(const wxPoint &)");
		}
		self->SetPosition(point);

		return 0;
	}


	// Operator binds:

};

wxContextMenuEvent* LunaTraits< wxContextMenuEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxContextMenuEvent >::_bind_dtor(wxContextMenuEvent* obj) {
	delete obj;
}

const char LunaTraits< wxContextMenuEvent >::className[] = "wxContextMenuEvent";
const char LunaTraits< wxContextMenuEvent >::fullName[] = "wxContextMenuEvent";
const char LunaTraits< wxContextMenuEvent >::moduleName[] = "wx";
const char* LunaTraits< wxContextMenuEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxContextMenuEvent >::hash = 78101839;
const int LunaTraits< wxContextMenuEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxContextMenuEvent >::methods[] = {
	{"GetPosition", &luna_wrapper_wxContextMenuEvent::_bind_GetPosition},
	{"SetPosition", &luna_wrapper_wxContextMenuEvent::_bind_SetPosition},
	{0,0}
};

luna_ConverterType LunaTraits< wxContextMenuEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxContextMenuEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxContextMenuEvent >::enumValues[] = {
	{0,0}
};

