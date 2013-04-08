#include <plug_common.h>

class luna_wrapper_wxRichTextAttr {
public:
	typedef Luna< wxRichTextAttr > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,37117058) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTextAttr*)");
		}

		wxTextAttr* rhs =(Luna< wxTextAttr >::check(L,2));
		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
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

		wxRichTextAttr* self= (wxRichTextAttr*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxRichTextAttr >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,37117058) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:

	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxRichTextAttr* LunaTraits< wxRichTextAttr >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextAttr >::_bind_dtor(wxRichTextAttr* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextAttr >::className[] = "wxRichTextAttr";
const char LunaTraits< wxRichTextAttr >::fullName[] = "wxRichTextAttr";
const char LunaTraits< wxRichTextAttr >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextAttr >::parents[] = {"wx.wxTextAttr", 0};
const int LunaTraits< wxRichTextAttr >::hash = 86201242;
const int LunaTraits< wxRichTextAttr >::uniqueIDs[] = {37117058,0};

luna_RegType LunaTraits< wxRichTextAttr >::methods[] = {
	{"__eq", &luna_wrapper_wxRichTextAttr::_bind___eq},
	{"fromVoid", &luna_wrapper_wxRichTextAttr::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxRichTextAttr::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextAttr >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextAttr >::enumValues[] = {
	{0,0}
};


