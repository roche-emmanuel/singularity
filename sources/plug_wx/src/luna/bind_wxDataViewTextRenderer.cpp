#include <plug_common.h>

class luna_wrapper_wxDataViewTextRenderer {
public:
	typedef Luna< wxDataViewTextRenderer > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDataViewTextRenderer* ptr= dynamic_cast< wxDataViewTextRenderer* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewTextRenderer >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxDataViewTextRenderer* LunaTraits< wxDataViewTextRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxDataViewRenderer::GetValue(wxVariant & value) const
	// bool wxDataViewRenderer::SetValue(const wxVariant & value)

	// Abstract operators:
}

void LunaTraits< wxDataViewTextRenderer >::_bind_dtor(wxDataViewTextRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewTextRenderer >::className[] = "wxDataViewTextRenderer";
const char LunaTraits< wxDataViewTextRenderer >::fullName[] = "wxDataViewTextRenderer";
const char LunaTraits< wxDataViewTextRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewTextRenderer >::parents[] = {"wx.wxDataViewRenderer", 0};
const int LunaTraits< wxDataViewTextRenderer >::hash = 91728515;
const int LunaTraits< wxDataViewTextRenderer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDataViewTextRenderer >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewTextRenderer >::converters[] = {
	{"wxObject", &luna_wrapper_wxDataViewTextRenderer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewTextRenderer >::enumValues[] = {
	{0,0}
};

