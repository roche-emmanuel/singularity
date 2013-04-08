#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFilterOutputStream.h>

class luna_wrapper_wxFilterOutputStream {
public:
	typedef Luna< wxFilterOutputStream > luna_t;

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
		
		luna_wrapper_base* wrapper = luna_caster<wxObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		wxFilterOutputStream* self= (wxFilterOutputStream*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxFilterOutputStream >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxFilterOutputStream* ptr= dynamic_cast< wxFilterOutputStream* >(Luna< wxObject >::check(L,1));
		wxFilterOutputStream* ptr= luna_caster< wxObject, wxFilterOutputStream >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFilterOutputStream >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxOutputStream >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxOutputStream >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxOutputStream >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxOutputStream >(L,2)) ) ) return false;
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
	// wxFilterOutputStream::wxFilterOutputStream(wxOutputStream & stream)
	static wxFilterOutputStream* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFilterOutputStream::wxFilterOutputStream(wxOutputStream & stream) function, expected prototype:\nwxFilterOutputStream::wxFilterOutputStream(wxOutputStream & stream)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxOutputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxOutputStream >(L,1));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxFilterOutputStream::wxFilterOutputStream function");
		}
		wxOutputStream & stream=*stream_ptr;

		return new wxFilterOutputStream(stream);
	}

	// wxFilterOutputStream::wxFilterOutputStream(wxOutputStream * stream)
	static wxFilterOutputStream* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFilterOutputStream::wxFilterOutputStream(wxOutputStream * stream) function, expected prototype:\nwxFilterOutputStream::wxFilterOutputStream(wxOutputStream * stream)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxOutputStream* stream=(Luna< wxObject >::checkSubType< wxOutputStream >(L,1));

		return new wxFilterOutputStream(stream);
	}

	// wxFilterOutputStream::wxFilterOutputStream(lua_Table * data, wxOutputStream & stream)
	static wxFilterOutputStream* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFilterOutputStream::wxFilterOutputStream(lua_Table * data, wxOutputStream & stream) function, expected prototype:\nwxFilterOutputStream::wxFilterOutputStream(lua_Table * data, wxOutputStream & stream)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		wxOutputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxOutputStream >(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxFilterOutputStream::wxFilterOutputStream function");
		}
		wxOutputStream & stream=*stream_ptr;

		return new wrapper_wxFilterOutputStream(L,NULL, stream);
	}

	// wxFilterOutputStream::wxFilterOutputStream(lua_Table * data, wxOutputStream * stream)
	static wxFilterOutputStream* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFilterOutputStream::wxFilterOutputStream(lua_Table * data, wxOutputStream * stream) function, expected prototype:\nwxFilterOutputStream::wxFilterOutputStream(lua_Table * data, wxOutputStream * stream)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		wxOutputStream* stream=(Luna< wxObject >::checkSubType< wxOutputStream >(L,2));

		return new wrapper_wxFilterOutputStream(L,NULL, stream);
	}

	// Overload binder for wxFilterOutputStream::wxFilterOutputStream
	static wxFilterOutputStream* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxFilterOutputStream, cannot match any of the overloads for function wxFilterOutputStream:\n  wxFilterOutputStream(wxOutputStream &)\n  wxFilterOutputStream(wxOutputStream *)\n  wxFilterOutputStream(lua_Table *, wxOutputStream &)\n  wxFilterOutputStream(lua_Table *, wxOutputStream *)\n");
		return NULL;
	}


	// Function binds:
	// wxClassInfo * wxFilterOutputStream::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxFilterOutputStream::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxFilterOutputStream::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxFilterOutputStream* self=Luna< wxObject >::checkSubType< wxFilterOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxFilterOutputStream::base_GetClassInfo() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxClassInfo * lret = self->wxFilterOutputStream::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// long long wxFilterOutputStream::base_GetLength() const
	static int _bind_base_GetLength(lua_State *L) {
		if (!_lg_typecheck_base_GetLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long long wxFilterOutputStream::base_GetLength() const function, expected prototype:\nlong long wxFilterOutputStream::base_GetLength() const\nClass arguments details:\n");
		}


		wxFilterOutputStream* self=Luna< wxObject >::checkSubType< wxFilterOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long long wxFilterOutputStream::base_GetLength() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		long long lret = self->wxFilterOutputStream::GetLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxFilterOutputStream::base_GetSize() const
	static int _bind_base_GetSize(lua_State *L) {
		if (!_lg_typecheck_base_GetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxFilterOutputStream::base_GetSize() const function, expected prototype:\nsize_t wxFilterOutputStream::base_GetSize() const\nClass arguments details:\n");
		}


		wxFilterOutputStream* self=Luna< wxObject >::checkSubType< wxFilterOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxFilterOutputStream::base_GetSize() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		size_t lret = self->wxFilterOutputStream::GetSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxFilterOutputStream::base_IsOk() const
	static int _bind_base_IsOk(lua_State *L) {
		if (!_lg_typecheck_base_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFilterOutputStream::base_IsOk() const function, expected prototype:\nbool wxFilterOutputStream::base_IsOk() const\nClass arguments details:\n");
		}


		wxFilterOutputStream* self=Luna< wxObject >::checkSubType< wxFilterOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFilterOutputStream::base_IsOk() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxFilterOutputStream::IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFilterOutputStream::base_IsSeekable() const
	static int _bind_base_IsSeekable(lua_State *L) {
		if (!_lg_typecheck_base_IsSeekable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFilterOutputStream::base_IsSeekable() const function, expected prototype:\nbool wxFilterOutputStream::base_IsSeekable() const\nClass arguments details:\n");
		}


		wxFilterOutputStream* self=Luna< wxObject >::checkSubType< wxFilterOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFilterOutputStream::base_IsSeekable() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxFilterOutputStream::IsSeekable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFilterOutputStream::base_Close()
	static int _bind_base_Close(lua_State *L) {
		if (!_lg_typecheck_base_Close(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFilterOutputStream::base_Close() function, expected prototype:\nbool wxFilterOutputStream::base_Close()\nClass arguments details:\n");
		}


		wxFilterOutputStream* self=Luna< wxObject >::checkSubType< wxFilterOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFilterOutputStream::base_Close(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxFilterOutputStream::Close();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxFilterOutputStream::base_LastWrite() const
	static int _bind_base_LastWrite(lua_State *L) {
		if (!_lg_typecheck_base_LastWrite(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxFilterOutputStream::base_LastWrite() const function, expected prototype:\nsize_t wxFilterOutputStream::base_LastWrite() const\nClass arguments details:\n");
		}


		wxFilterOutputStream* self=Luna< wxObject >::checkSubType< wxFilterOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxFilterOutputStream::base_LastWrite() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		size_t lret = self->wxFilterOutputStream::LastWrite();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long long wxFilterOutputStream::base_SeekO(long long pos, wxSeekMode mode = ::wxFromStart)
	static int _bind_base_SeekO(lua_State *L) {
		if (!_lg_typecheck_base_SeekO(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long long wxFilterOutputStream::base_SeekO(long long pos, wxSeekMode mode = ::wxFromStart) function, expected prototype:\nlong long wxFilterOutputStream::base_SeekO(long long pos, wxSeekMode mode = ::wxFromStart)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long long pos=(long long)lua_tointeger(L,2);
		wxSeekMode mode=luatop>2 ? (wxSeekMode)lua_tointeger(L,3) : (wxSeekMode)::wxFromStart;

		wxFilterOutputStream* self=Luna< wxObject >::checkSubType< wxFilterOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long long wxFilterOutputStream::base_SeekO(long long, wxSeekMode). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		long long lret = self->wxFilterOutputStream::SeekO(pos, mode);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long long wxFilterOutputStream::base_TellO() const
	static int _bind_base_TellO(lua_State *L) {
		if (!_lg_typecheck_base_TellO(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long long wxFilterOutputStream::base_TellO() const function, expected prototype:\nlong long wxFilterOutputStream::base_TellO() const\nClass arguments details:\n");
		}


		wxFilterOutputStream* self=Luna< wxObject >::checkSubType< wxFilterOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long long wxFilterOutputStream::base_TellO() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		long long lret = self->wxFilterOutputStream::TellO();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxOutputStream & wxFilterOutputStream::base_Write(const void * buffer, size_t size)
	static int _bind_base_Write(lua_State *L) {
		if (!_lg_typecheck_base_Write(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxOutputStream & wxFilterOutputStream::base_Write(const void * buffer, size_t size) function, expected prototype:\nwxOutputStream & wxFilterOutputStream::base_Write(const void * buffer, size_t size)\nClass arguments details:\n");
		}

		void* buffer=(Luna< void >::check(L,2));
		size_t size=(size_t)lua_tointeger(L,3);

		wxFilterOutputStream* self=Luna< wxObject >::checkSubType< wxFilterOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxOutputStream & wxFilterOutputStream::base_Write(const void *, size_t). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		const wxOutputStream* lret = &self->wxFilterOutputStream::Write(buffer, size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxOutputStream >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxFilterOutputStream* LunaTraits< wxFilterOutputStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFilterOutputStream::_bind_ctor(L);
}

void LunaTraits< wxFilterOutputStream >::_bind_dtor(wxFilterOutputStream* obj) {
	delete obj;
}

const char LunaTraits< wxFilterOutputStream >::className[] = "wxFilterOutputStream";
const char LunaTraits< wxFilterOutputStream >::fullName[] = "wxFilterOutputStream";
const char LunaTraits< wxFilterOutputStream >::moduleName[] = "wx";
const char* LunaTraits< wxFilterOutputStream >::parents[] = {"wx.wxOutputStream", 0};
const int LunaTraits< wxFilterOutputStream >::hash = 52546027;
const int LunaTraits< wxFilterOutputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFilterOutputStream >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxFilterOutputStream::_bind_base_GetClassInfo},
	{"base_GetLength", &luna_wrapper_wxFilterOutputStream::_bind_base_GetLength},
	{"base_GetSize", &luna_wrapper_wxFilterOutputStream::_bind_base_GetSize},
	{"base_IsOk", &luna_wrapper_wxFilterOutputStream::_bind_base_IsOk},
	{"base_IsSeekable", &luna_wrapper_wxFilterOutputStream::_bind_base_IsSeekable},
	{"base_Close", &luna_wrapper_wxFilterOutputStream::_bind_base_Close},
	{"base_LastWrite", &luna_wrapper_wxFilterOutputStream::_bind_base_LastWrite},
	{"base_SeekO", &luna_wrapper_wxFilterOutputStream::_bind_base_SeekO},
	{"base_TellO", &luna_wrapper_wxFilterOutputStream::_bind_base_TellO},
	{"base_Write", &luna_wrapper_wxFilterOutputStream::_bind_base_Write},
	{"__eq", &luna_wrapper_wxFilterOutputStream::_bind___eq},
	{"fromVoid", &luna_wrapper_wxFilterOutputStream::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxFilterOutputStream::_bind_asVoid},
	{"getTable", &luna_wrapper_wxFilterOutputStream::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxFilterOutputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxFilterOutputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFilterOutputStream >::enumValues[] = {
	{0,0}
};


