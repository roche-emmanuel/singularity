#include <plug_common.h>

class luna_wrapper_wxDataViewIndexListModel {
public:
	typedef Luna< wxDataViewIndexListModel > luna_t;

	// Derived class converters:
	static int _cast_from_wxDataViewModel(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDataViewIndexListModel* ptr= dynamic_cast< wxDataViewIndexListModel* >(Luna< wxDataViewModel >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewIndexListModel >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxDataViewIndexListModel* LunaTraits< wxDataViewIndexListModel >::_bind_ctor(lua_State *L) {
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

void LunaTraits< wxDataViewIndexListModel >::_bind_dtor(wxDataViewIndexListModel* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewIndexListModel >::className[] = "wxDataViewIndexListModel";
const char LunaTraits< wxDataViewIndexListModel >::fullName[] = "wxDataViewIndexListModel";
const char LunaTraits< wxDataViewIndexListModel >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewIndexListModel >::parents[] = {"wx.wxDataViewListModel", 0};
const int LunaTraits< wxDataViewIndexListModel >::hash = 19234895;
const int LunaTraits< wxDataViewIndexListModel >::uniqueIDs[] = {66533182,0};

luna_RegType LunaTraits< wxDataViewIndexListModel >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewIndexListModel >::converters[] = {
	{"wxDataViewModel", &luna_wrapper_wxDataViewIndexListModel::_cast_from_wxDataViewModel},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewIndexListModel >::enumValues[] = {
	{0,0}
};


