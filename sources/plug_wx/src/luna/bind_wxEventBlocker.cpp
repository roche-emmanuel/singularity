#include <plug_common.h>

#include <luna/wrappers/wrapper_wxEventBlocker.h>

class luna_wrapper_wxEventBlocker {
public:
	typedef Luna< wxEventBlocker > luna_t;

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
		//wxEventBlocker* ptr= dynamic_cast< wxEventBlocker* >(Luna< wxObject >::check(L,1));
		wxEventBlocker* ptr= luna_caster< wxObject, wxEventBlocker >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxEventBlocker >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Block(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	// Constructor binds:
	// wxEventBlocker::wxEventBlocker(wxWindow * win, int type = -1)
	static wxEventBlocker* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventBlocker::wxEventBlocker(wxWindow * win, int type = -1) function, expected prototype:\nwxEventBlocker::wxEventBlocker(wxWindow * win, int type = -1)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int type=luatop>1 ? (int)lua_tointeger(L,2) : -1;

		return new wxEventBlocker(win, type);
	}

	// wxEventBlocker::wxEventBlocker(lua_Table * data, wxWindow * win, int type = -1)
	static wxEventBlocker* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventBlocker::wxEventBlocker(lua_Table * data, wxWindow * win, int type = -1) function, expected prototype:\nwxEventBlocker::wxEventBlocker(lua_Table * data, wxWindow * win, int type = -1)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int type=luatop>2 ? (int)lua_tointeger(L,3) : -1;

		return new wrapper_wxEventBlocker(L,NULL, win, type);
	}

	// Overload binder for wxEventBlocker::wxEventBlocker
	static wxEventBlocker* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxEventBlocker, cannot match any of the overloads for function wxEventBlocker:\n  wxEventBlocker(wxWindow *, int)\n  wxEventBlocker(lua_Table *, wxWindow *, int)\n");
		return NULL;
	}


	// Function binds:
	// void wxEventBlocker::Block(int eventType)
	static int _bind_Block(lua_State *L) {
		if (!_lg_typecheck_Block(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxEventBlocker::Block(int eventType) function, expected prototype:\nvoid wxEventBlocker::Block(int eventType)\nClass arguments details:\n");
		}

		int eventType=(int)lua_tointeger(L,2);

		wxEventBlocker* self=Luna< wxObject >::checkSubType< wxEventBlocker >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxEventBlocker::Block(int)");
		}
		self->Block(eventType);

		return 0;
	}

	// wxClassInfo * wxEventBlocker::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxEventBlocker::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxEventBlocker::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxEventBlocker* self=Luna< wxObject >::checkSubType< wxEventBlocker >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxEventBlocker::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxEventBlocker::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// void wxEventBlocker::base_QueueEvent(wxEvent * event)
	static int _bind_base_QueueEvent(lua_State *L) {
		if (!_lg_typecheck_base_QueueEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxEventBlocker::base_QueueEvent(wxEvent * event) function, expected prototype:\nvoid wxEventBlocker::base_QueueEvent(wxEvent * event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvent* event=(Luna< wxObject >::checkSubType< wxEvent >(L,2));

		wxEventBlocker* self=Luna< wxObject >::checkSubType< wxEventBlocker >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxEventBlocker::base_QueueEvent(wxEvent *)");
		}
		self->wxEventBlocker::QueueEvent(event);

		return 0;
	}

	// void wxEventBlocker::base_AddPendingEvent(const wxEvent & event)
	static int _bind_base_AddPendingEvent(lua_State *L) {
		if (!_lg_typecheck_base_AddPendingEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxEventBlocker::base_AddPendingEvent(const wxEvent & event) function, expected prototype:\nvoid wxEventBlocker::base_AddPendingEvent(const wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxEventBlocker::base_AddPendingEvent function");
		}
		const wxEvent & event=*event_ptr;

		wxEventBlocker* self=Luna< wxObject >::checkSubType< wxEventBlocker >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxEventBlocker::base_AddPendingEvent(const wxEvent &)");
		}
		self->wxEventBlocker::AddPendingEvent(event);

		return 0;
	}

	// bool wxEventBlocker::base_ProcessEvent(wxEvent & event)
	static int _bind_base_ProcessEvent(lua_State *L) {
		if (!_lg_typecheck_base_ProcessEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxEventBlocker::base_ProcessEvent(wxEvent & event) function, expected prototype:\nbool wxEventBlocker::base_ProcessEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxEventBlocker::base_ProcessEvent function");
		}
		wxEvent & event=*event_ptr;

		wxEventBlocker* self=Luna< wxObject >::checkSubType< wxEventBlocker >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxEventBlocker::base_ProcessEvent(wxEvent &)");
		}
		bool lret = self->wxEventBlocker::ProcessEvent(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxEventBlocker::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxEventBlocker::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxEventBlocker::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxEventBlocker* self=Luna< wxObject >::checkSubType< wxEventBlocker >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxEventBlocker::base_SetNextHandler(wxEvtHandler *)");
		}
		self->wxEventBlocker::SetNextHandler(handler);

		return 0;
	}

	// void wxEventBlocker::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxEventBlocker::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxEventBlocker::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxEventBlocker* self=Luna< wxObject >::checkSubType< wxEventBlocker >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxEventBlocker::base_SetPreviousHandler(wxEvtHandler *)");
		}
		self->wxEventBlocker::SetPreviousHandler(handler);

		return 0;
	}


	// Operator binds:

};

wxEventBlocker* LunaTraits< wxEventBlocker >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxEventBlocker::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxEventBlocker >::_bind_dtor(wxEventBlocker* obj) {
	delete obj;
}

const char LunaTraits< wxEventBlocker >::className[] = "wxEventBlocker";
const char LunaTraits< wxEventBlocker >::fullName[] = "wxEventBlocker";
const char LunaTraits< wxEventBlocker >::moduleName[] = "wx";
const char* LunaTraits< wxEventBlocker >::parents[] = {"wx.wxEvtHandler", 0};
const int LunaTraits< wxEventBlocker >::hash = 50898209;
const int LunaTraits< wxEventBlocker >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxEventBlocker >::methods[] = {
	{"Block", &luna_wrapper_wxEventBlocker::_bind_Block},
	{"base_GetClassInfo", &luna_wrapper_wxEventBlocker::_bind_base_GetClassInfo},
	{"base_QueueEvent", &luna_wrapper_wxEventBlocker::_bind_base_QueueEvent},
	{"base_AddPendingEvent", &luna_wrapper_wxEventBlocker::_bind_base_AddPendingEvent},
	{"base_ProcessEvent", &luna_wrapper_wxEventBlocker::_bind_base_ProcessEvent},
	{"base_SetNextHandler", &luna_wrapper_wxEventBlocker::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxEventBlocker::_bind_base_SetPreviousHandler},
	{"__eq", &luna_wrapper_wxEventBlocker::_bind___eq},
	{"getTable", &luna_wrapper_wxEventBlocker::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxEventBlocker >::converters[] = {
	{"wxObject", &luna_wrapper_wxEventBlocker::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxEventBlocker >::enumValues[] = {
	{0,0}
};


