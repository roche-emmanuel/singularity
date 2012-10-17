#include <plug_common.h>

class luna_wrapper_wxMemoryInputStream {
public:
	typedef Luna< wxMemoryInputStream > luna_t;

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
		wxMemoryInputStream* ptr= dynamic_cast< wxMemoryInputStream* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMemoryInputStream >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxMemoryInputStream* LunaTraits< wxMemoryInputStream >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// size_t wxInputStream::OnSysRead(void * buffer, size_t bufsize)

	// Abstract operators:
}

void LunaTraits< wxMemoryInputStream >::_bind_dtor(wxMemoryInputStream* obj) {
	delete obj;
}

const char LunaTraits< wxMemoryInputStream >::className[] = "wxMemoryInputStream";
const char LunaTraits< wxMemoryInputStream >::fullName[] = "wxMemoryInputStream";
const char LunaTraits< wxMemoryInputStream >::moduleName[] = "wx";
const char* LunaTraits< wxMemoryInputStream >::parents[] = {"wx.wxInputStream", 0};
const int LunaTraits< wxMemoryInputStream >::hash = 50114172;
const int LunaTraits< wxMemoryInputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMemoryInputStream >::methods[] = {
	{"__eq", &luna_wrapper_wxMemoryInputStream::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxMemoryInputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxMemoryInputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMemoryInputStream >::enumValues[] = {
	{0,0}
};


