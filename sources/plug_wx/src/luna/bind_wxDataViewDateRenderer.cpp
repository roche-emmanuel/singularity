#include <plug_common.h>

class luna_wrapper_wxDataViewDateRenderer {
public:
	typedef Luna< wxDataViewDateRenderer > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDataViewDateRenderer* ptr= dynamic_cast< wxDataViewDateRenderer* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewDateRenderer >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxDataViewDateRenderer* LunaTraits< wxDataViewDateRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxDataViewRenderer::GetValue(wxVariant & value) const
	// bool wxDataViewRenderer::SetValue(const wxVariant & value)

	// Abstract operators:
}

void LunaTraits< wxDataViewDateRenderer >::_bind_dtor(wxDataViewDateRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewDateRenderer >::className[] = "wxDataViewDateRenderer";
const char LunaTraits< wxDataViewDateRenderer >::fullName[] = "wxDataViewDateRenderer";
const char LunaTraits< wxDataViewDateRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewDateRenderer >::parents[] = {"wx.wxDataViewRenderer", 0};
const int LunaTraits< wxDataViewDateRenderer >::hash = 4245656;
const int LunaTraits< wxDataViewDateRenderer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDataViewDateRenderer >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewDateRenderer >::converters[] = {
	{"wxObject", &luna_wrapper_wxDataViewDateRenderer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewDateRenderer >::enumValues[] = {
	{0,0}
};


