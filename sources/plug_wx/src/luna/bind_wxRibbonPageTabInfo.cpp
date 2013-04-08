#include <plug_common.h>

class luna_wrapper_wxRibbonPageTabInfo {
public:
	typedef Luna< wxRibbonPageTabInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,51496344) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxRibbonPageTabInfo*)");
		}

		wxRibbonPageTabInfo* rhs =(Luna< wxRibbonPageTabInfo >::check(L,2));
		wxRibbonPageTabInfo* self=(Luna< wxRibbonPageTabInfo >::check(L,1));
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

		wxRibbonPageTabInfo* self= (wxRibbonPageTabInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxRibbonPageTabInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,51496344) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< wxRibbonPageTabInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
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

		wxRibbonPageTabInfo* self=(Luna< wxRibbonPageTabInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRibbonPageTabInfo");
		
		return luna_dynamicCast(L,converters,"wxRibbonPageTabInfo",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxRibbonPageTabInfo* LunaTraits< wxRibbonPageTabInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRibbonPageTabInfo >::_bind_dtor(wxRibbonPageTabInfo* obj) {
	delete obj;
}

const char LunaTraits< wxRibbonPageTabInfo >::className[] = "wxRibbonPageTabInfo";
const char LunaTraits< wxRibbonPageTabInfo >::fullName[] = "wxRibbonPageTabInfo";
const char LunaTraits< wxRibbonPageTabInfo >::moduleName[] = "wx";
const char* LunaTraits< wxRibbonPageTabInfo >::parents[] = {0};
const int LunaTraits< wxRibbonPageTabInfo >::hash = 51496344;
const int LunaTraits< wxRibbonPageTabInfo >::uniqueIDs[] = {51496344,0};

luna_RegType LunaTraits< wxRibbonPageTabInfo >::methods[] = {
	{"dynCast", &luna_wrapper_wxRibbonPageTabInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_wxRibbonPageTabInfo::_bind___eq},
	{"fromVoid", &luna_wrapper_wxRibbonPageTabInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxRibbonPageTabInfo::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxRibbonPageTabInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRibbonPageTabInfo >::enumValues[] = {
	{0,0}
};


