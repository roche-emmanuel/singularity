#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_wxScrolled_wxWindow {
public:
	typedef Luna< wxScrolled< wxWindow > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,32777408) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxScrolled< wxWindow >*)");
		}

		wxScrolled< wxWindow >* rhs =(Luna< wxScrolled< wxWindow > >::check(L,2));
		wxScrolled< wxWindow >* self=(Luna< wxScrolled< wxWindow > >::check(L,1));
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

		wxScrolled< wxWindow >* self=(Luna< wxScrolled< wxWindow > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxScrolled< wxWindow >");
		
		return luna_dynamicCast(L,converters,"wxScrolled< wxWindow >",name);
	}

};

wxScrolled< wxWindow >* LunaTraits< wxScrolled< wxWindow > >::_bind_ctor(lua_State *L) {
	return NULL; //Type destructor explicitly removed.
}

void LunaTraits< wxScrolled< wxWindow > >::_bind_dtor(wxScrolled< wxWindow >* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< wxScrolled< wxWindow > >::className[] = "wxScrolled_wxWindow";
const char LunaTraits< wxScrolled< wxWindow > >::fullName[] = "wxScrolled< wxWindow >";
const char LunaTraits< wxScrolled< wxWindow > >::moduleName[] = "wx";
const char* LunaTraits< wxScrolled< wxWindow > >::parents[] = {0};
const int LunaTraits< wxScrolled< wxWindow > >::hash = 32777408;
const int LunaTraits< wxScrolled< wxWindow > >::uniqueIDs[] = {32777408,0};

luna_RegType LunaTraits< wxScrolled< wxWindow > >::methods[] = {
	{"dynCast", &luna_wrapper_wxScrolled_wxWindow::_bind_dynCast},
	{"__eq", &luna_wrapper_wxScrolled_wxWindow::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< wxScrolled< wxWindow > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxScrolled< wxWindow > >::enumValues[] = {
	{0,0}
};


