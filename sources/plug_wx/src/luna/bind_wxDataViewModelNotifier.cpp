#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDataViewModelNotifier.h>

class luna_wrapper_wxDataViewModelNotifier {
public:
	typedef Luna< wxDataViewModelNotifier > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,90806294) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDataViewModelNotifier*)");
		}

		wxDataViewModelNotifier* rhs =(Luna< wxDataViewModelNotifier >::check(L,2));
		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDataViewModelNotifier");
		
		return luna_dynamicCast(L,converters,"wxDataViewModelNotifier",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_Cleared(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOwner(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ItemAdded(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ItemChanged(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ItemDeleted(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ItemsAdded(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,60705462) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ItemsChanged(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,60705462) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ItemsDeleted(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,60705462) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Resort(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetOwner(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66533182)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ValueChanged(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxDataViewModelNotifier::Cleared()
	static int _bind_Cleared(lua_State *L) {
		if (!_lg_typecheck_Cleared(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewModelNotifier::Cleared() function, expected prototype:\nbool wxDataViewModelNotifier::Cleared()\nClass arguments details:\n");
		}


		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewModelNotifier::Cleared()");
		}
		bool lret = self->Cleared();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDataViewModel * wxDataViewModelNotifier::GetOwner() const
	static int _bind_GetOwner(lua_State *L) {
		if (!_lg_typecheck_GetOwner(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewModel * wxDataViewModelNotifier::GetOwner() const function, expected prototype:\nwxDataViewModel * wxDataViewModelNotifier::GetOwner() const\nClass arguments details:\n");
		}


		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewModel * wxDataViewModelNotifier::GetOwner() const");
		}
		wxDataViewModel * lret = self->GetOwner();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewModel >::push(L,lret,false);

		return 1;
	}

	// bool wxDataViewModelNotifier::ItemAdded(const wxDataViewItem & parent, const wxDataViewItem & item)
	static int _bind_ItemAdded(lua_State *L) {
		if (!_lg_typecheck_ItemAdded(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewModelNotifier::ItemAdded(const wxDataViewItem & parent, const wxDataViewItem & item) function, expected prototype:\nbool wxDataViewModelNotifier::ItemAdded(const wxDataViewItem & parent, const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 11709329\n");
		}

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewModelNotifier::ItemAdded function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,3));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewModelNotifier::ItemAdded function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewModelNotifier::ItemAdded(const wxDataViewItem &, const wxDataViewItem &)");
		}
		bool lret = self->ItemAdded(parent, item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewModelNotifier::ItemChanged(const wxDataViewItem & item)
	static int _bind_ItemChanged(lua_State *L) {
		if (!_lg_typecheck_ItemChanged(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewModelNotifier::ItemChanged(const wxDataViewItem & item) function, expected prototype:\nbool wxDataViewModelNotifier::ItemChanged(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewModelNotifier::ItemChanged function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewModelNotifier::ItemChanged(const wxDataViewItem &)");
		}
		bool lret = self->ItemChanged(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewModelNotifier::ItemDeleted(const wxDataViewItem & parent, const wxDataViewItem & item)
	static int _bind_ItemDeleted(lua_State *L) {
		if (!_lg_typecheck_ItemDeleted(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewModelNotifier::ItemDeleted(const wxDataViewItem & parent, const wxDataViewItem & item) function, expected prototype:\nbool wxDataViewModelNotifier::ItemDeleted(const wxDataViewItem & parent, const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 11709329\n");
		}

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewModelNotifier::ItemDeleted function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,3));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewModelNotifier::ItemDeleted function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewModelNotifier::ItemDeleted(const wxDataViewItem &, const wxDataViewItem &)");
		}
		bool lret = self->ItemDeleted(parent, item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewModelNotifier::ItemsAdded(const wxDataViewItem & parent, const wxDataViewItemArray & items)
	static int _bind_ItemsAdded(lua_State *L) {
		if (!_lg_typecheck_ItemsAdded(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewModelNotifier::ItemsAdded(const wxDataViewItem & parent, const wxDataViewItemArray & items) function, expected prototype:\nbool wxDataViewModelNotifier::ItemsAdded(const wxDataViewItem & parent, const wxDataViewItemArray & items)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 60705462\n");
		}

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewModelNotifier::ItemsAdded function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		const wxDataViewItemArray* items_ptr=(Luna< wxDataViewItemArray >::check(L,3));
		if( !items_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg items in wxDataViewModelNotifier::ItemsAdded function");
		}
		const wxDataViewItemArray & items=*items_ptr;

		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewModelNotifier::ItemsAdded(const wxDataViewItem &, const wxDataViewItemArray &)");
		}
		bool lret = self->ItemsAdded(parent, items);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewModelNotifier::ItemsChanged(const wxDataViewItemArray & items)
	static int _bind_ItemsChanged(lua_State *L) {
		if (!_lg_typecheck_ItemsChanged(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewModelNotifier::ItemsChanged(const wxDataViewItemArray & items) function, expected prototype:\nbool wxDataViewModelNotifier::ItemsChanged(const wxDataViewItemArray & items)\nClass arguments details:\narg 1 ID = 60705462\n");
		}

		const wxDataViewItemArray* items_ptr=(Luna< wxDataViewItemArray >::check(L,2));
		if( !items_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg items in wxDataViewModelNotifier::ItemsChanged function");
		}
		const wxDataViewItemArray & items=*items_ptr;

		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewModelNotifier::ItemsChanged(const wxDataViewItemArray &)");
		}
		bool lret = self->ItemsChanged(items);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewModelNotifier::ItemsDeleted(const wxDataViewItem & parent, const wxDataViewItemArray & items)
	static int _bind_ItemsDeleted(lua_State *L) {
		if (!_lg_typecheck_ItemsDeleted(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewModelNotifier::ItemsDeleted(const wxDataViewItem & parent, const wxDataViewItemArray & items) function, expected prototype:\nbool wxDataViewModelNotifier::ItemsDeleted(const wxDataViewItem & parent, const wxDataViewItemArray & items)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 60705462\n");
		}

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewModelNotifier::ItemsDeleted function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		const wxDataViewItemArray* items_ptr=(Luna< wxDataViewItemArray >::check(L,3));
		if( !items_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg items in wxDataViewModelNotifier::ItemsDeleted function");
		}
		const wxDataViewItemArray & items=*items_ptr;

		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewModelNotifier::ItemsDeleted(const wxDataViewItem &, const wxDataViewItemArray &)");
		}
		bool lret = self->ItemsDeleted(parent, items);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewModelNotifier::Resort()
	static int _bind_Resort(lua_State *L) {
		if (!_lg_typecheck_Resort(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewModelNotifier::Resort() function, expected prototype:\nvoid wxDataViewModelNotifier::Resort()\nClass arguments details:\n");
		}


		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewModelNotifier::Resort()");
		}
		self->Resort();

		return 0;
	}

	// void wxDataViewModelNotifier::SetOwner(wxDataViewModel * owner)
	static int _bind_SetOwner(lua_State *L) {
		if (!_lg_typecheck_SetOwner(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewModelNotifier::SetOwner(wxDataViewModel * owner) function, expected prototype:\nvoid wxDataViewModelNotifier::SetOwner(wxDataViewModel * owner)\nClass arguments details:\narg 1 ID = 66533182\n");
		}

		wxDataViewModel* owner=(Luna< wxDataViewModel >::check(L,2));

		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewModelNotifier::SetOwner(wxDataViewModel *)");
		}
		self->SetOwner(owner);

		return 0;
	}

	// bool wxDataViewModelNotifier::ValueChanged(const wxDataViewItem & item, unsigned int col)
	static int _bind_ValueChanged(lua_State *L) {
		if (!_lg_typecheck_ValueChanged(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewModelNotifier::ValueChanged(const wxDataViewItem & item, unsigned int col) function, expected prototype:\nbool wxDataViewModelNotifier::ValueChanged(const wxDataViewItem & item, unsigned int col)\nClass arguments details:\narg 1 ID = 11709329\n");
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewModelNotifier::ValueChanged function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,3);

		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewModelNotifier::ValueChanged(const wxDataViewItem &, unsigned int)");
		}
		bool lret = self->ValueChanged(item, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxDataViewModelNotifier* LunaTraits< wxDataViewModelNotifier >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxDataViewModelNotifier::Cleared()
	// bool wxDataViewModelNotifier::ItemAdded(const wxDataViewItem & parent, const wxDataViewItem & item)
	// bool wxDataViewModelNotifier::ItemChanged(const wxDataViewItem & item)
	// bool wxDataViewModelNotifier::ItemDeleted(const wxDataViewItem & parent, const wxDataViewItem & item)
	// void wxDataViewModelNotifier::Resort()
	// bool wxDataViewModelNotifier::ValueChanged(const wxDataViewItem & item, unsigned int col)
}

void LunaTraits< wxDataViewModelNotifier >::_bind_dtor(wxDataViewModelNotifier* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewModelNotifier >::className[] = "wxDataViewModelNotifier";
const char LunaTraits< wxDataViewModelNotifier >::fullName[] = "wxDataViewModelNotifier";
const char LunaTraits< wxDataViewModelNotifier >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewModelNotifier >::parents[] = {0};
const int LunaTraits< wxDataViewModelNotifier >::hash = 90806294;
const int LunaTraits< wxDataViewModelNotifier >::uniqueIDs[] = {90806294,0};

luna_RegType LunaTraits< wxDataViewModelNotifier >::methods[] = {
	{"Cleared", &luna_wrapper_wxDataViewModelNotifier::_bind_Cleared},
	{"GetOwner", &luna_wrapper_wxDataViewModelNotifier::_bind_GetOwner},
	{"ItemAdded", &luna_wrapper_wxDataViewModelNotifier::_bind_ItemAdded},
	{"ItemChanged", &luna_wrapper_wxDataViewModelNotifier::_bind_ItemChanged},
	{"ItemDeleted", &luna_wrapper_wxDataViewModelNotifier::_bind_ItemDeleted},
	{"ItemsAdded", &luna_wrapper_wxDataViewModelNotifier::_bind_ItemsAdded},
	{"ItemsChanged", &luna_wrapper_wxDataViewModelNotifier::_bind_ItemsChanged},
	{"ItemsDeleted", &luna_wrapper_wxDataViewModelNotifier::_bind_ItemsDeleted},
	{"Resort", &luna_wrapper_wxDataViewModelNotifier::_bind_Resort},
	{"SetOwner", &luna_wrapper_wxDataViewModelNotifier::_bind_SetOwner},
	{"ValueChanged", &luna_wrapper_wxDataViewModelNotifier::_bind_ValueChanged},
	{"dynCast", &luna_wrapper_wxDataViewModelNotifier::_bind_dynCast},
	{"__eq", &luna_wrapper_wxDataViewModelNotifier::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewModelNotifier >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewModelNotifier >::enumValues[] = {
	{0,0}
};


