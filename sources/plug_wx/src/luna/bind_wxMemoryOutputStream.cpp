#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMemoryOutputStream.h>

class luna_wrapper_wxMemoryOutputStream {
public:
	typedef Luna< wxMemoryOutputStream > luna_t;

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
		//wxMemoryOutputStream* ptr= dynamic_cast< wxMemoryOutputStream* >(Luna< wxObject >::check(L,1));
		wxMemoryOutputStream* ptr= luna_caster< wxObject, wxMemoryOutputStream >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMemoryOutputStream >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_CopyTo(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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
	// wxMemoryOutputStream::wxMemoryOutputStream(void * data = NULL, size_t length = 0)
	static wxMemoryOutputStream* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMemoryOutputStream::wxMemoryOutputStream(void * data = NULL, size_t length = 0) function, expected prototype:\nwxMemoryOutputStream::wxMemoryOutputStream(void * data = NULL, size_t length = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		void* data=luatop>0 ? (Luna< void >::check(L,1)) : NULL;
		size_t length=luatop>1 ? (size_t)lua_tointeger(L,2) : 0;

		return new wxMemoryOutputStream(data, length);
	}

	// wxMemoryOutputStream::wxMemoryOutputStream(lua_Table * data, void * data = NULL, size_t length = 0)
	static wxMemoryOutputStream* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMemoryOutputStream::wxMemoryOutputStream(lua_Table * data, void * data = NULL, size_t length = 0) function, expected prototype:\nwxMemoryOutputStream::wxMemoryOutputStream(lua_Table * data, void * data = NULL, size_t length = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		void* data=luatop>1 ? (Luna< void >::check(L,2)) : NULL;
		size_t length=luatop>2 ? (size_t)lua_tointeger(L,3) : 0;

		return new wrapper_wxMemoryOutputStream(L,NULL, data, length);
	}

	// Overload binder for wxMemoryOutputStream::wxMemoryOutputStream
	static wxMemoryOutputStream* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxMemoryOutputStream, cannot match any of the overloads for function wxMemoryOutputStream:\n  wxMemoryOutputStream(void *, size_t)\n  wxMemoryOutputStream(lua_Table *, void *, size_t)\n");
		return NULL;
	}


