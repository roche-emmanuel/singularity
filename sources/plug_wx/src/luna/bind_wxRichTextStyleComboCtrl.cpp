#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRichTextStyleComboCtrl.h>

class luna_wrapper_wxRichTextStyleComboCtrl {
public:
	typedef Luna< wxRichTextStyleComboCtrl > luna_t;

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
		//wxRichTextStyleComboCtrl* ptr= dynamic_cast< wxRichTextStyleComboCtrl* >(Luna< wxObject >::check(L,1));
		wxRichTextStyleComboCtrl* ptr= luna_caster< wxObject, wxRichTextStyleComboCtrl >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextStyleComboCtrl >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTextEntry(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxRichTextStyleComboCtrl* ptr= dynamic_cast< wxRichTextStyleComboCtrl* >(Luna< wxTextEntry >::check(L,1));
		wxRichTextStyleComboCtrl* ptr= luna_caster< wxTextEntry, wxRichTextStyleComboCtrl >::cast(Luna< wxTextEntry >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextStyleComboCtrl >::push(L,ptr,false);
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

wxRichTextStyleComboCtrl* LunaTraits< wxRichTextStyleComboCtrl >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextStyleComboCtrl >::_bind_dtor(wxRichTextStyleComboCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextStyleComboCtrl >::className[] = "wxRichTextStyleComboCtrl";
const char LunaTraits< wxRichTextStyleComboCtrl >::fullName[] = "wxRichTextStyleComboCtrl";
const char LunaTraits< wxRichTextStyleComboCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextStyleComboCtrl >::parents[] = {"wx.wxComboCtrl", 0};
const int LunaTraits< wxRichTextStyleComboCtrl >::hash = 40684325;
const int LunaTraits< wxRichTextStyleComboCtrl >::uniqueIDs[] = {56813631, 53506535, 54144136,0};

luna_RegType LunaTraits< wxRichTextStyleComboCtrl >::methods[] = {
	{"__eq", &luna_wrapper_wxRichTextStyleComboCtrl::_bind___eq},
	{"getTable", &luna_wrapper_wxRichTextStyleComboCtrl::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextStyleComboCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextStyleComboCtrl::_cast_from_wxObject},
	{"wxTextEntry", &luna_wrapper_wxRichTextStyleComboCtrl::_cast_from_wxTextEntry},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextStyleComboCtrl >::enumValues[] = {
	{0,0}
};


