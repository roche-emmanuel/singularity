#include <plug_common.h>

#include <luna/wrappers/wrapper_wxAppConsole.h>

class luna_wrapper_wxAppConsole {
public:
	typedef Luna< wxAppConsole > luna_t;

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
		wxAppConsole* ptr= dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxAppConsole >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxEventFilter(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxAppConsole* ptr= dynamic_cast< wxAppConsole* >(Luna< wxEventFilter >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxAppConsole >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_MainLoop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ExitMainLoop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FilterEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMainLoop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_UsesEventLoop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_HasPendingEvents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SuspendProcessingOfPendingEvents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ResumeProcessingOfPendingEvents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ScheduleForDestruction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsScheduledForDestruction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Yield(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnCmdLineError(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87987501) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnCmdLineHelp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87987501) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnCmdLineParsed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87987501) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnEventLoopEnter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,77241040)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnEventLoopExit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,77241040)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnExceptionInMainLoop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnExit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnFatalException(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnInit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnInitCmdLine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87987501) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnRun(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnUnhandledException(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAppDisplayName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAppName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTraits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVendorDisplayName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVendorName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAppDisplayName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAppName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetClassName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVendorDisplayName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVendorName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetInstance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetInstance(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsMainLoopRunning(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int wxAppConsole::MainLoop()
	static int _bind_MainLoop(lua_State *L) {
		if (!_lg_typecheck_MainLoop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAppConsole::MainLoop() function, expected prototype:\nint wxAppConsole::MainLoop()\nClass arguments details:\n");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAppConsole::MainLoop()");
		}
		int lret = self->MainLoop();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAppConsole::ExitMainLoop()
	static int _bind_ExitMainLoop(lua_State *L) {
		if (!_lg_typecheck_ExitMainLoop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAppConsole::ExitMainLoop() function, expected prototype:\nvoid wxAppConsole::ExitMainLoop()\nClass arguments details:\n");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAppConsole::ExitMainLoop()");
		}
		self->ExitMainLoop();

		return 0;
	}

	// int wxAppConsole::FilterEvent(wxEvent & event)
	static int _bind_FilterEvent(lua_State *L) {
		if (!_lg_typecheck_FilterEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAppConsole::FilterEvent(wxEvent & event) function, expected prototype:\nint wxAppConsole::FilterEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvent* event_ptr=dynamic_cast< wxEvent* >(Luna< wxObject >::check(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxAppConsole::FilterEvent function");
		}
		wxEvent & event=*event_ptr;

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAppConsole::FilterEvent(wxEvent &)");
		}
		int lret = self->FilterEvent(event);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEventLoopBase * wxAppConsole::GetMainLoop() const
	static int _bind_GetMainLoop(lua_State *L) {
		if (!_lg_typecheck_GetMainLoop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventLoopBase * wxAppConsole::GetMainLoop() const function, expected prototype:\nwxEventLoopBase * wxAppConsole::GetMainLoop() const\nClass arguments details:\n");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventLoopBase * wxAppConsole::GetMainLoop() const");
		}
		wxEventLoopBase * lret = self->GetMainLoop();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEventLoopBase >::push(L,lret,false);

		return 1;
	}

	// bool wxAppConsole::UsesEventLoop() const
	static int _bind_UsesEventLoop(lua_State *L) {
		if (!_lg_typecheck_UsesEventLoop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAppConsole::UsesEventLoop() const function, expected prototype:\nbool wxAppConsole::UsesEventLoop() const\nClass arguments details:\n");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAppConsole::UsesEventLoop() const");
		}
		bool lret = self->UsesEventLoop();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAppConsole::ProcessPendingEvents()
	static int _bind_ProcessPendingEvents(lua_State *L) {
		if (!_lg_typecheck_ProcessPendingEvents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAppConsole::ProcessPendingEvents() function, expected prototype:\nvoid wxAppConsole::ProcessPendingEvents()\nClass arguments details:\n");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAppConsole::ProcessPendingEvents()");
		}
		self->ProcessPendingEvents();

		return 0;
	}

	// void wxAppConsole::DeletePendingEvents()
	static int _bind_DeletePendingEvents(lua_State *L) {
		if (!_lg_typecheck_DeletePendingEvents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAppConsole::DeletePendingEvents() function, expected prototype:\nvoid wxAppConsole::DeletePendingEvents()\nClass arguments details:\n");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAppConsole::DeletePendingEvents()");
		}
		self->DeletePendingEvents();

		return 0;
	}

	// bool wxAppConsole::HasPendingEvents() const
	static int _bind_HasPendingEvents(lua_State *L) {
		if (!_lg_typecheck_HasPendingEvents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAppConsole::HasPendingEvents() const function, expected prototype:\nbool wxAppConsole::HasPendingEvents() const\nClass arguments details:\n");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAppConsole::HasPendingEvents() const");
		}
		bool lret = self->HasPendingEvents();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAppConsole::SuspendProcessingOfPendingEvents()
	static int _bind_SuspendProcessingOfPendingEvents(lua_State *L) {
		if (!_lg_typecheck_SuspendProcessingOfPendingEvents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAppConsole::SuspendProcessingOfPendingEvents() function, expected prototype:\nvoid wxAppConsole::SuspendProcessingOfPendingEvents()\nClass arguments details:\n");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAppConsole::SuspendProcessingOfPendingEvents()");
		}
		self->SuspendProcessingOfPendingEvents();

		return 0;
	}

	// void wxAppConsole::ResumeProcessingOfPendingEvents()
	static int _bind_ResumeProcessingOfPendingEvents(lua_State *L) {
		if (!_lg_typecheck_ResumeProcessingOfPendingEvents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAppConsole::ResumeProcessingOfPendingEvents() function, expected prototype:\nvoid wxAppConsole::ResumeProcessingOfPendingEvents()\nClass arguments details:\n");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAppConsole::ResumeProcessingOfPendingEvents()");
		}
		self->ResumeProcessingOfPendingEvents();

		return 0;
	}

	// void wxAppConsole::ScheduleForDestruction(wxObject * object)
	static int _bind_ScheduleForDestruction(lua_State *L) {
		if (!_lg_typecheck_ScheduleForDestruction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAppConsole::ScheduleForDestruction(wxObject * object) function, expected prototype:\nvoid wxAppConsole::ScheduleForDestruction(wxObject * object)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxObject* object=(Luna< wxObject >::check(L,2));

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAppConsole::ScheduleForDestruction(wxObject *)");
		}
		self->ScheduleForDestruction(object);

		return 0;
	}

	// bool wxAppConsole::IsScheduledForDestruction(wxObject * object) const
	static int _bind_IsScheduledForDestruction(lua_State *L) {
		if (!_lg_typecheck_IsScheduledForDestruction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAppConsole::IsScheduledForDestruction(wxObject * object) const function, expected prototype:\nbool wxAppConsole::IsScheduledForDestruction(wxObject * object) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxObject* object=(Luna< wxObject >::check(L,2));

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAppConsole::IsScheduledForDestruction(wxObject *) const");
		}
		bool lret = self->IsScheduledForDestruction(object);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAppConsole::Yield(bool onlyIfNeeded = false)
	static int _bind_Yield(lua_State *L) {
		if (!_lg_typecheck_Yield(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAppConsole::Yield(bool onlyIfNeeded = false) function, expected prototype:\nbool wxAppConsole::Yield(bool onlyIfNeeded = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool onlyIfNeeded=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : false;

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAppConsole::Yield(bool)");
		}
		bool lret = self->Yield(onlyIfNeeded);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAppConsole::OnCmdLineError(wxCmdLineParser & parser)
	static int _bind_OnCmdLineError(lua_State *L) {
		if (!_lg_typecheck_OnCmdLineError(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAppConsole::OnCmdLineError(wxCmdLineParser & parser) function, expected prototype:\nbool wxAppConsole::OnCmdLineError(wxCmdLineParser & parser)\nClass arguments details:\narg 1 ID = 87987501\n");
		}

		wxCmdLineParser* parser_ptr=(Luna< wxCmdLineParser >::check(L,2));
		if( !parser_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parser in wxAppConsole::OnCmdLineError function");
		}
		wxCmdLineParser & parser=*parser_ptr;

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAppConsole::OnCmdLineError(wxCmdLineParser &)");
		}
		bool lret = self->OnCmdLineError(parser);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAppConsole::OnCmdLineHelp(wxCmdLineParser & parser)
	static int _bind_OnCmdLineHelp(lua_State *L) {
		if (!_lg_typecheck_OnCmdLineHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAppConsole::OnCmdLineHelp(wxCmdLineParser & parser) function, expected prototype:\nbool wxAppConsole::OnCmdLineHelp(wxCmdLineParser & parser)\nClass arguments details:\narg 1 ID = 87987501\n");
		}

		wxCmdLineParser* parser_ptr=(Luna< wxCmdLineParser >::check(L,2));
		if( !parser_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parser in wxAppConsole::OnCmdLineHelp function");
		}
		wxCmdLineParser & parser=*parser_ptr;

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAppConsole::OnCmdLineHelp(wxCmdLineParser &)");
		}
		bool lret = self->OnCmdLineHelp(parser);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAppConsole::OnCmdLineParsed(wxCmdLineParser & parser)
	static int _bind_OnCmdLineParsed(lua_State *L) {
		if (!_lg_typecheck_OnCmdLineParsed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAppConsole::OnCmdLineParsed(wxCmdLineParser & parser) function, expected prototype:\nbool wxAppConsole::OnCmdLineParsed(wxCmdLineParser & parser)\nClass arguments details:\narg 1 ID = 87987501\n");
		}

		wxCmdLineParser* parser_ptr=(Luna< wxCmdLineParser >::check(L,2));
		if( !parser_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parser in wxAppConsole::OnCmdLineParsed function");
		}
		wxCmdLineParser & parser=*parser_ptr;

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAppConsole::OnCmdLineParsed(wxCmdLineParser &)");
		}
		bool lret = self->OnCmdLineParsed(parser);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAppConsole::OnEventLoopEnter(wxEventLoopBase * loop)
	static int _bind_OnEventLoopEnter(lua_State *L) {
		if (!_lg_typecheck_OnEventLoopEnter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAppConsole::OnEventLoopEnter(wxEventLoopBase * loop) function, expected prototype:\nvoid wxAppConsole::OnEventLoopEnter(wxEventLoopBase * loop)\nClass arguments details:\narg 1 ID = 77241040\n");
		}

		wxEventLoopBase* loop=(Luna< wxEventLoopBase >::check(L,2));

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAppConsole::OnEventLoopEnter(wxEventLoopBase *)");
		}
		self->OnEventLoopEnter(loop);

		return 0;
	}

	// void wxAppConsole::OnEventLoopExit(wxEventLoopBase * loop)
	static int _bind_OnEventLoopExit(lua_State *L) {
		if (!_lg_typecheck_OnEventLoopExit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAppConsole::OnEventLoopExit(wxEventLoopBase * loop) function, expected prototype:\nvoid wxAppConsole::OnEventLoopExit(wxEventLoopBase * loop)\nClass arguments details:\narg 1 ID = 77241040\n");
		}

		wxEventLoopBase* loop=(Luna< wxEventLoopBase >::check(L,2));

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAppConsole::OnEventLoopExit(wxEventLoopBase *)");
		}
		self->OnEventLoopExit(loop);

		return 0;
	}

	// bool wxAppConsole::OnExceptionInMainLoop()
	static int _bind_OnExceptionInMainLoop(lua_State *L) {
		if (!_lg_typecheck_OnExceptionInMainLoop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAppConsole::OnExceptionInMainLoop() function, expected prototype:\nbool wxAppConsole::OnExceptionInMainLoop()\nClass arguments details:\n");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAppConsole::OnExceptionInMainLoop()");
		}
		bool lret = self->OnExceptionInMainLoop();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxAppConsole::OnExit()
	static int _bind_OnExit(lua_State *L) {
		if (!_lg_typecheck_OnExit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAppConsole::OnExit() function, expected prototype:\nint wxAppConsole::OnExit()\nClass arguments details:\n");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAppConsole::OnExit()");
		}
		int lret = self->OnExit();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAppConsole::OnFatalException()
	static int _bind_OnFatalException(lua_State *L) {
		if (!_lg_typecheck_OnFatalException(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAppConsole::OnFatalException() function, expected prototype:\nvoid wxAppConsole::OnFatalException()\nClass arguments details:\n");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAppConsole::OnFatalException()");
		}
		self->OnFatalException();

		return 0;
	}

	// bool wxAppConsole::OnInit()
	static int _bind_OnInit(lua_State *L) {
		if (!_lg_typecheck_OnInit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAppConsole::OnInit() function, expected prototype:\nbool wxAppConsole::OnInit()\nClass arguments details:\n");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAppConsole::OnInit()");
		}
		bool lret = self->OnInit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAppConsole::OnInitCmdLine(wxCmdLineParser & parser)
	static int _bind_OnInitCmdLine(lua_State *L) {
		if (!_lg_typecheck_OnInitCmdLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAppConsole::OnInitCmdLine(wxCmdLineParser & parser) function, expected prototype:\nvoid wxAppConsole::OnInitCmdLine(wxCmdLineParser & parser)\nClass arguments details:\narg 1 ID = 87987501\n");
		}

		wxCmdLineParser* parser_ptr=(Luna< wxCmdLineParser >::check(L,2));
		if( !parser_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parser in wxAppConsole::OnInitCmdLine function");
		}
		wxCmdLineParser & parser=*parser_ptr;

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAppConsole::OnInitCmdLine(wxCmdLineParser &)");
		}
		self->OnInitCmdLine(parser);

		return 0;
	}

	// int wxAppConsole::OnRun()
	static int _bind_OnRun(lua_State *L) {
		if (!_lg_typecheck_OnRun(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAppConsole::OnRun() function, expected prototype:\nint wxAppConsole::OnRun()\nClass arguments details:\n");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAppConsole::OnRun()");
		}
		int lret = self->OnRun();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAppConsole::OnUnhandledException()
	static int _bind_OnUnhandledException(lua_State *L) {
		if (!_lg_typecheck_OnUnhandledException(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAppConsole::OnUnhandledException() function, expected prototype:\nvoid wxAppConsole::OnUnhandledException()\nClass arguments details:\n");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAppConsole::OnUnhandledException()");
		}
		self->OnUnhandledException();

		return 0;
	}

	// wxString wxAppConsole::GetAppDisplayName() const
	static int _bind_GetAppDisplayName(lua_State *L) {
		if (!_lg_typecheck_GetAppDisplayName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxAppConsole::GetAppDisplayName() const function, expected prototype:\nwxString wxAppConsole::GetAppDisplayName() const\nClass arguments details:\n");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxAppConsole::GetAppDisplayName() const");
		}
		wxString lret = self->GetAppDisplayName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxAppConsole::GetAppName() const
	static int _bind_GetAppName(lua_State *L) {
		if (!_lg_typecheck_GetAppName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxAppConsole::GetAppName() const function, expected prototype:\nwxString wxAppConsole::GetAppName() const\nClass arguments details:\n");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxAppConsole::GetAppName() const");
		}
		wxString lret = self->GetAppName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxAppConsole::GetClassName() const
	static int _bind_GetClassName(lua_State *L) {
		if (!_lg_typecheck_GetClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxAppConsole::GetClassName() const function, expected prototype:\nwxString wxAppConsole::GetClassName() const\nClass arguments details:\n");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxAppConsole::GetClassName() const");
		}
		wxString lret = self->GetClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxAppTraits * wxAppConsole::GetTraits()
	static int _bind_GetTraits(lua_State *L) {
		if (!_lg_typecheck_GetTraits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAppTraits * wxAppConsole::GetTraits() function, expected prototype:\nwxAppTraits * wxAppConsole::GetTraits()\nClass arguments details:\n");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxAppTraits * wxAppConsole::GetTraits()");
		}
		wxAppTraits * lret = self->GetTraits();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAppTraits >::push(L,lret,false);

		return 1;
	}

	// const wxString & wxAppConsole::GetVendorDisplayName() const
	static int _bind_GetVendorDisplayName(lua_State *L) {
		if (!_lg_typecheck_GetVendorDisplayName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxAppConsole::GetVendorDisplayName() const function, expected prototype:\nconst wxString & wxAppConsole::GetVendorDisplayName() const\nClass arguments details:\n");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxAppConsole::GetVendorDisplayName() const");
		}
		const wxString & lret = self->GetVendorDisplayName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxAppConsole::GetVendorName() const
	static int _bind_GetVendorName(lua_State *L) {
		if (!_lg_typecheck_GetVendorName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxAppConsole::GetVendorName() const function, expected prototype:\nconst wxString & wxAppConsole::GetVendorName() const\nClass arguments details:\n");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxAppConsole::GetVendorName() const");
		}
		const wxString & lret = self->GetVendorName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxAppConsole::SetAppDisplayName(const wxString & name)
	static int _bind_SetAppDisplayName(lua_State *L) {
		if (!_lg_typecheck_SetAppDisplayName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAppConsole::SetAppDisplayName(const wxString & name) function, expected prototype:\nvoid wxAppConsole::SetAppDisplayName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAppConsole::SetAppDisplayName(const wxString &)");
		}
		self->SetAppDisplayName(name);

		return 0;
	}

	// void wxAppConsole::SetAppName(const wxString & name)
	static int _bind_SetAppName(lua_State *L) {
		if (!_lg_typecheck_SetAppName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAppConsole::SetAppName(const wxString & name) function, expected prototype:\nvoid wxAppConsole::SetAppName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAppConsole::SetAppName(const wxString &)");
		}
		self->SetAppName(name);

		return 0;
	}

	// void wxAppConsole::SetClassName(const wxString & name)
	static int _bind_SetClassName(lua_State *L) {
		if (!_lg_typecheck_SetClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAppConsole::SetClassName(const wxString & name) function, expected prototype:\nvoid wxAppConsole::SetClassName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAppConsole::SetClassName(const wxString &)");
		}
		self->SetClassName(name);

		return 0;
	}

	// void wxAppConsole::SetVendorDisplayName(const wxString & name)
	static int _bind_SetVendorDisplayName(lua_State *L) {
		if (!_lg_typecheck_SetVendorDisplayName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAppConsole::SetVendorDisplayName(const wxString & name) function, expected prototype:\nvoid wxAppConsole::SetVendorDisplayName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAppConsole::SetVendorDisplayName(const wxString &)");
		}
		self->SetVendorDisplayName(name);

		return 0;
	}

	// void wxAppConsole::SetVendorName(const wxString & name)
	static int _bind_SetVendorName(lua_State *L) {
		if (!_lg_typecheck_SetVendorName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAppConsole::SetVendorName(const wxString & name) function, expected prototype:\nvoid wxAppConsole::SetVendorName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAppConsole::SetVendorName(const wxString &)");
		}
		self->SetVendorName(name);

		return 0;
	}

	// static void wxAppConsole::SetInstance(wxAppConsole * app)
	static int _bind_SetInstance(lua_State *L) {
		if (!_lg_typecheck_SetInstance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxAppConsole::SetInstance(wxAppConsole * app) function, expected prototype:\nstatic void wxAppConsole::SetInstance(wxAppConsole * app)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxAppConsole* app=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));

		wxAppConsole::SetInstance(app);

		return 0;
	}

	// static wxAppConsole * wxAppConsole::GetInstance()
	static int _bind_GetInstance(lua_State *L) {
		if (!_lg_typecheck_GetInstance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxAppConsole * wxAppConsole::GetInstance() function, expected prototype:\nstatic wxAppConsole * wxAppConsole::GetInstance()\nClass arguments details:\n");
		}


		wxAppConsole * lret = wxAppConsole::GetInstance();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAppConsole >::push(L,lret,false);

		return 1;
	}

	// static bool wxAppConsole::IsMainLoopRunning()
	static int _bind_IsMainLoopRunning(lua_State *L) {
		if (!_lg_typecheck_IsMainLoopRunning(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool wxAppConsole::IsMainLoopRunning() function, expected prototype:\nstatic bool wxAppConsole::IsMainLoopRunning()\nClass arguments details:\n");
		}


		bool lret = wxAppConsole::IsMainLoopRunning();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxAppConsole* LunaTraits< wxAppConsole >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxAppConsole >::_bind_dtor(wxAppConsole* obj) {
	delete obj;
}

const char LunaTraits< wxAppConsole >::className[] = "wxAppConsole";
const char LunaTraits< wxAppConsole >::fullName[] = "wxAppConsole";
const char LunaTraits< wxAppConsole >::moduleName[] = "wx";
const char* LunaTraits< wxAppConsole >::parents[] = {"wx.wxEvtHandler", "wx.wxEventFilter", 0};
const int LunaTraits< wxAppConsole >::hash = 11491460;
const int LunaTraits< wxAppConsole >::uniqueIDs[] = {56813631, 53506535, 81056638,0};

luna_RegType LunaTraits< wxAppConsole >::methods[] = {
	{"MainLoop", &luna_wrapper_wxAppConsole::_bind_MainLoop},
	{"ExitMainLoop", &luna_wrapper_wxAppConsole::_bind_ExitMainLoop},
	{"FilterEvent", &luna_wrapper_wxAppConsole::_bind_FilterEvent},
	{"GetMainLoop", &luna_wrapper_wxAppConsole::_bind_GetMainLoop},
	{"UsesEventLoop", &luna_wrapper_wxAppConsole::_bind_UsesEventLoop},
	{"ProcessPendingEvents", &luna_wrapper_wxAppConsole::_bind_ProcessPendingEvents},
	{"DeletePendingEvents", &luna_wrapper_wxAppConsole::_bind_DeletePendingEvents},
	{"HasPendingEvents", &luna_wrapper_wxAppConsole::_bind_HasPendingEvents},
	{"SuspendProcessingOfPendingEvents", &luna_wrapper_wxAppConsole::_bind_SuspendProcessingOfPendingEvents},
	{"ResumeProcessingOfPendingEvents", &luna_wrapper_wxAppConsole::_bind_ResumeProcessingOfPendingEvents},
	{"ScheduleForDestruction", &luna_wrapper_wxAppConsole::_bind_ScheduleForDestruction},
	{"IsScheduledForDestruction", &luna_wrapper_wxAppConsole::_bind_IsScheduledForDestruction},
	{"Yield", &luna_wrapper_wxAppConsole::_bind_Yield},
	{"OnCmdLineError", &luna_wrapper_wxAppConsole::_bind_OnCmdLineError},
	{"OnCmdLineHelp", &luna_wrapper_wxAppConsole::_bind_OnCmdLineHelp},
	{"OnCmdLineParsed", &luna_wrapper_wxAppConsole::_bind_OnCmdLineParsed},
	{"OnEventLoopEnter", &luna_wrapper_wxAppConsole::_bind_OnEventLoopEnter},
	{"OnEventLoopExit", &luna_wrapper_wxAppConsole::_bind_OnEventLoopExit},
	{"OnExceptionInMainLoop", &luna_wrapper_wxAppConsole::_bind_OnExceptionInMainLoop},
	{"OnExit", &luna_wrapper_wxAppConsole::_bind_OnExit},
	{"OnFatalException", &luna_wrapper_wxAppConsole::_bind_OnFatalException},
	{"OnInit", &luna_wrapper_wxAppConsole::_bind_OnInit},
	{"OnInitCmdLine", &luna_wrapper_wxAppConsole::_bind_OnInitCmdLine},
	{"OnRun", &luna_wrapper_wxAppConsole::_bind_OnRun},
	{"OnUnhandledException", &luna_wrapper_wxAppConsole::_bind_OnUnhandledException},
	{"GetAppDisplayName", &luna_wrapper_wxAppConsole::_bind_GetAppDisplayName},
	{"GetAppName", &luna_wrapper_wxAppConsole::_bind_GetAppName},
	{"GetClassName", &luna_wrapper_wxAppConsole::_bind_GetClassName},
	{"GetTraits", &luna_wrapper_wxAppConsole::_bind_GetTraits},
	{"GetVendorDisplayName", &luna_wrapper_wxAppConsole::_bind_GetVendorDisplayName},
	{"GetVendorName", &luna_wrapper_wxAppConsole::_bind_GetVendorName},
	{"SetAppDisplayName", &luna_wrapper_wxAppConsole::_bind_SetAppDisplayName},
	{"SetAppName", &luna_wrapper_wxAppConsole::_bind_SetAppName},
	{"SetClassName", &luna_wrapper_wxAppConsole::_bind_SetClassName},
	{"SetVendorDisplayName", &luna_wrapper_wxAppConsole::_bind_SetVendorDisplayName},
	{"SetVendorName", &luna_wrapper_wxAppConsole::_bind_SetVendorName},
	{"SetInstance", &luna_wrapper_wxAppConsole::_bind_SetInstance},
	{"GetInstance", &luna_wrapper_wxAppConsole::_bind_GetInstance},
	{"IsMainLoopRunning", &luna_wrapper_wxAppConsole::_bind_IsMainLoopRunning},
	{"__eq", &luna_wrapper_wxAppConsole::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxAppConsole >::converters[] = {
	{"wxObject", &luna_wrapper_wxAppConsole::_cast_from_wxObject},
	{"wxEventFilter", &luna_wrapper_wxAppConsole::_cast_from_wxEventFilter},
	{0,0}
};

luna_RegEnumType LunaTraits< wxAppConsole >::enumValues[] = {
	{0,0}
};


