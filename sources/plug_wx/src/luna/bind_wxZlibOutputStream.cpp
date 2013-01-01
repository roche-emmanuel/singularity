#include <plug_common.h>

#include <luna/wrappers/wrapper_wxZlibOutputStream.h>

class luna_wrapper_wxZlibOutputStream {
public:
	typedef Luna< wxZlibOutputStream > luna_t;

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
		//wxZlibOutputStream* ptr= dynamic_cast< wxZlibOutputStream* >(Luna< wxObject >::check(L,1));
		wxZlibOutputStream* ptr= luna_caster< wxObject, wxZlibOutputStream >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxZlibOutputStream >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_SetDictionary(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CanHandleGZip(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsSeekable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Close(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_LastWrite(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SeekO(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_TellO(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Write(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// bool wxZlibOutputStream::SetDictionary(const char * data, const size_t datalen)
	static int _bind_SetDictionary(lua_State *L) {
		if (!_lg_typecheck_SetDictionary(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxZlibOutputStream::SetDictionary(const char * data, const size_t datalen) function, expected prototype:\nbool wxZlibOutputStream::SetDictionary(const char * data, const size_t datalen)\nClass arguments details:\n");
		}

		const char * data=(const char *)lua_tostring(L,2);
		size_t datalen=(size_t)lua_tointeger(L,3);

		wxZlibOutputStream* self=Luna< wxObject >::checkSubType< wxZlibOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxZlibOutputStream::SetDictionary(const char *, const size_t). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->SetDictionary(data, datalen);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxZlibOutputStream::CanHandleGZip()
	static int _bind_CanHandleGZip(lua_State *L) {
		if (!_lg_typecheck_CanHandleGZip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool wxZlibOutputStream::CanHandleGZip() function, expected prototype:\nstatic bool wxZlibOutputStream::CanHandleGZip()\nClass arguments details:\n");
		}


		bool lret = wxZlibOutputStream::CanHandleGZip();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxZlibOutputStream::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxZlibOutputStream::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxZlibOutputStream::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxZlibOutputStream* self=Luna< wxObject >::checkSubType< wxZlibOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxZlibOutputStream::base_GetClassInfo() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxClassInfo * lret = self->wxZlibOutputStream::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// long long wxZlibOutputStream::base_GetLength() const
	static int _bind_base_GetLength(lua_State *L) {
		if (!_lg_typecheck_base_GetLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long long wxZlibOutputStream::base_GetLength() const function, expected prototype:\nlong long wxZlibOutputStream::base_GetLength() const\nClass arguments details:\n");
		}


		wxZlibOutputStream* self=Luna< wxObject >::checkSubType< wxZlibOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long long wxZlibOutputStream::base_GetLength() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		long long lret = self->wxZlibOutputStream::GetLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxZlibOutputStream::base_GetSize() const
	static int _bind_base_GetSize(lua_State *L) {
		if (!_lg_typecheck_base_GetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxZlibOutputStream::base_GetSize() const function, expected prototype:\nsize_t wxZlibOutputStream::base_GetSize() const\nClass arguments details:\n");
		}


		wxZlibOutputStream* self=Luna< wxObject >::checkSubType< wxZlibOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxZlibOutputStream::base_GetSize() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		size_t lret = self->wxZlibOutputStream::GetSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxZlibOutputStream::base_IsOk() const
	static int _bind_base_IsOk(lua_State *L) {
		if (!_lg_typecheck_base_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxZlibOutputStream::base_IsOk() const function, expected prototype:\nbool wxZlibOutputStream::base_IsOk() const\nClass arguments details:\n");
		}


		wxZlibOutputStream* self=Luna< wxObject >::checkSubType< wxZlibOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxZlibOutputStream::base_IsOk() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxZlibOutputStream::IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxZlibOutputStream::base_IsSeekable() const
	static int _bind_base_IsSeekable(lua_State *L) {
		if (!_lg_typecheck_base_IsSeekable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxZlibOutputStream::base_IsSeekable() const function, expected prototype:\nbool wxZlibOutputStream::base_IsSeekable() const\nClass arguments details:\n");
		}


		wxZlibOutputStream* self=Luna< wxObject >::checkSubType< wxZlibOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxZlibOutputStream::base_IsSeekable() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxZlibOutputStream::IsSeekable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxZlibOutputStream::base_Close()
	static int _bind_base_Close(lua_State *L) {
		if (!_lg_typecheck_base_Close(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxZlibOutputStream::base_Close() function, expected prototype:\nbool wxZlibOutputStream::base_Close()\nClass arguments details:\n");
		}


		wxZlibOutputStream* self=Luna< wxObject >::checkSubType< wxZlibOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxZlibOutputStream::base_Close(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxZlibOutputStream::Close();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxZlibOutputStream::base_LastWrite() const
	static int _bind_base_LastWrite(lua_State *L) {
		if (!_lg_typecheck_base_LastWrite(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxZlibOutputStream::base_LastWrite() const function, expected prototype:\nsize_t wxZlibOutputStream::base_LastWrite() const\nClass arguments details:\n");
		}


		wxZlibOutputStream* self=Luna< wxObject >::checkSubType< wxZlibOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxZlibOutputStream::base_LastWrite() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		size_t lret = self->wxZlibOutputStream::LastWrite();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long long wxZlibOutputStream::base_SeekO(long long pos, wxSeekMode mode = ::wxFromStart)
	static int _bind_base_SeekO(lua_State *L) {
		if (!_lg_typecheck_base_SeekO(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long long wxZlibOutputStream::base_SeekO(long long pos, wxSeekMode mode = ::wxFromStart) function, expected prototype:\nlong long wxZlibOutputStream::base_SeekO(long long pos, wxSeekMode mode = ::wxFromStart)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long long pos=(long long)lua_tointeger(L,2);
		wxSeekMode mode=luatop>2 ? (wxSeekMode)lua_tointeger(L,3) : ::wxFromStart;

		wxZlibOutputStream* self=Luna< wxObject >::checkSubType< wxZlibOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long long wxZlibOutputStream::base_SeekO(long long, wxSeekMode). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		long long lret = self->wxZlibOutputStream::SeekO(pos, mode);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long long wxZlibOutputStream::base_TellO() const
	static int _bind_base_TellO(lua_State *L) {
		if (!_lg_typecheck_base_TellO(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long long wxZlibOutputStream::base_TellO() const function, expected prototype:\nlong long wxZlibOutputStream::base_TellO() const\nClass arguments details:\n");
		}


		wxZlibOutputStream* self=Luna< wxObject >::checkSubType< wxZlibOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long long wxZlibOutputStream::base_TellO() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		long long lret = self->wxZlibOutputStream::TellO();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxOutputStream & wxZlibOutputStream::base_Write(const void * buffer, size_t size)
	static int _bind_base_Write(lua_State *L) {
		if (!_lg_typecheck_base_Write(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxOutputStream & wxZlibOutputStream::base_Write(const void * buffer, size_t size) function, expected prototype:\nwxOutputStream & wxZlibOutputStream::base_Write(const void * buffer, size_t size)\nClass arguments details:\n");
		}

		void* buffer=(Luna< void >::check(L,2));
		size_t size=(size_t)lua_tointeger(L,3);

		wxZlibOutputStream* self=Luna< wxObject >::checkSubType< wxZlibOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxOutputStream & wxZlibOutputStream::base_Write(const void *, size_t). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		const wxOutputStream* lret = &self->wxZlibOutputStream::Write(buffer, size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxOutputStream >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxZlibOutputStream* LunaTraits< wxZlibOutputStream >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxZlibOutputStream >::_bind_dtor(wxZlibOutputStream* obj) {
	delete obj;
}

const char LunaTraits< wxZlibOutputStream >::className[] = "wxZlibOutputStream";
const char LunaTraits< wxZlibOutputStream >::fullName[] = "wxZlibOutputStream";
const char LunaTraits< wxZlibOutputStream >::moduleName[] = "wx";
const char* LunaTraits< wxZlibOutputStream >::parents[] = {"wx.wxFilterOutputStream", 0};
const int LunaTraits< wxZlibOutputStream >::hash = 65927564;
const int LunaTraits< wxZlibOutputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxZlibOutputStream >::methods[] = {
	{"SetDictionary", &luna_wrapper_wxZlibOutputStream::_bind_SetDictionary},
	{"CanHandleGZip", &luna_wrapper_wxZlibOutputStream::_bind_CanHandleGZip},
	{"base_GetClassInfo", &luna_wrapper_wxZlibOutputStream::_bind_base_GetClassInfo},
	{"base_GetLength", &luna_wrapper_wxZlibOutputStream::_bind_base_GetLength},
	{"base_GetSize", &luna_wrapper_wxZlibOutputStream::_bind_base_GetSize},
	{"base_IsOk", &luna_wrapper_wxZlibOutputStream::_bind_base_IsOk},
	{"base_IsSeekable", &luna_wrapper_wxZlibOutputStream::_bind_base_IsSeekable},
	{"base_Close", &luna_wrapper_wxZlibOutputStream::_bind_base_Close},
	{"base_LastWrite", &luna_wrapper_wxZlibOutputStream::_bind_base_LastWrite},
	{"base_SeekO", &luna_wrapper_wxZlibOutputStream::_bind_base_SeekO},
	{"base_TellO", &luna_wrapper_wxZlibOutputStream::_bind_base_TellO},
	{"base_Write", &luna_wrapper_wxZlibOutputStream::_bind_base_Write},
	{"__eq", &luna_wrapper_wxZlibOutputStream::_bind___eq},
	{"getTable", &luna_wrapper_wxZlibOutputStream::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxZlibOutputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxZlibOutputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxZlibOutputStream >::enumValues[] = {
	{0,0}
};


