#include <plug_common.h>

class luna_wrapper_wxSocketClient {
public:
	typedef Luna< wxSocketClient > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxSocketClient* ptr= dynamic_cast< wxSocketClient* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSocketClient >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Connect_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Connect_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WaitOnConnect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSocketClient::wxSocketClient(int flags = wxSOCKET_NONE)
	static wxSocketClient* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSocketClient::wxSocketClient(int flags = wxSOCKET_NONE) function, expected prototype:\nwxSocketClient::wxSocketClient(int flags = wxSOCKET_NONE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>0 ? (int)lua_tointeger(L,1) : wxSOCKET_NONE;

		return new wxSocketClient(flags);
	}


	// Function binds:
	// bool wxSocketClient::Connect(const wxSockAddress & address, bool wait = true)
	static int _bind_Connect_overload_1(lua_State *L) {
		if (!_lg_typecheck_Connect_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSocketClient::Connect(const wxSockAddress & address, bool wait = true) function, expected prototype:\nbool wxSocketClient::Connect(const wxSockAddress & address, bool wait = true)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxSockAddress* address_ptr=dynamic_cast< wxSockAddress* >(Luna< wxObject >::check(L,2));
		if( !address_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg address in wxSocketClient::Connect function");
		}
		const wxSockAddress & address=*address_ptr;
		bool wait=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxSocketClient* self=dynamic_cast< wxSocketClient* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSocketClient::Connect(const wxSockAddress &, bool)");
		}
		bool lret = self->Connect(address, wait);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSocketClient::Connect(const wxSockAddress & address, const wxSockAddress & local, bool wait = true)
	static int _bind_Connect_overload_2(lua_State *L) {
		if (!_lg_typecheck_Connect_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSocketClient::Connect(const wxSockAddress & address, const wxSockAddress & local, bool wait = true) function, expected prototype:\nbool wxSocketClient::Connect(const wxSockAddress & address, const wxSockAddress & local, bool wait = true)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxSockAddress* address_ptr=dynamic_cast< wxSockAddress* >(Luna< wxObject >::check(L,2));
		if( !address_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg address in wxSocketClient::Connect function");
		}
		const wxSockAddress & address=*address_ptr;
		const wxSockAddress* local_ptr=dynamic_cast< wxSockAddress* >(Luna< wxObject >::check(L,3));
		if( !local_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg local in wxSocketClient::Connect function");
		}
		const wxSockAddress & local=*local_ptr;
		bool wait=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : true;

		wxSocketClient* self=dynamic_cast< wxSocketClient* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSocketClient::Connect(const wxSockAddress &, const wxSockAddress &, bool)");
		}
		bool lret = self->Connect(address, local, wait);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxSocketClient::Connect
	static int _bind_Connect(lua_State *L) {
		if (_lg_typecheck_Connect_overload_1(L)) return _bind_Connect_overload_1(L);
		if (_lg_typecheck_Connect_overload_2(L)) return _bind_Connect_overload_2(L);

		luaL_error(L, "error in function Connect, cannot match any of the overloads for function Connect:\n  Connect(const wxSockAddress &, bool)\n  Connect(const wxSockAddress &, const wxSockAddress &, bool)\n");
		return 0;
	}

	// bool wxSocketClient::WaitOnConnect(long seconds = -1, long milliseconds = 0)
	static int _bind_WaitOnConnect(lua_State *L) {
		if (!_lg_typecheck_WaitOnConnect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSocketClient::WaitOnConnect(long seconds = -1, long milliseconds = 0) function, expected prototype:\nbool wxSocketClient::WaitOnConnect(long seconds = -1, long milliseconds = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long seconds=luatop>1 ? (long)lua_tointeger(L,2) : -1;
		long milliseconds=luatop>2 ? (long)lua_tointeger(L,3) : 0;

		wxSocketClient* self=dynamic_cast< wxSocketClient* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSocketClient::WaitOnConnect(long, long)");
		}
		bool lret = self->WaitOnConnect(seconds, milliseconds);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxSocketClient* LunaTraits< wxSocketClient >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSocketClient::_bind_ctor(L);
}

void LunaTraits< wxSocketClient >::_bind_dtor(wxSocketClient* obj) {
	delete obj;
}

const char LunaTraits< wxSocketClient >::className[] = "wxSocketClient";
const char LunaTraits< wxSocketClient >::fullName[] = "wxSocketClient";
const char LunaTraits< wxSocketClient >::moduleName[] = "wx";
const char* LunaTraits< wxSocketClient >::parents[] = {"wx.wxSocketBase", 0};
const int LunaTraits< wxSocketClient >::hash = 34036619;
const int LunaTraits< wxSocketClient >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSocketClient >::methods[] = {
	{"Connect", &luna_wrapper_wxSocketClient::_bind_Connect},
	{"WaitOnConnect", &luna_wrapper_wxSocketClient::_bind_WaitOnConnect},
	{0,0}
};

luna_ConverterType LunaTraits< wxSocketClient >::converters[] = {
	{"wxObject", &luna_wrapper_wxSocketClient::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSocketClient >::enumValues[] = {
	{0,0}
};


