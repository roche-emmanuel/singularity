#include <plug_common.h>

class luna_wrapper_wxLogTextCtrl {
public:
	typedef Luna< wxLogTextCtrl > luna_t;

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
		wxLogTextCtrl* ptr= dynamic_cast< wxLogTextCtrl* >(Luna< wxLog >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxLogTextCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxLogTextCtrl::wxLogTextCtrl(wxTextCtrl * pTextCtrl)
	static wxLogTextCtrl* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLogTextCtrl::wxLogTextCtrl(wxTextCtrl * pTextCtrl) function, expected prototype:\nwxLogTextCtrl::wxLogTextCtrl(wxTextCtrl * pTextCtrl)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxTextCtrl* pTextCtrl=dynamic_cast< wxTextCtrl* >(Luna< wxObject >::check(L,1));

		return new wxLogTextCtrl(pTextCtrl);
	}


	// Function binds:

	// Operator binds:

};

wxLogTextCtrl* LunaTraits< wxLogTextCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxLogTextCtrl::_bind_ctor(L);
}

void LunaTraits< wxLogTextCtrl >::_bind_dtor(wxLogTextCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxLogTextCtrl >::className[] = "wxLogTextCtrl";
const char LunaTraits< wxLogTextCtrl >::fullName[] = "wxLogTextCtrl";
const char LunaTraits< wxLogTextCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxLogTextCtrl >::parents[] = {"wx.wxLog", 0};
const int LunaTraits< wxLogTextCtrl >::hash = 74082061;
const int LunaTraits< wxLogTextCtrl >::uniqueIDs[] = {13550494,0};

luna_RegType LunaTraits< wxLogTextCtrl >::methods[] = {
	{"__eq", &luna_wrapper_wxLogTextCtrl::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxLogTextCtrl >::converters[] = {
	{"wxLog", &luna_wrapper_wxLogTextCtrl::_cast_from_wxLog},
	{0,0}
};

luna_RegEnumType LunaTraits< wxLogTextCtrl >::enumValues[] = {
	{0,0}
};


