#include <plug_common.h>

class luna_wrapper_wxAppConsole {
public:
	typedef Luna< wxAppConsole > luna_t;

	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_CallOnInit(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnInit(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnRun(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnExit(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_CleanUp(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFatalException(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_Exit(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAppName(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAppName(lua_State *L) {
		if( lua_gettop(L) != 2) return false;
		if( lua_isstring(L,2)==0) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAppDisplayName(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAppDisplayName(lua_State *L) {
		if( lua_gettop(L) != 2) return false;
		if( lua_isstring(L,2)==0) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetClassName(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetClassName(lua_State *L) {
		if( lua_gettop(L) != 2) return false;
		if( lua_isstring(L,2)==0) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetVendorName(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVendorName(lua_State *L) {
		if( lua_gettop(L) != 2) return false;
		if( lua_isstring(L,2)==0) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetVendorDisplayName(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVendorDisplayName(lua_State *L) {
		if( lua_gettop(L) != 2) return false;
		if( lua_isstring(L,2)==0) return false;
		return true;
	}

	inline static bool _lg_typecheck_FilterEvent(lua_State *L) {
		if( lua_gettop(L) != 2) return false;
		if(Luna<void>::has_uniqueid(L,2,15769442)) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnUnhandledException(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnExceptionInMainLoop(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_ProcessPendingEvents(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasPendingEvents(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_SuspendProcessingOfPendingEvents(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_ResumeProcessingOfPendingEvents(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemovePendingEventHandler(lua_State *L) {
		if( lua_gettop(L) != 2) return false;
		if( lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendPendingEventHandler(lua_State *L) {
		if( lua_gettop(L) != 2) return false;
		if( lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) return false;
		return true;
	}

	inline static bool _lg_typecheck_DelayPendingEventHandler(lua_State *L) {
		if( lua_gettop(L) != 2) return false;
		if( lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeletePendingEvents(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScheduleForDestruction(lua_State *L) {
		if( lua_gettop(L) != 2) return false;
		if( lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsScheduledForDestruction(lua_State *L) {
		if( lua_gettop(L) != 2) return false;
		if( lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) return false;
		return true;
	}

	inline static bool _lg_typecheck_Pending(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_Dispatch(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_MainLoop(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_ExitMainLoop(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_Yield(lua_State *L) {
		if( lua_gettop(L) != 2) return false;
		if( lua_isboolean(L,2)==0) return false;
		return true;
	}

	inline static bool _lg_typecheck_WakeUpIdle(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_ProcessIdle(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_UsesEventLoop(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnAssertFailure(lua_State *L) {
		if( lua_gettop(L) != 6) return false;
		if( lua_isstring(L,2)==0) return false;
		if( lua_isnumber(L,3)==0) return false;
		if( lua_isstring(L,4)==0) return false;
		if( lua_isstring(L,5)==0) return false;
		if( lua_isstring(L,6)==0) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnAssert(lua_State *L) {
		if( lua_gettop(L) != 5) return false;
		if( lua_isstring(L,2)==0) return false;
		if( lua_isnumber(L,3)==0) return false;
		if( lua_isstring(L,4)==0) return false;
		if( lua_isstring(L,5)==0) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsMainLoopRunning(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_CheckBuildOptions(lua_State *L) {
		if( lua_gettop(L) != 3) return false;
		if( lua_isstring(L,2)==0) return false;
		if( lua_isstring(L,3)==0) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetInstance(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetInstance(lua_State *L) {
		if( lua_gettop(L) != 2) return false;
		if( lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) return false;
		return true;
	}


	// Constructor binds:

	// Function binds:
	static int _bind_CallOnInit(lua_State *L) {
		if (!_lg_typecheck_CallOnInit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in CallOnInit function, expected prototype:\nCallOnInit()");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call CallOnInit(...)");
		}
		bool ret = self->CallOnInit();
		lua_pushboolean(L,ret?1:0);

		return 1;
	}

	static int _bind_OnInit(lua_State *L) {
		if (!_lg_typecheck_OnInit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in OnInit function, expected prototype:\nOnInit()");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call OnInit(...)");
		}
		bool ret = self->OnInit();
		lua_pushboolean(L,ret?1:0);

		return 1;
	}

	static int _bind_OnRun(lua_State *L) {
		if (!_lg_typecheck_OnRun(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in OnRun function, expected prototype:\nOnRun()");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call OnRun(...)");
		}
		int ret = self->OnRun();
		lua_pushnumber(L,ret);

		return 1;
	}

	static int _bind_OnExit(lua_State *L) {
		if (!_lg_typecheck_OnExit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in OnExit function, expected prototype:\nOnExit()");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call OnExit(...)");
		}
		int ret = self->OnExit();
		lua_pushnumber(L,ret);

		return 1;
	}

	static int _bind_CleanUp(lua_State *L) {
		if (!_lg_typecheck_CleanUp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in CleanUp function, expected prototype:\nCleanUp()");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call CleanUp(...)");
		}
		self->CleanUp();

		return 0;
	}

	static int _bind_OnFatalException(lua_State *L) {
		if (!_lg_typecheck_OnFatalException(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in OnFatalException function, expected prototype:\nOnFatalException()");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call OnFatalException(...)");
		}
		self->OnFatalException();

		return 0;
	}

	static int _bind_Exit(lua_State *L) {
		if (!_lg_typecheck_Exit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Exit function, expected prototype:\nExit()");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Exit(...)");
		}
		self->Exit();

		return 0;
	}

	static int _bind_GetAppName(lua_State *L) {
		if (!_lg_typecheck_GetAppName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GetAppName function, expected prototype:\nGetAppName()");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call GetAppName(...)");
		}
		wxString ret = self->GetAppName();
		lua_pushlstring(L,ret.data(),ret.size());

		return 1;
	}

	static int _bind_SetAppName(lua_State *L) {
		if (!_lg_typecheck_SetAppName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SetAppName function, expected prototype:\nSetAppName(const wxString&)");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SetAppName(...)");
		}
		self->SetAppName(name);

		return 0;
	}

	static int _bind_GetAppDisplayName(lua_State *L) {
		if (!_lg_typecheck_GetAppDisplayName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GetAppDisplayName function, expected prototype:\nGetAppDisplayName()");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call GetAppDisplayName(...)");
		}
		wxString ret = self->GetAppDisplayName();
		lua_pushlstring(L,ret.data(),ret.size());

		return 1;
	}

	static int _bind_SetAppDisplayName(lua_State *L) {
		if (!_lg_typecheck_SetAppDisplayName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SetAppDisplayName function, expected prototype:\nSetAppDisplayName(const wxString&)");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SetAppDisplayName(...)");
		}
		self->SetAppDisplayName(name);

		return 0;
	}

	static int _bind_GetClassName(lua_State *L) {
		if (!_lg_typecheck_GetClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GetClassName function, expected prototype:\nGetClassName()");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call GetClassName(...)");
		}
		wxString ret = self->GetClassName();
		lua_pushlstring(L,ret.data(),ret.size());

		return 1;
	}

	static int _bind_SetClassName(lua_State *L) {
		if (!_lg_typecheck_SetClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SetClassName function, expected prototype:\nSetClassName(const wxString&)");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SetClassName(...)");
		}
		self->SetClassName(name);

		return 0;
	}

	static int _bind_GetVendorName(lua_State *L) {
		if (!_lg_typecheck_GetVendorName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GetVendorName function, expected prototype:\nGetVendorName()");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call GetVendorName(...)");
		}
		const wxString& ret = self->GetVendorName();
		lua_pushlstring(L,ret.data(),ret.size());

		return 1;
	}

	static int _bind_SetVendorName(lua_State *L) {
		if (!_lg_typecheck_SetVendorName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SetVendorName function, expected prototype:\nSetVendorName(const wxString&)");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SetVendorName(...)");
		}
		self->SetVendorName(name);

		return 0;
	}

	static int _bind_GetVendorDisplayName(lua_State *L) {
		if (!_lg_typecheck_GetVendorDisplayName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GetVendorDisplayName function, expected prototype:\nGetVendorDisplayName()");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call GetVendorDisplayName(...)");
		}
		const wxString& ret = self->GetVendorDisplayName();
		lua_pushlstring(L,ret.data(),ret.size());

		return 1;
	}

	static int _bind_SetVendorDisplayName(lua_State *L) {
		if (!_lg_typecheck_SetVendorDisplayName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SetVendorDisplayName function, expected prototype:\nSetVendorDisplayName(const wxString&)");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SetVendorDisplayName(...)");
		}
		self->SetVendorDisplayName(name);

		return 0;
	}

	static int _bind_FilterEvent(lua_State *L) {
		if (!_lg_typecheck_FilterEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in FilterEvent function, expected prototype:\nFilterEvent(wxEvent&)");
		}

		wxEvent* event=dynamic_cast< wxEvent* >(Luna< wxEvent >::check(L,2));

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call FilterEvent(...)");
		}
		int ret = self->FilterEvent(*event);
		lua_pushnumber(L,ret);

		return 1;
	}

	static int _bind_OnUnhandledException(lua_State *L) {
		if (!_lg_typecheck_OnUnhandledException(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in OnUnhandledException function, expected prototype:\nOnUnhandledException()");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call OnUnhandledException(...)");
		}
		self->OnUnhandledException();

		return 0;
	}

	static int _bind_OnExceptionInMainLoop(lua_State *L) {
		if (!_lg_typecheck_OnExceptionInMainLoop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in OnExceptionInMainLoop function, expected prototype:\nOnExceptionInMainLoop()");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call OnExceptionInMainLoop(...)");
		}
		bool ret = self->OnExceptionInMainLoop();
		lua_pushboolean(L,ret?1:0);

		return 1;
	}

	static int _bind_ProcessPendingEvents(lua_State *L) {
		if (!_lg_typecheck_ProcessPendingEvents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in ProcessPendingEvents function, expected prototype:\nProcessPendingEvents()");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ProcessPendingEvents(...)");
		}
		self->ProcessPendingEvents();

		return 0;
	}

	static int _bind_HasPendingEvents(lua_State *L) {
		if (!_lg_typecheck_HasPendingEvents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in HasPendingEvents function, expected prototype:\nHasPendingEvents()");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call HasPendingEvents(...)");
		}
		bool ret = self->HasPendingEvents();
		lua_pushboolean(L,ret?1:0);

		return 1;
	}

	static int _bind_SuspendProcessingOfPendingEvents(lua_State *L) {
		if (!_lg_typecheck_SuspendProcessingOfPendingEvents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SuspendProcessingOfPendingEvents function, expected prototype:\nSuspendProcessingOfPendingEvents()");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SuspendProcessingOfPendingEvents(...)");
		}
		self->SuspendProcessingOfPendingEvents();

		return 0;
	}

	static int _bind_ResumeProcessingOfPendingEvents(lua_State *L) {
		if (!_lg_typecheck_ResumeProcessingOfPendingEvents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in ResumeProcessingOfPendingEvents function, expected prototype:\nResumeProcessingOfPendingEvents()");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ResumeProcessingOfPendingEvents(...)");
		}
		self->ResumeProcessingOfPendingEvents();

		return 0;
	}

	static int _bind_RemovePendingEventHandler(lua_State *L) {
		if (!_lg_typecheck_RemovePendingEventHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in RemovePendingEventHandler function, expected prototype:\nRemovePendingEventHandler(wxEvtHandler*)");
		}

		wxEvtHandler* toRemove=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,2));

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call RemovePendingEventHandler(...)");
		}
		self->RemovePendingEventHandler(toRemove);

		return 0;
	}

	static int _bind_AppendPendingEventHandler(lua_State *L) {
		if (!_lg_typecheck_AppendPendingEventHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in AppendPendingEventHandler function, expected prototype:\nAppendPendingEventHandler(wxEvtHandler*)");
		}

		wxEvtHandler* toAppend=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,2));

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call AppendPendingEventHandler(...)");
		}
		self->AppendPendingEventHandler(toAppend);

		return 0;
	}

	static int _bind_DelayPendingEventHandler(lua_State *L) {
		if (!_lg_typecheck_DelayPendingEventHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in DelayPendingEventHandler function, expected prototype:\nDelayPendingEventHandler(wxEvtHandler*)");
		}

		wxEvtHandler* toDelay=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,2));

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call DelayPendingEventHandler(...)");
		}
		self->DelayPendingEventHandler(toDelay);

		return 0;
	}

	static int _bind_DeletePendingEvents(lua_State *L) {
		if (!_lg_typecheck_DeletePendingEvents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in DeletePendingEvents function, expected prototype:\nDeletePendingEvents()");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call DeletePendingEvents(...)");
		}
		self->DeletePendingEvents();

		return 0;
	}

	static int _bind_ScheduleForDestruction(lua_State *L) {
		if (!_lg_typecheck_ScheduleForDestruction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in ScheduleForDestruction function, expected prototype:\nScheduleForDestruction(wxObject*)");
		}

		wxObject* object=dynamic_cast< wxObject* >(Luna< wxObject >::check(L,2));

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ScheduleForDestruction(...)");
		}
		self->ScheduleForDestruction(object);

		return 0;
	}

	static int _bind_IsScheduledForDestruction(lua_State *L) {
		if (!_lg_typecheck_IsScheduledForDestruction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in IsScheduledForDestruction function, expected prototype:\nIsScheduledForDestruction(wxObject*)");
		}

		wxObject* object=dynamic_cast< wxObject* >(Luna< wxObject >::check(L,2));

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IsScheduledForDestruction(...)");
		}
		bool ret = self->IsScheduledForDestruction(object);
		lua_pushboolean(L,ret?1:0);

		return 1;
	}

	static int _bind_Pending(lua_State *L) {
		if (!_lg_typecheck_Pending(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Pending function, expected prototype:\nPending()");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Pending(...)");
		}
		bool ret = self->Pending();
		lua_pushboolean(L,ret?1:0);

		return 1;
	}

	static int _bind_Dispatch(lua_State *L) {
		if (!_lg_typecheck_Dispatch(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Dispatch function, expected prototype:\nDispatch()");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Dispatch(...)");
		}
		bool ret = self->Dispatch();
		lua_pushboolean(L,ret?1:0);

		return 1;
	}

	static int _bind_MainLoop(lua_State *L) {
		if (!_lg_typecheck_MainLoop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in MainLoop function, expected prototype:\nMainLoop()");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call MainLoop(...)");
		}
		int ret = self->MainLoop();
		lua_pushnumber(L,ret);

		return 1;
	}

	static int _bind_ExitMainLoop(lua_State *L) {
		if (!_lg_typecheck_ExitMainLoop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in ExitMainLoop function, expected prototype:\nExitMainLoop()");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ExitMainLoop(...)");
		}
		self->ExitMainLoop();

		return 0;
	}

	static int _bind_Yield(lua_State *L) {
		if (!_lg_typecheck_Yield(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Yield function, expected prototype:\nYield(bool)");
		}

		bool onlyIfNeeded=(bool)lua_toboolean(L,2);

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Yield(...)");
		}
		bool ret = self->Yield(onlyIfNeeded);
		lua_pushboolean(L,ret?1:0);

		return 1;
	}

	static int _bind_WakeUpIdle(lua_State *L) {
		if (!_lg_typecheck_WakeUpIdle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in WakeUpIdle function, expected prototype:\nWakeUpIdle()");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call WakeUpIdle(...)");
		}
		self->WakeUpIdle();

		return 0;
	}

	static int _bind_ProcessIdle(lua_State *L) {
		if (!_lg_typecheck_ProcessIdle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in ProcessIdle function, expected prototype:\nProcessIdle()");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ProcessIdle(...)");
		}
		bool ret = self->ProcessIdle();
		lua_pushboolean(L,ret?1:0);

		return 1;
	}

	static int _bind_UsesEventLoop(lua_State *L) {
		if (!_lg_typecheck_UsesEventLoop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in UsesEventLoop function, expected prototype:\nUsesEventLoop()");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call UsesEventLoop(...)");
		}
		bool ret = self->UsesEventLoop();
		lua_pushboolean(L,ret?1:0);

		return 1;
	}

	static int _bind_OnAssertFailure(lua_State *L) {
		if (!_lg_typecheck_OnAssertFailure(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in OnAssertFailure function, expected prototype:\nOnAssertFailure(const wxChar*, int, const wxChar*, const wxChar*, const wxChar*)");
		}

		wxChar* file = (wxChar*)lua_tostring(L,2);
		int line=(int)lua_tonumber(L,3);
		wxChar* func = (wxChar*)lua_tostring(L,4);
		wxChar* cond = (wxChar*)lua_tostring(L,5);
		wxChar* msg = (wxChar*)lua_tostring(L,6);

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call OnAssertFailure(...)");
		}
		self->OnAssertFailure(file, line, func, cond, msg);

		return 0;
	}

	static int _bind_OnAssert(lua_State *L) {
		if (!_lg_typecheck_OnAssert(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in OnAssert function, expected prototype:\nOnAssert(const wxChar*, int, const wxChar*, const wxChar*)");
		}

		wxChar* file = (wxChar*)lua_tostring(L,2);
		int line=(int)lua_tonumber(L,3);
		wxChar* cond = (wxChar*)lua_tostring(L,4);
		wxChar* msg = (wxChar*)lua_tostring(L,5);

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call OnAssert(...)");
		}
		self->OnAssert(file, line, cond, msg);

		return 0;
	}

	static int _bind_IsMainLoopRunning(lua_State *L) {
		if (!_lg_typecheck_IsMainLoopRunning(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in IsMainLoopRunning function, expected prototype:\nIsMainLoopRunning()");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IsMainLoopRunning(...)");
		}
		bool ret = self->IsMainLoopRunning();
		lua_pushboolean(L,ret?1:0);

		return 1;
	}

	static int _bind_CheckBuildOptions(lua_State *L) {
		if (!_lg_typecheck_CheckBuildOptions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in CheckBuildOptions function, expected prototype:\nCheckBuildOptions(const char*, const char*)");
		}

		const char* optionsSignature=(const char*)lua_tostring(L,2);
		const char* componentName=(const char*)lua_tostring(L,3);

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call CheckBuildOptions(...)");
		}
		bool ret = self->CheckBuildOptions(optionsSignature, componentName);
		lua_pushboolean(L,ret?1:0);

		return 1;
	}

	static int _bind_GetInstance(lua_State *L) {
		if (!_lg_typecheck_GetInstance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GetInstance function, expected prototype:\nGetInstance()");
		}


		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call GetInstance(...)");
		}
		wxAppConsole* ret = self->GetInstance();
		Luna< wxAppConsole >::push(L,ret,false,"wxAppConsole");

		return 1;
	}

	static int _bind_SetInstance(lua_State *L) {
		if (!_lg_typecheck_SetInstance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SetInstance function, expected prototype:\nSetInstance(wxAppConsole*)");
		}

		wxAppConsole* app=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,2));

		wxAppConsole* self=dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SetInstance(...)");
		}
		self->SetInstance(app);

