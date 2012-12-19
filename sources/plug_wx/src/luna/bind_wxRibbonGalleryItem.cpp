#include <plug_common.h>

class luna_wrapper_wxRibbonGalleryItem {
public:
	typedef Luna< wxRibbonGalleryItem > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56057674) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxRibbonGalleryItem*)");
		}

		wxRibbonGalleryItem* rhs =(Luna< wxRibbonGalleryItem >::check(L,2));
		wxRibbonGalleryItem* self=(Luna< wxRibbonGalleryItem >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		wxRibbonGalleryItem* self=(Luna< wxRibbonGalleryItem >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRibbonGalleryItem");
		
		return luna_dynamicCast(L,converters,"wxRibbonGalleryItem",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxRibbonGalleryItem* LunaTraits< wxRibbonGalleryItem >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxRibbonGalleryItem >::_bind_dtor(wxRibbonGalleryItem* obj) {
	delete obj;
}

const char LunaTraits< wxRibbonGalleryItem >::className[] = "wxRibbonGalleryItem";
const char LunaTraits< wxRibbonGalleryItem >::fullName[] = "wxRibbonGalleryItem";
const char LunaTraits< wxRibbonGalleryItem >::moduleName[] = "wx";
const char* LunaTraits< wxRibbonGalleryItem >::parents[] = {0};
const int LunaTraits< wxRibbonGalleryItem >::hash = 56057674;
const int LunaTraits< wxRibbonGalleryItem >::uniqueIDs[] = {56057674,0};

luna_RegType LunaTraits< wxRibbonGalleryItem >::methods[] = {
	{"dynCast", &luna_wrapper_wxRibbonGalleryItem::_bind_dynCast},
	{"__eq", &luna_wrapper_wxRibbonGalleryItem::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRibbonGalleryItem >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRibbonGalleryItem >::enumValues[] = {
	{0,0}
};


