#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMemoryInputStream.h>

class luna_wrapper_wxMemoryInputStream {
public:
	typedef Luna< wxMemoryInputStream > luna_t;

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
		//wxMemoryInputStream* ptr= dynamic_cast< wxMemoryInputStream* >(Luna< wxObject >::check(L,1));
		wxMemoryInputStream* ptr= luna_caster< wxObject, wxMemoryInputStream >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMemoryInputStream >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxMemoryOutputStream >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxInputStream >(L,2))) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
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

	inline static bool _lg_typecheck_base_CanRead(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Eof(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_LastRead(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Peek(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Read(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SeekI(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_TellI(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMemoryInputStream::wxMemoryInputStream(lua_Table * data, const void * data, size_t len)
	static wxMemoryInputStream* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMemoryInputStream::wxMemoryInputStream(lua_Table * data, const void * data, size_t len) function, expected prototype:\nwxMemoryInputStream::wxMemoryInputStream(lua_Table * data, const void * data, size_t len)\nClass arguments details:\n");
		}

		void* data=(Luna< void >::check(L,2));
		size_t len=(size_t)lua_tointeger(L,3);

		return new wrapper_wxMemoryInputStream(L,NULL, data, len);
	}

	// wxMemoryInputStream::wxMemoryInputStream(lua_Table * data, const wxMemoryOutputStream & stream)
	static wxMemoryInputStream* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMemoryInputStream::wxMemoryInputStream(lua_Table * data, const wxMemoryOutputStream & stream) function, expected prototype:\nwxMemoryInputStream::wxMemoryInputStream(lua_Table * data, const wxMemoryOutputStream & stream)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		const wxMemoryOutputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxMemoryOutputStream >(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxMemoryInputStream::wxMemoryInputStream function");
		}
		const wxMemoryOutputStream & stream=*stream_ptr;

		return new wrapper_wxMemoryInputStream(L,NULL, stream);
	}

	// wxMemoryInputStream::wxMemoryInputStream(lua_Table * data, wxInputStream & stream, long long len = wxInvalidOffset)
	static wxMemoryInputStream* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMemoryInputStream::wxMemoryInputStream(lua_Table * data, wxInputStream & stream, long long len = wxInvalidOffset) function, expected prototype:\nwxMemoryInputStream::wxMemoryInputStream(lua_Table * data, wxInputStream & stream, long long len = wxInvalidOffset)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxInputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxInputStream >(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxMemoryInputStream::wxMemoryInputStream function");
		}
		wxInputStream & stream=*stream_ptr;
		long long len=luatop>2 ? (long long)lua_tointeger(L,3) : wxInvalidOffset;

		return new wrapper_wxMemoryInputStream(L,NULL, stream, len);
	}

	// Overload binder for wxMemoryInputStream::wxMemoryInputStream
	static wxMemoryInputStream* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function wxMemoryInputStream, cannot match any of the overloads for function wxMemoryInputStream:\n  wxMemoryInputStream(lua_Table *, const void *, size_t)\n  wxMemoryInputStream(lua_Table *, const wxMemoryOutputStream &)\n  wxMemoryInputStream(lua_Table *, wxInputStream &, long long)\n");
		return NULL;
	}


	// Function binds:
	// wxClassInfo * wxMemoryInputStream::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxMemoryInputStream::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxMemoryInputStream::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxMemoryInputStream* self=Luna< wxObject >::checkSubType< wxMemoryInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxMemoryInputStream::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxMemoryInputStream::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// long long wxMemoryInputStream::base_GetLength() const
	static int _bind_base_GetLength(lua_State *L) {
		if (!_lg_typecheck_base_GetLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long long wxMemoryInputStream::base_GetLength() const function, expected prototype:\nlong long wxMemoryInputStream::base_GetLength() const\nClass arguments details:\n");
		}


		wxMemoryInputStream* self=Luna< wxObject >::checkSubType< wxMemoryInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long long wxMemoryInputStream::base_GetLength() const");
		}
		long long lret = self->wxMemoryInputStream::GetLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxMemoryInputStream::base_GetSize() const
	static int _bind_base_GetSize(lua_State *L) {
		if (!_lg_typecheck_base_GetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxMemoryInputStream::base_GetSize() const function, expected prototype:\nsize_t wxMemoryInputStream::base_GetSize() const\nClass arguments details:\n");
		}


		wxMemoryInputStream* self=Luna< wxObject >::checkSubType< wxMemoryInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxMemoryInputStream::base_GetSize() const");
		}
		size_t lret = self->wxMemoryInputStream::GetSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxMemoryInputStream::base_IsOk() const
	static int _bind_base_IsOk(lua_State *L) {
		if (!_lg_typecheck_base_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMemoryInputStream::base_IsOk() const function, expected prototype:\nbool wxMemoryInputStream::base_IsOk() const\nClass arguments details:\n");
		}


		wxMemoryInputStream* self=Luna< wxObject >::checkSubType< wxMemoryInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMemoryInputStream::base_IsOk() const");
		}
		bool lret = self->wxMemoryInputStream::IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMemoryInputStream::base_IsSeekable() const
	static int _bind_base_IsSeekable(lua_State *L) {
		if (!_lg_typecheck_base_IsSeekable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMemoryInputStream::base_IsSeekable() const function, expected prototype:\nbool wxMemoryInputStream::base_IsSeekable() const\nClass arguments details:\n");
		}


		wxMemoryInputStream* self=Luna< wxObject >::checkSubType< wxMemoryInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMemoryInputStream::base_IsSeekable() const");
		}
		bool lret = self->wxMemoryInputStream::IsSeekable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMemoryInputStream::base_CanRead() const
	static int _bind_base_CanRead(lua_State *L) {
		if (!_lg_typecheck_base_CanRead(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMemoryInputStream::base_CanRead() const function, expected prototype:\nbool wxMemoryInputStream::base_CanRead() const\nClass arguments details:\n");
		}


		wxMemoryInputStream* self=Luna< wxObject >::checkSubType< wxMemoryInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMemoryInputStream::base_CanRead() const");
		}
		bool lret = self->wxMemoryInputStream::CanRead();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMemoryInputStream::base_Eof() const
	static int _bind_base_Eof(lua_State *L) {
		if (!_lg_typecheck_base_Eof(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMemoryInputStream::base_Eof() const function, expected prototype:\nbool wxMemoryInputStream::base_Eof() const\nClass arguments details:\n");
		}


		wxMemoryInputStream* self=Luna< wxObject >::checkSubType< wxMemoryInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMemoryInputStream::base_Eof() const");
		}
		bool lret = self->wxMemoryInputStream::Eof();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxMemoryInputStream::base_LastRead() const
	static int _bind_base_LastRead(lua_State *L) {
		if (!_lg_typecheck_base_LastRead(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxMemoryInputStream::base_LastRead() const function, expected prototype:\nsize_t wxMemoryInputStream::base_LastRead() const\nClass arguments details:\n");
		}


		wxMemoryInputStream* self=Luna< wxObject >::checkSubType< wxMemoryInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxMemoryInputStream::base_LastRead() const");
		}
		size_t lret = self->wxMemoryInputStream::LastRead();
		lua_pushnumber(L,lret);

		return 1;
	}

	// char wxMemoryInputStream::base_Peek()
	static int _bind_base_Peek(lua_State *L) {
		if (!_lg_typecheck_base_Peek(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in char wxMemoryInputStream::base_Peek() function, expected prototype:\nchar wxMemoryInputStream::base_Peek()\nClass arguments details:\n");
		}


		wxMemoryInputStream* self=Luna< wxObject >::checkSubType< wxMemoryInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call char wxMemoryInputStream::base_Peek()");
		}
		char lret = self->wxMemoryInputStream::Peek();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxInputStream & wxMemoryInputStream::base_Read(void * buffer, size_t size)
	static int _bind_base_Read(lua_State *L) {
		if (!_lg_typecheck_base_Read(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxInputStream & wxMemoryInputStream::base_Read(void * buffer, size_t size) function, expected prototype:\nwxInputStream & wxMemoryInputStream::base_Read(void * buffer, size_t size)\nClass arguments details:\n");
		}

		void* buffer=(Luna< void >::check(L,2));
		size_t size=(size_t)lua_tointeger(L,3);

		wxMemoryInputStream* self=Luna< wxObject >::checkSubType< wxMemoryInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxInputStream & wxMemoryInputStream::base_Read(void *, size_t)");
		}
		const wxInputStream* lret = &self->wxMemoryInputStream::Read(buffer, size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxInputStream >::push(L,lret,false);

		return 1;
	}

	// long long wxMemoryInputStream::base_SeekI(long long pos, wxSeekMode mode = ::wxFromStart)
	static int _bind_base_SeekI(lua_State *L) {
		if (!_lg_typecheck_base_SeekI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long long wxMemoryInputStream::base_SeekI(long long pos, wxSeekMode mode = ::wxFromStart) function, expected prototype:\nlong long wxMemoryInputStream::base_SeekI(long long pos, wxSeekMode mode = ::wxFromStart)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long long pos=(long long)lua_tointeger(L,2);
		wxSeekMode mode=luatop>2 ? (wxSeekMode)lua_tointeger(L,3) : ::wxFromStart;

		wxMemoryInputStream* self=Luna< wxObject >::checkSubType< wxMemoryInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long long wxMemoryInputStream::base_SeekI(long long, wxSeekMode)");
		}
		long long lret = self->wxMemoryInputStream::SeekI(pos, mode);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long long wxMemoryInputStream::base_TellI() const
	static int _bind_base_TellI(lua_State *L) {
		if (!_lg_typecheck_base_TellI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long long wxMemoryInputStream::base_TellI() const function, expected prototype:\nlong long wxMemoryInputStream::base_TellI() const\nClass arguments details:\n");
		}


		wxMemoryInputStream* self=Luna< wxObject >::checkSubType< wxMemoryInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long long wxMemoryInputStream::base_TellI() const");
		}
		long long lret = self->wxMemoryInputStream::TellI();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxMemoryInputStream* LunaTraits< wxMemoryInputStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMemoryInputStream::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// size_t wxInputStream::OnSysRead(void * buffer, size_t bufsize)
}

void LunaTraits< wxMemoryInputStream >::_bind_dtor(wxMemoryInputStream* obj) {
	delete obj;
}

const char LunaTraits< wxMemoryInputStream >::className[] = "wxMemoryInputStream";
const char LunaTraits< wxMemoryInputStream >::fullName[] = "wxMemoryInputStream";
const char LunaTraits< wxMemoryInputStream >::moduleName[] = "wx";
const char* LunaTraits< wxMemoryInputStream >::parents[] = {"wx.wxInputStream", 0};
const int LunaTraits< wxMemoryInputStream >::hash = 50114172;
const int LunaTraits< wxMemoryInputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMemoryInputStream >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxMemoryInputStream::_bind_base_GetClassInfo},
	{"base_GetLength", &luna_wrapper_wxMemoryInputStream::_bind_base_GetLength},
	{"base_GetSize", &luna_wrapper_wxMemoryInputStream::_bind_base_GetSize},
	{"base_IsOk", &luna_wrapper_wxMemoryInputStream::_bind_base_IsOk},
	{"base_IsSeekable", &luna_wrapper_wxMemoryInputStream::_bind_base_IsSeekable},
	{"base_CanRead", &luna_wrapper_wxMemoryInputStream::_bind_base_CanRead},
	{"base_Eof", &luna_wrapper_wxMemoryInputStream::_bind_base_Eof},
	{"base_LastRead", &luna_wrapper_wxMemoryInputStream::_bind_base_LastRead},
	{"base_Peek", &luna_wrapper_wxMemoryInputStream::_bind_base_Peek},
	{"base_Read", &luna_wrapper_wxMemoryInputStream::_bind_base_Read},
	{"base_SeekI", &luna_wrapper_wxMemoryInputStream::_bind_base_SeekI},
	{"base_TellI", &luna_wrapper_wxMemoryInputStream::_bind_base_TellI},
	{"__eq", &luna_wrapper_wxMemoryInputStream::_bind___eq},
	{"getTable", &luna_wrapper_wxMemoryInputStream::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxMemoryInputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxMemoryInputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMemoryInputStream >::enumValues[] = {
	{0,0}
};


