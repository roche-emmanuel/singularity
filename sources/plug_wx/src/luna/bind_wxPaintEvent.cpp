#include <plug_common.h>

class luna_wrapper_wxPaintEvent {
public:
	typedef Luna< wxPaintEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxPaintEvent* ptr= dynamic_cast< wxPaintEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPaintEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxPaintEvent* LunaTraits< wxPaintEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxPaintEvent >::_bind_dtor(wxPaintEvent* obj) {
	delete obj;
}

const char LunaTraits< wxPaintEvent >::className[] = "wxPaintEvent";
const char LunaTraits< wxPaintEvent >::fullName[] = "wxPaintEvent";
const char LunaTraits< wxPaintEvent >::moduleName[] = "wx";
const char* LunaTraits< wxPaintEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxPaintEvent >::hash = 27233890;
const int LunaTraits< wxPaintEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPaintEvent >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxPaintEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxPaintEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPaintEvent >::enumValues[] = {
	{0,0}
};


