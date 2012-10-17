#include <plug_common.h>

class luna_wrapper_wxQuantize {
public:
	typedef Luna< wxQuantize > luna_t;

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
		wxQuantize* ptr= dynamic_cast< wxQuantize* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxQuantize >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxQuantize::wxQuantize()
	static wxQuantize* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxQuantize::wxQuantize() function, expected prototype:\nwxQuantize::wxQuantize()\nClass arguments details:\n");
		}


		return new wxQuantize();
	}


	// Function binds:

	// Operator binds:

};

wxQuantize* LunaTraits< wxQuantize >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxQuantize::_bind_ctor(L);
}

void LunaTraits< wxQuantize >::_bind_dtor(wxQuantize* obj) {
	delete obj;
}

const char LunaTraits< wxQuantize >::className[] = "wxQuantize";
const char LunaTraits< wxQuantize >::fullName[] = "wxQuantize";
const char LunaTraits< wxQuantize >::moduleName[] = "wx";
const char* LunaTraits< wxQuantize >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxQuantize >::hash = 36836222;
const int LunaTraits< wxQuantize >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxQuantize >::methods[] = {
	{"__eq", &luna_wrapper_wxQuantize::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxQuantize >::converters[] = {
	{"wxObject", &luna_wrapper_wxQuantize::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxQuantize >::enumValues[] = {
	{0,0}
};


