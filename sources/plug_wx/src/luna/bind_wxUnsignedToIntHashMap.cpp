#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_wxUnsignedToIntHashMap {
public:
	typedef Luna< wxUnsignedToIntHashMap > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,51529079) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxUnsignedToIntHashMap*)");
		}

		wxUnsignedToIntHashMap* rhs =(Luna< wxUnsignedToIntHashMap >::check(L,2));
		wxUnsignedToIntHashMap* self=(Luna< wxUnsignedToIntHashMap >::check(L,1));
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

		wxUnsignedToIntHashMap* self=(Luna< wxUnsignedToIntHashMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxUnsignedToIntHashMap");
		
		return luna_dynamicCast(L,converters,"wxUnsignedToIntHashMap",name);
	}

};

wxUnsignedToIntHashMap* LunaTraits< wxUnsignedToIntHashMap >::_bind_ctor(lua_State *L) {
	return NULL; //Type destructor explicitly removed.
}

void LunaTraits< wxUnsignedToIntHashMap >::_bind_dtor(wxUnsignedToIntHashMap* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< wxUnsignedToIntHashMap >::className[] = "wxUnsignedToIntHashMap";
const char LunaTraits< wxUnsignedToIntHashMap >::fullName[] = "wxUnsignedToIntHashMap";
const char LunaTraits< wxUnsignedToIntHashMap >::moduleName[] = "wx";
const char* LunaTraits< wxUnsignedToIntHashMap >::parents[] = {0};
const int LunaTraits< wxUnsignedToIntHashMap >::hash = 51529079;
const int LunaTraits< wxUnsignedToIntHashMap >::uniqueIDs[] = {51529079,0};

luna_RegType LunaTraits< wxUnsignedToIntHashMap >::methods[] = {
	{"dynCast", &luna_wrapper_wxUnsignedToIntHashMap::_bind_dynCast},
	{"__eq", &luna_wrapper_wxUnsignedToIntHashMap::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< wxUnsignedToIntHashMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxUnsignedToIntHashMap >::enumValues[] = {
	{0,0}
};


