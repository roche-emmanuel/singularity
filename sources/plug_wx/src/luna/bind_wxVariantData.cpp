#include <plug_common.h>

class luna_wrapper_wxVariantData {
public:
	typedef Luna< wxVariantData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,60960840) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxObjectRefData*)");
		}

		wxObjectRefData* rhs =(Luna< wxObjectRefData >::check(L,2));
		wxObjectRefData* self=(Luna< wxObjectRefData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxObjectRefData(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxVariantData* ptr= dynamic_cast< wxVariantData* >(Luna< wxObjectRefData >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxVariantData >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxVariantData* LunaTraits< wxVariantData >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxVariantData::Eq(wxVariantData & data) const
	// wxString wxVariantData::GetType() const

	// Abstract operators:
}

void LunaTraits< wxVariantData >::_bind_dtor(wxVariantData* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< wxVariantData >::className[] = "wxVariantData";
const char LunaTraits< wxVariantData >::fullName[] = "wxVariantData";
const char LunaTraits< wxVariantData >::moduleName[] = "wx";
const char* LunaTraits< wxVariantData >::parents[] = {"wx.wxObjectRefData", 0};
const int LunaTraits< wxVariantData >::hash = 44451978;
const int LunaTraits< wxVariantData >::uniqueIDs[] = {60960840,0};

luna_RegType LunaTraits< wxVariantData >::methods[] = {
	{"__eq", &luna_wrapper_wxVariantData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxVariantData >::converters[] = {
	{"wxObjectRefData", &luna_wrapper_wxVariantData::_cast_from_wxObjectRefData},
	{0,0}
};

luna_RegEnumType LunaTraits< wxVariantData >::enumValues[] = {
	{0,0}
};


