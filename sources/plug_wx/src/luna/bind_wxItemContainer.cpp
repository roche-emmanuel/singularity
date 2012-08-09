#include <plug_common.h>

class luna_wrapper_wxItemContainer {
public:
	typedef Luna< wxItemContainer > luna_t;

	// Derived class converters:
	static int _cast_from_wxItemContainerImmutable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxItemContainer* ptr= dynamic_cast< wxItemContainer* >(Luna< wxItemContainerImmutable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxItemContainer >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_Append_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Append_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Append_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Append_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Append_overload_5(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Delete(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DetachClientObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasClientData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasClientObjectData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasClientUntypedData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetClientData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetClientObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Insert_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Insert_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Insert_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Insert_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Insert_overload_5(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// int wxItemContainer::Append(const wxString & item)
	static int _bind_Append_overload_1(lua_State *L) {
		if (!_lg_typecheck_Append_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxItemContainer::Append(const wxString & item) function, expected prototype:\nint wxItemContainer::Append(const wxString & item)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString item(lua_tostring(L,2),lua_objlen(L,2));

		wxItemContainer* self=dynamic_cast< wxItemContainer* >(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxItemContainer::Append(const wxString &)");
		}
		int lret = self->Append(item);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxItemContainer::Append(const wxString & item, void * clientData)
	static int _bind_Append_overload_2(lua_State *L) {
		if (!_lg_typecheck_Append_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxItemContainer::Append(const wxString & item, void * clientData) function, expected prototype:\nint wxItemContainer::Append(const wxString & item, void * clientData)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString item(lua_tostring(L,2),lua_objlen(L,2));
		void* clientData=(Luna< void >::check(L,3));

		wxItemContainer* self=dynamic_cast< wxItemContainer* >(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxItemContainer::Append(const wxString &, void *)");
		}
		int lret = self->Append(item, clientData);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxItemContainer::Append(const wxString & item, wxClientData * clientData)
	static int _bind_Append_overload_3(lua_State *L) {
		if (!_lg_typecheck_Append_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxItemContainer::Append(const wxString & item, wxClientData * clientData) function, expected prototype:\nint wxItemContainer::Append(const wxString & item, wxClientData * clientData)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 50457573\n");
		}

		wxString item(lua_tostring(L,2),lua_objlen(L,2));
		wxClientData* clientData=(Luna< wxClientData >::check(L,3));

		wxItemContainer* self=dynamic_cast< wxItemContainer* >(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxItemContainer::Append(const wxString &, wxClientData *)");
		}
		int lret = self->Append(item, clientData);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxItemContainer::Append(const wxArrayString & items)
	static int _bind_Append_overload_4(lua_State *L) {
		if (!_lg_typecheck_Append_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxItemContainer::Append(const wxArrayString & items) function, expected prototype:\nint wxItemContainer::Append(const wxArrayString & items)\nClass arguments details:\narg 1 ID = 59507769\n");
		}

		const wxArrayString* items_ptr=(Luna< wxArrayString >::check(L,2));
		if( !items_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg items in wxItemContainer::Append function");
		}
		const wxArrayString & items=*items_ptr;

		wxItemContainer* self=dynamic_cast< wxItemContainer* >(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxItemContainer::Append(const wxArrayString &)");
		}
		int lret = self->Append(items);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxItemContainer::Append(unsigned int n, const wxString * items)
	static int _bind_Append_overload_5(lua_State *L) {
		if (!_lg_typecheck_Append_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxItemContainer::Append(unsigned int n, const wxString * items) function, expected prototype:\nint wxItemContainer::Append(unsigned int n, const wxString * items)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);
		wxString items(lua_tostring(L,3),lua_objlen(L,3));

		wxItemContainer* self=dynamic_cast< wxItemContainer* >(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxItemContainer::Append(unsigned int, const wxString *)");
		}
		int lret = self->Append(n, &items);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxItemContainer::Append
	static int _bind_Append(lua_State *L) {
		if (_lg_typecheck_Append_overload_1(L)) return _bind_Append_overload_1(L);
		if (_lg_typecheck_Append_overload_2(L)) return _bind_Append_overload_2(L);
		if (_lg_typecheck_Append_overload_3(L)) return _bind_Append_overload_3(L);
		if (_lg_typecheck_Append_overload_4(L)) return _bind_Append_overload_4(L);
		if (_lg_typecheck_Append_overload_5(L)) return _bind_Append_overload_5(L);

		luaL_error(L, "error in function Append, cannot match any of the overloads for function Append:\n  Append(const wxString &)\n  Append(const wxString &, void *)\n  Append(const wxString &, wxClientData *)\n  Append(const wxArrayString &)\n  Append(unsigned int, const wxString *)\n");
		return 0;
	}

	// void wxItemContainer::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxItemContainer::Clear() function, expected prototype:\nvoid wxItemContainer::Clear()\nClass arguments details:\n");
		}


		wxItemContainer* self=dynamic_cast< wxItemContainer* >(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxItemContainer::Clear()");
		}
		self->Clear();

		return 0;
	}

	// void wxItemContainer::Delete(unsigned int n)
	static int _bind_Delete(lua_State *L) {
		if (!_lg_typecheck_Delete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxItemContainer::Delete(unsigned int n) function, expected prototype:\nvoid wxItemContainer::Delete(unsigned int n)\nClass arguments details:\n");
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);

		wxItemContainer* self=dynamic_cast< wxItemContainer* >(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxItemContainer::Delete(unsigned int)");
		}
		self->Delete(n);

		return 0;
	}

	// wxClientData * wxItemContainer::DetachClientObject(unsigned int n)
	static int _bind_DetachClientObject(lua_State *L) {
		if (!_lg_typecheck_DetachClientObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClientData * wxItemContainer::DetachClientObject(unsigned int n) function, expected prototype:\nwxClientData * wxItemContainer::DetachClientObject(unsigned int n)\nClass arguments details:\n");
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);

		wxItemContainer* self=dynamic_cast< wxItemContainer* >(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClientData * wxItemContainer::DetachClientObject(unsigned int)");
		}
		wxClientData * lret = self->DetachClientObject(n);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClientData >::push(L,lret,false);

		return 1;
	}

	// bool wxItemContainer::HasClientData() const
	static int _bind_HasClientData(lua_State *L) {
		if (!_lg_typecheck_HasClientData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxItemContainer::HasClientData() const function, expected prototype:\nbool wxItemContainer::HasClientData() const\nClass arguments details:\n");
		}


		wxItemContainer* self=dynamic_cast< wxItemContainer* >(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxItemContainer::HasClientData() const");
		}
		bool lret = self->HasClientData();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxItemContainer::HasClientObjectData() const
	static int _bind_HasClientObjectData(lua_State *L) {
		if (!_lg_typecheck_HasClientObjectData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxItemContainer::HasClientObjectData() const function, expected prototype:\nbool wxItemContainer::HasClientObjectData() const\nClass arguments details:\n");
		}


		wxItemContainer* self=dynamic_cast< wxItemContainer* >(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxItemContainer::HasClientObjectData() const");
		}
		bool lret = self->HasClientObjectData();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxItemContainer::HasClientUntypedData() const
	static int _bind_HasClientUntypedData(lua_State *L) {
		if (!_lg_typecheck_HasClientUntypedData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxItemContainer::HasClientUntypedData() const function, expected prototype:\nbool wxItemContainer::HasClientUntypedData() const\nClass arguments details:\n");
		}


		wxItemContainer* self=dynamic_cast< wxItemContainer* >(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxItemContainer::HasClientUntypedData() const");
		}
		bool lret = self->HasClientUntypedData();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void * wxItemContainer::GetClientData(unsigned int n) const
	static int _bind_GetClientData(lua_State *L) {
		if (!_lg_typecheck_GetClientData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * wxItemContainer::GetClientData(unsigned int n) const function, expected prototype:\nvoid * wxItemContainer::GetClientData(unsigned int n) const\nClass arguments details:\n");
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);

		wxItemContainer* self=dynamic_cast< wxItemContainer* >(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * wxItemContainer::GetClientData(unsigned int) const");
		}
		void * lret = self->GetClientData(n);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// wxClientData * wxItemContainer::GetClientObject(unsigned int n) const
	static int _bind_GetClientObject(lua_State *L) {
		if (!_lg_typecheck_GetClientObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClientData * wxItemContainer::GetClientObject(unsigned int n) const function, expected prototype:\nwxClientData * wxItemContainer::GetClientObject(unsigned int n) const\nClass arguments details:\n");
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);

		wxItemContainer* self=dynamic_cast< wxItemContainer* >(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClientData * wxItemContainer::GetClientObject(unsigned int) const");
		}
		wxClientData * lret = self->GetClientObject(n);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClientData >::push(L,lret,false);

		return 1;
	}

	// int wxItemContainer::Insert(const wxString & item, unsigned int pos)
	static int _bind_Insert_overload_1(lua_State *L) {
		if (!_lg_typecheck_Insert_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxItemContainer::Insert(const wxString & item, unsigned int pos) function, expected prototype:\nint wxItemContainer::Insert(const wxString & item, unsigned int pos)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString item(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int pos=(unsigned int)lua_tointeger(L,3);

		wxItemContainer* self=dynamic_cast< wxItemContainer* >(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxItemContainer::Insert(const wxString &, unsigned int)");
		}
		int lret = self->Insert(item, pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxItemContainer::Insert(const wxString & item, unsigned int pos, void * clientData)
	static int _bind_Insert_overload_2(lua_State *L) {
		if (!_lg_typecheck_Insert_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxItemContainer::Insert(const wxString & item, unsigned int pos, void * clientData) function, expected prototype:\nint wxItemContainer::Insert(const wxString & item, unsigned int pos, void * clientData)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString item(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int pos=(unsigned int)lua_tointeger(L,3);
		void* clientData=(Luna< void >::check(L,4));

		wxItemContainer* self=dynamic_cast< wxItemContainer* >(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxItemContainer::Insert(const wxString &, unsigned int, void *)");
		}
		int lret = self->Insert(item, pos, clientData);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxItemContainer::Insert(const wxString & item, unsigned int pos, wxClientData * clientData)
	static int _bind_Insert_overload_3(lua_State *L) {
		if (!_lg_typecheck_Insert_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxItemContainer::Insert(const wxString & item, unsigned int pos, wxClientData * clientData) function, expected prototype:\nint wxItemContainer::Insert(const wxString & item, unsigned int pos, wxClientData * clientData)\nClass arguments details:\narg 1 ID = 88196105\narg 3 ID = 50457573\n");
		}

		wxString item(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int pos=(unsigned int)lua_tointeger(L,3);
		wxClientData* clientData=(Luna< wxClientData >::check(L,4));

		wxItemContainer* self=dynamic_cast< wxItemContainer* >(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxItemContainer::Insert(const wxString &, unsigned int, wxClientData *)");
		}
		int lret = self->Insert(item, pos, clientData);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxItemContainer::Insert(const wxArrayString & items, unsigned int pos)
	static int _bind_Insert_overload_4(lua_State *L) {
		if (!_lg_typecheck_Insert_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxItemContainer::Insert(const wxArrayString & items, unsigned int pos) function, expected prototype:\nint wxItemContainer::Insert(const wxArrayString & items, unsigned int pos)\nClass arguments details:\narg 1 ID = 59507769\n");
		}

		const wxArrayString* items_ptr=(Luna< wxArrayString >::check(L,2));
		if( !items_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg items in wxItemContainer::Insert function");
		}
		const wxArrayString & items=*items_ptr;
		unsigned int pos=(unsigned int)lua_tointeger(L,3);

		wxItemContainer* self=dynamic_cast< wxItemContainer* >(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxItemContainer::Insert(const wxArrayString &, unsigned int)");
		}
		int lret = self->Insert(items, pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxItemContainer::Insert(unsigned int n, const wxString * items, unsigned int pos)
	static int _bind_Insert_overload_5(lua_State *L) {
		if (!_lg_typecheck_Insert_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxItemContainer::Insert(unsigned int n, const wxString * items, unsigned int pos) function, expected prototype:\nint wxItemContainer::Insert(unsigned int n, const wxString * items, unsigned int pos)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);
		wxString items(lua_tostring(L,3),lua_objlen(L,3));
		unsigned int pos=(unsigned int)lua_tointeger(L,4);

		wxItemContainer* self=dynamic_cast< wxItemContainer* >(Luna< wxItemContainerImmutable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxItemContainer::Insert(unsigned int, const wxString *, unsigned int)");
		}
		int lret = self->Insert(n, &items, pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxItemContainer::Insert
	static int _bind_Insert(lua_State *L) {
		if (_lg_typecheck_Insert_overload_1(L)) return _bind_Insert_overload_1(L);
		if (_lg_typecheck_Insert_overload_2(L)) return _bind_Insert_overload_2(L);
		if (_lg_typecheck_Insert_overload_3(L)) return _bind_Insert_overload_3(L);
		if (_lg_typecheck_Insert_overload_4(L)) return _bind_Insert_overload_4(L);
		if (_lg_typecheck_Insert_overload_5(L)) return _bind_Insert_overload_5(L);

		luaL_error(L, "error in function Insert, cannot match any of the overloads for function Insert:\n  Insert(const wxString &, unsigned int)\n  Insert(const wxString &, unsigned int, void *)\n  Insert(const wxString &, unsigned int, wxClientData *)\n  Insert(const wxArrayString &, unsigned int)\n  Insert(unsigned int, const wxString *, unsigned int)\n");
		return 0;
	}


	// Operator binds:

};

wxItemContainer* LunaTraits< wxItemContainer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// unsigned int wxItemContainerImmutable::GetCount() const
	// wxString wxItemContainerImmutable::GetString(unsigned int n) const
	// void wxItemContainerImmutable::SetString(unsigned int n, const wxString & string)
	// void wxItemContainerImmutable::SetSelection(int n)
	// int wxItemContainerImmutable::GetSelection() const

	// Abstract operators:
}

void LunaTraits< wxItemContainer >::_bind_dtor(wxItemContainer* obj) {
	delete obj;
}

const char LunaTraits< wxItemContainer >::className[] = "wxItemContainer";
const char LunaTraits< wxItemContainer >::fullName[] = "wxItemContainer";
const char LunaTraits< wxItemContainer >::moduleName[] = "wx";
const char* LunaTraits< wxItemContainer >::parents[] = {"wx.wxItemContainerImmutable", 0};
const int LunaTraits< wxItemContainer >::hash = 58393871;
const int LunaTraits< wxItemContainer >::uniqueIDs[] = {69784830,0};

luna_RegType LunaTraits< wxItemContainer >::methods[] = {
	{"Append", &luna_wrapper_wxItemContainer::_bind_Append},
	{"Clear", &luna_wrapper_wxItemContainer::_bind_Clear},
	{"Delete", &luna_wrapper_wxItemContainer::_bind_Delete},
	{"DetachClientObject", &luna_wrapper_wxItemContainer::_bind_DetachClientObject},
	{"HasClientData", &luna_wrapper_wxItemContainer::_bind_HasClientData},
	{"HasClientObjectData", &luna_wrapper_wxItemContainer::_bind_HasClientObjectData},
	{"HasClientUntypedData", &luna_wrapper_wxItemContainer::_bind_HasClientUntypedData},
	{"GetClientData", &luna_wrapper_wxItemContainer::_bind_GetClientData},
	{"GetClientObject", &luna_wrapper_wxItemContainer::_bind_GetClientObject},
	{"Insert", &luna_wrapper_wxItemContainer::_bind_Insert},
	{0,0}
};

luna_ConverterType LunaTraits< wxItemContainer >::converters[] = {
	{"wxItemContainerImmutable", &luna_wrapper_wxItemContainer::_cast_from_wxItemContainerImmutable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxItemContainer >::enumValues[] = {
	{0,0}
};

