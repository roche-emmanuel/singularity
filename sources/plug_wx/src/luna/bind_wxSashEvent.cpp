#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSashEvent.h>

class luna_wrapper_wxSashEvent {
public:
	typedef Luna< wxSashEvent > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
		//wxSashEvent* ptr= dynamic_cast< wxSashEvent* >(Luna< wxObject >::check(L,1));
		wxSashEvent* ptr= luna_caster< wxObject, wxSashEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSashEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


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

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetEventCategory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSashEvent::wxSashEvent(lua_Table * data, int id = 0, wxSashEdgePosition edge = ::wxSASH_NONE)
	static wxSashEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSashEvent::wxSashEvent(lua_Table * data, int id = 0, wxSashEdgePosition edge = ::wxSASH_NONE) function, expected prototype:\nwxSashEvent::wxSashEvent(lua_Table * data, int id = 0, wxSashEdgePosition edge = ::wxSASH_NONE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int id=luatop>1 ? (int)lua_tointeger(L,2) : 0;
		wxSashEdgePosition edge=luatop>2 ? (wxSashEdgePosition)lua_tointeger(L,3) : ::wxSASH_NONE;

		return new wrapper_wxSashEvent(L,NULL, id, edge);
	}


	// Function binds:
	// wxRect wxSashEvent::GetDragRect() const
	static int _bind_GetDragRect(lua_State *L) {
		if (!_lg_typecheck_GetDragRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect wxSashEvent::GetDragRect() const function, expected prototype:\nwxRect wxSashEvent::GetDragRect() const\nClass arguments details:\n");
		}


		wxSashEvent* self=Luna< wxObject >::checkSubType< wxSashEvent >(L,1);
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


		wxSashEvent* self=Luna< wxObject >::checkSubType< wxSashEvent >(L,1);
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


		wxSashEvent* self=Luna< wxObject >::checkSubType< wxSashEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSashEdgePosition wxSashEvent::GetEdge() const");
		}
		wxSashEdgePosition lret = self->GetEdge();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxClassInfo * wxSashEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxSashEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxSashEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxSashEvent* self=Luna< wxObject >::checkSubType< wxSashEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxSashEvent::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxSashEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxSashEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxSashEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxSashEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxSashEvent* self=Luna< wxObject >::checkSubType< wxSashEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxSashEvent::base_GetEventCategory() const");
		}
		wxEventCategory lret = self->wxSashEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxSashEvent* LunaTraits< wxSashEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSashEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
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
	{"base_GetClassInfo", &luna_wrapper_wxSashEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxSashEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxSashEvent::_bind___eq},
	{"getTable", &luna_wrapper_wxSashEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxSashEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxSashEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSashEvent >::enumValues[] = {
	{0,0}
};


