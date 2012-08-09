#include <plug_common.h>

class luna_wrapper_wxURI {
public:
	typedef Luna< wxURI > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxURI* ptr= dynamic_cast< wxURI* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxURI >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_BuildURI(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_BuildUnescapedURI(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFragment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHostType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPassword(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPort(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetQuery(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetScheme(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetServer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUser(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUserInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasFragment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasPort(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasQuery(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasScheme(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasServer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsReference(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Resolve(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Unescape(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Constructor binds:
	// wxURI::wxURI()
	static wxURI* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxURI::wxURI() function, expected prototype:\nwxURI::wxURI()\nClass arguments details:\n");
		}


		return new wxURI();
	}

	// wxURI::wxURI(const wxString & uri)
	static wxURI* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxURI::wxURI(const wxString & uri) function, expected prototype:\nwxURI::wxURI(const wxString & uri)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString uri(lua_tostring(L,1),lua_objlen(L,1));

		return new wxURI(uri);
	}

	// wxURI::wxURI(const wxURI & uri)
	static wxURI* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxURI::wxURI(const wxURI & uri) function, expected prototype:\nwxURI::wxURI(const wxURI & uri)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxURI* uri_ptr=dynamic_cast< wxURI* >(Luna< wxObject >::check(L,1));
		if( !uri_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg uri in wxURI::wxURI function");
		}
		const wxURI & uri=*uri_ptr;

		return new wxURI(uri);
	}

	// Overload binder for wxURI::wxURI
	static wxURI* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function wxURI, cannot match any of the overloads for function wxURI:\n  wxURI()\n  wxURI(const wxString &)\n  wxURI(const wxURI &)\n");
		return NULL;
	}


	// Function binds:
	// wxString wxURI::BuildURI() const
	static int _bind_BuildURI(lua_State *L) {
		if (!_lg_typecheck_BuildURI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxURI::BuildURI() const function, expected prototype:\nwxString wxURI::BuildURI() const\nClass arguments details:\n");
		}


		wxURI* self=dynamic_cast< wxURI* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxURI::BuildURI() const");
		}
		wxString lret = self->BuildURI();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxURI::BuildUnescapedURI() const
	static int _bind_BuildUnescapedURI(lua_State *L) {
		if (!_lg_typecheck_BuildUnescapedURI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxURI::BuildUnescapedURI() const function, expected prototype:\nwxString wxURI::BuildUnescapedURI() const\nClass arguments details:\n");
		}


		wxURI* self=dynamic_cast< wxURI* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxURI::BuildUnescapedURI() const");
		}
		wxString lret = self->BuildUnescapedURI();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxURI::Create(const wxString & uri)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxURI::Create(const wxString & uri) function, expected prototype:\nbool wxURI::Create(const wxString & uri)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString uri(lua_tostring(L,2),lua_objlen(L,2));

		wxURI* self=dynamic_cast< wxURI* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxURI::Create(const wxString &)");
		}
		bool lret = self->Create(uri);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const wxString & wxURI::GetFragment() const
	static int _bind_GetFragment(lua_State *L) {
		if (!_lg_typecheck_GetFragment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxURI::GetFragment() const function, expected prototype:\nconst wxString & wxURI::GetFragment() const\nClass arguments details:\n");
		}


		wxURI* self=dynamic_cast< wxURI* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxURI::GetFragment() const");
		}
		const wxString & lret = self->GetFragment();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxURIHostType wxURI::GetHostType() const
	static int _bind_GetHostType(lua_State *L) {
		if (!_lg_typecheck_GetHostType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxURIHostType wxURI::GetHostType() const function, expected prototype:\nwxURIHostType wxURI::GetHostType() const\nClass arguments details:\n");
		}


		wxURI* self=dynamic_cast< wxURI* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxURIHostType wxURI::GetHostType() const");
		}
		wxURIHostType lret = self->GetHostType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxURI::GetPassword() const
	static int _bind_GetPassword(lua_State *L) {
		if (!_lg_typecheck_GetPassword(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxURI::GetPassword() const function, expected prototype:\nwxString wxURI::GetPassword() const\nClass arguments details:\n");
		}


		wxURI* self=dynamic_cast< wxURI* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxURI::GetPassword() const");
		}
		wxString lret = self->GetPassword();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxURI::GetPath() const
	static int _bind_GetPath(lua_State *L) {
		if (!_lg_typecheck_GetPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxURI::GetPath() const function, expected prototype:\nconst wxString & wxURI::GetPath() const\nClass arguments details:\n");
		}


		wxURI* self=dynamic_cast< wxURI* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxURI::GetPath() const");
		}
		const wxString & lret = self->GetPath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxURI::GetPort() const
	static int _bind_GetPort(lua_State *L) {
		if (!_lg_typecheck_GetPort(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxURI::GetPort() const function, expected prototype:\nconst wxString & wxURI::GetPort() const\nClass arguments details:\n");
		}


		wxURI* self=dynamic_cast< wxURI* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxURI::GetPort() const");
		}
		const wxString & lret = self->GetPort();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxURI::GetQuery() const
	static int _bind_GetQuery(lua_State *L) {
		if (!_lg_typecheck_GetQuery(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxURI::GetQuery() const function, expected prototype:\nconst wxString & wxURI::GetQuery() const\nClass arguments details:\n");
		}


		wxURI* self=dynamic_cast< wxURI* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxURI::GetQuery() const");
		}
		const wxString & lret = self->GetQuery();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxURI::GetScheme() const
	static int _bind_GetScheme(lua_State *L) {
		if (!_lg_typecheck_GetScheme(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxURI::GetScheme() const function, expected prototype:\nconst wxString & wxURI::GetScheme() const\nClass arguments details:\n");
		}


		wxURI* self=dynamic_cast< wxURI* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxURI::GetScheme() const");
		}
		const wxString & lret = self->GetScheme();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxURI::GetServer() const
	static int _bind_GetServer(lua_State *L) {
		if (!_lg_typecheck_GetServer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxURI::GetServer() const function, expected prototype:\nconst wxString & wxURI::GetServer() const\nClass arguments details:\n");
		}


		wxURI* self=dynamic_cast< wxURI* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxURI::GetServer() const");
		}
		const wxString & lret = self->GetServer();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxURI::GetUser() const
	static int _bind_GetUser(lua_State *L) {
		if (!_lg_typecheck_GetUser(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxURI::GetUser() const function, expected prototype:\nwxString wxURI::GetUser() const\nClass arguments details:\n");
		}


		wxURI* self=dynamic_cast< wxURI* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxURI::GetUser() const");
		}
		wxString lret = self->GetUser();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxURI::GetUserInfo() const
	static int _bind_GetUserInfo(lua_State *L) {
		if (!_lg_typecheck_GetUserInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxURI::GetUserInfo() const function, expected prototype:\nconst wxString & wxURI::GetUserInfo() const\nClass arguments details:\n");
		}


		wxURI* self=dynamic_cast< wxURI* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxURI::GetUserInfo() const");
		}
		const wxString & lret = self->GetUserInfo();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxURI::HasFragment() const
	static int _bind_HasFragment(lua_State *L) {
		if (!_lg_typecheck_HasFragment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxURI::HasFragment() const function, expected prototype:\nbool wxURI::HasFragment() const\nClass arguments details:\n");
		}


		wxURI* self=dynamic_cast< wxURI* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxURI::HasFragment() const");
		}
		bool lret = self->HasFragment();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxURI::HasPath() const
	static int _bind_HasPath(lua_State *L) {
		if (!_lg_typecheck_HasPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxURI::HasPath() const function, expected prototype:\nbool wxURI::HasPath() const\nClass arguments details:\n");
		}


		wxURI* self=dynamic_cast< wxURI* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxURI::HasPath() const");
		}
		bool lret = self->HasPath();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxURI::HasPort() const
	static int _bind_HasPort(lua_State *L) {
		if (!_lg_typecheck_HasPort(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxURI::HasPort() const function, expected prototype:\nbool wxURI::HasPort() const\nClass arguments details:\n");
		}


		wxURI* self=dynamic_cast< wxURI* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxURI::HasPort() const");
		}
		bool lret = self->HasPort();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxURI::HasQuery() const
	static int _bind_HasQuery(lua_State *L) {
		if (!_lg_typecheck_HasQuery(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxURI::HasQuery() const function, expected prototype:\nbool wxURI::HasQuery() const\nClass arguments details:\n");
		}


		wxURI* self=dynamic_cast< wxURI* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxURI::HasQuery() const");
		}
		bool lret = self->HasQuery();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxURI::HasScheme() const
	static int _bind_HasScheme(lua_State *L) {
		if (!_lg_typecheck_HasScheme(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxURI::HasScheme() const function, expected prototype:\nbool wxURI::HasScheme() const\nClass arguments details:\n");
		}


		wxURI* self=dynamic_cast< wxURI* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxURI::HasScheme() const");
		}
		bool lret = self->HasScheme();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxURI::HasServer() const
	static int _bind_HasServer(lua_State *L) {
		if (!_lg_typecheck_HasServer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxURI::HasServer() const function, expected prototype:\nbool wxURI::HasServer() const\nClass arguments details:\n");
		}


		wxURI* self=dynamic_cast< wxURI* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxURI::HasServer() const");
		}
		bool lret = self->HasServer();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxURI::IsReference() const
	static int _bind_IsReference(lua_State *L) {
		if (!_lg_typecheck_IsReference(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxURI::IsReference() const function, expected prototype:\nbool wxURI::IsReference() const\nClass arguments details:\n");
		}


		wxURI* self=dynamic_cast< wxURI* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxURI::IsReference() const");
		}
		bool lret = self->IsReference();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxURI::Resolve(const wxURI & base, int flags = wxURI_STRICT)
	static int _bind_Resolve(lua_State *L) {
		if (!_lg_typecheck_Resolve(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxURI::Resolve(const wxURI & base, int flags = wxURI_STRICT) function, expected prototype:\nvoid wxURI::Resolve(const wxURI & base, int flags = wxURI_STRICT)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxURI* base_ptr=dynamic_cast< wxURI* >(Luna< wxObject >::check(L,2));
		if( !base_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg base in wxURI::Resolve function");
		}
		const wxURI & base=*base_ptr;
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : wxURI_STRICT;

		wxURI* self=dynamic_cast< wxURI* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxURI::Resolve(const wxURI &, int)");
		}
		self->Resolve(base, flags);

		return 0;
	}

	// static wxString wxURI::Unescape(const wxString & uri)
	static int _bind_Unescape(lua_State *L) {
		if (!_lg_typecheck_Unescape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxString wxURI::Unescape(const wxString & uri) function, expected prototype:\nstatic wxString wxURI::Unescape(const wxString & uri)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString uri(lua_tostring(L,1),lua_objlen(L,1));

		wxString lret = wxURI::Unescape(uri);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:
	// bool wxURI::operator==(const wxURI & uricomp) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxURI::operator==(const wxURI & uricomp) const function, expected prototype:\nbool wxURI::operator==(const wxURI & uricomp) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxURI* uricomp_ptr=dynamic_cast< wxURI* >(Luna< wxObject >::check(L,2));
		if( !uricomp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg uricomp in wxURI::operator== function");
		}
		const wxURI & uricomp=*uricomp_ptr;

		wxURI* self=dynamic_cast< wxURI* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxURI::operator==(const wxURI &) const");
		}
		bool lret = self->operator==(uricomp);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxURI* LunaTraits< wxURI >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxURI::_bind_ctor(L);
}

void LunaTraits< wxURI >::_bind_dtor(wxURI* obj) {
	delete obj;
}

const char LunaTraits< wxURI >::className[] = "wxURI";
const char LunaTraits< wxURI >::fullName[] = "wxURI";
const char LunaTraits< wxURI >::moduleName[] = "wx";
const char* LunaTraits< wxURI >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxURI >::hash = 13558214;
const int LunaTraits< wxURI >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxURI >::methods[] = {
	{"BuildURI", &luna_wrapper_wxURI::_bind_BuildURI},
	{"BuildUnescapedURI", &luna_wrapper_wxURI::_bind_BuildUnescapedURI},
	{"Create", &luna_wrapper_wxURI::_bind_Create},
	{"GetFragment", &luna_wrapper_wxURI::_bind_GetFragment},
	{"GetHostType", &luna_wrapper_wxURI::_bind_GetHostType},
	{"GetPassword", &luna_wrapper_wxURI::_bind_GetPassword},
	{"GetPath", &luna_wrapper_wxURI::_bind_GetPath},
	{"GetPort", &luna_wrapper_wxURI::_bind_GetPort},
	{"GetQuery", &luna_wrapper_wxURI::_bind_GetQuery},
	{"GetScheme", &luna_wrapper_wxURI::_bind_GetScheme},
	{"GetServer", &luna_wrapper_wxURI::_bind_GetServer},
	{"GetUser", &luna_wrapper_wxURI::_bind_GetUser},
	{"GetUserInfo", &luna_wrapper_wxURI::_bind_GetUserInfo},
	{"HasFragment", &luna_wrapper_wxURI::_bind_HasFragment},
	{"HasPath", &luna_wrapper_wxURI::_bind_HasPath},
	{"HasPort", &luna_wrapper_wxURI::_bind_HasPort},
	{"HasQuery", &luna_wrapper_wxURI::_bind_HasQuery},
	{"HasScheme", &luna_wrapper_wxURI::_bind_HasScheme},
	{"HasServer", &luna_wrapper_wxURI::_bind_HasServer},
	{"IsReference", &luna_wrapper_wxURI::_bind_IsReference},
	{"Resolve", &luna_wrapper_wxURI::_bind_Resolve},
	{"Unescape", &luna_wrapper_wxURI::_bind_Unescape},
	{"__eq", &luna_wrapper_wxURI::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxURI >::converters[] = {
	{"wxObject", &luna_wrapper_wxURI::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxURI >::enumValues[] = {
	{0,0}
};

