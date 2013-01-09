#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_wxSizerItemList {
public:
	typedef Luna< wxSizerItemList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,82729955) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxSizerItemList*)");
		}

		wxSizerItemList* rhs =(Luna< wxSizerItemList >::check(L,2));
		wxSizerItemList* self=(Luna< wxSizerItemList >::check(L,1));
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

		wxSizerItemList* self=(Luna< wxSizerItemList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxSizerItemList");
		
		return luna_dynamicCast(L,converters,"wxSizerItemList",name);
	}

};

wxSizerItemList* LunaTraits< wxSizerItemList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxSizerItemList >::_bind_dtor(wxSizerItemList* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< wxSizerItemList >::className[] = "wxSizerItemList";
const char LunaTraits< wxSizerItemList >::fullName[] = "wxSizerItemList";
const char LunaTraits< wxSizerItemList >::moduleName[] = "wx";
const char* LunaTraits< wxSizerItemList >::parents[] = {0};
const int LunaTraits< wxSizerItemList >::hash = 82729955;
const int LunaTraits< wxSizerItemList >::uniqueIDs[] = {82729955,0};

luna_RegType LunaTraits< wxSizerItemList >::methods[] = {
	{"dynCast", &luna_wrapper_wxSizerItemList::_bind_dynCast},
	{"__eq", &luna_wrapper_wxSizerItemList::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< wxSizerItemList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxSizerItemList >::enumValues[] = {
	{0,0}
};

