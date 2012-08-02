#include <plug_common.h>

class luna_wrapper_wxDataViewListStore {
public:
	typedef Luna< wxDataViewListStore > luna_t;

	// Derived class converters:
	static int _cast_from_wxDataViewModel(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDataViewListStore* ptr= dynamic_cast< wxDataViewListStore* >(Luna< wxDataViewModel >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewListStore >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_PrependColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertColumn(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteAllItems(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColumnCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColumnType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void wxDataViewListStore::PrependColumn(const wxString & varianttype)
	static int _bind_PrependColumn(lua_State *L) {
		if (!_lg_typecheck_PrependColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListStore::PrependColumn(const wxString & varianttype) function, expected prototype:\nvoid wxDataViewListStore::PrependColumn(const wxString & varianttype)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString varianttype(lua_tostring(L,2),lua_objlen(L,2));

		wxDataViewListStore* self=dynamic_cast< wxDataViewListStore* >(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListStore::PrependColumn(const wxString &)");
		}
		self->PrependColumn(varianttype);

		return 0;
	}

	// void wxDataViewListStore::InsertColumn(unsigned int pos, const wxString & varianttype)
	static int _bind_InsertColumn(lua_State *L) {
		if (!_lg_typecheck_InsertColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListStore::InsertColumn(unsigned int pos, const wxString & varianttype) function, expected prototype:\nvoid wxDataViewListStore::InsertColumn(unsigned int pos, const wxString & varianttype)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		wxString varianttype(lua_tostring(L,3),lua_objlen(L,3));

		wxDataViewListStore* self=dynamic_cast< wxDataViewListStore* >(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListStore::InsertColumn(unsigned int, const wxString &)");
		}
		self->InsertColumn(pos, varianttype);

		return 0;
	}

	// void wxDataViewListStore::AppendColumn(const wxString & varianttype)
	static int _bind_AppendColumn(lua_State *L) {
		if (!_lg_typecheck_AppendColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListStore::AppendColumn(const wxString & varianttype) function, expected prototype:\nvoid wxDataViewListStore::AppendColumn(const wxString & varianttype)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString varianttype(lua_tostring(L,2),lua_objlen(L,2));

		wxDataViewListStore* self=dynamic_cast< wxDataViewListStore* >(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListStore::AppendColumn(const wxString &)");
		}
		self->AppendColumn(varianttype);

		return 0;
	}

	// void wxDataViewListStore::DeleteItem(unsigned int pos)
	static int _bind_DeleteItem(lua_State *L) {
		if (!_lg_typecheck_DeleteItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListStore::DeleteItem(unsigned int pos) function, expected prototype:\nvoid wxDataViewListStore::DeleteItem(unsigned int pos)\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		wxDataViewListStore* self=dynamic_cast< wxDataViewListStore* >(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListStore::DeleteItem(unsigned int)");
		}
		self->DeleteItem(pos);

		return 0;
	}

	// void wxDataViewListStore::DeleteAllItems()
	static int _bind_DeleteAllItems(lua_State *L) {
		if (!_lg_typecheck_DeleteAllItems(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewListStore::DeleteAllItems() function, expected prototype:\nvoid wxDataViewListStore::DeleteAllItems()\nClass arguments details:\n");
		}


		wxDataViewListStore* self=dynamic_cast< wxDataViewListStore* >(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewListStore::DeleteAllItems()");
		}
		self->DeleteAllItems();

		return 0;
	}

	// unsigned int wxDataViewListStore::GetColumnCount() const
	static int _bind_GetColumnCount(lua_State *L) {
		if (!_lg_typecheck_GetColumnCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxDataViewListStore::GetColumnCount() const function, expected prototype:\nunsigned int wxDataViewListStore::GetColumnCount() const\nClass arguments details:\n");
		}


		wxDataViewListStore* self=dynamic_cast< wxDataViewListStore* >(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxDataViewListStore::GetColumnCount() const");
		}
		unsigned int lret = self->GetColumnCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxDataViewListStore::GetColumnType(unsigned int col) const
	static int _bind_GetColumnType(lua_State *L) {
		if (!_lg_typecheck_GetColumnType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDataViewListStore::GetColumnType(unsigned int col) const function, expected prototype:\nwxString wxDataViewListStore::GetColumnType(unsigned int col) const\nClass arguments details:\n");
		}

		unsigned int col=(unsigned int)lua_tointeger(L,2);

		wxDataViewListStore* self=dynamic_cast< wxDataViewListStore* >(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDataViewListStore::GetColumnType(unsigned int) const");
		}
		wxString lret = self->GetColumnType(col);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxDataViewListStore* LunaTraits< wxDataViewListStore >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// unsigned int wxDataViewModel::GetChildren(const wxDataViewItem & item, wxDataViewItemArray & children) const
	// wxDataViewItem wxDataViewModel::GetParent(const wxDataViewItem & item) const
	// void wxDataViewModel::GetValue(wxVariant & variant, const wxDataViewItem & item, unsigned int col) const
	// bool wxDataViewModel::IsContainer(const wxDataViewItem & item) const
	// bool wxDataViewModel::SetValue(const wxVariant & variant, const wxDataViewItem & item, unsigned int col)

	// Abstract operators:
}

void LunaTraits< wxDataViewListStore >::_bind_dtor(wxDataViewListStore* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewListStore >::className[] = "wxDataViewListStore";
const char LunaTraits< wxDataViewListStore >::fullName[] = "wxDataViewListStore";
const char LunaTraits< wxDataViewListStore >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewListStore >::parents[] = {"wx.wxDataViewIndexListModel", 0};
const int LunaTraits< wxDataViewListStore >::hash = 36842241;
const int LunaTraits< wxDataViewListStore >::uniqueIDs[] = {66533182,0};

luna_RegType LunaTraits< wxDataViewListStore >::methods[] = {
	{"PrependColumn", &luna_wrapper_wxDataViewListStore::_bind_PrependColumn},
	{"InsertColumn", &luna_wrapper_wxDataViewListStore::_bind_InsertColumn},
	{"AppendColumn", &luna_wrapper_wxDataViewListStore::_bind_AppendColumn},
	{"DeleteItem", &luna_wrapper_wxDataViewListStore::_bind_DeleteItem},
	{"DeleteAllItems", &luna_wrapper_wxDataViewListStore::_bind_DeleteAllItems},
	{"GetColumnCount", &luna_wrapper_wxDataViewListStore::_bind_GetColumnCount},
	{"GetColumnType", &luna_wrapper_wxDataViewListStore::_bind_GetColumnType},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewListStore >::converters[] = {
	{"wxDataViewModel", &luna_wrapper_wxDataViewListStore::_cast_from_wxDataViewModel},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewListStore >::enumValues[] = {
	{0,0}
};


