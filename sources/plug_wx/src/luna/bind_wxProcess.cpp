#include <plug_common.h>

class luna_wrapper_wxProcess {
public:
	typedef Luna< wxProcess > luna_t;

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
		wxProcess* ptr= dynamic_cast< wxProcess* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxProcess >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( luatop>0 && (lua_isnil(L,1)==0 && !dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_CloseOutput(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Detach(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetErrorStream(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetInputStream(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOutputStream(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsErrorAvailable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsInputAvailable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsInputOpened(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnTerminate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Redirect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Exists(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Open(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxProcess::wxProcess(wxEvtHandler * parent = NULL, int id = -1)
	static wxProcess* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxProcess::wxProcess(wxEvtHandler * parent = NULL, int id = -1) function, expected prototype:\nwxProcess::wxProcess(wxEvtHandler * parent = NULL, int id = -1)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxEvtHandler* parent=luatop>0 ? dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1)) : (wxEvtHandler*)NULL;
		int id=luatop>1 ? (int)lua_tointeger(L,2) : -1;

		return new wxProcess(parent, id);
	}

	// wxProcess::wxProcess(int flags)
	static wxProcess* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxProcess::wxProcess(int flags) function, expected prototype:\nwxProcess::wxProcess(int flags)\nClass arguments details:\n");
		}

		int flags=(int)lua_tointeger(L,1);

		return new wxProcess(flags);
	}

	// Overload binder for wxProcess::wxProcess
	static wxProcess* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxProcess, cannot match any of the overloads for function wxProcess:\n  wxProcess(wxEvtHandler *, int)\n  wxProcess(int)\n");
		return NULL;
	}


	// Function binds:
	// void wxProcess::CloseOutput()
	static int _bind_CloseOutput(lua_State *L) {
		if (!_lg_typecheck_CloseOutput(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxProcess::CloseOutput() function, expected prototype:\nvoid wxProcess::CloseOutput()\nClass arguments details:\n");
		}


		wxProcess* self=dynamic_cast< wxProcess* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxProcess::CloseOutput()");
		}
		self->CloseOutput();

		return 0;
	}

	// void wxProcess::Detach()
	static int _bind_Detach(lua_State *L) {
		if (!_lg_typecheck_Detach(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxProcess::Detach() function, expected prototype:\nvoid wxProcess::Detach()\nClass arguments details:\n");
		}


		wxProcess* self=dynamic_cast< wxProcess* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxProcess::Detach()");
		}
		self->Detach();

		return 0;
	}

	// wxInputStream * wxProcess::GetErrorStream() const
	static int _bind_GetErrorStream(lua_State *L) {
		if (!_lg_typecheck_GetErrorStream(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxInputStream * wxProcess::GetErrorStream() const function, expected prototype:\nwxInputStream * wxProcess::GetErrorStream() const\nClass arguments details:\n");
		}


		wxProcess* self=dynamic_cast< wxProcess* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxInputStream * wxProcess::GetErrorStream() const");
		}
		wxInputStream * lret = self->GetErrorStream();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxInputStream >::push(L,lret,false);

		return 1;
	}

	// wxInputStream * wxProcess::GetInputStream() const
	static int _bind_GetInputStream(lua_State *L) {
		if (!_lg_typecheck_GetInputStream(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxInputStream * wxProcess::GetInputStream() const function, expected prototype:\nwxInputStream * wxProcess::GetInputStream() const\nClass arguments details:\n");
		}


		wxProcess* self=dynamic_cast< wxProcess* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxInputStream * wxProcess::GetInputStream() const");
		}
		wxInputStream * lret = self->GetInputStream();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxInputStream >::push(L,lret,false);

		return 1;
	}

	// wxOutputStream * wxProcess::GetOutputStream() const
	static int _bind_GetOutputStream(lua_State *L) {
		if (!_lg_typecheck_GetOutputStream(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxOutputStream * wxProcess::GetOutputStream() const function, expected prototype:\nwxOutputStream * wxProcess::GetOutputStream() const\nClass arguments details:\n");
		}


		wxProcess* self=dynamic_cast< wxProcess* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxOutputStream * wxProcess::GetOutputStream() const");
		}
		wxOutputStream * lret = self->GetOutputStream();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxOutputStream >::push(L,lret,false);

		return 1;
	}

	// long wxProcess::GetPid() const
	static int _bind_GetPid(lua_State *L) {
		if (!_lg_typecheck_GetPid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxProcess::GetPid() const function, expected prototype:\nlong wxProcess::GetPid() const\nClass arguments details:\n");
		}


		wxProcess* self=dynamic_cast< wxProcess* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxProcess::GetPid() const");
		}
		long lret = self->GetPid();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxProcess::IsErrorAvailable() const
	static int _bind_IsErrorAvailable(lua_State *L) {
		if (!_lg_typecheck_IsErrorAvailable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxProcess::IsErrorAvailable() const function, expected prototype:\nbool wxProcess::IsErrorAvailable() const\nClass arguments details:\n");
		}


		wxProcess* self=dynamic_cast< wxProcess* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxProcess::IsErrorAvailable() const");
		}
		bool lret = self->IsErrorAvailable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProcess::IsInputAvailable() const
	static int _bind_IsInputAvailable(lua_State *L) {
		if (!_lg_typecheck_IsInputAvailable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxProcess::IsInputAvailable() const function, expected prototype:\nbool wxProcess::IsInputAvailable() const\nClass arguments details:\n");
		}


		wxProcess* self=dynamic_cast< wxProcess* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxProcess::IsInputAvailable() const");
		}
		bool lret = self->IsInputAvailable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProcess::IsInputOpened() const
	static int _bind_IsInputOpened(lua_State *L) {
		if (!_lg_typecheck_IsInputOpened(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxProcess::IsInputOpened() const function, expected prototype:\nbool wxProcess::IsInputOpened() const\nClass arguments details:\n");
		}


		wxProcess* self=dynamic_cast< wxProcess* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxProcess::IsInputOpened() const");
		}
		bool lret = self->IsInputOpened();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxProcess::OnTerminate(int pid, int status)
	static int _bind_OnTerminate(lua_State *L) {
		if (!_lg_typecheck_OnTerminate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxProcess::OnTerminate(int pid, int status) function, expected prototype:\nvoid wxProcess::OnTerminate(int pid, int status)\nClass arguments details:\n");
		}

		int pid=(int)lua_tointeger(L,2);
		int status=(int)lua_tointeger(L,3);

		wxProcess* self=dynamic_cast< wxProcess* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxProcess::OnTerminate(int, int)");
		}
		self->OnTerminate(pid, status);

		return 0;
	}

	// void wxProcess::Redirect()
	static int _bind_Redirect(lua_State *L) {
		if (!_lg_typecheck_Redirect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxProcess::Redirect() function, expected prototype:\nvoid wxProcess::Redirect()\nClass arguments details:\n");
		}


		wxProcess* self=dynamic_cast< wxProcess* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxProcess::Redirect()");
		}
		self->Redirect();

		return 0;
	}

	// static bool wxProcess::Exists(int pid)
	static int _bind_Exists(lua_State *L) {
		if (!_lg_typecheck_Exists(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool wxProcess::Exists(int pid) function, expected prototype:\nstatic bool wxProcess::Exists(int pid)\nClass arguments details:\n");
		}

		int pid=(int)lua_tointeger(L,1);

		bool lret = wxProcess::Exists(pid);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static wxProcess * wxProcess::Open(const wxString & cmd, int flags = wxEXEC_ASYNC)
	static int _bind_Open(lua_State *L) {
		if (!_lg_typecheck_Open(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxProcess * wxProcess::Open(const wxString & cmd, int flags = wxEXEC_ASYNC) function, expected prototype:\nstatic wxProcess * wxProcess::Open(const wxString & cmd, int flags = wxEXEC_ASYNC)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString cmd(lua_tostring(L,1),lua_objlen(L,1));
		int flags=luatop>1 ? (int)lua_tointeger(L,2) : wxEXEC_ASYNC;

		wxProcess * lret = wxProcess::Open(cmd, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxProcess >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxProcess* LunaTraits< wxProcess >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxProcess::_bind_ctor(L);
}

void LunaTraits< wxProcess >::_bind_dtor(wxProcess* obj) {
	delete obj;
}

const char LunaTraits< wxProcess >::className[] = "wxProcess";
const char LunaTraits< wxProcess >::fullName[] = "wxProcess";
const char LunaTraits< wxProcess >::moduleName[] = "wx";
const char* LunaTraits< wxProcess >::parents[] = {"wx.wxEvtHandler", 0};
const int LunaTraits< wxProcess >::hash = 11352439;
const int LunaTraits< wxProcess >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxProcess >::methods[] = {
	{"CloseOutput", &luna_wrapper_wxProcess::_bind_CloseOutput},
	{"Detach", &luna_wrapper_wxProcess::_bind_Detach},
	{"GetErrorStream", &luna_wrapper_wxProcess::_bind_GetErrorStream},
	{"GetInputStream", &luna_wrapper_wxProcess::_bind_GetInputStream},
	{"GetOutputStream", &luna_wrapper_wxProcess::_bind_GetOutputStream},
	{"GetPid", &luna_wrapper_wxProcess::_bind_GetPid},
	{"IsErrorAvailable", &luna_wrapper_wxProcess::_bind_IsErrorAvailable},
	{"IsInputAvailable", &luna_wrapper_wxProcess::_bind_IsInputAvailable},
	{"IsInputOpened", &luna_wrapper_wxProcess::_bind_IsInputOpened},
	{"OnTerminate", &luna_wrapper_wxProcess::_bind_OnTerminate},
	{"Redirect", &luna_wrapper_wxProcess::_bind_Redirect},
	{"Exists", &luna_wrapper_wxProcess::_bind_Exists},
	{"Open", &luna_wrapper_wxProcess::_bind_Open},
	{"__eq", &luna_wrapper_wxProcess::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxProcess >::converters[] = {
	{"wxObject", &luna_wrapper_wxProcess::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxProcess >::enumValues[] = {
	{0,0}
};


