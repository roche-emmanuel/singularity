#include <plug_common.h>

class luna_wrapper_wxRegConfig {
public:
	typedef Luna< wxRegConfig > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRegConfig* ptr= dynamic_cast< wxRegConfig* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRegConfig >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxRegConfig* LunaTraits< wxRegConfig >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// const wxString & wxConfigBase::GetPath() const
	// void wxConfigBase::SetPath(const wxString & strPath)
	// bool wxConfigBase::GetFirstEntry(wxString & str, long & index) const
	// bool wxConfigBase::GetFirstGroup(wxString & str, long & index) const
	// bool wxConfigBase::GetNextEntry(wxString & str, long & index) const
	// bool wxConfigBase::GetNextGroup(wxString & str, long & index) const
	// size_t wxConfigBase::GetNumberOfEntries(bool bRecursive = false) const
	// size_t wxConfigBase::GetNumberOfGroups(bool bRecursive = false) const
	// bool wxConfigBase::HasEntry(const wxString & strName) const
	// bool wxConfigBase::HasGroup(const wxString & strName) const
	// bool wxConfigBase::Flush(bool bCurrentOnly = false)
	// bool wxConfigBase::RenameEntry(const wxString & oldName, const wxString & newName)
	// bool wxConfigBase::RenameGroup(const wxString & oldName, const wxString & newName)
	// bool wxConfigBase::DeleteAll()
	// bool wxConfigBase::DeleteEntry(const wxString & key, bool bDeleteGroupIfEmpty = true)
	// bool wxConfigBase::DeleteGroup(const wxString & key)

	// Abstract operators:
}

void LunaTraits< wxRegConfig >::_bind_dtor(wxRegConfig* obj) {
	delete obj;
}

const char LunaTraits< wxRegConfig >::className[] = "wxRegConfig";
const char LunaTraits< wxRegConfig >::fullName[] = "wxRegConfig";
const char LunaTraits< wxRegConfig >::moduleName[] = "wx";
const char* LunaTraits< wxRegConfig >::parents[] = {"wx.wxConfigBase", 0};
const int LunaTraits< wxRegConfig >::hash = 20578487;
const int LunaTraits< wxRegConfig >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRegConfig >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRegConfig >::converters[] = {
	{"wxObject", &luna_wrapper_wxRegConfig::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRegConfig >::enumValues[] = {
	{0,0}
};


