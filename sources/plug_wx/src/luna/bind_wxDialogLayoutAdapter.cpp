#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDialogLayoutAdapter.h>

class luna_wrapper_wxDialogLayoutAdapter {
public:
	typedef Luna< wxDialogLayoutAdapter > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,64729109) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDialogLayoutAdapter*)");
		}

		wxDialogLayoutAdapter* rhs =(Luna< wxDialogLayoutAdapter >::check(L,2));
		wxDialogLayoutAdapter* self=(Luna< wxDialogLayoutAdapter >::check(L,1));
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

		wxDialogLayoutAdapter* self=(Luna< wxDialogLayoutAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDialogLayoutAdapter");
		
		return luna_dynamicCast(L,converters,"wxDialogLayoutAdapter",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_CanDoLayoutAdaptation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DoLayoutAdaptation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxDialogLayoutAdapter::CanDoLayoutAdaptation(wxDialog * dialog)
	static int _bind_CanDoLayoutAdaptation(lua_State *L) {
		if (!_lg_typecheck_CanDoLayoutAdaptation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDialogLayoutAdapter::CanDoLayoutAdaptation(wxDialog * dialog) function, expected prototype:\nbool wxDialogLayoutAdapter::CanDoLayoutAdaptation(wxDialog * dialog)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxDialog* dialog=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,2));

		wxDialogLayoutAdapter* self=(Luna< wxDialogLayoutAdapter >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDialogLayoutAdapter::CanDoLayoutAdaptation(wxDialog *)");
		}
		bool lret = self->CanDoLayoutAdaptation(dialog);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDialogLayoutAdapter::DoLayoutAdaptation(wxDialog * dialog)
	static int _bind_DoLayoutAdaptation(lua_State *L) {
		if (!_lg_typecheck_DoLayoutAdaptation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDialogLayoutAdapter::DoLayoutAdaptation(wxDialog * dialog) function, expected prototype:\nbool wxDialogLayoutAdapter::DoLayoutAdaptation(wxDialog * dialog)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxDialog* dialog=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,2));

		wxDialogLayoutAdapter* self=(Luna< wxDialogLayoutAdapter >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDialogLayoutAdapter::DoLayoutAdaptation(wxDialog *)");
		}
		bool lret = self->DoLayoutAdaptation(dialog);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxDialogLayoutAdapter* LunaTraits< wxDialogLayoutAdapter >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxDialogLayoutAdapter::CanDoLayoutAdaptation(wxDialog * dialog)
	// bool wxDialogLayoutAdapter::DoLayoutAdaptation(wxDialog * dialog)
}

void LunaTraits< wxDialogLayoutAdapter >::_bind_dtor(wxDialogLayoutAdapter* obj) {
	delete obj;
}

const char LunaTraits< wxDialogLayoutAdapter >::className[] = "wxDialogLayoutAdapter";
const char LunaTraits< wxDialogLayoutAdapter >::fullName[] = "wxDialogLayoutAdapter";
const char LunaTraits< wxDialogLayoutAdapter >::moduleName[] = "wx";
const char* LunaTraits< wxDialogLayoutAdapter >::parents[] = {0};
const int LunaTraits< wxDialogLayoutAdapter >::hash = 64729109;
const int LunaTraits< wxDialogLayoutAdapter >::uniqueIDs[] = {64729109,0};

luna_RegType LunaTraits< wxDialogLayoutAdapter >::methods[] = {
	{"CanDoLayoutAdaptation", &luna_wrapper_wxDialogLayoutAdapter::_bind_CanDoLayoutAdaptation},
	{"DoLayoutAdaptation", &luna_wrapper_wxDialogLayoutAdapter::_bind_DoLayoutAdaptation},
	{"dynCast", &luna_wrapper_wxDialogLayoutAdapter::_bind_dynCast},
	{"__eq", &luna_wrapper_wxDialogLayoutAdapter::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxDialogLayoutAdapter >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDialogLayoutAdapter >::enumValues[] = {
	{0,0}
};


