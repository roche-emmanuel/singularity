#include <plug_common.h>

class luna_wrapper_wxDataViewProgressRenderer {
public:
	typedef Luna< wxDataViewProgressRenderer > luna_t;

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
		wxDataViewProgressRenderer* ptr= dynamic_cast< wxDataViewProgressRenderer* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewProgressRenderer >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxDataViewProgressRenderer* LunaTraits< wxDataViewProgressRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxDataViewRenderer::GetValue(wxVariant & value) const
	// bool wxDataViewRenderer::SetValue(const wxVariant & value)

	// Abstract operators:
}

void LunaTraits< wxDataViewProgressRenderer >::_bind_dtor(wxDataViewProgressRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewProgressRenderer >::className[] = "wxDataViewProgressRenderer";
const char LunaTraits< wxDataViewProgressRenderer >::fullName[] = "wxDataViewProgressRenderer";
const char LunaTraits< wxDataViewProgressRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewProgressRenderer >::parents[] = {"wx.wxDataViewRenderer", 0};
const int LunaTraits< wxDataViewProgressRenderer >::hash = 90582027;
const int LunaTraits< wxDataViewProgressRenderer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDataViewProgressRenderer >::methods[] = {
	{"__eq", &luna_wrapper_wxDataViewProgressRenderer::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewProgressRenderer >::converters[] = {
	{"wxObject", &luna_wrapper_wxDataViewProgressRenderer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewProgressRenderer >::enumValues[] = {
	{0,0}
};


