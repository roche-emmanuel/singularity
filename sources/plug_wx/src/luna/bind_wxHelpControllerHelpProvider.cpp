#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHelpControllerHelpProvider.h>

class luna_wrapper_wxHelpControllerHelpProvider {
public:
	typedef Luna< wxHelpControllerHelpProvider > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,7267466) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxHelpProvider*)");
		}

		wxHelpProvider* rhs =(Luna< wxHelpProvider >::check(L,2));
		wxHelpProvider* self=(Luna< wxHelpProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxHelpProvider(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxHelpControllerHelpProvider* ptr= dynamic_cast< wxHelpControllerHelpProvider* >(Luna< wxHelpProvider >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHelpControllerHelpProvider >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_SetHelpController(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,15941327)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void wxHelpControllerHelpProvider::SetHelpController(wxHelpController * hc)
	static int _bind_SetHelpController(lua_State *L) {
		if (!_lg_typecheck_SetHelpController(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHelpControllerHelpProvider::SetHelpController(wxHelpController * hc) function, expected prototype:\nvoid wxHelpControllerHelpProvider::SetHelpController(wxHelpController * hc)\nClass arguments details:\narg 1 ID = 15941327\n");
		}

		wxHelpController* hc=(Luna< wxHelpController >::check(L,2));

		wxHelpControllerHelpProvider* self=dynamic_cast< wxHelpControllerHelpProvider* >(Luna< wxHelpProvider >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHelpControllerHelpProvider::SetHelpController(wxHelpController *)");
		}
		self->SetHelpController(hc);

		return 0;
	}


	// Operator binds:

};

wxHelpControllerHelpProvider* LunaTraits< wxHelpControllerHelpProvider >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxString wxHelpProvider::GetHelp(const wxWindow * window)
}

void LunaTraits< wxHelpControllerHelpProvider >::_bind_dtor(wxHelpControllerHelpProvider* obj) {
	delete obj;
}

const char LunaTraits< wxHelpControllerHelpProvider >::className[] = "wxHelpControllerHelpProvider";
const char LunaTraits< wxHelpControllerHelpProvider >::fullName[] = "wxHelpControllerHelpProvider";
const char LunaTraits< wxHelpControllerHelpProvider >::moduleName[] = "wx";
const char* LunaTraits< wxHelpControllerHelpProvider >::parents[] = {"wx.wxSimpleHelpProvider", 0};
const int LunaTraits< wxHelpControllerHelpProvider >::hash = 92239384;
const int LunaTraits< wxHelpControllerHelpProvider >::uniqueIDs[] = {7267466,0};

luna_RegType LunaTraits< wxHelpControllerHelpProvider >::methods[] = {
	{"SetHelpController", &luna_wrapper_wxHelpControllerHelpProvider::_bind_SetHelpController},
	{"__eq", &luna_wrapper_wxHelpControllerHelpProvider::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxHelpControllerHelpProvider >::converters[] = {
	{"wxHelpProvider", &luna_wrapper_wxHelpControllerHelpProvider::_cast_from_wxHelpProvider},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHelpControllerHelpProvider >::enumValues[] = {
	{0,0}
};


