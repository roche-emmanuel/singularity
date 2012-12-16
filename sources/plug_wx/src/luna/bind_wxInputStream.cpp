#include <plug_common.h>

#include <luna/wrappers/wrapper_wxInputStream.h>

class luna_wrapper_wxInputStream {
public:
	typedef Luna< wxInputStream > luna_t;

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
		//wxInputStream* ptr= dynamic_cast< wxInputStream* >(Luna< wxObject >::check(L,1));
		wxInputStream* ptr= luna_caster< wxObject, wxInputStream >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxInputStream >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_CanRead(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Eof(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetC(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LastRead(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Peek(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Read_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Read_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!dynamic_cast< wxOutputStream* >(Luna< wxObject >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SeekI(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TellI(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Ungetch_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Ungetch_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	// Function binds:
	// bool wxInputStream::CanRead() const
	static int _bind_CanRead(lua_State *L) {
		if (!_lg_typecheck_CanRead(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxInputStream::CanRead() const function, expected prototype:\nbool wxInputStream::CanRead() const\nClass arguments details:\n");
		}


		wxInputStream* self=Luna< wxObject >::checkSubType< wxInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxInputStream::CanRead() const");
		}
		bool lret = self->CanRead();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxInputStream::Eof() const
	static int _bind_Eof(lua_State *L) {
		if (!_lg_typecheck_Eof(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxInputStream::Eof() const function, expected prototype:\nbool wxInputStream::Eof() const\nClass arguments details:\n");
		}


		wxInputStream* self=Luna< wxObject >::checkSubType< wxInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxInputStream::Eof() const");
		}
		bool lret = self->Eof();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxInputStream::GetC()
	static int _bind_GetC(lua_State *L) {
		if (!_lg_typecheck_GetC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxInputStream::GetC() function, expected prototype:\nint wxInputStream::GetC()\nClass arguments details:\n");
		}


		wxInputStream* self=Luna< wxObject >::checkSubType< wxInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxInputStream::GetC()");
		}
		int lret = self->GetC();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxInputStream::LastRead() const
	static int _bind_LastRead(lua_State *L) {
		if (!_lg_typecheck_LastRead(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxInputStream::LastRead() const function, expected prototype:\nsize_t wxInputStream::LastRead() const\nClass arguments details:\n");
		}


		wxInputStream* self=Luna< wxObject >::checkSubType< wxInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxInputStream::LastRead() const");
		}
		size_t lret = self->LastRead();
		lua_pushnumber(L,lret);

		return 1;
	}

	// char wxInputStream::Peek()
	static int _bind_Peek(lua_State *L) {
		if (!_lg_typecheck_Peek(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in char wxInputStream::Peek() function, expected prototype:\nchar wxInputStream::Peek()\nClass arguments details:\n");
		}


		wxInputStream* self=Luna< wxObject >::checkSubType< wxInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call char wxInputStream::Peek()");
		}
		char lret = self->Peek();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxInputStream & wxInputStream::Read(void * buffer, size_t size)
	static int _bind_Read_overload_1(lua_State *L) {
		if (!_lg_typecheck_Read_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxInputStream & wxInputStream::Read(void * buffer, size_t size) function, expected prototype:\nwxInputStream & wxInputStream::Read(void * buffer, size_t size)\nClass arguments details:\n");
		}

		void* buffer=(Luna< void >::check(L,2));
		size_t size=(size_t)lua_tointeger(L,3);

		wxInputStream* self=Luna< wxObject >::checkSubType< wxInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxInputStream & wxInputStream::Read(void *, size_t)");
		}
		const wxInputStream* lret = &self->Read(buffer, size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxInputStream >::push(L,lret,false);

		return 1;
	}

	// wxInputStream & wxInputStream::Read(wxOutputStream & stream_out)
	static int _bind_Read_overload_2(lua_State *L) {
		if (!_lg_typecheck_Read_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxInputStream & wxInputStream::Read(wxOutputStream & stream_out) function, expected prototype:\nwxInputStream & wxInputStream::Read(wxOutputStream & stream_out)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxOutputStream* stream_out_ptr=(Luna< wxObject >::checkSubType< wxOutputStream >(L,2));
		if( !stream_out_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream_out in wxInputStream::Read function");
		}
		wxOutputStream & stream_out=*stream_out_ptr;

		wxInputStream* self=Luna< wxObject >::checkSubType< wxInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxInputStream & wxInputStream::Read(wxOutputStream &)");
		}
		const wxInputStream* lret = &self->Read(stream_out);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxInputStream >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxInputStream::Read
	static int _bind_Read(lua_State *L) {
		if (_lg_typecheck_Read_overload_1(L)) return _bind_Read_overload_1(L);
		if (_lg_typecheck_Read_overload_2(L)) return _bind_Read_overload_2(L);

		luaL_error(L, "error in function Read, cannot match any of the overloads for function Read:\n  Read(void *, size_t)\n  Read(wxOutputStream &)\n");
		return 0;
	}

	// long long wxInputStream::SeekI(long long pos, wxSeekMode mode = ::wxFromStart)
	static int _bind_SeekI(lua_State *L) {
		if (!_lg_typecheck_SeekI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long long wxInputStream::SeekI(long long pos, wxSeekMode mode = ::wxFromStart) function, expected prototype:\nlong long wxInputStream::SeekI(long long pos, wxSeekMode mode = ::wxFromStart)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long long pos=(long long)lua_tointeger(L,2);
		wxSeekMode mode=luatop>2 ? (wxSeekMode)lua_tointeger(L,3) : ::wxFromStart;

		wxInputStream* self=Luna< wxObject >::checkSubType< wxInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long long wxInputStream::SeekI(long long, wxSeekMode)");
		}
		long long lret = self->SeekI(pos, mode);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long long wxInputStream::TellI() const
	static int _bind_TellI(lua_State *L) {
		if (!_lg_typecheck_TellI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long long wxInputStream::TellI() const function, expected prototype:\nlong long wxInputStream::TellI() const\nClass arguments details:\n");
		}


		wxInputStream* self=Luna< wxObject >::checkSubType< wxInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long long wxInputStream::TellI() const");
		}
		long long lret = self->TellI();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxInputStream::Ungetch(const void * buffer, size_t size)
	static int _bind_Ungetch_overload_1(lua_State *L) {
		if (!_lg_typecheck_Ungetch_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxInputStream::Ungetch(const void * buffer, size_t size) function, expected prototype:\nsize_t wxInputStream::Ungetch(const void * buffer, size_t size)\nClass arguments details:\n");
		}

		void* buffer=(Luna< void >::check(L,2));
		size_t size=(size_t)lua_tointeger(L,3);

		wxInputStream* self=Luna< wxObject >::checkSubType< wxInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxInputStream::Ungetch(const void *, size_t)");
		}
		size_t lret = self->Ungetch(buffer, size);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxInputStream::Ungetch(char c)
	static int _bind_Ungetch_overload_2(lua_State *L) {
		if (!_lg_typecheck_Ungetch_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxInputStream::Ungetch(char c) function, expected prototype:\nbool wxInputStream::Ungetch(char c)\nClass arguments details:\n");
		}

		char c=(char)lua_tointeger(L,2);

		wxInputStream* self=Luna< wxObject >::checkSubType< wxInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxInputStream::Ungetch(char)");
		}
		bool lret = self->Ungetch(c);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxInputStream::Ungetch
	static int _bind_Ungetch(lua_State *L) {
		if (_lg_typecheck_Ungetch_overload_1(L)) return _bind_Ungetch_overload_1(L);
		if (_lg_typecheck_Ungetch_overload_2(L)) return _bind_Ungetch_overload_2(L);

		luaL_error(L, "error in function Ungetch, cannot match any of the overloads for function Ungetch:\n  Ungetch(const void *, size_t)\n  Ungetch(char)\n");
		return 0;
	}

	// wxClassInfo * wxInputStream::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxInputStream::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxInputStream::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxInputStream* self=Luna< wxObject >::checkSubType< wxInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxInputStream::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxInputStream::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// long long wxInputStream::base_GetLength() const
	static int _bind_base_GetLength(lua_State *L) {
		if (!_lg_typecheck_base_GetLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long long wxInputStream::base_GetLength() const function, expected prototype:\nlong long wxInputStream::base_GetLength() const\nClass arguments details:\n");
		}


		wxInputStream* self=Luna< wxObject >::checkSubType< wxInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long long wxInputStream::base_GetLength() const");
		}
		long long lret = self->wxInputStream::GetLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxInputStream::base_GetSize() const
	static int _bind_base_GetSize(lua_State *L) {
		if (!_lg_typecheck_base_GetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxInputStream::base_GetSize() const function, expected prototype:\nsize_t wxInputStream::base_GetSize() const\nClass arguments details:\n");
		}


		wxInputStream* self=Luna< wxObject >::checkSubType< wxInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxInputStream::base_GetSize() const");
		}
		size_t lret = self->wxInputStream::GetSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxInputStream::base_IsOk() const
	static int _bind_base_IsOk(lua_State *L) {
		if (!_lg_typecheck_base_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxInputStream::base_IsOk() const function, expected prototype:\nbool wxInputStream::base_IsOk() const\nClass arguments details:\n");
		}


		wxInputStream* self=Luna< wxObject >::checkSubType< wxInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxInputStream::base_IsOk() const");
		}
		bool lret = self->wxInputStream::IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxInputStream::base_IsSeekable() const
	static int _bind_base_IsSeekable(lua_State *L) {
		if (!_lg_typecheck_base_IsSeekable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxInputStream::base_IsSeekable() const function, expected prototype:\nbool wxInputStream::base_IsSeekable() const\nClass arguments details:\n");
		}


		wxInputStream* self=Luna< wxObject >::checkSubType< wxInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxInputStream::base_IsSeekable() const");
		}
		bool lret = self->wxInputStream::IsSeekable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxInputStream::base_CanRead() const
	static int _bind_base_CanRead(lua_State *L) {
		if (!_lg_typecheck_base_CanRead(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxInputStream::base_CanRead() const function, expected prototype:\nbool wxInputStream::base_CanRead() const\nClass arguments details:\n");
		}


		wxInputStream* self=Luna< wxObject >::checkSubType< wxInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxInputStream::base_CanRead() const");
		}
		bool lret = self->wxInputStream::CanRead();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxInputStream::base_Eof() const
	static int _bind_base_Eof(lua_State *L) {
		if (!_lg_typecheck_base_Eof(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxInputStream::base_Eof() const function, expected prototype:\nbool wxInputStream::base_Eof() const\nClass arguments details:\n");
		}


		wxInputStream* self=Luna< wxObject >::checkSubType< wxInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxInputStream::base_Eof() const");
		}
		bool lret = self->wxInputStream::Eof();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxInputStream::base_LastRead() const
	static int _bind_base_LastRead(lua_State *L) {
		if (!_lg_typecheck_base_LastRead(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxInputStream::base_LastRead() const function, expected prototype:\nsize_t wxInputStream::base_LastRead() const\nClass arguments details:\n");
		}


		wxInputStream* self=Luna< wxObject >::checkSubType< wxInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxInputStream::base_LastRead() const");
		}
		size_t lret = self->wxInputStream::LastRead();
		lua_pushnumber(L,lret);

		return 1;
	}

	// char wxInputStream::base_Peek()
	static int _bind_base_Peek(lua_State *L) {
		if (!_lg_typecheck_base_Peek(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in char wxInputStream::base_Peek() function, expected prototype:\nchar wxInputStream::base_Peek()\nClass arguments details:\n");
		}


		wxInputStream* self=Luna< wxObject >::checkSubType< wxInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call char wxInputStream::base_Peek()");
		}
		char lret = self->wxInputStream::Peek();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxInputStream & wxInputStream::base_Read(void * buffer, size_t size)
	static int _bind_base_Read(lua_State *L) {
		if (!_lg_typecheck_base_Read(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxInputStream & wxInputStream::base_Read(void * buffer, size_t size) function, expected prototype:\nwxInputStream & wxInputStream::base_Read(void * buffer, size_t size)\nClass arguments details:\n");
		}

		void* buffer=(Luna< void >::check(L,2));
		size_t size=(size_t)lua_tointeger(L,3);

		wxInputStream* self=Luna< wxObject >::checkSubType< wxInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxInputStream & wxInputStream::base_Read(void *, size_t)");
		}
		const wxInputStream* lret = &self->wxInputStream::Read(buffer, size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxInputStream >::push(L,lret,false);

		return 1;
	}

	// long long wxInputStream::base_SeekI(long long pos, wxSeekMode mode = ::wxFromStart)
	static int _bind_base_SeekI(lua_State *L) {
		if (!_lg_typecheck_base_SeekI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long long wxInputStream::base_SeekI(long long pos, wxSeekMode mode = ::wxFromStart) function, expected prototype:\nlong long wxInputStream::base_SeekI(long long pos, wxSeekMode mode = ::wxFromStart)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long long pos=(long long)lua_tointeger(L,2);
		wxSeekMode mode=luatop>2 ? (wxSeekMode)lua_tointeger(L,3) : ::wxFromStart;

		wxInputStream* self=Luna< wxObject >::checkSubType< wxInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long long wxInputStream::base_SeekI(long long, wxSeekMode)");
		}
		long long lret = self->wxInputStream::SeekI(pos, mode);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long long wxInputStream::base_TellI() const
	static int _bind_base_TellI(lua_State *L) {
		if (!_lg_typecheck_base_TellI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long long wxInputStream::base_TellI() const function, expected prototype:\nlong long wxInputStream::base_TellI() const\nClass arguments details:\n");
		}


		wxInputStream* self=Luna< wxObject >::checkSubType< wxInputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long long wxInputStream::base_TellI() const");
		}
		long long lret = self->wxInputStream::TellI();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxInputStream* LunaTraits< wxInputStream >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// size_t wxInputStream::OnSysRead(void * buffer, size_t bufsize)
}

void LunaTraits< wxInputStream >::_bind_dtor(wxInputStream* obj) {
	delete obj;
}

const char LunaTraits< wxInputStream >::className[] = "wxInputStream";
const char LunaTraits< wxInputStream >::fullName[] = "wxInputStream";
const char LunaTraits< wxInputStream >::moduleName[] = "wx";
const char* LunaTraits< wxInputStream >::parents[] = {"wx.wxStreamBase", 0};
const int LunaTraits< wxInputStream >::hash = 75363410;
const int LunaTraits< wxInputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxInputStream >::methods[] = {
	{"CanRead", &luna_wrapper_wxInputStream::_bind_CanRead},
	{"Eof", &luna_wrapper_wxInputStream::_bind_Eof},
	{"GetC", &luna_wrapper_wxInputStream::_bind_GetC},
	{"LastRead", &luna_wrapper_wxInputStream::_bind_LastRead},
	{"Peek", &luna_wrapper_wxInputStream::_bind_Peek},
	{"Read", &luna_wrapper_wxInputStream::_bind_Read},
	{"SeekI", &luna_wrapper_wxInputStream::_bind_SeekI},
	{"TellI", &luna_wrapper_wxInputStream::_bind_TellI},
	{"Ungetch", &luna_wrapper_wxInputStream::_bind_Ungetch},
	{"base_GetClassInfo", &luna_wrapper_wxInputStream::_bind_base_GetClassInfo},
	{"base_GetLength", &luna_wrapper_wxInputStream::_bind_base_GetLength},
	{"base_GetSize", &luna_wrapper_wxInputStream::_bind_base_GetSize},
	{"base_IsOk", &luna_wrapper_wxInputStream::_bind_base_IsOk},
	{"base_IsSeekable", &luna_wrapper_wxInputStream::_bind_base_IsSeekable},
	{"base_CanRead", &luna_wrapper_wxInputStream::_bind_base_CanRead},
	{"base_Eof", &luna_wrapper_wxInputStream::_bind_base_Eof},
	{"base_LastRead", &luna_wrapper_wxInputStream::_bind_base_LastRead},
	{"base_Peek", &luna_wrapper_wxInputStream::_bind_base_Peek},
	{"base_Read", &luna_wrapper_wxInputStream::_bind_base_Read},
	{"base_SeekI", &luna_wrapper_wxInputStream::_bind_base_SeekI},
	{"base_TellI", &luna_wrapper_wxInputStream::_bind_base_TellI},
	{"__eq", &luna_wrapper_wxInputStream::_bind___eq},
	{"getTable", &luna_wrapper_wxInputStream::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxInputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxInputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxInputStream >::enumValues[] = {
	{0,0}
};


