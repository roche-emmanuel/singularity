#include <plug_common.h>

class luna_wrapper_wxOutputStream {
public:
	typedef Luna< wxOutputStream > luna_t;

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
		wxOutputStream* ptr= dynamic_cast< wxOutputStream* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxOutputStream >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Close(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LastWrite(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PutC(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SeekO(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TellO(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Write_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Write_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!dynamic_cast< wxInputStream* >(Luna< wxObject >::check(L,2))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxOutputStream::wxOutputStream()
	static wxOutputStream* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxOutputStream::wxOutputStream() function, expected prototype:\nwxOutputStream::wxOutputStream()\nClass arguments details:\n");
		}


		return new wxOutputStream();
	}


	// Function binds:
	// bool wxOutputStream::Close()
	static int _bind_Close(lua_State *L) {
		if (!_lg_typecheck_Close(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxOutputStream::Close() function, expected prototype:\nbool wxOutputStream::Close()\nClass arguments details:\n");
		}


		wxOutputStream* self=dynamic_cast< wxOutputStream* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxOutputStream::Close()");
		}
		bool lret = self->Close();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxOutputStream::LastWrite() const
	static int _bind_LastWrite(lua_State *L) {
		if (!_lg_typecheck_LastWrite(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxOutputStream::LastWrite() const function, expected prototype:\nsize_t wxOutputStream::LastWrite() const\nClass arguments details:\n");
		}


		wxOutputStream* self=dynamic_cast< wxOutputStream* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxOutputStream::LastWrite() const");
		}
		size_t lret = self->LastWrite();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxOutputStream::PutC(char c)
	static int _bind_PutC(lua_State *L) {
		if (!_lg_typecheck_PutC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxOutputStream::PutC(char c) function, expected prototype:\nvoid wxOutputStream::PutC(char c)\nClass arguments details:\n");
		}

		char c=(char)lua_tointeger(L,2);

		wxOutputStream* self=dynamic_cast< wxOutputStream* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxOutputStream::PutC(char)");
		}
		self->PutC(c);

		return 0;
	}

	// long wxOutputStream::SeekO(long pos, wxSeekMode mode = wxFromStart)
	static int _bind_SeekO(lua_State *L) {
		if (!_lg_typecheck_SeekO(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxOutputStream::SeekO(long pos, wxSeekMode mode = wxFromStart) function, expected prototype:\nlong wxOutputStream::SeekO(long pos, wxSeekMode mode = wxFromStart)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long pos=(long)lua_tointeger(L,2);
		wxSeekMode mode=luatop>2 ? (wxSeekMode)lua_tointeger(L,3) : wxFromStart;

		wxOutputStream* self=dynamic_cast< wxOutputStream* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxOutputStream::SeekO(long, wxSeekMode)");
		}
		long lret = self->SeekO(pos, mode);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxOutputStream::TellO() const
	static int _bind_TellO(lua_State *L) {
		if (!_lg_typecheck_TellO(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxOutputStream::TellO() const function, expected prototype:\nlong wxOutputStream::TellO() const\nClass arguments details:\n");
		}


		wxOutputStream* self=dynamic_cast< wxOutputStream* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxOutputStream::TellO() const");
		}
		long lret = self->TellO();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxOutputStream & wxOutputStream::Write(const void * buffer, size_t size)
	static int _bind_Write_overload_1(lua_State *L) {
		if (!_lg_typecheck_Write_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxOutputStream & wxOutputStream::Write(const void * buffer, size_t size) function, expected prototype:\nwxOutputStream & wxOutputStream::Write(const void * buffer, size_t size)\nClass arguments details:\n");
		}

		void* buffer=(Luna< void >::check(L,2));
		size_t size=(size_t)lua_tointeger(L,3);

		wxOutputStream* self=dynamic_cast< wxOutputStream* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxOutputStream & wxOutputStream::Write(const void *, size_t)");
		}
		const wxOutputStream* lret = &self->Write(buffer, size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxOutputStream >::push(L,lret,false);

		return 1;
	}

	// wxOutputStream & wxOutputStream::Write(wxInputStream & stream_in)
	static int _bind_Write_overload_2(lua_State *L) {
		if (!_lg_typecheck_Write_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxOutputStream & wxOutputStream::Write(wxInputStream & stream_in) function, expected prototype:\nwxOutputStream & wxOutputStream::Write(wxInputStream & stream_in)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxInputStream* stream_in_ptr=dynamic_cast< wxInputStream* >(Luna< wxObject >::check(L,2));
		if( !stream_in_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream_in in wxOutputStream::Write function");
		}
		wxInputStream & stream_in=*stream_in_ptr;

		wxOutputStream* self=dynamic_cast< wxOutputStream* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxOutputStream & wxOutputStream::Write(wxInputStream &)");
		}
		const wxOutputStream* lret = &self->Write(stream_in);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxOutputStream >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxOutputStream::Write
	static int _bind_Write(lua_State *L) {
		if (_lg_typecheck_Write_overload_1(L)) return _bind_Write_overload_1(L);
		if (_lg_typecheck_Write_overload_2(L)) return _bind_Write_overload_2(L);

		luaL_error(L, "error in function Write, cannot match any of the overloads for function Write:\n  Write(const void *, size_t)\n  Write(wxInputStream &)\n");
		return 0;
	}


	// Operator binds:

};

wxOutputStream* LunaTraits< wxOutputStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxOutputStream::_bind_ctor(L);
}

void LunaTraits< wxOutputStream >::_bind_dtor(wxOutputStream* obj) {
	delete obj;
}

const char LunaTraits< wxOutputStream >::className[] = "wxOutputStream";
const char LunaTraits< wxOutputStream >::fullName[] = "wxOutputStream";
const char LunaTraits< wxOutputStream >::moduleName[] = "wx";
const char* LunaTraits< wxOutputStream >::parents[] = {"wx.wxStreamBase", 0};
const int LunaTraits< wxOutputStream >::hash = 63992062;
const int LunaTraits< wxOutputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxOutputStream >::methods[] = {
	{"Close", &luna_wrapper_wxOutputStream::_bind_Close},
	{"LastWrite", &luna_wrapper_wxOutputStream::_bind_LastWrite},
	{"PutC", &luna_wrapper_wxOutputStream::_bind_PutC},
	{"SeekO", &luna_wrapper_wxOutputStream::_bind_SeekO},
	{"TellO", &luna_wrapper_wxOutputStream::_bind_TellO},
	{"Write", &luna_wrapper_wxOutputStream::_bind_Write},
	{"__eq", &luna_wrapper_wxOutputStream::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxOutputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxOutputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxOutputStream >::enumValues[] = {
	{0,0}
};


