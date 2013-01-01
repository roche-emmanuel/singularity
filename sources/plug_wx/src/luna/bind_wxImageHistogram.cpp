#include <plug_common.h>

class luna_wrapper_wxImageHistogram {
public:
	typedef Luna< wxImageHistogram > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,75442299) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxImageHistogram*)");
		}

		wxImageHistogram* rhs =(Luna< wxImageHistogram >::check(L,2));
		wxImageHistogram* self=(Luna< wxImageHistogram >::check(L,1));
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

		wxImageHistogram* self=(Luna< wxImageHistogram >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxImageHistogram");
		
		return luna_dynamicCast(L,converters,"wxImageHistogram",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_FindFirstUnusedColour(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MakeKey(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxImageHistogram::wxImageHistogram()
	static wxImageHistogram* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImageHistogram::wxImageHistogram() function, expected prototype:\nwxImageHistogram::wxImageHistogram()\nClass arguments details:\n");
		}


		return new wxImageHistogram();
	}


	// Function binds:
	// bool wxImageHistogram::FindFirstUnusedColour(unsigned char * r, unsigned char * g, unsigned char * b, unsigned char startR = 1, unsigned char startG = 0, unsigned char startB = 0) const
	static int _bind_FindFirstUnusedColour(lua_State *L) {
		if (!_lg_typecheck_FindFirstUnusedColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxImageHistogram::FindFirstUnusedColour(unsigned char * r, unsigned char * g, unsigned char * b, unsigned char startR = 1, unsigned char startG = 0, unsigned char startB = 0) const function, expected prototype:\nbool wxImageHistogram::FindFirstUnusedColour(unsigned char * r, unsigned char * g, unsigned char * b, unsigned char startR = 1, unsigned char startG = 0, unsigned char startB = 0) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned char r = (unsigned char)(lua_tointeger(L,2));
		unsigned char g = (unsigned char)(lua_tointeger(L,3));
		unsigned char b = (unsigned char)(lua_tointeger(L,4));
		unsigned char startR = (unsigned char)(lua_tointeger(L,5));
		unsigned char startG = (unsigned char)(lua_tointeger(L,6));
		unsigned char startB = (unsigned char)(lua_tointeger(L,7));

		wxImageHistogram* self=(Luna< wxImageHistogram >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxImageHistogram::FindFirstUnusedColour(unsigned char *, unsigned char *, unsigned char *, unsigned char, unsigned char, unsigned char) const. Got : '%s'",typeid(Luna< wxImageHistogram >::check(L,1)).name());
		}
		bool lret = self->FindFirstUnusedColour(&r, &g, &b, startR, startG, startB);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static unsigned long wxImageHistogram::MakeKey(unsigned char r, unsigned char g, unsigned char b)
	static int _bind_MakeKey(lua_State *L) {
		if (!_lg_typecheck_MakeKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static unsigned long wxImageHistogram::MakeKey(unsigned char r, unsigned char g, unsigned char b) function, expected prototype:\nstatic unsigned long wxImageHistogram::MakeKey(unsigned char r, unsigned char g, unsigned char b)\nClass arguments details:\n");
		}

		unsigned char r = (unsigned char)(lua_tointeger(L,1));
		unsigned char g = (unsigned char)(lua_tointeger(L,2));
		unsigned char b = (unsigned char)(lua_tointeger(L,3));

		unsigned long lret = wxImageHistogram::MakeKey(r, g, b);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxImageHistogram* LunaTraits< wxImageHistogram >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxImageHistogram::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxImageHistogram >::_bind_dtor(wxImageHistogram* obj) {
	delete obj;
}

const char LunaTraits< wxImageHistogram >::className[] = "wxImageHistogram";
const char LunaTraits< wxImageHistogram >::fullName[] = "wxImageHistogram";
const char LunaTraits< wxImageHistogram >::moduleName[] = "wx";
const char* LunaTraits< wxImageHistogram >::parents[] = {0};
const int LunaTraits< wxImageHistogram >::hash = 75442299;
const int LunaTraits< wxImageHistogram >::uniqueIDs[] = {75442299,0};

luna_RegType LunaTraits< wxImageHistogram >::methods[] = {
	{"FindFirstUnusedColour", &luna_wrapper_wxImageHistogram::_bind_FindFirstUnusedColour},
	{"MakeKey", &luna_wrapper_wxImageHistogram::_bind_MakeKey},
	{"dynCast", &luna_wrapper_wxImageHistogram::_bind_dynCast},
	{"__eq", &luna_wrapper_wxImageHistogram::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxImageHistogram >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxImageHistogram >::enumValues[] = {
	{0,0}
};


