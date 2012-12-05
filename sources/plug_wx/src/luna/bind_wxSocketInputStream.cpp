#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSocketInputStream.h>

class luna_wrapper_wxSocketInputStream {
public:
	typedef Luna< wxSocketInputStream > luna_t;

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
		wxSocketInputStream* ptr= dynamic_cast< wxSocketInputStream* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSocketInputStream >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxSocketInputStream* LunaTraits< wxSocketInputStream >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// size_t wxInputStream::OnSysRead(void * buffer, size_t bufsize)
}

void LunaTraits< wxSocketInputStream >::_bind_dtor(wxSocketInputStream* obj) {
	delete obj;
}

const char LunaTraits< wxSocketInputStream >::className[] = "wxSocketInputStream";
const char LunaTraits< wxSocketInputStream >::fullName[] = "wxSocketInputStream";
const char LunaTraits< wxSocketInputStream >::moduleName[] = "wx";
const char* LunaTraits< wxSocketInputStream >::parents[] = {"wx.wxInputStream", 0};
const int LunaTraits< wxSocketInputStream >::hash = 65159907;
const int LunaTraits< wxSocketInputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSocketInputStream >::methods[] = {
	{"__eq", &luna_wrapper_wxSocketInputStream::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxSocketInputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxSocketInputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSocketInputStream >::enumValues[] = {
	{0,0}
};


