#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDataViewBitmapRenderer.h>

class luna_wrapper_wxDataViewBitmapRenderer {
public:
	typedef Luna< wxDataViewBitmapRenderer > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxObject*)");
		}

		wxObject* rhs =(Luna< wxObject >::check(L,2));
		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDataViewBitmapRenderer* ptr= dynamic_cast< wxDataViewBitmapRenderer* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewBitmapRenderer >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxDataViewBitmapRenderer* LunaTraits< wxDataViewBitmapRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxDataViewRenderer::GetValue(wxVariant & value) const
	// bool wxDataViewRenderer::SetValue(const wxVariant & value)
}

void LunaTraits< wxDataViewBitmapRenderer >::_bind_dtor(wxDataViewBitmapRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewBitmapRenderer >::className[] = "wxDataViewBitmapRenderer";
const char LunaTraits< wxDataViewBitmapRenderer >::fullName[] = "wxDataViewBitmapRenderer";
const char LunaTraits< wxDataViewBitmapRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewBitmapRenderer >::parents[] = {"wx.wxDataViewRenderer", 0};
const int LunaTraits< wxDataViewBitmapRenderer >::hash = 22615386;
const int LunaTraits< wxDataViewBitmapRenderer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDataViewBitmapRenderer >::methods[] = {
	{"__eq", &luna_wrapper_wxDataViewBitmapRenderer::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewBitmapRenderer >::converters[] = {
	{"wxObject", &luna_wrapper_wxDataViewBitmapRenderer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewBitmapRenderer >::enumValues[] = {
	{0,0}
};


