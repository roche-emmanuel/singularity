#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMouseEventsManager.h>

class luna_wrapper_wxMouseEventsManager {
public:
	typedef Luna< wxMouseEventsManager > luna_t;

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
		//wxMouseEventsManager* ptr= dynamic_cast< wxMouseEventsManager* >(Luna< wxObject >::check(L,1));
		wxMouseEventsManager* ptr= luna_caster< wxObject, wxMouseEventsManager >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMouseEventsManager >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_QueueEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AddPendingEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ProcessEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetNextHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetPreviousHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxMouseEventsManager::Create(wxWindow * win)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEventsManager::Create(wxWindow * win) function, expected prototype:\nbool wxMouseEventsManager::Create(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxMouseEventsManager* self=Luna< wxObject >::checkSubType< wxMouseEventsManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEventsManager::Create(wxWindow *)");
		}
		bool lret = self->Create(win);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxMouseEventsManager::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxMouseEventsManager::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxMouseEventsManager::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxMouseEventsManager* self=Luna< wxObject >::checkSubType< wxMouseEventsManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxMouseEventsManager::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxMouseEventsManager::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// void wxMouseEventsManager::base_QueueEvent(wxEvent * event)
	static int _bind_base_QueueEvent(lua_State *L) {
		if (!_lg_typecheck_base_QueueEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMouseEventsManager::base_QueueEvent(wxEvent * event) function, expected prototype:\nvoid wxMouseEventsManager::base_QueueEvent(wxEvent * event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvent* event=(Luna< wxObject >::checkSubType< wxEvent >(L,2));

		wxMouseEventsManager* self=Luna< wxObject >::checkSubType< wxMouseEventsManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMouseEventsManager::base_QueueEvent(wxEvent *)");
		}
		self->wxMouseEventsManager::QueueEvent(event);

		return 0;
	}

	// void wxMouseEventsManager::base_AddPendingEvent(const wxEvent & event)
	static int _bind_base_AddPendingEvent(lua_State *L) {
		if (!_lg_typecheck_base_AddPendingEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMouseEventsManager::base_AddPendingEvent(const wxEvent & event) function, expected prototype:\nvoid wxMouseEventsManager::base_AddPendingEvent(const wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxMouseEventsManager::base_AddPendingEvent function");
		}
		const wxEvent & event=*event_ptr;

		wxMouseEventsManager* self=Luna< wxObject >::checkSubType< wxMouseEventsManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMouseEventsManager::base_AddPendingEvent(const wxEvent &)");
		}
		self->wxMouseEventsManager::AddPendingEvent(event);

		return 0;
	}

	// bool wxMouseEventsManager::base_ProcessEvent(wxEvent & event)
	static int _bind_base_ProcessEvent(lua_State *L) {
		if (!_lg_typecheck_base_ProcessEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEventsManager::base_ProcessEvent(wxEvent & event) function, expected prototype:\nbool wxMouseEventsManager::base_ProcessEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxMouseEventsManager::base_ProcessEvent function");
		}
		wxEvent & event=*event_ptr;

		wxMouseEventsManager* self=Luna< wxObject >::checkSubType< wxMouseEventsManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEventsManager::base_ProcessEvent(wxEvent &)");
		}
		bool lret = self->wxMouseEventsManager::ProcessEvent(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMouseEventsManager::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMouseEventsManager::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxMouseEventsManager::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxMouseEventsManager* self=Luna< wxObject >::checkSubType< wxMouseEventsManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMouseEventsManager::base_SetNextHandler(wxEvtHandler *)");
		}
		self->wxMouseEventsManager::SetNextHandler(handler);

		return 0;
	}

	// void wxMouseEventsManager::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMouseEventsManager::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxMouseEventsManager::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxMouseEventsManager* self=Luna< wxObject >::checkSubType< wxMouseEventsManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMouseEventsManager::base_SetPreviousHandler(wxEvtHandler *)");
		}
		self->wxMouseEventsManager::SetPreviousHandler(handler);

		return 0;
	}


	// Operator binds:

};

wxMouseEventsManager* LunaTraits< wxMouseEventsManager >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// int wxMouseEventsManager::MouseHitTest(const wxPoint & pos)
	// bool wxMouseEventsManager::MouseClicked(int item)
	// bool wxMouseEventsManager::MouseDragBegin(int item, const wxPoint & pos)
	// void wxMouseEventsManager::MouseDragging(int item, const wxPoint & pos)
	// void wxMouseEventsManager::MouseDragEnd(int item, const wxPoint & pos)
	// void wxMouseEventsManager::MouseDragCancelled(int item)
}

void LunaTraits< wxMouseEventsManager >::_bind_dtor(wxMouseEventsManager* obj) {
	delete obj;
}

const char LunaTraits< wxMouseEventsManager >::className[] = "wxMouseEventsManager";
const char LunaTraits< wxMouseEventsManager >::fullName[] = "wxMouseEventsManager";
const char LunaTraits< wxMouseEventsManager >::moduleName[] = "wx";
const char* LunaTraits< wxMouseEventsManager >::parents[] = {"wx.wxEvtHandler", 0};
const int LunaTraits< wxMouseEventsManager >::hash = 54019244;
const int LunaTraits< wxMouseEventsManager >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxMouseEventsManager >::methods[] = {
	{"Create", &luna_wrapper_wxMouseEventsManager::_bind_Create},
	{"base_GetClassInfo", &luna_wrapper_wxMouseEventsManager::_bind_base_GetClassInfo},
	{"base_QueueEvent", &luna_wrapper_wxMouseEventsManager::_bind_base_QueueEvent},
	{"base_AddPendingEvent", &luna_wrapper_wxMouseEventsManager::_bind_base_AddPendingEvent},
	{"base_ProcessEvent", &luna_wrapper_wxMouseEventsManager::_bind_base_ProcessEvent},
	{"base_SetNextHandler", &luna_wrapper_wxMouseEventsManager::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxMouseEventsManager::_bind_base_SetPreviousHandler},
	{"__eq", &luna_wrapper_wxMouseEventsManager::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxMouseEventsManager >::converters[] = {
	{"wxObject", &luna_wrapper_wxMouseEventsManager::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMouseEventsManager >::enumValues[] = {
	{0,0}
};


