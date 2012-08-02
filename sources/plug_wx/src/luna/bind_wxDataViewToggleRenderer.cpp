#include <plug_common.h>

class luna_wrapper_wxDataViewToggleRenderer {
public:
	typedef Luna< wxDataViewToggleRenderer > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDataViewToggleRenderer* ptr= dynamic_cast< wxDataViewToggleRenderer* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewToggleRenderer >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxDataViewToggleRenderer* LunaTraits< wxDataViewToggleRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxDataViewRenderer::GetValue(wxVariant & value) const
	// bool wxDataViewRenderer::SetValue(const wxVariant & value)

	// Abstract operators:
}

void LunaTraits< wxDataViewToggleRenderer >::_bind_dtor(wxDataViewToggleRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewToggleRenderer >::className[] = "wxDataViewToggleRenderer";
const char LunaTraits< wxDataViewToggleRenderer >::fullName[] = "wxDataViewToggleRenderer";
const char LunaTraits< wxDataViewToggleRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewToggleRenderer >::parents[] = {"wx.wxDataViewRenderer", 0};
const int LunaTraits< wxDataViewToggleRenderer >::hash = 17423492;
const int LunaTraits< wxDataViewToggleRenderer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDataViewToggleRenderer >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewToggleRenderer >::converters[] = {
	{"wxObject", &luna_wrapper_wxDataViewToggleRenderer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewToggleRenderer >::enumValues[] = {
	{0,0}
};


