#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHTTP.h>

class luna_wrapper_wxHTTP {
public:
	typedef Luna< wxHTTP > luna_t;

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
		//wxHTTP* ptr= dynamic_cast< wxHTTP* >(Luna< wxObject >::check(L,1));
		wxHTTP* ptr= luna_caster< wxObject, wxHTTP >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHTTP >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Connect_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Connect_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Connect_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!dynamic_cast< wxSockAddress* >(Luna< wxObject >::check(L,2))) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHeader(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetInputStream(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetResponse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetHeader(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCookie(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasCookies(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetLocal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetPeer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Close(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetLocal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetError(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetPassword(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetUser(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Connect_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Connect_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Connect_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!dynamic_cast< wxSockAddress* >(Luna< wxObject >::check(L,2))) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetInputStream(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHTTP::wxHTTP(lua_Table * data)
	static wxHTTP* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHTTP::wxHTTP(lua_Table * data) function, expected prototype:\nwxHTTP::wxHTTP(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxHTTP(L,NULL);
	}


	// Function binds:
	// bool wxHTTP::Connect(const wxString & host)
	static int _bind_Connect_overload_1(lua_State *L) {
		if (!_lg_typecheck_Connect_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHTTP::Connect(const wxString & host) function, expected prototype:\nbool wxHTTP::Connect(const wxString & host)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString host(lua_tostring(L,2),lua_objlen(L,2));

		wxHTTP* self=Luna< wxObject >::checkSubType< wxHTTP >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHTTP::Connect(const wxString &)");
		}
		bool lret = self->Connect(host);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHTTP::Connect(const wxString & host, unsigned short port)
	static int _bind_Connect_overload_2(lua_State *L) {
		if (!_lg_typecheck_Connect_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHTTP::Connect(const wxString & host, unsigned short port) function, expected prototype:\nbool wxHTTP::Connect(const wxString & host, unsigned short port)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString host(lua_tostring(L,2),lua_objlen(L,2));
		unsigned short port=(unsigned short)lua_tointeger(L,3);

		wxHTTP* self=Luna< wxObject >::checkSubType< wxHTTP >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHTTP::Connect(const wxString &, unsigned short)");
		}
		bool lret = self->Connect(host, port);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHTTP::Connect(const wxSockAddress & address, bool wait)
	static int _bind_Connect_overload_3(lua_State *L) {
		if (!_lg_typecheck_Connect_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHTTP::Connect(const wxSockAddress & address, bool wait) function, expected prototype:\nbool wxHTTP::Connect(const wxSockAddress & address, bool wait)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxSockAddress* address_ptr=(Luna< wxObject >::checkSubType< wxSockAddress >(L,2));
		if( !address_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg address in wxHTTP::Connect function");
		}
		const wxSockAddress & address=*address_ptr;
		bool wait=(bool)(lua_toboolean(L,3)==1);

		wxHTTP* self=Luna< wxObject >::checkSubType< wxHTTP >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHTTP::Connect(const wxSockAddress &, bool)");
		}
		bool lret = self->Connect(address, wait);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxHTTP::Connect
	static int _bind_Connect(lua_State *L) {
		if (_lg_typecheck_Connect_overload_1(L)) return _bind_Connect_overload_1(L);
		if (_lg_typecheck_Connect_overload_2(L)) return _bind_Connect_overload_2(L);
		if (_lg_typecheck_Connect_overload_3(L)) return _bind_Connect_overload_3(L);

		luaL_error(L, "error in function Connect, cannot match any of the overloads for function Connect:\n  Connect(const wxString &)\n  Connect(const wxString &, unsigned short)\n  Connect(const wxSockAddress &, bool)\n");
		return 0;
	}

	// wxString wxHTTP::GetHeader(const wxString & header) const
	static int _bind_GetHeader(lua_State *L) {
		if (!_lg_typecheck_GetHeader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHTTP::GetHeader(const wxString & header) const function, expected prototype:\nwxString wxHTTP::GetHeader(const wxString & header) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString header(lua_tostring(L,2),lua_objlen(L,2));

		wxHTTP* self=Luna< wxObject >::checkSubType< wxHTTP >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHTTP::GetHeader(const wxString &) const");
		}
		wxString lret = self->GetHeader(header);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxInputStream * wxHTTP::GetInputStream(const wxString & path)
	static int _bind_GetInputStream(lua_State *L) {
		if (!_lg_typecheck_GetInputStream(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxInputStream * wxHTTP::GetInputStream(const wxString & path) function, expected prototype:\nwxInputStream * wxHTTP::GetInputStream(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxHTTP* self=Luna< wxObject >::checkSubType< wxHTTP >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxInputStream * wxHTTP::GetInputStream(const wxString &)");
		}
		wxInputStream * lret = self->GetInputStream(path);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxInputStream >::push(L,lret,false);

		return 1;
	}

	// int wxHTTP::GetResponse() const
	static int _bind_GetResponse(lua_State *L) {
		if (!_lg_typecheck_GetResponse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHTTP::GetResponse() const function, expected prototype:\nint wxHTTP::GetResponse() const\nClass arguments details:\n");
		}


		wxHTTP* self=Luna< wxObject >::checkSubType< wxHTTP >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHTTP::GetResponse() const");
		}
		int lret = self->GetResponse();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxHTTP::SetHeader(const wxString & header, const wxString & h_data)
	static int _bind_SetHeader(lua_State *L) {
		if (!_lg_typecheck_SetHeader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHTTP::SetHeader(const wxString & header, const wxString & h_data) function, expected prototype:\nvoid wxHTTP::SetHeader(const wxString & header, const wxString & h_data)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		wxString header(lua_tostring(L,2),lua_objlen(L,2));
		wxString h_data(lua_tostring(L,3),lua_objlen(L,3));

		wxHTTP* self=Luna< wxObject >::checkSubType< wxHTTP >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHTTP::SetHeader(const wxString &, const wxString &)");
		}
		self->SetHeader(header, h_data);

		return 0;
	}

	// wxString wxHTTP::GetCookie(const wxString & cookie) const
	static int _bind_GetCookie(lua_State *L) {
		if (!_lg_typecheck_GetCookie(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHTTP::GetCookie(const wxString & cookie) const function, expected prototype:\nwxString wxHTTP::GetCookie(const wxString & cookie) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString cookie(lua_tostring(L,2),lua_objlen(L,2));

		wxHTTP* self=Luna< wxObject >::checkSubType< wxHTTP >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHTTP::GetCookie(const wxString &) const");
		}
		wxString lret = self->GetCookie(cookie);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxHTTP::HasCookies() const
	static int _bind_HasCookies(lua_State *L) {
		if (!_lg_typecheck_HasCookies(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHTTP::HasCookies() const function, expected prototype:\nbool wxHTTP::HasCookies() const\nClass arguments details:\n");
		}


		wxHTTP* self=Luna< wxObject >::checkSubType< wxHTTP >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHTTP::HasCookies() const");
		}
		bool lret = self->HasCookies();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxHTTP::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxHTTP::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxHTTP::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxHTTP* self=Luna< wxObject >::checkSubType< wxHTTP >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxHTTP::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxHTTP::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxHTTP::base_GetLocal(wxSockAddress & addr) const
	static int _bind_base_GetLocal(lua_State *L) {
		if (!_lg_typecheck_base_GetLocal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHTTP::base_GetLocal(wxSockAddress & addr) const function, expected prototype:\nbool wxHTTP::base_GetLocal(wxSockAddress & addr) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxSockAddress* addr_ptr=(Luna< wxObject >::checkSubType< wxSockAddress >(L,2));
		if( !addr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg addr in wxHTTP::base_GetLocal function");
		}
		wxSockAddress & addr=*addr_ptr;

		wxHTTP* self=Luna< wxObject >::checkSubType< wxHTTP >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHTTP::base_GetLocal(wxSockAddress &) const");
		}
		bool lret = self->wxHTTP::GetLocal(addr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHTTP::base_GetPeer(wxSockAddress & addr) const
	static int _bind_base_GetPeer(lua_State *L) {
		if (!_lg_typecheck_base_GetPeer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHTTP::base_GetPeer(wxSockAddress & addr) const function, expected prototype:\nbool wxHTTP::base_GetPeer(wxSockAddress & addr) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxSockAddress* addr_ptr=(Luna< wxObject >::checkSubType< wxSockAddress >(L,2));
		if( !addr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg addr in wxHTTP::base_GetPeer function");
		}
		wxSockAddress & addr=*addr_ptr;

		wxHTTP* self=Luna< wxObject >::checkSubType< wxHTTP >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHTTP::base_GetPeer(wxSockAddress &) const");
		}
		bool lret = self->wxHTTP::GetPeer(addr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHTTP::base_Close()
	static int _bind_base_Close(lua_State *L) {
		if (!_lg_typecheck_base_Close(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHTTP::base_Close() function, expected prototype:\nbool wxHTTP::base_Close()\nClass arguments details:\n");
		}


		wxHTTP* self=Luna< wxObject >::checkSubType< wxHTTP >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHTTP::base_Close()");
		}
		bool lret = self->wxHTTP::Close();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHTTP::base_SetLocal(const wxIPV4address & local)
	static int _bind_base_SetLocal(lua_State *L) {
		if (!_lg_typecheck_base_SetLocal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHTTP::base_SetLocal(const wxIPV4address & local) function, expected prototype:\nbool wxHTTP::base_SetLocal(const wxIPV4address & local)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxIPV4address* local_ptr=(Luna< wxObject >::checkSubType< wxIPV4address >(L,2));
		if( !local_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg local in wxHTTP::base_SetLocal function");
		}
		const wxIPV4address & local=*local_ptr;

		wxHTTP* self=Luna< wxObject >::checkSubType< wxHTTP >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHTTP::base_SetLocal(const wxIPV4address &)");
		}
		bool lret = self->wxHTTP::SetLocal(local);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxProtocolError wxHTTP::base_GetError() const
	static int _bind_base_GetError(lua_State *L) {
		if (!_lg_typecheck_base_GetError(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxProtocolError wxHTTP::base_GetError() const function, expected prototype:\nwxProtocolError wxHTTP::base_GetError() const\nClass arguments details:\n");
		}


		wxHTTP* self=Luna< wxObject >::checkSubType< wxHTTP >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxProtocolError wxHTTP::base_GetError() const");
		}
		wxProtocolError lret = self->wxHTTP::GetError();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxHTTP::base_SetPassword(const wxString & user)
	static int _bind_base_SetPassword(lua_State *L) {
		if (!_lg_typecheck_base_SetPassword(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHTTP::base_SetPassword(const wxString & user) function, expected prototype:\nvoid wxHTTP::base_SetPassword(const wxString & user)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString user(lua_tostring(L,2),lua_objlen(L,2));

		wxHTTP* self=Luna< wxObject >::checkSubType< wxHTTP >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHTTP::base_SetPassword(const wxString &)");
		}
		self->wxHTTP::SetPassword(user);

		return 0;
	}

	// void wxHTTP::base_SetUser(const wxString & user)
	static int _bind_base_SetUser(lua_State *L) {
		if (!_lg_typecheck_base_SetUser(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHTTP::base_SetUser(const wxString & user) function, expected prototype:\nvoid wxHTTP::base_SetUser(const wxString & user)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString user(lua_tostring(L,2),lua_objlen(L,2));

		wxHTTP* self=Luna< wxObject >::checkSubType< wxHTTP >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHTTP::base_SetUser(const wxString &)");
		}
		self->wxHTTP::SetUser(user);

		return 0;
	}

	// bool wxHTTP::base_Connect(const wxString & host)
	static int _bind_base_Connect_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Connect_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHTTP::base_Connect(const wxString & host) function, expected prototype:\nbool wxHTTP::base_Connect(const wxString & host)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString host(lua_tostring(L,2),lua_objlen(L,2));

		wxHTTP* self=Luna< wxObject >::checkSubType< wxHTTP >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHTTP::base_Connect(const wxString &)");
		}
		bool lret = self->wxHTTP::Connect(host);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHTTP::base_Connect(const wxString & host, unsigned short port)
	static int _bind_base_Connect_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Connect_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHTTP::base_Connect(const wxString & host, unsigned short port) function, expected prototype:\nbool wxHTTP::base_Connect(const wxString & host, unsigned short port)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString host(lua_tostring(L,2),lua_objlen(L,2));
		unsigned short port=(unsigned short)lua_tointeger(L,3);

		wxHTTP* self=Luna< wxObject >::checkSubType< wxHTTP >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHTTP::base_Connect(const wxString &, unsigned short)");
		}
		bool lret = self->wxHTTP::Connect(host, port);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHTTP::base_Connect(const wxSockAddress & address, bool wait)
	static int _bind_base_Connect_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_Connect_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHTTP::base_Connect(const wxSockAddress & address, bool wait) function, expected prototype:\nbool wxHTTP::base_Connect(const wxSockAddress & address, bool wait)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxSockAddress* address_ptr=(Luna< wxObject >::checkSubType< wxSockAddress >(L,2));
		if( !address_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg address in wxHTTP::base_Connect function");
		}
		const wxSockAddress & address=*address_ptr;
		bool wait=(bool)(lua_toboolean(L,3)==1);

		wxHTTP* self=Luna< wxObject >::checkSubType< wxHTTP >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHTTP::base_Connect(const wxSockAddress &, bool)");
		}
		bool lret = self->wxHTTP::Connect(address, wait);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxHTTP::base_Connect
	static int _bind_base_Connect(lua_State *L) {
		if (_lg_typecheck_base_Connect_overload_1(L)) return _bind_base_Connect_overload_1(L);
		if (_lg_typecheck_base_Connect_overload_2(L)) return _bind_base_Connect_overload_2(L);
		if (_lg_typecheck_base_Connect_overload_3(L)) return _bind_base_Connect_overload_3(L);

		luaL_error(L, "error in function base_Connect, cannot match any of the overloads for function base_Connect:\n  base_Connect(const wxString &)\n  base_Connect(const wxString &, unsigned short)\n  base_Connect(const wxSockAddress &, bool)\n");
		return 0;
	}

	// wxInputStream * wxHTTP::base_GetInputStream(const wxString & path)
	static int _bind_base_GetInputStream(lua_State *L) {
		if (!_lg_typecheck_base_GetInputStream(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxInputStream * wxHTTP::base_GetInputStream(const wxString & path) function, expected prototype:\nwxInputStream * wxHTTP::base_GetInputStream(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxHTTP* self=Luna< wxObject >::checkSubType< wxHTTP >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxInputStream * wxHTTP::base_GetInputStream(const wxString &)");
		}
		wxInputStream * lret = self->wxHTTP::GetInputStream(path);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxInputStream >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxHTTP* LunaTraits< wxHTTP >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHTTP::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool wxProtocol::Abort()
	// wxString wxProtocol::GetContentType() const
}

void LunaTraits< wxHTTP >::_bind_dtor(wxHTTP* obj) {
	delete obj;
}

const char LunaTraits< wxHTTP >::className[] = "wxHTTP";
const char LunaTraits< wxHTTP >::fullName[] = "wxHTTP";
const char LunaTraits< wxHTTP >::moduleName[] = "wx";
const char* LunaTraits< wxHTTP >::parents[] = {"wx.wxProtocol", 0};
const int LunaTraits< wxHTTP >::hash = 19919670;
const int LunaTraits< wxHTTP >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHTTP >::methods[] = {
	{"Connect", &luna_wrapper_wxHTTP::_bind_Connect},
	{"GetHeader", &luna_wrapper_wxHTTP::_bind_GetHeader},
	{"GetInputStream", &luna_wrapper_wxHTTP::_bind_GetInputStream},
	{"GetResponse", &luna_wrapper_wxHTTP::_bind_GetResponse},
	{"SetHeader", &luna_wrapper_wxHTTP::_bind_SetHeader},
	{"GetCookie", &luna_wrapper_wxHTTP::_bind_GetCookie},
	{"HasCookies", &luna_wrapper_wxHTTP::_bind_HasCookies},
	{"base_GetClassInfo", &luna_wrapper_wxHTTP::_bind_base_GetClassInfo},
	{"base_GetLocal", &luna_wrapper_wxHTTP::_bind_base_GetLocal},
	{"base_GetPeer", &luna_wrapper_wxHTTP::_bind_base_GetPeer},
	{"base_Close", &luna_wrapper_wxHTTP::_bind_base_Close},
	{"base_SetLocal", &luna_wrapper_wxHTTP::_bind_base_SetLocal},
	{"base_GetError", &luna_wrapper_wxHTTP::_bind_base_GetError},
	{"base_SetPassword", &luna_wrapper_wxHTTP::_bind_base_SetPassword},
	{"base_SetUser", &luna_wrapper_wxHTTP::_bind_base_SetUser},
	{"base_Connect", &luna_wrapper_wxHTTP::_bind_base_Connect},
	{"base_GetInputStream", &luna_wrapper_wxHTTP::_bind_base_GetInputStream},
	{"__eq", &luna_wrapper_wxHTTP::_bind___eq},
	{"getTable", &luna_wrapper_wxHTTP::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHTTP >::converters[] = {
	{"wxObject", &luna_wrapper_wxHTTP::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHTTP >::enumValues[] = {
	{0,0}
};


