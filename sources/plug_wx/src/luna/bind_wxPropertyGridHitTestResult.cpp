#include <plug_common.h>

class luna_wrapper_wxPropertyGridHitTestResult {
public:
	typedef Luna< wxPropertyGridHitTestResult > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65784637) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxPropertyGridHitTestResult*)");
		}

		wxPropertyGridHitTestResult* rhs =(Luna< wxPropertyGridHitTestResult >::check(L,2));
		wxPropertyGridHitTestResult* self=(Luna< wxPropertyGridHitTestResult >::check(L,1));
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

		wxPropertyGridHitTestResult* self=(Luna< wxPropertyGridHitTestResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxPropertyGridHitTestResult");
		
		return luna_dynamicCast(L,converters,"wxPropertyGridHitTestResult",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetProperty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// wxPGProperty * wxPropertyGridHitTestResult::GetProperty() const
	static int _bind_GetProperty(lua_State *L) {
		if (!_lg_typecheck_GetProperty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGridHitTestResult::GetProperty() const function, expected prototype:\nwxPGProperty * wxPropertyGridHitTestResult::GetProperty() const\nClass arguments details:\n");
		}


		wxPropertyGridHitTestResult* self=(Luna< wxPropertyGridHitTestResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGridHitTestResult::GetProperty() const. Got : '%s'",typeid(Luna< wxPropertyGridHitTestResult >::check(L,1)).name());
		}
		wxPGProperty * lret = self->GetProperty();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxPropertyGridHitTestResult* LunaTraits< wxPropertyGridHitTestResult >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxPropertyGridHitTestResult >::_bind_dtor(wxPropertyGridHitTestResult* obj) {
	delete obj;
}

const char LunaTraits< wxPropertyGridHitTestResult >::className[] = "wxPropertyGridHitTestResult";
const char LunaTraits< wxPropertyGridHitTestResult >::fullName[] = "wxPropertyGridHitTestResult";
const char LunaTraits< wxPropertyGridHitTestResult >::moduleName[] = "wx";
const char* LunaTraits< wxPropertyGridHitTestResult >::parents[] = {0};
const int LunaTraits< wxPropertyGridHitTestResult >::hash = 65784637;
const int LunaTraits< wxPropertyGridHitTestResult >::uniqueIDs[] = {65784637,0};

luna_RegType LunaTraits< wxPropertyGridHitTestResult >::methods[] = {
	{"GetProperty", &luna_wrapper_wxPropertyGridHitTestResult::_bind_GetProperty},
	{"dynCast", &luna_wrapper_wxPropertyGridHitTestResult::_bind_dynCast},
	{"__eq", &luna_wrapper_wxPropertyGridHitTestResult::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxPropertyGridHitTestResult >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxPropertyGridHitTestResult >::enumValues[] = {
	{0,0}
};


