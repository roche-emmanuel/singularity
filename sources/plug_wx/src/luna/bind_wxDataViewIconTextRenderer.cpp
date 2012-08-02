#include <plug_common.h>

class luna_wrapper_wxDataViewIconTextRenderer {
public:
	typedef Luna< wxDataViewIconTextRenderer > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDataViewIconTextRenderer* ptr= dynamic_cast< wxDataViewIconTextRenderer* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewIconTextRenderer >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxDataViewIconTextRenderer* LunaTraits< wxDataViewIconTextRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxDataViewRenderer::GetValue(wxVariant & value) const
	// bool wxDataViewRenderer::SetValue(const wxVariant & value)

	// Abstract operators:
}

void LunaTraits< wxDataViewIconTextRenderer >::_bind_dtor(wxDataViewIconTextRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewIconTextRenderer >::className[] = "wxDataViewIconTextRenderer";
const char LunaTraits< wxDataViewIconTextRenderer >::fullName[] = "wxDataViewIconTextRenderer";
const char LunaTraits< wxDataViewIconTextRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewIconTextRenderer >::parents[] = {"wx.wxDataViewRenderer", 0};
const int LunaTraits< wxDataViewIconTextRenderer >::hash = 23763012;
const int LunaTraits< wxDataViewIconTextRenderer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDataViewIconTextRenderer >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewIconTextRenderer >::converters[] = {
	{"wxObject", &luna_wrapper_wxDataViewIconTextRenderer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewIconTextRenderer >::enumValues[] = {
	{0,0}
};


