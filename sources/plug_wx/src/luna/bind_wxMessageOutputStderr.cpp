#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMessageOutputStderr.h>

class luna_wrapper_wxMessageOutputStderr {
public:
	typedef Luna< wxMessageOutputStderr > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxMessageOutput* self=(Luna< wxMessageOutput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,42086186) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxMessageOutput*)");
		}

		wxMessageOutput* rhs =(Luna< wxMessageOutput >::check(L,2));
		wxMessageOutput* self=(Luna< wxMessageOutput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxMessageOutput(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxMessageOutputStderr* ptr= dynamic_cast< wxMessageOutputStderr* >(Luna< wxMessageOutput >::check(L,1));
		wxMessageOutputStderr* ptr= luna_caster< wxMessageOutput, wxMessageOutputStderr >::cast(Luna< wxMessageOutput >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMessageOutputStderr >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxMessageOutputStderr* LunaTraits< wxMessageOutputStderr >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxMessageOutput::Output(const wxString & str)
}

void LunaTraits< wxMessageOutputStderr >::_bind_dtor(wxMessageOutputStderr* obj) {
	delete obj;
}

const char LunaTraits< wxMessageOutputStderr >::className[] = "wxMessageOutputStderr";
const char LunaTraits< wxMessageOutputStderr >::fullName[] = "wxMessageOutputStderr";
const char LunaTraits< wxMessageOutputStderr >::moduleName[] = "wx";
const char* LunaTraits< wxMessageOutputStderr >::parents[] = {"wx.wxMessageOutput", 0};
const int LunaTraits< wxMessageOutputStderr >::hash = 2637053;
const int LunaTraits< wxMessageOutputStderr >::uniqueIDs[] = {42086186,0};

luna_RegType LunaTraits< wxMessageOutputStderr >::methods[] = {
	{"__eq", &luna_wrapper_wxMessageOutputStderr::_bind___eq},
	{"getTable", &luna_wrapper_wxMessageOutputStderr::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxMessageOutputStderr >::converters[] = {
	{"wxMessageOutput", &luna_wrapper_wxMessageOutputStderr::_cast_from_wxMessageOutput},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMessageOutputStderr >::enumValues[] = {
	{0,0}
};


