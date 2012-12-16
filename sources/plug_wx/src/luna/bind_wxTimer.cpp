#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTimer.h>

class luna_wrapper_wxTimer {
public:
	typedef Luna< wxTimer > luna_t;

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
		//wxTimer* ptr= dynamic_cast< wxTimer* >(Luna< wxObject >::check(L,1));
		wxTimer* ptr= luna_caster< wxObject, wxTimer >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTimer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetInterval(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOwner(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOneShot(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsRunning(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Notify(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetOwner(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Start(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Stop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_Notify(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Start(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Stop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTimer::wxTimer()
	static wxTimer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTimer::wxTimer() function, expected prototype:\nwxTimer::wxTimer()\nClass arguments details:\n");
		}


		return new wxTimer();
	}

	// wxTimer::wxTimer(wxEvtHandler * owner, int id = -1)
	static wxTimer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTimer::wxTimer(wxEvtHandler * owner, int id = -1) function, expected prototype:\nwxTimer::wxTimer(wxEvtHandler * owner, int id = -1)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxEvtHandler* owner=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : -1;

		return new wxTimer(owner, id);
	}

	// wxTimer::wxTimer(lua_Table * data)
	static wxTimer* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTimer::wxTimer(lua_Table * data) function, expected prototype:\nwxTimer::wxTimer(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxTimer(L,NULL);
	}

	// wxTimer::wxTimer(lua_Table * data, wxEvtHandler * owner, int id = -1)
	static wxTimer* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTimer::wxTimer(lua_Table * data, wxEvtHandler * owner, int id = -1) function, expected prototype:\nwxTimer::wxTimer(lua_Table * data, wxEvtHandler * owner, int id = -1)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxEvtHandler* owner=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : -1;

		return new wrapper_wxTimer(L,NULL, owner, id);
	}

	// Overload binder for wxTimer::wxTimer
	static wxTimer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxTimer, cannot match any of the overloads for function wxTimer:\n  wxTimer()\n  wxTimer(wxEvtHandler *, int)\n  wxTimer(lua_Table *)\n  wxTimer(lua_Table *, wxEvtHandler *, int)\n");
		return NULL;
	}


	// Function binds:
	// int wxTimer::GetId() const
	static int _bind_GetId(lua_State *L) {
		if (!_lg_typecheck_GetId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTimer::GetId() const function, expected prototype:\nint wxTimer::GetId() const\nClass arguments details:\n");
		}


		wxTimer* self=Luna< wxObject >::checkSubType< wxTimer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTimer::GetId() const");
		}
		int lret = self->GetId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTimer::GetInterval() const
	static int _bind_GetInterval(lua_State *L) {
		if (!_lg_typecheck_GetInterval(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTimer::GetInterval() const function, expected prototype:\nint wxTimer::GetInterval() const\nClass arguments details:\n");
		}


		wxTimer* self=Luna< wxObject >::checkSubType< wxTimer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTimer::GetInterval() const");
		}
		int lret = self->GetInterval();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvtHandler * wxTimer::GetOwner() const
	static int _bind_GetOwner(lua_State *L) {
		if (!_lg_typecheck_GetOwner(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEvtHandler * wxTimer::GetOwner() const function, expected prototype:\nwxEvtHandler * wxTimer::GetOwner() const\nClass arguments details:\n");
		}


		wxTimer* self=Luna< wxObject >::checkSubType< wxTimer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEvtHandler * wxTimer::GetOwner() const");
		}
		wxEvtHandler * lret = self->GetOwner();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvtHandler >::push(L,lret,false);

		return 1;
	}

	// bool wxTimer::IsOneShot() const
	static int _bind_IsOneShot(lua_State *L) {
		if (!_lg_typecheck_IsOneShot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTimer::IsOneShot() const function, expected prototype:\nbool wxTimer::IsOneShot() const\nClass arguments details:\n");
		}


		wxTimer* self=Luna< wxObject >::checkSubType< wxTimer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTimer::IsOneShot() const");
		}
		bool lret = self->IsOneShot();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTimer::IsRunning() const
	static int _bind_IsRunning(lua_State *L) {
		if (!_lg_typecheck_IsRunning(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTimer::IsRunning() const function, expected prototype:\nbool wxTimer::IsRunning() const\nClass arguments details:\n");
		}


		wxTimer* self=Luna< wxObject >::checkSubType< wxTimer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTimer::IsRunning() const");
		}
		bool lret = self->IsRunning();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTimer::Notify()
	static int _bind_Notify(lua_State *L) {
		if (!_lg_typecheck_Notify(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTimer::Notify() function, expected prototype:\nvoid wxTimer::Notify()\nClass arguments details:\n");
		}


		wxTimer* self=Luna< wxObject >::checkSubType< wxTimer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTimer::Notify()");
		}
		self->Notify();

		return 0;
	}

	// void wxTimer::SetOwner(wxEvtHandler * owner, int id = -1)
	static int _bind_SetOwner(lua_State *L) {
		if (!_lg_typecheck_SetOwner(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTimer::SetOwner(wxEvtHandler * owner, int id = -1) function, expected prototype:\nvoid wxTimer::SetOwner(wxEvtHandler * owner, int id = -1)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxEvtHandler* owner=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : -1;

		wxTimer* self=Luna< wxObject >::checkSubType< wxTimer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTimer::SetOwner(wxEvtHandler *, int)");
		}
		self->SetOwner(owner, id);

		return 0;
	}

	// bool wxTimer::Start(int milliseconds = -1, bool oneShot = false)
	static int _bind_Start(lua_State *L) {
		if (!_lg_typecheck_Start(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTimer::Start(int milliseconds = -1, bool oneShot = false) function, expected prototype:\nbool wxTimer::Start(int milliseconds = -1, bool oneShot = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int milliseconds=luatop>1 ? (int)lua_tointeger(L,2) : -1;
		bool oneShot=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		wxTimer* self=Luna< wxObject >::checkSubType< wxTimer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTimer::Start(int, bool)");
		}
		bool lret = self->Start(milliseconds, oneShot);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTimer::Stop()
	static int _bind_Stop(lua_State *L) {
		if (!_lg_typecheck_Stop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTimer::Stop() function, expected prototype:\nvoid wxTimer::Stop()\nClass arguments details:\n");
		}


		wxTimer* self=Luna< wxObject >::checkSubType< wxTimer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTimer::Stop()");
		}
		self->Stop();

		return 0;
	}

	// wxClassInfo * wxTimer::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxTimer::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxTimer::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxTimer* self=Luna< wxObject >::checkSubType< wxTimer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxTimer::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxTimer::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// void wxTimer::base_QueueEvent(wxEvent * event)
	static int _bind_base_QueueEvent(lua_State *L) {
		if (!_lg_typecheck_base_QueueEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTimer::base_QueueEvent(wxEvent * event) function, expected prototype:\nvoid wxTimer::base_QueueEvent(wxEvent * event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvent* event=(Luna< wxObject >::checkSubType< wxEvent >(L,2));

		wxTimer* self=Luna< wxObject >::checkSubType< wxTimer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTimer::base_QueueEvent(wxEvent *)");
		}
		self->wxTimer::QueueEvent(event);

		return 0;
	}

	// void wxTimer::base_AddPendingEvent(const wxEvent & event)
	static int _bind_base_AddPendingEvent(lua_State *L) {
		if (!_lg_typecheck_base_AddPendingEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTimer::base_AddPendingEvent(const wxEvent & event) function, expected prototype:\nvoid wxTimer::base_AddPendingEvent(const wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxTimer::base_AddPendingEvent function");
		}
		const wxEvent & event=*event_ptr;

		wxTimer* self=Luna< wxObject >::checkSubType< wxTimer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTimer::base_AddPendingEvent(const wxEvent &)");
		}
		self->wxTimer::AddPendingEvent(event);

		return 0;
	}

	// bool wxTimer::base_ProcessEvent(wxEvent & event)
	static int _bind_base_ProcessEvent(lua_State *L) {
		if (!_lg_typecheck_base_ProcessEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTimer::base_ProcessEvent(wxEvent & event) function, expected prototype:\nbool wxTimer::base_ProcessEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxTimer::base_ProcessEvent function");
		}
		wxEvent & event=*event_ptr;

		wxTimer* self=Luna< wxObject >::checkSubType< wxTimer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTimer::base_ProcessEvent(wxEvent &)");
		}
		bool lret = self->wxTimer::ProcessEvent(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTimer::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTimer::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxTimer::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxTimer* self=Luna< wxObject >::checkSubType< wxTimer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTimer::base_SetNextHandler(wxEvtHandler *)");
		}
		self->wxTimer::SetNextHandler(handler);

		return 0;
	}

	// void wxTimer::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTimer::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxTimer::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxTimer* self=Luna< wxObject >::checkSubType< wxTimer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTimer::base_SetPreviousHandler(wxEvtHandler *)");
		}
		self->wxTimer::SetPreviousHandler(handler);

		return 0;
	}

	// void wxTimer::base_Notify()
	static int _bind_base_Notify(lua_State *L) {
		if (!_lg_typecheck_base_Notify(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTimer::base_Notify() function, expected prototype:\nvoid wxTimer::base_Notify()\nClass arguments details:\n");
		}


		wxTimer* self=Luna< wxObject >::checkSubType< wxTimer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTimer::base_Notify()");
		}
		self->wxTimer::Notify();

		return 0;
	}

	// bool wxTimer::base_Start(int milliseconds = -1, bool oneShot = false)
	static int _bind_base_Start(lua_State *L) {
		if (!_lg_typecheck_base_Start(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTimer::base_Start(int milliseconds = -1, bool oneShot = false) function, expected prototype:\nbool wxTimer::base_Start(int milliseconds = -1, bool oneShot = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int milliseconds=luatop>1 ? (int)lua_tointeger(L,2) : -1;
		bool oneShot=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		wxTimer* self=Luna< wxObject >::checkSubType< wxTimer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTimer::base_Start(int, bool)");
		}
		bool lret = self->wxTimer::Start(milliseconds, oneShot);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTimer::base_Stop()
	static int _bind_base_Stop(lua_State *L) {
		if (!_lg_typecheck_base_Stop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTimer::base_Stop() function, expected prototype:\nvoid wxTimer::base_Stop()\nClass arguments details:\n");
		}


		wxTimer* self=Luna< wxObject >::checkSubType< wxTimer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTimer::base_Stop()");
		}
		self->wxTimer::Stop();

		return 0;
	}


	// Operator binds:

};

wxTimer* LunaTraits< wxTimer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTimer::_bind_ctor(L);
}

void LunaTraits< wxTimer >::_bind_dtor(wxTimer* obj) {
	delete obj;
}

const char LunaTraits< wxTimer >::className[] = "wxTimer";
const char LunaTraits< wxTimer >::fullName[] = "wxTimer";
const char LunaTraits< wxTimer >::moduleName[] = "wx";
const char* LunaTraits< wxTimer >::parents[] = {"wx.wxEvtHandler", 0};
const int LunaTraits< wxTimer >::hash = 29242381;
const int LunaTraits< wxTimer >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxTimer >::methods[] = {
	{"GetId", &luna_wrapper_wxTimer::_bind_GetId},
	{"GetInterval", &luna_wrapper_wxTimer::_bind_GetInterval},
	{"GetOwner", &luna_wrapper_wxTimer::_bind_GetOwner},
	{"IsOneShot", &luna_wrapper_wxTimer::_bind_IsOneShot},
	{"IsRunning", &luna_wrapper_wxTimer::_bind_IsRunning},
	{"Notify", &luna_wrapper_wxTimer::_bind_Notify},
	{"SetOwner", &luna_wrapper_wxTimer::_bind_SetOwner},
	{"Start", &luna_wrapper_wxTimer::_bind_Start},
	{"Stop", &luna_wrapper_wxTimer::_bind_Stop},
	{"base_GetClassInfo", &luna_wrapper_wxTimer::_bind_base_GetClassInfo},
	{"base_QueueEvent", &luna_wrapper_wxTimer::_bind_base_QueueEvent},
	{"base_AddPendingEvent", &luna_wrapper_wxTimer::_bind_base_AddPendingEvent},
	{"base_ProcessEvent", &luna_wrapper_wxTimer::_bind_base_ProcessEvent},
	{"base_SetNextHandler", &luna_wrapper_wxTimer::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxTimer::_bind_base_SetPreviousHandler},
	{"base_Notify", &luna_wrapper_wxTimer::_bind_base_Notify},
	{"base_Start", &luna_wrapper_wxTimer::_bind_base_Start},
	{"base_Stop", &luna_wrapper_wxTimer::_bind_base_Stop},
	{"__eq", &luna_wrapper_wxTimer::_bind___eq},
	{"getTable", &luna_wrapper_wxTimer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxTimer >::converters[] = {
	{"wxObject", &luna_wrapper_wxTimer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTimer >::enumValues[] = {
	{0,0}
};


