#include <plug_common.h>

class luna_wrapper_wxTreeItemId {
public:
	typedef Luna< wxTreeItemId > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,28400299) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTreeItemId*)");
		}

		wxTreeItemId* rhs =(Luna< wxTreeItemId >::check(L,2));
		wxTreeItemId* self=(Luna< wxTreeItemId >::check(L,1));
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

		wxTreeItemId* self=(Luna< wxTreeItemId >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTreeItemId");
		
		return luna_dynamicCast(L,converters,"wxTreeItemId",name);
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
	// wxTreeItemId::wxTreeItemId()
	static wxTreeItemId* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeItemId::wxTreeItemId() function, expected prototype:\nwxTreeItemId::wxTreeItemId()\nClass arguments details:\n");
		}


		return new wxTreeItemId();
	}


	// Function binds:
	// bool wxTreeItemId::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTreeItemId::IsOk() const function, expected prototype:\nbool wxTreeItemId::IsOk() const\nClass arguments details:\n");
		}


		wxTreeItemId* self=(Luna< wxTreeItemId >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTreeItemId::IsOk() const");
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxTreeItemId* LunaTraits< wxTreeItemId >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTreeItemId::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxTreeItemId >::_bind_dtor(wxTreeItemId* obj) {
	delete obj;
}

const char LunaTraits< wxTreeItemId >::className[] = "wxTreeItemId";
const char LunaTraits< wxTreeItemId >::fullName[] = "wxTreeItemId";
const char LunaTraits< wxTreeItemId >::moduleName[] = "wx";
const char* LunaTraits< wxTreeItemId >::parents[] = {0};
const int LunaTraits< wxTreeItemId >::hash = 28400299;
const int LunaTraits< wxTreeItemId >::uniqueIDs[] = {28400299,0};

luna_RegType LunaTraits< wxTreeItemId >::methods[] = {
	{"IsOk", &luna_wrapper_wxTreeItemId::_bind_IsOk},
	{"dynCast", &luna_wrapper_wxTreeItemId::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTreeItemId::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxTreeItemId >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTreeItemId >::enumValues[] = {
	{0,0}
};


