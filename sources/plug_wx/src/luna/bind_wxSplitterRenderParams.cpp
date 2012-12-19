#include <plug_common.h>

class luna_wrapper_wxSplitterRenderParams {
public:
	typedef Luna< wxSplitterRenderParams > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3273090) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxSplitterRenderParams*)");
		}

		wxSplitterRenderParams* rhs =(Luna< wxSplitterRenderParams >::check(L,2));
		wxSplitterRenderParams* self=(Luna< wxSplitterRenderParams >::check(L,1));
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

		wxSplitterRenderParams* self=(Luna< wxSplitterRenderParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxSplitterRenderParams");
		
		return luna_dynamicCast(L,converters,"wxSplitterRenderParams",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSplitterRenderParams::wxSplitterRenderParams(int widthSash_, int border_, bool isSens_)
	static wxSplitterRenderParams* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSplitterRenderParams::wxSplitterRenderParams(int widthSash_, int border_, bool isSens_) function, expected prototype:\nwxSplitterRenderParams::wxSplitterRenderParams(int widthSash_, int border_, bool isSens_)\nClass arguments details:\n");
		}

		int widthSash_=(int)lua_tointeger(L,1);
		int border_=(int)lua_tointeger(L,2);
		bool isSens_=(bool)(lua_toboolean(L,3)==1);

		return new wxSplitterRenderParams(widthSash_, border_, isSens_);
	}


	// Function binds:

	// Operator binds:

};

wxSplitterRenderParams* LunaTraits< wxSplitterRenderParams >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSplitterRenderParams::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxSplitterRenderParams >::_bind_dtor(wxSplitterRenderParams* obj) {
	delete obj;
}

const char LunaTraits< wxSplitterRenderParams >::className[] = "wxSplitterRenderParams";
const char LunaTraits< wxSplitterRenderParams >::fullName[] = "wxSplitterRenderParams";
const char LunaTraits< wxSplitterRenderParams >::moduleName[] = "wx";
const char* LunaTraits< wxSplitterRenderParams >::parents[] = {0};
const int LunaTraits< wxSplitterRenderParams >::hash = 3273090;
const int LunaTraits< wxSplitterRenderParams >::uniqueIDs[] = {3273090,0};

luna_RegType LunaTraits< wxSplitterRenderParams >::methods[] = {
	{"dynCast", &luna_wrapper_wxSplitterRenderParams::_bind_dynCast},
	{"__eq", &luna_wrapper_wxSplitterRenderParams::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxSplitterRenderParams >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxSplitterRenderParams >::enumValues[] = {
	{0,0}
};


