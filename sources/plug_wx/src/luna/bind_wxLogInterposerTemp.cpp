#include <plug_common.h>

class luna_wrapper_wxLogInterposerTemp {
public:
	typedef Luna< wxLogInterposerTemp > luna_t;

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
		wxLogInterposerTemp* ptr= dynamic_cast< wxLogInterposerTemp* >(Luna< wxLog >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxLogInterposerTemp >::push(L,ptr,false);
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
	// wxLogInterposerTemp::wxLogInterposerTemp()
	static wxLogInterposerTemp* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLogInterposerTemp::wxLogInterposerTemp() function, expected prototype:\nwxLogInterposerTemp::wxLogInterposerTemp()\nClass arguments details:\n");
		}


		return new wxLogInterposerTemp();
	}


	// Function binds:

	// Operator binds:

};

wxLogInterposerTemp* LunaTraits< wxLogInterposerTemp >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxLogInterposerTemp::_bind_ctor(L);
}

void LunaTraits< wxLogInterposerTemp >::_bind_dtor(wxLogInterposerTemp* obj) {
	delete obj;
}

const char LunaTraits< wxLogInterposerTemp >::className[] = "wxLogInterposerTemp";
const char LunaTraits< wxLogInterposerTemp >::fullName[] = "wxLogInterposerTemp";
const char LunaTraits< wxLogInterposerTemp >::moduleName[] = "wx";
const char* LunaTraits< wxLogInterposerTemp >::parents[] = {"wx.wxLogChain", 0};
const int LunaTraits< wxLogInterposerTemp >::hash = 76049695;
const int LunaTraits< wxLogInterposerTemp >::uniqueIDs[] = {13550494,0};

luna_RegType LunaTraits< wxLogInterposerTemp >::methods[] = {
	{"__eq", &luna_wrapper_wxLogInterposerTemp::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxLogInterposerTemp >::converters[] = {
	{"wxLog", &luna_wrapper_wxLogInterposerTemp::_cast_from_wxLog},
	{0,0}
};

luna_RegEnumType LunaTraits< wxLogInterposerTemp >::enumValues[] = {
	{0,0}
};


