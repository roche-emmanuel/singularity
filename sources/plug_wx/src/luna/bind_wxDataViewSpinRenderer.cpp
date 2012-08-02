#include <plug_common.h>

class luna_wrapper_wxDataViewSpinRenderer {
public:
	typedef Luna< wxDataViewSpinRenderer > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDataViewSpinRenderer* ptr= dynamic_cast< wxDataViewSpinRenderer* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewSpinRenderer >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxDataViewSpinRenderer* LunaTraits< wxDataViewSpinRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxSize wxDataViewCustomRenderer::GetSize() const
	// bool wxDataViewCustomRenderer::Render(wxRect cell, wxDC * dc, int state)
	// bool wxDataViewRenderer::GetValue(wxVariant & value) const
	// bool wxDataViewRenderer::SetValue(const wxVariant & value)

	// Abstract operators:
}

void LunaTraits< wxDataViewSpinRenderer >::_bind_dtor(wxDataViewSpinRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewSpinRenderer >::className[] = "wxDataViewSpinRenderer";
const char LunaTraits< wxDataViewSpinRenderer >::fullName[] = "wxDataViewSpinRenderer";
const char LunaTraits< wxDataViewSpinRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewSpinRenderer >::parents[] = {"wx.wxDataViewCustomRenderer", 0};
const int LunaTraits< wxDataViewSpinRenderer >::hash = 25468914;
const int LunaTraits< wxDataViewSpinRenderer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDataViewSpinRenderer >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewSpinRenderer >::converters[] = {
	{"wxObject", &luna_wrapper_wxDataViewSpinRenderer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewSpinRenderer >::enumValues[] = {
	{0,0}
};


