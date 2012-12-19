#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDataViewListModel.h>

class luna_wrapper_wxDataViewListModel {
public:
	typedef Luna< wxDataViewListModel > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
		//wxDataViewListModel* ptr= dynamic_cast< wxDataViewListModel* >(Luna< wxDataViewModel >::check(L,1));
		wxDataViewListModel* ptr= luna_caster< wxDataViewModel, wxDataViewListModel >::cast(Luna< wxDataViewModel >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewListModel >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxDataViewListModel* LunaTraits< wxDataViewListModel >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
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
	{"__eq", &luna_wrapper_wxDataViewListModel::_bind___eq},
	{"getTable", &luna_wrapper_wxDataViewListModel::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewListModel >::converters[] = {
	{"wxDataViewModel", &luna_wrapper_wxDataViewListModel::_cast_from_wxDataViewModel},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewListModel >::enumValues[] = {
	{0,0}
};