		return 0;
	}

};

wxAppConsole* LunaTraits< wxAppConsole >::_bind_ctor(lua_State *L) {
	return NULL; // No default constructor.
}

void LunaTraits< wxAppConsole >::_bind_dtor(wxAppConsole* obj) {
	delete obj;
}

const char LunaTraits< wxAppConsole >::className[] = "wxAppConsole";
const char LunaTraits< wxAppConsole >::moduleName[] = "wx";
const int LunaTraits< wxAppConsole >::uniqueIDs = {56813631,0};

luna_RegType LunaTraits< wxAppConsole >::methods[] = {
	{"CallOnInit", &luna_wrapper_wxAppConsole::_bind_CallOnInit},
	{"OnInit", &luna_wrapper_wxAppConsole::_bind_OnInit},
	{"OnRun", &luna_wrapper_wxAppConsole::_bind_OnRun},
	{"OnExit", &luna_wrapper_wxAppConsole::_bind_OnExit},
	{"CleanUp", &luna_wrapper_wxAppConsole::_bind_CleanUp},
	{"OnFatalException", &luna_wrapper_wxAppConsole::_bind_OnFatalException},
	{"Exit", &luna_wrapper_wxAppConsole::_bind_Exit},
	{"GetAppName", &luna_wrapper_wxAppConsole::_bind_GetAppName},
	{"SetAppName", &luna_wrapper_wxAppConsole::_bind_SetAppName},
	{"GetAppDisplayName", &luna_wrapper_wxAppConsole::_bind_GetAppDisplayName},
	{"SetAppDisplayName", &luna_wrapper_wxAppConsole::_bind_SetAppDisplayName},
	{"GetClassName", &luna_wrapper_wxAppConsole::_bind_GetClassName},
	{"SetClassName", &luna_wrapper_wxAppConsole::_bind_SetClassName},
	{"GetVendorName", &luna_wrapper_wxAppConsole::_bind_GetVendorName},
	{"SetVendorName", &luna_wrapper_wxAppConsole::_bind_SetVendorName},
	{"GetVendorDisplayName", &luna_wrapper_wxAppConsole::_bind_GetVendorDisplayName},
	{"SetVendorDisplayName", &luna_wrapper_wxAppConsole::_bind_SetVendorDisplayName},
	{"FilterEvent", &luna_wrapper_wxAppConsole::_bind_FilterEvent},
	{"OnUnhandledException", &luna_wrapper_wxAppConsole::_bind_OnUnhandledException},
	{"OnExceptionInMainLoop", &luna_wrapper_wxAppConsole::_bind_OnExceptionInMainLoop},
	{"ProcessPendingEvents", &luna_wrapper_wxAppConsole::_bind_ProcessPendingEvents},
	{"HasPendingEvents", &luna_wrapper_wxAppConsole::_bind_HasPendingEvents},
	{"SuspendProcessingOfPendingEvents", &luna_wrapper_wxAppConsole::_bind_SuspendProcessingOfPendingEvents},
	{"ResumeProcessingOfPendingEvents", &luna_wrapper_wxAppConsole::_bind_ResumeProcessingOfPendingEvents},
	{"RemovePendingEventHandler", &luna_wrapper_wxAppConsole::_bind_RemovePendingEventHandler},
	{"AppendPendingEventHandler", &luna_wrapper_wxAppConsole::_bind_AppendPendingEventHandler},
	{"DelayPendingEventHandler", &luna_wrapper_wxAppConsole::_bind_DelayPendingEventHandler},
	{"DeletePendingEvents", &luna_wrapper_wxAppConsole::_bind_DeletePendingEvents},
	{"ScheduleForDestruction", &luna_wrapper_wxAppConsole::_bind_ScheduleForDestruction},
	{"IsScheduledForDestruction", &luna_wrapper_wxAppConsole::_bind_IsScheduledForDestruction},
	{"Pending", &luna_wrapper_wxAppConsole::_bind_Pending},
	{"Dispatch", &luna_wrapper_wxAppConsole::_bind_Dispatch},
	{"MainLoop", &luna_wrapper_wxAppConsole::_bind_MainLoop},
	{"ExitMainLoop", &luna_wrapper_wxAppConsole::_bind_ExitMainLoop},
	{"Yield", &luna_wrapper_wxAppConsole::_bind_Yield},
	{"WakeUpIdle", &luna_wrapper_wxAppConsole::_bind_WakeUpIdle},
	{"ProcessIdle", &luna_wrapper_wxAppConsole::_bind_ProcessIdle},
	{"UsesEventLoop", &luna_wrapper_wxAppConsole::_bind_UsesEventLoop},
	{"OnAssertFailure", &luna_wrapper_wxAppConsole::_bind_OnAssertFailure},
	{"OnAssert", &luna_wrapper_wxAppConsole::_bind_OnAssert},
	{"IsMainLoopRunning", &luna_wrapper_wxAppConsole::_bind_IsMainLoopRunning},
	{"CheckBuildOptions", &luna_wrapper_wxAppConsole::_bind_CheckBuildOptions},
	{"GetInstance", &luna_wrapper_wxAppConsole::_bind_GetInstance},
	{"SetInstance", &luna_wrapper_wxAppConsole::_bind_SetInstance},
	{0,0}
};


