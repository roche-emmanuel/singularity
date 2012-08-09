#include <plug_common.h>

class luna_wrapper_wxDataObjectBase {
public:
	typedef Luna< wxDataObjectBase > luna_t;

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

		wxDataObjectBase* self=(Luna< wxDataObjectBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDataObjectBase");
		
		return luna_dynamicCast(L,converters,"wxDataObjectBase",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxDataObjectBase* LunaTraits< wxDataObjectBase >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxDataObjectBase >::_bind_dtor(wxDataObjectBase* obj) {
	delete obj;
}

const char LunaTraits< wxDataObjectBase >::className[] = "wxDataObjectBase";
const char LunaTraits< wxDataObjectBase >::fullName[] = "wxDataObjectBase";
const char LunaTraits< wxDataObjectBase >::moduleName[] = "wx";
const char* LunaTraits< wxDataObjectBase >::parents[] = {0};
const int LunaTraits< wxDataObjectBase >::hash = 14563958;
const int LunaTraits< wxDataObjectBase >::uniqueIDs[] = {14563958,0};

luna_RegType LunaTraits< wxDataObjectBase >::methods[] = {
	{"dynCast", &luna_wrapper_wxDataObjectBase::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataObjectBase >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataObjectBase >::enumValues[] = {
	{"Get", wxDataObjectBase::Get},
	{"Set", wxDataObjectBase::Set},
	{"Both", wxDataObjectBase::Both},
	{0,0}
};

