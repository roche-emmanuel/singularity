#include <plug_common.h>

class luna_wrapper_wxSocketOutputStream {
public:
	typedef Luna< wxSocketOutputStream > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxSocketOutputStream* ptr= dynamic_cast< wxSocketOutputStream* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSocketOutputStream >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSocketOutputStream::wxSocketOutputStream(wxSocketBase & s)
	static wxSocketOutputStream* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSocketOutputStream::wxSocketOutputStream(wxSocketBase & s) function, expected prototype:\nwxSocketOutputStream::wxSocketOutputStream(wxSocketBase & s)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxSocketBase* s_ptr=dynamic_cast< wxSocketBase* >(Luna< wxObject >::check(L,1));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in wxSocketOutputStream::wxSocketOutputStream function");
		}
		wxSocketBase & s=*s_ptr;

		return new wxSocketOutputStream(s);
	}


	// Function binds:

	// Operator binds:

};

wxSocketOutputStream* LunaTraits< wxSocketOutputStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSocketOutputStream::_bind_ctor(L);
}

void LunaTraits< wxSocketOutputStream >::_bind_dtor(wxSocketOutputStream* obj) {
	delete obj;
}

const char LunaTraits< wxSocketOutputStream >::className[] = "wxSocketOutputStream";
const char LunaTraits< wxSocketOutputStream >::fullName[] = "wxSocketOutputStream";
const char LunaTraits< wxSocketOutputStream >::moduleName[] = "wx";
const char* LunaTraits< wxSocketOutputStream >::parents[] = {"wx.wxOutputStream", 0};
const int LunaTraits< wxSocketOutputStream >::hash = 46772636;
const int LunaTraits< wxSocketOutputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSocketOutputStream >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxSocketOutputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxSocketOutputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSocketOutputStream >::enumValues[] = {
	{0,0}
};

