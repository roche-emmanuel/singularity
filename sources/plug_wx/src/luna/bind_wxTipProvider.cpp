#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTipProvider.h>

class luna_wrapper_wxTipProvider {
public:
	typedef Luna< wxTipProvider > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxTipProvider* self=(Luna< wxTipProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxTipProvider,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,98652564) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTipProvider*)");
		}

		wxTipProvider* rhs =(Luna< wxTipProvider >::check(L,2));
		wxTipProvider* self=(Luna< wxTipProvider >::check(L,1));
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

		wxTipProvider* self=(Luna< wxTipProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTipProvider");
		
		return luna_dynamicCast(L,converters,"wxTipProvider",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetCurrentTip(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTip(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTipProvider::wxTipProvider(lua_Table * data, size_t currentTip)
	static wxTipProvider* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTipProvider::wxTipProvider(lua_Table * data, size_t currentTip) function, expected prototype:\nwxTipProvider::wxTipProvider(lua_Table * data, size_t currentTip)\nClass arguments details:\n");
		}

		size_t currentTip=(size_t)lua_tointeger(L,2);

		return new wrapper_wxTipProvider(L,NULL, currentTip);
	}


	// Function binds:
	// size_t wxTipProvider::GetCurrentTip() const
	static int _bind_GetCurrentTip(lua_State *L) {
		if (!_lg_typecheck_GetCurrentTip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxTipProvider::GetCurrentTip() const function, expected prototype:\nsize_t wxTipProvider::GetCurrentTip() const\nClass arguments details:\n");
		}


		wxTipProvider* self=(Luna< wxTipProvider >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxTipProvider::GetCurrentTip() const. Got : '%s'",typeid(Luna< wxTipProvider >::check(L,1)).name());
		}
		size_t lret = self->GetCurrentTip();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxTipProvider::GetTip()
	static int _bind_GetTip(lua_State *L) {
		if (!_lg_typecheck_GetTip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxTipProvider::GetTip() function, expected prototype:\nwxString wxTipProvider::GetTip()\nClass arguments details:\n");
		}


		wxTipProvider* self=(Luna< wxTipProvider >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxTipProvider::GetTip(). Got : '%s'",typeid(Luna< wxTipProvider >::check(L,1)).name());
		}
		wxString lret = self->GetTip();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxTipProvider* LunaTraits< wxTipProvider >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTipProvider::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxString wxTipProvider::GetTip()
}

void LunaTraits< wxTipProvider >::_bind_dtor(wxTipProvider* obj) {
	delete obj;
}

const char LunaTraits< wxTipProvider >::className[] = "wxTipProvider";
const char LunaTraits< wxTipProvider >::fullName[] = "wxTipProvider";
const char LunaTraits< wxTipProvider >::moduleName[] = "wx";
const char* LunaTraits< wxTipProvider >::parents[] = {0};
const int LunaTraits< wxTipProvider >::hash = 98652564;
const int LunaTraits< wxTipProvider >::uniqueIDs[] = {98652564,0};

luna_RegType LunaTraits< wxTipProvider >::methods[] = {
	{"GetCurrentTip", &luna_wrapper_wxTipProvider::_bind_GetCurrentTip},
	{"GetTip", &luna_wrapper_wxTipProvider::_bind_GetTip},
	{"dynCast", &luna_wrapper_wxTipProvider::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTipProvider::_bind___eq},
	{"getTable", &luna_wrapper_wxTipProvider::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxTipProvider >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTipProvider >::enumValues[] = {
	{0,0}
};


