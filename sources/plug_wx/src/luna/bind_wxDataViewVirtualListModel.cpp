#include <plug_common.h>

class luna_wrapper_wxDataViewVirtualListModel {
public:
	typedef Luna< wxDataViewVirtualListModel > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,66533182) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDataViewModel*)");
		}

		wxDataViewModel* rhs =(Luna< wxDataViewModel >::check(L,2));
		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxDataViewModel(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDataViewVirtualListModel* ptr= dynamic_cast< wxDataViewVirtualListModel* >(Luna< wxDataViewModel >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewVirtualListModel >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxDataViewVirtualListModel* LunaTraits< wxDataViewVirtualListModel >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxDataViewListModel::GetValueByRow(wxVariant & variant, unsigned int row, unsigned int col) const
	// bool wxDataViewListModel::SetValueByRow(const wxVariant & variant, unsigned int row, unsigned int col)
	// unsigned int wxDataViewModel::GetChildren(const wxDataViewItem & item, wxDataViewItemArray & children) const
	// unsigned int wxDataViewModel::GetColumnCount() const
	// wxString wxDataViewModel::GetColumnType(unsigned int col) const
	// wxDataViewItem wxDataViewModel::GetParent(const wxDataViewItem & item) const
	// void wxDataViewModel::GetValue(wxVariant & variant, const wxDataViewItem & item, unsigned int col) const
	// bool wxDataViewModel::IsContainer(const wxDataViewItem & item) const
	// bool wxDataViewModel::SetValue(const wxVariant & variant, const wxDataViewItem & item, unsigned int col)

	// Abstract operators:
}

void LunaTraits< wxDataViewVirtualListModel >::_bind_dtor(wxDataViewVirtualListModel* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewVirtualListModel >::className[] = "wxDataViewVirtualListModel";
const char LunaTraits< wxDataViewVirtualListModel >::fullName[] = "wxDataViewVirtualListModel";
const char LunaTraits< wxDataViewVirtualListModel >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewVirtualListModel >::parents[] = {"wx.wxDataViewListModel", 0};
const int LunaTraits< wxDataViewVirtualListModel >::hash = 16880619;
const int LunaTraits< wxDataViewVirtualListModel >::uniqueIDs[] = {66533182,0};

luna_RegType LunaTraits< wxDataViewVirtualListModel >::methods[] = {
	{"__eq", &luna_wrapper_wxDataViewVirtualListModel::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewVirtualListModel >::converters[] = {
	{"wxDataViewModel", &luna_wrapper_wxDataViewVirtualListModel::_cast_from_wxDataViewModel},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewVirtualListModel >::enumValues[] = {
	{0,0}
};


