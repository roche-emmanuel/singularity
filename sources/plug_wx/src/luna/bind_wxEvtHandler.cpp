#include <plug_common.h>

#include <luna/wrappers/wrapper_wxEvtHandler.h>

class luna_wrapper_wxEvtHandler {
public:
	typedef Luna< wxEvtHandler > luna_t;

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
		wxEvtHandler* ptr= dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxEvtHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_QueueEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddPendingEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ProcessEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ProcessEventLocally(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SafelyProcessEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ProcessPendingEvents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DeletePendingEvents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetClientData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetClientObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetClientData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetClientObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetEvtHandlerEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNextHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPreviousHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetEvtHandlerEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNextHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPreviousHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Unlink(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsUnlinked(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AddFilter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81056638)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveFilter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81056638)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_disconnect(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_connect_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isfunction(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_connect_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isfunction(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_connect_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isfunction(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxEvtHandler::wxEvtHandler()
	static wxEvtHandler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEvtHandler::wxEvtHandler() function, expected prototype:\nwxEvtHandler::wxEvtHandler()\nClass arguments details:\n");
		}


		return new wxEvtHandler();
	}

	// wxEvtHandler::wxEvtHandler(lua_Table * data)
	static wxEvtHandler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEvtHandler::wxEvtHandler(lua_Table * data) function, expected prototype:\nwxEvtHandler::wxEvtHandler(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxEvtHandler(L,NULL);
	}

	// Overload binder for wxEvtHandler::wxEvtHandler
	static wxEvtHandler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxEvtHandler, cannot match any of the overloads for function wxEvtHandler:\n  wxEvtHandler()\n  wxEvtHandler(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void wxEvtHandler::QueueEvent(wxEvent * event)
	static int _bind_QueueEvent(lua_State *L) {
		if (!_lg_typecheck_QueueEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxEvtHandler::QueueEvent(wxEvent * event) function, expected prototype:\nvoid wxEvtHandler::QueueEvent(wxEvent * event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvent* event=dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,2));

		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxEvtHandler::QueueEvent(wxEvent *)");
		}
		self->QueueEvent(event);

		return 0;
	}

	// void wxEvtHandler::AddPendingEvent(const wxEvent & event)
	static int _bind_AddPendingEvent(lua_State *L) {
		if (!_lg_typecheck_AddPendingEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxEvtHandler::AddPendingEvent(const wxEvent & event) function, expected prototype:\nvoid wxEvtHandler::AddPendingEvent(const wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxEvent* event_ptr=dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxEvtHandler::AddPendingEvent function");
		}
		const wxEvent & event=*event_ptr;

		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxEvtHandler::AddPendingEvent(const wxEvent &)");
		}
		self->AddPendingEvent(event);

		return 0;
	}

	// bool wxEvtHandler::ProcessEvent(wxEvent & event)
	static int _bind_ProcessEvent(lua_State *L) {
		if (!_lg_typecheck_ProcessEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxEvtHandler::ProcessEvent(wxEvent & event) function, expected prototype:\nbool wxEvtHandler::ProcessEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvent* event_ptr=dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxEvtHandler::ProcessEvent function");
		}
		wxEvent & event=*event_ptr;

		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxEvtHandler::ProcessEvent(wxEvent &)");
		}
		bool lret = self->ProcessEvent(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxEvtHandler::ProcessEventLocally(wxEvent & event)
	static int _bind_ProcessEventLocally(lua_State *L) {
		if (!_lg_typecheck_ProcessEventLocally(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxEvtHandler::ProcessEventLocally(wxEvent & event) function, expected prototype:\nbool wxEvtHandler::ProcessEventLocally(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvent* event_ptr=dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxEvtHandler::ProcessEventLocally function");
		}
		wxEvent & event=*event_ptr;

		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxEvtHandler::ProcessEventLocally(wxEvent &)");
		}
		bool lret = self->ProcessEventLocally(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxEvtHandler::SafelyProcessEvent(wxEvent & event)
	static int _bind_SafelyProcessEvent(lua_State *L) {
		if (!_lg_typecheck_SafelyProcessEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxEvtHandler::SafelyProcessEvent(wxEvent & event) function, expected prototype:\nbool wxEvtHandler::SafelyProcessEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvent* event_ptr=dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxEvtHandler::SafelyProcessEvent function");
		}
		wxEvent & event=*event_ptr;

		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxEvtHandler::SafelyProcessEvent(wxEvent &)");
		}
		bool lret = self->SafelyProcessEvent(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxEvtHandler::ProcessPendingEvents()
	static int _bind_ProcessPendingEvents(lua_State *L) {
		if (!_lg_typecheck_ProcessPendingEvents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxEvtHandler::ProcessPendingEvents() function, expected prototype:\nvoid wxEvtHandler::ProcessPendingEvents()\nClass arguments details:\n");
		}


		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxEvtHandler::ProcessPendingEvents()");
		}
		self->ProcessPendingEvents();

		return 0;
	}

	// void wxEvtHandler::DeletePendingEvents()
	static int _bind_DeletePendingEvents(lua_State *L) {
		if (!_lg_typecheck_DeletePendingEvents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxEvtHandler::DeletePendingEvents() function, expected prototype:\nvoid wxEvtHandler::DeletePendingEvents()\nClass arguments details:\n");
		}


		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxEvtHandler::DeletePendingEvents()");
		}
		self->DeletePendingEvents();

		return 0;
	}

	// void * wxEvtHandler::GetClientData() const
	static int _bind_GetClientData(lua_State *L) {
		if (!_lg_typecheck_GetClientData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * wxEvtHandler::GetClientData() const function, expected prototype:\nvoid * wxEvtHandler::GetClientData() const\nClass arguments details:\n");
		}


		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * wxEvtHandler::GetClientData() const");
		}
		void * lret = self->GetClientData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// wxClientData * wxEvtHandler::GetClientObject() const
	static int _bind_GetClientObject(lua_State *L) {
		if (!_lg_typecheck_GetClientObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClientData * wxEvtHandler::GetClientObject() const function, expected prototype:\nwxClientData * wxEvtHandler::GetClientObject() const\nClass arguments details:\n");
		}


		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClientData * wxEvtHandler::GetClientObject() const");
		}
		wxClientData * lret = self->GetClientObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClientData >::push(L,lret,false);

		return 1;
	}

	// void wxEvtHandler::SetClientData(void * data)
	static int _bind_SetClientData(lua_State *L) {
		if (!_lg_typecheck_SetClientData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxEvtHandler::SetClientData(void * data) function, expected prototype:\nvoid wxEvtHandler::SetClientData(void * data)\nClass arguments details:\n");
		}

		void* data=(Luna< void >::check(L,2));

		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxEvtHandler::SetClientData(void *)");
		}
		self->SetClientData(data);

		return 0;
	}

	// void wxEvtHandler::SetClientObject(wxClientData * data)
	static int _bind_SetClientObject(lua_State *L) {
		if (!_lg_typecheck_SetClientObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxEvtHandler::SetClientObject(wxClientData * data) function, expected prototype:\nvoid wxEvtHandler::SetClientObject(wxClientData * data)\nClass arguments details:\narg 1 ID = 50457573\n");
		}

		wxClientData* data=(Luna< wxClientData >::check(L,2));

		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxEvtHandler::SetClientObject(wxClientData *)");
		}
		self->SetClientObject(data);

		return 0;
	}

	// bool wxEvtHandler::GetEvtHandlerEnabled() const
	static int _bind_GetEvtHandlerEnabled(lua_State *L) {
		if (!_lg_typecheck_GetEvtHandlerEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxEvtHandler::GetEvtHandlerEnabled() const function, expected prototype:\nbool wxEvtHandler::GetEvtHandlerEnabled() const\nClass arguments details:\n");
		}


		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxEvtHandler::GetEvtHandlerEnabled() const");
		}
		bool lret = self->GetEvtHandlerEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxEvtHandler * wxEvtHandler::GetNextHandler() const
	static int _bind_GetNextHandler(lua_State *L) {
		if (!_lg_typecheck_GetNextHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEvtHandler * wxEvtHandler::GetNextHandler() const function, expected prototype:\nwxEvtHandler * wxEvtHandler::GetNextHandler() const\nClass arguments details:\n");
		}


		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEvtHandler * wxEvtHandler::GetNextHandler() const");
		}
		wxEvtHandler * lret = self->GetNextHandler();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvtHandler >::push(L,lret,false);

		return 1;
	}

	// wxEvtHandler * wxEvtHandler::GetPreviousHandler() const
	static int _bind_GetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_GetPreviousHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEvtHandler * wxEvtHandler::GetPreviousHandler() const function, expected prototype:\nwxEvtHandler * wxEvtHandler::GetPreviousHandler() const\nClass arguments details:\n");
		}


		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEvtHandler * wxEvtHandler::GetPreviousHandler() const");
		}
		wxEvtHandler * lret = self->GetPreviousHandler();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvtHandler >::push(L,lret,false);

