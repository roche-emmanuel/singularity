#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRichTextFormattingDialog.h>

class luna_wrapper_wxRichTextFormattingDialog {
public:
	typedef Luna< wxRichTextFormattingDialog > luna_t;

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

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		wxRichTextFormattingDialog* self= (wxRichTextFormattingDialog*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxRichTextFormattingDialog >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxRichTextFormattingDialog* ptr= dynamic_cast< wxRichTextFormattingDialog* >(Luna< wxObject >::check(L,1));
		wxRichTextFormattingDialog* ptr= luna_caster< wxObject, wxRichTextFormattingDialog >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextFormattingDialog >::push(L,ptr,false);
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

wxRichTextFormattingDialog* LunaTraits< wxRichTextFormattingDialog >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextFormattingDialog >::_bind_dtor(wxRichTextFormattingDialog* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextFormattingDialog >::className[] = "wxRichTextFormattingDialog";
const char LunaTraits< wxRichTextFormattingDialog >::fullName[] = "wxRichTextFormattingDialog";
const char LunaTraits< wxRichTextFormattingDialog >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextFormattingDialog >::parents[] = {"wx.wxPropertySheetDialog", 0};
const int LunaTraits< wxRichTextFormattingDialog >::hash = 39951274;
const int LunaTraits< wxRichTextFormattingDialog >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxRichTextFormattingDialog >::methods[] = {
	{"__eq", &luna_wrapper_wxRichTextFormattingDialog::_bind___eq},
	{"fromVoid", &luna_wrapper_wxRichTextFormattingDialog::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxRichTextFormattingDialog::_bind_asVoid},
	{"getTable", &luna_wrapper_wxRichTextFormattingDialog::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextFormattingDialog >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextFormattingDialog::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextFormattingDialog >::enumValues[] = {
	{0,0}
};


