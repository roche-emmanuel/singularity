#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFilterClassFactory.h>

class luna_wrapper_wxFilterClassFactory {
public:
	typedef Luna< wxFilterClassFactory > luna_t;

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
		wxFilterClassFactory* ptr= dynamic_cast< wxFilterClassFactory* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFilterClassFactory >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_CanHandle(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetProtocol(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_NewStream_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!dynamic_cast< wxInputStream* >(Luna< wxObject >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_NewStream_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!dynamic_cast< wxOutputStream* >(Luna< wxObject >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_NewStream_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxInputStream* >(Luna< wxObject >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_NewStream_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxOutputStream* >(Luna< wxObject >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PopExtension(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PushFront(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Remove(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Find(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFirst(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxFilterClassFactory::CanHandle(const wxString & protocol, wxStreamProtocolType type = ::wxSTREAM_PROTOCOL) const
	static int _bind_CanHandle(lua_State *L) {
		if (!_lg_typecheck_CanHandle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFilterClassFactory::CanHandle(const wxString & protocol, wxStreamProtocolType type = ::wxSTREAM_PROTOCOL) const function, expected prototype:\nbool wxFilterClassFactory::CanHandle(const wxString & protocol, wxStreamProtocolType type = ::wxSTREAM_PROTOCOL) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString protocol(lua_tostring(L,2),lua_objlen(L,2));
		wxStreamProtocolType type=luatop>2 ? (wxStreamProtocolType)lua_tointeger(L,3) : ::wxSTREAM_PROTOCOL;

		wxFilterClassFactory* self=dynamic_cast< wxFilterClassFactory* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFilterClassFactory::CanHandle(const wxString &, wxStreamProtocolType) const");
		}
		bool lret = self->CanHandle(protocol, type);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const wxFilterClassFactory * wxFilterClassFactory::GetNext() const
	static int _bind_GetNext(lua_State *L) {
		if (!_lg_typecheck_GetNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxFilterClassFactory * wxFilterClassFactory::GetNext() const function, expected prototype:\nconst wxFilterClassFactory * wxFilterClassFactory::GetNext() const\nClass arguments details:\n");
		}


		wxFilterClassFactory* self=dynamic_cast< wxFilterClassFactory* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxFilterClassFactory * wxFilterClassFactory::GetNext() const");
		}
		const wxFilterClassFactory * lret = self->GetNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFilterClassFactory >::push(L,lret,false);

		return 1;
	}

	// wxString wxFilterClassFactory::GetProtocol() const
	static int _bind_GetProtocol(lua_State *L) {
		if (!_lg_typecheck_GetProtocol(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxFilterClassFactory::GetProtocol() const function, expected prototype:\nwxString wxFilterClassFactory::GetProtocol() const\nClass arguments details:\n");
		}


		wxFilterClassFactory* self=dynamic_cast< wxFilterClassFactory* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxFilterClassFactory::GetProtocol() const");
		}
		wxString lret = self->GetProtocol();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxFilterInputStream * wxFilterClassFactory::NewStream(wxInputStream & stream) const
	static int _bind_NewStream_overload_1(lua_State *L) {
		if (!_lg_typecheck_NewStream_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFilterInputStream * wxFilterClassFactory::NewStream(wxInputStream & stream) const function, expected prototype:\nwxFilterInputStream * wxFilterClassFactory::NewStream(wxInputStream & stream) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxInputStream* stream_ptr=dynamic_cast< wxInputStream* >(Luna< wxObject >::check(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxFilterClassFactory::NewStream function");
		}
		wxInputStream & stream=*stream_ptr;

		wxFilterClassFactory* self=dynamic_cast< wxFilterClassFactory* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFilterInputStream * wxFilterClassFactory::NewStream(wxInputStream &) const");
		}
		wxFilterInputStream * lret = self->NewStream(stream);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFilterInputStream >::push(L,lret,false);

		return 1;
	}

	// wxFilterOutputStream * wxFilterClassFactory::NewStream(wxOutputStream & stream) const
	static int _bind_NewStream_overload_2(lua_State *L) {
		if (!_lg_typecheck_NewStream_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFilterOutputStream * wxFilterClassFactory::NewStream(wxOutputStream & stream) const function, expected prototype:\nwxFilterOutputStream * wxFilterClassFactory::NewStream(wxOutputStream & stream) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxOutputStream* stream_ptr=dynamic_cast< wxOutputStream* >(Luna< wxObject >::check(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxFilterClassFactory::NewStream function");
		}
		wxOutputStream & stream=*stream_ptr;

		wxFilterClassFactory* self=dynamic_cast< wxFilterClassFactory* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFilterOutputStream * wxFilterClassFactory::NewStream(wxOutputStream &) const");
		}
		wxFilterOutputStream * lret = self->NewStream(stream);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFilterOutputStream >::push(L,lret,false);

		return 1;
	}

	// wxFilterInputStream * wxFilterClassFactory::NewStream(wxInputStream * stream) const
	static int _bind_NewStream_overload_3(lua_State *L) {
		if (!_lg_typecheck_NewStream_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFilterInputStream * wxFilterClassFactory::NewStream(wxInputStream * stream) const function, expected prototype:\nwxFilterInputStream * wxFilterClassFactory::NewStream(wxInputStream * stream) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxInputStream* stream=dynamic_cast< wxInputStream* >(Luna< wxObject >::check(L,2));

		wxFilterClassFactory* self=dynamic_cast< wxFilterClassFactory* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFilterInputStream * wxFilterClassFactory::NewStream(wxInputStream *) const");
		}
		wxFilterInputStream * lret = self->NewStream(stream);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFilterInputStream >::push(L,lret,false);

		return 1;
	}

	// wxFilterOutputStream * wxFilterClassFactory::NewStream(wxOutputStream * stream) const
	static int _bind_NewStream_overload_4(lua_State *L) {
		if (!_lg_typecheck_NewStream_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFilterOutputStream * wxFilterClassFactory::NewStream(wxOutputStream * stream) const function, expected prototype:\nwxFilterOutputStream * wxFilterClassFactory::NewStream(wxOutputStream * stream) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxOutputStream* stream=dynamic_cast< wxOutputStream* >(Luna< wxObject >::check(L,2));

		wxFilterClassFactory* self=dynamic_cast< wxFilterClassFactory* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFilterOutputStream * wxFilterClassFactory::NewStream(wxOutputStream *) const");
		}
		wxFilterOutputStream * lret = self->NewStream(stream);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFilterOutputStream >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxFilterClassFactory::NewStream
	static int _bind_NewStream(lua_State *L) {
		if (_lg_typecheck_NewStream_overload_1(L)) return _bind_NewStream_overload_1(L);
		if (_lg_typecheck_NewStream_overload_2(L)) return _bind_NewStream_overload_2(L);
		if (_lg_typecheck_NewStream_overload_3(L)) return _bind_NewStream_overload_3(L);
		if (_lg_typecheck_NewStream_overload_4(L)) return _bind_NewStream_overload_4(L);

		luaL_error(L, "error in function NewStream, cannot match any of the overloads for function NewStream:\n  NewStream(wxInputStream &)\n  NewStream(wxOutputStream &)\n  NewStream(wxInputStream *)\n  NewStream(wxOutputStream *)\n");
		return 0;
	}

	// wxString wxFilterClassFactory::PopExtension(const wxString & location) const
	static int _bind_PopExtension(lua_State *L) {
		if (!_lg_typecheck_PopExtension(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxFilterClassFactory::PopExtension(const wxString & location) const function, expected prototype:\nwxString wxFilterClassFactory::PopExtension(const wxString & location) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString location(lua_tostring(L,2),lua_objlen(L,2));

		wxFilterClassFactory* self=dynamic_cast< wxFilterClassFactory* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxFilterClassFactory::PopExtension(const wxString &) const");
		}
		wxString lret = self->PopExtension(location);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxFilterClassFactory::PushFront()
	static int _bind_PushFront(lua_State *L) {
		if (!_lg_typecheck_PushFront(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFilterClassFactory::PushFront() function, expected prototype:\nvoid wxFilterClassFactory::PushFront()\nClass arguments details:\n");
		}


		wxFilterClassFactory* self=dynamic_cast< wxFilterClassFactory* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFilterClassFactory::PushFront()");
		}
		self->PushFront();

		return 0;
	}

	// void wxFilterClassFactory::Remove()
	static int _bind_Remove(lua_State *L) {
		if (!_lg_typecheck_Remove(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFilterClassFactory::Remove() function, expected prototype:\nvoid wxFilterClassFactory::Remove()\nClass arguments details:\n");
		}


		wxFilterClassFactory* self=dynamic_cast< wxFilterClassFactory* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFilterClassFactory::Remove()");
		}
		self->Remove();

		return 0;
	}

	// static const wxFilterClassFactory * wxFilterClassFactory::Find(const wxString & protocol, wxStreamProtocolType type = ::wxSTREAM_PROTOCOL)
	static int _bind_Find(lua_State *L) {
		if (!_lg_typecheck_Find(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static const wxFilterClassFactory * wxFilterClassFactory::Find(const wxString & protocol, wxStreamProtocolType type = ::wxSTREAM_PROTOCOL) function, expected prototype:\nstatic const wxFilterClassFactory * wxFilterClassFactory::Find(const wxString & protocol, wxStreamProtocolType type = ::wxSTREAM_PROTOCOL)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString protocol(lua_tostring(L,1),lua_objlen(L,1));
		wxStreamProtocolType type=luatop>1 ? (wxStreamProtocolType)lua_tointeger(L,2) : ::wxSTREAM_PROTOCOL;

		const wxFilterClassFactory * lret = wxFilterClassFactory::Find(protocol, type);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFilterClassFactory >::push(L,lret,false);

		return 1;
	}

	// static const wxFilterClassFactory * wxFilterClassFactory::GetFirst()
	static int _bind_GetFirst(lua_State *L) {
		if (!_lg_typecheck_GetFirst(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static const wxFilterClassFactory * wxFilterClassFactory::GetFirst() function, expected prototype:\nstatic const wxFilterClassFactory * wxFilterClassFactory::GetFirst()\nClass arguments details:\n");
		}


		const wxFilterClassFactory * lret = wxFilterClassFactory::GetFirst();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFilterClassFactory >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxFilterClassFactory* LunaTraits< wxFilterClassFactory >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// const wxChar *const * wxFilterClassFactory::GetProtocols(wxStreamProtocolType type = ::wxSTREAM_PROTOCOL) const
	// wxFilterInputStream * wxFilterClassFactory::NewStream(wxInputStream & stream) const
	// wxFilterOutputStream * wxFilterClassFactory::NewStream(wxOutputStream & stream) const
	// wxFilterInputStream * wxFilterClassFactory::NewStream(wxInputStream * stream) const
	// wxFilterOutputStream * wxFilterClassFactory::NewStream(wxOutputStream * stream) const
}

void LunaTraits< wxFilterClassFactory >::_bind_dtor(wxFilterClassFactory* obj) {
	delete obj;
}

const char LunaTraits< wxFilterClassFactory >::className[] = "wxFilterClassFactory";
const char LunaTraits< wxFilterClassFactory >::fullName[] = "wxFilterClassFactory";
const char LunaTraits< wxFilterClassFactory >::moduleName[] = "wx";
const char* LunaTraits< wxFilterClassFactory >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxFilterClassFactory >::hash = 61750252;
const int LunaTraits< wxFilterClassFactory >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFilterClassFactory >::methods[] = {
	{"CanHandle", &luna_wrapper_wxFilterClassFactory::_bind_CanHandle},
	{"GetNext", &luna_wrapper_wxFilterClassFactory::_bind_GetNext},
	{"GetProtocol", &luna_wrapper_wxFilterClassFactory::_bind_GetProtocol},
	{"NewStream", &luna_wrapper_wxFilterClassFactory::_bind_NewStream},
	{"PopExtension", &luna_wrapper_wxFilterClassFactory::_bind_PopExtension},
	{"PushFront", &luna_wrapper_wxFilterClassFactory::_bind_PushFront},
	{"Remove", &luna_wrapper_wxFilterClassFactory::_bind_Remove},
	{"Find", &luna_wrapper_wxFilterClassFactory::_bind_Find},
	{"GetFirst", &luna_wrapper_wxFilterClassFactory::_bind_GetFirst},
	{"__eq", &luna_wrapper_wxFilterClassFactory::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxFilterClassFactory >::converters[] = {
	{"wxObject", &luna_wrapper_wxFilterClassFactory::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFilterClassFactory >::enumValues[] = {
	{0,0}
};


