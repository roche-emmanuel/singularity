#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRichTextCtrl.h>

class luna_wrapper_wxRichTextCtrl {
public:
	typedef Luna< wxRichTextCtrl > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
		//wxRichTextCtrl* ptr= dynamic_cast< wxRichTextCtrl* >(Luna< wxObject >::check(L,1));
		wxRichTextCtrl* ptr= luna_caster< wxObject, wxRichTextCtrl >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxRichTextCtrl* LunaTraits< wxRichTextCtrl >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextCtrl >::_bind_dtor(wxRichTextCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextCtrl >::className[] = "wxRichTextCtrl";
const char LunaTraits< wxRichTextCtrl >::fullName[] = "wxRichTextCtrl";
const char LunaTraits< wxRichTextCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextCtrl >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxRichTextCtrl >::hash = 86260756;
const int LunaTraits< wxRichTextCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxRichTextCtrl >::methods[] = {
	{"__eq", &luna_wrapper_wxRichTextCtrl::_bind___eq},
	{"getTable", &luna_wrapper_wxRichTextCtrl::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextCtrl >::enumValues[] = {
	{0,0}
};


