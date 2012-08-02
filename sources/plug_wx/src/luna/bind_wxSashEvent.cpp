#include <plug_common.h>

class luna_wrapper_wxSashEvent {
public:
	typedef Luna< wxSashEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxSashEvent* ptr= dynamic_cast< wxSashEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSashEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetDragRect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDragStatus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEdge(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxRect wxSashEvent::GetDragRect() const
	static int _bind_GetDragRect(lua_State *L) {
		if (!_lg_typecheck_GetDragRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect wxSashEvent::GetDragRect() const function, expected prototype:\nwxRect wxSashEvent::GetDragRect() const\nClass arguments details:\n");
		}


		wxSashEvent* self=dynamic_cast< wxSashEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect wxSashEvent::GetDragRect() const");
		}
		wxRect stack_lret = self->GetDragRect();
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// wxSashDragStatus wxSashEvent::GetDragStatus() const
	static int _bind_GetDragStatus(lua_State *L) {
		if (!_lg_typecheck_GetDragStatus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSashDragStatus wxSashEvent::GetDragStatus() const function, expected prototype:\nwxSashDragStatus wxSashEvent::GetDragStatus() const\nClass arguments details:\n");
		}


		wxSashEvent* self=dynamic_cast< wxSashEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSashDragStatus wxSashEvent::GetDragStatus() const");
		}
		wxSashDragStatus lret = self->GetDragStatus();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSashEdgePosition wxSashEvent::GetEdge() const
	static int _bind_GetEdge(lua_State *L) {
		if (!_lg_typecheck_GetEdge(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSashEdgePosition wxSashEvent::GetEdge() const function, expected prototype:\nwxSashEdgePosition wxSashEvent::GetEdge() const\nClass arguments details:\n");
		}


		wxSashEvent* self=dynamic_cast< wxSashEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSashEdgePosition wxSashEvent::GetEdge() const");
		}
		wxSashEdgePosition lret = self->GetEdge();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxSashEvent* LunaTraits< wxSashEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxSashEvent >::_bind_dtor(wxSashEvent* obj) {
	delete obj;
}

const char LunaTraits< wxSashEvent >::className[] = "wxSashEvent";
const char LunaTraits< wxSashEvent >::fullName[] = "wxSashEvent";
const char LunaTraits< wxSashEvent >::moduleName[] = "wx";
const char* LunaTraits< wxSashEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxSashEvent >::hash = 31863192;
const int LunaTraits< wxSashEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSashEvent >::methods[] = {
	{"GetDragRect", &luna_wrapper_wxSashEvent::_bind_GetDragRect},
	{"GetDragStatus", &luna_wrapper_wxSashEvent::_bind_GetDragStatus},
	{"GetEdge", &luna_wrapper_wxSashEvent::_bind_GetEdge},
	{0,0}
};

luna_ConverterType LunaTraits< wxSashEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxSashEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSashEvent >::enumValues[] = {
	{0,0}
};


