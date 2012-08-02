#include <plug_common.h>

class luna_wrapper_wxStringOutputStream {
public:
	typedef Luna< wxStringOutputStream > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxStringOutputStream* ptr= dynamic_cast< wxStringOutputStream* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxStringOutputStream >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// const wxString & wxStringOutputStream::GetString() const
	static int _bind_GetString(lua_State *L) {
		if (!_lg_typecheck_GetString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxStringOutputStream::GetString() const function, expected prototype:\nconst wxString & wxStringOutputStream::GetString() const\nClass arguments details:\n");
		}


		wxStringOutputStream* self=dynamic_cast< wxStringOutputStream* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxStringOutputStream::GetString() const");
		}
		const wxString & lret = self->GetString();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxStringOutputStream* LunaTraits< wxStringOutputStream >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxStringOutputStream >::_bind_dtor(wxStringOutputStream* obj) {
	delete obj;
}

const char LunaTraits< wxStringOutputStream >::className[] = "wxStringOutputStream";
const char LunaTraits< wxStringOutputStream >::fullName[] = "wxStringOutputStream";
const char LunaTraits< wxStringOutputStream >::moduleName[] = "wx";
const char* LunaTraits< wxStringOutputStream >::parents[] = {"wx.wxOutputStream", 0};
const int LunaTraits< wxStringOutputStream >::hash = 27924621;
const int LunaTraits< wxStringOutputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxStringOutputStream >::methods[] = {
	{"GetString", &luna_wrapper_wxStringOutputStream::_bind_GetString},
	{0,0}
};

luna_ConverterType LunaTraits< wxStringOutputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxStringOutputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxStringOutputStream >::enumValues[] = {
	{0,0}
};


