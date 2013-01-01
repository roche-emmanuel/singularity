#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_wxScrolled_wxPanel {
public:
	typedef Luna< wxScrolled< wxPanel > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,4685182) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxScrolled< wxPanel >*)");
		}

		wxScrolled< wxPanel >* rhs =(Luna< wxScrolled< wxPanel > >::check(L,2));
		wxScrolled< wxPanel >* self=(Luna< wxScrolled< wxPanel > >::check(L,1));
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

		wxScrolled< wxPanel >* self=(Luna< wxScrolled< wxPanel > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxScrolled< wxPanel >");
		
		return luna_dynamicCast(L,converters,"wxScrolled< wxPanel >",name);
	}

};

wxScrolled< wxPanel >* LunaTraits< wxScrolled< wxPanel > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxScrolled< wxPanel > >::_bind_dtor(wxScrolled< wxPanel >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< wxScrolled< wxPanel > >::className[] = "wxScrolled_wxPanel";
const char LunaTraits< wxScrolled< wxPanel > >::fullName[] = "wxScrolled< wxPanel >";
const char LunaTraits< wxScrolled< wxPanel > >::moduleName[] = "wx";
const char* LunaTraits< wxScrolled< wxPanel > >::parents[] = {0};
const int LunaTraits< wxScrolled< wxPanel > >::hash = 4685182;
const int LunaTraits< wxScrolled< wxPanel > >::uniqueIDs[] = {4685182,0};

luna_RegType LunaTraits< wxScrolled< wxPanel > >::methods[] = {
	{"dynCast", &luna_wrapper_wxScrolled_wxPanel::_bind_dynCast},
	{"__eq", &luna_wrapper_wxScrolled_wxPanel::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< wxScrolled< wxPanel > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxScrolled< wxPanel > >::enumValues[] = {
	{0,0}
};


