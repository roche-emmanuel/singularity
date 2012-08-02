#include <plug_common.h>

class luna_wrapper_wxDataViewListModel {
public:
	typedef Luna< wxDataViewListModel > luna_t;

	// Derived class converters:
	static int _cast_from_wxDataViewModel(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDataViewListModel* ptr= dynamic_cast< wxDataViewListModel* >(Luna< wxDataViewModel >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewListModel >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxDataViewListModel* LunaTraits< wxDataViewListModel >::_bind_ctor(lua_State *L) {
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

void LunaTraits< wxDataViewListModel >::_bind_dtor(wxDataViewListModel* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewListModel >::className[] = "wxDataViewListModel";
const char LunaTraits< wxDataViewListModel >::fullName[] = "wxDataViewListModel";
const char LunaTraits< wxDataViewListModel >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewListModel >::parents[] = {"wx.wxDataViewModel", 0};
const int LunaTraits< wxDataViewListModel >::hash = 31141193;
const int LunaTraits< wxDataViewListModel >::uniqueIDs[] = {66533182,0};

luna_RegType LunaTraits< wxDataViewListModel >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewListModel >::converters[] = {
	{"wxDataViewModel", &luna_wrapper_wxDataViewListModel::_cast_from_wxDataViewModel},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewListModel >::enumValues[] = {
	{0,0}
};


