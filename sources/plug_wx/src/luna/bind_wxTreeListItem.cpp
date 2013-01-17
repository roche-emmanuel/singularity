#include <plug_common.h>

class luna_wrapper_wxTreeListItem {
public:
	typedef Luna< wxTreeListItem > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,75268455) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTreeListItem*)");
		}

		wxTreeListItem* rhs =(Luna< wxTreeListItem >::check(L,2));
		wxTreeListItem* self=(Luna< wxTreeListItem >::check(L,1));
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

		wxTreeListItem* self=(Luna< wxTreeListItem >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTreeListItem");
		
		return luna_dynamicCast(L,converters,"wxTreeListItem",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTreeListItem::wxTreeListItem()
	static wxTreeListItem* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeListItem::wxTreeListItem() function, expected prototype:\nwxTreeListItem::wxTreeListItem()\nClass arguments details:\n");
		}


		return new wxTreeListItem();
	}


	// Function binds:
	// bool wxTreeListItem::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTreeListItem::IsOk() const function, expected prototype:\nbool wxTreeListItem::IsOk() const\nClass arguments details:\n");
		}


		wxTreeListItem* self=(Luna< wxTreeListItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTreeListItem::IsOk() const. Got : '%s'",typeid(Luna< wxTreeListItem >::check(L,1)).name());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxTreeListItem* LunaTraits< wxTreeListItem >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTreeListItem::_bind_ctor(L);
}

void LunaTraits< wxTreeListItem >::_bind_dtor(wxTreeListItem* obj) {
	delete obj;
}

const char LunaTraits< wxTreeListItem >::className[] = "wxTreeListItem";
const char LunaTraits< wxTreeListItem >::fullName[] = "wxTreeListItem";
const char LunaTraits< wxTreeListItem >::moduleName[] = "wx";
const char* LunaTraits< wxTreeListItem >::parents[] = {0};
const int LunaTraits< wxTreeListItem >::hash = 75268455;
const int LunaTraits< wxTreeListItem >::uniqueIDs[] = {75268455,0};

luna_RegType LunaTraits< wxTreeListItem >::methods[] = {
	{"IsOk", &luna_wrapper_wxTreeListItem::_bind_IsOk},
	{"dynCast", &luna_wrapper_wxTreeListItem::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTreeListItem::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxTreeListItem >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTreeListItem >::enumValues[] = {
	{0,0}
};


