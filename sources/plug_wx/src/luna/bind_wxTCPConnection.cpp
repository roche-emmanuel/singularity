#include <plug_common.h>

class luna_wrapper_wxTCPConnection {
public:
	typedef Luna< wxTCPConnection > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxTCPConnection* ptr= dynamic_cast< wxTCPConnection* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTCPConnection >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Advise_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Advise_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Advise_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Disconnect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Execute_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Execute_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Execute_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnAdvise(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnDisconnect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnExecute(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnPoke(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnRequest(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnStartAdvise(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnStopAdvise(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Poke_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Poke_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Poke_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Request(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StartAdvise(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StopAdvise(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTCPConnection::wxTCPConnection()
	static wxTCPConnection* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTCPConnection::wxTCPConnection() function, expected prototype:\nwxTCPConnection::wxTCPConnection()\nClass arguments details:\n");
		}


		return new wxTCPConnection();
	}

	// wxTCPConnection::wxTCPConnection(void * buffer, size_t size)
	static wxTCPConnection* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTCPConnection::wxTCPConnection(void * buffer, size_t size) function, expected prototype:\nwxTCPConnection::wxTCPConnection(void * buffer, size_t size)\nClass arguments details:\n");
		}

		void* buffer=(Luna< void >::check(L,1));
		size_t size=(size_t)lua_tointeger(L,2);

		return new wxTCPConnection(buffer, size);
	}

	// Overload binder for wxTCPConnection::wxTCPConnection
	static wxTCPConnection* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxTCPConnection, cannot match any of the overloads for function wxTCPConnection:\n  wxTCPConnection()\n  wxTCPConnection(void *, size_t)\n");
		return NULL;
	}


	// Function binds:
	// bool wxTCPConnection::Advise(const wxString & item, const void * data, size_t size, wxIPCFormat format = wxIPC_PRIVATE)
	static int _bind_Advise_overload_1(lua_State *L) {
		if (!_lg_typecheck_Advise_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTCPConnection::Advise(const wxString & item, const void * data, size_t size, wxIPCFormat format = wxIPC_PRIVATE) function, expected prototype:\nbool wxTCPConnection::Advise(const wxString & item, const void * data, size_t size, wxIPCFormat format = wxIPC_PRIVATE)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString item(lua_tostring(L,2),lua_objlen(L,2));
		void* data=(Luna< void >::check(L,3));
		size_t size=(size_t)lua_tointeger(L,4);
		wxIPCFormat format=luatop>4 ? (wxIPCFormat)lua_tointeger(L,5) : wxIPC_PRIVATE;

		wxTCPConnection* self=dynamic_cast< wxTCPConnection* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTCPConnection::Advise(const wxString &, const void *, size_t, wxIPCFormat)");
		}
		bool lret = self->Advise(item, data, size, format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTCPConnection::Advise(const wxString & item, const char * data)
	static int _bind_Advise_overload_2(lua_State *L) {
		if (!_lg_typecheck_Advise_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTCPConnection::Advise(const wxString & item, const char * data) function, expected prototype:\nbool wxTCPConnection::Advise(const wxString & item, const char * data)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString item(lua_tostring(L,2),lua_objlen(L,2));
		const char * data=(const char *)lua_tostring(L,3);

		wxTCPConnection* self=dynamic_cast< wxTCPConnection* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTCPConnection::Advise(const wxString &, const char *)");
		}
		bool lret = self->Advise(item, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTCPConnection::Advise(const wxString & item, const wxString data)
	static int _bind_Advise_overload_3(lua_State *L) {
		if (!_lg_typecheck_Advise_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTCPConnection::Advise(const wxString & item, const wxString data) function, expected prototype:\nbool wxTCPConnection::Advise(const wxString & item, const wxString data)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		wxString item(lua_tostring(L,2),lua_objlen(L,2));
		wxString data(lua_tostring(L,3),lua_objlen(L,3));

		wxTCPConnection* self=dynamic_cast< wxTCPConnection* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTCPConnection::Advise(const wxString &, const wxString)");
		}
		bool lret = self->Advise(item, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxTCPConnection::Advise
	static int _bind_Advise(lua_State *L) {
		if (_lg_typecheck_Advise_overload_1(L)) return _bind_Advise_overload_1(L);
		if (_lg_typecheck_Advise_overload_2(L)) return _bind_Advise_overload_2(L);
		if (_lg_typecheck_Advise_overload_3(L)) return _bind_Advise_overload_3(L);

		luaL_error(L, "error in function Advise, cannot match any of the overloads for function Advise:\n  Advise(const wxString &, const void *, size_t, wxIPCFormat)\n  Advise(const wxString &, const char *)\n  Advise(const wxString &, const wxString)\n");
		return 0;
	}

	// bool wxTCPConnection::Disconnect()
	static int _bind_Disconnect(lua_State *L) {
		if (!_lg_typecheck_Disconnect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTCPConnection::Disconnect() function, expected prototype:\nbool wxTCPConnection::Disconnect()\nClass arguments details:\n");
		}


		wxTCPConnection* self=dynamic_cast< wxTCPConnection* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTCPConnection::Disconnect()");
		}
		bool lret = self->Disconnect();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTCPConnection::Execute(const void * data, size_t size, wxIPCFormat format = wxIPC_PRIVATE)
	static int _bind_Execute_overload_1(lua_State *L) {
		if (!_lg_typecheck_Execute_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTCPConnection::Execute(const void * data, size_t size, wxIPCFormat format = wxIPC_PRIVATE) function, expected prototype:\nbool wxTCPConnection::Execute(const void * data, size_t size, wxIPCFormat format = wxIPC_PRIVATE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		void* data=(Luna< void >::check(L,2));
		size_t size=(size_t)lua_tointeger(L,3);
		wxIPCFormat format=luatop>3 ? (wxIPCFormat)lua_tointeger(L,4) : wxIPC_PRIVATE;

		wxTCPConnection* self=dynamic_cast< wxTCPConnection* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTCPConnection::Execute(const void *, size_t, wxIPCFormat)");
		}
		bool lret = self->Execute(data, size, format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTCPConnection::Execute(const char * data)
	static int _bind_Execute_overload_2(lua_State *L) {
		if (!_lg_typecheck_Execute_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTCPConnection::Execute(const char * data) function, expected prototype:\nbool wxTCPConnection::Execute(const char * data)\nClass arguments details:\n");
		}

		const char * data=(const char *)lua_tostring(L,2);

		wxTCPConnection* self=dynamic_cast< wxTCPConnection* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTCPConnection::Execute(const char *)");
		}
		bool lret = self->Execute(data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTCPConnection::Execute(const wxString data)
	static int _bind_Execute_overload_3(lua_State *L) {
		if (!_lg_typecheck_Execute_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTCPConnection::Execute(const wxString data) function, expected prototype:\nbool wxTCPConnection::Execute(const wxString data)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString data(lua_tostring(L,2),lua_objlen(L,2));

		wxTCPConnection* self=dynamic_cast< wxTCPConnection* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTCPConnection::Execute(const wxString)");
		}
		bool lret = self->Execute(data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxTCPConnection::Execute
	static int _bind_Execute(lua_State *L) {
		if (_lg_typecheck_Execute_overload_1(L)) return _bind_Execute_overload_1(L);
		if (_lg_typecheck_Execute_overload_2(L)) return _bind_Execute_overload_2(L);
		if (_lg_typecheck_Execute_overload_3(L)) return _bind_Execute_overload_3(L);

		luaL_error(L, "error in function Execute, cannot match any of the overloads for function Execute:\n  Execute(const void *, size_t, wxIPCFormat)\n  Execute(const char *)\n  Execute(const wxString)\n");
		return 0;
	}

	// bool wxTCPConnection::OnAdvise(const wxString & topic, const wxString & item, const void * data, size_t size, wxIPCFormat format)
	static int _bind_OnAdvise(lua_State *L) {
		if (!_lg_typecheck_OnAdvise(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTCPConnection::OnAdvise(const wxString & topic, const wxString & item, const void * data, size_t size, wxIPCFormat format) function, expected prototype:\nbool wxTCPConnection::OnAdvise(const wxString & topic, const wxString & item, const void * data, size_t size, wxIPCFormat format)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		wxString topic(lua_tostring(L,2),lua_objlen(L,2));
		wxString item(lua_tostring(L,3),lua_objlen(L,3));
		void* data=(Luna< void >::check(L,4));
		size_t size=(size_t)lua_tointeger(L,5);
		wxIPCFormat format=(wxIPCFormat)lua_tointeger(L,6);

		wxTCPConnection* self=dynamic_cast< wxTCPConnection* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTCPConnection::OnAdvise(const wxString &, const wxString &, const void *, size_t, wxIPCFormat)");
		}
		bool lret = self->OnAdvise(topic, item, data, size, format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTCPConnection::OnDisconnect()
	static int _bind_OnDisconnect(lua_State *L) {
		if (!_lg_typecheck_OnDisconnect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTCPConnection::OnDisconnect() function, expected prototype:\nbool wxTCPConnection::OnDisconnect()\nClass arguments details:\n");
		}


		wxTCPConnection* self=dynamic_cast< wxTCPConnection* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTCPConnection::OnDisconnect()");
		}
		bool lret = self->OnDisconnect();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTCPConnection::OnExecute(const wxString & topic, const void * data, size_t size, wxIPCFormat format)
	static int _bind_OnExecute(lua_State *L) {
		if (!_lg_typecheck_OnExecute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTCPConnection::OnExecute(const wxString & topic, const void * data, size_t size, wxIPCFormat format) function, expected prototype:\nbool wxTCPConnection::OnExecute(const wxString & topic, const void * data, size_t size, wxIPCFormat format)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString topic(lua_tostring(L,2),lua_objlen(L,2));
		void* data=(Luna< void >::check(L,3));
		size_t size=(size_t)lua_tointeger(L,4);
		wxIPCFormat format=(wxIPCFormat)lua_tointeger(L,5);

		wxTCPConnection* self=dynamic_cast< wxTCPConnection* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTCPConnection::OnExecute(const wxString &, const void *, size_t, wxIPCFormat)");
		}
		bool lret = self->OnExecute(topic, data, size, format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTCPConnection::OnPoke(const wxString & topic, const wxString & item, const void * data, size_t size, wxIPCFormat format)
	static int _bind_OnPoke(lua_State *L) {
		if (!_lg_typecheck_OnPoke(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTCPConnection::OnPoke(const wxString & topic, const wxString & item, const void * data, size_t size, wxIPCFormat format) function, expected prototype:\nbool wxTCPConnection::OnPoke(const wxString & topic, const wxString & item, const void * data, size_t size, wxIPCFormat format)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		wxString topic(lua_tostring(L,2),lua_objlen(L,2));
		wxString item(lua_tostring(L,3),lua_objlen(L,3));
		void* data=(Luna< void >::check(L,4));
		size_t size=(size_t)lua_tointeger(L,5);
		wxIPCFormat format=(wxIPCFormat)lua_tointeger(L,6);

		wxTCPConnection* self=dynamic_cast< wxTCPConnection* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTCPConnection::OnPoke(const wxString &, const wxString &, const void *, size_t, wxIPCFormat)");
		}
		bool lret = self->OnPoke(topic, item, data, size, format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const void * wxTCPConnection::OnRequest(const wxString & topic, const wxString & item, size_t * size, wxIPCFormat format)
	static int _bind_OnRequest(lua_State *L) {
		if (!_lg_typecheck_OnRequest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const void * wxTCPConnection::OnRequest(const wxString & topic, const wxString & item, size_t * size, wxIPCFormat format) function, expected prototype:\nconst void * wxTCPConnection::OnRequest(const wxString & topic, const wxString & item, size_t * size, wxIPCFormat format)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		wxString topic(lua_tostring(L,2),lua_objlen(L,2));
		wxString item(lua_tostring(L,3),lua_objlen(L,3));
		size_t size=(size_t)lua_tointeger(L,4);
		wxIPCFormat format=(wxIPCFormat)lua_tointeger(L,5);

		wxTCPConnection* self=dynamic_cast< wxTCPConnection* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const void * wxTCPConnection::OnRequest(const wxString &, const wxString &, size_t *, wxIPCFormat)");
		}
		const void * lret = self->OnRequest(topic, item, &size, format);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// bool wxTCPConnection::OnStartAdvise(const wxString & topic, const wxString & item)
	static int _bind_OnStartAdvise(lua_State *L) {
		if (!_lg_typecheck_OnStartAdvise(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTCPConnection::OnStartAdvise(const wxString & topic, const wxString & item) function, expected prototype:\nbool wxTCPConnection::OnStartAdvise(const wxString & topic, const wxString & item)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		wxString topic(lua_tostring(L,2),lua_objlen(L,2));
		wxString item(lua_tostring(L,3),lua_objlen(L,3));

		wxTCPConnection* self=dynamic_cast< wxTCPConnection* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTCPConnection::OnStartAdvise(const wxString &, const wxString &)");
		}
		bool lret = self->OnStartAdvise(topic, item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTCPConnection::OnStopAdvise(const wxString & topic, const wxString & item)
	static int _bind_OnStopAdvise(lua_State *L) {
		if (!_lg_typecheck_OnStopAdvise(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTCPConnection::OnStopAdvise(const wxString & topic, const wxString & item) function, expected prototype:\nbool wxTCPConnection::OnStopAdvise(const wxString & topic, const wxString & item)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		wxString topic(lua_tostring(L,2),lua_objlen(L,2));
		wxString item(lua_tostring(L,3),lua_objlen(L,3));

		wxTCPConnection* self=dynamic_cast< wxTCPConnection* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTCPConnection::OnStopAdvise(const wxString &, const wxString &)");
		}
		bool lret = self->OnStopAdvise(topic, item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTCPConnection::Poke(const wxString & item, const void * data, size_t size, wxIPCFormat format = wxIPC_PRIVATE)
	static int _bind_Poke_overload_1(lua_State *L) {
		if (!_lg_typecheck_Poke_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTCPConnection::Poke(const wxString & item, const void * data, size_t size, wxIPCFormat format = wxIPC_PRIVATE) function, expected prototype:\nbool wxTCPConnection::Poke(const wxString & item, const void * data, size_t size, wxIPCFormat format = wxIPC_PRIVATE)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString item(lua_tostring(L,2),lua_objlen(L,2));
		void* data=(Luna< void >::check(L,3));
		size_t size=(size_t)lua_tointeger(L,4);
		wxIPCFormat format=luatop>4 ? (wxIPCFormat)lua_tointeger(L,5) : wxIPC_PRIVATE;

		wxTCPConnection* self=dynamic_cast< wxTCPConnection* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTCPConnection::Poke(const wxString &, const void *, size_t, wxIPCFormat)");
		}
		bool lret = self->Poke(item, data, size, format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTCPConnection::Poke(const wxString & item, const char * data)
	static int _bind_Poke_overload_2(lua_State *L) {
		if (!_lg_typecheck_Poke_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTCPConnection::Poke(const wxString & item, const char * data) function, expected prototype:\nbool wxTCPConnection::Poke(const wxString & item, const char * data)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString item(lua_tostring(L,2),lua_objlen(L,2));
		const char * data=(const char *)lua_tostring(L,3);

		wxTCPConnection* self=dynamic_cast< wxTCPConnection* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTCPConnection::Poke(const wxString &, const char *)");
		}
		bool lret = self->Poke(item, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTCPConnection::Poke(const wxString & item, const wxString data)
	static int _bind_Poke_overload_3(lua_State *L) {
		if (!_lg_typecheck_Poke_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTCPConnection::Poke(const wxString & item, const wxString data) function, expected prototype:\nbool wxTCPConnection::Poke(const wxString & item, const wxString data)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		wxString item(lua_tostring(L,2),lua_objlen(L,2));
		wxString data(lua_tostring(L,3),lua_objlen(L,3));

		wxTCPConnection* self=dynamic_cast< wxTCPConnection* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTCPConnection::Poke(const wxString &, const wxString)");
		}
		bool lret = self->Poke(item, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxTCPConnection::Poke
	static int _bind_Poke(lua_State *L) {
		if (_lg_typecheck_Poke_overload_1(L)) return _bind_Poke_overload_1(L);
		if (_lg_typecheck_Poke_overload_2(L)) return _bind_Poke_overload_2(L);
		if (_lg_typecheck_Poke_overload_3(L)) return _bind_Poke_overload_3(L);

		luaL_error(L, "error in function Poke, cannot match any of the overloads for function Poke:\n  Poke(const wxString &, const void *, size_t, wxIPCFormat)\n  Poke(const wxString &, const char *)\n  Poke(const wxString &, const wxString)\n");
		return 0;
	}

	// const void * wxTCPConnection::Request(const wxString & item, size_t * size = 0, wxIPCFormat format = wxIPC_TEXT)
	static int _bind_Request(lua_State *L) {
		if (!_lg_typecheck_Request(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const void * wxTCPConnection::Request(const wxString & item, size_t * size = 0, wxIPCFormat format = wxIPC_TEXT) function, expected prototype:\nconst void * wxTCPConnection::Request(const wxString & item, size_t * size = 0, wxIPCFormat format = wxIPC_TEXT)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString item(lua_tostring(L,2),lua_objlen(L,2));
		size_t size=luatop>2 ? (size_t)lua_tointeger(L,3) : 0;
		wxIPCFormat format=luatop>3 ? (wxIPCFormat)lua_tointeger(L,4) : wxIPC_TEXT;

		wxTCPConnection* self=dynamic_cast< wxTCPConnection* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const void * wxTCPConnection::Request(const wxString &, size_t *, wxIPCFormat)");
		}
		const void * lret = self->Request(item, &size, format);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// bool wxTCPConnection::StartAdvise(const wxString & item)
	static int _bind_StartAdvise(lua_State *L) {
		if (!_lg_typecheck_StartAdvise(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTCPConnection::StartAdvise(const wxString & item) function, expected prototype:\nbool wxTCPConnection::StartAdvise(const wxString & item)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString item(lua_tostring(L,2),lua_objlen(L,2));

		wxTCPConnection* self=dynamic_cast< wxTCPConnection* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTCPConnection::StartAdvise(const wxString &)");
		}
		bool lret = self->StartAdvise(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTCPConnection::StopAdvise(const wxString & item)
	static int _bind_StopAdvise(lua_State *L) {
		if (!_lg_typecheck_StopAdvise(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTCPConnection::StopAdvise(const wxString & item) function, expected prototype:\nbool wxTCPConnection::StopAdvise(const wxString & item)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString item(lua_tostring(L,2),lua_objlen(L,2));

		wxTCPConnection* self=dynamic_cast< wxTCPConnection* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTCPConnection::StopAdvise(const wxString &)");
		}
		bool lret = self->StopAdvise(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxTCPConnection* LunaTraits< wxTCPConnection >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTCPConnection::_bind_ctor(L);
}

void LunaTraits< wxTCPConnection >::_bind_dtor(wxTCPConnection* obj) {
	delete obj;
}

const char LunaTraits< wxTCPConnection >::className[] = "wxTCPConnection";
const char LunaTraits< wxTCPConnection >::fullName[] = "wxTCPConnection";
const char LunaTraits< wxTCPConnection >::moduleName[] = "wx";
const char* LunaTraits< wxTCPConnection >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxTCPConnection >::hash = 2701959;
const int LunaTraits< wxTCPConnection >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxTCPConnection >::methods[] = {
	{"Advise", &luna_wrapper_wxTCPConnection::_bind_Advise},
	{"Disconnect", &luna_wrapper_wxTCPConnection::_bind_Disconnect},
	{"Execute", &luna_wrapper_wxTCPConnection::_bind_Execute},
	{"OnAdvise", &luna_wrapper_wxTCPConnection::_bind_OnAdvise},
	{"OnDisconnect", &luna_wrapper_wxTCPConnection::_bind_OnDisconnect},
	{"OnExecute", &luna_wrapper_wxTCPConnection::_bind_OnExecute},
	{"OnPoke", &luna_wrapper_wxTCPConnection::_bind_OnPoke},
	{"OnRequest", &luna_wrapper_wxTCPConnection::_bind_OnRequest},
	{"OnStartAdvise", &luna_wrapper_wxTCPConnection::_bind_OnStartAdvise},
	{"OnStopAdvise", &luna_wrapper_wxTCPConnection::_bind_OnStopAdvise},
	{"Poke", &luna_wrapper_wxTCPConnection::_bind_Poke},
	{"Request", &luna_wrapper_wxTCPConnection::_bind_Request},
	{"StartAdvise", &luna_wrapper_wxTCPConnection::_bind_StartAdvise},
	{"StopAdvise", &luna_wrapper_wxTCPConnection::_bind_StopAdvise},
	{0,0}
};

luna_ConverterType LunaTraits< wxTCPConnection >::converters[] = {
	{"wxObject", &luna_wrapper_wxTCPConnection::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTCPConnection >::enumValues[] = {
	{0,0}
};