		return 1;
	}

	// void wxEvtHandler::SetEvtHandlerEnabled(bool enabled)
	static int _bind_SetEvtHandlerEnabled(lua_State *L) {
		if (!_lg_typecheck_SetEvtHandlerEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxEvtHandler::SetEvtHandlerEnabled(bool enabled) function, expected prototype:\nvoid wxEvtHandler::SetEvtHandlerEnabled(bool enabled)\nClass arguments details:\n");
		}

		bool enabled=(bool)(lua_toboolean(L,2)==1);

		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxEvtHandler::SetEvtHandlerEnabled(bool)");
		}
		self->SetEvtHandlerEnabled(enabled);

		return 0;
	}

	// void wxEvtHandler::SetNextHandler(wxEvtHandler * handler)
	static int _bind_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_SetNextHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxEvtHandler::SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxEvtHandler::SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,2));

		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxEvtHandler::SetNextHandler(wxEvtHandler *)");
		}
		self->SetNextHandler(handler);

		return 0;
	}

	// void wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_SetPreviousHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,2));

		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxEvtHandler::SetPreviousHandler(wxEvtHandler *)");
		}
		self->SetPreviousHandler(handler);

		return 0;
	}

	// void wxEvtHandler::Unlink()
	static int _bind_Unlink(lua_State *L) {
		if (!_lg_typecheck_Unlink(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxEvtHandler::Unlink() function, expected prototype:\nvoid wxEvtHandler::Unlink()\nClass arguments details:\n");
		}


		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxEvtHandler::Unlink()");
		}
		self->Unlink();

		return 0;
	}

	// bool wxEvtHandler::IsUnlinked() const
	static int _bind_IsUnlinked(lua_State *L) {
		if (!_lg_typecheck_IsUnlinked(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxEvtHandler::IsUnlinked() const function, expected prototype:\nbool wxEvtHandler::IsUnlinked() const\nClass arguments details:\n");
		}


		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxEvtHandler::IsUnlinked() const");
		}
		bool lret = self->IsUnlinked();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static void wxEvtHandler::AddFilter(wxEventFilter * filter)
	static int _bind_AddFilter(lua_State *L) {
		if (!_lg_typecheck_AddFilter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxEvtHandler::AddFilter(wxEventFilter * filter) function, expected prototype:\nstatic void wxEvtHandler::AddFilter(wxEventFilter * filter)\nClass arguments details:\narg 1 ID = 81056638\n");
		}

		wxEventFilter* filter=(Luna< wxEventFilter >::check(L,1));

		wxEvtHandler::AddFilter(filter);

		return 0;
	}

	// static void wxEvtHandler::RemoveFilter(wxEventFilter * filter)
	static int _bind_RemoveFilter(lua_State *L) {
		if (!_lg_typecheck_RemoveFilter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxEvtHandler::RemoveFilter(wxEventFilter * filter) function, expected prototype:\nstatic void wxEvtHandler::RemoveFilter(wxEventFilter * filter)\nClass arguments details:\narg 1 ID = 81056638\n");
		}

		wxEventFilter* filter=(Luna< wxEventFilter >::check(L,1));

		wxEvtHandler::RemoveFilter(filter);

		return 0;
	}

	// bool wxEvtHandler::disconnect(wxEvtHandler * handler, int id, int id2, int eventType)
	static int _bind_disconnect(lua_State *L) {
		if (!_lg_typecheck_disconnect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxEvtHandler::disconnect(wxEvtHandler * handler, int id, int id2, int eventType) function, expected prototype:\nbool wxEvtHandler::disconnect(wxEvtHandler * handler, int id, int id2, int eventType)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		int id2=(int)lua_tointeger(L,3);
		int eventType=(int)lua_tointeger(L,4);

		bool lret = disconnect(handler, id, id2, eventType);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxEvtHandler::connect(wxEvtHandler * handler, int id, int id2, int eventType, lua_Function * dummy, lua_State * L)
	static int _bind_connect_overload_1(lua_State *L) {
		if (!_lg_typecheck_connect_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxEvtHandler::connect(wxEvtHandler * handler, int id, int id2, int eventType, lua_Function * dummy, lua_State * L) function, expected prototype:\nint wxEvtHandler::connect(wxEvtHandler * handler, int id, int id2, int eventType, lua_Function * dummy, lua_State * L)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		int id2=(int)lua_tointeger(L,3);
		int eventType=(int)lua_tointeger(L,4);

		return connect(handler, id, id2, eventType, NULL, L);
	}

	// int wxEvtHandler::connect(wxEvtHandler * handler, int id, int eventType, lua_Function * dummy, lua_State * L)
	static int _bind_connect_overload_2(lua_State *L) {
		if (!_lg_typecheck_connect_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxEvtHandler::connect(wxEvtHandler * handler, int id, int eventType, lua_Function * dummy, lua_State * L) function, expected prototype:\nint wxEvtHandler::connect(wxEvtHandler * handler, int id, int eventType, lua_Function * dummy, lua_State * L)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		int eventType=(int)lua_tointeger(L,3);

		return connect(handler, id, eventType, NULL, L);
	}

	// int wxEvtHandler::connect(wxEvtHandler * handler, int eventType, lua_Function * dummy, lua_State * L)
	static int _bind_connect_overload_3(lua_State *L) {
		if (!_lg_typecheck_connect_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxEvtHandler::connect(wxEvtHandler * handler, int eventType, lua_Function * dummy, lua_State * L) function, expected prototype:\nint wxEvtHandler::connect(wxEvtHandler * handler, int eventType, lua_Function * dummy, lua_State * L)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		int eventType=(int)lua_tointeger(L,2);

		return connect(handler, eventType, NULL, L);
	}

	// Overload binder for wxEvtHandler::connect
	static int _bind_connect(lua_State *L) {
		if (_lg_typecheck_connect_overload_1(L)) return _bind_connect_overload_1(L);
		if (_lg_typecheck_connect_overload_2(L)) return _bind_connect_overload_2(L);
		if (_lg_typecheck_connect_overload_3(L)) return _bind_connect_overload_3(L);

		luaL_error(L, "error in function connect, cannot match any of the overloads for function connect:\n  connect(wxEvtHandler *, int, int, int, lua_Function *, lua_State *)\n  connect(wxEvtHandler *, int, int, lua_Function *, lua_State *)\n  connect(wxEvtHandler *, int, lua_Function *, lua_State *)\n");
		return 0;
	}


	// Operator binds:

};

wxEvtHandler* LunaTraits< wxEvtHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxEvtHandler::_bind_ctor(L);
}

void LunaTraits< wxEvtHandler >::_bind_dtor(wxEvtHandler* obj) {
	delete obj;
}

const char LunaTraits< wxEvtHandler >::className[] = "wxEvtHandler";
const char LunaTraits< wxEvtHandler >::fullName[] = "wxEvtHandler";
const char LunaTraits< wxEvtHandler >::moduleName[] = "wx";
const char* LunaTraits< wxEvtHandler >::parents[] = {"wx.wxObject", "wx.wxTrackable", 0};
const int LunaTraits< wxEvtHandler >::hash = 24002421;
const int LunaTraits< wxEvtHandler >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxEvtHandler >::methods[] = {
	{"QueueEvent", &luna_wrapper_wxEvtHandler::_bind_QueueEvent},
	{"AddPendingEvent", &luna_wrapper_wxEvtHandler::_bind_AddPendingEvent},
	{"ProcessEvent", &luna_wrapper_wxEvtHandler::_bind_ProcessEvent},
	{"ProcessEventLocally", &luna_wrapper_wxEvtHandler::_bind_ProcessEventLocally},
	{"SafelyProcessEvent", &luna_wrapper_wxEvtHandler::_bind_SafelyProcessEvent},
	{"ProcessPendingEvents", &luna_wrapper_wxEvtHandler::_bind_ProcessPendingEvents},
	{"DeletePendingEvents", &luna_wrapper_wxEvtHandler::_bind_DeletePendingEvents},
	{"GetClientData", &luna_wrapper_wxEvtHandler::_bind_GetClientData},
	{"GetClientObject", &luna_wrapper_wxEvtHandler::_bind_GetClientObject},
	{"SetClientData", &luna_wrapper_wxEvtHandler::_bind_SetClientData},
	{"SetClientObject", &luna_wrapper_wxEvtHandler::_bind_SetClientObject},
	{"GetEvtHandlerEnabled", &luna_wrapper_wxEvtHandler::_bind_GetEvtHandlerEnabled},
	{"GetNextHandler", &luna_wrapper_wxEvtHandler::_bind_GetNextHandler},
	{"GetPreviousHandler", &luna_wrapper_wxEvtHandler::_bind_GetPreviousHandler},
	{"SetEvtHandlerEnabled", &luna_wrapper_wxEvtHandler::_bind_SetEvtHandlerEnabled},
	{"SetNextHandler", &luna_wrapper_wxEvtHandler::_bind_SetNextHandler},
	{"SetPreviousHandler", &luna_wrapper_wxEvtHandler::_bind_SetPreviousHandler},
	{"Unlink", &luna_wrapper_wxEvtHandler::_bind_Unlink},
	{"IsUnlinked", &luna_wrapper_wxEvtHandler::_bind_IsUnlinked},
	{"AddFilter", &luna_wrapper_wxEvtHandler::_bind_AddFilter},
	{"RemoveFilter", &luna_wrapper_wxEvtHandler::_bind_RemoveFilter},
	{"disconnect", &luna_wrapper_wxEvtHandler::_bind_disconnect},
	{"connect", &luna_wrapper_wxEvtHandler::_bind_connect},
	{"__eq", &luna_wrapper_wxEvtHandler::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxEvtHandler >::converters[] = {
	{"wxObject", &luna_wrapper_wxEvtHandler::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxEvtHandler >::enumValues[] = {
	{0,0}
};