	// Function binds:
	// size_t wxMemoryOutputStream::CopyTo(void * buffer, size_t len) const
	static int _bind_CopyTo(lua_State *L) {
		if (!_lg_typecheck_CopyTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxMemoryOutputStream::CopyTo(void * buffer, size_t len) const function, expected prototype:\nsize_t wxMemoryOutputStream::CopyTo(void * buffer, size_t len) const\nClass arguments details:\n");
		}

		void* buffer=(Luna< void >::check(L,2));
		size_t len=(size_t)lua_tointeger(L,3);

		wxMemoryOutputStream* self=Luna< wxObject >::checkSubType< wxMemoryOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxMemoryOutputStream::CopyTo(void *, size_t) const");
		}
		size_t lret = self->CopyTo(buffer, len);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxClassInfo * wxMemoryOutputStream::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxMemoryOutputStream::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxMemoryOutputStream::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxMemoryOutputStream* self=Luna< wxObject >::checkSubType< wxMemoryOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxMemoryOutputStream::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxMemoryOutputStream::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// long long wxMemoryOutputStream::base_GetLength() const
	static int _bind_base_GetLength(lua_State *L) {
		if (!_lg_typecheck_base_GetLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long long wxMemoryOutputStream::base_GetLength() const function, expected prototype:\nlong long wxMemoryOutputStream::base_GetLength() const\nClass arguments details:\n");
		}


		wxMemoryOutputStream* self=Luna< wxObject >::checkSubType< wxMemoryOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long long wxMemoryOutputStream::base_GetLength() const");
		}
		long long lret = self->wxMemoryOutputStream::GetLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxMemoryOutputStream::base_GetSize() const
	static int _bind_base_GetSize(lua_State *L) {
		if (!_lg_typecheck_base_GetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxMemoryOutputStream::base_GetSize() const function, expected prototype:\nsize_t wxMemoryOutputStream::base_GetSize() const\nClass arguments details:\n");
		}


		wxMemoryOutputStream* self=Luna< wxObject >::checkSubType< wxMemoryOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxMemoryOutputStream::base_GetSize() const");
		}
		size_t lret = self->wxMemoryOutputStream::GetSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxMemoryOutputStream::base_IsOk() const
	static int _bind_base_IsOk(lua_State *L) {
		if (!_lg_typecheck_base_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMemoryOutputStream::base_IsOk() const function, expected prototype:\nbool wxMemoryOutputStream::base_IsOk() const\nClass arguments details:\n");
		}


		wxMemoryOutputStream* self=Luna< wxObject >::checkSubType< wxMemoryOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMemoryOutputStream::base_IsOk() const");
		}
		bool lret = self->wxMemoryOutputStream::IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMemoryOutputStream::base_IsSeekable() const
	static int _bind_base_IsSeekable(lua_State *L) {
		if (!_lg_typecheck_base_IsSeekable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMemoryOutputStream::base_IsSeekable() const function, expected prototype:\nbool wxMemoryOutputStream::base_IsSeekable() const\nClass arguments details:\n");
		}


		wxMemoryOutputStream* self=Luna< wxObject >::checkSubType< wxMemoryOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMemoryOutputStream::base_IsSeekable() const");
		}
		bool lret = self->wxMemoryOutputStream::IsSeekable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMemoryOutputStream::base_Close()
	static int _bind_base_Close(lua_State *L) {
		if (!_lg_typecheck_base_Close(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMemoryOutputStream::base_Close() function, expected prototype:\nbool wxMemoryOutputStream::base_Close()\nClass arguments details:\n");
		}


		wxMemoryOutputStream* self=Luna< wxObject >::checkSubType< wxMemoryOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMemoryOutputStream::base_Close()");
		}
		bool lret = self->wxMemoryOutputStream::Close();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxMemoryOutputStream::base_LastWrite() const
	static int _bind_base_LastWrite(lua_State *L) {
		if (!_lg_typecheck_base_LastWrite(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxMemoryOutputStream::base_LastWrite() const function, expected prototype:\nsize_t wxMemoryOutputStream::base_LastWrite() const\nClass arguments details:\n");
		}


		wxMemoryOutputStream* self=Luna< wxObject >::checkSubType< wxMemoryOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxMemoryOutputStream::base_LastWrite() const");
		}
		size_t lret = self->wxMemoryOutputStream::LastWrite();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long long wxMemoryOutputStream::base_SeekO(long long pos, wxSeekMode mode = ::wxFromStart)
	static int _bind_base_SeekO(lua_State *L) {
		if (!_lg_typecheck_base_SeekO(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long long wxMemoryOutputStream::base_SeekO(long long pos, wxSeekMode mode = ::wxFromStart) function, expected prototype:\nlong long wxMemoryOutputStream::base_SeekO(long long pos, wxSeekMode mode = ::wxFromStart)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long long pos=(long long)lua_tointeger(L,2);
		wxSeekMode mode=luatop>2 ? (wxSeekMode)lua_tointeger(L,3) : ::wxFromStart;

		wxMemoryOutputStream* self=Luna< wxObject >::checkSubType< wxMemoryOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long long wxMemoryOutputStream::base_SeekO(long long, wxSeekMode)");
		}
		long long lret = self->wxMemoryOutputStream::SeekO(pos, mode);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long long wxMemoryOutputStream::base_TellO() const
	static int _bind_base_TellO(lua_State *L) {
		if (!_lg_typecheck_base_TellO(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long long wxMemoryOutputStream::base_TellO() const function, expected prototype:\nlong long wxMemoryOutputStream::base_TellO() const\nClass arguments details:\n");
		}


		wxMemoryOutputStream* self=Luna< wxObject >::checkSubType< wxMemoryOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long long wxMemoryOutputStream::base_TellO() const");
		}
		long long lret = self->wxMemoryOutputStream::TellO();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxOutputStream & wxMemoryOutputStream::base_Write(const void * buffer, size_t size)
	static int _bind_base_Write(lua_State *L) {
		if (!_lg_typecheck_base_Write(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxOutputStream & wxMemoryOutputStream::base_Write(const void * buffer, size_t size) function, expected prototype:\nwxOutputStream & wxMemoryOutputStream::base_Write(const void * buffer, size_t size)\nClass arguments details:\n");
		}

		void* buffer=(Luna< void >::check(L,2));
		size_t size=(size_t)lua_tointeger(L,3);

		wxMemoryOutputStream* self=Luna< wxObject >::checkSubType< wxMemoryOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxOutputStream & wxMemoryOutputStream::base_Write(const void *, size_t)");
		}
		const wxOutputStream* lret = &self->wxMemoryOutputStream::Write(buffer, size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxOutputStream >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxMemoryOutputStream* LunaTraits< wxMemoryOutputStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMemoryOutputStream::_bind_ctor(L);
}

void LunaTraits< wxMemoryOutputStream >::_bind_dtor(wxMemoryOutputStream* obj) {
	delete obj;
}

const char LunaTraits< wxMemoryOutputStream >::className[] = "wxMemoryOutputStream";
const char LunaTraits< wxMemoryOutputStream >::fullName[] = "wxMemoryOutputStream";
const char LunaTraits< wxMemoryOutputStream >::moduleName[] = "wx";
const char* LunaTraits< wxMemoryOutputStream >::parents[] = {"wx.wxOutputStream", 0};
const int LunaTraits< wxMemoryOutputStream >::hash = 55279384;
const int LunaTraits< wxMemoryOutputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMemoryOutputStream >::methods[] = {
	{"CopyTo", &luna_wrapper_wxMemoryOutputStream::_bind_CopyTo},
	{"base_GetClassInfo", &luna_wrapper_wxMemoryOutputStream::_bind_base_GetClassInfo},
	{"base_GetLength", &luna_wrapper_wxMemoryOutputStream::_bind_base_GetLength},
	{"base_GetSize", &luna_wrapper_wxMemoryOutputStream::_bind_base_GetSize},
	{"base_IsOk", &luna_wrapper_wxMemoryOutputStream::_bind_base_IsOk},
	{"base_IsSeekable", &luna_wrapper_wxMemoryOutputStream::_bind_base_IsSeekable},
	{"base_Close", &luna_wrapper_wxMemoryOutputStream::_bind_base_Close},
	{"base_LastWrite", &luna_wrapper_wxMemoryOutputStream::_bind_base_LastWrite},
	{"base_SeekO", &luna_wrapper_wxMemoryOutputStream::_bind_base_SeekO},
	{"base_TellO", &luna_wrapper_wxMemoryOutputStream::_bind_base_TellO},
	{"base_Write", &luna_wrapper_wxMemoryOutputStream::_bind_base_Write},
	{"__eq", &luna_wrapper_wxMemoryOutputStream::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxMemoryOutputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxMemoryOutputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMemoryOutputStream >::enumValues[] = {
	{0,0}
};


