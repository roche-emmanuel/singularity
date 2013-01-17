#include <plug_common.h>

class luna_wrapper_wxIdManager {
public:
	typedef Luna< wxIdManager > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71701647) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxIdManager*)");
		}

		wxIdManager* rhs =(Luna< wxIdManager >::check(L,2));
		wxIdManager* self=(Luna< wxIdManager >::check(L,1));
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

		wxIdManager* self=(Luna< wxIdManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxIdManager");
		
		return luna_dynamicCast(L,converters,"wxIdManager",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_ReserveId(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UnreserveId(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static int wxIdManager::ReserveId(int count = 1)
	static int _bind_ReserveId(lua_State *L) {
		if (!_lg_typecheck_ReserveId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static int wxIdManager::ReserveId(int count = 1) function, expected prototype:\nstatic int wxIdManager::ReserveId(int count = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int count=luatop>0 ? (int)lua_tointeger(L,1) : 1;

		int lret = wxIdManager::ReserveId(count);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void wxIdManager::UnreserveId(int id, int count = 1)
	static int _bind_UnreserveId(lua_State *L) {
		if (!_lg_typecheck_UnreserveId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxIdManager::UnreserveId(int id, int count = 1) function, expected prototype:\nstatic void wxIdManager::UnreserveId(int id, int count = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int id=(int)lua_tointeger(L,1);
		int count=luatop>1 ? (int)lua_tointeger(L,2) : 1;

		wxIdManager::UnreserveId(id, count);

		return 0;
	}


	// Operator binds:

};

wxIdManager* LunaTraits< wxIdManager >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxIdManager >::_bind_dtor(wxIdManager* obj) {
	delete obj;
}

const char LunaTraits< wxIdManager >::className[] = "wxIdManager";
const char LunaTraits< wxIdManager >::fullName[] = "wxIdManager";
const char LunaTraits< wxIdManager >::moduleName[] = "wx";
const char* LunaTraits< wxIdManager >::parents[] = {0};
const int LunaTraits< wxIdManager >::hash = 71701647;
const int LunaTraits< wxIdManager >::uniqueIDs[] = {71701647,0};

luna_RegType LunaTraits< wxIdManager >::methods[] = {
	{"ReserveId", &luna_wrapper_wxIdManager::_bind_ReserveId},
	{"UnreserveId", &luna_wrapper_wxIdManager::_bind_UnreserveId},
	{"dynCast", &luna_wrapper_wxIdManager::_bind_dynCast},
	{"__eq", &luna_wrapper_wxIdManager::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxIdManager >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxIdManager >::enumValues[] = {
	{0,0}
};


