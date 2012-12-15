#include <plug_common.h>

#include <luna/wrappers/wrapper_wxLogStderr.h>

class luna_wrapper_wxLogStderr {
public:
	typedef Luna< wxLogStderr > luna_t;

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
		//wxLogStderr* ptr= dynamic_cast< wxLogStderr* >(Luna< wxLog >::check(L,1));
		wxLogStderr* ptr= luna_caster< wxLog, wxLogStderr >::cast(Luna< wxLog >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxLogStderr >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_base_Flush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void wxLogStderr::base_Flush()
	static int _bind_base_Flush(lua_State *L) {
		if (!_lg_typecheck_base_Flush(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxLogStderr::base_Flush() function, expected prototype:\nvoid wxLogStderr::base_Flush()\nClass arguments details:\n");
		}


		wxLogStderr* self=Luna< wxLog >::checkSubType< wxLogStderr >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxLogStderr::base_Flush()");
		}
		self->wxLogStderr::Flush();

		return 0;
	}


	// Operator binds:

};

wxLogStderr* LunaTraits< wxLogStderr >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxLogStderr >::_bind_dtor(wxLogStderr* obj) {
	delete obj;
}

const char LunaTraits< wxLogStderr >::className[] = "wxLogStderr";
const char LunaTraits< wxLogStderr >::fullName[] = "wxLogStderr";
const char LunaTraits< wxLogStderr >::moduleName[] = "wx";
const char* LunaTraits< wxLogStderr >::parents[] = {"wx.wxLog", 0};
const int LunaTraits< wxLogStderr >::hash = 63255974;
const int LunaTraits< wxLogStderr >::uniqueIDs[] = {13550494,0};

luna_RegType LunaTraits< wxLogStderr >::methods[] = {
	{"base_Flush", &luna_wrapper_wxLogStderr::_bind_base_Flush},
	{"__eq", &luna_wrapper_wxLogStderr::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxLogStderr >::converters[] = {
	{"wxLog", &luna_wrapper_wxLogStderr::_cast_from_wxLog},
	{0,0}
};

luna_RegEnumType LunaTraits< wxLogStderr >::enumValues[] = {
	{0,0}
};


