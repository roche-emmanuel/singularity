#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSockAddress.h>

class luna_wrapper_wxSockAddress {
public:
	typedef Luna< wxSockAddress > luna_t;

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
		//wxSockAddress* ptr= dynamic_cast< wxSockAddress* >(Luna< wxObject >::check(L,1));
		wxSockAddress* ptr= luna_caster< wxObject, wxSockAddress >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSockAddress >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAddressData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAddressDataLen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Type(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSockAddress::wxSockAddress(lua_Table * data)
	static wxSockAddress* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSockAddress::wxSockAddress(lua_Table * data) function, expected prototype:\nwxSockAddress::wxSockAddress(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxSockAddress(L,NULL);
	}


	// Function binds:
	// void wxSockAddress::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSockAddress::Clear() function, expected prototype:\nvoid wxSockAddress::Clear()\nClass arguments details:\n");
		}


		wxSockAddress* self=Luna< wxObject >::checkSubType< wxSockAddress >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSockAddress::Clear(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->Clear();

		return 0;
	}

	// const sockaddr * wxSockAddress::GetAddressData() const
	static int _bind_GetAddressData(lua_State *L) {
		if (!_lg_typecheck_GetAddressData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const sockaddr * wxSockAddress::GetAddressData() const function, expected prototype:\nconst sockaddr * wxSockAddress::GetAddressData() const\nClass arguments details:\n");
		}


		wxSockAddress* self=Luna< wxObject >::checkSubType< wxSockAddress >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const sockaddr * wxSockAddress::GetAddressData() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		const sockaddr * lret = self->GetAddressData();
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'const sockaddr *'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// int wxSockAddress::GetAddressDataLen() const
	static int _bind_GetAddressDataLen(lua_State *L) {
		if (!_lg_typecheck_GetAddressDataLen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSockAddress::GetAddressDataLen() const function, expected prototype:\nint wxSockAddress::GetAddressDataLen() const\nClass arguments details:\n");
		}


		wxSockAddress* self=Luna< wxObject >::checkSubType< wxSockAddress >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSockAddress::GetAddressDataLen() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		int lret = self->GetAddressDataLen();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSockAddress::Family wxSockAddress::Type()
	static int _bind_Type(lua_State *L) {
		if (!_lg_typecheck_Type(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSockAddress::Family wxSockAddress::Type() function, expected prototype:\nwxSockAddress::Family wxSockAddress::Type()\nClass arguments details:\n");
		}


		wxSockAddress* self=Luna< wxObject >::checkSubType< wxSockAddress >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSockAddress::Family wxSockAddress::Type(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxSockAddress::Family lret = self->Type();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSockAddress * wxSockAddress::Clone() const
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSockAddress * wxSockAddress::Clone() const function, expected prototype:\nwxSockAddress * wxSockAddress::Clone() const\nClass arguments details:\n");
		}


		wxSockAddress* self=Luna< wxObject >::checkSubType< wxSockAddress >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSockAddress * wxSockAddress::Clone() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxSockAddress * lret = self->Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSockAddress >::push(L,lret,false);

		return 1;
	}

	// wxClassInfo * wxSockAddress::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxSockAddress::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxSockAddress::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxSockAddress* self=Luna< wxObject >::checkSubType< wxSockAddress >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxSockAddress::base_GetClassInfo() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxClassInfo * lret = self->wxSockAddress::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxSockAddress* LunaTraits< wxSockAddress >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSockAddress::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxSockAddress::Clear()
	// wxSockAddress::Family wxSockAddress::Type()
	// wxSockAddress * wxSockAddress::Clone() const
}

void LunaTraits< wxSockAddress >::_bind_dtor(wxSockAddress* obj) {
	delete obj;
}

const char LunaTraits< wxSockAddress >::className[] = "wxSockAddress";
const char LunaTraits< wxSockAddress >::fullName[] = "wxSockAddress";
const char LunaTraits< wxSockAddress >::moduleName[] = "wx";
const char* LunaTraits< wxSockAddress >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxSockAddress >::hash = 13876044;
const int LunaTraits< wxSockAddress >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSockAddress >::methods[] = {
	{"Clear", &luna_wrapper_wxSockAddress::_bind_Clear},
	{"GetAddressData", &luna_wrapper_wxSockAddress::_bind_GetAddressData},
	{"GetAddressDataLen", &luna_wrapper_wxSockAddress::_bind_GetAddressDataLen},
	{"Type", &luna_wrapper_wxSockAddress::_bind_Type},
	{"Clone", &luna_wrapper_wxSockAddress::_bind_Clone},
	{"base_GetClassInfo", &luna_wrapper_wxSockAddress::_bind_base_GetClassInfo},
	{"__eq", &luna_wrapper_wxSockAddress::_bind___eq},
	{"getTable", &luna_wrapper_wxSockAddress::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxSockAddress >::converters[] = {
	{"wxObject", &luna_wrapper_wxSockAddress::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSockAddress >::enumValues[] = {
	{"NONE", wxSockAddress::NONE},
	{"IPV4", wxSockAddress::IPV4},
	{"IPV6", wxSockAddress::IPV6},
	{"UNIX", wxSockAddress::UNIX},
	{0,0}
};


