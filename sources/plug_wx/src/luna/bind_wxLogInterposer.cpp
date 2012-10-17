#include <plug_common.h>

class luna_wrapper_wxLogInterposer {
public:
	typedef Luna< wxLogInterposer > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13550494) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxLog*)");
		}

		wxLog* rhs =(Luna< wxLog >::check(L,2));
		wxLog* self=(Luna< wxLog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxLog(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxLogInterposer* ptr= dynamic_cast< wxLogInterposer* >(Luna< wxLog >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxLogInterposer >::push(L,ptr,false);
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
	// wxLogInterposer::wxLogInterposer()
	static wxLogInterposer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLogInterposer::wxLogInterposer() function, expected prototype:\nwxLogInterposer::wxLogInterposer()\nClass arguments details:\n");
		}


		return new wxLogInterposer();
	}


	// Function binds:

	// Operator binds:

};

wxLogInterposer* LunaTraits< wxLogInterposer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxLogInterposer::_bind_ctor(L);
}

void LunaTraits< wxLogInterposer >::_bind_dtor(wxLogInterposer* obj) {
	delete obj;
}

const char LunaTraits< wxLogInterposer >::className[] = "wxLogInterposer";
const char LunaTraits< wxLogInterposer >::fullName[] = "wxLogInterposer";
const char LunaTraits< wxLogInterposer >::moduleName[] = "wx";
const char* LunaTraits< wxLogInterposer >::parents[] = {"wx.wxLogChain", 0};
const int LunaTraits< wxLogInterposer >::hash = 78430902;
const int LunaTraits< wxLogInterposer >::uniqueIDs[] = {13550494,0};

luna_RegType LunaTraits< wxLogInterposer >::methods[] = {
	{"__eq", &luna_wrapper_wxLogInterposer::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxLogInterposer >::converters[] = {
	{"wxLog", &luna_wrapper_wxLogInterposer::_cast_from_wxLog},
	{0,0}
};

luna_RegEnumType LunaTraits< wxLogInterposer >::enumValues[] = {
	{0,0}
};


