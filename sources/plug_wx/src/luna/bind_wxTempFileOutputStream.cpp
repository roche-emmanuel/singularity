#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTempFileOutputStream.h>

class luna_wrapper_wxTempFileOutputStream {
public:
	typedef Luna< wxTempFileOutputStream > luna_t;

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
		
		return self==rhs;
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

		wxTempFileOutputStream* self= (wxTempFileOutputStream*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTempFileOutputStream >::push(L,self,false);
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
		//wxTempFileOutputStream* ptr= dynamic_cast< wxTempFileOutputStream* >(Luna< wxObject >::check(L,1));
		wxTempFileOutputStream* ptr= luna_caster< wxObject, wxTempFileOutputStream >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTempFileOutputStream >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Commit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Discard(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_Commit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Discard(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTempFileOutputStream::wxTempFileOutputStream(const wxString & fileName)
	static wxTempFileOutputStream* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTempFileOutputStream::wxTempFileOutputStream(const wxString & fileName) function, expected prototype:\nwxTempFileOutputStream::wxTempFileOutputStream(const wxString & fileName)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString fileName(lua_tostring(L,1),lua_objlen(L,1));

		return new wxTempFileOutputStream(fileName);
	}

	// wxTempFileOutputStream::wxTempFileOutputStream(lua_Table * data, const wxString & fileName)
	static wxTempFileOutputStream* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTempFileOutputStream::wxTempFileOutputStream(lua_Table * data, const wxString & fileName) function, expected prototype:\nwxTempFileOutputStream::wxTempFileOutputStream(lua_Table * data, const wxString & fileName)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		wxString fileName(lua_tostring(L,2),lua_objlen(L,2));

		return new wrapper_wxTempFileOutputStream(L,NULL, fileName);
	}

	// Overload binder for wxTempFileOutputStream::wxTempFileOutputStream
	static wxTempFileOutputStream* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxTempFileOutputStream, cannot match any of the overloads for function wxTempFileOutputStream:\n  wxTempFileOutputStream(const wxString &)\n  wxTempFileOutputStream(lua_Table *, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxTempFileOutputStream::Commit()
	static int _bind_Commit(lua_State *L) {
		if (!_lg_typecheck_Commit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTempFileOutputStream::Commit() function, expected prototype:\nbool wxTempFileOutputStream::Commit()\nClass arguments details:\n");
		}


		wxTempFileOutputStream* self=Luna< wxObject >::checkSubType< wxTempFileOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTempFileOutputStream::Commit(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->Commit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTempFileOutputStream::Discard()
	static int _bind_Discard(lua_State *L) {
		if (!_lg_typecheck_Discard(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTempFileOutputStream::Discard() function, expected prototype:\nvoid wxTempFileOutputStream::Discard()\nClass arguments details:\n");
		}


		wxTempFileOutputStream* self=Luna< wxObject >::checkSubType< wxTempFileOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTempFileOutputStream::Discard(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->Discard();

		return 0;
	}

	// wxClassInfo * wxTempFileOutputStream::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxTempFileOutputStream::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxTempFileOutputStream::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxTempFileOutputStream* self=Luna< wxObject >::checkSubType< wxTempFileOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxTempFileOutputStream::base_GetClassInfo() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxClassInfo * lret = self->wxTempFileOutputStream::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// long long wxTempFileOutputStream::base_GetLength() const
	static int _bind_base_GetLength(lua_State *L) {
		if (!_lg_typecheck_base_GetLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long long wxTempFileOutputStream::base_GetLength() const function, expected prototype:\nlong long wxTempFileOutputStream::base_GetLength() const\nClass arguments details:\n");
		}


		wxTempFileOutputStream* self=Luna< wxObject >::checkSubType< wxTempFileOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long long wxTempFileOutputStream::base_GetLength() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		long long lret = self->wxTempFileOutputStream::GetLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxTempFileOutputStream::base_GetSize() const
	static int _bind_base_GetSize(lua_State *L) {
		if (!_lg_typecheck_base_GetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxTempFileOutputStream::base_GetSize() const function, expected prototype:\nsize_t wxTempFileOutputStream::base_GetSize() const\nClass arguments details:\n");
		}


		wxTempFileOutputStream* self=Luna< wxObject >::checkSubType< wxTempFileOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxTempFileOutputStream::base_GetSize() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		size_t lret = self->wxTempFileOutputStream::GetSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxTempFileOutputStream::base_IsOk() const
	static int _bind_base_IsOk(lua_State *L) {
		if (!_lg_typecheck_base_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTempFileOutputStream::base_IsOk() const function, expected prototype:\nbool wxTempFileOutputStream::base_IsOk() const\nClass arguments details:\n");
		}


		wxTempFileOutputStream* self=Luna< wxObject >::checkSubType< wxTempFileOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTempFileOutputStream::base_IsOk() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxTempFileOutputStream::IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTempFileOutputStream::base_IsSeekable() const
	static int _bind_base_IsSeekable(lua_State *L) {
		if (!_lg_typecheck_base_IsSeekable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTempFileOutputStream::base_IsSeekable() const function, expected prototype:\nbool wxTempFileOutputStream::base_IsSeekable() const\nClass arguments details:\n");
		}


		wxTempFileOutputStream* self=Luna< wxObject >::checkSubType< wxTempFileOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTempFileOutputStream::base_IsSeekable() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxTempFileOutputStream::IsSeekable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTempFileOutputStream::base_Close()
	static int _bind_base_Close(lua_State *L) {
		if (!_lg_typecheck_base_Close(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTempFileOutputStream::base_Close() function, expected prototype:\nbool wxTempFileOutputStream::base_Close()\nClass arguments details:\n");
		}


		wxTempFileOutputStream* self=Luna< wxObject >::checkSubType< wxTempFileOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTempFileOutputStream::base_Close(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxTempFileOutputStream::Close();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxTempFileOutputStream::base_LastWrite() const
	static int _bind_base_LastWrite(lua_State *L) {
		if (!_lg_typecheck_base_LastWrite(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxTempFileOutputStream::base_LastWrite() const function, expected prototype:\nsize_t wxTempFileOutputStream::base_LastWrite() const\nClass arguments details:\n");
		}


		wxTempFileOutputStream* self=Luna< wxObject >::checkSubType< wxTempFileOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxTempFileOutputStream::base_LastWrite() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		size_t lret = self->wxTempFileOutputStream::LastWrite();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long long wxTempFileOutputStream::base_SeekO(long long pos, wxSeekMode mode = ::wxFromStart)
	static int _bind_base_SeekO(lua_State *L) {
		if (!_lg_typecheck_base_SeekO(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long long wxTempFileOutputStream::base_SeekO(long long pos, wxSeekMode mode = ::wxFromStart) function, expected prototype:\nlong long wxTempFileOutputStream::base_SeekO(long long pos, wxSeekMode mode = ::wxFromStart)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long long pos=(long long)lua_tointeger(L,2);
		wxSeekMode mode=luatop>2 ? (wxSeekMode)lua_tointeger(L,3) : (wxSeekMode)::wxFromStart;

		wxTempFileOutputStream* self=Luna< wxObject >::checkSubType< wxTempFileOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long long wxTempFileOutputStream::base_SeekO(long long, wxSeekMode). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		long long lret = self->wxTempFileOutputStream::SeekO(pos, mode);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long long wxTempFileOutputStream::base_TellO() const
	static int _bind_base_TellO(lua_State *L) {
		if (!_lg_typecheck_base_TellO(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long long wxTempFileOutputStream::base_TellO() const function, expected prototype:\nlong long wxTempFileOutputStream::base_TellO() const\nClass arguments details:\n");
		}


		wxTempFileOutputStream* self=Luna< wxObject >::checkSubType< wxTempFileOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long long wxTempFileOutputStream::base_TellO() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		long long lret = self->wxTempFileOutputStream::TellO();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxOutputStream & wxTempFileOutputStream::base_Write(const void * buffer, size_t size)
	static int _bind_base_Write(lua_State *L) {
		if (!_lg_typecheck_base_Write(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxOutputStream & wxTempFileOutputStream::base_Write(const void * buffer, size_t size) function, expected prototype:\nwxOutputStream & wxTempFileOutputStream::base_Write(const void * buffer, size_t size)\nClass arguments details:\n");
		}

		void* buffer=(Luna< void >::check(L,2));
		size_t size=(size_t)lua_tointeger(L,3);

		wxTempFileOutputStream* self=Luna< wxObject >::checkSubType< wxTempFileOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxOutputStream & wxTempFileOutputStream::base_Write(const void *, size_t). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		const wxOutputStream* lret = &self->wxTempFileOutputStream::Write(buffer, size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxOutputStream >::push(L,lret,false);

		return 1;
	}

	// bool wxTempFileOutputStream::base_Commit()
	static int _bind_base_Commit(lua_State *L) {
		if (!_lg_typecheck_base_Commit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTempFileOutputStream::base_Commit() function, expected prototype:\nbool wxTempFileOutputStream::base_Commit()\nClass arguments details:\n");
		}


		wxTempFileOutputStream* self=Luna< wxObject >::checkSubType< wxTempFileOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTempFileOutputStream::base_Commit(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxTempFileOutputStream::Commit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTempFileOutputStream::base_Discard()
	static int _bind_base_Discard(lua_State *L) {
		if (!_lg_typecheck_base_Discard(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTempFileOutputStream::base_Discard() function, expected prototype:\nvoid wxTempFileOutputStream::base_Discard()\nClass arguments details:\n");
		}


		wxTempFileOutputStream* self=Luna< wxObject >::checkSubType< wxTempFileOutputStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTempFileOutputStream::base_Discard(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->wxTempFileOutputStream::Discard();

		return 0;
	}


	// Operator binds:

};

wxTempFileOutputStream* LunaTraits< wxTempFileOutputStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTempFileOutputStream::_bind_ctor(L);
}

void LunaTraits< wxTempFileOutputStream >::_bind_dtor(wxTempFileOutputStream* obj) {
	delete obj;
}

const char LunaTraits< wxTempFileOutputStream >::className[] = "wxTempFileOutputStream";
const char LunaTraits< wxTempFileOutputStream >::fullName[] = "wxTempFileOutputStream";
const char LunaTraits< wxTempFileOutputStream >::moduleName[] = "wx";
const char* LunaTraits< wxTempFileOutputStream >::parents[] = {"wx.wxOutputStream", 0};
const int LunaTraits< wxTempFileOutputStream >::hash = 17562350;
const int LunaTraits< wxTempFileOutputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxTempFileOutputStream >::methods[] = {
	{"Commit", &luna_wrapper_wxTempFileOutputStream::_bind_Commit},
	{"Discard", &luna_wrapper_wxTempFileOutputStream::_bind_Discard},
	{"base_GetClassInfo", &luna_wrapper_wxTempFileOutputStream::_bind_base_GetClassInfo},
	{"base_GetLength", &luna_wrapper_wxTempFileOutputStream::_bind_base_GetLength},
	{"base_GetSize", &luna_wrapper_wxTempFileOutputStream::_bind_base_GetSize},
	{"base_IsOk", &luna_wrapper_wxTempFileOutputStream::_bind_base_IsOk},
	{"base_IsSeekable", &luna_wrapper_wxTempFileOutputStream::_bind_base_IsSeekable},
	{"base_Close", &luna_wrapper_wxTempFileOutputStream::_bind_base_Close},
	{"base_LastWrite", &luna_wrapper_wxTempFileOutputStream::_bind_base_LastWrite},
	{"base_SeekO", &luna_wrapper_wxTempFileOutputStream::_bind_base_SeekO},
	{"base_TellO", &luna_wrapper_wxTempFileOutputStream::_bind_base_TellO},
	{"base_Write", &luna_wrapper_wxTempFileOutputStream::_bind_base_Write},
	{"base_Commit", &luna_wrapper_wxTempFileOutputStream::_bind_base_Commit},
	{"base_Discard", &luna_wrapper_wxTempFileOutputStream::_bind_base_Discard},
	{"__eq", &luna_wrapper_wxTempFileOutputStream::_bind___eq},
	{"fromVoid", &luna_wrapper_wxTempFileOutputStream::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTempFileOutputStream::_bind_asVoid},
	{"getTable", &luna_wrapper_wxTempFileOutputStream::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxTempFileOutputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxTempFileOutputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTempFileOutputStream >::enumValues[] = {
	{0,0}
};


