#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRichTextFileHandler.h>

class luna_wrapper_wxRichTextFileHandler {
public:
	typedef Luna< wxRichTextFileHandler > luna_t;

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
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		wxRichTextFileHandler* self= (wxRichTextFileHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxRichTextFileHandler >::push(L,self,false);
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
		//wxRichTextFileHandler* ptr= dynamic_cast< wxRichTextFileHandler* >(Luna< wxObject >::check(L,1));
		wxRichTextFileHandler* ptr= luna_caster< wxObject, wxRichTextFileHandler >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextFileHandler >::push(L,ptr,false);
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

wxRichTextFileHandler* LunaTraits< wxRichTextFileHandler >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxRichTextFileHandler::SetVisible(bool visible)
}

void LunaTraits< wxRichTextFileHandler >::_bind_dtor(wxRichTextFileHandler* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextFileHandler >::className[] = "wxRichTextFileHandler";
const char LunaTraits< wxRichTextFileHandler >::fullName[] = "wxRichTextFileHandler";
const char LunaTraits< wxRichTextFileHandler >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextFileHandler >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxRichTextFileHandler >::hash = 2447421;
const int LunaTraits< wxRichTextFileHandler >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextFileHandler >::methods[] = {
	{"__eq", &luna_wrapper_wxRichTextFileHandler::_bind___eq},
	{"fromVoid", &luna_wrapper_wxRichTextFileHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxRichTextFileHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_wxRichTextFileHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextFileHandler >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextFileHandler::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextFileHandler >::enumValues[] = {
	{0,0}
};


